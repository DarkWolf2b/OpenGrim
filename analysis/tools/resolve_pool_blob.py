#!/usr/bin/env python3
"""Resolve a native constant-pool blob reference to its contents.

Every native handler starts with BLOB_DECRYPTOR(env, *(pool_global) + off, len)
where pool_global = 0x18301ee50 (single shared pool base across the payload).
The bytes at pool_base+off (length len) are a constant-table descriptor:
type-tagged entries with NUL separators holding class names, method names,
field descriptors and string handles.

Usage:
  resolve_pool_blob.py <hex-offset-from-pool-base> <len>     # e.g. 0x3806 0xbf
  resolve_pool_blob.py --scan <class-file>                   # list all blob refs in a handler file
"""
import sys
import struct

IMG = 'analysis/ghidra/dumps/jna-decrypted-v2.dll'
RUNTIME_BASE = 0x6fffe7c10000
POOL_PTR_RVA = 0x301ee50

img = open(IMG, 'rb').read()
orig = open('win/tmp/native/jna1.21.11', 'rb').read()

e = struct.unpack_from('<I', orig, 0x3c)[0]; coff = e + 4
nsec = struct.unpack_from('<H', orig, coff + 2)[0]
optsize = struct.unpack_from('<H', orig, coff + 16)[0]
secoff = coff + 20 + optsize
SECS = []
for i in range(nsec):
    s = secoff + i * 40
    name = orig[s:s + 8].rstrip(b'\0').decode()
    vsize, vaddr, rawsize, rawptr = struct.unpack_from('<IIII', orig, s + 8)
    SECS.append((name, vaddr, vsize, rawptr, rawsize))

def fo_of(rva):
    for name, vaddr, vsize, rawptr, rawsize in SECS:
        if vaddr <= rva < vaddr + vsize:
            return rawptr + (rva - vaddr)
    return None

def read_rva(rva, n):
    fo = fo_of(rva)
    if fo is None:
        return None
    return img[fo:fo + n]

POOL_RUNTIME = struct.unpack('<Q', read_rva(POOL_PTR_RVA, 8))[0]
POOL_RVA = POOL_RUNTIME - RUNTIME_BASE

def parse_descriptor(blob):
    """Split the descriptor blob into tagged entries."""
    # entries are NUL-separated; tag = first byte of each entry (observed: ';'=?, others)
    out = []
    for part in blob.split(b'\x00'):
        if not part:
            continue
        out.append(part)
    return out

def show(off, ln):
    blob = read_rva(POOL_RVA + off, ln)
    if blob is None:
        print('blob outside image')
        return
    print(f'pool rva {POOL_RVA:#x} + {off:#x}, len {ln}:')
    print(repr(blob))
    print()
    for part in parse_descriptor(blob):
        try:
            print('  %r' % part.decode('utf8', 'replace'))
        except Exception:
            print('  %r' % part)

if __name__ == '__main__':
    if sys.argv[1] == '--scan':
        import re
        txt = open(sys.argv[2]).read()
        for m in re.finditer(r'\+ (0x[0-9a-fA-F]+),(0x[0-9a-fA-F]+)\)', txt):
            off, ln = int(m.group(1), 16), int(m.group(2), 16)
            print(f'BLOB(off={off:#x}, len={ln})')
        for m in re.finditer(r'\+ (0x[0-9a-fA-F]+),(0x[0-9a-fA-F]+|0x\d+)\)', txt):
            pass
        # decimal lengths too
        for m in re.finditer(r'\+ (0x[0-9a-fA-F]+),(\d+)\)', txt):
            off, ln = int(m.group(1), 16), int(m.group(2))
            print(f'BLOB(off={off:#x}, len={ln})')
    else:
        show(int(sys.argv[1], 16), int(sys.argv[2], 0))
