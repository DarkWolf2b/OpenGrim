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
import net.minecraft.class_1044;
import org.joml.Matrix3x2fStack;

public class jO$tZ {
   private Matrix3x2fStack zqyMa;
   private float ViidM;
   private float QEyRn;
   private float GfHAw;
   private float UHtFB;
   private boolean avkzP;
   private kd QvCTr;
   private boolean YAJPy;
   private kf ScNJe;
   private boolean vPiDj;
   private ld UaHoW;
   private boolean NqnQn;
   private mG wLguT;
   private la fcOAu;
   private class_1044 mMDiK;
   private boolean KOTFK;
   private boolean HXHff;
   private boolean WnNZm;
   private float UwXpQ;
   private boolean gTFVI;
   private float rNfXw;
   private boolean gBPCX;
   private float vwICI;
   private boolean aBbKD;
   private float lmpfr;
   private boolean hzTrm;
   private float UpAGt;
   private boolean IkXsY;
   private float BNfdr;
   private boolean nCioZ;
   private float XmitP;
   private boolean XTvuT;
   private float RcElA;
   private boolean bYgMB;
   private float UxNBE;
   private boolean KZbcI;
   private float oFQqY;
   private boolean bqdjk;
   private float RkjyL;
   private static final long BfVpk = gb.aYR(432562138399754221L, 2540498334252928184L, MethodHandles.lookup().lookupClass()).a(58561791290852L);
   private static final String[] Kxqtf;
   private static final String[] YClXp;
   private static final Map cYqfd = new HashMap(13);

   jO$tZ() {
   }

   static {
      long var0 = BfVpk ^ 78323890482015L;
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
      String var6 = "Fü\u0098ûU\u0017\b\u007f-Ìé©\u0094Ô>\u0007 1½\u001d|\u009a\u00adØ¤l\u001cHÂx\u0005Ó\n¯\u009dü\u000fÕx¤\u0095\u001cg¿\u0001(½¦í ZA+àp£Pöx'±Ñ\u0085\u0094t)\u0018!BÙ\u0013ám³\u0099\u008eTË\u009f:tã8Õ\fHÃ\u0013\u009aÙÓÝ\u0015ëý´eÉj\u000b?©ó/\n¡ÐjÃY\u009e#ÐJS¡´WÀÉ{¾R\u0018\u000fq9;¤\u009c\u0006\u0000Î§\u001b\u0010\b(å(É\u0088\u0004\u000f)V¥w¹\u009a\u0005k\u0095Z6¼Üd\u009cs\u000bj\u001añÐ§\u0011fýÜ©\u001e\u0015mÃð[À4Ò\u0010G~ñï\u0003¾\u0018ùz\u0093\u0001 \u0000\u0010§î\u0018=y\u0016&ô&2{¬)UAä\u0083$O]\u00924\"¬áó<(òw%4\u009d»\u0000Q¨Ýî M§\u001fÞ\u0019²º '½\"\u0092ôh\u001fI«\u0092\u00ad\u0086ôG?\u0088\u008d@}Ü \u009dNtùúÐ{¾7+á>KÉv^kÕ³\u0093\u008f`\u000e«\u0094\u0094LÜSkE\u0086\u0018VzÃ\u0096FC\u008c¿\u0001©ÑäO\u0089à\rï¡\u001eH\u008aTL\u0087(0\u009a´*êÄþ_=âñ[`â\u009a\u0013²Ä.\u0089äj½.¨\u0098°ðÛ-³±\u0087v6Ü(\fâ\u00920¸]h\u0017~[\u001d\u0085Ð?8ôGÞ\u008fß\u0017\u0080]\u0000\u009e½\u001fÏV!\u0083\u0010 )uô·£%6\u0092î£î>/g¤c\t\u009f  `ø¦ßÈ¬\u0095yoöñ9Ø&`Ð\u0011F÷\u0096øh\u0088zZ\u0090{#â\u0000À\u0085H\u00815¥\u0018vÊ÷Ý©\u008f\u0087º¾¯¢Xn)Ä\u0014\nÈÖ\u008aÆüi¤<þ\u00198Ô\u0085¾Ñ\u008a\u0083\u0017l§ào\u0002/4\u009a}dâü7N½=¿¡t\u0011;\u00ad\u0099\u0082BÑq¯u\u0092?ö³(«_µxUÿ:|ï'Ñ?M©ÿÒ=[I\u0098¨¡9ZÙ\u0096ÚÆñÏ\u00ad¡sE\u009ed®ë\u0098æ \u0087ÄÈî<¸¹^X°n\u009a¥\u0096ÅÐØµ\u0015\u000bÂÅÉ\u0092\r\u0017\u008b>ü¯Íõ(\u0010¨²\u0007®ô\u0015º#R\u0003ë\u0016=5B#«'0\u0019´\u008b<®ðõ\u0006\"0\u0006â\u001aþ[_í¸\n\u001e8\u000fÙgxQ²\u0097Î¨ÂpFÑç\nL2\u0080\u0091\u0082/Ã¨VA\u001a/\u0092Ä(\u0085ó9\u0092ObJØÍI\u0006@¿\r0$\\Òi\u001dÖH\u00921\u009c´\u0018&\u0096»Ó\u000eE@,\u009bQñ\u009f?££A~¿ óeá/å\u00188\u0003\u0092ÂÃ\u0003\u0095\u001a\u0017\u0080\u0092Jß\u0016âñ\u008e¼½È\t¯O\u007f !\t,\f\u0081F²-\u0001\u009dxêÂèß\u0011\u001f\t-ïì±Æq\t\u0007XÌ¢ä\t\u0090";
      int var8 = "Fü\u0098ûU\u0017\b\u007f-Ìé©\u0094Ô>\u0007 1½\u001d|\u009a\u00adØ¤l\u001cHÂx\u0005Ó\n¯\u009dü\u000fÕx¤\u0095\u001cg¿\u0001(½¦í ZA+àp£Pöx'±Ñ\u0085\u0094t)\u0018!BÙ\u0013ám³\u0099\u008eTË\u009f:tã8Õ\fHÃ\u0013\u009aÙÓÝ\u0015ëý´eÉj\u000b?©ó/\n¡ÐjÃY\u009e#ÐJS¡´WÀÉ{¾R\u0018\u000fq9;¤\u009c\u0006\u0000Î§\u001b\u0010\b(å(É\u0088\u0004\u000f)V¥w¹\u009a\u0005k\u0095Z6¼Üd\u009cs\u000bj\u001añÐ§\u0011fýÜ©\u001e\u0015mÃð[À4Ò\u0010G~ñï\u0003¾\u0018ùz\u0093\u0001 \u0000\u0010§î\u0018=y\u0016&ô&2{¬)UAä\u0083$O]\u00924\"¬áó<(òw%4\u009d»\u0000Q¨Ýî M§\u001fÞ\u0019²º '½\"\u0092ôh\u001fI«\u0092\u00ad\u0086ôG?\u0088\u008d@}Ü \u009dNtùúÐ{¾7+á>KÉv^kÕ³\u0093\u008f`\u000e«\u0094\u0094LÜSkE\u0086\u0018VzÃ\u0096FC\u008c¿\u0001©ÑäO\u0089à\rï¡\u001eH\u008aTL\u0087(0\u009a´*êÄþ_=âñ[`â\u009a\u0013²Ä.\u0089äj½.¨\u0098°ðÛ-³±\u0087v6Ü(\fâ\u00920¸]h\u0017~[\u001d\u0085Ð?8ôGÞ\u008fß\u0017\u0080]\u0000\u009e½\u001fÏV!\u0083\u0010 )uô·£%6\u0092î£î>/g¤c\t\u009f  `ø¦ßÈ¬\u0095yoöñ9Ø&`Ð\u0011F÷\u0096øh\u0088zZ\u0090{#â\u0000À\u0085H\u00815¥\u0018vÊ÷Ý©\u008f\u0087º¾¯¢Xn)Ä\u0014\nÈÖ\u008aÆüi¤<þ\u00198Ô\u0085¾Ñ\u008a\u0083\u0017l§ào\u0002/4\u009a}dâü7N½=¿¡t\u0011;\u00ad\u0099\u0082BÑq¯u\u0092?ö³(«_µxUÿ:|ï'Ñ?M©ÿÒ=[I\u0098¨¡9ZÙ\u0096ÚÆñÏ\u00ad¡sE\u009ed®ë\u0098æ \u0087ÄÈî<¸¹^X°n\u009a¥\u0096ÅÐØµ\u0015\u000bÂÅÉ\u0092\r\u0017\u008b>ü¯Íõ(\u0010¨²\u0007®ô\u0015º#R\u0003ë\u0016=5B#«'0\u0019´\u008b<®ðõ\u0006\"0\u0006â\u001aþ[_í¸\n\u001e8\u000fÙgxQ²\u0097Î¨ÂpFÑç\nL2\u0080\u0091\u0082/Ã¨VA\u001a/\u0092Ä(\u0085ó9\u0092ObJØÍI\u0006@¿\r0$\\Òi\u001dÖH\u00921\u009c´\u0018&\u0096»Ó\u000eE@,\u009bQñ\u009f?££A~¿ óeá/å\u00188\u0003\u0092ÂÃ\u0003\u0095\u001a\u0017\u0080\u0092Jß\u0016âñ\u008e¼½È\t¯O\u007f !\t,\f\u0081F²-\u0001\u009dxêÂèß\u0011\u001f\t-ïì±Æq\t\u0007XÌ¢ä\t\u0090"
         .length();
      char var5 = 16;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = dqB(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     Kxqtf = var9;
                     YClXp = new String[23];
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

                  var6 = "Ëîµk\u0000ô±\u00adY¬\u009c\u0091\u009fç=\u00ad\u001a¬&?u'\u0089\u0010\u0018\u000b5!Õíì´8#ØÃ\u0012\u008ap\u009dGfj\u000bØ\fL2G";
                  var8 = "Ëîµk\u0000ô±\u00adY¬\u009c\u0091\u009fç=\u00ad\u001a¬&?u'\u0089\u0010\u0018\u000b5!Õíì´8#ØÃ\u0012\u008ap\u009dGfj\u000bØ\fL2G"
                     .length();
                  var5 = 24;
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   @Override
   public String toString() {
      long var1 = BfVpk ^ 113975763906642L;
      String var10000 = String.valueOf(this.zqyMa);
      float var10001 = this.ViidM;
      float var10002 = this.QEyRn;
      float var10003 = this.GfHAw;
      float var10004 = this.UHtFB;
      String var10005 = String.valueOf(this.QvCTr);
      String var10006 = String.valueOf(this.ScNJe);
      String var10007 = String.valueOf(this.UaHoW);
      String var10008 = String.valueOf(this.wLguT);
      String var10009 = String.valueOf(this.fcOAu);
      String var10010 = String.valueOf(this.mMDiK);
      float var3 = this.RkjyL;
      float var4 = this.oFQqY;
      float var5 = this.UxNBE;
      float var6 = this.RcElA;
      float var7 = this.XmitP;
      float var8 = this.BNfdr;
      float var9 = this.UpAGt;
      float var10 = this.lmpfr;
      float var11 = this.vwICI;
      float var12 = this.rNfXw;
      float var13 = this.UwXpQ;
      boolean var14 = this.HXHff;
      String var15 = var10010;
      String var16 = var10009;
      String var17 = var10008;
      String var18 = var10007;
      String var19 = var10006;
      String var20 = var10005;
      float var21 = var10004;
      float var22 = var10003;
      float var23 = var10002;
      float var24 = var10001;
      String var25 = var10000;
      return dqE<"t">(6136, 4174172285983586414L ^ var1)
         + var25
         + dqE<"t">(7819, 4205263808824504592L ^ var1)
         + var24
         + dqE<"t">(32317, 4699771193510007203L ^ var1)
         + var23
         + dqE<"t">(2664, 3838635205426800127L ^ var1)
         + var22
         + dqE<"t">(1466, 2840102924471101998L ^ var1)
         + var21
         + dqE<"t">(16232, 4791913147918897379L ^ var1)
         + var20
         + dqE<"t">(9610, 5180729312846924307L ^ var1)
         + var19
         + dqE<"t">(30430, 3965031678649669964L ^ var1)
         + var18
         + dqE<"t">(2160, 4989629487491934200L ^ var1)
         + var17
         + dqE<"t">(9922, 4384366769206872397L ^ var1)
         + var16
         + dqE<"t">(10728, 1242512623081866854L ^ var1)
         + var15
         + dqE<"t">(14714, 3081398506724185839L ^ var1)
         + var14
         + dqE<"t">(1351, 4942075784849418966L ^ var1)
         + var13
         + dqE<"t">(8819, 4007147798839152107L ^ var1)
         + var12
         + dqE<"t">(14748, 5378075733356041740L ^ var1)
         + var11
         + dqE<"t">(988, 5997278705007488086L ^ var1)
         + var10
         + dqE<"t">(4069, 2773801282297094265L ^ var1)
         + var9
         + dqE<"t">(31421, 2749503091390747938L ^ var1)
         + var8
         + dqE<"t">(7847, 1496693036704297277L ^ var1)
         + var7
         + dqE<"t">(3583, 6424269735515906678L ^ var1)
         + var6
         + dqE<"t">(23545, 8425379079044871284L ^ var1)
         + var5
         + dqE<"t">(32575, 4875929101255413932L ^ var1)
         + var4
         + dqE<"t">(2465, 1763677160459691580L ^ var1)
         + var3
         + ")";
   }

   public jO$tZ dqx(float var1) {
      this.oFQqY = var1;
      this.KZbcI = true;
      return this;
   }

   public jO dqz() {
      long var1 = BfVpk ^ 134971795846283L;
      String var10000 = jO.bKy();
      kd var4 = this.QvCTr;
      String var3 = var10000;

      label285: {
         label284: {
            try {
               var36 = this;
               if (var3 == null) {
                  break label285;
               }

               if (this.avkzP) {
                  break label284;
               }
            } catch (MatchException var35) {
               throw dqA(var35);
            }

            var4 = jO.bJJ();
         }

         var36 = this;
      }

      kf var5 = var36.ScNJe;

      label275: {
         label274: {
            try {
               var37 = this;
               if (var3 == null) {
                  break label275;
               }

               if (this.YAJPy) {
                  break label274;
               }
            } catch (MatchException var34) {
               throw dqA(var34);
            }

            var5 = jO.bJK();
         }

         var37 = this;
      }

      ld var6 = var37.UaHoW;

      label265: {
         label264: {
            try {
               var38 = this;
               if (var3 == null) {
                  break label265;
               }

               if (this.vPiDj) {
                  break label264;
               }
            } catch (MatchException var33) {
               throw dqA(var33);
            }

            var6 = jO.bJL();
         }

         var38 = this;
      }

      mG var7 = var38.wLguT;

      label255: {
         label254: {
            try {
               var39 = this.NqnQn;
               if (var3 == null) {
                  break label255;
               }

               if (this.NqnQn) {
                  break label254;
               }
            } catch (MatchException var32) {
               throw dqA(var32);
            }

            var7 = jO.bJM();
         }

         var39 = this.HXHff;
      }

      boolean var8 = var39;

      label245: {
         label244: {
            try {
               var40 = this;
               if (var3 == null) {
                  break label245;
               }

               if (this.KOTFK) {
                  break label244;
               }
            } catch (MatchException var31) {
               throw dqA(var31);
            }

            var8 = jO.bJN();
         }

         var40 = this;
      }

      float var9 = var40.UwXpQ;

      label235: {
         label234: {
            try {
               var41 = this;
               if (var3 == null) {
                  break label235;
               }

               if (this.WnNZm) {
                  break label234;
               }
            } catch (MatchException var30) {
               throw dqA(var30);
            }

            var9 = jO.bJO();
         }

         var41 = this;
      }

      float var10 = var41.rNfXw;

      label225: {
         label224: {
            try {
               var42 = this;
               if (var3 == null) {
                  break label225;
               }

               if (this.gTFVI) {
                  break label224;
               }
            } catch (MatchException var29) {
               throw dqA(var29);
            }

            var10 = jO.bJP();
         }

         var42 = this;
      }

      float var11 = var42.vwICI;

      label215: {
         label214: {
            try {
               var43 = this;
               if (var3 == null) {
                  break label215;
               }

               if (this.gBPCX) {
                  break label214;
               }
            } catch (MatchException var28) {
               throw dqA(var28);
            }

            var11 = jO.bJQ();
         }

         var43 = this;
      }

      float var12 = var43.lmpfr;

      label205: {
         label204: {
            try {
               var44 = this;
               if (var3 == null) {
                  break label205;
               }

               if (this.aBbKD) {
                  break label204;
               }
            } catch (MatchException var27) {
               throw dqA(var27);
            }

            var12 = jO.bJR();
         }

         var44 = this;
      }

      float var13 = var44.UpAGt;

      label195: {
         label194: {
            try {
               var45 = this;
               if (var3 == null) {
                  break label195;
               }

               if (this.hzTrm) {
                  break label194;
               }
            } catch (MatchException var26) {
               throw dqA(var26);
            }

            var13 = jO.bJS();
         }

         var45 = this;
      }

      float var14 = var45.BNfdr;

      label185: {
         label184: {
            try {
               var46 = this;
               if (var3 == null) {
                  break label185;
               }

               if (this.IkXsY) {
                  break label184;
               }
            } catch (MatchException var25) {
               throw dqA(var25);
            }

            var14 = jO.bJT();
         }

         var46 = this;
      }

      float var15 = var46.XmitP;

      label175: {
         label174: {
            try {
               var47 = this;
               if (var3 == null) {
                  break label175;
               }

               if (this.nCioZ) {
                  break label174;
               }
            } catch (MatchException var24) {
               throw dqA(var24);
            }

            var15 = jO.bJU();
         }

         var47 = this;
      }

      float var16 = var47.RcElA;

      label165: {
         label164: {
            try {
               var48 = this;
               if (var3 == null) {
                  break label165;
               }

               if (this.XTvuT) {
                  break label164;
               }
            } catch (MatchException var23) {
               throw dqA(var23);
            }

            var16 = jO.bJV();
         }

         var48 = this;
      }

      float var17 = var48.UxNBE;

      label155: {
         label154: {
            try {
               var49 = this;
               if (var3 == null) {
                  break label155;
               }

               if (this.bYgMB) {
                  break label154;
               }
            } catch (MatchException var22) {
               throw dqA(var22);
            }

            var17 = jO.bJW();
         }

         var49 = this;
      }

      float var18 = var49.oFQqY;

      label145: {
         label144: {
            try {
               var50 = this;
               if (var3 == null) {
                  break label145;
               }

               if (this.KZbcI) {
                  break label144;
               }
            } catch (MatchException var21) {
               throw dqA(var21);
            }

            var18 = jO.bJX();
         }

         var50 = this;
      }

      float var19 = var50.RkjyL;
      if (!this.bqdjk) {
         var19 = jO.bJY();
      }

      try {
         jO var51 = new jO(
            this.zqyMa,
            this.ViidM,
            this.QEyRn,
            this.GfHAw,
            this.UHtFB,
            var4,
            var5,
            var6,
            var7,
            this.fcOAu,
            this.mMDiK,
            var8,
            var9,
            var10,
            var11,
            var12,
            var13,
            var14,
            var15,
            var16,
            var17,
            var18,
            var19
         );
         if (iS.bwL() == null) {
            jO.bKx("Dlh2P");
         }

         return var51;
      } catch (MatchException var20) {
         throw dqA(var20);
      }
   }

   public jO$tZ dqy(float var1) {
      this.RkjyL = var1;
      this.bqdjk = true;
      return this;
   }

   public jO$tZ dqk(mG var1) {
      this.wLguT = var1;
      this.NqnQn = true;
      return this;
   }

   public jO$tZ dqv(float var1) {
      this.RcElA = var1;
      this.XTvuT = true;
      return this;
   }

   public jO$tZ dqm(class_1044 var1) {
      this.mMDiK = var1;
      return this;
   }

   public jO$tZ dqo(float var1) {
      this.UwXpQ = var1;
      this.WnNZm = true;
      return this;
   }

   public jO$tZ dqw(float var1) {
      this.UxNBE = var1;
      this.bYgMB = true;
      return this;
   }

   public jO$tZ dqh(kd var1) {
      this.QvCTr = var1;
      this.avkzP = true;
      return this;
   }

   public jO$tZ dqj(ld var1) {
      this.UaHoW = var1;
      this.vPiDj = true;
      return this;
   }

   public jO$tZ dql(la var1) {
      this.fcOAu = var1;
      return this;
   }

   public jO$tZ dqr(float var1) {
      this.lmpfr = var1;
      this.aBbKD = true;
      return this;
   }

   public jO$tZ dqu(float var1) {
      this.XmitP = var1;
      this.nCioZ = true;
      return this;
   }

   public jO$tZ dqt(float var1) {
      this.BNfdr = var1;
      this.IkXsY = true;
      return this;
   }

   public jO$tZ dqs(float var1) {
      this.UpAGt = var1;
      this.hzTrm = true;
      return this;
   }

   private static MatchException dqA(MatchException var0) {
      return var0;
   }

   public jO$tZ dqp(float var1) {
      this.rNfXw = var1;
      this.gTFVI = true;
      return this;
   }

   private static String dqB(byte[] var0) {
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

   private static CallSite dqE(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("dqD".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/jO$tZ" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String dqC(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 3133;
      if (YClXp[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])cYqfd.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               cYqfd.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/jO$tZ", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = Kxqtf[var5].getBytes("ISO-8859-1");
         YClXp[var5] = dqB(((Cipher)var4[0]).doFinal(var9));
      }

      return YClXp[var5];
   }

   private static Object dqD(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = dqC(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public jO$tZ dqi(kf var1) {
      this.ScNJe = var1;
      this.YAJPy = true;
      return this;
   }

   public jO$tZ dqq(float var1) {
      this.vwICI = var1;
      this.gBPCX = true;
      return this;
   }

   public jO$tZ dqn(boolean var1) {
      this.HXHff = var1;
      this.KOTFK = true;
      return this;
   }

   public jO$tZ dqc(Matrix3x2fStack var1) {
      this.zqyMa = var1;
      return this;
   }

   public jO$tZ dqf(float var1) {
      this.GfHAw = var1;
      return this;
   }

   public jO$tZ dqd(float var1) {
      this.ViidM = var1;
      return this;
   }

   public jO$tZ dqe(float var1) {
      this.QEyRn = var1;
      return this;
   }

   public jO$tZ dqg(float var1) {
      this.UHtFB = var1;
      return this;
   }
}
