package sixtwo;

import com.mojang.blaze3d.buffers.GpuBuffer;
import com.mojang.blaze3d.systems.RenderSystem;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.nio.ByteBuffer;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public final class lr {
   private static final int VJMON;
   private static final lr$uz[] RXENs;
   private static int nWKgM;
   private static final long XCHUs = gb.aYR(7341820058995402095L, 323359609039465152L, MethodHandles.lookup().lookupClass()).a(8048501820849L);
   private static final String xEpkA;
   private static final long[] LNAAw;
   private static final Integer[] DecpM;
   private static final Map uXNQV;

   static {
      long var11 = XCHUs ^ 6489666794528L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("e├ç├┤\u0004\u0015\bk$┬┐├ô\u0013\u008b├░a\"M\t├Ě┬▓┬í:├Ě\u0085\u0091l\u0000wzL\u000e[\u0082".getBytes("ISO-8859-1"));
      String var21 = caG(var15).intern();
      int var10001 = -1;
      xEpkA = var21;
      uXNQV = new HashMap(13);
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[2];
      int var3 = 0;
      String var4 = "├á(a^`0b├┤\u0001├¬D├ť4├ę\u0094e";
      int var5 = "├á(a^`0b├┤\u0001├¬D├ť4├ę\u0094e".length();
      byte var2 = 0;

      do {
         var10001 = var2;
         var2 += 8;
         byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
         var10001 = var3++;
         long var8 = (var7[0] & 255L) << 56
            | (var7[1] & 255L) << 48
            | (var7[2] & 255L) << 40
            | (var7[3] & 255L) << 32
            | (var7[4] & 255L) << 24
            | (var7[5] & 255L) << 16
            | (var7[6] & 255L) << 8
            | var7[7] & 255L;
         byte[] var10 = var0.doFinal(
            new byte[]{
               (byte)(var8 >>> 56),
               (byte)(var8 >>> 48),
               (byte)(var8 >>> 40),
               (byte)(var8 >>> 32),
               (byte)(var8 >>> 24),
               (byte)(var8 >>> 16),
               (byte)(var8 >>> 8),
               (byte)var8
            }
         );
         long var10004 = (var10[0] & 255L) << 56
            | (var10[1] & 255L) << 48
            | (var10[2] & 255L) << 40
            | (var10[3] & 255L) << 32
            | (var10[4] & 255L) << 24
            | (var10[5] & 255L) << 16
            | (var10[6] & 255L) << 8
            | var10[7] & 255L;
         byte var24 = -1;
         var6[var10001] = var10004;
      } while (var2 < var5);

      LNAAw = var6;
      DecpM = new Integer[2];
      VJMON = caJ<"j">(22687, var11 ^ 3341799056076695062L);
      RXENs = new lr$uz[3];
      int var16 = 0;

      try {
         while (var16 < RXENs.length) {
            RXENs[var16] = new lr$uz();
            var16++;
         }
      } catch (IllegalArgumentException var17) {
         throw caF(var17);
      }
   }

   private static CallSite caJ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("caI".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/lr" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String caG(byte[] var0) {
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

   private static int caH(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 23840;
      if (DecpM[var3] == null) {
         byte[] var4 = new byte[]{
            (byte)(var1 >>> 56),
            (byte)(var1 >>> 48),
            (byte)(var1 >>> 40),
            (byte)(var1 >>> 32),
            (byte)(var1 >>> 24),
            (byte)(var1 >>> 16),
            (byte)(var1 >>> 8),
            (byte)var1
         };
         long var5 = LNAAw[var3];
         byte[] var7 = new byte[]{
            (byte)(var5 >>> 56),
            (byte)(var5 >>> 48),
            (byte)(var5 >>> 40),
            (byte)(var5 >>> 32),
            (byte)(var5 >>> 24),
            (byte)(var5 >>> 16),
            (byte)(var5 >>> 8),
            (byte)var5
         };
         Long var8 = Thread.currentThread().threadId();
         Object[] var9 = (Object[])uXNQV.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               uXNQV.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/lr", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         DecpM[var3] = var15;
      }

      return DecpM[var3];
   }

   private static int caI(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = caH(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public static GpuBuffer caC(ByteBuffer var0, String var1) {
      long var2 = XCHUs ^ 110213325028251L;
      ByteBuffer var5 = var0.duplicate();
      lt.cbc();
      int var6 = var5.remaining();

      try {
         if (var6 <= 0) {
            throw new IllegalArgumentException(xEpkA);
         }
      } catch (IllegalArgumentException var9) {
         throw caF(var9);
      }

      GpuBuffer var7 = RXENs[nWKgM].dvq(var6, var1);

      try {
         RenderSystem.getDevice().createCommandEncoder().writeToBuffer(var7.slice(0L, var6), var5);
         if (iS.bwL() == null) {
            lt.cbb(new iS[5]);
         }

         return var7;
      } catch (IllegalArgumentException var8) {
         throw caF(var8);
      }
   }

   private static IllegalArgumentException caF(IllegalArgumentException var0) {
      return var0;
   }

   private static GpuBuffer caD(long var0, String var2) {
      long var3 = XCHUs ^ 127977060856766L;
      return RenderSystem.getDevice().createBuffer(() -> var2, caJ<"j">(715, 8159286571436473309L ^ var3), var0);
   }

   public static void caB() {
      nWKgM = (nWKgM + 1) % RXENs.length;
      RXENs[nWKgM].dvr();
   }
}
