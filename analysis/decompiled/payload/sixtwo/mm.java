package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_243;
import net.minecraft.class_4587;
import net.minecraft.class_7833;

public class mm extends mq implements lG {
   private float nHHba;
   private final float xWRpb;
   private final int CTmHp;
   private final long VSmWz;
   private boolean cIWFA = false;
   private static int dQaMV;
   private static final long oEeog = gb.aYR(328948364182937956L, -1488710637705604069L, MethodHandles.lookup().lookupClass()).a(272021838087009L);
   private static final long ZRQxW;

   public mm(class_243 var1, class_243 var2, mp var3, float var4, int var5, cA var6, cA var7) {
      super(var1, var2, var3, var4);
      this.CTmHp = var5;
      this.VSmWz = System.currentTimeMillis();
      this.nHHba = var6.UN().floatValue();
      this.xWRpb = var7.UN().floatValue();
   }

   static {
      long var0 = oEeog ^ 60048627737016L;
      clv(0);
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = -7482999287654472051L;
      byte[] var6 = var2.doFinal(
         new byte[]{
            (byte)(var4 >>> 56),
            (byte)(var4 >>> 48),
            (byte)(var4 >>> 40),
            (byte)(var4 >>> 32),
            (byte)(var4 >>> 24),
            (byte)(var4 >>> 16),
            (byte)(var4 >>> 8),
            (byte)var4
         }
      );
      long var7 = (var6[0] & 255L) << 56
         | (var6[1] & 255L) << 48
         | (var6[2] & 255L) << 40
         | (var6[3] & 255L) << 32
         | (var6[4] & 255L) << 24
         | (var6[5] & 255L) << 16
         | (var6[6] & 255L) << 8
         | var6[7] & 255L;
      byte var10001 = -1;
      ZRQxW = var7;
   }

   @Override
   public void cls(class_4587 var1, float var2) {
      float var3 = 0.07F;
      jI.bIs(var1, this.clL(var2));
      var1.method_22905(var3, var3, var3);
      jI.bIt(var1, this.hMiLh / 2.0F);
      jI.bIu(var1);
      var1.method_22907(class_7833.field_40718.rotationDegrees(this.nHHba = this.nHHba + var2 * this.xWRpb));
      jI.bIt(var1, -this.hMiLh / 2.0F);
   }

   public static void clv(int var0) {
      dQaMV = var0;
   }

   private boolean clt(double param1, double param3, double param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mm.oEeog J
      // 03: ldc2_w 1695705788615
      // 06: lxor
      // 07: lstore 7
      // 09: invokestatic sixtwo/mm.clw ()I
      // 0c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 12: dload 1
      // 13: dload 3
      // 14: dload 5
      // 16: invokestatic net/minecraft/class_2338.method_49637 (DDD)Lnet/minecraft/class_2338;
      // 19: invokevirtual net/minecraft/class_638.method_8320 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_2680;
      // 1c: invokevirtual net/minecraft/class_2680.method_26204 ()Lnet/minecraft/class_2248;
      // 1f: astore 10
      // 21: istore 9
      // 23: aload 10
      // 25: iload 9
      // 27: ifne 40
      // 2a: instanceof net/minecraft/class_2189
      // 2d: ifne 69
      // 30: goto 37
      // 33: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: aload 10
      // 39: goto 40
      // 3c: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3f: athrow
      // 40: getstatic net/minecraft/class_2246.field_10382 Lnet/minecraft/class_2248;
      // 43: iload 9
      // 45: ifne 5e
      // 48: if_acmpeq 69
      // 4b: goto 52
      // 4e: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51: athrow
      // 52: aload 10
      // 54: getstatic net/minecraft/class_2246.field_10164 Lnet/minecraft/class_2248;
      // 57: goto 5e
      // 5a: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5d: athrow
      // 5e: if_acmpeq 69
      // 61: bipush 1
      // 62: goto 6a
      // 65: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 68: athrow
      // 69: bipush 0
      // 6a: ireturn
   }

   private static MatchException cly(MatchException var0) {
      return var0;
   }

   public static int clx() {
      int var0 = clw();

      try {
         return var0 == 0 ? 64 : 0;
      } catch (MatchException var1) {
         throw cly(var1);
      }
   }

   public long clu() {
      return this.VSmWz;
   }

   public static int clw() {
      return dQaMV;
   }

   @Override
   public boolean clp() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/mm.oEeog J
      // 003: ldc2_w 90437864794010
      // 006: lxor
      // 007: lstore 1
      // 008: aload 0
      // 009: getfield sixtwo/mm.AkpJr Lnet/minecraft/class_243;
      // 00c: invokevirtual net/minecraft/class_243.method_37267 ()D
      // 00f: dstore 4
      // 011: invokestatic sixtwo/mm.clw ()I
      // 014: aload 0
      // 015: aload 0
      // 016: getfield sixtwo/mm.vMbcc Lnet/minecraft/class_243;
      // 019: putfield sixtwo/mm.fmdTe Lnet/minecraft/class_243;
      // 01c: aload 0
      // 01d: aload 0
      // 01e: getfield sixtwo/mm.vMbcc Lnet/minecraft/class_243;
      // 021: aload 0
      // 022: getfield sixtwo/mm.AkpJr Lnet/minecraft/class_243;
      // 025: invokevirtual net/minecraft/class_243.method_1019 (Lnet/minecraft/class_243;)Lnet/minecraft/class_243;
      // 028: putfield sixtwo/mm.vMbcc Lnet/minecraft/class_243;
      // 02b: aload 0
      // 02c: getfield sixtwo/mm.vMbcc Lnet/minecraft/class_243;
      // 02f: getfield net/minecraft/class_243.field_1352 D
      // 032: dstore 6
      // 034: istore 3
      // 035: aload 0
      // 036: getfield sixtwo/mm.vMbcc Lnet/minecraft/class_243;
      // 039: getfield net/minecraft/class_243.field_1351 D
      // 03c: dstore 8
      // 03e: aload 0
      // 03f: getfield sixtwo/mm.vMbcc Lnet/minecraft/class_243;
      // 042: getfield net/minecraft/class_243.field_1350 D
      // 045: dstore 10
      // 047: aload 0
      // 048: dload 6
      // 04a: dload 8
      // 04c: aload 0
      // 04d: getfield sixtwo/mm.hMiLh F
      // 050: ldc 10.0
      // 052: fdiv
      // 053: f2d
      // 054: dsub
      // 055: dload 10
      // 057: invokevirtual sixtwo/mm.clt (DDD)Z
      // 05a: iload 3
      // 05b: ifne 0c2
      // 05e: ifeq 0a0
      // 061: goto 068
      // 064: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 067: athrow
      // 068: aload 0
      // 069: new net/minecraft/class_243
      // 06c: dup
      // 06d: aload 0
      // 06e: getfield sixtwo/mm.AkpJr Lnet/minecraft/class_243;
      // 071: getfield net/minecraft/class_243.field_1352 D
      // 074: ldc2_w 1.100000023841858
      // 077: ddiv
      // 078: aload 0
      // 079: getfield sixtwo/mm.AkpJr Lnet/minecraft/class_243;
      // 07c: getfield net/minecraft/class_243.field_1351 D
      // 07f: dneg
      // 080: ldc2_w 1.100000023841858
      // 083: ddiv
      // 084: aload 0
      // 085: getfield sixtwo/mm.AkpJr Lnet/minecraft/class_243;
      // 088: getfield net/minecraft/class_243.field_1350 D
      // 08b: ldc2_w 1.100000023841858
      // 08e: ddiv
      // 08f: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 092: putfield sixtwo/mm.AkpJr Lnet/minecraft/class_243;
      // 095: iload 3
      // 096: ifeq 1de
      // 099: goto 0a0
      // 09c: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09f: athrow
      // 0a0: aload 0
      // 0a1: iload 3
      // 0a2: ifne 1bd
      // 0a5: goto 0ac
      // 0a8: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ab: athrow
      // 0ac: dload 6
      // 0ae: dload 4
      // 0b0: dsub
      // 0b1: dload 8
      // 0b3: dload 10
      // 0b5: dload 4
      // 0b7: dsub
      // 0b8: invokevirtual sixtwo/mm.clt (DDD)Z
      // 0bb: goto 0c2
      // 0be: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c1: athrow
      // 0c2: ifne 1bc
      // 0c5: aload 0
      // 0c6: iload 3
      // 0c7: ifne 1bd
      // 0ca: goto 0d1
      // 0cd: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d0: athrow
      // 0d1: dload 6
      // 0d3: dload 4
      // 0d5: dadd
      // 0d6: dload 8
      // 0d8: dload 10
      // 0da: dload 4
      // 0dc: dadd
      // 0dd: invokevirtual sixtwo/mm.clt (DDD)Z
      // 0e0: ifne 1bc
      // 0e3: goto 0ea
      // 0e6: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e9: athrow
      // 0ea: aload 0
      // 0eb: iload 3
      // 0ec: ifne 1bd
      // 0ef: goto 0f6
      // 0f2: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f5: athrow
      // 0f6: dload 6
      // 0f8: dload 4
      // 0fa: dadd
      // 0fb: dload 8
      // 0fd: dload 10
      // 0ff: dload 4
      // 101: dsub
      // 102: invokevirtual sixtwo/mm.clt (DDD)Z
      // 105: ifne 1bc
      // 108: goto 10f
      // 10b: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 10e: athrow
      // 10f: aload 0
      // 110: iload 3
      // 111: ifne 1bd
      // 114: goto 11b
      // 117: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 11a: athrow
      // 11b: dload 6
      // 11d: dload 4
      // 11f: dsub
      // 120: dload 8
      // 122: dload 10
      // 124: dload 4
      // 126: dadd
      // 127: invokevirtual sixtwo/mm.clt (DDD)Z
      // 12a: ifne 1bc
      // 12d: goto 134
      // 130: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 133: athrow
      // 134: aload 0
      // 135: iload 3
      // 136: ifne 1bd
      // 139: goto 140
      // 13c: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13f: athrow
      // 140: dload 6
      // 142: dload 4
      // 144: dadd
      // 145: dload 8
      // 147: dload 10
      // 149: invokevirtual sixtwo/mm.clt (DDD)Z
      // 14c: ifne 1bc
      // 14f: goto 156
      // 152: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 155: athrow
      // 156: aload 0
      // 157: iload 3
      // 158: ifne 1bd
      // 15b: goto 162
      // 15e: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 161: athrow
      // 162: dload 6
      // 164: dload 4
      // 166: dsub
      // 167: dload 8
      // 169: dload 10
      // 16b: invokevirtual sixtwo/mm.clt (DDD)Z
      // 16e: ifne 1bc
      // 171: goto 178
      // 174: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 177: athrow
      // 178: aload 0
      // 179: iload 3
      // 17a: ifne 1bd
      // 17d: goto 184
      // 180: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 183: athrow
      // 184: dload 6
      // 186: dload 8
      // 188: dload 10
      // 18a: dload 4
      // 18c: dadd
      // 18d: invokevirtual sixtwo/mm.clt (DDD)Z
      // 190: ifne 1bc
      // 193: goto 19a
      // 196: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 199: athrow
      // 19a: aload 0
      // 19b: dload 6
      // 19d: dload 8
      // 19f: dload 10
      // 1a1: dload 4
      // 1a3: dsub
      // 1a4: invokevirtual sixtwo/mm.clt (DDD)Z
      // 1a7: iload 3
      // 1a8: ifne 1e9
      // 1ab: goto 1b2
      // 1ae: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b1: athrow
      // 1b2: ifeq 1de
      // 1b5: goto 1bc
      // 1b8: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1bb: athrow
      // 1bc: aload 0
      // 1bd: new net/minecraft/class_243
      // 1c0: dup
      // 1c1: aload 0
      // 1c2: getfield sixtwo/mm.AkpJr Lnet/minecraft/class_243;
      // 1c5: getfield net/minecraft/class_243.field_1352 D
      // 1c8: dneg
      // 1c9: aload 0
      // 1ca: getfield sixtwo/mm.AkpJr Lnet/minecraft/class_243;
      // 1cd: getfield net/minecraft/class_243.field_1351 D
      // 1d0: aload 0
      // 1d1: getfield sixtwo/mm.AkpJr Lnet/minecraft/class_243;
      // 1d4: getfield net/minecraft/class_243.field_1350 D
      // 1d7: dneg
      // 1d8: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 1db: putfield sixtwo/mm.AkpJr Lnet/minecraft/class_243;
      // 1de: getstatic sixtwo/mm$uM.DwdhH [I
      // 1e1: aload 0
      // 1e2: getfield sixtwo/mm.XIaIs Lsixtwo/mp;
      // 1e5: invokevirtual sixtwo/mp.ordinal ()I
      // 1e8: iaload
      // 1e9: iload 3
      // 1ea: ifne 2e2
      // 1ed: tableswitch 213 1 3 31 58 85
      // 208: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20b: athrow
      // 20c: aload 0
      // 20d: aload 0
      // 20e: getfield sixtwo/mm.AkpJr Lnet/minecraft/class_243;
      // 211: dconst_0
      // 212: ldc2_w 0.03500000014901161
      // 215: dconst_0
      // 216: invokevirtual net/minecraft/class_243.method_1023 (DDD)Lnet/minecraft/class_243;
      // 219: putfield sixtwo/mm.AkpJr Lnet/minecraft/class_243;
      // 21c: iload 3
      // 21d: ifeq 2c2
      // 220: goto 227
      // 223: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 226: athrow
      // 227: aload 0
      // 228: aload 0
      // 229: getfield sixtwo/mm.AkpJr Lnet/minecraft/class_243;
      // 22c: dconst_0
      // 22d: ldc2_w 0.03500000014901161
      // 230: dconst_0
      // 231: invokevirtual net/minecraft/class_243.method_1031 (DDD)Lnet/minecraft/class_243;
      // 234: putfield sixtwo/mm.AkpJr Lnet/minecraft/class_243;
      // 237: iload 3
      // 238: ifeq 2c2
      // 23b: goto 242
      // 23e: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 241: athrow
      // 242: aload 0
      // 243: iload 3
      // 244: ifne 2b3
      // 247: goto 24e
      // 24a: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24d: athrow
      // 24e: getfield sixtwo/mm.cIWFA Z
      // 251: ifne 2ab
      // 254: goto 25b
      // 257: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25a: athrow
      // 25b: ldc2_w 0.30000001192092896
      // 25e: dstore 12
      // 260: invokestatic java/lang/Math.random ()D
      // 263: ldc2_w 2.0
      // 266: dmul
      // 267: ldc2_w 3.141592653589793
      // 26a: dmul
      // 26b: dstore 14
      // 26d: dload 12
      // 26f: dload 14
      // 271: invokestatic java/lang/Math.cos (D)D
      // 274: dmul
      // 275: dstore 16
      // 277: dload 12
      // 279: dload 14
      // 27b: invokestatic java/lang/Math.sin (D)D
      // 27e: dmul
      // 27f: dstore 18
      // 281: dload 12
      // 283: ldc2_w 0.8
      // 286: invokestatic java/lang/Math.random ()D
      // 289: ldc2_w 0.2
      // 28c: dmul
      // 28d: dadd
      // 28e: dmul
      // 28f: dstore 20
      // 291: aload 0
      // 292: new net/minecraft/class_243
      // 295: dup
      // 296: dload 16
      // 298: dload 20
      // 29a: dload 18
      // 29c: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 29f: putfield sixtwo/mm.AkpJr Lnet/minecraft/class_243;
      // 2a2: aload 0
      // 2a3: bipush 1
      // 2a4: putfield sixtwo/mm.cIWFA Z
      // 2a7: iload 3
      // 2a8: ifeq 2c2
      // 2ab: aload 0
      // 2ac: goto 2b3
      // 2af: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b2: athrow
      // 2b3: aload 0
      // 2b4: getfield sixtwo/mm.AkpJr Lnet/minecraft/class_243;
      // 2b7: dconst_0
      // 2b8: ldc2_w 0.03500000014901161
      // 2bb: dconst_0
      // 2bc: invokevirtual net/minecraft/class_243.method_1023 (DDD)Lnet/minecraft/class_243;
      // 2bf: putfield sixtwo/mm.AkpJr Lnet/minecraft/class_243;
      // 2c2: aload 0
      // 2c3: aload 0
      // 2c4: getfield sixtwo/mm.AkpJr Lnet/minecraft/class_243;
      // 2c7: ldc2_w 0.9950248599052429
      // 2ca: invokevirtual net/minecraft/class_243.method_1021 (D)Lnet/minecraft/class_243;
      // 2cd: putfield sixtwo/mm.AkpJr Lnet/minecraft/class_243;
      // 2d0: invokestatic java/lang/System.currentTimeMillis ()J
      // 2d3: aload 0
      // 2d4: invokevirtual sixtwo/mm.clu ()J
      // 2d7: lsub
      // 2d8: aload 0
      // 2d9: getfield sixtwo/mm.CTmHp I
      // 2dc: i2l
      // 2dd: getstatic sixtwo/mm.ZRQxW J
      // 2e0: lmul
      // 2e1: lcmp
      // 2e2: iload 3
      // 2e3: ifne 2f1
      // 2e6: ifle 2f4
      // 2e9: goto 2f0
      // 2ec: invokestatic sixtwo/mm.cly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2ef: athrow
      // 2f0: bipush 1
      // 2f1: goto 2f5
      // 2f4: bipush 0
      // 2f5: ireturn
   }

   @Override
   public void clr(class_4587 var1, float var2, mG var3) {
      var1.method_22903();
      this.cls(var1, var2);
      double var4 = 2.0;
      double var6 = this.hMiLh * var4;
      double var8 = (this.hMiLh - var6) / 2.0;
      double var10 = (this.hMiLh - var6) / 2.0;
      XSRvt.bUH(kG.bTv(var1, var8, var10, 0.0, var6, var6).dtF(var3).dtG());
      var1.method_22909();
   }

   @Override
   public void clq(class_4587 var1, float var2, mG var3) {
      var1.method_22903();
      this.cls(var1, var2);
      XSRvt.bUH(kG.bTv(var1, 0.0, 0.0, 0.0, this.hMiLh, this.hMiLh).dtF(var3).dtG());
      var1.method_22909();
   }
}
