#!/usr/bin/env python3
"""Extract native method (name, descriptor) pairs per class from the ORIGINAL
payload class files (intermediary descriptors — what the DLL registers).
Output: JSON {class: [[name, sig], ...]}"""
import os
import re
import json
import subprocess

CLASSES = '/workspace/analysis/jars/payload-raw/sixtwo'
OUT = '/workspace/analysis/ghidra/native-sigs.json'

JAVAP = '/usr/lib/jvm/java-21-openjdk-amd64/bin/javap'

result = {}
files = sorted(f for f in os.listdir(CLASSES) if f.endswith('.class'))
for i, fn in enumerate(files):
    cid = fn[:-6]
    try:
        out = subprocess.run([JAVAP, '-s', '-p', '-cp', os.path.dirname(CLASSES), 'sixtwo.' + cid],
                             capture_output=True, text=True, timeout=30).stdout
    except Exception:
        continue
    pairs = []
    cur_name = None
    for line in out.splitlines():
        line = line.strip()
        dm = re.match(r'descriptor:\s*(\S+)', line)
        if re.match(r'.*\b(\w+)\(.*', line) and 'native' in line and 'abstract' not in line:
            nm = re.search(r'\b(\w+)\(', line)
            if nm:
                cur_name = nm.group(1)
        elif dm and cur_name:
            pairs.append([cur_name, dm.group(1)])
            cur_name = None
    if pairs:
        result[cid] = pairs

with open(OUT, 'w') as f:
    json.dump(result, f, indent=1)
total = sum(len(v) for v in result.values())
print('classes: %d, native (name,sig) pairs: %d -> %s' % (len(result), total, OUT))
