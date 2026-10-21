#!/usr/bin/env python3
"""Linear lifter for j2cc handler bodies.

Consumes the CFG emitted by j2cc_cfg.py, walks the *normal* continuation
chain (skipping j2cc's ExceptionCheck dispatch edges), and symbolically
evaluates the slots j2cc uses for the Java operand stack and locals.  The
output is a compact pseudo-Java transcript:

    s40 = (a2 + a4) + -19.5
    s48 = 8.0
    s50 = 12.0
    f = sixtwo/jf.bAH(8.0, 12.0)
    ...
    sixtwo/lC.ceo(lf.PqdjL, s40, s48, 8.0, 8.0, 6.0, mG.hoGuU)

Native ABI: Windows x64 with the JNI `env` in rcx and `this` in rdx; Java
arguments follow in declaration order (j2cc uses stack slots for floats once
the four XMM registers are exhausted).

Usage:
  j2cc_lift.py --json /tmp/bo.json
  j2cc_lift.py --json /tmp/br.json --sig '(Lsixtwo/lC;Lsixtwo/lf;FFFLsixtwo/mG;)V'
"""
import argparse
import json
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pe import PEImage, RUNTIME_DELTA  # noqa: E402

HANDLER_DB = os.path.join(os.path.dirname(__file__), '..', '..', 'ghidra',
                          'native-handlers-final.jsonl')

HELPERS = {
    0x190dd72e0: 'string',
    0x190ddce00: 'static_field',
    0x190dd9df0: 'instance_field',
    0x190de3220: 'static_method',
    0x190ddfc90: 'instance_method',
}
JNI_FIELD_GET = {'GetStaticObjectField', 'GetStaticBooleanField',
                 'GetStaticIntField', 'GetStaticLongField',
                 'GetStaticFloatField', 'GetStaticDoubleField',
                 'GetObjectField', 'GetBooleanField', 'GetIntField',
                 'GetLongField', 'GetFloatField', 'GetDoubleField'}
JNI_CALL = {'CallVoidMethodA': None, 'CallObjectMethodA': 'o',
            'CallBooleanMethodA': 'z', 'CallIntMethodA': 'i',
            'CallLongMethodA': 'j', 'CallFloatMethodA': 'f',
            'CallDoubleMethodA': 'd', 'CallStaticVoidMethodA': None,
            'CallStaticObjectMethodA': 'o', 'CallStaticBooleanMethodA': 'z',
            'CallStaticIntMethodA': 'i', 'CallStaticLongMethodA': 'j',
            'CallStaticFloatMethodA': 'f', 'CallStaticDoubleMethodA': 'd'}


def load_handler(entry):
    try:
        for line in open(HANDLER_DB):
            d = json.loads(line)
            if int(d['addr'], 16) == entry + RUNTIME_DELTA:
                return d['sig'], d['method'], d['class']
    except FileNotFoundError:
        pass
    return None, None, None


def parse_sig(desc):
    args = []
    i = 1
    end = desc.index(')') if ')' in desc else len(desc) - 1
    while i < end:
        c = desc[i]
        if c == '[':
            j = i
            while desc[j] == '[':
                j += 1
            if desc[j] == 'L':
                j = desc.index(';', j)
            args.append('L')
            i = j + 1
        elif c == 'L':
            i = desc.index(';', i) + 1
            args.append('L')
        else:
            args.append(c)
            i += 1
    return args


def fmt_f(v):
    if abs(v - round(v)) < 1e-6:
        return '%d.0' % int(round(v))
    return '%g' % v


def f32(bits):
    return struct.unpack('<f', struct.pack('<I', bits & 0xffffffff))[0]


class Lifter:
    def __init__(self, cfg, img, sig, method=None, owner=None):
        self.cfg = cfg
        self.blocks = {int(b['addr']): b for b in cfg['blocks']}
        self.img = img
        self.sig = sig
        self.method = method
        self.owner = owner
        self.slots = {}
        self.regs = {}
        self.xregs = {}
        self.slot_class = {}
        self.slot_var = {}
        self.fid = {}          # reg -> (kind, class, name, sig)
        self.out = []
        self.visited = set()
        self.arglocs = []
        self.frame = self._frame_size()
        if sig:
            self._setup_args(sig)
        self.regs['rcx'] = 'env'
        if owner:
            self.regs['rdx'] = 'this:' + owner.split('/')[-1].rstrip(';')
        else:
            self.regs['rdx'] = 'this'

    def _frame_size(self):
        blk = self.blocks[self.cfg['entry']]
        pushes = 0
        sub = 0
        for ins in blk['insns']:
            if ins['mnemonic'] == 'push':
                pushes += 1
            elif ins['mnemonic'] == 'sub' and ins['op_str'].startswith('rsp,'):
                try:
                    sub = int(ins['op_str'].split(',')[1].strip(), 16)
                except ValueError:
                    pass
                break
            elif ins['mnemonic'] not in ('push', 'movups', 'movaps', 'mov',
                                         'movabs', 'movdqu', 'movdqa'):
                break
        return pushes * 8 + sub

    def _setup_args(self, sig):
        """Windows x64 positional assignment (env=pos0, this=pos1).

        pos 0..3 use rcx/rdx/r8/r9 for integer-like args and xmm0..3 for
        float/double args; every argument at pos >= 4 goes on the stack.
        """
        args = parse_sig(sig)
        int_regs = ['rcx', 'rdx', 'r8', 'r9']
        xmm_regs = ['xmm0', 'xmm1', 'xmm2', 'xmm3']
        self.arglocs = []
        for i, t in enumerate(args):
            pos = i + 2
            if pos < 4:
                loc = xmm_regs[pos] if t in 'FD' else int_regs[pos]
                self.arglocs.append(loc)
                name = 'a%d' % i
                if t in 'FD':
                    self.xregs[loc] = name
                else:
                    self.regs[loc] = name
            else:
                slot = 0x28 + self.frame + 8 * (pos - 4)
                self.arglocs.append('a%d' % (pos - 4))
                self.slots['s%X' % slot] = 'a%d' % i
    # -- expression helpers ---------------------------------------------
    def slot_name(self, off):
        return 's%X' % off

    def mem_expr(self, op):
        base = op.get('base')
        index = op.get('index')
        scale = op.get('scale', 1)
        disp = op.get('disp', 0)
        if base == 'rip':
            va = self._insn_end + disp
            try:
                if op.get('size') == 4:
                    v = self.img.f32(va)
                    return fmt_f(v), ('f', va)
                if op.get('size') == 8:
                    return hex(self.img.u64(va)), ('q', va)
            except Exception:
                pass
            return '[%#x]' % va, None
        if base == 'rsp':
            return self.slots.get(self.slot_name(disp), self.slot_name(disp)), None
        if base in self.regs:
            e = self.regs[base]
            if index == 0 and disp == 0:
                return e, None
            return '%s.%X' % (e, disp) if disp else '%s[?]' % e, None
        if base is None and index:
            return '?', None
        return (base or '?'), None

    def _norm(self, s):
        return s.replace('qword ptr ', '').replace('dword ptr ', '') \
                .replace('byte ptr ', '').replace('word ptr ', '').strip()

    def set_dst(self, dst, expr):
        dst = self._norm(dst)
        if dst.startswith('['):
            inner = dst[1:dst.index(']')].strip()
            parts = inner.split(' + ')
            if parts[0].strip() == 'rsp':
                off = 0
                if len(parts) > 1:
                    t = parts[1].strip()
                    if t.startswith('- '):
                        off = -int(t[2:], 16)
                    else:
                        off = int(t[2:], 16) if t.startswith('0x') else int(t)
                self.slots[self.slot_name(off)] = expr
            return
        if dst.startswith('xmm'):
            self.xregs[dst] = expr
        else:
            self.regs[dst] = expr

    def _show(self, e):
        if isinstance(e, tuple):
            if e[0] == 'str':
                return 'str(%r)' % ((e[1] or '').split('\x00')[0])
            if e[0] == 'helper':
                return '%s.%s' % (e[2], e[3])
            return str(e)
        return e

    def _slot_of(self, dst):
        if dst.startswith('['):
            inner = dst[1:dst.index(']')].strip()
            parts = inner.split(' + ')
            if parts[0].strip() == 'rsp' and len(parts) > 1:
                t = parts[1].strip()
                off = int(t[2:], 16) if t.startswith('0x') else int(t)
                return self.slot_name(off)
        return None

    def get_reg(self, r):
        if r.startswith('xmm'):
            return self.xregs.get(r, r)
        return self.regs.get(r, r)

    def is_exc_block(self, blk):
        return any('ExceptionCheck' in (i.get('comment') or '')
                   for i in blk['insns'])

    def run(self):
        sinks = self.sink_blocks()
        addr = self.cfg['entry']
        steps = 0
        while addr is not None and steps < 5000:
            steps += 1
            blk = self.blocks.get(addr)
            if blk is None or addr in self.visited:
                self.out.append('// loop/revisit %#x' % addr)
                break
            self.visited.add(addr)
            self.emit_block(blk, sinks)
            addr = self.next_normal(blk, sinks)
        return self

    def sink_blocks(self):
        """Exception/throw endpoint blocks.

        Seeds: blocks that call ThrowNew; blocks ending in ret that are the
        table[0] target of an ExceptionCheck dispatch (j2cc's shared
        exceptionTerminate epilogue).
        Then close over blocks whose every successor is a sink and which
        perform no JNI call of their own (the NPE message plumbing).
        """
        blocks = self.blocks
        throw = set()
        ret = set()
        exc_targets = set()
        for a, b in blocks.items():
            cm = ' '.join(i.get('comment') or '' for i in b['insns'])
            ops = ' '.join('%s %s' % (i['mnemonic'], i['op_str'])
                           for i in b['insns'])
            if 'ThrowNew' in cm:
                throw.add(a)
            if 'ret' in ops:
                ret.add(a)
            if self.is_exc_block(b):
                for s in b['succ']:
                    if s.get('target'):
                        exc_targets.add(int(s['target']))
        sinks = set(throw) | (ret & exc_targets)

        def is_plumbing(b):
            """True when the block only prepares/throws an exception."""
            for i in b['insns']:
                if i['mnemonic'] != 'call':
                    continue
                cm = i.get('comment') or ''
                if 'ThrowNew' in cm or 'ExceptionCheck' in cm:
                    continue
                if i['op_str'] == '0x190dd72e0':   # pool_str (NPE message)
                    continue
                return False
            return True

        changed = True
        while changed:
            changed = False
            for a, b in blocks.items():
                if a in sinks:
                    continue
                succ = [int(s['target']) for s in b['succ'] if s.get('target')]
                if succ and all(t in sinks for t in succ) and is_plumbing(b):
                    sinks.add(a)
                    changed = True
        return sinks

    def throws_soon(self, addr, depth=4, seen=None):
        if seen is None:
            seen = set()
        if addr in seen or depth < 0:
            return False
        seen.add(addr)
        b = self.blocks.get(addr)
        if b is None:
            return False
        if any('ThrowNew' in (i.get('comment') or '') for i in b['insns']):
            return True
        if depth == 0:
            return False
        succ = [int(s['target']) for s in b['succ'] if s.get('target')]
        if not succ:
            return False
        return all(self.throws_soon(t, depth - 1, seen) for t in succ)

    def next_normal(self, blk, sinks):
        succ = [s for s in blk['succ'] if s.get('target')]
        if not succ:
            return None
        targets = [int(s['target']) for s in succ]
        if len(succ) == 2 and all(s['kind'].startswith('table') for s in succ):
            t0, t1 = targets
            th0 = self.throws_soon(t0)
            th1 = self.throws_soon(t1)
            if th0 != th1:
                return t1 if th0 else t0
            if self.is_exc_block(blk):
                return t1
            # real branch with no obvious throw path: follow fallthrough-like
            return t1 if blk['insns'][-1]['mnemonic'] != 'jmp' else t0
        for s in succ:
            if s['kind'] == 'fallthrough':
                return int(s['target'])
        for s in succ:
            if s['kind'] == 'table[1]':
                return int(s['target'])
        for s in succ:
            if int(s['target']) not in sinks:
                return int(s['target'])
        return None

    # -- block emission ---------------------------------------------------
    def emit_block(self, blk, sinks):
        exc = False
        lines = []
        for ins in blk['insns']:
            self._insn_end = ins['addr'] + len(bytes.fromhex(ins['bytes']))
            if 'ExceptionCheck' in (ins.get('comment') or ''):
                exc = True
            line = self.do_insn(ins, exc)
            if line:
                if isinstance(line, list):
                    lines.extend(line)
                else:
                    lines.append(line)
        if lines:
            self.out.append('// %#x' % blk['addr'])
            self.out.extend('  ' + l for l in lines)

    def do_insn(self, ins, exc):
        m = ins['mnemonic']
        ops = ins.get('ops', [])
        cm = ins.get('comment') or ''
        if m == 'call':
            return self.do_call(ins)
        if exc:
            return None
        if m in ('push', 'pop', 'ret', 'int3', 'hlt', 'ud2'):
            return None
        if m in ('movups', 'movaps', 'movdqu', 'movdqa') and ops:
            if ops[0].get('t') == 'mem' and ops[0].get('base') == 'rsp':
                return None
            if ops[0].get('t') == 'reg' and ops[1].get('t') in ('reg', 'mem'):
                se = ops[1].get('r') if ops[1]['t'] == 'reg' else None
                if se and se.startswith('xmm'):
                    self.xregs[ops[0]['r']] = self.xregs.get(se, se)
                return None
        if m == 'sub' and ops and ops[0].get('t') == 'reg' \
                and ops[0].get('r') == 'rsp':
            return None
        if m == 'add' and ops and ops[0].get('t') == 'reg' \
                and ops[0].get('r') == 'rsp':
            return None

        def val(op):
            if op is None:
                return '?'
            if op['t'] == 'reg':
                return self.get_reg(op['r'])
            if op['t'] == 'imm':
                return op['v']
            e, meta = self.mem_expr(op)
            return e

        if m in ('addss', 'subss', 'mulss', 'divss'):
            dst, src = ops
            de = val(dst)
            se = val(src)
            opc = {'addss': '+', 'subss': '-', 'mulss': '*', 'divss': '/'}[m]
            e = '(%s %s %s)' % (de, opc, se)
            self.set_dst(ins['op_str'].split(',')[0], e)
            return None
        if m == 'movss':
            dst, src = ops
            se = val(src)
            if src['t'] == 'mem' and src.get('base') == 'rip':
                se, meta = self.mem_expr(src)
            if dst['t'] == 'reg':
                self.xregs[dst['r']] = se
                return None
            self.set_dst(ins['op_str'].split(',')[0], se)
            slot = self._slot_of(ins['op_str'].split(',')[0])
            if slot:
                return '%s = %s' % (slot, se)
            return None
        if m in ('mov', 'movabs'):
            dst, src = ops
            se = val(src)
            if src['t'] == 'imm':
                bits = src['v']
                if 'float' in cm or (m == 'mov' and dst.get('t') == 'mem'
                                     and dst.get('size') == 4
                                     and 0.0001 < abs(f32(bits)) < 1e7
                                     and f32(bits) == f32(bits)):
                    se = fmt_f(f32(bits))
                else:
                    se = str(bits)
            if dst['t'] == 'reg':
                self.set_dst(dst['r'], se)
                return None
            self.set_dst(ins['op_str'].split(',')[0], se)
            d = self._norm(ins['op_str'].split(',')[0])
            if isinstance(se, tuple) and se[0] == 'str':
                slot = self._slot_of(d)
                if slot:
                    txt = (se[1] or '').split('\x00')[0]
                    self.slot_class[slot] = txt
                    self.slots[slot] = 'str(%r)' % txt
            slot = self._slot_of(d)
            if slot:
                return '%s = %s' % (slot, self._show(se))
            return None
        if m == 'lea':
            dst, src = ops
            if src['t'] == 'mem' and src.get('base') == 'rsp':
                self.set_dst(dst['r'], '&' + self.slot_name(src['disp']))
            elif src['t'] == 'mem' and src.get('base') == 'rip':
                va = self._insn_end + src['disp']
                self.set_dst(dst['r'], 'poolptr(%#x)' % va)
            else:
                self.set_dst(dst['r'], val(src))
            return None
        if m in ('add', 'sub', 'imul', 'xor', 'and', 'or', 'shl', 'shr', 'sar'):
            dst, src = ops
            de = val(dst)
            se = val(src)
            if src['t'] == 'mem' and src.get('base') == 'rip':
                se, _ = self.mem_expr(src)
            opc = {'add': '+', 'sub': '-', 'imul': '*', 'xor': '^',
                   'and': '&', 'or': '|', 'shl': '<<', 'shr': '>>',
                   'sar': '>>'}[m]
            self.set_dst(dst['r'], '(%s %s %s)' % (de, opc, se))
            return None
        return None

    # -- calls ------------------------------------------------------------
    def do_call(self, ins):
        ops = ins.get('ops') or []
        cm = ins.get('comment') or ''
        if not ops:
            return None
        if ops[0]['t'] == 'imm':
            target = ops[0]['v']
            kind = HELPERS.get(target)
            if kind == 'string':
                txt = None
                if '=' in cm:
                    raw = cm.split('=', 1)[1].strip()
                    try:
                        txt = eval(raw)
                    except Exception:
                        txt = raw.strip("'")
                self.regs['rax'] = ('str', txt) if txt else 'str'
                if txt:
                    return 'str = %r' % txt
                return None
            if kind in ('static_field', 'instance_field',
                        'static_method', 'instance_method'):
                name = sig = None
                if "name=" in cm:
                    try:
                        name = eval(cm.split("name=")[1].split(" sig=")[0])
                        sig = eval(cm.split("sig=")[1])
                    except Exception:
                        pass
                # class comes from the slot addressed by rdx
                cls = None
                rd = self.regs.get('rdx', '')
                if rd.startswith('&s'):
                    cls = self.slot_class.get(rd[1:])
                self.regs['rax'] = ('helper', kind, cls, name, sig)
                return None
            return 'call %#x  %s' % (target, cm)
        # JNI vtable call
        name = cm.split('JNI ')[-1].split('  ')[0].strip()
        if not name:
            return None
        if name == 'ExceptionCheck':
            return None
        if name == 'ThrowNew':
            return 'throw new %s' % self.regs.get('rdx', '?')
        if name in ('NewStringUTF', 'NewString'):
            self.regs['rax'] = 'jstring'
            return None
        # describe args
        args = []
        argc = None
        rd = self._show(self.regs.get('rdx', ''))
        r8 = self.regs.get('r8', '')
        r9 = self.regs.get('r9', '')
        mid = None
        if isinstance(r8, tuple) and r8[0] == 'helper':
            mid = r8
        if mid is None and r8 in self.fid:
            mid = self.fid[r8]
        if mid is None and isinstance(r8, str) and r8.startswith('ret'):
            mid = self.regs.get('mid')
        if mid:
            kind, cls, mname, msig = mid[1], mid[2], mid[3], mid[4]
            if msig:
                try:
                    argtypes = parse_sig(msig)
                    argc = len(argtypes)
                except Exception:
                    argc = None
            if r9.startswith('&s') and argc is not None:
                off = int(r9[2:], 16)
                for k in range(argc):
                    args.append(self.slots.get(self.slot_name(off + 8 * k), '?'))
                args = args[:argc]
            label = '%s.%s' % (cls or '?', mname or '?')
            ret = None
            for jn, rt in JNI_CALL.items():
                if name.startswith(jn):
                    ret = rt
            if name in ('CallStaticVoidMethodA', 'CallVoidMethodA'):
                if rd and not name.startswith('CallStatic'):
                    self.out.append('  %s.%s(%s)' % (rd, mname or '?',
                                                     ', '.join(args)))
                    return None
                self.out.append('%s(%s)' % (label, ', '.join(args)))
                return None
            if name.startswith('CallStatic') or name.startswith('Call'):
                if not name.startswith('CallStatic'):
                    args = [rd] + args
                expr = '%s(%s)' % (label, ', '.join(args))
                self.regs['rax'] = 'ret'
                if ret == 'f':
                    self.xregs['xmm0'] = 'float(%s)' % label
                self.regs['lastcall'] = expr
                return '%s -> %s' % (expr, {'o': 'obj', 'z': 'bool',
                                            'i': 'int', 'j': 'long',
                                            'f': 'float', 'd': 'double',
                                            None: 'void'}.get(ret, ret))
        if name in ('GetStaticObjectField', 'GetStaticLongField',
                    'GetStaticFloatField', 'GetStaticDoubleField',
                    'GetStaticIntField', 'GetStaticBooleanField'):
            fid = r8 if isinstance(r8, tuple) else self.fid.get(r8)
            if fid and fid[0] == 'helper' and fid[1] in ('static_field', 'instance_field'):
                expr = '%s.%s' % (fid[2], fid[3])
                self.regs['rax'] = expr
                return expr
            return 'GetStaticObjectField(%s)' % self._show(r8)
        if name in ('GetObjectField', 'GetFloatField', 'GetIntField',
                    'GetLongField', 'GetDoubleField', 'GetBooleanField'):
            fid = r8 if isinstance(r8, tuple) else self.fid.get(r8)
            if fid and fid[0] == 'helper':
                expr = '%s.%s' % (self._show(rd), fid[3])
                self.regs['rax'] = expr
                return expr
            return '%s(%s)' % (name, self._show(rd))
        if name in ('GetFieldID', 'GetStaticFieldID', 'GetMethodID',
                    'GetStaticMethodID'):
            self.regs['rax'] = name
            return name
        return name

    # resolve helper results into the fid table when a 'mov reg, rax' follows
    def feed(self, blocks):
        pass


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--json', required=True)
    ap.add_argument('--sig')
    ap.add_argument('--method')
    args = ap.parse_args()
    cfg = json.load(open(args.json))
    sig, method, owner = load_handler(cfg['entry'])
    sig = args.sig or sig
    method = args.method or method
    lf = Lifter(cfg, PEImage(), sig, method, owner).run()
    print('== %s %s ==' % (method or hex(cfg['entry']), sig))
    print('\n'.join(lf.out))


if __name__ == '__main__':
    main()
