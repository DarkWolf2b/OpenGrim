#!/usr/bin/env python3
"""Fold decrypted constants back into the decompiled payload sources.

Reads analysis/decrypted/full-dump.jsonl (produced by tools/decryptor/PoolDump
under Wine: per-indy-site (class, bsm, int A, raw long B) -> literal value) and
rewrites each decompiled call
    <cls>.<bsm>("<name>", (int)A, (long)(0x...L ^ l2))
in analysis/decompiled/payload-named/sixtwo/<cid>.java with the literal value.

Output: analysis/decompiled/payload-decrypted/sixtwo/<cid>.java
"""
import json, os, re, sys

ROOT = '/workspace'
DUMP = f'{ROOT}/analysis/decrypted/full-dump.jsonl'
SRC = f'{ROOT}/analysis/decompiled/payload-named/sixtwo'
OUT = f'{ROOT}/analysis/decompiled/payload-decrypted/sixtwo'
CLASSES = f'{ROOT}/analysis/decrypted/module-classes.txt'

os.makedirs(OUT, exist_ok=True)

# (cls, bsm, A, B) -> value
lut = {}
per_class_calls = {}
per_class_hits = {}
for line in open(DUMP):
    s = json.loads(line)
    if s.get('raw') is None or len(s['raw']) < 2:
        continue
    A, B = s['raw'][0], s['raw'][1]
    if not isinstance(A, int) or not isinstance(B, int):
        continue
    lut[(s['class'], s['bsm'], A, B)] = s['value']
    per_class_calls[s['class']] = per_class_calls.get(s['class'], 0) + 1

CALL_RE = re.compile(
    r'(\w+)\.(a[A-Za-z]{1,3}|[A-Za-z]{1,3})\(\s*"([^"]*)"\s*,\s*'
    r'(?:\(int\)\s*)?(-?\d+)\s*,\s*\(long\)\s*\(\s*'
    r'((?:0[xX])?[0-9A-Fa-f]+)[Ll]?\s*\^\s*(\w+)\s*\)\s*\)')

GENERIC_RE = re.compile(
    r'(?:\w+\.)?(a\w+)\s*<\s*"([^"]*)"\s*>\s*\(\s*'
    r'(?:\(int\)\s*)?(-?\d+)\s*,\s*'
    r'(?:'
    r'\(long\)\s*\(\s*((?:0[xX])?[0-9A-Fa-f]+)[Ll]?\s*\^\s*(\w+)\s*\)'
    r'|'
    r'((?:0[xX])?[0-9A-Fa-f]+)[Ll]?\s*\^\s*(\w+)'
    r')\s*\)')

def to_int(tok):
    tok = tok.rstrip('Ll')
    return int(tok, 16) if tok.lower().startswith('0x') else int(tok)

def fold(src, cls_key):
    """Replace both rendered indy forms with literal values."""
    hits = []

    def repl(m, bsm, A, B):
        key = (cls_key, bsm, int(A), to_int(B))
        if key in lut:
            v = lut[key]
            hits.append(1)
            return java_str(v) if isinstance(v, str) else str(v)
        misses.append(key)
        return m.group(0)

    misses = []
    def sub_qualified(m):
        owner, bsm, iname, A, B, local = m.groups()
        return repl(m, bsm, A, B)

    def sub_generic(m):
        bsm = m.group(1)
        A = m.group(3)
        B = m.group(4) if m.group(4) is not None else m.group(6)
        return repl(m, bsm, A, B)

    src = CALL_RE.sub(sub_qualified, src)
    src = GENERIC_RE.sub(sub_generic, src)
    return src, len(hits), misses

def java_str(v):
    out = '"'
    for ch in v:
        if ch == '"': out += '\\"'
        elif ch == '\\': out += '\\\\'
        elif ch == '\n': out += '\\n'
        elif ch == '\r': out += '\\r'
        elif ch == '\t': out += '\\t'
        else: out += ch
    return out + '"'

total, replaced, missed = 0, 0, 0
all_misses = []
targets = [l.strip() for l in open(CLASSES) if l.strip()]
for cid in targets:
    short = cid.removeprefix('sixtwo.')
    path = os.path.join(SRC, f'{short}.java')
    if not os.path.exists(path):
        continue
    src = open(path, errors='ignore').read()
    cls_key = cid if cid.startswith('sixtwo.') else f'sixtwo.{cid}'

    src2, n, misses = fold(src, cls_key)
    all_misses.extend((cls_key,) + m for m in misses)
    total += n + len(misses)
    replaced += n
    per_class_hits[cls_key] = n
    if src2 != src:
        with open(os.path.join(OUT, f'{short}.java'), 'w') as f:
            f.write(src2)

# collision check: same key with different values?
key_vals = {}
collisions = 0
for line in open(DUMP):
    s = json.loads(line)
    r = s.get('raw')
    if not r or len(r) < 2 or not isinstance(r[0], int) or not isinstance(r[1], int):
        continue
    k = (s['class'], s['bsm'], r[0], r[1])
    if k in key_vals and key_vals[k] != s['value']:
        collisions += 1
    key_vals[k] = s['value']

print(f"lut entries: {len(lut)}  (colliding keys with differing values: {collisions})")
print(f"call sites matched by regex: {total}")
print(f"replaced with literal: {replaced}")
print(f"unresolved (left as-is): {total - replaced}")
zero = [c for c in targets if per_class_hits.get(c, 0) == 0]
print(f"classes with 0 replacements: {len(zero)}: {zero[:10]}")
