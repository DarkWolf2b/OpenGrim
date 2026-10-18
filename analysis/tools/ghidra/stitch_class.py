#!/usr/bin/env python3
"""Produce a self-contained readable corpus per native class.

Combines, for one class:
  1. handler stubs (handlers-full-annotated/sixtwo_<cls>.c)
  2. every continuation block reachable from those stubs, via the relocated
     jump tables (UNK_<image-addr> -> tables.json) and direct FUN_ calls into
     the continuation-block set (blocks-resume.jsonl)
  3. inline resolution of constant-pool blob refs (BLOB_DECRYPTOR ... +off,len)
  4. JNI vtable-offset naming in continuation blocks (raw 0x720-style offsets)

Usage: stitch_class.py <class> [<class> ...]
Output: analysis/ghidra/handlers-stitched/sixtwo_<cls>.c
"""
import json
import os
import re
import struct
import sys

ROOT = '/workspace'
HANDLERS = f'{ROOT}/analysis/ghidra/handlers-full-annotated'
BLOCKS_JSONL = f'{ROOT}/analysis/ghidra/continuations/blocks-resume.jsonl'
TABLES = f'{ROOT}/analysis/ghidra/continuations/tables.json'
OUTDIR = f'{ROOT}/analysis/ghidra/handlers-stitched'
V2 = f'{ROOT}/analysis/ghidra/dumps/jna-decrypted-v2.dll'
ORIG = f'{ROOT}/win/tmp/native/jna1.21.11'
JNI_H = '/usr/lib/jvm/java-21-openjdk-amd64/include/jni.h'

IMAGE_BASE = 0x180000000

# ---------- JNI table ----------
def jni_table(jni_h):
    text = open(jni_h, encoding='utf8', errors='replace').read()
    body = text.split('struct JNINativeInterface_ {', 1)[1].split('\n};', 1)[0]
    members = []
    depth = 0
    cur = []
    for ch in body:
        if ch == '(':
            depth += 1
        elif ch == ')':
            depth -= 1
        cur.append(ch)
        if ch == ';' and depth == 0:
            member = ''.join(cur)
            cur = []
            m = re.search(r'JNICALL\s+\*(\w+)', member)
            if m:
                members.append(m.group(1))
            else:
                m2 = re.search(r'void\s*\*\s*(reserved\d+)', member)
                if m2:
                    members.append(m2.group(1))
    return members

JNI = jni_table(JNI_H)

def annotate_jni(code):
    def sub(m):
        off = int(m.group(2), 16)
        idx = off // 8
        if off % 8 == 0 and 0 <= idx < len(JNI):
            return f'({m.group(1)} + JNI->{JNI[idx]} /*{m.group(2)}*/)'
        return m.group(0)
    code = re.sub(r'\(\*([A-Za-z_][\w$]*) \+ (0x[0-9a-fA-F]+)\)', sub, code)
    return code

# ---------- pool blob resolution ----------
struct_impl = None

def load_image():
    global struct_impl
    if struct_impl is not None:
        return struct_impl
    img = open(V2, 'rb').read()
    orig = open(ORIG, 'rb').read()
    e = struct.unpack_from('<I', orig, 0x3c)[0]
    coff = e + 4
    nsec = struct.unpack_from('<H', orig, coff + 2)[0]
    optsize = struct.unpack_from('<H', orig, coff + 16)[0]
    secoff = coff + 20 + optsize
    secs = []
    for i in range(nsec):
        s = secoff + i * 40
        vsize, vaddr, rawsize, rawptr = struct.unpack_from('<IIII', orig, s + 8)
        secs.append((vaddr, vsize, rawptr, rawsize))

    def read_rva(rva, n):
        for vaddr, vsize, rawptr, rawsize in secs:
            if vaddr <= rva < vaddr + vsize:
                fo = rawptr + (rva - vaddr)
                return img[fo:fo + n]
        return None

    pool_runtime = struct.unpack('<Q', read_rva(0x301ee50, 8))[0]
    RUNTIME_BASE = 0x6fffe7c10000
    pool_rva = pool_runtime - RUNTIME_BASE

    def blob(off, ln):
        b = read_rva(pool_rva + off, ln)
        if b is None:
            return None
        parts = [p.decode('utf8', 'replace') for p in b.split(b'\x00') if p]
        return ' | '.join(parts)

    struct_impl = blob
    return struct_impl

BLOB_RE = re.compile(r'BLOB_DECRYPTOR\([^)]*\)\(([^)]*?)\+ (0x[0-9a-fA-F]+),\s*(0x[0-9a-fA-F]+|\d+)\)')

def annotate_blobs(code):
    blob = load_image()
    def sub(m):
        off = int(m.group(2), 16)
        ln_s = m.group(3)
        ln = int(ln_s, 16) if ln_s.startswith('0x') else int(ln_s)
        contents = blob(off, ln)
        if contents:
            return (f'{m.group(0)}\n      /* POOL[{off:#x},{ln:#x}]: '
                    f'{contents[:600]} */')
        return m.group(0)
    return BLOB_RE.sub(sub, code)

# ---------- block graph ----------
UNK_RE = re.compile(r'UNK_([0-9a-fA-F]{8,})')
DAT_RE = re.compile(r'\b_DAT_([0-9a-fA-F]{8,})')
FUN_RE = re.compile(r'\bFUN_([0-9a-fA-F]{8,})\b')

RUNTIME_BASE = 0x6fffe7c10000
_orig_img = open(V2, 'rb').read()
_orig_file = open(ORIG, 'rb').read()
_e = struct.unpack_from('<I', _orig_file, 0x3c)[0]
_coff = _e + 4
_nsec = struct.unpack_from('<H', _orig_file, _coff + 2)[0]
_optsize = struct.unpack_from('<H', _orig_file, _coff + 16)[0]
_secoff = _coff + 20 + _optsize
_SECS = []
for _i in range(_nsec):
    _s = _secoff + _i * 40
    _vsize, _vaddr, _rawsize, _rawptr = struct.unpack_from('<IIII', _orig_file, _s + 8)
    _SECS.append((_vaddr, _vsize, _rawptr, _rawsize))

def read_qwords(rva, max_n=64):
    """Read runtime pointer values starting at rva until non-runtime value."""
    out = []
    for vaddr, vsize, rawptr, rawsize in _SECS:
        if vaddr <= rva < vaddr + vsize:
            fo = rawptr + (rva - vaddr)
            for i in range(max_n):
                if fo + 8 * i + 8 > len(_orig_img):
                    break
                val = struct.unpack_from('<Q', _orig_img, fo + 8 * i)[0]
                if 0x6fffe0000000 <= val < 0x700000000000:
                    out.append(val - RUNTIME_BASE + IMAGE_BASE)
                else:
                    break
            break
    return out

blocks = {}

def main():
    blocks = {}
    with open(BLOCKS_JSONL) as f:
        for line in f:
            rec = json.loads(line)
            blocks[rec['rva']] = rec['code']

    tables = json.load(open(TABLES))
    os.makedirs(OUTDIR, exist_ok=True)

    for cls in sys.argv[1:]:
        path = os.path.join(HANDLERS, f'sixtwo_{cls}.c')
        if not os.path.exists(path):
            print(f'{cls}: no handler file, skipped')
            continue
        text = open(path, encoding='utf8').read()
        sections = re.split(r'(?=// ===== )', text)

        included = {}          # block rva -> code
        queue = []
        unresolved_tables = set()

        def add_block(img_addr, src):
            rva = f'0x{img_addr - IMAGE_BASE:x}'
            if rva in blocks and rva not in included:
                included[rva] = blocks[rva]
                queue.append(rva)

        def visit_code(code):
            for m in UNK_RE.finditer(code):
                rva = int(m.group(1), 16) - IMAGE_BASE
                key = f'0x{rva:x}'
                if key in tables:
                    for tgt in tables[key]:
                        add_block(IMAGE_BASE + int(tgt, 16), key)
                else:
                    unresolved_tables.add(key)
            for m in DAT_RE.finditer(code):
                rva = int(m.group(1), 16) - IMAGE_BASE
                for img_addr in read_qwords(rva):
                    add_block(img_addr, f'_DAT_{m.group(1)}')
            for m in FUN_RE.finditer(code):
                add_block(int(m.group(1), 16), 'FUN_')

        for sec in sections:
            visit_code(sec)

        while queue:
            rva = queue.pop()
            visit_code(included[rva])

        missing = [r for r, c in included.items() if c is None]
        out = []
        out.append(f'// ===== STITCHED CORPUS: sixtwo.{cls} =====')
        out.append(f'// handlers: {sum(1 for s in sections if s.startswith("// ====="))}'
                   f'  continuation blocks: {len(included) - len(missing)}'
                   f'  unresolved table targets: {len(missing)}')
        if unresolved_tables:
            out.append(f'// tables not in tables.json: {sorted(unresolved_tables)[:20]}')
        out.append('')
        for sec in sections:
            if not sec.strip():
                continue
            out.append(annotate_blobs(annotate_jni(sec)))
        out.append('// ===== CONTINUATION BLOCKS =====')
        for rva in sorted(included, key=lambda r: int(r, 16)):
            code = included[rva]
            if code is None:
                continue
            out.append(f'// ----- block @ rva {rva} -----')
            out.append(annotate_jni(code))
        dst = os.path.join(OUTDIR, f'sixtwo_{cls}.c')
        open(dst, 'w').write('\n'.join(out))
        print(f'{cls}: {len(included) - len(missing)} blocks '
              f'({len(missing)} unresolved) -> {dst}')

if __name__ == '__main__':
    main()
