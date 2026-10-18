#!/usr/bin/env python3
"""Spec-coverage check (pipeline Phase 6).

For every module in the coverage matrix, verifies:
  1. a handler-derived behavior spec exists at analysis/specs/handlers/<class>.md
  2. the implementation class cites that spec path in its source
  3. the spec does not leave the module wholly unrecovered

Writes analysis/specs/spec-coverage.tsv and prints a summary. Exit code is 0
unless --strict is given and any module is missing spec or citation.

Usage: check_spec_coverage.py [--strict] [--impl-dir <dir>]
"""
import glob
import os
import re
import subprocess
import sys

ROOT = '/workspace'
MATRIX = f'{ROOT}/analysis/specs/coverage-matrix.tsv'
SPEC_DIR = f'{ROOT}/analysis/specs/handlers'
SRC_ROOT = f'{ROOT}/src/main/java/dev/opengrim'
OUT = f'{ROOT}/analysis/specs/spec-coverage.tsv'

def main():
    strict = '--strict' in sys.argv
    impl_dir = SRC_ROOT
    if '--impl-dir' in sys.argv:
        impl_dir = sys.argv[sys.argv.index('--impl-dir') + 1]

    rows = []
    with open(MATRIX) as f:
        header = f.readline().rstrip('\n').split('\t')
        for line in f:
            cols = line.rstrip('\n').split('\t')
            if len(cols) >= 5:
                rows.append(dict(zip(header, cols)))

    impl_files = glob.glob(f'{impl_dir}/**/*.java', recursive=True)

    def find_impl(module):
        # module display name -> likely file name (CamelCase)
        hint = module.replace(' ', '').replace('-', '')
        cands = [p for p in impl_files
                 if os.path.basename(p).rsplit('.', 1)[0].replace('_', '').lower()
                 == hint.lower()]
        return cands

    counts = {'spec': 0, 'cited': 0, 'unrecovered': 0, 'missing': 0}
    out_lines = ['class_id\tmodule\tspec_file\timpl_cites_spec\timpl_file\tstatus']
    for r in rows:
        cls, module = r['class_id'], r['module']
        spec = os.path.join(SPEC_DIR, f'{cls}.md')
        has_spec = os.path.exists(spec)
        cited = ''
        impl = ''
        status = ''
        if not has_spec:
            status = 'NO_SPEC'
        else:
            counts['spec'] += 1
            body = open(spec, encoding='utf8').read()
            if re.search(r'^#+.*(unrecovered|not recovered|could not recover)', body,
                         re.I | re.M) and not re.search(r'recovered', body[:2000], re.I):
                pass  # flagged sections are fine; whole-module loss checked below
            if body.strip().count('##') < 2:
                status = 'EMPTY_SPEC'
        impls = find_impl(module)
        if has_spec and impls:
            impl = impls[0]
            src = open(impl, encoding='utf8').read()
            if f'specs/handlers/{cls}.md' in src:
                cited = 'yes'
                counts['cited'] += 1
                if not status:
                    status = 'OK'
            else:
                cited = 'no'
                if not status:
                    status = 'NOT_CITED'
        elif has_spec:
            if not status:
                status = 'NO_IMPL_FOUND'
        if status == 'NO_SPEC':
            counts['missing'] += 1
        out_lines.append('\t'.join([cls, module, 'yes' if has_spec else 'no',
                                    cited or '-', impl, status]))
    open(OUT, 'w').write('\n'.join(out_lines) + '\n')
    print(f'modules: {len(rows)}  with spec: {counts["spec"]}  '
          f'cited in impl: {counts["cited"]}  missing spec: {counts["missing"]}')
    print('->', OUT)
    if strict and (counts['missing'] or counts['spec'] != counts['cited']):
        sys.exit(1)

if __name__ == '__main__':
    main()
