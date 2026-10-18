package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.Iterator;
import java.util.List;
import net.minecraft.class_1297;
import net.minecraft.class_241;

public final class pj {
   private static boolean gCiXS;
   private static final long uxoYt = gb.aYR(-55151858593705340L, -8471187155727179904L, MethodHandles.lookup().lookupClass()).a(162730469679794L);

   static {
      if (!cNA()) {
         cNy(true);
      }
   }

   public static void cNs(lC var0, lc var1, class_1297 var2, List<? extends py> var3, boolean var4) {
      cNt(var0, var1, var2, var3, var4).render(var0);
   }

   private static MatchException cNB(MatchException var0) {
      return var0;
   }

   private static void cNu(List<pN> param0, lC param1, lc param2, class_1297 param3, boolean param4, pM param5, List<pz> param6, List<pE> param7) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/pj.uxoYt J
      // 003: ldc2_w 59471276526012
      // 006: lxor
      // 007: lstore 8
      // 009: fconst_0
      // 00a: fstore 11
      // 00c: invokestatic sixtwo/pj.cNA ()Z
      // 00f: aload 7
      // 011: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 016: astore 12
      // 018: istore 10
      // 01a: aload 12
      // 01c: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 021: ifeq 0df
      // 024: aload 12
      // 026: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 02b: checkcast sixtwo/pE
      // 02e: astore 13
      // 030: fconst_0
      // 031: aload 13
      // 033: aload 1
      // 034: aload 2
      // 035: aload 3
      // 036: iload 4
      // 038: invokeinterface sixtwo/pE.thickness (Lsixtwo/lC;Lsixtwo/lc;Lnet/minecraft/class_1297;Z)F 5
      // 03d: invokestatic java/lang/Math.max (FF)F
      // 040: fstore 14
      // 042: fload 14
      // 044: iload 10
      // 046: ifeq 0e0
      // 049: fconst_0
      // 04a: fcmpg
      // 04b: iload 10
      // 04d: ifeq 07d
      // 050: goto 057
      // 053: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 056: athrow
      // 057: ifgt 06d
      // 05a: goto 061
      // 05d: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 060: athrow
      // 061: iload 10
      // 063: ifne 01a
      // 066: goto 06d
      // 069: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06c: athrow
      // 06d: fload 11
      // 06f: iload 10
      // 071: ifeq 081
      // 074: fconst_0
      // 075: fcmpl
      // 076: goto 07d
      // 079: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07c: athrow
      // 07d: ifne 083
      // 080: fconst_2
      // 081: fstore 11
      // 083: aload 5
      // 085: getstatic sixtwo/pM.oFEYk Lsixtwo/pM;
      // 088: if_acmpne 09c
      // 08b: aload 2
      // 08c: invokevirtual sixtwo/lc.bXG ()F
      // 08f: fload 11
      // 091: fsub
      // 092: fload 14
      // 094: fsub
      // 095: fstore 15
      // 097: iload 10
      // 099: ifne 0a5
      // 09c: aload 2
      // 09d: invokevirtual sixtwo/lc.bXA ()F
      // 0a0: fload 11
      // 0a2: fadd
      // 0a3: fstore 15
      // 0a5: new sixtwo/lc
      // 0a8: dup
      // 0a9: aload 2
      // 0aa: invokevirtual sixtwo/lc.bXF ()F
      // 0ad: fload 15
      // 0af: aload 2
      // 0b0: invokevirtual sixtwo/lc.bXH ()F
      // 0b3: fload 14
      // 0b5: invokespecial sixtwo/lc.<init> (FFFF)V
      // 0b8: astore 16
      // 0ba: aload 0
      // 0bb: new sixtwo/pN
      // 0be: dup
      // 0bf: aload 13
      // 0c1: invokeinterface sixtwo/pE.element ()Lsixtwo/py; 1
      // 0c6: aload 16
      // 0c8: invokespecial sixtwo/pN.<init> (Lsixtwo/py;Lsixtwo/lc;)V
      // 0cb: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 0d0: pop
      // 0d1: fload 11
      // 0d3: fload 14
      // 0d5: fconst_2
      // 0d6: fadd
      // 0d7: fadd
      // 0d8: fstore 11
      // 0da: iload 10
      // 0dc: ifne 01a
      // 0df: fconst_0
      // 0e0: fstore 12
      // 0e2: new java/util/ArrayList
      // 0e5: dup
      // 0e6: aload 6
      // 0e8: invokeinterface java/util/List.size ()I 1
      // 0ed: invokespecial java/util/ArrayList.<init> (I)V
      // 0f0: astore 13
      // 0f2: aload 6
      // 0f4: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 0f9: astore 14
      // 0fb: aload 14
      // 0fd: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 102: ifeq 185
      // 105: aload 14
      // 107: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 10c: checkcast sixtwo/pz
      // 10f: astore 15
      // 111: aload 15
      // 113: aload 1
      // 114: aload 2
      // 115: aload 3
      // 116: iload 4
      // 118: invokeinterface sixtwo/pz.measure (Lsixtwo/lC;Lsixtwo/lc;Lnet/minecraft/class_1297;Z)Lnet/minecraft/class_241; 5
      // 11d: astore 16
      // 11f: aload 16
      // 121: getfield net/minecraft/class_241.field_1343 F
      // 124: fconst_0
      // 125: fcmpg
      // 126: iload 10
      // 128: ifeq 18c
      // 12b: iload 10
      // 12d: ifeq 148
      // 130: goto 137
      // 133: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 136: athrow
      // 137: ifle 0fb
      // 13a: goto 141
      // 13d: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 140: athrow
      // 141: aload 16
      // 143: getfield net/minecraft/class_241.field_1342 F
      // 146: fconst_0
      // 147: fcmpg
      // 148: iload 10
      // 14a: ifeq 175
      // 14d: ifgt 163
      // 150: goto 157
      // 153: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 156: athrow
      // 157: iload 10
      // 159: ifne 0fb
      // 15c: goto 163
      // 15f: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 162: athrow
      // 163: aload 13
      // 165: new sixtwo/pj$vu
      // 168: dup
      // 169: aload 15
      // 16b: aload 16
      // 16d: invokespecial sixtwo/pj$vu.<init> (Lsixtwo/pz;Lnet/minecraft/class_241;)V
      // 170: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 175: pop
      // 176: fload 12
      // 178: aload 16
      // 17a: getfield net/minecraft/class_241.field_1342 F
      // 17d: fadd
      // 17e: fstore 12
      // 180: iload 10
      // 182: ifne 0fb
      // 185: aload 13
      // 187: invokeinterface java/util/List.isEmpty ()Z 1
      // 18c: ifne 1a4
      // 18f: fload 12
      // 191: bipush 0
      // 192: aload 13
      // 194: invokeinterface java/util/List.size ()I 1
      // 199: bipush 1
      // 19a: isub
      // 19b: invokestatic java/lang/Math.max (II)I
      // 19e: i2f
      // 19f: fconst_2
      // 1a0: fmul
      // 1a1: fadd
      // 1a2: fstore 12
      // 1a4: fload 11
      // 1a6: fstore 14
      // 1a8: aload 13
      // 1aa: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 1af: astore 15
      // 1b1: aload 15
      // 1b3: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 1b8: ifeq 251
      // 1bb: aload 15
      // 1bd: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 1c2: checkcast sixtwo/pj$vu
      // 1c5: astore 16
      // 1c7: aload 16
      // 1c9: invokevirtual sixtwo/pj$vu.element ()Lsixtwo/pz;
      // 1cc: astore 17
      // 1ce: aload 16
      // 1d0: invokevirtual sixtwo/pj$vu.size ()Lnet/minecraft/class_241;
      // 1d3: astore 18
      // 1d5: aload 2
      // 1d6: invokevirtual sixtwo/lc.bXF ()F
      // 1d9: aload 2
      // 1da: invokevirtual sixtwo/lc.bXH ()F
      // 1dd: aload 18
      // 1df: getfield net/minecraft/class_241.field_1343 F
      // 1e2: fsub
      // 1e3: ldc_w 0.5
      // 1e6: fmul
      // 1e7: fadd
      // 1e8: fstore 19
      // 1ea: aload 5
      // 1ec: getstatic sixtwo/pM.oFEYk Lsixtwo/pM;
      // 1ef: if_acmpne 209
      // 1f2: aload 2
      // 1f3: invokevirtual sixtwo/lc.bXG ()F
      // 1f6: fload 11
      // 1f8: fsub
      // 1f9: fload 12
      // 1fb: fsub
      // 1fc: fload 14
      // 1fe: fload 11
      // 200: fsub
      // 201: fadd
      // 202: fstore 20
      // 204: iload 10
      // 206: ifne 212
      // 209: aload 2
      // 20a: invokevirtual sixtwo/lc.bXA ()F
      // 20d: fload 14
      // 20f: fadd
      // 210: fstore 20
      // 212: new sixtwo/lc
      // 215: dup
      // 216: fload 19
      // 218: fload 20
      // 21a: aload 18
      // 21c: getfield net/minecraft/class_241.field_1343 F
      // 21f: aload 18
      // 221: getfield net/minecraft/class_241.field_1342 F
      // 224: invokespecial sixtwo/lc.<init> (FFFF)V
      // 227: astore 21
      // 229: aload 0
      // 22a: new sixtwo/pN
      // 22d: dup
      // 22e: aload 17
      // 230: invokeinterface sixtwo/pz.element ()Lsixtwo/py; 1
      // 235: aload 21
      // 237: invokespecial sixtwo/pN.<init> (Lsixtwo/py;Lsixtwo/lc;)V
      // 23a: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 23f: pop
      // 240: fload 14
      // 242: aload 18
      // 244: getfield net/minecraft/class_241.field_1342 F
      // 247: fconst_2
      // 248: fadd
      // 249: fadd
      // 24a: fstore 14
      // 24c: iload 10
      // 24e: ifne 1b1
      // 251: return
   }

   private static void cNv(List<pN> param0, lC param1, lc param2, class_1297 param3, boolean param4, pM param5, List<pz> param6, List<pE> param7) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/pj.uxoYt J
      // 003: ldc2_w 45930677738478
      // 006: lxor
      // 007: lstore 8
      // 009: invokestatic sixtwo/pj.cNz ()Z
      // 00c: fconst_0
      // 00d: fstore 11
      // 00f: aload 7
      // 011: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 016: astore 12
      // 018: istore 10
      // 01a: aload 12
      // 01c: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 021: ifeq 0df
      // 024: aload 12
      // 026: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 02b: checkcast sixtwo/pE
      // 02e: astore 13
      // 030: fconst_0
      // 031: aload 13
      // 033: aload 1
      // 034: aload 2
      // 035: aload 3
      // 036: iload 4
      // 038: invokeinterface sixtwo/pE.thickness (Lsixtwo/lC;Lsixtwo/lc;Lnet/minecraft/class_1297;Z)F 5
      // 03d: invokestatic java/lang/Math.max (FF)F
      // 040: fstore 14
      // 042: fload 14
      // 044: iload 10
      // 046: ifne 0e0
      // 049: fconst_0
      // 04a: fcmpg
      // 04b: iload 10
      // 04d: ifne 07d
      // 050: goto 057
      // 053: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 056: athrow
      // 057: ifgt 06d
      // 05a: goto 061
      // 05d: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 060: athrow
      // 061: iload 10
      // 063: ifeq 01a
      // 066: goto 06d
      // 069: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06c: athrow
      // 06d: fload 11
      // 06f: iload 10
      // 071: ifne 081
      // 074: fconst_0
      // 075: fcmpl
      // 076: goto 07d
      // 079: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07c: athrow
      // 07d: ifne 083
      // 080: fconst_2
      // 081: fstore 11
      // 083: aload 5
      // 085: getstatic sixtwo/pM.DXMaR Lsixtwo/pM;
      // 088: if_acmpne 09c
      // 08b: aload 2
      // 08c: invokevirtual sixtwo/lc.bXF ()F
      // 08f: fload 11
      // 091: fsub
      // 092: fload 14
      // 094: fsub
      // 095: fstore 15
      // 097: iload 10
      // 099: ifeq 0a5
      // 09c: aload 2
      // 09d: invokevirtual sixtwo/lc.bXz ()F
      // 0a0: fload 11
      // 0a2: fadd
      // 0a3: fstore 15
      // 0a5: new sixtwo/lc
      // 0a8: dup
      // 0a9: fload 15
      // 0ab: aload 2
      // 0ac: invokevirtual sixtwo/lc.bXG ()F
      // 0af: fload 14
      // 0b1: aload 2
      // 0b2: invokevirtual sixtwo/lc.bXI ()F
      // 0b5: invokespecial sixtwo/lc.<init> (FFFF)V
      // 0b8: astore 16
      // 0ba: aload 0
      // 0bb: new sixtwo/pN
      // 0be: dup
      // 0bf: aload 13
      // 0c1: invokeinterface sixtwo/pE.element ()Lsixtwo/py; 1
      // 0c6: aload 16
      // 0c8: invokespecial sixtwo/pN.<init> (Lsixtwo/py;Lsixtwo/lc;)V
      // 0cb: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 0d0: pop
      // 0d1: fload 11
      // 0d3: fload 14
      // 0d5: fconst_2
      // 0d6: fadd
      // 0d7: fadd
      // 0d8: fstore 11
      // 0da: iload 10
      // 0dc: ifeq 01a
      // 0df: fconst_0
      // 0e0: fstore 12
      // 0e2: new java/util/EnumMap
      // 0e5: dup
      // 0e6: ldc_w sixtwo/pK
      // 0e9: invokespecial java/util/EnumMap.<init> (Ljava/lang/Class;)V
      // 0ec: astore 13
      // 0ee: invokestatic sixtwo/pK.values ()[Lsixtwo/pK;
      // 0f1: astore 14
      // 0f3: aload 14
      // 0f5: arraylength
      // 0f6: istore 15
      // 0f8: bipush 0
      // 0f9: istore 16
      // 0fb: iload 16
      // 0fd: iload 15
      // 0ff: if_icmpge 122
      // 102: aload 14
      // 104: iload 16
      // 106: aaload
      // 107: astore 17
      // 109: aload 13
      // 10b: aload 17
      // 10d: new java/util/ArrayList
      // 110: dup
      // 111: invokespecial java/util/ArrayList.<init> ()V
      // 114: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 119: pop
      // 11a: iinc 16 1
      // 11d: iload 10
      // 11f: ifeq 0fb
      // 122: aload 6
      // 124: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 129: astore 14
      // 12b: aload 14
      // 12d: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 132: ifeq 1de
      // 135: aload 14
      // 137: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 13c: checkcast sixtwo/pz
      // 13f: astore 15
      // 141: aload 15
      // 143: aload 1
      // 144: aload 2
      // 145: aload 3
      // 146: iload 4
      // 148: invokeinterface sixtwo/pz.measure (Lsixtwo/lC;Lsixtwo/lc;Lnet/minecraft/class_1297;Z)Lnet/minecraft/class_241; 5
      // 14d: astore 16
      // 14f: aload 16
      // 151: getfield net/minecraft/class_241.field_1343 F
      // 154: fconst_0
      // 155: iload 10
      // 157: ifne 1fd
      // 15a: fcmpg
      // 15b: iload 10
      // 15d: ifne 178
      // 160: goto 167
      // 163: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 166: athrow
      // 167: ifle 12b
      // 16a: goto 171
      // 16d: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 170: athrow
      // 171: aload 16
      // 173: getfield net/minecraft/class_241.field_1342 F
      // 176: fconst_0
      // 177: fcmpg
      // 178: ifgt 187
      // 17b: iload 10
      // 17d: ifeq 12b
      // 180: goto 187
      // 183: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 186: athrow
      // 187: aload 15
      // 189: iload 10
      // 18b: ifne 1a9
      // 18e: invokeinterface sixtwo/pz.verticalAnchor ()Lsixtwo/pK; 1
      // 193: ifnonnull 1a7
      // 196: goto 19d
      // 199: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 19c: athrow
      // 19d: getstatic sixtwo/pK.AkTYU Lsixtwo/pK;
      // 1a0: goto 1ae
      // 1a3: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a6: athrow
      // 1a7: aload 15
      // 1a9: invokeinterface sixtwo/pz.verticalAnchor ()Lsixtwo/pK; 1
      // 1ae: astore 17
      // 1b0: aload 13
      // 1b2: aload 17
      // 1b4: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 1b9: checkcast java/util/List
      // 1bc: new sixtwo/pj$vu
      // 1bf: dup
      // 1c0: aload 15
      // 1c2: aload 16
      // 1c4: invokespecial sixtwo/pj$vu.<init> (Lsixtwo/pz;Lnet/minecraft/class_241;)V
      // 1c7: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 1cc: pop
      // 1cd: fload 12
      // 1cf: aload 16
      // 1d1: getfield net/minecraft/class_241.field_1343 F
      // 1d4: invokestatic java/lang/Math.max (FF)F
      // 1d7: fstore 12
      // 1d9: iload 10
      // 1db: ifeq 12b
      // 1de: aload 5
      // 1e0: getstatic sixtwo/pM.DXMaR Lsixtwo/pM;
      // 1e3: if_acmpne 1f7
      // 1e6: aload 2
      // 1e7: invokevirtual sixtwo/lc.bXF ()F
      // 1ea: fload 11
      // 1ec: fsub
      // 1ed: fload 12
      // 1ef: fsub
      // 1f0: goto 1fe
      // 1f3: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f6: athrow
      // 1f7: aload 2
      // 1f8: invokevirtual sixtwo/lc.bXz ()F
      // 1fb: fload 11
      // 1fd: fadd
      // 1fe: fstore 14
      // 200: aload 0
      // 201: aload 5
      // 203: fload 14
      // 205: fload 12
      // 207: aload 13
      // 209: getstatic sixtwo/pK.OydiO Lsixtwo/pK;
      // 20c: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 211: checkcast java/util/List
      // 214: aload 2
      // 215: invokevirtual sixtwo/lc.bXG ()F
      // 218: invokestatic sixtwo/pj.cNw (Ljava/util/List;Lsixtwo/pM;FFLjava/util/List;F)V
      // 21b: aload 13
      // 21d: getstatic sixtwo/pK.AkTYU Lsixtwo/pK;
      // 220: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 225: checkcast java/util/List
      // 228: astore 15
      // 22a: aload 2
      // 22b: invokevirtual sixtwo/lc.bXG ()F
      // 22e: fconst_0
      // 22f: aload 2
      // 230: invokevirtual sixtwo/lc.bXI ()F
      // 233: aload 15
      // 235: invokestatic sixtwo/pj.cNx (Ljava/util/List;)F
      // 238: fsub
      // 239: ldc_w 0.5
      // 23c: fmul
      // 23d: invokestatic java/lang/Math.max (FF)F
      // 240: fadd
      // 241: fstore 16
      // 243: aload 0
      // 244: aload 5
      // 246: fload 14
      // 248: fload 12
      // 24a: aload 15
      // 24c: fload 16
      // 24e: invokestatic sixtwo/pj.cNw (Ljava/util/List;Lsixtwo/pM;FFLjava/util/List;F)V
      // 251: aload 13
      // 253: getstatic sixtwo/pK.Gnbzp Lsixtwo/pK;
      // 256: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 25b: checkcast java/util/List
      // 25e: astore 17
      // 260: aload 2
      // 261: invokevirtual sixtwo/lc.bXA ()F
      // 264: aload 17
      // 266: invokestatic sixtwo/pj.cNx (Ljava/util/List;)F
      // 269: fsub
      // 26a: fstore 18
      // 26c: aload 0
      // 26d: aload 5
      // 26f: fload 14
      // 271: fload 12
      // 273: aload 17
      // 275: fload 18
      // 277: invokestatic sixtwo/pj.cNw (Ljava/util/List;Lsixtwo/pM;FFLjava/util/List;F)V
      // 27a: return
   }

   public static void cNy(boolean var0) {
      gCiXS = var0;
   }

   public static boolean cNz() {
      return gCiXS;
   }

   private static void cNw(List<pN> var0, pM var1, float var2, float var3, List<pj$vu> var4, float var5) {
      long var6 = uxoYt ^ 128636704496876L;
      float var9 = var5;
      boolean var10000 = cNA();
      Iterator var10 = var4.iterator();
      boolean var8 = var10000;

      while (var10.hasNext()) {
         pj$vu var11 = (pj$vu)var10.next();
         class_241 var12 = var11.size();

         label24: {
            try {
               if (var1 == pM.DXMaR) {
                  var16 = var2 + (var3 - var12.field_1343);
                  break label24;
               }
            } catch (MatchException var15) {
               throw cNB(var15);
            }

            var16 = var2;
         }

         float var13 = var16;
         lc var14 = new lc(var13, var9, var12.field_1343, var12.field_1342);
         var0.add(new pN(var11.element().element(), var14));
         var9 += var12.field_1342 + 2.0F;
         if (!var8) {
            break;
         }
      }
   }

   public static pi cNt(lC param0, lc param1, class_1297 param2, List<? extends py> param3, boolean param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/pj.uxoYt J
      // 003: ldc2_w 89592540764880
      // 006: lxor
      // 007: lstore 5
      // 009: invokestatic sixtwo/pj.cNz ()Z
      // 00c: istore 7
      // 00e: aload 0
      // 00f: ifnull 03d
      // 012: aload 1
      // 013: ifnull 03d
      // 016: goto 01d
      // 019: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01c: athrow
      // 01d: aload 3
      // 01e: iload 7
      // 020: ifne 035
      // 023: goto 02a
      // 026: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 029: athrow
      // 02a: ifnull 03d
      // 02d: goto 034
      // 030: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 033: athrow
      // 034: aload 3
      // 035: invokeinterface java/util/List.isEmpty ()Z 1
      // 03a: ifeq 050
      // 03d: new sixtwo/pi
      // 040: dup
      // 041: aload 1
      // 042: invokestatic java/util/List.of ()Ljava/util/List;
      // 045: aload 2
      // 046: iload 4
      // 048: invokespecial sixtwo/pi.<init> (Lsixtwo/lc;Ljava/util/List;Lnet/minecraft/class_1297;Z)V
      // 04b: areturn
      // 04c: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 04f: athrow
      // 050: new java/util/ArrayList
      // 053: dup
      // 054: invokespecial java/util/ArrayList.<init> ()V
      // 057: astore 8
      // 059: new java/util/EnumMap
      // 05c: dup
      // 05d: ldc sixtwo/pM
      // 05f: invokespecial java/util/EnumMap.<init> (Ljava/lang/Class;)V
      // 062: astore 9
      // 064: new java/util/EnumMap
      // 067: dup
      // 068: ldc sixtwo/pM
      // 06a: invokespecial java/util/EnumMap.<init> (Ljava/lang/Class;)V
      // 06d: astore 10
      // 06f: new java/util/ArrayList
      // 072: dup
      // 073: invokespecial java/util/ArrayList.<init> ()V
      // 076: astore 11
      // 078: invokestatic sixtwo/pM.values ()[Lsixtwo/pM;
      // 07b: astore 12
      // 07d: aload 12
      // 07f: arraylength
      // 080: istore 13
      // 082: bipush 0
      // 083: istore 14
      // 085: iload 14
      // 087: iload 13
      // 089: if_icmpge 0bd
      // 08c: aload 12
      // 08e: iload 14
      // 090: aaload
      // 091: astore 15
      // 093: aload 9
      // 095: aload 15
      // 097: new java/util/ArrayList
      // 09a: dup
      // 09b: invokespecial java/util/ArrayList.<init> ()V
      // 09e: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 0a3: pop
      // 0a4: aload 10
      // 0a6: aload 15
      // 0a8: new java/util/ArrayList
      // 0ab: dup
      // 0ac: invokespecial java/util/ArrayList.<init> ()V
      // 0af: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 0b4: pop
      // 0b5: iinc 14 1
      // 0b8: iload 7
      // 0ba: ifeq 085
      // 0bd: aload 3
      // 0be: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 0c3: astore 12
      // 0c5: aload 12
      // 0c7: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0cc: ifeq 223
      // 0cf: aload 12
      // 0d1: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 0d6: checkcast sixtwo/py
      // 0d9: astore 13
      // 0db: aload 13
      // 0dd: iload 7
      // 0df: ifne 107
      // 0e2: ifnonnull 0f8
      // 0e5: goto 0ec
      // 0e8: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0eb: athrow
      // 0ec: iload 7
      // 0ee: ifeq 0c5
      // 0f1: goto 0f8
      // 0f4: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f7: athrow
      // 0f8: aload 13
      // 0fa: invokevirtual sixtwo/py.cQN ()Lsixtwo/rk;
      // 0fd: aload 13
      // 0ff: invokevirtual sixtwo/py.active ()Z
      // 102: invokevirtual sixtwo/rk.dhc (Z)V
      // 105: aload 13
      // 107: invokevirtual sixtwo/py.cQN ()Lsixtwo/rk;
      // 10a: invokevirtual sixtwo/rk.dhj ()F
      // 10d: fstore 14
      // 10f: aload 13
      // 111: invokevirtual sixtwo/py.active ()Z
      // 114: iload 7
      // 116: ifne 14e
      // 119: ifne 149
      // 11c: goto 123
      // 11f: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 122: athrow
      // 123: fload 14
      // 125: fconst_0
      // 126: fcmpg
      // 127: iload 7
      // 129: ifne 14e
      // 12c: goto 133
      // 12f: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 132: athrow
      // 133: ifgt 149
      // 136: goto 13d
      // 139: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13c: athrow
      // 13d: iload 7
      // 13f: ifeq 0c5
      // 142: goto 149
      // 145: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 148: athrow
      // 149: aload 13
      // 14b: instanceof sixtwo/pC
      // 14e: iload 7
      // 150: ifne 173
      // 153: ifeq 16e
      // 156: goto 15d
      // 159: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 15c: athrow
      // 15d: aload 8
      // 15f: aload 13
      // 161: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 166: pop
      // 167: goto 16e
      // 16a: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 16d: athrow
      // 16e: aload 13
      // 170: instanceof sixtwo/pz
      // 173: iload 7
      // 175: ifne 1d7
      // 178: ifeq 1c6
      // 17b: goto 182
      // 17e: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 181: athrow
      // 182: aload 13
      // 184: checkcast sixtwo/pz
      // 187: astore 15
      // 189: aload 15
      // 18b: iload 7
      // 18d: ifne 1ab
      // 190: invokeinterface sixtwo/pz.position ()Lsixtwo/pM; 1
      // 195: ifnonnull 1a9
      // 198: goto 19f
      // 19b: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 19e: athrow
      // 19f: getstatic sixtwo/pM.oFEYk Lsixtwo/pM;
      // 1a2: goto 1b0
      // 1a5: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a8: athrow
      // 1a9: aload 15
      // 1ab: invokeinterface sixtwo/pz.position ()Lsixtwo/pM; 1
      // 1b0: astore 16
      // 1b2: aload 9
      // 1b4: aload 16
      // 1b6: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 1bb: checkcast java/util/List
      // 1be: aload 15
      // 1c0: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 1c5: pop
      // 1c6: aload 13
      // 1c8: iload 7
      // 1ca: ifne 1dc
      // 1cd: instanceof sixtwo/pE
      // 1d0: goto 1d7
      // 1d3: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d6: athrow
      // 1d7: ifeq 21e
      // 1da: aload 13
      // 1dc: checkcast sixtwo/pE
      // 1df: astore 15
      // 1e1: aload 15
      // 1e3: iload 7
      // 1e5: ifne 203
      // 1e8: invokeinterface sixtwo/pE.position ()Lsixtwo/pM; 1
      // 1ed: ifnonnull 201
      // 1f0: goto 1f7
      // 1f3: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f6: athrow
      // 1f7: getstatic sixtwo/pM.oFEYk Lsixtwo/pM;
      // 1fa: goto 208
      // 1fd: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 200: athrow
      // 201: aload 15
      // 203: invokeinterface sixtwo/pE.position ()Lsixtwo/pM; 1
      // 208: astore 16
      // 20a: aload 10
      // 20c: aload 16
      // 20e: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 213: checkcast java/util/List
      // 216: aload 15
      // 218: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 21d: pop
      // 21e: iload 7
      // 220: ifeq 0c5
      // 223: invokedynamic applyAsInt ()Ljava/util/function/ToIntFunction; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)I, sixtwo/px.order ()I, (Lsixtwo/pz;)I ]
      // 228: invokestatic java/util/Comparator.comparingInt (Ljava/util/function/ToIntFunction;)Ljava/util/Comparator;
      // 22b: astore 12
      // 22d: invokedynamic applyAsInt ()Ljava/util/function/ToIntFunction; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)I, sixtwo/px.order ()I, (Lsixtwo/pE;)I ]
      // 232: invokestatic java/util/Comparator.comparingInt (Ljava/util/function/ToIntFunction;)Ljava/util/Comparator;
      // 235: astore 13
      // 237: invokestatic sixtwo/pM.values ()[Lsixtwo/pM;
      // 23a: astore 14
      // 23c: aload 14
      // 23e: arraylength
      // 23f: istore 15
      // 241: bipush 0
      // 242: istore 16
      // 244: iload 16
      // 246: iload 15
      // 248: if_icmpge 280
      // 24b: aload 14
      // 24d: iload 16
      // 24f: aaload
      // 250: astore 17
      // 252: aload 9
      // 254: aload 17
      // 256: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 25b: checkcast java/util/List
      // 25e: aload 12
      // 260: invokeinterface java/util/List.sort (Ljava/util/Comparator;)V 2
      // 265: aload 10
      // 267: aload 17
      // 269: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 26e: checkcast java/util/List
      // 271: aload 13
      // 273: invokeinterface java/util/List.sort (Ljava/util/Comparator;)V 2
      // 278: iinc 16 1
      // 27b: iload 7
      // 27d: ifeq 244
      // 280: aload 8
      // 282: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 287: astore 14
      // 289: aload 14
      // 28b: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 290: ifeq 2c2
      // 293: aload 14
      // 295: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 29a: checkcast sixtwo/py
      // 29d: astore 15
      // 29f: aload 11
      // 2a1: new sixtwo/pN
      // 2a4: dup
      // 2a5: aload 15
      // 2a7: aload 1
      // 2a8: invokespecial sixtwo/pN.<init> (Lsixtwo/py;Lsixtwo/lc;)V
      // 2ab: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 2b0: pop
      // 2b1: iload 7
      // 2b3: ifne 35e
      // 2b6: iload 7
      // 2b8: ifeq 289
      // 2bb: goto 2c2
      // 2be: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c1: athrow
      // 2c2: aload 11
      // 2c4: aload 0
      // 2c5: aload 1
      // 2c6: aload 2
      // 2c7: iload 4
      // 2c9: getstatic sixtwo/pM.oFEYk Lsixtwo/pM;
      // 2cc: aload 9
      // 2ce: getstatic sixtwo/pM.oFEYk Lsixtwo/pM;
      // 2d1: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 2d6: checkcast java/util/List
      // 2d9: aload 10
      // 2db: getstatic sixtwo/pM.oFEYk Lsixtwo/pM;
      // 2de: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 2e3: checkcast java/util/List
      // 2e6: invokestatic sixtwo/pj.cNu (Ljava/util/List;Lsixtwo/lC;Lsixtwo/lc;Lnet/minecraft/class_1297;ZLsixtwo/pM;Ljava/util/List;Ljava/util/List;)V
      // 2e9: aload 11
      // 2eb: aload 0
      // 2ec: aload 1
      // 2ed: aload 2
      // 2ee: iload 4
      // 2f0: getstatic sixtwo/pM.gvTMb Lsixtwo/pM;
      // 2f3: aload 9
      // 2f5: getstatic sixtwo/pM.gvTMb Lsixtwo/pM;
      // 2f8: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 2fd: checkcast java/util/List
      // 300: aload 10
      // 302: getstatic sixtwo/pM.gvTMb Lsixtwo/pM;
      // 305: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 30a: checkcast java/util/List
      // 30d: invokestatic sixtwo/pj.cNu (Ljava/util/List;Lsixtwo/lC;Lsixtwo/lc;Lnet/minecraft/class_1297;ZLsixtwo/pM;Ljava/util/List;Ljava/util/List;)V
      // 310: aload 11
      // 312: aload 0
      // 313: aload 1
      // 314: aload 2
      // 315: iload 4
      // 317: getstatic sixtwo/pM.DXMaR Lsixtwo/pM;
      // 31a: aload 9
      // 31c: getstatic sixtwo/pM.DXMaR Lsixtwo/pM;
      // 31f: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 324: checkcast java/util/List
      // 327: aload 10
      // 329: getstatic sixtwo/pM.DXMaR Lsixtwo/pM;
      // 32c: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 331: checkcast java/util/List
      // 334: invokestatic sixtwo/pj.cNv (Ljava/util/List;Lsixtwo/lC;Lsixtwo/lc;Lnet/minecraft/class_1297;ZLsixtwo/pM;Ljava/util/List;Ljava/util/List;)V
      // 337: aload 11
      // 339: aload 0
      // 33a: aload 1
      // 33b: aload 2
      // 33c: iload 4
      // 33e: getstatic sixtwo/pM.ODjfB Lsixtwo/pM;
      // 341: aload 9
      // 343: getstatic sixtwo/pM.ODjfB Lsixtwo/pM;
      // 346: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 34b: checkcast java/util/List
      // 34e: aload 10
      // 350: getstatic sixtwo/pM.ODjfB Lsixtwo/pM;
      // 353: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 358: checkcast java/util/List
      // 35b: invokestatic sixtwo/pj.cNv (Ljava/util/List;Lsixtwo/lC;Lsixtwo/lc;Lnet/minecraft/class_1297;ZLsixtwo/pM;Ljava/util/List;Ljava/util/List;)V
      // 35e: new sixtwo/pi
      // 361: dup
      // 362: aload 1
      // 363: aload 11
      // 365: aload 2
      // 366: iload 4
      // 368: invokespecial sixtwo/pi.<init> (Lsixtwo/lc;Ljava/util/List;Lnet/minecraft/class_1297;Z)V
      // 36b: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 36e: ifnonnull 389
      // 371: iload 7
      // 373: ifeq 385
      // 376: goto 37d
      // 379: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 37c: athrow
      // 37d: bipush 0
      // 37e: goto 386
      // 381: invokestatic sixtwo/pj.cNB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 384: athrow
      // 385: bipush 1
      // 386: invokestatic sixtwo/pj.cNy (Z)V
      // 389: areturn
   }

   public static boolean cNA() {
      boolean var0 = cNz();

      try {
         return !var0;
      } catch (MatchException var1) {
         throw cNB(var1);
      }
   }

   private static float cNx(List<pj$vu> var0) {
      long var1 = uxoYt ^ 120659993496L;
      float var4 = 0.0F;
      boolean var10000 = cNz();
      Iterator var5 = var0.iterator();
      boolean var3 = var10000;

      while (true) {
         if (var5.hasNext()) {
            pj$vu var6 = (pj$vu)var5.next();
            var4 += var6.size().field_1342;

            try {
               if (var3) {
                  break;
               }

               if (!var3) {
                  continue;
               }
            } catch (MatchException var7) {
               throw cNB(var7);
            }
         }

         if (!var0.isEmpty()) {
            var4 += Math.max(0, var0.size() - 1) * 2.0F;
         }
         break;
      }

      return var4;
   }
}
