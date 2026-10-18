package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public abstract class bS extends cw {
   protected bT fGWTH;
   protected final rk dExGi;
   private static int qlHhv;
   private static final long fLLMv = gb.aYR(5886275071503743153L, -451407613624388453L, MethodHandles.lookup().lookupClass()).a(161403895425971L);
   private static final long XOMXi;

   public bS(cv var1, mr var2) {
      long var3 = fLLMv ^ 63618970313402L;
      super(var1, var2);
      this.fGWTH = new bT(48.0F, 15.0F);
      this.dExGi = new rk((int)XOMXi).dhs(rj.NJlxm);
      this.Tz();
   }

   static {
      long var0 = fLLMv ^ 13105348682021L;
      NQ(104);
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = -309442034757594481L;
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
      XOMXi = var7;
   }

   public abstract boolean MH();

   public bT NO() {
      return this.fGWTH;
   }

   public rk NP() {
      return this.dExGi;
   }

   public static int NR() {
      return qlHhv;
   }

   public void MG(lC var1, ii var2) {
   }

   public mG MI() {
      return rD.dlM().bjd();
   }

   public static int NS() {
      int var0 = NR();

      try {
         return var0 == 0 ? 79 : 0;
      } catch (MatchException var1) {
         throw NT(var1);
      }
   }

   public void NN(lC var1, ii var2) {
      jF.bHz(1.0F, 1.0F, 1.0F, this.dExGi.dhj());
      this.MG(var1, var2);
      jF.bHz(1.0F, 1.0F, 1.0F, 1.0F);
   }

   public static void NQ(int var0) {
      qlHhv = var0;
   }

   private static MatchException NT(MatchException var0) {
      return var0;
   }

   public void Ne(double var1, double var3, mA var5) {
   }
}
