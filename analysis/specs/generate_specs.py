#!/usr/bin/env python3
"""Generate structural behavior specs for all registry modules."""
import os, re, io

SRC = '/workspace/analysis/decompiled/payload-decrypted/sixtwo'
SRC_FALLBACK = '/workspace/analysis/decompiled/payload-named/sixtwo'
OUT = '/workspace/analysis/specs/modules'
REG = '/workspace/analysis/specs/registry.tsv'

os.makedirs(OUT, exist_ok=True)

def read(path):
    try:
        return open(path, errors='ignore').read()
    except FileNotFoundError:
        return None

def annotate_names(src):
    """Single pass in source order: track int[] char-array construction and
    annotate each `mr.clS(var)` with the decoded setting name at that point."""
    events = []
    for m in re.finditer(r'(\w+)\s*=\s*new int\[\d+\]', src):
        events.append((m.start(), 'reset', m.group(1), None))
    for m in re.finditer(r'(\w+)\[(\d+)\]\s*=\s*(?:\(int\)\s*)?(-?\d+)\s*;', src):
        events.append((m.start(), 'set', m.group(1), (int(m.group(2)), int(m.group(3)))))
    for m in re.finditer(r'mr\.clS\((\w+)\)', src):
        events.append((m.start(), 'use', m.group(1), m))
    events.sort(key=lambda e: e[0])
    state = {}
    out = src
    for pos, kind, var, data in events:
        if kind == 'reset':
            state[var] = {}
        elif kind == 'set':
            state.setdefault(var, {})[data[0]] = data[1]
        else:
            vals = state.get(var, {})
            n = len(vals)
            name = None
            if n and sorted(vals.keys()) == list(range(n)) and all(32 <= v < 0x10000 for v in vals.values()):
                s = ''.join(chr(vals[i]) for i in range(n))
                if s.isprintable():
                    name = s
            if name:
                pat = re.compile(r'mr\.clS\(' + re.escape(var) + r'\)(?! /\*)')
                out = pat.sub(f'mr.clS({var}) /* "{name}" */', out, count=1)
    return out

# registry
rows = []
with open(REG) as f:
    next(f)
    for line in f:
        cid, fqcn, name, desc, key, bind = line.rstrip('\n').split('\t')
        key = key.removeprefix('key=')
        bind = bind.removeprefix('bind=')
        rows.append((cid, name, desc, key, bind))

SETTING_WRAPPERS = {'cA','cB','cD','cF','cJ','ct','cu','cv','cw','cz'}
WRAP_RE = '|'.join(re.escape(w) for w in sorted(SETTING_WRAPPERS))

def balanced(src, start):
    """src[start] == '('; return index just past the matching ')'."""
    depth = 0
    i = start
    while i < len(src):
        if src[i] == '(':
            depth += 1
        elif src[i] == ')':
            depth -= 1
            if depth == 0:
                return i + 1
        i += 1
    return -1

def extract_settings(src):
    out = []
    for m in re.finditer(r'this\.(\w+)\s*=\s*new\s+(' + WRAP_RE + r')\(', src):
        field, wrapper = m.groups()
        end = balanced(src, m.end() - 1)
        if end < 0:
            continue
        args = src[m.end():end - 1]
        # consume trailing fluent builder chain .x(...).y(...)
        i = end
        chain = ''
        while i < len(src) and src[i] == '.':
            dm = re.match(r'\.(\w+)\s*\(', src[i:])
            if not dm:
                break
            pend = balanced(src, i + dm.end() - 1)
            if pend < 0:
                break
            chain += src[i:pend]
            i = pend
        if not re.match(r'\s*;', src[i:i + 2]):
            continue
        ln = src[:m.start()].count('\n') + 1
        out.append((field, wrapper, args, chain.strip(), ln))
    return out

def extract_handlers(src):
    out = []
    for m in re.finditer(r'@(hG)\(([^)]*)\)\s*\n\s*(?:public|private|protected)[\w\s]*?(?:native\s*)?void\s+(\w+)\(([^)]*)\)', src):
        ann, pri, name, params = m.groups()
        ln = src[:m.start()].count('\n') + 1
        out.append((name, params.strip(), pri.strip(), ln))
    return out

def mc_refs(src):
    refs = sorted(set(re.findall(r'net\.minecraft[\w.$]*', src)))
    return refs

def imports(src):
    return sorted(set(re.findall(r'^import\s+([\w.]+);', src, re.M)))

def counts(src):
    native = len(re.findall(r'\bnative\b', src))
    return native

for cid, name, desc, key, bind in rows:
    path = os.path.join(SRC, f'{cid}.java')
    tier = 'decrypted'
    if not os.path.exists(path):
        path = os.path.join(SRC_FALLBACK, f'{cid}.java')
        tier = 'structural-only'
    src = read(path)
    if src is None:
        with open(os.path.join(OUT, f'{cid}.md'), 'w') as f:
            f.write(f'# {name} (sixtwo.{cid})\n\nMISSING SOURCE — {cid}.java not found.\n')
        continue
    src = annotate_names(src) if tier == 'decrypted' else src
    names = {}
    for m in re.finditer(r'mr\.clS\(\w+\)\s*/\*\s*"([^"]*)"\s*\*/', src):
        names[m.group(1)] = m.group(1)
    dec = 'CFR' if 'Decompiled with CFR' in src[:400] else 'Vineflower'
    sup = re.search(r'class\s+' + re.escape(cid) + r'\s*\nextends\s+(\w+)', src) or \
          re.search(r'class\s+' + re.escape(cid) + r'(?:\s|\n)*extends\s+(\w+)', src)
    superclass = sup.group(1) if sup else '?'
    settings = extract_settings(src)
    handlers = extract_handlers(src)
    refs = mc_refs(src)
    imps = imports(src)
    native = counts(src)
    n_methods = len(re.findall(r'^\s*(?:public|private|protected)[\w\s<>,\[\]]*\(', src, re.M))
    # keybind refs: rk fields
    rk = len(re.findall(r'new rk\(', src))

    buf = io.StringIO()
    w = buf.write
    w(f'# {name} (sixtwo.{cid})\n\n')
    w(f'- Registry: `sixtwo.{cid}|{name}|{desc}|key={key}|bind={bind}` [registry]\n')
    src_ref = f'analysis/decompiled/payload-decrypted/sixtwo/{cid}.java' if tier == 'decrypted' \
        else f'analysis/decompiled/payload-named/sixtwo/{cid}.java'
    src_note = f'{dec}, literals folded' if tier == 'decrypted' else dec
    w(f'- Source: `{src_ref}` ({src_note})\n')
    w(f'- Superclass: `{superclass}` [structure]\n')
    w(f'- Keybind: primary key {key}, active bind {bind} (-999 = unbound) [registry]\n')
    w(f'- Native coverage: ~{native} native tokens vs ~{n_methods} method decls — '
      f'behavior bodies mostly native-blocked; this spec is structural [structure]\n\n')
    w(f'## Intended behavior (from registry)\n\n> {desc}\n\n')
    if tier == 'decrypted':
        w('## Setting names (decrypted)\n\n')
        if names:
            for var, nm in sorted(names.items()):
                w(f'- `{var}` → **{nm}**\n')
        else:
            w('None decoded (all native).\n')
        w('\n')
    w('## Structural findings\n\n')
    w(f'### Settings ({len(settings)} constructed)\n\n')
    if settings:
        w('| field | wrapper | builder chain (verbatim) | line | inferred |\n|---|---|---|---|---|\n')
        for field, wrapper, args, chain, ln in settings:
            w(f'| this.{field} | {wrapper} | `{(args[:40] + "…" if len(args) > 40 else args)}` {("→ " + chain[:160] + ("…" if len(chain) > 160 else "")) if chain else ""} | {ln} | {"numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix)" if wrapper in ("cA","cB") else "see 00-framework.md"} [inferred] |\n')
    else:
        w('No direct settings construction visible (may inherit from superclass or be native-built).\n')
    w(f'\n### Event listeners ({len(handlers)} @hG methods)\n\n')
    if handlers:
        w('| method | params | priority | line |\n|---|---|---|---|\n')
        for hname, params, pri, ln in handlers:
            w(f'| {hname} | `{params}` | {pri or "—"} | {ln} |\n')
    else:
        w('None declared in this class.\n')
    w(f'\n### Minecraft API surface ({len(refs)} refs)\n\n')
    if refs:
        for r in refs:
            w(f'- `{r}`\n')
    else:
        w('No direct net.minecraft references (likely all native).\n')
    w(f'\n### Other imports of interest\n\n')
    interesting = [i for i in imps if not i.startswith(('java.lang.invoke','sixtwo','native'))]
    if interesting:
        for i in interesting:
            w(f'- `{i}`\n')
    else:
        w('None.\n')
    w(f'\n### Keybind usage\n\n{rk} `rk` keybind object(s) constructed [structure]\n')
    w('\n### Network\n\n')
    pk = [r for r in refs + imps if 'acket' in r]
    if pk:
        for p in sorted(set(pk)):
            w(f'- `{p}`\n')
    else:
        w('No packet classes referenced statically (native-blocked if any).\n')
    w('\n## Port notes (dev.opengrim)\n\n')
    w(f'- Implement "{name}" per registry description; settings above give constraint hints '
      '(numeric chains are step/min/max/default).\n')
    w(f'- Category, bind and lifecycle per 00-framework.md; module id {cid}.\n')
    w('- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — '
      'designer discretion allowed, document divergence in PARITY.md.\n')
    with open(os.path.join(OUT, f'{cid}.md'), 'w') as f:
        f.write(buf.getvalue())

print(f"wrote {len(rows)} specs to {OUT}")