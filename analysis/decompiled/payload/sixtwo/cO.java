package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class cO {
   private final int[] iiNmF;
   private final int[] JeBrr;
   private final mT JDVbW;
   private final long inlwG;
   private LocalTime FXora;
   private cM elVoN;
   private final rk rJzYE;
   private final rk IosXQ;
   private final rk RzMsO;
   private static final long ayAdd = gb.aYR(3981959989755749009L, -3203703168605022708L, MethodHandles.lookup().lookupClass()).a(137114852567232L);
   private static final String[] fUKvm;
   private static final String[] FnKDz;
   private static final Map ccuta = new HashMap(13);
   private static final long[] lEezb;
   private static final Integer[] vIIBZ;
   private static final Map KPEDz;
   private static final long xTsAN;

   public cO(int[] var1, cM var2) {
      long var3 = ayAdd ^ 115846104064428L;
      int[] var10001 = new int[Yq<"o">(13303, 4687103660488650511L ^ var3)];
      var10001[0] = Yq<"o">(27524, 1479812367720757110L ^ var3);
      var10001[1] = Yq<"o">(16124, 2565146564879213081L ^ var3);
      var10001[2] = Yq<"o">(4496, 5171375388190788961L ^ var3);
      var10001[3] = Yq<"o">(1103, 140703754919106746L ^ var3);
      var10001[4] = Yq<"o">(4891, 7963414964547506149L ^ var3);
      var10001[5] = Yq<"o">(15415, 7334049101321887946L ^ var3);
      var10001[Yq<"o">(32647, 131628427686585200L ^ var3)] = Yq<"o">(27499, 7229364520352790423L ^ var3);
      var10001[Yq<"o">(3616, 7619360074204992195L ^ var3)] = Yq<"o">(6960, 7676957655709173706L ^ var3);
      var10001[Yq<"o">(28472, 4270816225976038350L ^ var3)] = Yq<"o">(31320, 1611081192420681404L ^ var3);
      var10001[Yq<"o">(16146, 1149797349138883572L ^ var3)] = Yq<"o">(15415, 7334049101321887946L ^ var3);
      var10001[Yq<"o">(1944, 1735834394340744058L ^ var3)] = Yq<"o">(16798, 4429111225481043321L ^ var3);
      var10001[Yq<"o">(30013, 329960795903044036L ^ var3)] = Yq<"o">(25693, 4606488464853481645L ^ var3);
      this(var10001, var1, var2);
   }

   public cO(int[] var1, int[] var2, cM var3) {
      long var4 = ayAdd ^ 140672496553446L;
      super();
      this.JDVbW = mT.cpz();
      this.rJzYE = new rk(Yq<"o">(6225, 3799106509588736224L ^ var4)).dhs(rj.XzDkv);
      this.IosXQ = new rk(Yq<"o">(12154, 7612010199104856004L ^ var4)).dhs(rj.NJlxm);
      this.RzMsO = new rk(Yq<"o">(20052, 2938585384287969L ^ var4)).dhs(rj.XzDkv);
      int var10000 = cN.XT();
      this.iiNmF = var1;
      this.JeBrr = var2;
      this.inlwG = xTsAN;
      this.FXora = LocalTime.now();
      this.elVoN = var3;
      int var6 = var10000;

      try {
         if (iS.bwL() == null) {
            cN.XR(++var6);
         }
      } catch (MatchException var7) {
         throw Yj(var7);
      }
   }

   static {
      long var16 = ayAdd ^ 74607018597392L;
      Cipher var18;
      Cipher var10000 = var18 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var19 = 1; var19 < 8; var19++) {
         var10003[var19] = (byte)(var16 << var19 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var25 = new String[2];
      int var23 = 0;
      String var22 = "üdb\u0098ã\u0098ãA~I\u0085|/\u009b}\r\u0010\u001d@òjÛ\u0006A>'¯[\u001e\u0006Qëy";
      int var24 = "üdb\u0098ã\u0098ãA~I\u0085|/\u009b}\r\u0010\u001d@òjÛ\u0006A>'¯[\u001e\u0006Qëy".length();
      char var21 = 16;
      int var20 = -1;

      while (true) {
         byte[] var26 = var18.doFinal(var22.substring(++var20, var20 + var21).getBytes("ISO-8859-1"));
         String var37 = Yk(var26).intern();
         int var10001 = -1;
         var25[var23++] = var37;
         if ((var20 += var21) >= var24) {
            fUKvm = var25;
            FnKDz = new String[2];
            KPEDz = new HashMap(13);
            Cipher var5;
            var10000 = var5 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var6 = 1; var6 < 8; var6++) {
               var10003[var6] = (byte)(var16 << var6 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var11 = new long[22];
            int var8 = 0;
            String var9 = "\n\\\u009bt/.ÑðWkµ0\u0080\bTf\u008al£\b\u0094@·LÐÿÔ³2Ä$O\u0012\u008c\u0006ZËÛ°÷»\u0098p>a#\u000e\u0085BÉ1«ß¤êÝßÏ\u0091\fe\u001a\u0019\u0099êíúº¿/DÅEF^\u0098°ßH \u0086\u0084\u0017\u008dÁÓ\u0014Ö\u0018\u0014mK-#nÄ\u0094Jm\u0082Sj´JM\u008f´e^3àÁ \u007fã\u0014\u001ar\u0012\n\u009fö\u0089Öb\u008dÌµ\\\u0097ñòÚ¯%\u0019Æ(íÎ@\u0005ÿE\u008d\u0011\u0012\u0017\u007fÆ#\u0096ý9Ô\u007f\u0088e>¾";
            int var10 = "\n\\\u009bt/.ÑðWkµ0\u0080\bTf\u008al£\b\u0094@·LÐÿÔ³2Ä$O\u0012\u008c\u0006ZËÛ°÷»\u0098p>a#\u000e\u0085BÉ1«ß¤êÝßÏ\u0091\fe\u001a\u0019\u0099êíúº¿/DÅEF^\u0098°ßH \u0086\u0084\u0017\u008dÁÓ\u0014Ö\u0018\u0014mK-#nÄ\u0094Jm\u0082Sj´JM\u008f´e^3àÁ \u007fã\u0014\u001ar\u0012\n\u009fö\u0089Öb\u008dÌµ\\\u0097ñòÚ¯%\u0019Æ(íÎ@\u0005ÿE\u008d\u0011\u0012\u0017\u007fÆ#\u0096ý9Ô\u007f\u0088e>¾"
               .length();
            byte var7 = 0;

            label42:
            while (true) {
               var10001 = var7;
               var7 += 8;
               byte[] var12 = var9.substring(var10001, var7).getBytes("ISO-8859-1");
               long[] var30 = var11;
               var10001 = var8++;
               long var40 = (var12[0] & 255L) << 56
                  | (var12[1] & 255L) << 48
                  | (var12[2] & 255L) << 40
                  | (var12[3] & 255L) << 32
                  | (var12[4] & 255L) << 24
                  | (var12[5] & 255L) << 16
                  | (var12[6] & 255L) << 8
                  | var12[7] & 255L;
               byte var45 = -1;

               while (true) {
                  long var13 = var40;
                  byte[] var15 = var5.doFinal(
                     new byte[]{
                        (byte)(var13 >>> 56),
                        (byte)(var13 >>> 48),
                        (byte)(var13 >>> 40),
                        (byte)(var13 >>> 32),
                        (byte)(var13 >>> 24),
                        (byte)(var13 >>> 16),
                        (byte)(var13 >>> 8),
                        (byte)var13
                     }
                  );
                  long var48 = (var15[0] & 255L) << 56
                     | (var15[1] & 255L) << 48
                     | (var15[2] & 255L) << 40
                     | (var15[3] & 255L) << 32
                     | (var15[4] & 255L) << 24
                     | (var15[5] & 255L) << 16
                     | (var15[6] & 255L) << 8
                     | var15[7] & 255L;
                  switch (var45) {
                     case 0:
                        var30[var10001] = var48;
                        if (var7 >= var10) {
                           lEezb = var11;
                           vIIBZ = new Integer[22];
                           Cipher var0;
                           var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                           var10002 = SecretKeyFactory.getInstance("DES");
                           var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                           for (int var1 = 1; var1 < 8; var1++) {
                              var10003[var1] = (byte)(var16 << var1 * 8 >>> 56);
                           }

                           var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                           long var2 = -984624533690350455L;
                           byte[] var4 = var0.doFinal(
                              new byte[]{
                                 (byte)(var2 >>> 56),
                                 (byte)(var2 >>> 48),
                                 (byte)(var2 >>> 40),
                                 (byte)(var2 >>> 32),
                                 (byte)(var2 >>> 24),
                                 (byte)(var2 >>> 16),
                                 (byte)(var2 >>> 8),
                                 (byte)var2
                              }
                           );
                           long var43 = (var4[0] & 255L) << 56
                              | (var4[1] & 255L) << 48
                              | (var4[2] & 255L) << 40
                              | (var4[3] & 255L) << 32
                              | (var4[4] & 255L) << 24
                              | (var4[5] & 255L) << 16
                              | (var4[6] & 255L) << 8
                              | var4[7] & 255L;
                           byte var36 = -1;
                           xTsAN = var43;
                           return;
                        }
                        break;
                     default:
                        var30[var10001] = var48;
                        if (var7 < var10) {
                           continue label42;
                        }

                        var9 = "·yÇýÖû(=ó[®ÇeÁ9\u008b";
                        var10 = "·yÇýÖû(=ó[®ÇeÁ9\u008b".length();
                        var7 = 0;
                  }

                  byte var35 = var7;
                  var7 += 8;
                  var12 = var9.substring(var35, var7).getBytes("ISO-8859-1");
                  var30 = var11;
                  var10001 = var8++;
                  var40 = (var12[0] & 255L) << 56
                     | (var12[1] & 255L) << 48
                     | (var12[2] & 255L) << 40
                     | (var12[3] & 255L) << 32
                     | (var12[4] & 255L) << 24
                     | (var12[5] & 255L) << 16
                     | (var12[6] & 255L) << 8
                     | var12[7] & 255L;
                  var45 = 0;
               }
            }
         }

         var21 = var22.charAt(var20);
      }
   }

   public boolean XX() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cO.ayAdd J
      // 03: ldc2_w 9587298230055
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/cN.XT ()I
      // 0b: istore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/cO.rJzYE Lsixtwo/rk;
      // 10: invokevirtual sixtwo/rk.dhj ()F
      // 13: fconst_0
      // 14: fcmpl
      // 15: iload 3
      // 16: ifeq 35
      // 19: ifne 47
      // 1c: goto 23
      // 1f: invokestatic sixtwo/cO.Yj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: aload 0
      // 24: getfield sixtwo/cO.JDVbW Lsixtwo/mT;
      // 27: aload 0
      // 28: getfield sixtwo/cO.inlwG J
      // 2b: invokevirtual sixtwo/mT.cpC (J)Z
      // 2e: goto 35
      // 31: invokestatic sixtwo/cO.Yj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 34: athrow
      // 35: iload 3
      // 36: ifeq 44
      // 39: ifeq 47
      // 3c: goto 43
      // 3f: invokestatic sixtwo/cO.Yj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: bipush 1
      // 44: goto 48
      // 47: bipush 0
      // 48: ireturn
   }

   public int[] XZ() {
      return this.JeBrr;
   }

   public void XW() {
      long var1 = ayAdd ^ 58227047202551L;

      rk var10000;
      rj var10001;
      label29: {
         try {
            this.rJzYE.dhq(Yq<"o">(23763, 1885492087448461179L ^ var1));
            var10000 = this.rJzYE;
            if (this.JDVbW.cpC(this.inlwG)) {
               var10001 = rj.AYqck;
               break label29;
            }
         } catch (MatchException var4) {
            throw Yj(var4);
         }

         var10001 = rj.XzDkv;
      }

      label22: {
         try {
            var10000.dhs(var10001);
            var10000 = this.rJzYE;
            if (this.JDVbW.cpC(this.inlwG)) {
               var6 = 0.0F;
               break label22;
            }
         } catch (MatchException var3) {
            throw Yj(var3);
         }

         var6 = 1.0F;
      }

      var10000.dhd(var6);
   }

   public long Yb() {
      return this.inlwG;
   }

   public rk Ye() {
      return this.rJzYE;
   }

   public cM Yd() {
      return this.elVoN;
   }

   public mT Ya() {
      return this.JDVbW;
   }

   public int[] XY() {
      return this.iiNmF;
   }

   public void XV(lC var1, float var2, float var3, float var4, float var5, float var6, boolean var7) {
      long var8 = ayAdd ^ 111187522660859L;
      lq var11 = lE.ePKsc.bYM(7.0F);
      int var10000 = cN.XS();
      lq var12 = lE.WTzbi.bYM(6.0F);
      lq var13 = lE.joxgd.bYM(6.0F);
      ii var14 = rD.dlM();
      float var15 = this.rJzYE.dhj();
      mG var16 = var14.bjb().coa(255.0F * var15);
      jH.bId(var1, var2 + var4 / 2.0F, var3 + 12.0F + var5 / 2.0F, 0.5F + 0.5F * var15 * var6);
      var1.ccU(var2, var3, var4, var5, var15, 0.0F);
      int var10 = var10000;
      float var17 = var2 + var5 / 2.0F - 9.0F;
      float var18 = var3 + var5 / 2.0F - 9.0F;

      label27: {
         try {
            var1.cdg(var17, var18, 18.0F, 18.0F, ld.all(4.0F), mG.cnP(0.0F, 0.0F, 0.0F).coa(51.0F * var15));
            if (var7) {
               var28 = this.elVoN.XC();
               break label27;
            }
         } catch (MatchException var27) {
            throw Yj(var27);
         }

         var28 = var14.bjc();
      }

      mG var19 = var28;
      float var20 = var2 + var5 / 2.0F - 5.0F;
      float var21 = var3 + var5 / 2.0F - 5.0F;
      var1.cdW(ob.cBv(Yn<"a">(22819, 4460209939298739833L ^ var8) + this.elVoN.XB()), var20, var21, 10.0F, 10.0F, var19.cob(0.8F));
      var1.ceA(var11, this.iiNmF, var2 + 27.0F, var3 + 7.0F, var16);
      long var10001 = 2443272484631043033L ^ var8;
      var1.ceA(var12, this.JeBrr, var2 + 27.0F, var3 + 15.0F, var16);
      DateTimeFormatter var22 = DateTimeFormatter.ofPattern(Yn<"a">(25730, var10001));
      String var23 = this.FXora.format(var22);
      float var24 = var2 + var4 - 7.0F;
      float var25 = var3 + 7.0F;

      try {
         var1.ceP(var13, var23, var24, var25, var16.cob(0.5F));
         jH.bIf();
         if (var10 != 0) {
            iS.bwK("sAFTE");
         }
      } catch (MatchException var26) {
         throw Yj(var26);
      }
   }

   public rk Yg() {
      return this.RzMsO;
   }

   public cO Yi(cM var1) {
      this.elVoN = var1;
      return this;
   }

   public cO Yh(LocalTime var1) {
      this.FXora = var1;
      return this;
   }

   public LocalTime Yc() {
      return this.FXora;
   }

   private static MatchException Yj(MatchException var0) {
      return var0;
   }

   private static CallSite Yq(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Yp".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cO" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public rk Yf() {
      return this.IosXQ;
   }

   private static String Yk(byte[] var0) {
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

   private static CallSite Yn(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Ym".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cO" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int Yo(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 13843;
      if (vIIBZ[var3] == null) {
         byte[] var4 = new byte[]{
            (byte)(var1 >>> 56),
            (byte)(var1 >>> 48),
            (byte)(var1 >>> 40),
            (byte)(var1 >>> 32),
            (byte)(var1 >>> 24),
            (byte)(var1 >>> 16),
            (byte)(var1 >>> 8),
            (byte)var1
         };
         long var5 = lEezb[var3];
         byte[] var7 = new byte[]{
            (byte)(var5 >>> 56),
            (byte)(var5 >>> 48),
            (byte)(var5 >>> 40),
            (byte)(var5 >>> 32),
            (byte)(var5 >>> 24),
            (byte)(var5 >>> 16),
            (byte)(var5 >>> 8),
            (byte)var5
         };
         Long var8 = Thread.currentThread().threadId();
         Object[] var9 = (Object[])KPEDz.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               KPEDz.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cO", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         vIIBZ[var3] = var15;
      }

      return vIIBZ[var3];
   }

   private static int Yp(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = Yo(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static Object Ym(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = Yl(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String Yl(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 24041;
      if (FnKDz[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])ccuta.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               ccuta.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/cO", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = fUKvm[var5].getBytes("ISO-8859-1");
         FnKDz[var5] = Yk(((Cipher)var4[0]).doFinal(var9));
      }

      return FnKDz[var5];
   }
}
