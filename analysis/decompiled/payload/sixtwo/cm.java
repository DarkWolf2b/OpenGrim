package sixtwo;

import java.util.ArrayList;
import java.util.List;
import native.Loader;

public class cm {
   private final List<ck> MENPa;
   protected final rk ybtAZ;
   private static long LwpdX;
   private static long iYuFd;

   public cm() {
      long var1 = LwpdX ^ 59162429439912L;
      ck.QK();
      super();

      try {
         this.MENPa = new ArrayList<>();
         this.ybtAZ = new rk((int)iYuFd).dhs(rj.yiIHY);
         if (iS.bwL() == null) {
            ck.QJ(new iS[3]);
         }
      } catch (MatchException var4) {
         throw QR(var4);
      }
   }

   static {
      Loader.doInit(cm.class);
      _d888335a83d063d9e5dc28decb42bdd5();
   }

   public void QN(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cm.LwpdX J
      // 03: ldc2_w 76964317636970
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ck.QK ()[Lsixtwo/iS;
      // 0b: aload 0
      // 0c: getfield sixtwo/cm.MENPa Ljava/util/List;
      // 0f: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 14: astore 5
      // 16: astore 4
      // 18: aload 5
      // 1a: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 1f: ifeq eb
      // 22: aload 5
      // 24: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 29: checkcast sixtwo/ck
      // 2c: astore 6
      // 2e: aload 6
      // 30: invokevirtual sixtwo/ck.QH ()Z
      // 33: ifne 42
      // 36: aload 4
      // 38: ifnull 18
      // 3b: goto 42
      // 3e: invokestatic sixtwo/cm.QR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: invokestatic sixtwo/rm.dip ()Lnet/minecraft/class_241;
      // 45: astore 7
      // 47: aload 6
      // 49: aload 4
      // 4b: ifnonnull 67
      // 4e: invokevirtual sixtwo/ck.QF ()Lsixtwo/cl;
      // 51: getstatic sixtwo/cl.zjBim Lsixtwo/cl;
      // 54: if_acmpne 6d
      // 57: goto 5e
      // 5a: invokestatic sixtwo/cm.QR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5d: athrow
      // 5e: aload 6
      // 60: goto 67
      // 63: invokestatic sixtwo/cm.QR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 66: athrow
      // 67: invokevirtual sixtwo/ck.QG ()F
      // 6a: goto 6e
      // 6d: fconst_0
      // 6e: fstore 8
      // 70: aload 6
      // 72: aload 4
      // 74: ifnonnull 90
      // 77: invokevirtual sixtwo/ck.QF ()Lsixtwo/cl;
      // 7a: getstatic sixtwo/cl.BisXp Lsixtwo/cl;
      // 7d: if_acmpne 96
      // 80: goto 87
      // 83: invokestatic sixtwo/cm.QR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 86: athrow
      // 87: aload 6
      // 89: goto 90
      // 8c: invokestatic sixtwo/cm.QR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8f: athrow
      // 90: invokevirtual sixtwo/ck.QG ()F
      // 93: goto 97
      // 96: fconst_0
      // 97: fstore 9
      // 99: aload 6
      // 9b: invokevirtual sixtwo/ck.QF ()Lsixtwo/cl;
      // 9e: getstatic sixtwo/cl.zjBim Lsixtwo/cl;
      // a1: if_acmpne ac
      // a4: fconst_1
      // a5: goto b1
      // a8: invokestatic sixtwo/cm.QR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ab: athrow
      // ac: aload 7
      // ae: getfield net/minecraft/class_241.field_1343 F
      // b1: fstore 10
      // b3: aload 6
      // b5: invokevirtual sixtwo/ck.QF ()Lsixtwo/cl;
      // b8: getstatic sixtwo/cl.BisXp Lsixtwo/cl;
      // bb: if_acmpne c6
      // be: fconst_1
      // bf: goto cb
      // c2: invokestatic sixtwo/cm.QR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c5: athrow
      // c6: aload 7
      // c8: getfield net/minecraft/class_241.field_1342 F
      // cb: fstore 11
      // cd: aload 1
      // ce: fload 8
      // d0: fload 9
      // d2: fload 10
      // d4: fload 11
      // d6: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // d9: aload 0
      // da: getfield sixtwo/cm.ybtAZ Lsixtwo/rk;
      // dd: invokevirtual sixtwo/rk.dhj ()F
      // e0: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // e3: invokevirtual sixtwo/lC.cdi (FFFFLsixtwo/mG;)V
      // e6: aload 4
      // e8: ifnull 18
      // eb: return
   }

   public void QO() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cm.LwpdX J
      // 003: ldc2_w 3611944613846
      // 006: lxor
      // 007: lstore 1
      // 008: aload 0
      // 009: getfield sixtwo/cm.MENPa Ljava/util/List;
      // 00c: invokeinterface java/util/List.clear ()V 1
      // 011: invokestatic sixtwo/rm.dip ()Lnet/minecraft/class_241;
      // 014: astore 4
      // 016: invokestatic sixtwo/ck.QK ()[Lsixtwo/iS;
      // 019: aload 0
      // 01a: getfield sixtwo/cm.MENPa Ljava/util/List;
      // 01d: new sixtwo/ck
      // 020: dup
      // 021: getstatic sixtwo/cl.BisXp Lsixtwo/cl;
      // 024: ldc 5.0
      // 026: invokespecial sixtwo/ck.<init> (Lsixtwo/cl;F)V
      // 029: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 02e: pop
      // 02f: aload 0
      // 030: getfield sixtwo/cm.MENPa Ljava/util/List;
      // 033: new sixtwo/ck
      // 036: dup
      // 037: getstatic sixtwo/cl.BisXp Lsixtwo/cl;
      // 03a: aload 4
      // 03c: getfield net/minecraft/class_241.field_1342 F
      // 03f: ldc 5.0
      // 041: fsub
      // 042: invokespecial sixtwo/ck.<init> (Lsixtwo/cl;F)V
      // 045: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 04a: pop
      // 04b: aload 0
      // 04c: getfield sixtwo/cm.MENPa Ljava/util/List;
      // 04f: new sixtwo/ck
      // 052: dup
      // 053: getstatic sixtwo/cl.zjBim Lsixtwo/cl;
      // 056: ldc 4.0
      // 058: invokespecial sixtwo/ck.<init> (Lsixtwo/cl;F)V
      // 05b: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 060: pop
      // 061: aload 0
      // 062: getfield sixtwo/cm.MENPa Ljava/util/List;
      // 065: new sixtwo/ck
      // 068: dup
      // 069: getstatic sixtwo/cl.zjBim Lsixtwo/cl;
      // 06c: aload 4
      // 06e: getfield net/minecraft/class_241.field_1343 F
      // 071: ldc 5.0
      // 073: fsub
      // 074: invokespecial sixtwo/ck.<init> (Lsixtwo/cl;F)V
      // 077: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 07c: pop
      // 07d: astore 3
      // 07e: aload 0
      // 07f: getfield sixtwo/cm.MENPa Ljava/util/List;
      // 082: new sixtwo/ck
      // 085: dup
      // 086: getstatic sixtwo/cl.zjBim Lsixtwo/cl;
      // 089: aload 4
      // 08b: getfield net/minecraft/class_241.field_1343 F
      // 08e: fconst_2
      // 08f: fdiv
      // 090: fconst_1
      // 091: fsub
      // 092: invokespecial sixtwo/ck.<init> (Lsixtwo/cl;F)V
      // 095: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 09a: pop
      // 09b: aload 0
      // 09c: getfield sixtwo/cm.MENPa Ljava/util/List;
      // 09f: new sixtwo/ck
      // 0a2: dup
      // 0a3: getstatic sixtwo/cl.BisXp Lsixtwo/cl;
      // 0a6: aload 4
      // 0a8: getfield net/minecraft/class_241.field_1342 F
      // 0ab: fconst_2
      // 0ac: fdiv
      // 0ad: ldc 0.5
      // 0af: fsub
      // 0b0: invokespecial sixtwo/ck.<init> (Lsixtwo/cl;F)V
      // 0b3: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 0b8: pop
      // 0b9: aload 0
      // 0ba: getfield sixtwo/cm.MENPa Ljava/util/List;
      // 0bd: new sixtwo/ck
      // 0c0: dup
      // 0c1: getstatic sixtwo/cl.zjBim Lsixtwo/cl;
      // 0c4: aload 4
      // 0c6: getfield net/minecraft/class_241.field_1343 F
      // 0c9: ldc 4.0
      // 0cb: fdiv
      // 0cc: ldc 0.5
      // 0ce: fsub
      // 0cf: invokespecial sixtwo/ck.<init> (Lsixtwo/cl;F)V
      // 0d2: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 0d7: pop
      // 0d8: aload 0
      // 0d9: getfield sixtwo/cm.MENPa Ljava/util/List;
      // 0dc: new sixtwo/ck
      // 0df: dup
      // 0e0: getstatic sixtwo/cl.zjBim Lsixtwo/cl;
      // 0e3: aload 4
      // 0e5: getfield net/minecraft/class_241.field_1343 F
      // 0e8: ldc 4.0
      // 0ea: fdiv
      // 0eb: ldc 3.0
      // 0ed: fmul
      // 0ee: ldc 0.5
      // 0f0: fsub
      // 0f1: invokespecial sixtwo/ck.<init> (Lsixtwo/cl;F)V
      // 0f4: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 0f9: pop
      // 0fa: aload 0
      // 0fb: getfield sixtwo/cm.MENPa Ljava/util/List;
      // 0fe: new sixtwo/ck
      // 101: dup
      // 102: getstatic sixtwo/cl.BisXp Lsixtwo/cl;
      // 105: aload 4
      // 107: getfield net/minecraft/class_241.field_1342 F
      // 10a: ldc 4.0
      // 10c: fdiv
      // 10d: ldc 0.5
      // 10f: fsub
      // 110: invokespecial sixtwo/ck.<init> (Lsixtwo/cl;F)V
      // 113: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 118: pop
      // 119: aload 0
      // 11a: getfield sixtwo/cm.MENPa Ljava/util/List;
      // 11d: new sixtwo/ck
      // 120: dup
      // 121: getstatic sixtwo/cl.BisXp Lsixtwo/cl;
      // 124: aload 4
      // 126: getfield net/minecraft/class_241.field_1342 F
      // 129: ldc 4.0
      // 12b: fdiv
      // 12c: ldc 3.0
      // 12e: fmul
      // 12f: ldc 0.5
      // 131: fsub
      // 132: invokespecial sixtwo/ck.<init> (Lsixtwo/cl;F)V
      // 135: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 13a: pop
      // 13b: invokestatic sixtwo/rD.dlK ()Lsixtwo/cq;
      // 13e: invokevirtual sixtwo/cq.Ry ()Ljava/util/List;
      // 141: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 146: astore 5
      // 148: aload 5
      // 14a: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 14f: ifeq 1e7
      // 152: aload 5
      // 154: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 159: checkcast sixtwo/cr
      // 15c: astore 6
      // 15e: aload 0
      // 15f: getfield sixtwo/cm.MENPa Ljava/util/List;
      // 162: new sixtwo/ck
      // 165: dup
      // 166: getstatic sixtwo/cl.BisXp Lsixtwo/cl;
      // 169: aload 6
      // 16b: invokevirtual sixtwo/cr.RX ()F
      // 16e: invokespecial sixtwo/ck.<init> (Lsixtwo/cl;F)V
      // 171: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 176: pop
      // 177: aload 6
      // 179: invokevirtual sixtwo/cr.RU ()F
      // 17c: fstore 7
      // 17e: aload 6
      // 180: invokevirtual sixtwo/cr.RW ()F
      // 183: fload 7
      // 185: fconst_2
      // 186: fdiv
      // 187: fadd
      // 188: aload 4
      // 18a: getfield net/minecraft/class_241.field_1343 F
      // 18d: fconst_2
      // 18e: fdiv
      // 18f: fcmpl
      // 190: aload 3
      // 191: ifnonnull 1e2
      // 194: ifle 1ca
      // 197: goto 19e
      // 19a: invokestatic sixtwo/cm.QR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 19d: athrow
      // 19e: aload 0
      // 19f: getfield sixtwo/cm.MENPa Ljava/util/List;
      // 1a2: new sixtwo/ck
      // 1a5: dup
      // 1a6: getstatic sixtwo/cl.zjBim Lsixtwo/cl;
      // 1a9: aload 6
      // 1ab: invokevirtual sixtwo/cr.RW ()F
      // 1ae: fload 7
      // 1b0: fadd
      // 1b1: invokespecial sixtwo/ck.<init> (Lsixtwo/cl;F)V
      // 1b4: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 1b9: pop
      // 1ba: aload 3
      // 1bb: ifnull 148
      // 1be: goto 1c5
      // 1c1: invokestatic sixtwo/cm.QR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c4: athrow
      // 1c5: ldc "f7HH9b"
      // 1c7: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 1ca: aload 0
      // 1cb: getfield sixtwo/cm.MENPa Ljava/util/List;
      // 1ce: new sixtwo/ck
      // 1d1: dup
      // 1d2: getstatic sixtwo/cl.zjBim Lsixtwo/cl;
      // 1d5: aload 6
      // 1d7: invokevirtual sixtwo/cr.RW ()F
      // 1da: invokespecial sixtwo/ck.<init> (Lsixtwo/cl;F)V
      // 1dd: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 1e2: pop
      // 1e3: aload 3
      // 1e4: ifnull 148
      // 1e7: return
   }

   private static native MatchException QR(MatchException var0);

   public native List<ck> QP();

   public native rk QQ();

   private static native void _d888335a83d063d9e5dc28decb42bdd5();
}
