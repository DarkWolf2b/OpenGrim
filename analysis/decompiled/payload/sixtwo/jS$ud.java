package sixtwo;

import com.mojang.blaze3d.textures.GpuTextureView;
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
import net.minecraft.class_1044;
import net.minecraft.class_12137;
import org.joml.Matrix3x2fStack;

public class jS$ud {
   private Matrix3x2fStack KGEiK;
   private float MHPhb;
   private float YsqLC;
   private float xbPqZ;
   private float NsNNW;
   private float vNJrU;
   private float tfwoa;
   private float Wdqlk;
   private float SoHbR;
   private la wSvyy;
   private class_1044 ZxOWE;
   private GpuTextureView Jebuc;
   private class_12137 kVzNI;
   private boolean RaaGc;
   private mG KQCbq;
   private boolean zpzvY;
   private float XLXVL;
   private boolean ejGJN;
   private boolean UYULD;
   private boolean pYZxw;
   private boolean lyHrl;
   private boolean rvTlZ;
   private float Hkwko;
   private boolean NEKxo;
   private float Ctdmb;
   private boolean iPtob;
   private float wnZQe;
   private boolean YTTyt;
   private float FnXWE;
   private boolean LZhUC;
   private float Wuwvs;
   private boolean cKYFq;
   private float AgmNw;
   private static final long hwJvP = gb.aYR(-8015772933691496123L, -5383940048960802246L, MethodHandles.lookup().lookupClass()).a(173280452988450L);
   private static final String[] SsEUB;
   private static final String[] WRlpT;
   private static final Map AIBpJ = new HashMap(13);

   private static Object dss(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = dsr(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   jS$ud() {
   }

   static {
      long var0 = hwJvP ^ 85558208837219L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[23];
      int var7 = 0;
      String var6 = "Y°^Ï\u001fÈ\u0014ÀhÚ\t*.\u008bmÿ¹\u0010\u0092HyÌÀ-}ý[¬ÞâWÁ\u0018H÷<\u0096Ìàxõí/E\u000eEâa¾\u0081p@v.\u0099az(.í=2&wV¥æ\u009e\u009bÂ®a ÈbÆÙ5¡}\u007f9G\u0089$£w0T\u001e\ræe\u009e\u009bL%S Ý3´\u0095SIPx1\u0085ü\u0099dÉþU§Gm©îr!Ô\u0013ËÝÇqoÖ% \u0001\u009bG¥)dïí\u008c\u0016\u0001òñÅä3ÿ/ç~\u007f$Éz\u009dâP\u001cKEMº\u0010\u000f\u00873\u001eÓBûW\u009fJ/d\u0016pô\u008ah]q\u009a_b\u0093§^)Ëiõ@\u000bò¿)3\u0013v£P°XõÂaÏ-¹qá7\u0005\u0007\u008b_\u009aX\u0081ù6n#\u008d\u000b\u008c´\u001cÌtX\u000bÓDÃf5àº\u0004\u00843Ti<XC\u0090\u000e~ú\u001b[\u0086öÆ(>|Y¬výJ¯¥\u009d!7\u00871rßª\t*\u001f\u00108´8\u0096u(î\u008eká;©\u009f2Æ\u0011h\u009bd\t\u0094¯j\u0005ÁÚ\u0007mp¸g\u009fñN´ë4\u00ada`ó¶(º\u0080ï(N@è\u000e\fÉ¢ý\u0087)=¾\u0094á\u0012D\u009f¥ý\u0084t£Î\u0089èjo\u000f<N Ø©E+\u00ad\u0082Â±Ý(\u0004Ô\u001cb\u007f¯\u0089«\u009d|\u0096iÈ\u0082\u009eò'\u0003\u001cèAºc~q\u001aí\u0001Ý@É\u0003q\"\u001d7Î\u0001ÍS Ä\u0081§\u0093[Æ3\na¨\"ñGø\u0093Ê\u0099\u000eÒnM\u000b¿\u000b`ó\u009dèH\u007f×k(©% #(#o\u009ex\u0000G\u0013\u0092\u0002H\u001fº¬\\µ¬\u0012\u0004æP\tµQ3ÞÛì0\u007f22\u00866d\u001c ÆzüUuË¥JwÂÐêzÞþ[göúìÎúèM\u001d]qú\u0012\u0093¥ò î¤°]\u0093ydÔB6A8ù(6\r\u0093C¹\u0094=²yÐ {Zy¥Þ¿£ ú·ÿ\u0080¤6\u0080\rç\u0095+¬\u0018¨Øn@\u0019\u001cÃ\u0000\u0000Ïù%ãç^\u000f\u0010\ng mn²=B'\u0089ëÖßå¼vÄ(íNÑ\u001eèª\u0086\u0081ç¯fÿ\u0014Ëë©o\u0018¸E*³\u001c\u001d\b\u0005\u000e¹\u0084\u0093Ñ\u0014ëP~ã\u0017©\u009c\u009aj¹ Ð\u00861PuÏY¥\u008d\u0005PüW\u0018-\u001c¥'ªçP\u0017\"R\u0091üö/qã\u0002Å(!/\u0096\u0096¿Ê1¥3Cä\u0084\u0017ì\u0089\u0085Ø\b\u0013ëR\u0085e\u000f%5@¯ý\u0004°À¨Çàëð\u008cUù \u0018\u0017^Ú¡\u0014M\u009eRI¤\u0082£\u0013þ³8óõ¬Z\u0094Æ`2\u000f\u0086JÓ\\\u0000Ò\u0018Ó4\u0085¢\bÀFñBý\u000b,\u009f\u0083ô/ñ\u0084\\ª*mÙ\u000f";
      int var8 = "Y°^Ï\u001fÈ\u0014ÀhÚ\t*.\u008bmÿ¹\u0010\u0092HyÌÀ-}ý[¬ÞâWÁ\u0018H÷<\u0096Ìàxõí/E\u000eEâa¾\u0081p@v.\u0099az(.í=2&wV¥æ\u009e\u009bÂ®a ÈbÆÙ5¡}\u007f9G\u0089$£w0T\u001e\ræe\u009e\u009bL%S Ý3´\u0095SIPx1\u0085ü\u0099dÉþU§Gm©îr!Ô\u0013ËÝÇqoÖ% \u0001\u009bG¥)dïí\u008c\u0016\u0001òñÅä3ÿ/ç~\u007f$Éz\u009dâP\u001cKEMº\u0010\u000f\u00873\u001eÓBûW\u009fJ/d\u0016pô\u008ah]q\u009a_b\u0093§^)Ëiõ@\u000bò¿)3\u0013v£P°XõÂaÏ-¹qá7\u0005\u0007\u008b_\u009aX\u0081ù6n#\u008d\u000b\u008c´\u001cÌtX\u000bÓDÃf5àº\u0004\u00843Ti<XC\u0090\u000e~ú\u001b[\u0086öÆ(>|Y¬výJ¯¥\u009d!7\u00871rßª\t*\u001f\u00108´8\u0096u(î\u008eká;©\u009f2Æ\u0011h\u009bd\t\u0094¯j\u0005ÁÚ\u0007mp¸g\u009fñN´ë4\u00ada`ó¶(º\u0080ï(N@è\u000e\fÉ¢ý\u0087)=¾\u0094á\u0012D\u009f¥ý\u0084t£Î\u0089èjo\u000f<N Ø©E+\u00ad\u0082Â±Ý(\u0004Ô\u001cb\u007f¯\u0089«\u009d|\u0096iÈ\u0082\u009eò'\u0003\u001cèAºc~q\u001aí\u0001Ý@É\u0003q\"\u001d7Î\u0001ÍS Ä\u0081§\u0093[Æ3\na¨\"ñGø\u0093Ê\u0099\u000eÒnM\u000b¿\u000b`ó\u009dèH\u007f×k(©% #(#o\u009ex\u0000G\u0013\u0092\u0002H\u001fº¬\\µ¬\u0012\u0004æP\tµQ3ÞÛì0\u007f22\u00866d\u001c ÆzüUuË¥JwÂÐêzÞþ[göúìÎúèM\u001d]qú\u0012\u0093¥ò î¤°]\u0093ydÔB6A8ù(6\r\u0093C¹\u0094=²yÐ {Zy¥Þ¿£ ú·ÿ\u0080¤6\u0080\rç\u0095+¬\u0018¨Øn@\u0019\u001cÃ\u0000\u0000Ïù%ãç^\u000f\u0010\ng mn²=B'\u0089ëÖßå¼vÄ(íNÑ\u001eèª\u0086\u0081ç¯fÿ\u0014Ëë©o\u0018¸E*³\u001c\u001d\b\u0005\u000e¹\u0084\u0093Ñ\u0014ëP~ã\u0017©\u009c\u009aj¹ Ð\u00861PuÏY¥\u008d\u0005PüW\u0018-\u001c¥'ªçP\u0017\"R\u0091üö/qã\u0002Å(!/\u0096\u0096¿Ê1¥3Cä\u0084\u0017ì\u0089\u0085Ø\b\u0013ëR\u0085e\u000f%5@¯ý\u0004°À¨Çàëð\u008cUù \u0018\u0017^Ú¡\u0014M\u009eRI¤\u0082£\u0013þ³8óõ¬Z\u0094Æ`2\u000f\u0086JÓ\\\u0000Ò\u0018Ó4\u0085¢\bÀFñBý\u000b,\u009f\u0083ô/ñ\u0084\\ª*mÙ\u000f"
         .length();
      char var5 = ' ';
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = dsq(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     SsEUB = var9;
                     WRlpT = new String[23];
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

                  var6 = "¿$\u009dVÿ\u0002X+UåûÏ\u001c(WÈ õIÜ«2\u008a«?ë-E0\u0013à\u009ch\u0000ì¢©eÌaßÍö#\u0083ðËØÊ";
                  var8 = "¿$\u009dVÿ\u0002X+UåûÏ\u001c(WÈ õIÜ«2\u008a«?ë-E0\u0013à\u009ch\u0000ì¢©eÌaßÍö#\u0083ðËØÊ".length();
                  var5 = 16;
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   @Override
   public String toString() {
      long var1 = hwJvP ^ 47737135103526L;
      String var10000 = String.valueOf(this.KGEiK);
      float var10001 = this.MHPhb;
      float var10002 = this.YsqLC;
      float var10003 = this.xbPqZ;
      float var10004 = this.NsNNW;
      float var10005 = this.vNJrU;
      float var10006 = this.tfwoa;
      float var10007 = this.Wdqlk;
      float var10008 = this.SoHbR;
      String var10009 = String.valueOf(this.wSvyy);
      String var10010 = String.valueOf(this.ZxOWE);
      String var10011 = String.valueOf(this.Jebuc);
      String var10012 = String.valueOf(this.kVzNI);
      String var10013 = String.valueOf(this.KQCbq);
      float var3 = this.AgmNw;
      float var4 = this.Wuwvs;
      float var5 = this.FnXWE;
      float var6 = this.wnZQe;
      float var7 = this.Ctdmb;
      float var8 = this.Hkwko;
      boolean var9 = this.lyHrl;
      boolean var10 = this.UYULD;
      float var11 = this.XLXVL;
      String var12 = var10013;
      String var13 = var10012;
      String var14 = var10011;
      String var15 = var10010;
      String var16 = var10009;
      float var17 = var10008;
      float var18 = var10007;
      float var19 = var10006;
      float var20 = var10005;
      float var21 = var10004;
      float var22 = var10003;
      float var23 = var10002;
      float var24 = var10001;
      String var25 = var10000;
      return dst<"w">(32168, 204306492513554857L ^ var1)
         + var25
         + dst<"w">(21954, 784494068300593616L ^ var1)
         + var24
         + dst<"w">(6850, 4419078091939673792L ^ var1)
         + var23
         + dst<"w">(13935, 1409673441955371622L ^ var1)
         + var22
         + dst<"w">(24164, 3580129694666928754L ^ var1)
         + var21
         + dst<"w">(23379, 6947205888005093207L ^ var1)
         + var20
         + dst<"w">(3019, 6013576161948526554L ^ var1)
         + var19
         + dst<"w">(25926, 7608426220576541004L ^ var1)
         + var18
         + dst<"w">(6488, 7050943164546676047L ^ var1)
         + var17
         + dst<"w">(24359, 7221621272398508847L ^ var1)
         + var16
         + dst<"w">(3198, 3920215798302040185L ^ var1)
         + var15
         + dst<"w">(30223, 6498074521217243652L ^ var1)
         + var14
         + dst<"w">(25230, 847703965563719297L ^ var1)
         + var13
         + dst<"w">(18972, 293461936070764040L ^ var1)
         + var12
         + dst<"w">(20103, 8184546508756951682L ^ var1)
         + var11
         + dst<"w">(28698, 8057233198325799951L ^ var1)
         + var10
         + dst<"w">(575, 195359301148962353L ^ var1)
         + var9
         + dst<"w">(3912, 5630353752200799044L ^ var1)
         + var8
         + dst<"w">(20048, 8967238168616739408L ^ var1)
         + var7
         + dst<"w">(6394, 8072224993679439100L ^ var1)
         + var6
         + dst<"w">(17403, 9090259867098492918L ^ var1)
         + var5
         + dst<"w">(29072, 621531347433561491L ^ var1)
         + var4
         + dst<"w">(24644, 1494501840423652439L ^ var1)
         + var3
         + ")";
   }

   private static CallSite dst(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("dss".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/jS$ud" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public jS$ud dsl(float var1) {
      this.FnXWE = var1;
      this.YTTyt = true;
      return this;
   }

   public jS$ud dse(mG var1) {
      this.KQCbq = var1;
      this.RaaGc = true;
      return this;
   }

   public jS$ud dsa(la var1) {
      this.wSvyy = var1;
      return this;
   }

   public jS$ud dsf(float var1) {
      this.XLXVL = var1;
      this.zpzvY = true;
      return this;
   }

   private static String dsq(byte[] var0) {
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

   private static String dsr(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 17520;
      if (WRlpT[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])AIBpJ.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               AIBpJ.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/jS$ud", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = SsEUB[var5].getBytes("ISO-8859-1");
         WRlpT[var5] = dsq(((Cipher)var4[0]).doFinal(var9));
      }

      return WRlpT[var5];
   }

   public jS$ud drV(float var1) {
      this.NsNNW = var1;
      return this;
   }

   public jS$ud drS(float var1) {
      this.MHPhb = var1;
      return this;
   }

   public jS$ud drR(Matrix3x2fStack var1) {
      this.KGEiK = var1;
      return this;
   }

   public jS$ud drT(float var1) {
      this.YsqLC = var1;
      return this;
   }

   public jS$ud drU(float var1) {
      this.xbPqZ = var1;
      return this;
   }

   public jS$ud dsn(float var1) {
      this.AgmNw = var1;
      this.cKYFq = true;
      return this;
   }

   public jS$ud dsm(float var1) {
      this.Wuwvs = var1;
      this.LZhUC = true;
      return this;
   }

   public jS$ud dsk(float var1) {
      this.wnZQe = var1;
      this.iPtob = true;
      return this;
   }

   private static MatchException dsp(MatchException var0) {
      return var0;
   }

   public jS$ud dsc(GpuTextureView var1) {
      this.Jebuc = var1;
      return this;
   }

   public jS$ud dsj(float var1) {
      this.Ctdmb = var1;
      this.NEKxo = true;
      return this;
   }

   public jS$ud dsb(class_1044 var1) {
      this.ZxOWE = var1;
      return this;
   }

   public jS$ud drW(float var1) {
      this.vNJrU = var1;
      return this;
   }

   public jS$ud dsi(float var1) {
      this.Hkwko = var1;
      this.rvTlZ = true;
      return this;
   }

   public jS$ud dsh(boolean var1) {
      this.lyHrl = var1;
      this.pYZxw = true;
      return this;
   }

   public jS$ud dsg(boolean var1) {
      this.UYULD = var1;
      this.ejGJN = true;
      return this;
   }

   public jS$ud drX(float var1) {
      this.tfwoa = var1;
      return this;
   }

   public jS$ud drZ(float var1) {
      this.SoHbR = var1;
      return this;
   }

   public jS$ud dsd(class_12137 var1) {
      this.kVzNI = var1;
      return this;
   }

   public jS$ud drY(float var1) {
      this.Wdqlk = var1;
      return this;
   }

   public jS dso() {
      long var1 = hwJvP ^ 32750670975477L;
      String var10000 = jO.bKy();
      mG var4 = this.KQCbq;
      String var3 = var10000;

      label169: {
         label168: {
            try {
               var23 = this;
               if (var3 == null) {
                  break label169;
               }

               if (this.RaaGc) {
                  break label168;
               }
            } catch (MatchException var22) {
               throw dsp(var22);
            }

            var4 = jS.bMd();
         }

         var23 = this;
      }

      float var5 = var23.XLXVL;

      label159: {
         label158: {
            try {
               var24 = this.zpzvY;
               if (var3 == null) {
                  break label159;
               }

               if (this.zpzvY) {
                  break label158;
               }
            } catch (MatchException var21) {
               throw dsp(var21);
            }

            var5 = jS.bMe();
         }

         var24 = this.UYULD;
      }

      boolean var6 = var24;

      label149: {
         label148: {
            try {
               var25 = this.ejGJN;
               if (var3 == null) {
                  break label149;
               }

               if (this.ejGJN) {
                  break label148;
               }
            } catch (MatchException var20) {
               throw dsp(var20);
            }

            var6 = jS.bMf();
         }

         var25 = this.lyHrl;
      }

      boolean var7 = var25;

      label139: {
         label138: {
            try {
               var26 = this;
               if (var3 == null) {
                  break label139;
               }

               if (this.pYZxw) {
                  break label138;
               }
            } catch (MatchException var19) {
               throw dsp(var19);
            }

            var7 = jS.bMg();
         }

         var26 = this;
      }

      float var8 = var26.Hkwko;

      label129: {
         label128: {
            try {
               var27 = this;
               if (var3 == null) {
                  break label129;
               }

               if (this.rvTlZ) {
                  break label128;
               }
            } catch (MatchException var18) {
               throw dsp(var18);
            }

            var8 = jS.bMh();
         }

         var27 = this;
      }

      float var9 = var27.Ctdmb;

      label119: {
         label118: {
            try {
               var28 = this;
               if (var3 == null) {
                  break label119;
               }

               if (this.NEKxo) {
                  break label118;
               }
            } catch (MatchException var17) {
               throw dsp(var17);
            }

            var9 = jS.bMi();
         }

         var28 = this;
      }

      float var10 = var28.wnZQe;

      label109: {
         label108: {
            try {
               var29 = this;
               if (var3 == null) {
                  break label109;
               }

               if (this.iPtob) {
                  break label108;
               }
            } catch (MatchException var16) {
               throw dsp(var16);
            }

            var10 = jS.bMj();
         }

         var29 = this;
      }

      float var11 = var29.FnXWE;

      label99: {
         label98: {
            try {
               var30 = this;
               if (var3 == null) {
                  break label99;
               }

               if (this.YTTyt) {
                  break label98;
               }
            } catch (MatchException var15) {
               throw dsp(var15);
            }

            var11 = jS.bMk();
         }

         var30 = this;
      }

      float var12 = var30.Wuwvs;

      label89: {
         label88: {
            try {
               var31 = this;
               if (var3 == null) {
                  break label89;
               }

               if (this.LZhUC) {
                  break label88;
               }
            } catch (MatchException var14) {
               throw dsp(var14);
            }

            var12 = jS.bMl();
         }

         var31 = this;
      }

      float var13 = var31.AgmNw;
      if (!this.cKYFq) {
         var13 = jS.bMm();
      }

      return new jS(
         this.KGEiK,
         this.MHPhb,
         this.YsqLC,
         this.xbPqZ,
         this.NsNNW,
         this.vNJrU,
         this.tfwoa,
         this.Wdqlk,
         this.SoHbR,
         this.wSvyy,
         this.ZxOWE,
         this.Jebuc,
         this.kVzNI,
         var4,
         var5,
         var6,
         var7,
         var8,
         var9,
         var10,
         var11,
         var12,
         var13
      );
   }
}
