package sixtwo;

import it.unimi.dsi.fastutil.objects.Object2ObjectLinkedOpenHashMap;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_11661;
import net.minecraft.class_11684;
import net.minecraft.class_4597;
import net.minecraft.class_4618;
import net.minecraft.class_9799;
import net.minecraft.class_4597.class_4598;

public final class jC {
   private final class_11661 lADha;
   private final class_4598 mHZnS;
   private final class_4618 pLFTe;
   private final class_4598 vhDNR;
   private final class_11684 DidxG;
   private static int HavuN;
   private static final long eCiTv = gb.aYR(-4632865524948931423L, 4039314851654012638L, MethodHandles.lookup().lookupClass()).a(170019180082689L);
   private static final long[] rIGBZ;
   private static final Integer[] prVKV;
   private static final Map XyFfc = new HashMap(13);

   public static int bHc() {
      int var0 = bHb();

      try {
         return var0 == 0 ? 74 : 0;
      } catch (MatchException var1) {
         throw bHd(var1);
      }
   }

   public jC() {
      long var1 = eCiTv ^ 80871239276092L;
      int var10000 = bHc();
      super();
      this.lADha = new class_11661();
      int var3 = var10000;

      try {
         this.mHZnS = bGZ();
         this.pLFTe = new class_4618();
         this.vhDNR = class_4597.method_22991(new class_9799(bHg<"y">(32665, 17533554000221578L ^ var1)));
         this.DidxG = new class_11684(this.lADha, rD.dlmvG.method_1541(), this.mHZnS, rD.dlmvG.method_72703(), this.pLFTe, this.vhDNR, rD.dlmvG.field_1772);
         if (var3 != 0) {
            iS.bwK("NVTpf");
         }
      } catch (MatchException var4) {
         throw bHd(var4);
      }
   }

   static {
      bHa(59);
      long var0 = eCiTv ^ 33491260541298L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[2];
      int var5 = 0;
      String var6 = "Nßk\u0084[ÄE¬\u0010S\u0089Ý\u0011ð»À";
      int var7 = "Nßk\u0084[ÄE¬\u0010S\u0089Ý\u0011ð»À".length();
      byte var4 = 0;

      do {
         int var10001 = var4;
         var4 += 8;
         byte[] var9 = var6.substring(var10001, var4).getBytes("ISO-8859-1");
         var10001 = var5++;
         long var10 = (var9[0] & 255L) << 56
            | (var9[1] & 255L) << 48
            | (var9[2] & 255L) << 40
            | (var9[3] & 255L) << 32
            | (var9[4] & 255L) << 24
            | (var9[5] & 255L) << 16
            | (var9[6] & 255L) << 8
            | var9[7] & 255L;
         byte[] var12 = var2.doFinal(
            new byte[]{
               (byte)(var10 >>> 56),
               (byte)(var10 >>> 48),
               (byte)(var10 >>> 40),
               (byte)(var10 >>> 32),
               (byte)(var10 >>> 24),
               (byte)(var10 >>> 16),
               (byte)(var10 >>> 8),
               (byte)var10
            }
         );
         long var10004 = (var12[0] & 255L) << 56
            | (var12[1] & 255L) << 48
            | (var12[2] & 255L) << 40
            | (var12[3] & 255L) << 32
            | (var12[4] & 255L) << 24
            | (var12[5] & 255L) << 16
            | (var12[6] & 255L) << 8
            | var12[7] & 255L;
         byte var14 = -1;
         var8[var10001] = var10004;
      } while (var4 < var7);

      rIGBZ = var8;
      prVKV = new Integer[2];
   }

   public class_11661 bGT() {
      return this.lADha;
   }

   public void bGY() {
      int var1 = bHb();

      try {
         try {
            this.DidxG.method_73002();
         } finally {
            this.DidxG.method_74817();
         }
      } finally {
         try {
            this.mHZnS.method_22993();
         } finally {
            try {
               this.vhDNR.method_22993();
            } finally {
               this.pLFTe.method_23285();
            }
         }
      }

      try {
         if (iS.bwL() == null) {
            bHa(++var1);
         }
      } catch (MatchException var75) {
         throw bHd(var75);
      }
   }

   public class_11684 bGX() {
      return this.DidxG;
   }

   public class_4598 bGU() {
      return this.mHZnS;
   }

   private static CallSite bHg(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bHf".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/jC" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static class_4598 bGZ() {
      long var0 = eCiTv ^ 72545559274369L;
      Object2ObjectLinkedOpenHashMap var2 = new Object2ObjectLinkedOpenHashMap();
      jE.bHu(var2);
      return class_4597.method_22992(var2, new class_9799(bHg<"y">(422, 472939501939203593L ^ var0)));
   }

   private static int bHe(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 19683;
      if (prVKV[var3] == null) {
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
         long var5 = rIGBZ[var3];
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
         Object[] var9 = (Object[])XyFfc.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               XyFfc.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/jC", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         prVKV[var3] = var15;
      }

      return prVKV[var3];
   }

   public class_4598 bGW() {
      return this.vhDNR;
   }

   public static int bHb() {
      return HavuN;
   }

   public static void bHa(int var0) {
      HavuN = var0;
   }

   private static MatchException bHd(MatchException var0) {
      return var0;
   }

   public class_4618 bGV() {
      return this.pLFTe;
   }

   private static int bHf(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bHe(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }
}
