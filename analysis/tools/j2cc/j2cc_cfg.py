#!/usr/bin/env python3
"""Targeted j2cc CFG / pseudocode recovery.

The original Grim GUI classes were transpiled to C++ by j2cc and compiled by
clang into one big code section.  Ghidra stops at the generated jump tables,
which is why the existing corpus is wrapper-only.  This tool starts at one
native handler entry and follows:

  * direct jmp / jcc targets
  * `jmp qword ptr [rip+X]` continuation slots (resolved through the PE
    base-relocation table, so only real pointers are followed)
  * `lea reg,[rip+table]; jmp [reg + idx*8]` jump tables, with the index range
    recovered from the dominating `cmp`/`setcc`/`and`

It reports the exact .pdata function bounds, resolves every `BLOB(off,len)`
through the decrypted constant pool, names JNI vtable calls, and prints float
constants both as raw bits and as floats.  Output: annotated blocks (text)
and optionally JSON for downstream analysis.

Usage:
  j2cc_cfg.py --entry 0x18f15c990
  j2cc_cfg.py --entry 0x18f15c990 --pseudo --json out.json
  j2cc_cfg.py --entry 0x18f122fd0 --no-follow-outside
  j2cc_cfg.py --xrefs 0x18f15c990          # callers / address-taken slots
"""
import argparse
import json
import struct
import sys
import os

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pe import PEImage, POOL_CELL  # noqa: E402

from capstone import Cs, CS_ARCH_X86, CS_MODE_64  # noqa: E402
from capstone.x86 import (X86_OP_MEM, X86_OP_IMM, X86_OP_REG,  # noqa: E402
                          X86_REG_RIP, X86_REG_EFLAGS)

JNI_NAMES = {}


def _load_jni_names():
    """Derive JNIEnv vtable byte offsets from the host jni.h (same layout as
    the JVM's).  Falls back to an empty map if the header is unavailable."""
    for cand in ('/usr/lib/jvm/java-21-openjdk/include/jni.h',
                 '/usr/lib/jvm/default/include/jni.h'):
        if not os.path.exists(cand):
            continue
        import re
        src = open(cand).read()
        start = src.find('struct JNINativeInterface_ {')
        end = src.find('struct JNIInvokeInterface_ {')
        if start < 0 or end < 0:
            continue
        body = src[start:end]
        names = re.findall(r'\(JNICALL \*(\w+)\)', body)
        funcs = ['reserved%d' % i for i in range(4)] + names
        for i, n in enumerate(funcs):
            JNI_NAMES[i * 8] = n
        return


_load_jni_names()

BLOB_HELPERS = {0x190dd72e0, 0x190ddce00, 0x190dd9df0, 0x190de3220,
                0x190ddfc90}
# helper id strings only for the first one (string/descriptor fetch); the
# other three resolve class/field/method ids from the same pool.
HELPER_NAME = {
    0x190dd72e0: 'pool_str',
    0x190ddce00: 'resolve_static_field',
    0x190dd9df0: 'resolve_instance_field',
    0x190de3220: 'resolve_field',
    0x190ddfc90: 'resolve_static_method',
}

REG_ALIASES = {}
for _base in ('a', 'b', 'c', 'd'):
    REG_ALIASES['r%sx' % _base] = 'r%sx' % _base
# capstone gives names; normalise 32/16/8-bit forms to the 64-bit register


def _norm_reg(md, reg):
    name = md.reg_name(reg)
    if name is None:
        return None
    table = {
        'eax': 'rax', 'ax': 'rax', 'al': 'rax', 'ah': 'rax',
        'ebx': 'rbx', 'bx': 'rbx', 'bl': 'rbx', 'bh': 'rbx',
        'ecx': 'rcx', 'cx': 'rcx', 'cl': 'rcx', 'ch': 'rcx',
        'edx': 'rdx', 'dx': 'rdx', 'dl': 'rdx', 'dh': 'rdx',
        'esi': 'rsi', 'si': 'rsi', 'sil': 'rsi',
        'edi': 'rdi', 'di': 'rdi', 'dil': 'rdi',
        'ebp': 'rbp', 'bp': 'rbp', 'bpl': 'rbp',
        'esp': 'rsp', 'sp': 'rsp', 'spl': 'rsp',
    }
    if name in table:
        return table[name]
    if name.startswith('r') and name.endswith('d') and name[1:-1].isdigit():
        return 'r' + name[1:-1]
    if name.startswith('r') and name.endswith('w') and name[1:-1].isdigit():
        return 'r' + name[1:-1]
    if name.startswith('r') and name.endswith('b') and name[1:-1].isdigit():
        return 'r' + name[1:-1]
    return name


class Insn:
    __slots__ = ('address', 'size', 'mnemonic', 'op_str', 'bytes', 'regs_read',
                 'regs_write', 'operands', 'comment', 'pseudo')

    def __init__(self, i):
        self.address = i.address
        self.size = i.size
        self.mnemonic = i.mnemonic
        self.op_str = i.op_str
        self.bytes = bytes(i.bytes)
        self.regs_read = list(i.regs_read)
        self.regs_write = list(i.regs_write)
        self.operands = []
        for op in i.operands:
            if op.type == X86_OP_MEM:
                self.operands.append(('mem', op.mem.base, op.mem.index,
                                      op.mem.scale, op.mem.disp, op.size))
            elif op.type == X86_OP_IMM:
                self.operands.append(('imm', op.imm, op.size))
            elif op.type == X86_OP_REG:
                self.operands.append(('reg', op.reg, op.size))
        self.comment = None
        self.pseudo = None


class Block:
    def __init__(self, addr):
        self.addr = addr
        self.insns = []
        self.term = None            # 'ret', 'jmp', 'jcc', 'flow'
        self.succ = []              # [(target, kind, uncertain)]
        self.calls = []


class CFG:
    def __init__(self, img, entry, follow_outside=False, max_insns=400000):
        self.img = img
        self.entry = entry
        self.follow_outside = follow_outside
        self.max_insns = max_insns
        self.md = Cs(CS_ARCH_X86, CS_MODE_64)
        self.md.detail = True
        self.blocks = {}
        self.work = [entry]
        self.seen = set()
        self.insn_count = 0
        self.unresolved = []
        self.external = set()
        b = img.func_containing(entry)
        self.func = b
        self.lo, self.hi = b if b else (entry, entry + 0x10000)

    # -- helpers ---------------------------------------------------------
    def _slot_for(self, insn, mem):
        base, index, scale, disp, size = mem
        if base == X86_REG_RIP and index == 0:
            return insn.address + insn.size + disp
        return None

    def _read_slot(self, slot):
        t = self.img.reloc_target(slot)
        if t is not None:
            return t, 'reloc'
        v = self.img.u64(slot)
        v = self.img.norm_va(v)
        if self.img.is_code(v):
            return v, 'raw'
        return None, None

    def _track(self, insns):
        """Return {reg: value} where value is ('const', int) or ('table', va)."""
        regs = {}
        for ins in insns:
            if ins.mnemonic == 'lea' and len(ins.operands) == 2:
                dst, src = ins.operands
                if dst[0] == 'reg' and src[0] == 'mem':
                    slot = self._slot_for(ins, src[1:])
                    if slot is not None:
                        regs[_norm_reg(self.md, dst[1])] = ('table', slot)
                    else:
                        regs.pop(_norm_reg(self.md, dst[1]), None)
            elif ins.mnemonic in ('mov', 'movabs') and len(ins.operands) == 2:
                dst, src = ins.operands
                if dst[0] != 'reg':
                    continue
                d = _norm_reg(self.md, dst[1])
                if src[0] == 'imm':
                    regs[d] = ('const', src[1] & 0xffffffffffffffff)
                elif src[0] == 'reg':
                    s = _norm_reg(self.md, src[1])
                    if s in regs:
                        regs[d] = regs[s]
                    else:
                        regs.pop(d, None)
                else:
                    regs.pop(d, None)
            elif ins.mnemonic == 'xor' and len(ins.operands) == 2 \
                    and ins.operands[0][0] == 'reg' and ins.operands[1][0] == 'reg' \
                    and ins.operands[0][1] == ins.operands[1][1]:
                regs[_norm_reg(self.md, ins.operands[0][1])] = ('const', 0)
            elif ins.mnemonic == 'add' and len(ins.operands) == 2 \
                    and ins.operands[0][0] == 'reg' and ins.operands[1][0] == 'imm':
                d = _norm_reg(self.md, ins.operands[0][1])
                if d in regs and regs[d][0] == 'const':
                    regs[d] = ('const', (regs[d][1] + ins.operands[1][1]) & 0xffffffffffffffff)
        return regs

    def _infer_count(self, block, jmp, idx_reg):
        """Infer the number of jump-table entries from the dominating compare."""
        insns = block.insns
        alias = idx_reg
        setcc = set()
        for ins in insns:
            if ins.mnemonic.startswith('set') and ins.operands \
                    and ins.operands[0][0] == 'reg' \
                    and _norm_reg(self.md, ins.operands[0][1]) == _norm_reg(self.md, ins.operands[0][1]):
                # 8-bit destination register (al, cl, ...)
                setcc.add(_norm_reg(self.md, ins.operands[0][1]))
        for ins in reversed(insns):
            if ins is jmp:
                continue
            m, ops = ins.mnemonic, ins.operands
            if m in ('cmp', 'sub') and len(ops) == 2 and ops[0][0] == 'reg' \
                    and _norm_reg(self.md, ops[0][1]) == alias and ops[1][0] == 'imm':
                return (ops[1][1] & 0xffffffff) + 1
            if m == 'and' and len(ops) == 2 and ops[0][0] == 'reg' \
                    and _norm_reg(self.md, ops[0][1]) == alias and ops[1][0] == 'imm':
                return (ops[1][1] & 0xffffffff) + 1
            if m in ('mov', 'movzx', 'movsx', 'movsxd') and len(ops) == 2 \
                    and ops[0][0] == 'reg' and _norm_reg(self.md, ops[0][1]) == alias:
                if ops[1][0] == 'imm':
                    return (ops[1][1] & 0xffffffff) + 1
                if ops[1][0] == 'reg':
                    src = _norm_reg(self.md, ops[1][1])
                    if src in setcc:
                        return 2
                    if src.startswith('xmm'):
                        return None
                    alias = src
                    continue
                return None
            if m == 'xor' and len(ops) == 2 and ops[0][0] == 'reg' \
                    and ops[1][0] == 'reg' and ops[0][1] == ops[1][1] \
                    and _norm_reg(self.md, ops[0][1]) == alias:
                return None
        return None

    def _indirect_targets(self, block, ins, regs):
        """Resolve one indirect jmp into [(target, kind, uncertain)]."""
        ops = ins.operands
        if len(ops) != 1:
            return [(None, 'indirect-complex', True)]
        op = ops[0]
        if op[0] == 'reg':
            r = _norm_reg(self.md, op[1])
            v = regs.get(r)
            if v and v[0] == 'const' and self.img.is_code(v[1]):
                return [(v[1], 'jmp-reg-const', False)]
            return [(None, 'jmp-reg', True)]
        if op[0] != 'mem':
            return [(None, 'indirect-unknown', True)]
        base, index, scale, disp, size = op[1:]
        slot = self._slot_for(ins, op[1:])
        if slot is not None:
            # continuation slot: exactly one pointer
            target, how = self._read_slot(slot)
            if target:
                return [(target, 'slot', False)]
            return [(None, 'slot-unresolved@%#x' % slot, True)]
        base_reg = _norm_reg(self.md, base) if base else None
        idx_reg = _norm_reg(self.md, index) if index else None
        table = None
        if base_reg and base_reg in regs and regs[base_reg][0] == 'table':
            table = regs[base_reg][1]
        if table is None:
            return [(None, 'indirect-mem', True)]
        if not idx_reg:
            target, how = self._read_slot(table + disp)
            if target:
                return [(target, 'slot+disp', False)]
            return [(None, 'table-entry-unresolved', True)]
        count = self._infer_count(block, ins, idx_reg)
        uncertain = count is None
        if count is None:
            # fall back to the contiguous relocation run (shared tables are
            # often larger than one dispatcher's slice; cap conservatively)
            run = self.img.reloc_run(table + disp, 64)
            count = len(run) or 1
        out = []
        for i in range(min(count, 512)):
            slot_va = table + disp + i * scale
            t = self.img.reloc_target(slot_va)
            if t is None:
                t = self.img.norm_va(self.img.u64(slot_va))
            if not self.img.is_code(t):
                if uncertain:
                    break
                out.append((None, 'table-bad@%#x' % slot_va, True))
                break
            out.append((t, 'table[%d]' % i, uncertain))
        return out or [(None, 'table-empty@%#x' % (table + disp), True)]

    def _explore_block(self, addr):
        block = Block(addr)
        pc = addr
        while pc < self.hi:
            chunk_len = min(512, self.hi - pc)
            decoded = list(self.md.disasm(self.img.read(pc, chunk_len), pc))
            if not decoded:
                block.term = 'dead'
                return block
            for i in decoded:
                if i.address != pc:
                    # capstone desync (data in the middle); stop the block
                    block.term = 'dead'
                    return block
                pc += i.size
                self.insn_count += 1
                if self.insn_count > self.max_insns:
                    raise RuntimeError('instruction cap reached')
                ins = Insn(i)
                block.insns.append(ins)
                if i.mnemonic == 'call' and i.operands and i.operands[0].type == X86_OP_IMM:
                    block.calls.append(i.operands[0].imm)
                if i.mnemonic in ('ret', 'retf'):
                    block.term = 'ret'
                    return block
                if i.mnemonic in ('int3', 'ud2', 'hlt'):
                    block.term = 'dead'
                    return block
                if i.mnemonic == 'jmp':
                    block.term = 'jmp'
                    ops = ins.operands
                    if ops and ops[0][0] == 'imm':
                        block.succ.append((ops[0][1], 'jmp', False))
                    else:
                        regs = self._track(block.insns)
                        block.succ.extend(self._indirect_targets(block, ins, regs))
                    return block
                if i.mnemonic.startswith('j') and i.mnemonic != 'jmp':
                    block.term = 'jcc'
                    if ins.operands and ins.operands[0][0] == 'imm':
                        block.succ.append((ins.operands[0][1], i.mnemonic, False))
                    block.succ.append((pc, 'fallthrough', False))
                    return block
                # fallthrough into an already discovered block start?
                if pc in self.seen:
                    block.term = 'flow'
                    block.succ.append((pc, 'flow', False))
                    return block
        block.term = 'ret'
        return block

    def run(self):
        while self.work:
            addr = self.work.pop()
            if addr in self.seen:
                continue
            if not self.img.is_code(addr):
                self.unresolved.append((addr, 'outside-image'))
                continue
            inside = self.lo <= addr < self.hi
            if not inside and not self.follow_outside:
                self.external.add(addr)
                continue
            self.seen.add(addr)
            blk = self._explore_block(addr)
            self.blocks[addr] = blk
            for target, kind, uncertain in blk.succ:
                if target is None:
                    self.unresolved.append((blk.addr, kind))
                    continue
                if uncertain:
                    self.unresolved.append((blk.addr, '%s -> %#x' % (kind, target)))
                if not (self.lo <= target < self.hi) and not self.follow_outside:
                    self.external.add(target)
                    continue
                if target not in self.seen:
                    self.work.append(target)
        return self

    # -- annotation ------------------------------------------------------
    def annotate(self):
        for blk in self.blocks.values():
            state = {}
            for ins in blk.insns:
                ops = ins.operands
                notes = []
                # -- RIP-relative operand annotations (float / pointer / bits)
                for op in ops:
                    if op[0] == 'mem':
                        base, index, scale, disp, size = op[1:]
                        if base == X86_REG_RIP and index == 0:
                            va = ins.address + ins.size + disp
                            notes.append(self._mem_note(va, size))
                if notes:
                    ins.comment = '; '.join(n for n in notes if n)

                # -- symbolic pool tracking
                if ins.mnemonic in ('mov', 'movabs') and len(ops) == 2:
                    dst, src = ops
                    if dst[0] == 'reg':
                        d = _norm_reg(self.md, dst[1])
                        if src[0] == 'mem' and self._slot_for(ins, src[1:]) == POOL_CELL:
                            state[d] = ('poolinfo',)
                        elif src[0] == 'mem' and src[1] != 0 and src[2] == 0 \
                                and state.get(_norm_reg(self.md, src[1])) == ('poolinfo',):
                            state[d] = ('poolbase',)
                        elif src[0] == 'imm':
                            state[d] = ('imm', src[1])
                        else:
                            state.pop(d, None)
                elif ins.mnemonic == 'lea' and len(ops) == 2 and ops[0][0] == 'reg' \
                        and ops[1][0] == 'mem':
                    d = _norm_reg(self.md, ops[0][1])
                    base, index, scale, disp, size = ops[1][1:]
                    if base and index == 0 and state.get(_norm_reg(self.md, base)) == ('poolbase',):
                        state[d] = ('poolref', disp)
                        try:
                            txt = self.img.pool(disp)
                        except Exception:
                            txt = None
                        if txt:
                            ins.comment = (ins.comment + '; ' if ins.comment else '') + \
                                'pool[%#x] = %r' % (disp, txt)
                    else:
                        state.pop(d, None)
                elif ins.mnemonic == 'add' and len(ops) == 2 and ops[0][0] == 'reg':
                    d = _norm_reg(self.md, ops[0][1])
                    src = ops[1]
                    if src[0] == 'imm' and state.get(d) == ('poolbase',):
                        state[d] = ('poolref', src[1])
                        try:
                            txt = self.img.pool(src[1])
                        except Exception:
                            txt = None
                        if txt:
                            ins.comment = (ins.comment + '; ' if ins.comment else '') + \
                                'pool[%#x] = %r' % (src[1], txt)
                    elif src[0] == 'mem' and src[1] != 0 and src[2] == 0 \
                            and state.get(_norm_reg(self.md, src[1])) == ('poolinfo',) \
                            and state.get(d, (None,))[0] == 'imm':
                        off = state[d][1]
                        state[d] = ('poolref', off)
                        try:
                            txt = self.img.pool(off)
                        except Exception:
                            txt = None
                        if txt:
                            ins.comment = (ins.comment + '; ' if ins.comment else '') + \
                                'blob_off=%#x pool=%r' % (off, txt)
                    else:
                        state.pop(d, None)
                elif ins.mnemonic == 'call':
                    self._annotate_call(ins, state, blk)
                ins.pseudo = self._pseudo(ins, state)

    def _annotate_call(self, ins, state, blk):
        ops = ins.operands
        if ops and ops[0][0] == 'imm':
            tgt = ops[0][1]
            if tgt in BLOB_HELPERS:
                note = HELPER_NAME.get(tgt, 'helper')
                r = state.get('rdx')
                n = state.get('r8')
                if tgt == 0x190dd72e0 and r and r[0] == 'poolref':
                    ln = n[1] if n and n[0] == 'imm' else None
                    try:
                        txt = self.img.pool(r[1], ln)
                    except Exception:
                        txt = '?'
                    note += ' pool[%#x]' % r[1]
                    if txt:
                        note += ' = %r' % txt
                elif tgt in (0x190ddce00, 0x190dd9df0, 0x190de3220,
                             0x190ddfc90):
                    name = state.get('r8')
                    sig = state.get('r9')
                    if name and name[0] == 'poolref':
                        try:
                            note += ' name=%r' % self.img.pool(name[1])
                        except Exception:
                            pass
                    if sig and sig[0] == 'poolref':
                        try:
                            note += ' sig=%r' % self.img.pool(sig[1])
                        except Exception:
                            pass
                ins.comment = note
            return
        # JNI: call qword ptr [rax + 0xNNN]
        if ops and ops[0][0] == 'mem':
            base, index, scale, disp, size = ops[0][1:]
            if index == 0 and disp:
                nm = JNI_NAMES.get(disp)
                if nm:
                    args = []
                    for r in ('rdx', 'r8', 'r9'):
                        v = state.get(r)
                        if v and v[0] == 'poolref':
                            try:
                                args.append(self.img.pool(v[1]))
                            except Exception:
                                pass
                    ins.comment = 'JNI %s' % nm
                    if args:
                        ins.comment += '  args=%r' % (args,)

    def _mem_note(self, va, size):
        try:
            if size == 4:
                v = self.img.u32(va)
                f = struct.unpack('<f', struct.pack('<I', v))[0]
                hits = []
                if 0.0 < abs(f) < 1e7 and f == f:
                    hits.append('f32 %g' % f)
                hits.append('u32 %#x' % v)
                return '[%#x] %s' % (va, ', '.join(hits))
            if size == 8:
                v = self.img.u64(va)
                return '[%#x] %#x' % (va, v)
            if size == 16:
                v = self.img.read(va, 16)
                return '[%#x] %s' % (va, v.hex()[:32])
        except Exception:
            pass
        return None

    def _pseudo(self, ins, regs):
        """Very small instruction-to-expression renderer (within a block)."""
        m, ops = ins.mnemonic, ins.operands
        if m in ('mov', 'movabs', 'movss', 'movd', 'movq', 'movups', 'movaps',
                 'movdqu', 'movdqa') and len(ops) == 2:
            return '%s = %s' % (self._op(ops[0]), self._op(ops[1]))
        if m in ('addss', 'subss', 'mulss', 'divss', 'addps', 'subps', 'mulps'):
            return '%s %s= %s' % (self._op(ops[0]), m[3], self._op(ops[1]))
        if m in ('add', 'sub', 'xor', 'and', 'or', 'imul', 'shl', 'shr', 'sar') \
                and len(ops) == 2:
            return '%s %s= %s' % (self._op(ops[0]), m, self._op(ops[1]))
        if m == 'lea':
            return '%s = &%s' % (self._op(ops[0]), self._op(ops[1]))
        if m == 'call':
            if ops and ops[0][0] == 'imm':
                return 'call %#x%s' % (ops[0][1],
                                       ('  // ' + ins.comment) if ins.comment else '')
            return 'call %s%s' % (self._op(ops[0]),
                                  ('  // ' + ins.comment) if ins.comment else '')
        if m == 'test' and len(ops) == 2:
            return 'if (%s & %s)' % (self._op(ops[0]), self._op(ops[1]))
        if m == 'cmp' and len(ops) == 2:
            return 'cmp %s, %s' % (self._op(ops[0]), self._op(ops[1]))
        return None

    def _op(self, op):
        if op[0] == 'reg':
            return _norm_reg(self.md, op[1])
        if op[0] == 'imm':
            v = op[1]
            if -(1 << 31) <= v < (1 << 32):
                return str(v)
            return hex(v)
        base, index, scale, disp, size = op[1:]
        s = ''
        if base:
            s += _norm_reg(self.md, base)
        if index:
            s += ' + ' + _norm_reg(self.md, index)
            if scale != 1:
                s += '*%d' % scale
        if disp or not s:
            if disp < 0:
                s += ' - %#x' % (-disp)
            else:
                s += ' + %#x' % disp
        return '[%s]' % s

    # -- output ----------------------------------------------------------
    def text(self, pseudo=True):
        out = []
        out.append('entry %#x  function %#x..%#x  blocks %d  insns %d' %
                   (self.entry, self.lo, self.hi, len(self.blocks), self.insn_count))
        if self.unresolved:
            out.append('unresolved:')
            for a, why in self.unresolved[:40]:
                out.append('  %s %s' % (a if isinstance(a, str) else hex(a), why))
        for addr in sorted(self.blocks):
            blk = self.blocks[addr]
            out.append('')
            out.append('// ---- block %#x ----' % addr)
            for ins in blk.insns:
                line = '  %012x  %-8s %s' % (ins.address, ins.mnemonic, ins.op_str)
                if ins.comment:
                    line += '   ; ' + ins.comment
                out.append(line)
                if pseudo and ins.pseudo and ins.mnemonic != 'movss':
                    out.append('        // %s' % ins.pseudo)
            for t, kind, unc in blk.succ:
                out.append('  -> %s %s%s' % (kind, hex(t) if t else '?',
                                             ' (uncertain)' if unc else ''))
        return '\n'.join(out)

    def _ops_json(self, ins):
        out = []
        for op in ins.operands:
            if op[0] == 'mem':
                base, index, scale, disp, size = op[1:]
                out.append({
                    't': 'mem',
                    'base': _norm_reg(self.md, base) if base else None,
                    'index': _norm_reg(self.md, index) if index else None,
                    'scale': scale, 'disp': disp, 'size': size,
                })
            elif op[0] == 'imm':
                out.append({'t': 'imm', 'v': op[1], 'size': op[2]})
            else:
                out.append({'t': 'reg', 'r': _norm_reg(self.md, op[1]),
                            'size': op[2]})
        return out

    def to_json(self):
        def blk_json(b):
            return {
                'addr': b.addr,
                'term': b.term,
                'insns': [{
                    'addr': i.address, 'bytes': i.bytes.hex(),
                    'mnemonic': i.mnemonic, 'op_str': i.op_str,
                    'comment': i.comment, 'pseudo': i.pseudo,
                    'ops': self._ops_json(i),
                } for i in b.insns],
                'succ': [{'target': t, 'kind': k, 'uncertain': u}
                         for t, k, u in b.succ],
                'calls': b.calls,
            }
        return {
            'entry': self.entry,
            'function': {'start': self.lo, 'end': self.hi} if self.func else None,
            'blocks': [blk_json(self.blocks[a]) for a in sorted(self.blocks)],
            'unresolved': [{'from': a if isinstance(a, str) else a, 'why': w}
                           for a, w in self.unresolved],
            'external': sorted(self.external),
        }


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--entry', type=lambda x: int(x, 0))
    ap.add_argument('--xrefs', type=lambda x: int(x, 0))
    ap.add_argument('--no-follow-outside', action='store_true')
    ap.add_argument('--pseudo', action='store_true', default=True)
    ap.add_argument('--no-pseudo', dest='pseudo', action='store_false')
    ap.add_argument('--json', help='write JSON CFG here')
    ap.add_argument('--max-insns', type=int, default=400000)
    ap.add_argument('--img', default=None)
    args = ap.parse_args()

    img = PEImage(decrypted=args.img) if args.img else PEImage()

    if args.xrefs:
        print('call sites / pointer slots referencing %#x:' % args.xrefs)
        for s in img.xrefs_to(args.xrefs)[:80]:
            print('  slot %#x' % s)
        # scan code for e8 rel32 call targets (only the exact target)
        target = args.xrefs
        n = 0
        lo, hi = img.code_lo, img.code_hi
        step = 1 << 20
        needle = b'\xe8'
        for sva in range(lo, hi, step):
            chunk = img.read(sva, min(step, hi - sva))
            off = 0
            while True:
                j = chunk.find(needle, off)
                if j < 0 or j + 5 > len(chunk):
                    break
                rel = struct.unpack_from('<i', chunk, j + 1)[0]
                if sva + j + 5 + rel == target:
                    print('  call %#x' % (sva + j))
                    n += 1
                off = j + 1
        print('  %d direct call sites' % n)
        return

    if not args.entry:
        ap.error('--entry or --xrefs required')
    cfg = CFG(img, args.entry, follow_outside=not args.no_follow_outside,
              max_insns=args.max_insns).run()
    cfg.annotate()
    print(cfg.text(pseudo=args.pseudo))
    if args.json:
        with open(args.json, 'w') as f:
            json.dump(cfg.to_json(), f, indent=1)
        print('wrote', args.json)


if __name__ == '__main__':
    main()
