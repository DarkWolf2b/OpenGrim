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
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.math.Box;

public class kH$up {
   private MatrixStack FKGjF;
   private Box rVjdp;
   private mG ecgxR;
   private mG jFenm;
   private mG LTfSx;
   private boolean MpISF;
   private boolean TjEAh;
   private static final long xwbNq = gb.aYR(584322236403852889L, -3795337152887394363L, MethodHandles.lookup().lookupClass()).a(249880812500847L);
   private static final String[] bPYDx;
   private static final String[] ACzdb;
   private static final Map qnlhy = new HashMap(13);

   kH$up() {
   }

   static {
      long var0 = xwbNq ^ 124723709472395L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[7];
      int var7 = 0;
      String var6 = "3\u0017d\u0011b\u001câ1â; \u009cá«ÙÊã\n*µ\u001f¦i«Ãwÿ,`VL\u009dXe'\u0096à\u0081É,Ú\u008f'\u008eD»µý\u009c¥á\u0017ÅS\u00804<\u0015\u009b\u0014ÈPW9\u0005\u0002Ê\u007f®\u0090gÉ\u000b³\u0090`UÄ\u0092öµÂ\\4\u001d÷·\u0090°\u000fïÇ\u0018Y\u0083'Ën\u0081çÿ¢\u0095ÚÅ#\u009fØ\u000fe\u0094\u0081Ý»\u0005ù\u0098¼VÊ\u0099\u0018laO²\u0093ÈªLeÈ`\u0018ü\u0080ÉwóC³îÕs\f\u008d \fx\u001e\u000eÂÁ§ðX\u0005st\u0014kÎR\u0090\u0017\u0095~þßÒ¿dßÃHWÒ5É\u0018\u00adA\u007f\u0099\u0019vK:Ý¨êEcòöP \u008c4\u0083Ê\u0084\u001b\u001c";
      int var8 = "3\u0017d\u0011b\u001câ1â; \u009cá«ÙÊã\n*µ\u001f¦i«Ãwÿ,`VL\u009dXe'\u0096à\u0081É,Ú\u008f'\u008eD»µý\u009c¥á\u0017ÅS\u00804<\u0015\u009b\u0014ÈPW9\u0005\u0002Ê\u007f®\u0090gÉ\u000b³\u0090`UÄ\u0092öµÂ\\4\u001d÷·\u0090°\u000fïÇ\u0018Y\u0083'Ën\u0081çÿ¢\u0095ÚÅ#\u009fØ\u000fe\u0094\u0081Ý»\u0005ù\u0098¼VÊ\u0099\u0018laO²\u0093ÈªLeÈ`\u0018ü\u0080ÉwóC³îÕs\f\u008d \fx\u001e\u000eÂÁ§ðX\u0005st\u0014kÎR\u0090\u0017\u0095~þßÒ¿dßÃHWÒ5É\u0018\u00adA\u007f\u0099\u0019vK:Ý¨êEcòöP \u008c4\u0083Ê\u0084\u001b\u001c"
         .length();
      char var5 = ' ';
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = dtT(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     bPYDx = var9;
                     ACzdb = new String[7];
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

                  var6 = "T\u008d{\u0081\u0006\u000e[\u008d¿»\u0011róø93ËTþU\u009a\fÅa\u0018]\u0097\u0007g\u008eï,\u0010äoà\u0097AÎ8£©ö\\¦pO{/";
                  var8 = "T\u008d{\u0081\u0006\u000e[\u008d¿»\u0011róø93ËTþU\u009a\fÅa\u0018]\u0097\u0007g\u008eï,\u0010äoà\u0097AÎ8£©ö\\¦pO{/".length();
                  var5 = ' ';
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   @Override
   public String toString() {
      long var1 = xwbNq ^ 132372638998290L;
      String var10000 = String.valueOf(this.FKGjF);
      String var10001 = String.valueOf(this.rVjdp);
      String var10002 = String.valueOf(this.ecgxR);
      String var10003 = String.valueOf(this.jFenm);
      String var10004 = String.valueOf(this.LTfSx);
      boolean var3 = this.TjEAh;
      boolean var4 = this.MpISF;
      String var5 = var10004;
      String var6 = var10003;
      String var7 = var10002;
      String var8 = var10001;
      String var9 = var10000;
      return dtW<"m">(13358, 7839728930377415552L ^ var1)
         + var9
         + dtW<"m">(12213, 7010682222286118940L ^ var1)
         + var8
         + dtW<"m">(31821, 8818447759313269728L ^ var1)
         + var7
         + dtW<"m">(29938, 3841685582873983833L ^ var1)
         + var6
         + dtW<"m">(23657, 3805974688945951685L ^ var1)
         + var5
         + dtW<"m">(12465, 1261346787038314267L ^ var1)
         + var4
         + dtW<"m">(30754, 1311741393094571917L ^ var1)
         + var3
         + ")";
   }

   public kH dtS() {
      return new kH(this.FKGjF, this.rVjdp, this.ecgxR, this.jFenm, this.LTfSx, this.MpISF, this.TjEAh);
   }

   public kH$up dtN(mG var1) {
      this.ecgxR = var1;
      return this;
   }

   public kH$up dtP(mG var1) {
      this.LTfSx = var1;
      return this;
   }

   public kH$up dtL(MatrixStack var1) {
      this.FKGjF = var1;
      return this;
   }

   public kH$up dtM(Box var1) {
      this.rVjdp = var1;
      return this;
   }

   private static String dtU(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 8898;
      if (ACzdb[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])qnlhy.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               qnlhy.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/kH$up", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = bPYDx[var5].getBytes("ISO-8859-1");
         ACzdb[var5] = dtT(((Cipher)var4[0]).doFinal(var9));
      }

      return ACzdb[var5];
   }

   private static CallSite dtW(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("dtV".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kH$up" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public kH$up dtR(boolean var1) {
      this.TjEAh = var1;
      return this;
   }

   public kH$up dtQ(boolean var1) {
      this.MpISF = var1;
      return this;
   }

   private static String dtT(byte[] var0) {
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

   private static Object dtV(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = dtU(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public kH$up dtO(mG var1) {
      this.jFenm = var1;
      return this;
   }
}
