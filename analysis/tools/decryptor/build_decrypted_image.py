#!/usr/bin/env python3
"""Build a decrypted image of j2cc_natives.dll from a WMEM2 process dump.

Reads the WMEM2 dump produced by dump_wine_mem.py (regions + bytes of the
whole wine JVM), locates the loaded native DLL by matching the known
runtime<->image address delta from the bind logs, then overlays the
in-memory (decrypted) section contents onto the original file layout.

Output:
  <out>.dll           - image with decrypted section contents (file layout)
  <out>.manifest.json - per-section 4KB-page change counts vs the original file
"""
import json
import struct
import sys
import os

DUMP_DIR = sys.argv[1] if len(sys.argv) > 1 else 'win/dump'
ORIG_DLL = sys.argv[2] if len(sys.argv) > 2 else 'win/tmp/native/jna1.21.11'
OUT_BASE = sys.argv[3] if len(sys.argv) > 3 else 'analysis/ghidra/dumps/jna-decrypted'
RUNTIME_JSON = sys.argv[4] if len(sys.argv) > 4 else 'analysis/ghidra/native-handlers-runtime-full.jsonl'
IMAGE_JSON = sys.argv[5] if len(sys.argv) > 5 else 'analysis/ghidra/native-handlers.json'

PAGE = 0x1000

def load_wmem(path):
    with open(path, 'rb') as f:
        magic = f.read(5)
        assert magic == b'WMEM2', magic
        (nregions,) = struct.unpack('<I', f.read(4))
        regions = []
        for _ in range(nregions):
            s, e, plen, pb = struct.unpack('<QQII', f.read(24))
            perms = f.read(plen).decode()
            pbname = f.read(pb).decode()
            data = f.read(e - s)
            regions.append((s, e, perms, pbname, data))
        return regions

def find(region_bytes, needle, limit=None):
    i = region_bytes.find(needle)
    return i if 0 <= i and (limit is None or i < limit) else -1

def main():
    # 1. bind addresses from THIS run (JSONL)
    rt = []
    for line in open(RUNTIME_JSON):
        d = json.loads(line)
        if 'sixtwo' in d.get('class', ''):
            rt.append((int(d['addr'], 16), d))
    assert rt, 'no sixtwo bindings in ' + RUNTIME_JSON
    lo = min(a for a, _ in rt)
    hi = max(a for a, _ in rt)
    print(f'{len(rt)} sixtwo bindings in {RUNTIME_JSON} ({hex(lo)}..{hex(hi)})')

    # 2. parse original PE headers first (need image_base/size to recognize the loaded header)
    orig = open(ORIG_DLL, 'rb').read()
    e_lfanew = struct.unpack_from('<I', orig, 0x3c)[0]
    assert orig[e_lfanew:e_lfanew + 4] == b'PE\0\0'
    coff = e_lfanew + 4
    machine, nsec, _, _, _, optsize, _ = struct.unpack_from('<HHIIIHH', orig, coff)
    opt = coff + 20
    magic = struct.unpack_from('<H', orig, opt)[0]
    assert magic == 0x20b, hex(magic)  # PE32+
    image_base = struct.unpack_from('<Q', orig, opt + 24)[0]
    size_of_image = struct.unpack_from('<I', orig, opt + 56)[0]
    sec_off = opt + optsize
    sections = []
    for i in range(nsec):
        s = sec_off + i * 40
        name = orig[s:s + 8].rstrip(b'\0').decode()
        vsize, vaddr, rawsize, rawptr = struct.unpack_from('<IIII', orig, s + 8)
        sections.append((name, vaddr, vsize, rawptr, rawsize))
    print(f'PE: image_base={image_base:#x} size_of_image={size_of_image:#x} sections={[s[0] for s in sections]}')

    # 3. find the dump file and locate the loaded image base by its PE header
    dumps = [os.path.join(DUMP_DIR, f) for f in os.listdir(DUMP_DIR) if f.startswith('mem-pid')]
    assert dumps, 'no dump files'
    dump = max(dumps, key=os.path.getmtime)
    print('loading', dump)
    regions = load_wmem(dump)
    print(f'{len(regions)} regions')

    def read_mem(start, end):
        """stitch bytes across regions; zero-fill gaps"""
        out = bytearray(end - start)
        for s, e, perms, pbname, data in regions:
            if e <= start or s >= end:
                continue
            src_lo = max(s, start)
            src_hi = min(e, end)
            if src_hi > src_lo:
                out[src_lo - start:src_hi - start] = data[src_lo - s:src_hi - s]
        return bytes(out)

    header_sig = orig[e_lfanew:e_lfanew + 4]

    runtime_base = None
    # fast path: Wine maps the image file-backed; regions carry the mapped path
    dll_regions = [(s, e, perms, pbname) for s, e, perms, pbname, _ in regions
                   if 'jna1.21.11' in pbname]
    print(f'{len(dll_regions)} regions mapped from jna1.21.11')
    if dll_regions:
        cand = min(s for s, _, _, _ in dll_regions)
        hdr = read_mem(cand, cand + 0x400)
        if hdr[:2] == b'MZ':
            lf = struct.unpack_from('<I', hdr, 0x3c)[0]
            if hdr[lf:lf + 4] == header_sig:
                runtime_base = cand
    if runtime_base is None:
        # fallback: scan for the PE header with matching ImageBase/SizeOfImage
        for s, e, perms, pbname, data in regions:
            page = 0
            while page + 0x400 <= len(data):
                idx = data.find(b'MZ', page)
                if idx < 0:
                    break
                page = idx + 1
                if idx % PAGE:
                    continue
                try:
                    lf = struct.unpack_from('<I', data, idx + 0x3c)[0]
                    if idx + lf + 4 > len(data) or data[idx + lf:idx + lf + 4] != header_sig:
                        continue
                    c2 = idx + lf + 4
                    _, ns2, _, _, _, os2, _ = struct.unpack_from('<HHIIIHH', data, c2)
                    if ns2 != nsec or os2 != optsize:
                        continue
                    o2 = c2 + 20
                    ib2 = struct.unpack_from('<Q', data, o2 + 24)[0]
                    si2 = struct.unpack_from('<I', data, o2 + 56)[0]
                    if ib2 == image_base and si2 == size_of_image:
                        runtime_base = s + idx
                        break
                except struct.error:
                    continue
            if runtime_base is not None:
                break
    assert runtime_base is not None, 'loaded image header not found in dump'
    print(f'loaded image base in dump: {runtime_base:#x}')

    # 4. sanity: bind addresses must land inside [runtime_base, runtime_base+size_of_image)
    assert runtime_base <= lo and hi < runtime_base + size_of_image, (hex(runtime_base), hex(lo), hex(hi))
    print(f'{len(rt)} sixtwo bindings inside image span OK ({hex(lo)}..{hex(hi)})')

    # 5. build decrypted image (file layout) + manifest
    out = bytearray(orig)
    # stretch file if image is larger than file (bss-ish); keep simple: overlay per section
    manifest = {'runtime_base': runtime_base, 'image_base': image_base, 'sections': {}}
    for name, vaddr, vsize, rawptr, rawsize in sections:
        mem = read_mem(runtime_base + vaddr, runtime_base + vaddr + vsize)
        changed = 0
        total_pages = (min(vsize, rawsize) + PAGE - 1) // PAGE
        for p in range(total_pages):
            fo = rawptr + p * PAGE
            mo = p * PAGE
            if fo + PAGE <= len(orig) and mo + PAGE <= len(mem):
                if orig[fo:fo + PAGE] != mem[mo:mo + PAGE]:
                    changed += 1
            elif mo + PAGE <= len(mem):
                changed += 1  # beyond original file = new content
            page = mem[mo:mo + PAGE]
            if fo + PAGE <= len(out) and len(page) == PAGE:
                out[fo:fo + PAGE] = page
        manifest['sections'][name] = {
            'vaddr': hex(vaddr), 'vsize': vsize, 'rawsize': rawsize,
            'changed_pages': changed, 'total_pages': total_pages,
        }
        print(f'  {name:8s} vaddr={vaddr:#010x} changed {changed}/{total_pages} pages')
    os.makedirs(os.path.dirname(OUT_BASE) or '.', exist_ok=True)
    open(OUT_BASE + '.dll', 'wb').write(out)
    json.dump(manifest, open(OUT_BASE + '.manifest.json', 'w'), indent=1)
    print('wrote', OUT_BASE + '.dll', len(out), 'bytes')

if __name__ == '__main__':
    main()
