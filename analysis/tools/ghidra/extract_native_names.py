#!/usr/bin/env python3
"""Extract per-class native method names from the decompiled payload sources.
Output: JSON {class: [native method names]}."""
import os
import re
import json

SRC = '/workspace/analysis/decompiled/payload-named/sixtwo'
OUT = '/workspace/analysis/ghidra/native-names.json'

LINE_NATIVE = re.compile(r'\bnative\b')
NAME_RE = re.compile(r'(\w+)\s*\(')

result = {}
total = 0
for fn in sorted(os.listdir(SRC)):
    if not fn.endswith('.java'):
        continue
    cid = fn[:-5]
    names = set()
    for line in open(os.path.join(SRC, fn), errors='ignore'):
        if not LINE_NATIVE.search(line) or 'class ' in line:
            continue
        m = NAME_RE.search(line)
        if m and not line.strip().startswith(('@', '//')):
            names.add(m.group(1))
    if names:
        result[cid] = sorted(names)
        total += len(names)

with open(OUT, 'w') as f:
    json.dump(result, f, indent=1)
print('classes: %d, native methods total: %d -> %s' % (len(result), total, OUT))
