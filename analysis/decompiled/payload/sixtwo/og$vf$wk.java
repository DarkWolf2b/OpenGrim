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

public class og$vf$wk {
   private cF pGbwx;
   private boolean EmJyM;
   private boolean UlwvW;
   private boolean ziHyi;
   private boolean dukuf;
   private boolean GTkcZ;
   private boolean muToz;
   private boolean uIIyL;
   private boolean wzOKG;
   private boolean XQoPB;
   private boolean EvvPh;
   private boolean dDEaJ;
   private boolean kUynf;
   private float WaEAh;
   private static final long bZMUv = gb.aYR(1584896708538353200L, -7003303683788694407L, MethodHandles.lookup().lookupClass()).a(213472171466999L);
   private static final String[] AitoK;
   private static final String[] aChtj;
   private static final Map wZoRo = new HashMap(13);

   og$vf$wk() {
   }

   static {
      long var0 = bZMUv ^ 91442884681499L;
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
      String var6 = "\u0004n\u00120Ñ\fÔ\u0087À\\\r\u0097l\f#6¬Ç?\u0097^¯àä7\\\u0090ó(îEQ'ÓA¼WC\u0015û\u0010iµª´_G\u008a~ó\u0013\u0018Õµ\u0007\u008f\u0087(Ñ+Y½³éëEË\u0095\u0087yY|jµD\u000e\u0016Wü¾Í\u008dUv\u0092¨\u00adÞf\"\u009fïSµU\u00adê/H÷uâ£\u001d³Ë3UûÐÅ\u001b\u0013§-\u0085{^üZ¶»b\u0099\u001dxì\u000b\u0084:N³³\u0012J±\u0000%`\u0018}B¼&ç©Â\u0018eòßxv\bÔünàÓ\u0087*\u000eÊv\u0010!\u0003pL`5(\u0088n\u0012\u009e,]æòô\u0016?\u0087Ï^ð£ìVhÙ&v\n\u0012MP\u0015-ýn~uQ\u0098\u0018Óö\u0085ó\u0097(\u0097Kõ,åCA»#§õ\u0099¿Ûï\u009c\u0093[\u0083³ñí}Ë#\n\u009f³\u0091A#æ\"s\u0010i×âB\u0080";
      int var8 = "\u0004n\u00120Ñ\fÔ\u0087À\\\r\u0097l\f#6¬Ç?\u0097^¯àä7\\\u0090ó(îEQ'ÓA¼WC\u0015û\u0010iµª´_G\u008a~ó\u0013\u0018Õµ\u0007\u008f\u0087(Ñ+Y½³éëEË\u0095\u0087yY|jµD\u000e\u0016Wü¾Í\u008dUv\u0092¨\u00adÞf\"\u009fïSµU\u00adê/H÷uâ£\u001d³Ë3UûÐÅ\u001b\u0013§-\u0085{^üZ¶»b\u0099\u001dxì\u000b\u0084:N³³\u0012J±\u0000%`\u0018}B¼&ç©Â\u0018eòßxv\bÔünàÓ\u0087*\u000eÊv\u0010!\u0003pL`5(\u0088n\u0012\u009e,]æòô\u0016?\u0087Ï^ð£ìVhÙ&v\n\u0012MP\u0015-ýn~uQ\u0098\u0018Óö\u0085ó\u0097(\u0097Kõ,åCA»#§õ\u0099¿Ûï\u009c\u0093[\u0083³ñí}Ë#\n\u009f³\u0091A#æ\"s\u0010i×âB\u0080"
         .length();
      char var5 = '(';
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = dzH(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     AitoK = var9;
                     aChtj = new String[8];
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

                  var6 = "\u009cxIvîÇ4ªÏ\u0099e\u00828èW\u0092Q\u0014Û\f3j´\u0011ÃÂ\u008bLóÔ£\u0089\u008fûà3ÌFÏ]-§P\u008dÀåT\u0088(Óã\u0010+\u000eôÜQqOUo\u0018xF9\fÐõz²Åñ\u0095ó\u0083@\u0018z]\u0000¿\fñ&JÉ\u0089ÚÀ";
                  var8 = "\u009cxIvîÇ4ªÏ\u0099e\u00828èW\u0092Q\u0014Û\f3j´\u0011ÃÂ\u008bLóÔ£\u0089\u008fûà3ÌFÏ]-§P\u008dÀåT\u0088(Óã\u0010+\u000eôÜQqOUo\u0018xF9\fÐõz²Åñ\u0095ó\u0083@\u0018z]\u0000¿\fñ&JÉ\u0089ÚÀ"
                     .length();
                  var5 = '0';
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   @Override
   public String toString() {
      long var1 = bZMUv ^ 45393197132265L;
      String var10000 = String.valueOf(this.pGbwx);
      float var3 = this.WaEAh;
      boolean var4 = this.kUynf;
      boolean var5 = this.EvvPh;
      boolean var6 = this.wzOKG;
      boolean var7 = this.muToz;
      boolean var8 = this.dukuf;
      boolean var9 = this.UlwvW;
      String var10 = var10000;
      return dzK<"z">(13652, 6723762064336494984L ^ var1)
         + var10
         + dzK<"z">(9337, 4439823626048516259L ^ var1)
         + var9
         + dzK<"z">(27586, 4337525056671645466L ^ var1)
         + var8
         + dzK<"z">(13702, 8877106561281499483L ^ var1)
         + var7
         + dzK<"z">(10666, 1812184168165752181L ^ var1)
         + var6
         + dzK<"z">(4782, 7870632899562571383L ^ var1)
         + var5
         + dzK<"z">(29032, 1234011649852171699L ^ var1)
         + var4
         + dzK<"z">(26607, 5890880666140373809L ^ var1)
         + var3
         + ")";
   }

   private static Object dzJ(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = dzI(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public og$vf$wk dzy(boolean var1) {
      this.UlwvW = var1;
      this.EmJyM = true;
      return this;
   }

   public og$vf$wk dzB(boolean var1) {
      this.wzOKG = var1;
      this.uIIyL = true;
      return this;
   }

   public og$vf$wk dzx(cF var1) {
      this.pGbwx = var1;
      return this;
   }

   public og$vf$wk dzA(boolean var1) {
      this.muToz = var1;
      this.GTkcZ = true;
      return this;
   }

   public og$vf$wk dzC(boolean var1) {
      this.EvvPh = var1;
      this.XQoPB = true;
      return this;
   }

   public og$vf$wk dzD(boolean var1) {
      this.kUynf = var1;
      this.dDEaJ = true;
      return this;
   }

   public og$vf dzF() {
      long var1 = bZMUv ^ 5941482073263L;
      String[] var10000 = of.cCL();
      boolean var4 = this.UlwvW;
      String[] var3 = var10000;

      label119: {
         label118: {
            try {
               var17 = this.EmJyM;
               if (var3 == null) {
                  break label119;
               }

               if (this.EmJyM) {
                  break label118;
               }
            } catch (MatchException var16) {
               throw dzG(var16);
            }

            var4 = og$vf.dwl();
         }

         var17 = this.dukuf;
      }

      boolean var5 = var17;

      label109: {
         label108: {
            try {
               var18 = this.ziHyi;
               if (var3 == null) {
                  break label109;
               }

               if (this.ziHyi) {
                  break label108;
               }
            } catch (MatchException var15) {
               throw dzG(var15);
            }

            var5 = og$vf.dwm();
         }

         var18 = this.muToz;
      }

      boolean var6 = var18;

      label99: {
         label98: {
            try {
               var19 = this.GTkcZ;
               if (var3 == null) {
                  break label99;
               }

               if (this.GTkcZ) {
                  break label98;
               }
            } catch (MatchException var14) {
               throw dzG(var14);
            }

            var6 = og$vf.dwn();
         }

         var19 = this.wzOKG;
      }

      boolean var7 = var19;

      label89: {
         label88: {
            try {
               var20 = this.uIIyL;
               if (var3 == null) {
                  break label89;
               }

               if (this.uIIyL) {
                  break label88;
               }
            } catch (MatchException var13) {
               throw dzG(var13);
            }

            var7 = og$vf.dwo();
         }

         var20 = this.EvvPh;
      }

      boolean var8 = var20;

      label79: {
         label78: {
            try {
               var21 = this.XQoPB;
               if (var3 == null) {
                  break label79;
               }

               if (this.XQoPB) {
                  break label78;
               }
            } catch (MatchException var12) {
               throw dzG(var12);
            }

            var8 = og$vf.dwp();
         }

         var21 = this.kUynf;
      }

      boolean var9 = var21;

      label69: {
         label68: {
            try {
               var22 = this.dDEaJ;
               if (var3 == null) {
                  break label68;
               }

               if (this.dDEaJ) {
                  break label69;
               }
            } catch (MatchException var11) {
               throw dzG(var11);
            }

            var22 = og$vf.dwq();
         }

         var9 = var22;
      }

      try {
         og$vf var23 = new og$vf(this.pGbwx, var4, var5, var6, var7, var8, var9, this.WaEAh);
         if (var3 == null) {
            iS.bwK("z0ut7b");
         }

         return var23;
      } catch (MatchException var10) {
         throw dzG(var10);
      }
   }

   public og$vf$wk dzz(boolean var1) {
      this.dukuf = var1;
      this.ziHyi = true;
      return this;
   }

   private static CallSite dzK(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("dzJ".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/og$vf$wk" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public og$vf$wk dzE(float var1) {
      this.WaEAh = var1;
      return this;
   }

   private static MatchException dzG(MatchException var0) {
      return var0;
   }

   private static String dzI(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 12273;
      if (aChtj[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])wZoRo.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               wZoRo.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/og$vf$wk", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = AitoK[var5].getBytes("ISO-8859-1");
         aChtj[var5] = dzH(((Cipher)var4[0]).doFinal(var9));
      }

      return aChtj[var5];
   }

   private static String dzH(byte[] var0) {
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
}
