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

public class Z extends az {
   private lq fljZp;
   private float IkNZT;
   private int NndmE;
   private rj WsaNZ;
   private String sOpHR;
   private boolean PbmID;
   private mG abQsz;
   private float fOnos;
   private final String[] uVTfv;
   private final String[] DgqEL;
   private rk[] OEheO;
   private static int[] JaaVs;
   private static final long XeosK = gb.aYR(4907853140165818940L, -2309557172119715206L, MethodHandles.lookup().lookupClass()).a(260885394833235L);
   private static final long[] PfyPW;
   private static final Integer[] PUEHi;
   private static final Map uXCQW = new HashMap(13);

   public Z(lq var1, float var2, int var3, rj var4, String var5) {
      this(var1, var2, var3, var4);
      this.kP(var5);
   }

   public Z(lq var1, float var2, int var3, rj var4) {
      this();
      this.kJ(var1);
      this.kK(var2);
      this.kL(var3);
      this.kM(var4);
   }

   public Z() {
      long var1 = XeosK ^ 72524431576580L;
      super();
      this.fljZp = lE.joxgd.bYM(7.0F);
      this.IkNZT = 3.0F;
      this.NndmE = kY<"p">(28464, 1543576727768361119L ^ var1);
      this.WsaNZ = rj.UPXqT;
      this.abQsz = mG.hoGuU;
      this.uVTfv = new String[]{"", ""};
      this.DgqEL = new String[]{"", ""};
      this.kI();
   }

   static {
      int[] var10000 = new int[1];
      kT(var10000);
      long var0 = XeosK ^ 90291649018548L;
      Cipher var2;
      Cipher var13 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var13.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[3];
      int var5 = 0;
      String var6 = "ªo©\u008d!Ó>ëÇøßÏD\rÊ/¤òTp½å¾ý";
      int var7 = "ªo©\u008d!Ó>ëÇøßÏD\rÊ/¤òTp½å¾ý".length();
      byte var4 = 0;

      do {
         int var10001 = var4;
         var4 += 8;
         byte[] var9 = var6.substring(var10001, var4).getBytes("ISO-8859-1");
         var10001 = var5++;
         long var10 = (var9[0] & 255L) << 56
            | (var9[1] & 255L) << 48
            | (var9[2] & 255L) << 40
            | (var9[3] & 255L) << 32
            | (var9[4] & 255L) << 24
            | (var9[5] & 255L) << 16
            | (var9[6] & 255L) << 8
            | var9[7] & 255L;
         byte[] var12 = var2.doFinal(
            new byte[]{
               (byte)(var10 >>> 56),
               (byte)(var10 >>> 48),
               (byte)(var10 >>> 40),
               (byte)(var10 >>> 32),
               (byte)(var10 >>> 24),
               (byte)(var10 >>> 16),
               (byte)(var10 >>> 8),
               (byte)var10
            }
         );
         long var10004 = (var12[0] & 255L) << 56
            | (var12[1] & 255L) << 48
            | (var12[2] & 255L) << 40
            | (var12[3] & 255L) << 32
            | (var12[4] & 255L) << 24
            | (var12[5] & 255L) << 16
            | (var12[6] & 255L) << 8
            | var12[7] & 255L;
         byte var15 = -1;
         var8[var10001] = var10004;
      } while (var4 < var7);

      PfyPW = var8;
      PUEHi = new Integer[3];
   }

   @Override
   public void bV(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/Z.XeosK J
      // 003: ldc2_w 113268450724180
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/Z.kU ()[I
      // 00b: aload 0
      // 00c: getfield sixtwo/Z.OEheO [Lsixtwo/rk;
      // 00f: astore 5
      // 011: aload 5
      // 013: arraylength
      // 014: istore 6
      // 016: astore 4
      // 018: bipush 0
      // 019: istore 7
      // 01b: iload 7
      // 01d: iload 6
      // 01f: if_icmpge 049
      // 022: aload 5
      // 024: iload 7
      // 026: aaload
      // 027: astore 8
      // 029: aload 8
      // 02b: fconst_1
      // 02c: invokevirtual sixtwo/rk.dhd (F)F
      // 02f: pop
      // 030: iinc 7 1
      // 033: aload 4
      // 035: ifnull 15e
      // 038: aload 4
      // 03a: ifnonnull 01b
      // 03d: goto 044
      // 040: invokestatic sixtwo/Z.kV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 043: athrow
      // 044: ldc "CJ93mc"
      // 046: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 049: aload 1
      // 04a: aload 0
      // 04b: getfield sixtwo/Z.fljZp Lsixtwo/lq;
      // 04e: aload 0
      // 04f: getfield sixtwo/Z.DgqEL [Ljava/lang/String;
      // 052: bipush 0
      // 053: aaload
      // 054: aload 0
      // 055: getfield sixtwo/Z.MCnYt F
      // 058: aload 0
      // 059: getfield sixtwo/Z.pNyTQ F
      // 05c: aload 0
      // 05d: getfield sixtwo/Z.IkNZT F
      // 060: aload 0
      // 061: getfield sixtwo/Z.OEheO [Lsixtwo/rk;
      // 064: bipush 0
      // 065: aaload
      // 066: invokevirtual sixtwo/rk.dhj ()F
      // 069: fmul
      // 06a: fadd
      // 06b: aload 0
      // 06c: getfield sixtwo/Z.abQsz Lsixtwo/mG;
      // 06f: aload 0
      // 070: getfield sixtwo/Z.abQsz Lsixtwo/mG;
      // 073: invokevirtual sixtwo/mG.cou ()F
      // 076: fconst_1
      // 077: aload 0
      // 078: getfield sixtwo/Z.OEheO [Lsixtwo/rk;
      // 07b: bipush 0
      // 07c: aaload
      // 07d: invokevirtual sixtwo/rk.dhj ()F
      // 080: fsub
      // 081: fmul
      // 082: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 085: invokevirtual sixtwo/lC.cez (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 088: aload 1
      // 089: aload 0
      // 08a: getfield sixtwo/Z.fljZp Lsixtwo/lq;
      // 08d: aload 0
      // 08e: getfield sixtwo/Z.uVTfv [Ljava/lang/String;
      // 091: bipush 0
      // 092: aaload
      // 093: aload 0
      // 094: getfield sixtwo/Z.MCnYt F
      // 097: aload 0
      // 098: getfield sixtwo/Z.pNyTQ F
      // 09b: aload 0
      // 09c: getfield sixtwo/Z.IkNZT F
      // 09f: fsub
      // 0a0: aload 0
      // 0a1: getfield sixtwo/Z.IkNZT F
      // 0a4: aload 0
      // 0a5: getfield sixtwo/Z.OEheO [Lsixtwo/rk;
      // 0a8: bipush 0
      // 0a9: aaload
      // 0aa: invokevirtual sixtwo/rk.dhj ()F
      // 0ad: fmul
      // 0ae: fadd
      // 0af: aload 0
      // 0b0: getfield sixtwo/Z.abQsz Lsixtwo/mG;
      // 0b3: aload 0
      // 0b4: getfield sixtwo/Z.abQsz Lsixtwo/mG;
      // 0b7: invokevirtual sixtwo/mG.cou ()F
      // 0ba: aload 0
      // 0bb: getfield sixtwo/Z.OEheO [Lsixtwo/rk;
      // 0be: bipush 0
      // 0bf: aaload
      // 0c0: invokevirtual sixtwo/rk.dhj ()F
      // 0c3: fmul
      // 0c4: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 0c7: invokevirtual sixtwo/lC.cez (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 0ca: aload 1
      // 0cb: aload 0
      // 0cc: getfield sixtwo/Z.fljZp Lsixtwo/lq;
      // 0cf: aload 0
      // 0d0: getfield sixtwo/Z.DgqEL [Ljava/lang/String;
      // 0d3: bipush 1
      // 0d4: aaload
      // 0d5: aload 0
      // 0d6: getfield sixtwo/Z.MCnYt F
      // 0d9: aload 0
      // 0da: getfield sixtwo/Z.fOnos F
      // 0dd: fadd
      // 0de: aload 0
      // 0df: getfield sixtwo/Z.pNyTQ F
      // 0e2: aload 0
      // 0e3: getfield sixtwo/Z.IkNZT F
      // 0e6: aload 0
      // 0e7: getfield sixtwo/Z.OEheO [Lsixtwo/rk;
      // 0ea: bipush 1
      // 0eb: aaload
      // 0ec: invokevirtual sixtwo/rk.dhj ()F
      // 0ef: fmul
      // 0f0: fadd
      // 0f1: aload 0
      // 0f2: getfield sixtwo/Z.abQsz Lsixtwo/mG;
      // 0f5: aload 0
      // 0f6: getfield sixtwo/Z.abQsz Lsixtwo/mG;
      // 0f9: invokevirtual sixtwo/mG.cou ()F
      // 0fc: fconst_1
      // 0fd: aload 0
      // 0fe: getfield sixtwo/Z.OEheO [Lsixtwo/rk;
      // 101: bipush 1
      // 102: aaload
      // 103: invokevirtual sixtwo/rk.dhj ()F
      // 106: fsub
      // 107: fmul
      // 108: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 10b: invokevirtual sixtwo/lC.cez (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 10e: aload 1
      // 10f: aload 0
      // 110: getfield sixtwo/Z.fljZp Lsixtwo/lq;
      // 113: aload 0
      // 114: getfield sixtwo/Z.uVTfv [Ljava/lang/String;
      // 117: bipush 1
      // 118: aaload
      // 119: aload 0
      // 11a: getfield sixtwo/Z.MCnYt F
      // 11d: aload 0
      // 11e: getfield sixtwo/Z.fljZp Lsixtwo/lq;
      // 121: aload 0
      // 122: getfield sixtwo/Z.uVTfv [Ljava/lang/String;
      // 125: bipush 0
      // 126: aaload
      // 127: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 12a: fadd
      // 12b: aload 0
      // 12c: getfield sixtwo/Z.pNyTQ F
      // 12f: aload 0
      // 130: getfield sixtwo/Z.IkNZT F
      // 133: fsub
      // 134: aload 0
      // 135: getfield sixtwo/Z.IkNZT F
      // 138: aload 0
      // 139: getfield sixtwo/Z.OEheO [Lsixtwo/rk;
      // 13c: bipush 1
      // 13d: aaload
      // 13e: invokevirtual sixtwo/rk.dhj ()F
      // 141: fmul
      // 142: fadd
      // 143: aload 0
      // 144: getfield sixtwo/Z.abQsz Lsixtwo/mG;
      // 147: aload 0
      // 148: getfield sixtwo/Z.abQsz Lsixtwo/mG;
      // 14b: invokevirtual sixtwo/mG.cou ()F
      // 14e: aload 0
      // 14f: getfield sixtwo/Z.OEheO [Lsixtwo/rk;
      // 152: bipush 1
      // 153: aaload
      // 154: invokevirtual sixtwo/rk.dhj ()F
      // 157: fmul
      // 158: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 15b: invokevirtual sixtwo/lC.cez (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 15e: aload 0
      // 15f: getfield sixtwo/Z.sOpHR Ljava/lang/String;
      // 162: aload 4
      // 164: ifnull 17c
      // 167: ifnull 1ba
      // 16a: goto 171
      // 16d: invokestatic sixtwo/Z.kV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 170: athrow
      // 171: aload 0
      // 172: getfield sixtwo/Z.sOpHR Ljava/lang/String;
      // 175: goto 17c
      // 178: invokestatic sixtwo/Z.kV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 17b: athrow
      // 17c: invokevirtual java/lang/String.isBlank ()Z
      // 17f: ifne 1ba
      // 182: aload 1
      // 183: aload 0
      // 184: getfield sixtwo/Z.fljZp Lsixtwo/lq;
      // 187: aload 0
      // 188: getfield sixtwo/Z.sOpHR Ljava/lang/String;
      // 18b: aload 0
      // 18c: getfield sixtwo/Z.MCnYt F
      // 18f: aload 0
      // 190: getfield sixtwo/Z.fljZp Lsixtwo/lq;
      // 193: aload 0
      // 194: getfield sixtwo/Z.uVTfv [Ljava/lang/String;
      // 197: bipush 0
      // 198: aaload
      // 199: aload 0
      // 19a: getfield sixtwo/Z.uVTfv [Ljava/lang/String;
      // 19d: bipush 1
      // 19e: aaload
      // 19f: invokedynamic makeConcatWithConstants (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001\u0001" ]
      // 1a4: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 1a7: fadd
      // 1a8: aload 0
      // 1a9: getfield sixtwo/Z.pNyTQ F
      // 1ac: aload 0
      // 1ad: getfield sixtwo/Z.abQsz Lsixtwo/mG;
      // 1b0: invokevirtual sixtwo/lC.cez (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 1b3: goto 1ba
      // 1b6: invokestatic sixtwo/Z.kV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b9: athrow
      // 1ba: return
   }

   private static CallSite kY(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("kX".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/Z" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private void kI() {
      long var1 = XeosK ^ 110831974100273L;
      int[] var10000 = kU();
      this.OEheO = new rk[2];
      int[] var3 = var10000;
      int var4 = 0;

      while (var4 < this.OEheO.length) {
         this.OEheO[var4] = new rk(this.NndmE).dhs(this.WsaNZ);
         var4++;
         if (var3 == null) {
            break;
         }
      }
   }

   private static MatchException kV(MatchException var0) {
      return var0;
   }

   public Z kQ(boolean var1) {
      this.PbmID = var1;
      return this;
   }

   public Z kR(mG var1) {
      this.abQsz = var1;
      return this;
   }

   public static void kT(int[] var0) {
      JaaVs = var0;
   }

   private static int kW(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 29377;
      if (PUEHi[var3] == null) {
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
         long var5 = PfyPW[var3];
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
         Object[] var9 = (Object[])uXCQW.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               uXCQW.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/Z", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         PUEHi[var3] = var15;
      }

      return PUEHi[var3];
   }

   public static int[] kU() {
      return JaaVs;
   }

   private static int kX(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = kW(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   @Override
   public float kN() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/Z.XeosK J
      // 03: ldc2_w 16310446870478
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/Z.kU ()[I
      // 0b: aload 0
      // 0c: getfield sixtwo/Z.uVTfv [Ljava/lang/String;
      // 0f: bipush 0
      // 10: aaload
      // 11: aload 0
      // 12: getfield sixtwo/Z.uVTfv [Ljava/lang/String;
      // 15: bipush 1
      // 16: aaload
      // 17: invokedynamic makeConcatWithConstants (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001\u0001" ]
      // 1c: astore 4
      // 1e: astore 3
      // 1f: aload 0
      // 20: getfield sixtwo/Z.DgqEL [Ljava/lang/String;
      // 23: bipush 0
      // 24: aaload
      // 25: aload 0
      // 26: getfield sixtwo/Z.DgqEL [Ljava/lang/String;
      // 29: bipush 1
      // 2a: aaload
      // 2b: invokedynamic makeConcatWithConstants (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001\u0001" ]
      // 30: astore 5
      // 32: aload 0
      // 33: getfield sixtwo/Z.sOpHR Ljava/lang/String;
      // 36: aload 3
      // 37: ifnull 5a
      // 3a: ifnull 75
      // 3d: goto 44
      // 40: invokestatic sixtwo/Z.kV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 43: athrow
      // 44: aload 0
      // 45: aload 3
      // 46: ifnull 68
      // 49: goto 50
      // 4c: invokestatic sixtwo/Z.kV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4f: athrow
      // 50: getfield sixtwo/Z.sOpHR Ljava/lang/String;
      // 53: goto 5a
      // 56: invokestatic sixtwo/Z.kV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 59: athrow
      // 5a: invokevirtual java/lang/String.isBlank ()Z
      // 5d: ifne 75
      // 60: aload 0
      // 61: goto 68
      // 64: invokestatic sixtwo/Z.kV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 67: athrow
      // 68: getfield sixtwo/Z.fljZp Lsixtwo/lq;
      // 6b: aload 0
      // 6c: getfield sixtwo/Z.sOpHR Ljava/lang/String;
      // 6f: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 72: goto 76
      // 75: fconst_0
      // 76: fstore 6
      // 78: aload 0
      // 79: getfield sixtwo/Z.fljZp Lsixtwo/lq;
      // 7c: aload 4
      // 7e: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 81: aload 0
      // 82: getfield sixtwo/Z.fljZp Lsixtwo/lq;
      // 85: aload 5
      // 87: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 8a: invokestatic java/lang/Math.max (FF)F
      // 8d: fload 6
      // 8f: fadd
      // 90: freturn
   }

   public void kO(int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/Z.XeosK J
      // 03: ldc2_w 92848019142337
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/Z.kU ()[I
      // 0b: iload 1
      // 0c: sipush 31236
      // 0f: ldc2_w 3937945871273772397
      // 12: lload 2
      // 13: lxor
      // 14: invokedynamic p (IJ)I bsm=sixtwo/Z.kY (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 19: idiv
      // 1a: invokestatic java/lang/String.valueOf (I)Ljava/lang/String;
      // 1d: astore 5
      // 1f: iload 1
      // 20: sipush 21081
      // 23: ldc2_w 8362989843618950449
      // 26: lload 2
      // 27: lxor
      // 28: invokedynamic p (IJ)I bsm=sixtwo/Z.kY (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2d: irem
      // 2e: invokestatic java/lang/String.valueOf (I)Ljava/lang/String;
      // 31: astore 6
      // 33: astore 4
      // 35: aload 6
      // 37: aload 0
      // 38: getfield sixtwo/Z.uVTfv [Ljava/lang/String;
      // 3b: bipush 1
      // 3c: aaload
      // 3d: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 40: aload 4
      // 42: ifnull 8f
      // 45: ifne 84
      // 48: goto 4f
      // 4b: invokestatic sixtwo/Z.kV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4e: athrow
      // 4f: aload 0
      // 50: aload 0
      // 51: getfield sixtwo/Z.fljZp Lsixtwo/lq;
      // 54: aload 0
      // 55: getfield sixtwo/Z.uVTfv [Ljava/lang/String;
      // 58: bipush 0
      // 59: aaload
      // 5a: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 5d: putfield sixtwo/Z.fOnos F
      // 60: aload 0
      // 61: getfield sixtwo/Z.DgqEL [Ljava/lang/String;
      // 64: bipush 1
      // 65: aload 0
      // 66: getfield sixtwo/Z.uVTfv [Ljava/lang/String;
      // 69: bipush 1
      // 6a: aaload
      // 6b: aastore
      // 6c: aload 0
      // 6d: getfield sixtwo/Z.uVTfv [Ljava/lang/String;
      // 70: bipush 1
      // 71: aload 6
      // 73: aastore
      // 74: aload 0
      // 75: getfield sixtwo/Z.OEheO [Lsixtwo/rk;
      // 78: bipush 1
      // 79: aaload
      // 7a: invokevirtual sixtwo/rk.dhg ()V
      // 7d: goto 84
      // 80: invokestatic sixtwo/Z.kV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 83: athrow
      // 84: aload 5
      // 86: aload 0
      // 87: getfield sixtwo/Z.uVTfv [Ljava/lang/String;
      // 8a: bipush 0
      // 8b: aaload
      // 8c: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 8f: ifne ed
      // 92: aload 0
      // 93: getfield sixtwo/Z.DgqEL [Ljava/lang/String;
      // 96: bipush 0
      // 97: aload 0
      // 98: getfield sixtwo/Z.uVTfv [Ljava/lang/String;
      // 9b: bipush 0
      // 9c: aaload
      // 9d: aastore
      // 9e: aload 0
      // 9f: getfield sixtwo/Z.uVTfv [Ljava/lang/String;
      // a2: bipush 0
      // a3: aload 0
      // a4: getfield sixtwo/Z.PbmID Z
      // a7: aload 4
      // a9: ifnull d9
      // ac: goto b3
      // af: invokestatic sixtwo/Z.kV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b2: athrow
      // b3: ifeq c6
      // b6: goto bd
      // b9: invokestatic sixtwo/Z.kV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // bc: athrow
      // bd: aload 5
      // bf: goto e3
      // c2: invokestatic sixtwo/Z.kV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c5: athrow
      // c6: aload 5
      // c8: aload 4
      // ca: ifnull de
      // cd: ldc "0"
      // cf: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // d2: goto d9
      // d5: invokestatic sixtwo/Z.kV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d8: athrow
      // d9: ifeq e1
      // dc: ldc ""
      // de: goto e3
      // e1: aload 5
      // e3: aastore
      // e4: aload 0
      // e5: getfield sixtwo/Z.OEheO [Lsixtwo/rk;
      // e8: bipush 0
      // e9: aaload
      // ea: invokevirtual sixtwo/rk.dhg ()V
      // ed: return
   }

   public Z kS(boolean var1, mG var2) {
      this.PbmID = var1;
      this.abQsz = var2;
      return this;
   }

   public Z kJ(lq var1) {
      this.fljZp = var1;
      return this;
   }

   public Z kL(int var1) {
      this.NndmE = var1;
      this.kI();
      return this;
   }

   public Z kM(rj var1) {
      this.WsaNZ = var1;
      this.kI();
      return this;
   }

   public Z kK(float var1) {
      this.IkNZT = var1;
      return this;
   }

   public Z kP(String var1) {
      this.sOpHR = var1;
      return this;
   }
}
