package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.Objects;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public final class lT {
   private static lU culIj;
   private static String ZneZb;
   private static final long hlwZs = gb.aYR(663859223829404065L, -7448599454218923718L, MethodHandles.lookup().lookupClass()).a(156987970387666L);
   private static final String gEVAN;

   static {
      long var0 = hlwZs ^ 106492611267560L;
      ciT(null);
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("\u0081\u0006<\u0083?x\u0005×".getBytes("ISO-8859-1"));
      String var5 = ciW(var4).intern();
      byte var10001 = -1;
      gEVAN = var5;
      culIj = new lR();
   }

   public static lU ciQ() {
      return culIj;
   }

   public static lR ciS() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lT.hlwZs J
      // 03: ldc2_w 118614779891904
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/lT.ciU ()Ljava/lang/String;
      // 0b: getstatic sixtwo/lT.culIj Lsixtwo/lU;
      // 0e: astore 4
      // 10: astore 2
      // 11: aload 4
      // 13: aload 2
      // 14: ifnonnull 2d
      // 17: instanceof sixtwo/lR
      // 1a: ifeq 35
      // 1d: goto 24
      // 20: invokestatic sixtwo/lT.ciV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aload 4
      // 26: goto 2d
      // 29: invokestatic sixtwo/lT.ciV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: checkcast sixtwo/lR
      // 30: astore 3
      // 31: aload 3
      // 32: goto 36
      // 35: aconst_null
      // 36: aload 2
      // 37: ifnull 46
      // 3a: ldc "g3W7M"
      // 3c: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 3f: goto 46
      // 42: invokestatic sixtwo/lT.ciV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 45: athrow
      // 46: areturn
   }

   public static void ciT(String var0) {
      ZneZb = var0;
   }

   private static String ciW(byte[] var0) {
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

   public static void ciR(lU var0) {
      long var1 = hlwZs ^ 357072652219L;
      culIj = Objects.requireNonNull(var0, gEVAN);
   }

   public static String ciU() {
      return ZneZb;
   }

   private static MatchException ciV(MatchException var0) {
      return var0;
   }
}
