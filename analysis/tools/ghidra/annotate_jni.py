#!/usr/bin/env python3
"""Annotate raw handler decompiles: rewrite JNIEnv vtable-offset calls into
real JNI function names (parsed from the OpenJDK 21 jni.h struct), annotate
known helper functions, and mark rdtsc noise.

Usage: annotate_jni.py <in-dir> <out-dir> [jni.h]
Input:  analysis/ghidra/handlers-dump/*.c (raw pyghidra output)
Output: same filenames with readable annotations.
"""
import re
import sys
import os
import json
import glob

def jni_table(jni_h):
    """Parse struct JNINativeInterface_ member order -> [(index, name)]."""
    text = open(jni_h, encoding='utf8', errors='replace').read()
    body = text.split('struct JNINativeInterface_ {', 1)[1].split('\n};', 1)[0]
    # split members at top-level semicolons (brace depth 0)
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

def main():
    indir = sys.argv[1]
    outdir = sys.argv[2]
    jni_h = sys.argv[3] if len(sys.argv) > 3 else '/usr/lib/jvm/java-21-openjdk-amd64/include/jni.h'
    table = jni_table(jni_h)
    os.makedirs(outdir, exist_ok=True)
    print(f'JNI table: {len(table)} functions; '
          f'GetVersion@{4*8:#x} FindClass@{table.index("FindClass")*8:#x} '
          f'GetMethodID@{table.index("GetMethodID")*8:#x} '
          f'CallObjectMethod@{table.index("CallObjectMethod")*8:#x}')

    known_helpers = {
        'FUN_190dd72e0': 'BLOB_DECRYPTOR(image-addr,resolved-ptr,len)',
        'FUN_190ddfc90': 'HELPER_callstatic-wrapper',
        'chacha_block': 'CHACHA_BLOCK',
        'chacha_block_8': 'CHACHA_BLOCK_8',
    }

    # pattern: (**(code **)(EXPR + 0xNNN))(ARGS)  — JNIEnv vtable call
    vcall = re.compile(r'\(\*\*\(code \*\*\)\(([^()+]+?) \+ (0x[0-9a-fA-F]+)\)\)')

    # pattern: (**(code **)(*EXPR + 0xNNN))  — env deref then vtable
    vcall2 = re.compile(r'\(\*\*\(code \*\*\)\(\*([A-Za-z_][\w$]*) \+ (0x[0-9a-fA-F]+)\)\)')

    stats = {'vtable_calls': 0, 'unknown_offsets': {}}

    def sub_fn(m):
        off = int(m.group(2), 16)
        idx = off // 8
        if off % 8 == 0 and 0 <= idx < len(table):
            stats['vtable_calls'] += 1
            return f'JNI->{table[idx]}'
        stats['unknown_offsets'][hex(off)] = stats['unknown_offsets'].get(hex(off), 0) + 1
        return m.group(0)

    for path in glob.glob(os.path.join(indir, '*.c')):
        data = open(path, encoding='utf8', errors='replace').read()
        out = vcall2.sub(sub_fn, data)
        out = vcall.sub(sub_fn, out)
        for fn, label in known_helpers.items():
            out = out.replace(fn, label)
        # rdtsc noise marking
        out = re.sub(r'(^|\n)(\s*)rdtsc\(\);', r'\1\2/*ANTITRACE*/ rdtsc();', out)
        outpath = os.path.join(outdir, os.path.basename(path))
        open(outpath, 'w').write(out)
    json_s = {'vtable_calls': stats['vtable_calls'], 'unknown_offsets': stats['unknown_offsets']}
    print('annotated ->', outdir)
    print(json.dumps(json_s, indent=1)[:2000])

if __name__ == '__main__':
    main()
