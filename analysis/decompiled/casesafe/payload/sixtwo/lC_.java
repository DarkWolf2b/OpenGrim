package sixtwo;

import com.mojang.blaze3d.textures.GpuTextureView;
import java.lang.invoke.MethodHandles;
import java.util.Iterator;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_10017;
import net.minecraft.class_1044;
import net.minecraft.class_1792;
import net.minecraft.class_1799;
import net.minecraft.class_241;
import net.minecraft.class_2561;
import net.minecraft.class_2960;
import net.minecraft.class_332;
import net.minecraft.class_591;
import net.minecraft.class_742;
import org.joml.Matrix3x2f;
import org.joml.Matrix3x2fStack;
import org.joml.Matrix4f;

public class lC implements lA {
   private static final float[] QrdDz;
   private static final float[] UboFN;
   private static final mG[] FdGpR;
   private final class_332 gkqYk;
   private final double nNqYD;
   private final double zfODx;
   private final float ULemC;
   private final lH jfMHu = new lH();
   private static String[] HTqbJ;
   private static final long XYAuN = gb.aYR(9174257704294028186L, -8694921797359866973L, MethodHandles.lookup().lookupClass()).a(130204071138436L);
   private static final String yqAUB;

   public void ceI(lq var1, int[] var2, float var3, float var4, mG var5, float var6, float var7, float var8) {
      ln.bZK(var1.cav(), var2, var1.caw(), var5, this.cfd(), var3, var4, 0.0F, true, var6, var7, var8);
   }

   public double cff() {
      return this.nNqYD;
   }

   private lC(class_332 var1, double var2, double var4, float var6) {
      this.gkqYk = var1;
      this.nNqYD = var2;
      this.zfODx = var4;
      this.ULemC = var6;
   }

   static {
      long var14 = XYAuN ^ 72447704044021L;
      if (cfk() != null) {
         cfj(new String[2]);
      }

      Cipher var11;
      Cipher var10000 = var11 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var14 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var12 = 1; var12 < 8; var12++) {
         var10003[var12] = (byte)(var14 << var12 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var13 = var11.doFinal("k├╣VC`\u0098\u0002>".getBytes("ISO-8859-1"));
      String var24 = cfm(var13).intern();
      int var10001 = -1;
      yqAUB = var24;
      Cipher var1;
      var10000 = var1 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var14 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var2 = 1; var2 < 8; var2++) {
         var10003[var2] = (byte)(var14 << var2 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var0 = new long[4];
      int var4 = 0;
      String var5 = "0┬«\u0015\u001dK┬╗\u0082o├¬y`┬Ę\u0089\u008b├Ż├┤";
      int var6 = "0┬«\u0015\u001dK┬╗\u0082o├¬y`┬Ę\u0089\u008b├Ż├┤".length();
      byte var3 = 0;

      label34:
      while (true) {
         var10001 = var3;
         var3 += 8;
         byte[] var7 = var5.substring(var10001, var3).getBytes("ISO-8859-1");
         long[] var18 = var0;
         var10001 = var4++;
         long var26 = (var7[0] & 255L) << 56
            | (var7[1] & 255L) << 48
            | (var7[2] & 255L) << 40
            | (var7[3] & 255L) << 32
            | (var7[4] & 255L) << 24
            | (var7[5] & 255L) << 16
            | (var7[6] & 255L) << 8
            | var7[7] & 255L;
         byte var29 = -1;

         while (true) {
            long var8 = var26;
            byte[] var10 = var1.doFinal(
               new byte[]{
                  (byte)(var8 >>> 56),
                  (byte)(var8 >>> 48),
                  (byte)(var8 >>> 40),
                  (byte)(var8 >>> 32),
                  (byte)(var8 >>> 24),
                  (byte)(var8 >>> 16),
                  (byte)(var8 >>> 8),
                  (byte)var8
               }
            );
            long var31 = (var10[0] & 255L) << 56
               | (var10[1] & 255L) << 48
               | (var10[2] & 255L) << 40
               | (var10[3] & 255L) << 32
               | (var10[4] & 255L) << 24
               | (var10[5] & 255L) << 16
               | (var10[6] & 255L) << 8
               | var10[7] & 255L;
            switch (var29) {
               case 0:
                  var18[var10001] = var31;
                  if (var3 >= var6) {
                     float[] var19 = new float[(int)var0[2]];
                     var19[0] = 0.0F;
                     var19[1] = 0.16666667F;
                     var19[2] = 0.33333334F;
                     var19[3] = 0.5F;
                     var19[4] = 0.6666667F;
                     var19[5] = 0.8333333F;
                     var19[(int)var0[0]] = 1.0F;
                     QrdDz = var19;
                     UboFN = new float[]{0.0F, 1.0F};
                     mG[] var20 = new mG[(int)var0[3]];
                     var20[0] = mG.cnP(255.0F, 0.0F, 0.0F);
                     var20[1] = mG.cnP(255.0F, 255.0F, 0.0F);
                     var20[2] = mG.cnP(0.0F, 255.0F, 0.0F);
                     var20[3] = mG.cnP(0.0F, 255.0F, 255.0F);
                     var20[4] = mG.cnP(0.0F, 0.0F, 255.0F);
                     var20[5] = mG.cnP(255.0F, 0.0F, 255.0F);
                     var20[(int)var0[1]] = mG.cnP(255.0F, 0.0F, 0.0F);
                     FdGpR = var20;
                     return;
                  }
                  break;
               default:
                  var18[var10001] = var31;
                  if (var3 < var6) {
                     continue label34;
                  }

                  var5 = "├â├║┬│O\u0084D\u0087$\u000b┬Ě├î\u001e3\u0010\u0017\u0083";
                  var6 = "├â├║┬│O\u0084D\u0087$\u000b┬Ě├î\u001e3\u0010\u0017\u0083".length();
                  var3 = 0;
            }

            byte var23 = var3;
            var3 += 8;
            var7 = var5.substring(var23, var3).getBytes("ISO-8859-1");
            var18 = var0;
            var10001 = var4++;
            var26 = (var7[0] & 255L) << 56
               | (var7[1] & 255L) << 48
               | (var7[2] & 255L) << 40
               | (var7[3] & 255L) << 32
               | (var7[4] & 255L) << 24
               | (var7[5] & 255L) << 16
               | (var7[6] & 255L) << 8
               | var7[7] & 255L;
            var29 = 0;
         }
      }
   }

   public void cee(class_1044 var1, float var2, float var3, float var4, float var5, ld var6) {
      this.cef(var1, var2, var3, var4, var5, var6, mG.hoGuU);
   }

   public class_332 cfe() {
      return this.gkqYk;
   }

   public void cdt(class_241 var1, class_241 var2, class_241 var3, class_241 var4, float var5, mG var6) {
      dcFcr.bND(jQ.bLz(this.gkqYk.method_51448(), var1, var2, var3, var4).drs(var5).drr(var6).dru());
   }

   public double cfg() {
      return this.zfODx;
   }

   public void cen(lf var1, float var2, float var3, float var4, float var5, mG var6) {
      this.ceo(var1, var2, var3, var4, var4, var5, var6);
   }

   public static lC ccP(class_332 var0, double var1, double var3, float var5) {
      return new lC(var0, var1, var3, var5);
   }

   public void ccR() {
      this.jfMHu.cgp();
   }

   public kg ccT(kd var1, lc var2) {
      return new kg(this, var1, var2);
   }

   public static String[] cfk() {
      return HTqbJ;
   }

   public void cdb(float var1, float var2, float var3, ld var4, mG var5) {
      long var6 = XYAuN ^ 42957710971685L;
      this.cef(ob.cBv(yqAUB), var1, var2, var3, var3, var4, var5);
   }

   public void ccZ(class_742 var1, float var2, float var3, float var4, ld var5, mG var6) {
      this.cda(var1.method_52814().comp_1626().comp_3627(), var2, var3, var4, var5, var6);
   }

   public void cdm(float var1, float var2, float var3, float var4, float var5, ld var6, mG var7) {
      this.cdk(kd.sQVlR, var1, var2, var3, var4, var6, var5, var7);
   }

   public void cej(float var1, float var2, float var3, float var4, float var5, ld var6, float var7) {
      this.cek(kd.sQVlR, var1, var2, var3, var4, var5, var6, var7);
   }

   public void ceV() {
      this.gkqYk.method_51448().pushMatrix();
   }

   public void cfb(float var1, float var2, float var3) {
      this.gkqYk.method_51448().rotateAbout((float)Math.toRadians(var3), var1, var2);
   }

   public void ceW() {
      this.gkqYk.method_51448().popMatrix();
   }

   public float cfh() {
      return this.ULemC;
   }

   public void cdg(float var1, float var2, float var3, float var4, ld var5, mG var6) {
      this.ccS(kd.AhlXN, var1, var2, var3, var4).bOu(var5).bOv(var6).bOX();
   }

   public void ccW(float param1, float param2, float param3, float param4, float param5, float param6, ld param7, float param8) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lC.XYAuN J
      // 003: ldc2_w 50772623336378
      // 006: lxor
      // 007: lstore 9
      // 009: invokestatic sixtwo/lC.cfk ()[Ljava/lang/String;
      // 00c: invokestatic sixtwo/rD.dlM ()Lsixtwo/ii;
      // 00f: astore 12
      // 011: astore 11
      // 013: invokestatic sixtwo/fX.aYf ()Z
      // 016: aload 11
      // 018: ifnonnull 054
      // 01b: ifeq 051
      // 01e: goto 025
      // 021: invokestatic sixtwo/lC.cfl (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 024: athrow
      // 025: aload 0
      // 026: getstatic sixtwo/kd.sQVlR Lsixtwo/kd;
      // 029: fload 1
      // 02a: fload 2
      // 02b: fload 3
      // 02c: fload 4
      // 02e: invokevirtual sixtwo/lC.ccS (Lsixtwo/kd;FFFF)Lsixtwo/kg;
      // 031: aload 7
      // 033: invokevirtual sixtwo/kg.bOu (Lsixtwo/ld;)Lsixtwo/kg;
      // 036: fload 8
      // 038: invokevirtual sixtwo/kg.bOE (F)Lsixtwo/kg;
      // 03b: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 03e: fload 5
      // 040: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 043: invokevirtual sixtwo/kg.bOv (Lsixtwo/mG;)Lsixtwo/kg;
      // 046: invokevirtual sixtwo/kg.bPb ()Lsixtwo/kg;
      // 049: pop
      // 04a: goto 051
      // 04d: invokestatic sixtwo/lC.cfl (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 050: athrow
      // 051: invokestatic sixtwo/fX.aYe ()Z
      // 054: ifeq 0ee
      // 057: aload 12
      // 059: invokevirtual sixtwo/ii.bjn ()Lsixtwo/mG;
      // 05c: astore 13
      // 05e: aload 12
      // 060: invokevirtual sixtwo/ii.bjp ()Lsixtwo/mG;
      // 063: astore 14
      // 065: aload 12
      // 067: invokevirtual sixtwo/ii.bji ()F
      // 06a: fstore 15
      // 06c: aload 12
      // 06e: invokevirtual sixtwo/ii.bjj ()F
      // 071: fstore 16
      // 073: aload 12
      // 075: invokevirtual sixtwo/ii.bjk ()F
      // 078: fstore 17
      // 07a: aload 12
      // 07c: invokevirtual sixtwo/ii.bjl ()F
      // 07f: fstore 18
      // 081: aload 12
      // 083: invokevirtual sixtwo/ii.bjm ()F
      // 086: fstore 19
      // 088: aload 12
      // 08a: invokevirtual sixtwo/ii.bjo ()F
      // 08d: fconst_1
      // 08e: fload 6
      // 090: ldc 0.5
      // 092: fmul
      // 093: fsub
      // 094: fmul
      // 095: fstore 20
      // 097: aload 0
      // 098: getstatic sixtwo/kd.sQVlR Lsixtwo/kd;
      // 09b: fload 1
      // 09c: fload 2
      // 09d: fload 3
      // 09e: fload 4
      // 0a0: invokevirtual sixtwo/lC.ccS (Lsixtwo/kd;FFFF)Lsixtwo/kg;
      // 0a3: aload 7
      // 0a5: fload 20
      // 0a7: invokevirtual sixtwo/ld.inflate (F)Lsixtwo/ld;
      // 0aa: invokevirtual sixtwo/kg.bOu (Lsixtwo/ld;)Lsixtwo/kg;
      // 0ad: fload 8
      // 0af: invokevirtual sixtwo/kg.bOE (F)Lsixtwo/kg;
      // 0b2: fload 15
      // 0b4: invokevirtual sixtwo/kg.bOO (F)Lsixtwo/kg;
      // 0b7: fload 16
      // 0b9: invokevirtual sixtwo/kg.bOP (F)Lsixtwo/kg;
      // 0bc: fload 17
      // 0be: invokevirtual sixtwo/kg.bOQ (F)Lsixtwo/kg;
      // 0c1: fload 18
      // 0c3: invokevirtual sixtwo/kg.bOR (F)Lsixtwo/kg;
      // 0c6: fload 19
      // 0c8: invokevirtual sixtwo/kg.bON (F)Lsixtwo/kg;
      // 0cb: aload 13
      // 0cd: invokevirtual sixtwo/kg.bOW (Lsixtwo/mG;)Lsixtwo/kg;
      // 0d0: fload 20
      // 0d2: invokevirtual sixtwo/kg.bOU (F)Lsixtwo/kg;
      // 0d5: aload 14
      // 0d7: invokevirtual sixtwo/kg.bOV (Lsixtwo/mG;)Lsixtwo/kg;
      // 0da: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 0dd: fload 5
      // 0df: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 0e2: invokevirtual sixtwo/kg.bOv (Lsixtwo/mG;)Lsixtwo/kg;
      // 0e5: invokevirtual sixtwo/kg.bPc ()Lsixtwo/kg;
      // 0e8: pop
      // 0e9: aload 11
      // 0eb: ifnull 11d
      // 0ee: aload 12
      // 0f0: invokevirtual sixtwo/ii.bjd ()Lsixtwo/mG;
      // 0f3: invokestatic sixtwo/fX.aYh ()F
      // 0f6: fload 5
      // 0f8: fmul
      // 0f9: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 0fc: astore 13
      // 0fe: aload 0
      // 0ff: getstatic sixtwo/kd.sQVlR Lsixtwo/kd;
      // 102: fload 1
      // 103: fload 2
      // 104: fload 3
      // 105: fload 4
      // 107: invokevirtual sixtwo/lC.ccS (Lsixtwo/kd;FFFF)Lsixtwo/kg;
      // 10a: aload 7
      // 10c: invokevirtual sixtwo/kg.bOu (Lsixtwo/ld;)Lsixtwo/kg;
      // 10f: fload 8
      // 111: invokevirtual sixtwo/kg.bOE (F)Lsixtwo/kg;
      // 114: aload 13
      // 116: invokevirtual sixtwo/kg.bOv (Lsixtwo/mG;)Lsixtwo/kg;
      // 119: invokevirtual sixtwo/kg.bOX ()Lsixtwo/kg;
      // 11c: pop
      // 11d: return
   }

   public void ceP(lq var1, String var2, float var3, float var4, mG var5) {
      this.cez(var1, var2, var3 - var1.cav().bYC(var2, var1.caw()), var4, var5);
   }

   public void cez(lq var1, String var2, float var3, float var4, mG var5) {
      ln.bZG(var1.cav(), var2, var1.caw(), var5, this.cfd(), var3, var4, 0.0F);
   }

   public void cem(lf var1, float var2, float var3, float var4, mG var5) {
      this.ceo(var1, var2, var3, var4, var4, var4, var5);
   }

   public void cdw(float var1, float var2, float var3, float var4, float var5, float var6, mG var7, float var8) {
      this.cdz(var1, var2, var3, var3, var4, (float)Math.toRadians(var5), (float)Math.toRadians(var6), var8, var7);
   }

   public void ceA(lq var1, int[] var2, float var3, float var4, mG var5) {
      ln.bZJ(var1.cav(), var2, var1.caw(), var5, this.cfd(), var3, var4, 0.0F);
   }

   public void cdd(float var1, float var2, float var3, mG var4) {
      this.cdg(var1, var2, var3, var3, ld.all(var3 / 2.0F), var4);
   }

   public void cdj(lc var1, mG var2) {
      this.ccT(kd.AhlXN, var1).bOv(var2).bOX();
   }

   public void cdk(kd var1, float var2, float var3, float var4, float var5, ld var6, float var7, mG var8) {
      this.ccS(var1, var2, var3, var4, var5).bOu(var6).bOE(var7).bOv(var8).bOX();
   }

   public void ccX(float var1, float var2, float var3, float var4, float var5, ld var6, float var7) {
      ii var8 = rD.dlM();
      this.ccS(kd.sQVlR, var1, var2, var3, var4).bOu(var6).bOE(var7).bOv(mG.hoGuU.cob(var5)).bPb();
      mG var9 = var8.bjd().cob(var5 * fX.aYi());
      this.ccS(kd.sQVlR, var1, var2, var3, var4).bOu(var6).bOE(var7).bOv(var9).bOX();
   }

   public void cdP(float var1, float var2, float var3, float var4, ld var5, la var6, float var7) {
      this.ccS(kd.AhlXN, var1, var2, var3, var4).bOu(var5).bOw(var6).bOC(var7).bOX();
   }

   public void cde(float var1, float var2, float var3, la var4) {
      this.cdO(var1, var2, var3, var3, ld.all(var3 / 2.0F), var4);
   }

   public void ceH(lq var1, String var2, float var3, float var4, mG var5, float var6, float var7, float var8) {
      ln.bZH(var1.cav(), var2, var1.caw(), var5, this.cfd(), var3, var4, 0.0F, true, var6, var7, var8);
   }

   public kg ccS(kd var1, float var2, float var3, float var4, float var5) {
      return new kg(this, var1, var2, var3, var4, var5);
   }

   private static MatchException cfl(MatchException var0) {
      return var0;
   }

   public void cda(class_2960 var1, float var2, float var3, float var4, ld var5, mG var6) {
      long var7 = XYAuN ^ 6016198722418L;
      String[] var10000 = cfk();
      float var10 = 0.125F;
      String[] var9 = var10000;
      float var11 = 0.125F;
      float var12 = 0.25F;
      float var13 = 0.25F;
      class_1044 var14 = rD.dlmvG.method_1531().method_4619(var1);
      ntCFX.bMM(
         jO.bJI(this.gkqYk.method_51448(), var2, var3, var4, var4)
            .dqh(kd.AhlXN)
            .dqm(var14)
            .dqv(var10)
            .dqw(var11)
            .dqx(var12)
            .dqy(var13)
            .dqj(var5)
            .dqk(var6)
            .dqz()
      );
      var10 = 0.625F;
      var12 = 0.75F;

      try {
         ntCFX.bMM(
            jO.bJI(this.gkqYk.method_51448(), var2, var3, var4, var4)
               .dqh(kd.AhlXN)
               .dqm(var14)
               .dqv(var10)
               .dqw(var11)
               .dqx(var12)
               .dqy(var13)
               .dqj(var5)
               .dqk(var6)
               .dqz()
         );
         if (var9 != null) {
            iS.bwK("JUd8F");
         }
      } catch (MatchException var15) {
         throw cfl(var15);
      }
   }

   public void cef(class_1044 var1, float var2, float var3, float var4, float var5, ld var6, mG var7) {
      this.ccS(kd.AhlXN, var2, var3, var4, var5).bOx(var1).bOu(var6).bOv(var7).bOX();
   }

   public void cdO(float var1, float var2, float var3, float var4, ld var5, la var6) {
      this.cdS(kd.AhlXN, var1, var2, var3, var4, 7.0F, var5, var6);
   }

   public void cdf(lc var1, ld var2, mG var3) {
      this.ccT(kd.AhlXN, var1).bOu(var2).bOv(var3).bOX();
   }

   public void ceq(lf var1, lc var2, mG var3) {
      this.ceo(var1, var2.bXF(), var2.bXG(), var2.bXH(), var2.bXI(), var2.bXH(), var3);
   }

   public lC ccQ(lI var1) {
      this.jfMHu.cgm(var1);
      return this;
   }

   public void ccV(lc var1, float var2, float var3) {
      this.ccW(var1.bXF(), var1.bXG(), var1.bXH(), var1.bXI(), var2, var3, ld.all(7.0F), 7.0F);
   }

   public void cdl(kd var1, float var2, float var3, float var4, float var5, float var6, ld var7, float var8, mG var9) {
      this.ccS(var1, var2, var3, var4, var5).bOu(var7).bOE(var8).bOv(var9).bOA(var6).bOX();
   }

   public void cdD(float var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8, mG var9) {
      ekAdT.bNR(jS.bMc(this.gkqYk.method_51448(), var1, var2, var3, var4).drW(var5).drX(var6).drY(var7).drZ(var8).dsh(true).dse(var9).dso());
   }

   public static void cfj(String[] var0) {
      HTqbJ = var0;
   }

   public void cdB(float var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8, float var9, mG var10) {
      ekAdT.bNR(jS.bMc(this.gkqYk.method_51448(), var1, var2, var3, var4).drW(var5).drX(var6).drY(var7).drZ(var8).dsf(var9).dse(var10).dso());
   }

   public void cdN(float var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8, float var9, float var10) {
      this.cdL(var1, var2, var3, var4, var5, var6, (float)Math.toRadians(var7), (float)Math.toRadians(var8), var9, var10);
   }

   public void cdJ(float var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8, mG var9) {
      GpuTextureView var10 = kk.bPN().method_71639();
      ekAdT.bNR(
         jS.bMc(this.gkqYk.method_51448(), var1, var2, var3, var4)
            .drW(var5)
            .drX(var6)
            .drY(var7)
            .drZ(var8)
            .dsc(var10)
            .dsd(lt.caX())
            .dsg(true)
            .dsi(rD.dlmvG.method_22683().method_4489())
            .dsj(rD.dlmvG.method_22683().method_4506())
            .dse(var9)
            .dso()
      );
   }

   public void cdE(float var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8, mG var9) {
      this.cdD(var1, var2, var3, var4, var5, var6, (float)Math.toRadians(var7), (float)Math.toRadians(var8), var9);
   }

   public void cdI(class_1044 var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8, float var9, mG var10) {
      this.cdH(var1, var2, var3, var4, var5, var6, var7, (float)Math.toRadians(var8), (float)Math.toRadians(var9), var10);
   }

   public void ceg(kd var1, class_1044 var2, float var3, float var4, float var5, float var6, float var7, ld var8, mG var9) {
      this.ccS(var1, var3, var4, var5, var6).bOx(var2).bOu(var8).bOE(var7).bOv(var9).bOX();
   }

   public void cdr(float var1, float var2, float var3, float var4, float var5, ld var6, mG var7) {
      this.cdl(kd.AhlXN, var1, var2, var3, var4, var5, var6, 7.0F, var7);
   }

   public void cdA(float var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8, mG var9) {
      this.cdB(var1, var2, var3, var4, var5, var6, var7, var8, 0.75F, var9);
   }

   public void cdn(lc var1, float var2, ld var3, mG var4) {
      this.cdk(kd.sQVlR, var1.bXF(), var1.bXG(), var1.bXH(), var1.bXI(), var3, var2, var4);
   }

   public void cdz(float var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8, mG var9) {
      KFXjg.bNK(jR.bLM(this.gkqYk.method_51448(), var1, var2, var3, var4).drG(var5).drH(var6).drI(var7).drK(var8).drJ(var9).drL());
   }

   public void cdC(float var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8, mG var9) {
      this.cdA(var1, var2, var3, var4, var5, var6, (float)Math.toRadians(var7), (float)Math.toRadians(var8), var9);
   }

   public void cds(kd var1, float var2, float var3, float var4, float var5, float var6, ld var7, float var8, mG var9) {
      this.cdl(var1, var2, var3, var4, var5, var6, var7, var8, var9);
   }

   public void cdq(class_1044 var1, float var2, float var3, float var4, float var5, float var6, ld var7, mG var8) {
      this.ceg(kd.sQVlR, var1, var2, var3, var4, var5, var6, var7, var8);
   }

   public void cdH(class_1044 var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8, float var9, mG var10) {
      ekAdT.bNR(jS.bMc(this.gkqYk.method_51448(), var2, var3, var4, var5).drW(var6).drX(var7).drY(var8).drZ(var9).dsb(var1).dse(var10).dso());
   }

   public void cdv(float var1, float var2, float var3, float var4, float var5, float var6, mG var7) {
      this.cdx(var1, var2, var3, var4, (float)Math.toRadians(var5), (float)Math.toRadians(var6), var7);
   }

   public void cdx(float var1, float var2, float var3, float var4, float var5, float var6, mG var7) {
      this.cdz(var1, var2, var3, var3, var4, var5, var6, 0.75F, var7);
   }

   public void cdF(float var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8, la var9) {
      ekAdT.bNR(jS.bMc(this.gkqYk.method_51448(), var1, var2, var3, var4).drW(var5).drX(var6).drY(var7).drZ(var8).dsa(var9).dse(mG.hoGuU).dso());
   }

   public void cdo(float var1, float var2, float var3, float var4, float var5, ld var6, la var7) {
      this.cdS(kd.sQVlR, var1, var2, var3, var4, var5, var6, var7);
   }

   public void cdG(float var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8, la var9) {
      this.cdF(var1, var2, var3, var4, var5, var6, (float)Math.toRadians(var7), (float)Math.toRadians(var8), var9);
   }

   public void cdL(float param1, float param2, float param3, float param4, float param5, float param6, float param7, float param8, float param9, float param10) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lC.XYAuN J
      // 03: ldc2_w 43431893263884
      // 06: lxor
      // 07: lstore 11
      // 09: invokestatic sixtwo/lC.cfk ()[Ljava/lang/String;
      // 0c: invokestatic sixtwo/rD.dlM ()Lsixtwo/ii;
      // 0f: astore 14
      // 11: astore 13
      // 13: invokestatic sixtwo/fX.aYe ()Z
      // 16: aload 13
      // 18: ifnonnull 42
      // 1b: ifeq 3f
      // 1e: goto 25
      // 21: invokestatic sixtwo/lC.cfl (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: aload 0
      // 26: fload 1
      // 27: fload 2
      // 28: fload 3
      // 29: fload 4
      // 2b: fload 5
      // 2d: fload 6
      // 2f: fload 7
      // 31: fload 8
      // 33: fload 9
      // 35: fload 10
      // 37: invokevirtual sixtwo/lC.cdM (FFFFFFFFFF)V
      // 3a: return
      // 3b: invokestatic sixtwo/lC.cfl (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3e: athrow
      // 3f: invokestatic sixtwo/fX.aYf ()Z
      // 42: ifeq 65
      // 45: aload 0
      // 46: fload 1
      // 47: fload 2
      // 48: fload 3
      // 49: fload 4
      // 4b: fload 5
      // 4d: fload 6
      // 4f: fload 7
      // 51: fload 8
      // 53: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 56: fload 9
      // 58: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 5b: invokevirtual sixtwo/lC.cdJ (FFFFFFFFLsixtwo/mG;)V
      // 5e: goto 65
      // 61: invokestatic sixtwo/lC.cfl (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 64: athrow
      // 65: aload 14
      // 67: invokevirtual sixtwo/ii.bjd ()Lsixtwo/mG;
      // 6a: invokestatic sixtwo/fX.aYh ()F
      // 6d: fload 9
      // 6f: fmul
      // 70: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 73: astore 15
      // 75: aload 0
      // 76: fload 1
      // 77: fload 2
      // 78: fload 3
      // 79: fload 4
      // 7b: fload 5
      // 7d: fload 6
      // 7f: fload 7
      // 81: fload 8
      // 83: aload 15
      // 85: invokevirtual sixtwo/lC.cdA (FFFFFFFFLsixtwo/mG;)V
      // 88: return
   }

   public void cdM(float var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8, float var9, float var10) {
      long var11 = XYAuN ^ 59922652830815L;
      ii var14 = rD.dlM();
      float var15 = var14.bjo() * (1.0F - var10 * 0.5F);
      cfk();
      this.ccS(kd.IbNTv, var1, var2, var3, var4)
         .bOF(var5)
         .bOG(var6)
         .bOH(var7)
         .bOI(var8)
         .bOO(var14.bji())
         .bOP(var14.bjj())
         .bOQ(var14.bjk())
         .bOR(var14.bjl())
         .bON(var14.bjm())
         .bOW(var14.bjn())
         .bOU(var15)
         .bOV(var14.bjp())
         .bOv(mG.hoGuU.cob(var9))
         .bPc();

      try {
         if (iS.bwL() == null) {
            cfj(new String[3]);
         }
      } catch (MatchException var16) {
         throw cfl(var16);
      }
   }

   public void cdp(class_1044 var1, float var2, float var3, float var4, float var5, float var6, ld var7) {
      this.cdq(var1, var2, var3, var4, var5, var6, var7, mG.hoGuU);
   }

   public void cdu(class_241 var1, class_241 var2, class_241 var3, class_241 var4, float var5, float var6, mG var7) {
      dcFcr.bND(jQ.bLz(this.gkqYk.method_51448(), var1, var2, var3, var4).drs(var5).drt(var6).drr(var7).dru());
   }

   public void cdy(lc var1, float var2, float var3, float var4, mG var5) {
      this.cdz(var1.bXF(), var1.bXG(), var1.bXH(), var1.bXI(), var2, var3, var4, 0.75F, var5);
   }

   public void cdK(float var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8, mG var9) {
      this.cdJ(var1, var2, var3, var4, var5, var6, (float)Math.toRadians(var7), (float)Math.toRadians(var8), var9);
   }

   public void cdS(kd var1, float var2, float var3, float var4, float var5, float var6, ld var7, la var8) {
      this.ccS(var1, var2, var3, var4, var5).bOu(var7).bOE(var6).bOw(var8).bOX();
   }

   public void ceT(lq var1, String var2, float var3, float var4) {
      this.ceR(var1, var2, var3, var4, mG.hoGuU);
   }

   public void ceG(lq var1, String var2, float var3, float var4, mG var5) {
      this.ceD(var1, lm.bZy(var2, var5), var3, var4, var5);
   }

   public void ceQ(lq var1, int[] var2, float var3, float var4, mG var5) {
      this.ceA(var1, var2, var3 - var1.cav().bYD(var2, var1.caw()), var4, var5);
   }

   public void ceU(lq var1, int[] var2, float var3, float var4) {
      this.ceS(var1, var2, var3, var4, mG.hoGuU);
   }

   public void cel(lf var1, float var2, float var3, float var4) {
      this.ceo(var1, var2, var3, var4, var4, var4, mG.hoGuU);
   }

   public void ceZ(float var1) {
      this.gkqYk.method_51448().rotate(var1);
   }

   public void cfa(Matrix3x2f var1) {
      this.gkqYk.method_51448().mul(var1);
   }

   public void cdY(class_2960 var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8, float var9, mG var10) {
      this.cdX(rD.dlmvG.method_1531().method_4619(var1), var2, var3, var4, var5, var6, var7, var8, var9, var10);
   }

   public void cdV(class_1044 var1, float var2, float var3, float var4, float var5) {
      this.cdW(var1, var2, var3, var4, var5, mG.hoGuU);
   }

   public void cep(lf var1, lc var2) {
      this.ceo(var1, var2.bXF(), var2.bXG(), var2.bXH(), var2.bXI(), var2.bXH(), mG.hoGuU);
   }

   public void cdQ(float var1, float var2, float var3, float var4, ld var5) {
      ueLic.bNn(jO.bJI(this.gkqYk.method_51448(), var1, var2, var3, var4).dqh(kd.AhlXN).dqj(var5).dqo(0.75F).dql(la.bWH(FdGpR, QrdDz)).dqz());
   }

   public void cdU(class_1044 var1, lc var2, mG var3) {
      this.cdW(var1, var2.bXF(), var2.bXG(), var2.bXH(), var2.bXI(), var3);
   }

   public Matrix4f cfd() {
      return jI.bIl(this.gkqYk.method_51448());
   }

   public jq cec(class_591 var1, class_2960 var2, float var3, float var4, float var5, float var6) {
      return new jq(this.gkqYk.method_51448(), var1, var2, var3, var4, var5, var6);
   }

   public void cey(kJ var1, lq var2, int[] var3, float var4, float var5, mG var6) {
      this.ceu(var1, var2, var3, var4 - var2.cav().bYD(var3, var2.caw()), var5, var6);
   }

   public void ceD(lq var1, class_2561 var2, float var3, float var4, mG var5) {
      long var6 = XYAuN ^ 103201683890863L;
      String[] var10000 = cfk();
      float var9 = 0.0F;
      Iterator var10 = lm.bZw(var2, var5).iterator();
      String[] var8 = var10000;

      while (true) {
         if (var10.hasNext()) {
            lm$uy var11 = (lm$uy)var10.next();
            var9 += var1.cav().bYC(var11.text(), var1.caw());

            try {
               if (var8 != null) {
                  break;
               }

               if (var8 == null) {
                  continue;
               }
            } catch (MatchException var12) {
               throw cfl(var12);
            }
         }

         ln.bZN(var1.cav(), var2, var5, var1.caw(), this.cfd(), var3, var4, 0.0F, false, 0.0F, 1.0F, var9 * 2.0F, var3);
         break;
      }
   }

   public void cdX(class_1044 var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8, float var9, mG var10) {
      this.ccS(kd.AhlXN, var2, var3, var4, var5).bOx(var1).bOy(var6, var7, var8, var9).bOv(var10).bOX();
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   public void ceu(kJ var1, lq var2, int[] var3, float var4, float var5, mG var6) {
      long var7 = XYAuN ^ 21669509572413L;
      String[] var9 = cfk();

      label31: {
         label30: {
            int[] var10000;
            label29: {
               try {
                  var10000 = var3;
                  if (var9 != null) {
                     break label29;
                  }

                  if (var3 == null) {
                     break label30;
                  }
               } catch (MatchException var12) {
                  throw cfl(var12);
               }

               var10000 = var3;
            }

            try {
               if (var10000.length != 0) {
                  break label31;
               }
            } catch (MatchException var11) {
               throw cfl(var11);
            }
         }

         try {
            return;
         } catch (MatchException var10) {
            throw cfl(var10);
         }
      }

      var1.bUc(var2);
      var1.bUd(kD.bST(this.gkqYk.method_51448(), var4, var5, 0.0, var2.caw(), var3).dsX(var6).dsY());
   }

   public void cew(lq var1, int[] var2, float var3, float var4, mG var5) {
      this.ces(var1, var2, var3 - var1.cav().bYD(var2, var1.caw()), var4, var5);
   }

   public void ceC(lq var1, int[] var2, float var3, float var4, mG var5) {
      this.ceD(var1, lm.bZz(var2, var5), var3, var4, var5);
   }

   public void ceE(lq var1, int[] var2, float var3, float var4) {
      this.ceC(var1, var2, var3, var4, mG.hoGuU);
   }

   public void ceo(lf var1, float var2, float var3, float var4, float var5, float var6, mG var7) {
      lq var8 = lE.WxpHL.bYM(var6);
      float var9 = var8.caq(var1.bXR());
      float var10 = var8.cau(var1.bXR());
      float var11 = var2 + jf.bAH(var9, var4);
      float var12 = var3 + jf.bAH(var10, var5);
      lk.bZd(var8.cav(), var1.bXR(), var8.caw(), var7.coh(), this.cfd(), var11, var12, 0.0F);
   }

   public void ceL(lq var1, int[] var2, float var3, float var4, mG var5, float var6, float var7, float var8) {
      this.ceK(var1, lm.bZz(var2, var5), var3, var4, var5, var6, var7, var8);
   }

   public void ceN(lq var1, int[] var2, float var3, float var4, float var5, float var6, float var7) {
      this.ceL(var1, var2, var3, var4, mG.hoGuU, var5, var6, var7);
   }

   public void ceO(lq var1, class_2561 var2, float var3, float var4, float var5, float var6, float var7) {
      this.ceK(var1, var2, var3, var4, mG.hoGuU, var5, var6, var7);
   }

   public void cek(kd var1, float var2, float var3, float var4, float var5, float var6, ld var7, float var8) {
      this.ccS(var1, var2, var3, var4, var5).bOu(var7).bOE(var6).bOv(mG.hoGuU.cob(var8)).bPb();
   }

   public void cex(kJ var1, lq var2, String var3, float var4, float var5, mG var6) {
      this.cet(var1, var2, var3, var4 - var2.cav().bYC(var3, var2.caw()), var5, var6);
   }

   public void cdW(class_1044 var1, float var2, float var3, float var4, float var5, mG var6) {
      this.ccS(kd.AhlXN, var2, var3, var4, var5).bOx(var1).bOv(var6).bOX();
   }

   public void cei(kd var1, float var2, float var3, float var4, float var5, mG var6, float var7, float var8, ld var9) {
      this.ccS(var1, var2, var3, var4, var5).bOv(var6).bOE(var8).bOu(var9).bOK(var7).bOX();
   }

   public void ceK(lq var1, class_2561 var2, float var3, float var4, mG var5, float var6, float var7, float var8) {
      ln.bZN(var1.cav(), var2, var5, var1.caw(), this.cfd(), var3, var4, 0.0F, true, var6, var7, var8, var3);
   }

   public void cev(lq var1, String var2, float var3, float var4, mG var5) {
      this.cer(var1, var2, var3 - var1.cav().bYC(var2, var1.caw()), var4, var5);
   }

   public void ceB(lq var1, String var2, float var3, float var4) {
      this.ceG(var1, var2, var3, var4, mG.hoGuU);
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   public void cet(kJ var1, lq var2, String var3, float var4, float var5, mG var6) {
      long var7 = XYAuN ^ 111291229829833L;
      String[] var9 = cfk();

      label31: {
         label30: {
            String var10000;
            label29: {
               try {
                  var10000 = var3;
                  if (var9 != null) {
                     break label29;
                  }

                  if (var3 == null) {
                     break label30;
                  }
               } catch (MatchException var12) {
                  throw cfl(var12);
               }

               var10000 = var3;
            }

            try {
               if (!var10000.isBlank()) {
                  break label31;
               }
            } catch (MatchException var11) {
               throw cfl(var11);
            }
         }

         try {
            return;
         } catch (MatchException var10) {
            throw cfl(var10);
         }
      }

      this.ceu(var1, var2, mZ.csh(var3), var4, var5, var6);
   }

   public void ceF(lq var1, class_2561 var2, float var3, float var4) {
      this.ceD(var1, var2, var3, var4, mG.hoGuU);
   }

   public jt ced(class_10017 var1, float var2, float var3, float var4, float var5) {
      return new jt(this.gkqYk.method_51448(), var1, var2, var3, var4, var5);
   }

   public void cdT(class_1044 var1, lc var2) {
      this.cdW(var1, var2.bXF(), var2.bXG(), var2.bXH(), var2.bXI(), mG.hoGuU);
   }

   public jv cdZ(class_1792 var1, float var2, float var3, float var4) {
      return this.cea(var1.method_7854(), var2, var3, var4);
   }

   public void cdR(float var1, float var2, float var3, float var4, ld var5, mG var6) {
      ueLic.bNn(
         jO.bJI(this.gkqYk.method_51448(), var1, var2, var3, var4)
            .dqh(kd.AhlXN)
            .dqj(var5)
            .dqo(0.75F)
            .dql(la.bWH(new mG[]{var6.coa(0.0F), var6.coa(255.0F)}, UboFN))
            .dqz()
      );
   }

   public void ceJ(lq var1, String var2, float var3, float var4, mG var5, float var6, float var7, float var8) {
      this.ceK(var1, lm.bZy(var2, var5), var3, var4, var5, var6, var7, var8);
   }

   public void ceM(lq var1, String var2, float var3, float var4, float var5, float var6, float var7) {
      this.ceJ(var1, var2, var3, var4, mG.hoGuU, var5, var6, var7);
   }

   public void ceR(lq var1, String var2, float var3, float var4, mG var5) {
      this.ceG(var1, var2, var3 - var1.cav().bYC(var2, var1.caw()), var4, var5);
   }

   public void ceS(lq var1, int[] var2, float var3, float var4, mG var5) {
      this.ceC(var1, var2, var3 - var1.cav().bYD(var2, var1.caw()), var4, var5);
   }

   public lH cfi() {
      return this.jfMHu;
   }

   private static String cfm(byte[] var0) {
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

   public jv cea(class_1799 var1, float var2, float var3, float var4) {
      Matrix3x2f var5 = new Matrix3x2f(this.gkqYk.method_51448());
      var5.translate(var2, var3);
      var5.scale(var4, var4);
      return new jv(var5, rD.dlmvG.field_1724, rD.dlmvG.field_1687, var1, 0.0F, 0.0F, 16.0F);
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   public void cer(lq var1, String var2, float var3, float var4, mG var5) {
      long var6 = XYAuN ^ 36184240018591L;
      String[] var8 = cfk();

      label31: {
         label30: {
            String var10000;
            label29: {
               try {
                  var10000 = var2;
                  if (var8 != null) {
                     break label29;
                  }

                  if (var2 == null) {
                     break label30;
                  }
               } catch (MatchException var11) {
                  throw cfl(var11);
               }

               var10000 = var2;
            }

            try {
               if (!var10000.isBlank()) {
                  break label31;
               }
            } catch (MatchException var10) {
               throw cfl(var10);
            }
         }

         try {
            return;
         } catch (MatchException var9) {
            throw cfl(var9);
         }
      }

      this.ceu(lG.zXCXX, var1, mZ.csh(var2), var3, var4, var5);
   }

   public void ceX(float var1, float var2) {
      this.gkqYk.method_51448().translate(var1, var2);
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   public void ces(lq var1, int[] var2, float var3, float var4, mG var5) {
      long var6 = XYAuN ^ 37023791680398L;
      String[] var8 = cfk();

      label31: {
         label30: {
            int[] var10000;
            label29: {
               try {
                  var10000 = var2;
                  if (var8 != null) {
                     break label29;
                  }

                  if (var2 == null) {
                     break label30;
                  }
               } catch (MatchException var11) {
                  throw cfl(var11);
               }

               var10000 = var2;
            }

            try {
               if (var10000.length != 0) {
                  break label31;
               }
            } catch (MatchException var10) {
               throw cfl(var10);
            }
         }

         try {
            return;
         } catch (MatchException var9) {
            throw cfl(var9);
         }
      }

      lG.zXCXX.bUc(var1);
      lG.zXCXX.bUd(kD.bST(this.gkqYk.method_51448(), var3, var4, 0.0, var1.caw(), var2).dsX(var5).dsY());
   }

   public jw ceb(class_1799 var1, float var2, float var3, float var4) {
      Matrix3x2f var5 = new Matrix3x2f(this.gkqYk.method_51448());
      var5.translate(var2, var3);
      var5.scale(var4, var4);
      return new jw(var5, var1, 0.0F, 0.0F);
   }

   public void cdh(float var1, float var2, float var3, float var4, ld var5, mG var6, float var7) {
      this.ccS(kd.AhlXN, var1, var2, var3, var4).bOu(var5).bOv(var6).bOC(var7).bOX();
   }

   public void ceh(float var1, float var2, float var3, float var4, mG var5, float var6, float var7, ld var8) {
      this.cei(kd.sQVlR, var1, var2, var3, var4, var5, var6, var7, var8);
   }

   public void cdi(float var1, float var2, float var3, float var4, mG var5) {
      this.ccS(kd.AhlXN, var1, var2, var3, var4).bOv(var5).bOX();
   }

   public Matrix3x2fStack cfc() {
      return this.gkqYk.method_51448();
   }

   public void ccU(float var1, float var2, float var3, float var4, float var5, float var6) {
      this.ccW(var1, var2, var3, var4, var5, var6, ld.all(7.0F), 7.0F);
   }

   public void ccY(float var1, float var2, float var3, float var4, float var5, ld var6, mG var7) {
      XMUEi.bMX(jO.bJI(this.gkqYk.method_51448(), var1, var2, var3, var4).dqk(var7).dqo(var5).dqj(var6).dqz());
   }

   public void ceY(float var1, float var2) {
      this.gkqYk.method_51448().scale(var1, var2);
   }

   public void cdc(float var1, float var2, mG var3) {
      this.cdh(var1, var2, 2.0F, 2.0F, ld.all(1.0F), var3, 0.5F);
   }
}
