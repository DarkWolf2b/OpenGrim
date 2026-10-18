package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import java.util.Objects;
import java.util.function.Consumer;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public final class lM<T> implements lK {
   private final kP<T> cerwd;
   private final lN FfavT;
   private final Consumer<kP<T>> yArrX;
   private final T WHRmz;
   private static final long QfUmj = gb.aYR(5826815846149890854L, -1201297134104340984L, MethodHandles.lookup().lookupClass()).a(271762146876068L);
   private static final String[] xkIVR;
   private static final String[] GCnfJ;
   private static final Map LEvMt = new HashMap(13);

   @Override
   public lN batchKey() {
      return this.FfavT;
   }

   public lM(kP<T> var1, lN var2, Consumer<kP<T>> var3, T var4) {
      long var5 = QfUmj ^ 127923704220755L;
      super();
      this.cerwd = Objects.requireNonNull(var1, cgF<"t">(17782, 7480948790493355037L ^ var5));
      boolean var10000 = lN.b();
      this.FfavT = Objects.requireNonNull(var2, cgF<"t">(22304, 6082436782439009866L ^ var5));
      this.yArrX = Objects.requireNonNull(var3, cgF<"t">(12239, 4553758972891133607L ^ var5));
      boolean var7 = var10000;

      try {
         this.WHRmz = Objects.requireNonNull((T)var4, cgF<"t">(31912, 6731755333839922625L ^ var5));
         if (var7) {
            iS.bwK("WqMgDc");
         }
      } catch (MatchException var8) {
         throw cgB(var8);
      }
   }

   static {
      long var0 = QfUmj ^ 100615210249597L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[4];
      int var7 = 0;
      String var6 = "£Ê\u0098Áî¬Êk\u008f¯É\u009c\u0081îñÏDiÑ®y\u0015\u0096ö\u0010\u008dDéÙ\u000e\u0089~²õ;6ìªo \u0083";
      int var8 = "£Ê\u0098Áî¬Êk\u008f¯É\u009c\u0081îñÏDiÑ®y\u0015\u0096ö\u0010\u008dDéÙ\u000e\u0089~²õ;6ìªo \u0083".length();
      char var5 = 24;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = cgC(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     xkIVR = var9;
                     GCnfJ = new String[4];
                     return;
                  }

                  var5 = var6.charAt(var12);
                  break;
               default:
                  var9[var7++] = var19;
                  if ((var12 += var5) < var8) {
                     var5 = var6.charAt(var12);
                     continue label27;
                  }

                  var6 = "QÉÉè{ W²wµæ\u00924Øj\u0083n+ë\u0093\u0097åÀº\u0086±K\u0090\u000fc}¹\u0018Ñ!é\u009c\u001c4yÑÁ\u0013÷@\u0000)\u0010\u0006Pýe¯¦\u0014W\u0012";
                  var8 = "QÉÉè{ W²wµæ\u00924Øj\u0083n+ë\u0093\u0097åÀº\u0086±K\u0090\u000fc}¹\u0018Ñ!é\u009c\u001c4yÑÁ\u0013÷@\u0000)\u0010\u0006Pýe¯¦\u0014W\u0012"
                     .length();
                  var5 = ' ';
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   @Override
   public void endBatch() {
      this.cerwd.endBatch();
   }

   private static String cgD(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 21513;
      if (GCnfJ[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])LEvMt.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               LEvMt.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/lM", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = xkIVR[var5].getBytes("ISO-8859-1");
         GCnfJ[var5] = cgC(((Cipher)var4[0]).doFinal(var9));
      }

      return GCnfJ[var5];
   }

   private static CallSite cgF(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cgE".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/lM" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String cgC(byte[] var0) {
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

   private static MatchException cgB(MatchException var0) {
      return var0;
   }

   private static Object cgE(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = cgD(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   @Override
   public void beginBatch() {
      this.yArrX.accept(this.cerwd);
   }

   @Override
   public void renderIntoBatch() {
      this.cerwd.render(this.WHRmz);
   }
}
