package sixtwo;

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

public abstract class ak<T extends cB> extends az {
   public static ak<?> SPSBS;
   protected final az uVhpi;
   protected final T sCXfR;
   protected final rk QmyNF;
   protected final rk tDliG;
   private static final long ZyPUF = gb.aYR(-1244836903602851909L, -2102368253998822455L, MethodHandles.lookup().lookupClass()).a(83502704156515L);
   private static final long[] lVcnQ;
   private static final Integer[] aZoru;
   private static final Map nWsJs = new HashMap(13);

   public ak(T var1, az var2) {
      long var3 = ZyPUF ^ 54452347253751L;
      super();
      this.QmyNF = new rk(oP<"j">(16635, 4411687146920498217L ^ var3)).dhs(rj.MBpuQ);
      this.tDliG = new rk(oP<"j">(15, 1074766088168346844L ^ var3)).dhs(rj.UPXqT);
      this.uVhpi = var2;
      this.sCXfR = (T)var1;
   }

   static {
      long var0 = ZyPUF ^ 134515452477239L;
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
      String var6 = "├î├Ě├▒├ťO%\u0088Lq\u007f├Ś\u0089┬▒\u0011├Ą├┐";
      int var7 = "├î├Ě├▒├ťO%\u0088Lq\u007f├Ś\u0089┬▒\u0011├Ą├┐".length();
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

      lVcnQ = var8;
      aZoru = new Integer[2];
   }

   public boolean oG() {
      long var1 = ZyPUF ^ 12255366344401L;
      String[] var3 = aj.oA();

      try {
         float var5;
         int var10000 = (var5 = this.QmyNF.dhj() - 0.0F) == 0.0F ? 0 : (var5 < 0.0F ? -1 : 1);
         if (var3 == null) {
            return (boolean)var10000;
         }

         if (var10000) {
            return (boolean)1;
         }
      } catch (MatchException var4) {
         throw oM(var4);
      }

      return (boolean)0;
   }

   private static MatchException oM(MatchException var0) {
      return var0;
   }

   private static int oN(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 29462;
      if (aZoru[var3] == null) {
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
         long var5 = lVcnQ[var3];
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
         Object[] var9 = (Object[])nWsJs.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               nWsJs.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/ak", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         aZoru[var3] = var15;
      }

      return aZoru[var3];
   }

   public rk oK() {
      return this.QmyNF;
   }

   private static int oO(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = oN(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite oP(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("oO".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ak" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public void oF(lC var1, float var2) {
      mG var3 = this.CtPwV.bjb().coa(255.0F * (0.75F + 0.25F * this.tDliG.dhj()));
      float var4 = this.MCnYt + 9.0F;
      float var5 = this.pNyTQ + jf.bAH(ax.aqGSY.cat(), 18.0F);
      var1.ceI(ax.aqGSY, this.sCXfR.Vm(), var4, var5, var3, 0.7F, 0.99F, var2);
   }

   public az oI() {
      return this.uVhpi;
   }

   public rk oL() {
      return this.tDliG;
   }

   public float oH() {
      return this.QmyNF.dhj();
   }

   public T oJ() {
      return this.sCXfR;
   }
}
