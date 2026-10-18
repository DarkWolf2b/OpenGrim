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
import net.minecraft.util.math.Vec2f;
import org.joml.Matrix3x2fStack;

public class jQ$ub {
   private Matrix3x2fStack jUlYD;
   private Vec2f aBdrz;
   private Vec2f jyGVB;
   private Vec2f KEhXG;
   private Vec2f XiiWF;
   private boolean xhAIf;
   private mG nAKto;
   private boolean gKWoY;
   private float zacIX;
   private boolean crNIb;
   private float RYmQU;
   private static final long KDywn = gb.aYR(-8288943320250390552L, -1596514271136119552L, MethodHandles.lookup().lookupClass()).a(210490629004726L);
   private static final String[] EhNUi;
   private static final String[] sFHyX;
   private static final Map YgyYc = new HashMap(13);

   jQ$ub() {
   }

   static {
      long var0 = KDywn ^ 99102793713177L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[8];
      int var7 = 0;
      String var6 = "+j\u001b;pC,ÜñõbÍüÆ?ùpþ]®÷Ï©lPÄ\u0007ó¬#,0·ð!|<B/4\u000b\u001aÊ\u000fª¬+&é\u0096'ÁXvKN1\u0089\u008dÄGÑ\u0088\u001bJ\u008bt\u008cMÌ&B\u0098R©1\n^\u008c¹oT«´\u009d2L·\u0084Ö\u001eX\u0016J7È \u00adG&Æ\u0095¨aI\u0010Ë\u0083õ\u0016\u001b\u0000&|Â©èµûì\u0013<\u0010\u0089òÇñ¢ÿþàH@\u0000ã®\u009eð<(þ\u0099öTa$\u0000\u0010\u0006R¡\u009c\"ºtÁü#\u0090³\u009e\u008a^ÜÑ7Ëí¢\u0018.myÐêx\u0000±\u0019æ(ù6c)\u0013\u0091IÄù\u0092À\u008e\u0092q\u0095\u0099°ýó=\u0086meddQÝlÌ\u007f&ÎÆq ó_ó?b";
      int var8 = "+j\u001b;pC,ÜñõbÍüÆ?ùpþ]®÷Ï©lPÄ\u0007ó¬#,0·ð!|<B/4\u000b\u001aÊ\u000fª¬+&é\u0096'ÁXvKN1\u0089\u008dÄGÑ\u0088\u001bJ\u008bt\u008cMÌ&B\u0098R©1\n^\u008c¹oT«´\u009d2L·\u0084Ö\u001eX\u0016J7È \u00adG&Æ\u0095¨aI\u0010Ë\u0083õ\u0016\u001b\u0000&|Â©èµûì\u0013<\u0010\u0089òÇñ¢ÿþàH@\u0000ã®\u009eð<(þ\u0099öTa$\u0000\u0010\u0006R¡\u009c\"ºtÁü#\u0090³\u009e\u008a^ÜÑ7Ëí¢\u0018.myÐêx\u0000±\u0019æ(ù6c)\u0013\u0091IÄù\u0092À\u008e\u0092q\u0095\u0099°ýó=\u0086meddQÝlÌ\u007f&ÎÆq ó_ó?b"
         .length();
      char var5 = 24;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = drw(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     EhNUi = var9;
                     sFHyX = new String[8];
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

                  var6 = "Þë(\u009cõ[\u00144Æ<.^¶ÜO\u0007ó|\u0098D\u0091\u009dÞ!ê\u0085,äð®\u0085\u001c\u0010l\u0003\u0091{\u0002¦Å\u0015\u001c*^T !¤#";
                  var8 = "Þë(\u009cõ[\u00144Æ<.^¶ÜO\u0007ó|\u0098D\u0091\u009dÞ!ê\u0085,äð®\u0085\u001c\u0010l\u0003\u0091{\u0002¦Å\u0015\u001c*^T !¤#"
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
   public String toString() {
      long var1 = KDywn ^ 112106189409153L;
      String var10000 = String.valueOf(this.jUlYD);
      String var10001 = String.valueOf(this.aBdrz);
      String var10002 = String.valueOf(this.jyGVB);
      String var10003 = String.valueOf(this.KEhXG);
      String var10004 = String.valueOf(this.XiiWF);
      String var10005 = String.valueOf(this.nAKto);
      float var3 = this.RYmQU;
      float var4 = this.zacIX;
      String var5 = var10005;
      String var6 = var10004;
      String var7 = var10003;
      String var8 = var10002;
      String var9 = var10001;
      String var10 = var10000;
      return drz<"a">(12840, 2939797638903326765L ^ var1)
         + var10
         + drz<"a">(12887, 7290652107806599249L ^ var1)
         + var9
         + drz<"a">(25888, 5155210403462790951L ^ var1)
         + var8
         + drz<"a">(15780, 586455926515263399L ^ var1)
         + var7
         + drz<"a">(3700, 8345540101170222192L ^ var1)
         + var6
         + drz<"a">(16753, 6549092517884533619L ^ var1)
         + var5
         + drz<"a">(27083, 6545842577291686858L ^ var1)
         + var4
         + drz<"a">(6273, 1789480808226603649L ^ var1)
         + var3
         + ")";
   }

   public jQ$ub drr(mG var1) {
      this.nAKto = var1;
      this.xhAIf = true;
      return this;
   }

   private static String drw(byte[] var0) {
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

   public jQ$ub drs(float var1) {
      this.zacIX = var1;
      this.gKWoY = true;
      return this;
   }

   private static MatchException drv(MatchException var0) {
      return var0;
   }

   public jQ$ub drn(Vec2f var1) {
      this.aBdrz = var1;
      return this;
   }

   public jQ$ub dro(Vec2f var1) {
      this.jyGVB = var1;
      return this;
   }

   public jQ$ub drp(Vec2f var1) {
      this.KEhXG = var1;
      return this;
   }

   public jQ$ub drq(Vec2f var1) {
      this.XiiWF = var1;
      return this;
   }

   public jQ$ub drm(Matrix3x2fStack var1) {
      this.jUlYD = var1;
      return this;
   }

   public jQ dru() {
      long var1 = KDywn ^ 61045097299805L;
      String var10000 = jO.bKy();
      mG var4 = this.nAKto;
      String var3 = var10000;

      label43: {
         label42: {
            try {
               var9 = this;
               if (var3 == null) {
                  break label43;
               }

               if (this.xhAIf) {
                  break label42;
               }
            } catch (MatchException var8) {
               throw drv(var8);
            }

            var4 = jQ.bLA();
         }

         var9 = this;
      }

      float var5 = var9.zacIX;

      label33: {
         label32: {
            try {
               var10 = this;
               if (var3 == null) {
                  break label33;
               }

               if (this.gKWoY) {
                  break label32;
               }
            } catch (MatchException var7) {
               throw drv(var7);
            }

            var5 = jQ.bLB();
         }

         var10 = this;
      }

      float var6 = var10.RYmQU;
      if (!this.crNIb) {
         var6 = jQ.bLC();
      }

      return new jQ(this.jUlYD, this.aBdrz, this.jyGVB, this.KEhXG, this.XiiWF, var4, var5, var6);
   }

   public jQ$ub drt(float var1) {
      this.RYmQU = var1;
      this.crNIb = true;
      return this;
   }

   private static CallSite drz(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("dry".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/jQ$ub" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String drx(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 20537;
      if (sFHyX[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])YgyYc.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               YgyYc.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/jQ$ub", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = EhNUi[var5].getBytes("ISO-8859-1");
         sFHyX[var5] = drw(((Cipher)var4[0]).doFinal(var9));
      }

      return sFHyX[var5];
   }

   private static Object dry(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = drx(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }
}
