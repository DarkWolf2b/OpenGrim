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
import net.minecraft.class_1309;
import net.minecraft.class_1799;
import net.minecraft.class_1802;

public class pp extends pq {
   private static final long TVxtH = gb.aYR(-5612678668592712320L, -347010295936002012L, MethodHandles.lookup().lookupClass()).a(208286298517581L);
   private static final String[] qdpgR;
   private static final String[] MIfPO;
   private static final Map lrwnI = new HashMap(13);

   public pp() {
      long var1 = TVxtH ^ 108060880824359L;
      super(cOH<"z">(3145, 1042839230776194355L ^ var1), cOH<"z">(13716, 9072983824374500591L ^ var1), pM.ODjfB);
   }

   static {
      long var0 = TVxtH ^ 56982266370247L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[3];
      int var7 = 0;
      String var6 = "h7°\u007fÜZ§\u000fc)\u008aÍs\u008bg\"\bß6¡\u008cz\u0006H\u0018\bà2¥èh¹^ù\u008b=¦\u009eT®\u0098\u0086\u001dÃãO\u0085¬2 dÝààö\u000bÀ\u0087Ýÿü\u001dê<¤\u0088ÿ\u0083ã\f\u0095ñ+xÈÝx¸F`\u0087\u001f";
      int var8 = "h7°\u007fÜZ§\u000fc)\u008aÍs\u008bg\"\bß6¡\u008cz\u0006H\u0018\bà2¥èh¹^ù\u008b=¦\u009eT®\u0098\u0086\u001dÃãO\u0085¬2 dÝààö\u000bÀ\u0087Ýÿü\u001dê<¤\u0088ÿ\u0083ã\f\u0095ñ+xÈÝx¸F`\u0087\u001f"
         .length();
      char var5 = 24;
      int var4 = -1;

      while (true) {
         byte[] var10 = var2.doFinal(var6.substring(++var4, var4 + var5).getBytes("ISO-8859-1"));
         String var13 = cOE(var10).intern();
         byte var10001 = -1;
         var9[var7++] = var13;
         if ((var4 += var5) >= var8) {
            qdpgR = var9;
            MIfPO = new String[3];
            return;
         }

         var5 = var6.charAt(var4);
      }
   }

   @Override
   protected String cOl() {
      long var1 = TVxtH ^ 63540493254533L;
      return cOH<"z">(8993, 4406908061791784442L ^ var1);
   }

   @Override
   protected class_1799 cOk(class_1309 var1) {
      return var1.method_6047();
   }

   @Override
   protected class_1799 cOm() {
      return class_1802.field_22022.method_7854();
   }

   private static Object cOG(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = cOF(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite cOH(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cOG".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/pp" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String cOE(byte[] var0) {
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

   private static String cOF(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 23392;
      if (MIfPO[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])lrwnI.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               lrwnI.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/pp", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = qdpgR[var5].getBytes("ISO-8859-1");
         MIfPO[var5] = cOE(((Cipher)var4[0]).doFinal(var9));
      }

      return MIfPO[var5];
   }
}
