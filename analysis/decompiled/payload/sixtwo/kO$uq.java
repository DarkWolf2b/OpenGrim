package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline.Snippet;
import com.mojang.blaze3d.vertex.VertexFormat;
import com.mojang.blaze3d.vertex.VertexFormat.class_5596;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_10789;

public final class kO$uq {
   private final String IfTav;
   private VertexFormat mrfud;
   private class_5596 bmQDp;
   private String SqHTg;
   private String UxEjn;
   private jN scPFe;
   private final List<String> JfGsn = new ArrayList<>();
   private final Map<String, class_10789> rGVcy = new LinkedHashMap<>();
   private Snippet[] EEbpA = new Snippet[0];
   private static final long XMJxo = gb.aYR(288277173973697703L, 8081578049949149732L, MethodHandles.lookup().lookupClass()).a(116530153942921L);
   private static final String[] OkSKq;
   private static final String[] DSiHK;
   private static final Map gIgvL = new HashMap(13);

   private kO$uq(String var1) {
      this.IfTav = var1;
   }

   static {
      long var0 = XMJxo ^ 109448182066550L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[2];
      int var7 = 0;
      String var6 = "-³&\u0094q»ñ\u0002/º£\fx?\u0012¢  \u0098\u0088\u009aO8(°7\u007f\"r'? h@\u009f9\u0004\u008e}yàí;éS,J\u0014}";
      int var8 = "-³&\u0094q»ñ\u0002/º£\fx?\u0012¢  \u0098\u0088\u009aO8(°7\u007f\"r'? h@\u009f9\u0004\u008e}yàí;éS,J\u0014}".length();
      char var5 = 16;
      int var4 = -1;

      while (true) {
         byte[] var10 = var2.doFinal(var6.substring(++var4, var4 + var5).getBytes("ISO-8859-1"));
         String var13 = dug(var10).intern();
         byte var10001 = -1;
         var9[var7++] = var13;
         if ((var4 += var5) >= var8) {
            OkSKq = var9;
            DSiHK = new String[2];
            return;
         }

         var5 = var6.charAt(var4);
      }
   }

   public kO$uq dud(Snippet... var1) {
      this.EEbpA = var1;
      return this;
   }

   private static CallSite duj(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("dui".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kO$uq" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public kO$uq dtX(VertexFormat var1, class_5596 var2) {
      this.mrfud = var1;
      this.bmQDp = var2;
      return this;
   }

   public kO$uq dtY(String var1) {
      this.SqHTg = var1;
      return this;
   }

   public kO due() {
      long var1 = XMJxo ^ 17543985852019L;
      Objects.requireNonNull(this.mrfud, duj<"j">(2924, 2739367753211133964L ^ var1));
      int var10000 = kQ.bVo();
      Objects.requireNonNull(this.bmQDp, duj<"j">(17332, 8336990958739982549L ^ var1));
      int var3 = var10000;

      try {
         kO var5 = new kO(this);
         if (var3 == 0) {
            iS.bwK("eKbrmb");
         }

         return var5;
      } catch (MatchException var4) {
         throw duf(var4);
      }
   }

   public kO$uq dua(jN var1) {
      this.scPFe = var1;
      return this;
   }

   public kO$uq dub(String var1) {
      this.JfGsn.add(var1);
      return this;
   }

   public kO$uq dtZ(String var1) {
      this.UxEjn = var1;
      return this;
   }

   private static String duh(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 31483;
      if (DSiHK[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])gIgvL.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               gIgvL.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/kO$uq", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = OkSKq[var5].getBytes("ISO-8859-1");
         DSiHK[var5] = dug(((Cipher)var4[0]).doFinal(var9));
      }

      return DSiHK[var5];
   }

   public kO$uq duc(String var1, class_10789 var2) {
      this.rGVcy.put(var1, var2);
      return this;
   }

   private static MatchException duf(MatchException var0) {
      return var0;
   }

   private static String dug(byte[] var0) {
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

   private static Object dui(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = duh(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }
}
