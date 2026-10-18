package sixtwo;

import java.lang.invoke.MethodHandles;

public abstract class aF extends aE {
   private static final long wQvIR = gb.aYR(-5792822587876812145L, -1424579896363128256L, MethodHandles.lookup().lookupClass()).a(161422166250848L);

   public aF(int[] var1) {
      super(var1);
   }

   @Override
   public void fX(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/aF.wQvIR J
      // 003: ldc2_w 61936028460497
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/aE.vG ()[Lsixtwo/iS;
      // 00b: aload 0
      // 00c: getfield sixtwo/aF.MCnYt F
      // 00f: fstore 5
      // 011: astore 4
      // 013: aload 0
      // 014: getfield sixtwo/aF.pNyTQ F
      // 017: fstore 6
      // 019: aload 0
      // 01a: invokevirtual sixtwo/aF.tR ()I
      // 01d: istore 7
      // 01f: ldc 10.0
      // 021: fstore 8
      // 023: aload 0
      // 024: invokevirtual sixtwo/aF.vI ()F
      // 027: fstore 9
      // 029: aload 0
      // 02a: invokevirtual sixtwo/aF.vJ ()F
      // 02d: fstore 10
      // 02f: aload 0
      // 030: getfield sixtwo/aF.LGwHI Ljava/util/List;
      // 033: invokeinterface java/util/List.size ()I 1
      // 038: istore 11
      // 03a: iload 11
      // 03c: aload 4
      // 03e: ifnonnull 05a
      // 041: ifne 053
      // 044: goto 04b
      // 047: invokestatic sixtwo/aF.vK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 04a: athrow
      // 04b: bipush 0
      // 04c: goto 05d
      // 04f: invokestatic sixtwo/aF.vK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 052: athrow
      // 053: iload 11
      // 055: iload 7
      // 057: iadd
      // 058: bipush 1
      // 059: isub
      // 05a: iload 7
      // 05c: idiv
      // 05d: istore 12
      // 05f: fconst_0
      // 060: fstore 13
      // 062: iload 11
      // 064: aload 4
      // 066: ifnonnull 08b
      // 069: ifle 089
      // 06c: goto 073
      // 06f: invokestatic sixtwo/aF.vK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 072: athrow
      // 073: aload 0
      // 074: getfield sixtwo/aF.LGwHI Ljava/util/List;
      // 077: bipush 0
      // 078: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 07d: checkcast sixtwo/az
      // 080: astore 14
      // 082: aload 14
      // 084: invokevirtual sixtwo/az.dn ()F
      // 087: fstore 13
      // 089: iload 12
      // 08b: aload 4
      // 08d: ifnonnull 0a4
      // 090: ifgt 0a2
      // 093: goto 09a
      // 096: invokestatic sixtwo/aF.vK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 099: athrow
      // 09a: fconst_0
      // 09b: goto 0b5
      // 09e: invokestatic sixtwo/aF.vK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a1: athrow
      // 0a2: iload 12
      // 0a4: i2f
      // 0a5: fload 13
      // 0a7: fmul
      // 0a8: bipush 0
      // 0a9: iload 12
      // 0ab: bipush 1
      // 0ac: isub
      // 0ad: invokestatic java/lang/Math.max (II)I
      // 0b0: i2f
      // 0b1: fload 10
      // 0b3: fmul
      // 0b4: fadd
      // 0b5: fstore 14
      // 0b7: fconst_0
      // 0b8: aload 0
      // 0b9: getfield sixtwo/aF.WjISQ F
      // 0bc: invokestatic java/lang/Math.max (FF)F
      // 0bf: fstore 15
      // 0c1: fload 14
      // 0c3: fload 15
      // 0c5: fsub
      // 0c6: fstore 16
      // 0c8: fconst_0
      // 0c9: fload 16
      // 0cb: invokestatic java/lang/Math.max (FF)F
      // 0ce: f2d
      // 0cf: dstore 17
      // 0d1: fload 16
      // 0d3: aload 4
      // 0d5: ifnonnull 0fa
      // 0d8: fconst_0
      // 0d9: fcmpl
      // 0da: ifle 0ec
      // 0dd: goto 0e4
      // 0e0: invokestatic sixtwo/aF.vK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e3: athrow
      // 0e4: dload 17
      // 0e6: fload 8
      // 0e8: f2d
      // 0e9: dadd
      // 0ea: dstore 17
      // 0ec: invokestatic sixtwo/bl.Ex ()Lsixtwo/bl;
      // 0ef: invokevirtual sixtwo/bl.Ez ()Lsixtwo/ah;
      // 0f2: dload 17
      // 0f4: invokevirtual sixtwo/ah.nQ (D)Lsixtwo/ah;
      // 0f7: pop
      // 0f8: fload 5
      // 0fa: fstore 19
      // 0fc: fload 6
      // 0fe: f2d
      // 0ff: invokestatic sixtwo/bl.Ex ()Lsixtwo/bl;
      // 102: invokevirtual sixtwo/bl.Ez ()Lsixtwo/ah;
      // 105: invokevirtual sixtwo/ah.nH ()D
      // 108: dsub
      // 109: d2f
      // 10a: fstore 20
      // 10c: bipush 0
      // 10d: istore 21
      // 10f: iload 21
      // 111: aload 0
      // 112: getfield sixtwo/aF.LGwHI Ljava/util/List;
      // 115: invokeinterface java/util/List.size ()I 1
      // 11a: if_icmpge 178
      // 11d: aload 0
      // 11e: getfield sixtwo/aF.LGwHI Ljava/util/List;
      // 121: iload 21
      // 123: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 128: checkcast sixtwo/az
      // 12b: astore 22
      // 12d: aload 22
      // 12f: fload 19
      // 131: fload 20
      // 133: invokevirtual sixtwo/az.sW (FF)Lsixtwo/az;
      // 136: pop
      // 137: fload 19
      // 139: aload 22
      // 13b: invokevirtual sixtwo/az.kN ()F
      // 13e: fload 9
      // 140: fadd
      // 141: fadd
      // 142: fstore 19
      // 144: aload 4
      // 146: ifnonnull 16e
      // 149: iload 21
      // 14b: bipush 1
      // 14c: iadd
      // 14d: iload 7
      // 14f: irem
      // 150: ifne 16b
      // 153: goto 15a
      // 156: invokestatic sixtwo/aF.vK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 159: athrow
      // 15a: fload 5
      // 15c: fstore 19
      // 15e: fload 20
      // 160: aload 22
      // 162: invokevirtual sixtwo/az.dn ()F
      // 165: fload 10
      // 167: fadd
      // 168: fadd
      // 169: fstore 20
      // 16b: iinc 21 1
      // 16e: aload 4
      // 170: ifnull 10f
      // 173: ldc "yXAPCc"
      // 175: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 178: return
   }

   public float vJ() {
      return 5.0F;
   }

   public float vI() {
      return 5.0F;
   }

   protected abstract int tR();

   private static MatchException vK(MatchException var0) {
      return var0;
   }
}
