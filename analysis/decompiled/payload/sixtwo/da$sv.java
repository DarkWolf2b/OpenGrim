package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1113;
import net.minecraft.class_243;

class da$sv {
   private final class_1113 wneJp;
   private final class_243 izVKY;
   private final long zstpO;
   private boolean zUbCd;
   private final rk Taibw;
   private static final long iFBqt = gb.aYR(7556872127427825018L, -7644387685138179365L, MethodHandles.lookup().lookupClass()).a(252502118503577L);
   private static final String ySNLn;
   private static final long xwXDE;
   private static final long YpDrW;

   public da$sv(class_1113 var1, class_243 var2) {
      long var3 = iFBqt ^ 127596819812868L;
      super();
      this.zUbCd = false;
      this.Taibw = new rk((int)xwXDE);
      this.wneJp = var1;
      this.izVKY = var2;
      this.zstpO = System.currentTimeMillis();
   }

   static {
      long var10 = iFBqt ^ 30723646025566L;
      Cipher var12;
      Cipher var10000 = var12 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var10 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var13 = 1; var13 < 8; var13++) {
         var10003[var13] = (byte)(var10 << var13 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var14 = var12.doFinal("l\u008fñë9-6\u0088".getBytes("ISO-8859-1"));
      String var19 = dom(var14).intern();
      byte var10001 = -1;
      ySNLn = var19;
      Cipher var5;
      var10000 = var5 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var10 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var6 = 1; var6 < 8; var6++) {
         var10003[var6] = (byte)(var10 << var6 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var7 = -1541778739621727163L;
      byte[] var9 = var5.doFinal(
         new byte[]{
            (byte)(var7 >>> 56),
            (byte)(var7 >>> 48),
            (byte)(var7 >>> 40),
            (byte)(var7 >>> 32),
            (byte)(var7 >>> 24),
            (byte)(var7 >>> 16),
            (byte)(var7 >>> 8),
            (byte)var7
         }
      );
      long var21 = (var9[0] & 255L) << 56
         | (var9[1] & 255L) << 48
         | (var9[2] & 255L) << 40
         | (var9[3] & 255L) << 32
         | (var9[4] & 255L) << 24
         | (var9[5] & 255L) << 16
         | (var9[6] & 255L) << 8
         | var9[7] & 255L;
      var10001 = -1;
      xwXDE = var21;
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var10 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var10 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var2 = -328728050007090688L;
      byte[] var4 = var0.doFinal(
         new byte[]{
            (byte)(var2 >>> 56),
            (byte)(var2 >>> 48),
            (byte)(var2 >>> 40),
            (byte)(var2 >>> 32),
            (byte)(var2 >>> 24),
            (byte)(var2 >>> 16),
            (byte)(var2 >>> 8),
            (byte)var2
         }
      );
      long var23 = (var4[0] & 255L) << 56
         | (var4[1] & 255L) << 48
         | (var4[2] & 255L) << 40
         | (var4[3] & 255L) << 32
         | (var4[4] & 255L) << 24
         | (var4[5] & 255L) << 16
         | (var4[6] & 255L) << 8
         | var4[7] & 255L;
      var10001 = -1;
      YpDrW = var23;
   }

   private static String dom(byte[] var0) {
      int var1 = 0;
      int var2;
      char[] var3 = new char[var2 = var0.length];

      for (int var4 = 0; var4 < var2; var4++) {
         int var5;
         if ((var5 = 255 & var0[var4]) < 192) {
            var3[var1++] = (char)var5;
         } else if (var5 < 224) {
            char var6 = (char)((char)(var5 & 31) << 6);
            byte var8 = var0[++var4];
            var6 = (char)(var6 | (char)(var8 & 63));
            var3[var1++] = var6;
         } else if (var4 < var2 - 2) {
            char var12 = (char)((char)(var5 & 15) << '\f');
            byte var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63) << 6);
            var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63));
            var3[var1++] = var12;
         }
      }

      return new String(var3, 0, var1);
   }

   private static MatchException dol(MatchException var0) {
      return var0;
   }

   public void doj(lC param1, int param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/da$sv.iFBqt J
      // 003: ldc2_w 96268456235540
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 5
      // 00d: aload 0
      // 00e: getfield sixtwo/da$sv.Taibw Lsixtwo/rk;
      // 011: aload 0
      // 012: getfield sixtwo/da$sv.zUbCd Z
      // 015: aload 5
      // 017: ifnonnull 025
      // 01a: ifne 028
      // 01d: goto 024
      // 020: invokestatic sixtwo/da$sv.dol (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 023: athrow
      // 024: bipush 1
      // 025: goto 029
      // 028: bipush 0
      // 029: invokevirtual sixtwo/rk.dhc (Z)V
      // 02c: aload 0
      // 02d: getfield sixtwo/da$sv.Taibw Lsixtwo/rk;
      // 030: aload 0
      // 031: getfield sixtwo/da$sv.zUbCd Z
      // 034: ifne 041
      // 037: getstatic sixtwo/rj.XzDkv Lsixtwo/rj;
      // 03a: goto 044
      // 03d: invokestatic sixtwo/da$sv.dol (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 040: athrow
      // 041: getstatic sixtwo/rj.AYqck Lsixtwo/rj;
      // 044: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 047: pop
      // 048: invokestatic java/lang/System.currentTimeMillis ()J
      // 04b: aload 0
      // 04c: getfield sixtwo/da$sv.zstpO J
      // 04f: lsub
      // 050: lstore 6
      // 052: aload 5
      // 054: ifnonnull 076
      // 057: lload 6
      // 059: iload 2
      // 05a: i2l
      // 05b: getstatic sixtwo/da$sv.YpDrW J
      // 05e: lmul
      // 05f: lcmp
      // 060: ifle 07f
      // 063: goto 06a
      // 066: invokestatic sixtwo/da$sv.dol (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 069: athrow
      // 06a: aload 0
      // 06b: bipush 1
      // 06c: putfield sixtwo/da$sv.zUbCd Z
      // 06f: goto 076
      // 072: invokestatic sixtwo/da$sv.dol (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 075: athrow
      // 076: aload 0
      // 077: getfield sixtwo/da$sv.Taibw Lsixtwo/rk;
      // 07a: fconst_0
      // 07b: invokevirtual sixtwo/rk.dhd (F)F
      // 07e: pop
      // 07f: aload 0
      // 080: getfield sixtwo/da$sv.izVKY Lnet/minecraft/class_243;
      // 083: invokestatic sixtwo/jI.bIw (Lnet/minecraft/class_243;)Lnet/minecraft/class_241;
      // 086: astore 8
      // 088: aload 8
      // 08a: ifnonnull 092
      // 08d: return
      // 08e: invokestatic sixtwo/da$sv.dol (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 091: athrow
      // 092: invokestatic sixtwo/rD.dlM ()Lsixtwo/ii;
      // 095: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 098: astore 9
      // 09a: getstatic sixtwo/lE.WTzbi Lsixtwo/lj;
      // 09d: ldc 7.0
      // 09f: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 0a2: astore 10
      // 0a4: aload 0
      // 0a5: getfield sixtwo/da$sv.wneJp Lnet/minecraft/class_1113;
      // 0a8: invokeinterface net/minecraft/class_1113.method_4775 ()Lnet/minecraft/class_2960; 1
      // 0ad: invokevirtual net/minecraft/class_2960.method_12832 ()Ljava/lang/String;
      // 0b0: getstatic sixtwo/da$sv.ySNLn Ljava/lang/String;
      // 0b3: ldc " "
      // 0b5: invokevirtual java/lang/String.replaceAll (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
      // 0b8: ldc "_"
      // 0ba: ldc " "
      // 0bc: invokevirtual java/lang/String.replace (Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;
      // 0bf: invokestatic org/apache/commons/lang3/StringUtils.capitalize (Ljava/lang/String;)Ljava/lang/String;
      // 0c2: astore 11
      // 0c4: aload 10
      // 0c6: aload 11
      // 0c8: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 0cb: ldc 10.0
      // 0cd: fadd
      // 0ce: fstore 12
      // 0d0: aload 10
      // 0d2: invokevirtual sixtwo/lq.cat ()F
      // 0d5: ldc 10.0
      // 0d7: fadd
      // 0d8: fstore 13
      // 0da: aload 8
      // 0dc: getfield net/minecraft/class_241.field_1343 F
      // 0df: fload 12
      // 0e1: fconst_2
      // 0e2: fdiv
      // 0e3: fsub
      // 0e4: fstore 14
      // 0e6: aload 8
      // 0e8: getfield net/minecraft/class_241.field_1342 F
      // 0eb: fstore 15
      // 0ed: fload 14
      // 0ef: aload 10
      // 0f1: aload 11
      // 0f3: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 0f6: fload 12
      // 0f8: invokestatic sixtwo/jf.bAH (FF)F
      // 0fb: fadd
      // 0fc: fstore 16
      // 0fe: fload 15
      // 100: aload 10
      // 102: invokevirtual sixtwo/lq.cat ()F
      // 105: fload 13
      // 107: invokestatic sixtwo/jf.bAH (FF)F
      // 10a: fadd
      // 10b: fstore 17
      // 10d: aload 0
      // 10e: getfield sixtwo/da$sv.Taibw Lsixtwo/rk;
      // 111: invokevirtual sixtwo/rk.dhj ()F
      // 114: fstore 18
      // 116: aload 1
      // 117: fload 14
      // 119: fload 12
      // 11b: fconst_2
      // 11c: fdiv
      // 11d: fadd
      // 11e: fload 15
      // 120: fload 13
      // 122: fconst_2
      // 123: fdiv
      // 124: fadd
      // 125: ldc 0.5
      // 127: ldc 0.5
      // 129: fload 18
      // 12b: fmul
      // 12c: fadd
      // 12d: invokestatic sixtwo/jH.bId (Lsixtwo/lC;FFF)V
      // 130: aload 1
      // 131: fload 14
      // 133: fload 15
      // 135: fload 12
      // 137: fload 13
      // 139: aload 0
      // 13a: getfield sixtwo/da$sv.Taibw Lsixtwo/rk;
      // 13d: invokevirtual sixtwo/rk.dhj ()F
      // 140: fconst_0
      // 141: invokevirtual sixtwo/lC.ccU (FFFFFF)V
      // 144: aload 1
      // 145: aload 10
      // 147: aload 11
      // 149: fload 16
      // 14b: fload 17
      // 14d: aload 9
      // 14f: invokevirtual sixtwo/lC.cez (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 152: invokestatic sixtwo/jH.bIf ()V
      // 155: return
   }

   public boolean dok() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/da$sv.iFBqt J
      // 03: ldc2_w 54159810509725
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/da$sv.Taibw Lsixtwo/rk;
      // 10: invokevirtual sixtwo/rk.dhj ()F
      // 13: fconst_0
      // 14: fcmpl
      // 15: aload 3
      // 16: ifnonnull 2e
      // 19: ifne 40
      // 1c: goto 23
      // 1f: invokestatic sixtwo/da$sv.dol (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: aload 0
      // 24: getfield sixtwo/da$sv.zUbCd Z
      // 27: goto 2e
      // 2a: invokestatic sixtwo/da$sv.dol (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: aload 3
      // 2f: ifnonnull 3d
      // 32: ifeq 40
      // 35: goto 3c
      // 38: invokestatic sixtwo/da$sv.dol (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: bipush 1
      // 3d: goto 41
      // 40: bipush 0
      // 41: ireturn
   }
}
