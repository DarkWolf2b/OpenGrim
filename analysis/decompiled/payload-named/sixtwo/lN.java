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
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public record lN(String renderer, kS pipelineState, lB renderSpace, Object resource) {
   private static final lN IMMEDIATE;
   private static boolean a;
   private static final long b = gb.aYR(5880012721855372879L, -4905016764603109200L, MethodHandles.lookup().lookupClass()).a(205852695859779L);
   private static final String[] c;
   private static final String[] d;
   private static final Map e = new HashMap(13);

   public lN(String renderer, kS pipelineState, lB renderSpace, Object resource) {
      long var5 = b ^ 63378832504754L;
      super();
      Objects.requireNonNull(renderer, a<"o">(27057, 3353111780214629964L ^ var5));
      Objects.requireNonNull(renderSpace, a<"o">(28520, 2071360709314437268L ^ var5));
      this.renderer = renderer;
      this.pipelineState = pipelineState;
      this.renderSpace = renderSpace;
      this.resource = resource;
   }

   static {
      long var9 = b ^ 71124895230340L;
      b(false);
      Cipher var0;
      Cipher var10000 = var0 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var9 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var9 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var7 = new String[3];
      int var5 = 0;
      String var4 = "Úx½È¶Bp\u001fÙÌ1¯Ü¿4©\u001b©*1}(0 \u0018Ç\u0007\u0088\u0092\u0010cËDâ\u0097\u0013\u0003\u009e#Æí\bÉh¬E\u001d2Y :\u0099@û(]ÖA»3WS>¿õÂÛIM\u009cÁå»\t\u0099óT:ê¬¾1";
      int var6 = "Úx½È¶Bp\u001fÙÌ1¯Ü¿4©\u001b©*1}(0 \u0018Ç\u0007\u0088\u0092\u0010cËDâ\u0097\u0013\u0003\u009e#Æí\bÉh¬E\u001d2Y :\u0099@û(]ÖA»3WS>¿õÂÛIM\u009cÁå»\t\u0099óT:ê¬¾1"
         .length();
      char var3 = 24;
      int var2 = -1;

      while (true) {
         byte[] var8 = var0.doFinal(var4.substring(++var2, var2 + var3).getBytes("ISO-8859-1"));
         String var13 = a(var8).intern();
         byte var10001 = -1;
         var7[var5++] = var13;
         if ((var2 += var3) >= var6) {
            c = var7;
            d = new String[3];
            IMMEDIATE = new lN(a<"o">(18145, 4782908665671522089L ^ var9), null, lB.xCeuB, null);
            return;
         }

         var3 = var4.charAt(var2);
      }
   }

   public static lN of(String var0, kS var1, lB var2) {
      return of(var0, var1, var2, null);
   }

   public static lN of(String var0, kS var1, lB var2, Object var3) {
      return new lN(var0, var1, var2, var3);
   }

   public static boolean b() {
      return a;
   }

   public static void b(boolean var0) {
      a = var0;
   }

   public static boolean c() {
      boolean var0 = b();

      try {
         return !var0;
      } catch (MatchException var1) {
         throw a(var1);
      }
   }

   private static String a(byte[] var0) {
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

   private static Object a(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = a(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String a(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 10938;
      if (d[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])e.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               e.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/lN", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = c[var5].getBytes("ISO-8859-1");
         d[var5] = a(((Cipher)var4[0]).doFinal(var9));
      }

      return d[var5];
   }

   private static MatchException a(MatchException var0) {
      return var0;
   }

   private static CallSite a(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("a".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/lN" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public static lN immediate() {
      return IMMEDIATE;
   }

   public boolean batchable() {
      long var1 = b ^ 36276098711478L;
      boolean var3 = c();

      try {
         boolean var10000 = this.equals(IMMEDIATE);
         if (!var3) {
            return var10000;
         }

         if (!var10000) {
            return true;
         }
      } catch (MatchException var4) {
         throw a(var4);
      }

      return false;
   }
}
