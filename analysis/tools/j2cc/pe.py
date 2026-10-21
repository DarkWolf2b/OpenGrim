#!/usr/bin/env python3
"""Minimal PE reader for the j2cc-transpiled Grim native image.

Only the pieces the CFG recovery tool needs:

* section mapping (VA -> file offset) with the decrypted image overlay
* the base-relocation table (every 8-byte pointer the linker emitted),
  which gives exact extents for j2cc jump tables and continuation slots
* the .pdata function table (exact native function bounds)
* the decrypted j2cc constant pool (`0x18301ee40` in the image), so any
  `BLOB(off, len)` reference resolves to the class/method/string descriptor
  the transpiled Java used.

The decrypted image (`analysis/ghidra/dumps/jna-decrypted-v2.dll`) is the
file layout with the in-memory (lazily decrypted) sections overlaid.  Code
bytes are identical to the shipped DLL; only .data (pool, globals) differs.
"""
import bisect
import os
import struct

ORIG = os.path.join(os.path.dirname(__file__), '..', '..', '..',
                    'binaries', 'native', 'jna1.21.11')
DECRYPTED = os.path.join(os.path.dirname(__file__), '..', '..', 'ghidra',
                         'dumps', 'jna-decrypted-v2.dll')

IMAGE_BASE = 0x180000000
# pool pointer cell: holds a VA pointing at POOL_VA, whose contents are the
# concatenated j2cc constant pool (NUL-separated descriptors).
POOL_CELL = 0x18301ee50
POOL_VA = 0x18301ee40

IMAGE_REL_BASED_DIR64 = 10
# The decrypted memory image stores relocated pointers as runtime VAs.  The
# hooked-run delta (image 0x18f123e90 == runtime 0x6ffff6d33e90) is constant
# for the shipped build; runtime VA - RUNTIME_DELTA == image VA.
RUNTIME_DELTA = 0x6ffe67c10000


def _parse_sections(buf):
    e_lfanew = struct.unpack_from('<I', buf, 0x3c)[0]
    assert buf[e_lfanew:e_lfanew + 4] == b'PE\0\0', 'not a PE'
    coff = e_lfanew + 4
    nsec = struct.unpack_from('<H', buf, coff + 2)[0]
    optsize = struct.unpack_from('<H', buf, coff + 16)[0]
    secoff = coff + 20 + optsize
    secs = []
    for i in range(nsec):
        s = secoff + i * 40
        name = buf[s:s + 8].rstrip(b'\0').decode('ascii', 'replace')
        vsize, vaddr, rawsize, rawptr = struct.unpack_from('<IIII', buf, s + 8)
        chars = struct.unpack_from('<I', buf, s + 36)[0]
        secs.append(dict(name=name, va=IMAGE_BASE + vaddr, vsize=vsize,
                         raw=rawptr, rawsize=rawsize, chars=chars))
    return secs


class PEImage:
    def __init__(self, orig=ORIG, decrypted=DECRYPTED):
        self.orig_path = orig
        self.dec_path = decrypted if decrypted and os.path.exists(decrypted) else orig
        with open(orig, 'rb') as f:
            self.orig = f.read()
        with open(self.dec_path, 'rb') as f:
            self.img = f.read()
        self.sections = _parse_sections(self.orig)
        self.code_lo = min(s['va'] for s in self.sections
                           if s['chars'] & 0x20000000)
        self.code_hi = max(s['va'] + s['vsize'] for s in self.sections
                           if s['chars'] & 0x20000000)
        self._parse_relocs()
        self._parse_pdata()

    # ---- mapping -------------------------------------------------------
    def _sec_for(self, va):
        for s in self.sections:
            if s['va'] <= va < s['va'] + max(s['vsize'], s['rawsize']):
                return s
        return None

    def va_to_off(self, va):
        s = self._sec_for(va)
        if s is None:
            raise ValueError('VA %#x outside image' % va)
        delta = va - s['va']
        if delta >= s['rawsize']:
            return None  # zero-filled virtual tail
        return s['raw'] + delta

    def read(self, va, n, decrypted=True):
        """Read n bytes at VA.  Uses the decrypted overlay unless the range is
        outside the raw section data (returns zeroes like the loader)."""
        buf = self.img if decrypted else self.orig
        s = self._sec_for(va)
        if s is None:
            raise ValueError('VA %#x outside image' % va)
        delta = va - s['va']
        if delta >= s['rawsize']:
            return b'\0' * n
        off = s['raw'] + delta
        out = buf[off:off + n]
        if len(out) < n:
            out += b'\0' * (n - len(out))
        return out

    def u8(self, va):
        return self.read(va, 1)[0]

    def u32(self, va):
        return struct.unpack('<I', self.read(va, 4))[0]

    def u64(self, va):
        return struct.unpack('<Q', self.read(va, 8))[0]

    def i32(self, va):
        return struct.unpack('<i', self.read(va, 4))[0]

    def f32(self, va):
        return struct.unpack('<f', self.read(va, 4))[0]

    def cstr(self, va, limit=512):
        out = bytearray()
        while len(out) < limit:
            b = self.u8(va + len(out))
            if b == 0:
                break
            out.append(b)
        return out.decode('utf8', 'replace')

    def is_code(self, va):
        if not (self.code_lo <= va < self.code_hi):
            return False
        s = self._sec_for(va)
        return bool(s and (s['chars'] & 0x20000000))

    # ---- relocations ---------------------------------------------------
    def _parse_relocs(self):
        # data directory 5 = base relocations
        e_lfanew = struct.unpack_from('<I', self.orig, 0x3c)[0]
        opt = e_lfanew + 24
        magic = struct.unpack_from('<H', self.orig, opt)[0]
        dd = opt + (112 if magic == 0x20b else 96)
        reloc_rva, reloc_size = struct.unpack_from('<II', self.orig, dd + 5 * 8)
        reloc_off = self.va_to_off(IMAGE_BASE + reloc_rva)
        data = self.orig[reloc_off:reloc_off + reloc_size]
        slots, targets = [], []
        off = 0
        while off < len(data):
            page, size = struct.unpack_from('<II', data, off)
            if size == 0:
                break
            for i in range(8, size, 2):
                ent = struct.unpack_from('<H', data, off + i)[0]
                if (ent >> 12) != IMAGE_REL_BASED_DIR64:
                    continue
                va = IMAGE_BASE + page + (ent & 0xfff)
                slots.append(va)
                targets.append(self.u64(va))
            off += size
        self.reloc_slots = slots
        self.reloc_targets = targets
        self.reloc_map = dict(zip(slots, targets))
        self.reloc_set = set(slots)

    def reloc_target(self, slot):
        t = self.reloc_map.get(slot)
        if t is None:
            return None
        return self.norm_va(t)

    def norm_va(self, va):
        """Normalise a stored pointer to an image VA (runtime pointers in the
        decrypted overlay are relocated by RUNTIME_DELTA)."""
        if IMAGE_BASE <= va < IMAGE_BASE + 0x20000000 and self._sec_for(va) is not None:
            return va
        cand = va - RUNTIME_DELTA
        if self._sec_for(cand) is not None:
            return cand
        return va

    def reloc_run(self, base, maxlen=512):
        """Consecutive relocated qwords starting at `base` (jump-table extent)."""
        out = []
        va = base
        while len(out) < maxlen:
            t = self.reloc_map.get(va)
            if t is None:
                break
            out.append(self.norm_va(t))
            va += 8
        return out

    def xrefs_to(self, target, limit=None):
        """Slots whose relocated pointer equals `target`."""
        out = []
        for s, t in zip(self.reloc_slots, self.reloc_targets):
            if t == target:
                out.append(s)
                if limit and len(out) >= limit:
                    break
        return out

    # ---- .pdata --------------------------------------------------------
    def _parse_pdata(self):
        sec = next((s for s in self.sections if s['name'] == '.pdata'), None)
        if sec is None:
            self.funcs = []
            return
        data = self.orig[sec['raw']:sec['raw'] + sec['vsize']]
        funcs = []
        for o in range(0, len(data) - 11, 12):
            b, e, u = struct.unpack_from('<III', data, o)
            if b == 0:
                continue
            funcs.append((IMAGE_BASE + b, IMAGE_BASE + e, u))
        funcs.sort()
        self.funcs = funcs
        self._func_starts = [f[0] for f in funcs]

    def func_bounds(self, va):
        i = bisect.bisect_right(self._func_starts, va) - 1
        if i < 0:
            return None
        b, e, _ = self.funcs[i]
        if b <= va < e:
            return b, e
        return None

    def func_containing(self, va):
        return self.func_bounds(va)

    # ---- j2cc constant pool -------------------------------------------
    def pool_base(self):
        """Base of the plaintext string buffer.

        POOL_CELL points at a StringCpInfo struct:
            +0x00 char* ptr        <- plaintext buffer (POOL_VA + 0x20)
            +0x08 size_t n
            +0x10 StringCpInfo* self
        """
        p = self.norm_va(self.u64(POOL_VA))
        if self._sec_for(p) is not None:
            return p
        return POOL_VA + 0x20

    def pool(self, off, length=None):
        """Decrypted descriptor at pool+off (NUL-terminated unless length)."""
        base = self.pool_base()
        if length:
            raw = self.read(base + off, length)
            return raw.rstrip(b'\0').decode('utf8', 'replace')
        return self.cstr(base + off)


if __name__ == '__main__':
    import sys
    pe = PEImage()
    print('code %#x..%#x  relocs %d  funcs %d' %
          (pe.code_lo, pe.code_hi, len(pe.reloc_slots), len(pe.funcs)))
    if len(sys.argv) > 2:
        print(pe.func_bounds(int(sys.argv[1], 16)))
        print(repr(pe.pool(int(sys.argv[2], 16))))
