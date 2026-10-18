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

public class Q extends X<Q> {
   private lf oPMeK;
   private lf wiuXp;
   private String YXNaM = "";
   private lq GLZJQ = lE.joxgd.bYM(8.0F);
   private S rMeoS = S.DcYIP;
   private float zEeue = 8.0F;
   private static final long GfYMS = gb.aYR(-1448213306908423785L, 8756238232399005337L, MethodHandles.lookup().lookupClass()).a(27560254510464L);
   private static final String[] BaLsn;
   private static final String[] lhTYh;
   private static final Map IAsFe = new HashMap(13);

   public Q ip(String var1) {
      this.YXNaM = var1;
      return this;
   }

   public Q ir(S var1) {
      this.rMeoS = var1;
      return this;
   }

   static {
      long var0 = GfYMS ^ 62633126219472L;
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
      String var6 = "├Ź├î\u0011┬ĚtFF├┤\u0010\u0013┬▓\u008f\u0006|\u009c\r\u0094\t\u0097)├Ş┬▓\u0000A\u0092L/├Ő┬╗\u0095\"├┐┬ą\u009eXh├â├é┬ź\u0083(├ő┬«\u0098\u009a\u0012├ľ├Žm\u0015├ĺ├Łx├ü├┤├Ç\u0097oc9\u000e\u0011\u001d┬┤-├Ł\u0000>\\\u0099├Ě┬Č\u009cW├Ę├┐t├Á\u0089┬ż├Ź";
      int var8 = "├Ź├î\u0011┬ĚtFF├┤\u0010\u0013┬▓\u008f\u0006|\u009c\r\u0094\t\u0097)├Ş┬▓\u0000A\u0092L/├Ő┬╗\u0095\"├┐┬ą\u009eXh├â├é┬ź\u0083(├ő┬«\u0098\u009a\u0012├ľ├Žm\u0015├ĺ├Łx├ü├┤├Ç\u0097oc9\u000e\u0011\u001d┬┤-├Ł\u0000>\\\u0099├Ě┬Č\u009cW├Ę├┐t├Á\u0089┬ż├Ź"
         .length();
      char var5 = '(';
      int var4 = -1;

      while (true) {
         byte[] var10 = var2.doFinal(var6.substring(++var4, var4 + var5).getBytes("ISO-8859-1"));
         String var13 = iu(var10).intern();
         byte var10001 = -1;
         var9[var7++] = var13;
         if ((var4 += var5) >= var8) {
            BaLsn = var9;
            lhTYh = new String[2];
            return;
         }

         var5 = var6.charAt(var4);
      }
   }

   public Q in(lf var1) {
      this.oPMeK = var1;
      return this;
   }

   private static MatchException it(MatchException var0) {
      return var0;
   }

   public Q is(float var1) {
      this.zEeue = var1;
      return this;
   }

   private static CallSite ix(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("iw".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/Q" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public lf ih() {
      return this.oPMeK;
   }

   public Q io(lf var1) {
      this.wiuXp = var1;
      return this;
   }

   @Override
   public boolean dk(double param1, double param3, mA param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/Q.GfYMS J
      // 03: ldc2_w 118106175478504
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/P.hY ()[Ljava/lang/String;
      // 0c: astore 8
      // 0e: aload 0
      // 0f: dload 1
      // 10: dload 3
      // 11: invokevirtual sixtwo/Q.tg (DD)Z
      // 14: aload 8
      // 16: ifnonnull d9
      // 19: ifeq d1
      // 1c: goto 23
      // 1f: invokestatic sixtwo/Q.it (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: aload 0
      // 24: aload 8
      // 26: ifnonnull 76
      // 29: goto 30
      // 2c: invokestatic sixtwo/Q.it (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: invokevirtual sixtwo/Q.iW ()Z
      // 33: ifeq 75
      // 36: goto 3d
      // 39: invokestatic sixtwo/Q.it (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: aload 0
      // 3e: getfield sixtwo/Q.yPQoU I
      // 41: i2l
      // 42: aload 0
      // 43: getfield sixtwo/Q.TNQyk Lsixtwo/mT;
      // 46: invokestatic sixtwo/mZ.cst (JLsixtwo/mT;)J
      // 49: sipush 31966
      // 4c: ldc2_w 7098850334822499123
      // 4f: lload 6
      // 51: lxor
      // 52: invokedynamic k (IJ)Ljava/lang/String; bsm=sixtwo/Q.ix (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 57: dup_x2
      // 58: pop
      // 59: sipush 15188
      // 5c: ldc2_w 1682269208023385272
      // 5f: lload 6
      // 61: lxor
      // 62: invokedynamic k (IJ)Ljava/lang/String; bsm=sixtwo/Q.ix (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 67: invokedynamic makeConcatWithConstants (Ljava/lang/String;JLjava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001\u0001\u0001" ]
      // 6c: invokestatic sixtwo/cN.XI (Ljava/lang/String;)V
      // 6f: bipush 1
      // 70: ireturn
      // 71: invokestatic sixtwo/Q.it (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 74: athrow
      // 75: aload 0
      // 76: aload 8
      // 78: ifnonnull 9a
      // 7b: getfield sixtwo/Q.JAVXX Lsixtwo/V;
      // 7e: ifnull 99
      // 81: goto 88
      // 84: invokestatic sixtwo/Q.it (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 87: athrow
      // 88: aload 0
      // 89: getfield sixtwo/Q.JAVXX Lsixtwo/V;
      // 8c: aload 0
      // 8d: invokeinterface sixtwo/V.run (Lsixtwo/X;)V 2
      // 92: goto 99
      // 95: invokestatic sixtwo/Q.it (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 98: athrow
      // 99: aload 0
      // 9a: getfield sixtwo/Q.jsFhG Z
      // 9d: aload 8
      // 9f: ifnonnull d0
      // a2: ifeq cf
      // a5: goto ac
      // a8: invokestatic sixtwo/Q.it (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ab: athrow
      // ac: aload 0
      // ad: aload 0
      // ae: getfield sixtwo/Q.aoGjU Z
      // b1: aload 8
      // b3: ifnonnull c8
      // b6: goto bd
      // b9: invokestatic sixtwo/Q.it (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // bc: athrow
      // bd: ifne cb
      // c0: goto c7
      // c3: invokestatic sixtwo/Q.it (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c6: athrow
      // c7: bipush 1
      // c8: goto cc
      // cb: bipush 0
      // cc: putfield sixtwo/Q.aoGjU Z
      // cf: bipush 1
      // d0: ireturn
      // d1: aload 0
      // d2: dload 1
      // d3: dload 3
      // d4: aload 5
      // d6: invokespecial sixtwo/X.dk (DDLsixtwo/mA;)Z
      // d9: ireturn
   }

   private static Object iw(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = iv(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   @Override
   protected void bV(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/Q.GfYMS J
      // 003: ldc2_w 60470791458348
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/P.hY ()[Ljava/lang/String;
      // 00b: aload 0
      // 00c: aload 1
      // 00d: invokespecial sixtwo/X.bV (Lsixtwo/lC;)V
      // 010: astore 4
      // 012: aload 0
      // 013: aload 4
      // 015: ifnonnull 05d
      // 018: getfield sixtwo/Q.aoGjU Z
      // 01b: ifeq 055
      // 01e: goto 025
      // 021: invokestatic sixtwo/Q.it (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 024: athrow
      // 025: aload 0
      // 026: aload 4
      // 028: ifnonnull 04b
      // 02b: goto 032
      // 02e: invokestatic sixtwo/Q.it (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 031: athrow
      // 032: getfield sixtwo/Q.oPMeK Lsixtwo/lf;
      // 035: ifnonnull 04a
      // 038: goto 03f
      // 03b: invokestatic sixtwo/Q.it (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03e: athrow
      // 03f: aload 0
      // 040: getfield sixtwo/Q.wiuXp Lsixtwo/lf;
      // 043: goto 04e
      // 046: invokestatic sixtwo/Q.it (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 049: athrow
      // 04a: aload 0
      // 04b: getfield sixtwo/Q.oPMeK Lsixtwo/lf;
      // 04e: astore 5
      // 050: aload 4
      // 052: ifnull 062
      // 055: aload 0
      // 056: goto 05d
      // 059: invokestatic sixtwo/Q.it (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05c: athrow
      // 05d: getfield sixtwo/Q.wiuXp Lsixtwo/lf;
      // 060: astore 5
      // 062: aload 0
      // 063: getfield sixtwo/Q.PDdiO Lsixtwo/ri;
      // 066: invokevirtual sixtwo/ri.dfU ()Lsixtwo/mG;
      // 069: aload 0
      // 06a: getfield sixtwo/Q.UtcTb F
      // 06d: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 070: astore 6
      // 072: aload 4
      // 074: ifnonnull 0c5
      // 077: aload 0
      // 078: getfield sixtwo/Q.YXNaM Ljava/lang/String;
      // 07b: ifnull 0a2
      // 07e: goto 085
      // 081: invokestatic sixtwo/Q.it (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 084: athrow
      // 085: aload 0
      // 086: aload 4
      // 088: ifnonnull 0c7
      // 08b: goto 092
      // 08e: invokestatic sixtwo/Q.it (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 091: athrow
      // 092: getfield sixtwo/Q.YXNaM Ljava/lang/String;
      // 095: invokevirtual java/lang/String.isBlank ()Z
      // 098: ifeq 0c6
      // 09b: goto 0a2
      // 09e: invokestatic sixtwo/Q.it (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a1: athrow
      // 0a2: aload 1
      // 0a3: aload 5
      // 0a5: aload 0
      // 0a6: getfield sixtwo/Q.MCnYt F
      // 0a9: aload 0
      // 0aa: getfield sixtwo/Q.pNyTQ F
      // 0ad: aload 0
      // 0ae: getfield sixtwo/Q.BcpIo F
      // 0b1: aload 0
      // 0b2: getfield sixtwo/Q.WjISQ F
      // 0b5: aload 0
      // 0b6: getfield sixtwo/Q.zEeue F
      // 0b9: aload 6
      // 0bb: invokevirtual sixtwo/lC.ceo (Lsixtwo/lf;FFFFFLsixtwo/mG;)V
      // 0be: goto 0c5
      // 0c1: invokestatic sixtwo/Q.it (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c4: athrow
      // 0c5: return
      // 0c6: aload 0
      // 0c7: getfield sixtwo/Q.PDdiO Lsixtwo/ri;
      // 0ca: invokevirtual sixtwo/ri.dfU ()Lsixtwo/mG;
      // 0cd: aload 0
      // 0ce: getfield sixtwo/Q.UtcTb F
      // 0d1: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 0d4: astore 7
      // 0d6: aload 0
      // 0d7: getfield sixtwo/Q.GLZJQ Lsixtwo/lq;
      // 0da: invokevirtual sixtwo/lq.cat ()F
      // 0dd: fstore 8
      // 0df: aload 0
      // 0e0: aload 4
      // 0e2: ifnonnull 16d
      // 0e5: getfield sixtwo/Q.rMeoS Lsixtwo/S;
      // 0e8: getstatic sixtwo/S.DcYIP Lsixtwo/S;
      // 0eb: if_acmpne 165
      // 0ee: goto 0f5
      // 0f1: invokestatic sixtwo/Q.it (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f4: athrow
      // 0f5: aload 0
      // 0f6: getfield sixtwo/Q.MCnYt F
      // 0f9: ldc 9.0
      // 0fb: fadd
      // 0fc: fstore 9
      // 0fe: aload 0
      // 0ff: getfield sixtwo/Q.pNyTQ F
      // 102: fload 8
      // 104: aload 0
      // 105: getfield sixtwo/Q.WjISQ F
      // 108: invokestatic sixtwo/jf.bAH (FF)F
      // 10b: fadd
      // 10c: fstore 10
      // 10e: aload 1
      // 10f: aload 0
      // 110: getfield sixtwo/Q.GLZJQ Lsixtwo/lq;
      // 113: aload 0
      // 114: getfield sixtwo/Q.YXNaM Ljava/lang/String;
      // 117: fload 9
      // 119: fload 10
      // 11b: aload 7
      // 11d: ldc 0.8
      // 11f: ldc 0.99
      // 121: aload 0
      // 122: getfield sixtwo/Q.BcpIo F
      // 125: ldc 24.0
      // 127: fsub
      // 128: invokevirtual sixtwo/lC.ceH (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;FFF)V
      // 12b: aload 0
      // 12c: getfield sixtwo/Q.MCnYt F
      // 12f: aload 0
      // 130: getfield sixtwo/Q.BcpIo F
      // 133: fadd
      // 134: aload 0
      // 135: getfield sixtwo/Q.zEeue F
      // 138: fsub
      // 139: ldc 9.0
      // 13b: fsub
      // 13c: fstore 11
      // 13e: aload 0
      // 13f: getfield sixtwo/Q.pNyTQ F
      // 142: aload 0
      // 143: getfield sixtwo/Q.zEeue F
      // 146: aload 0
      // 147: getfield sixtwo/Q.WjISQ F
      // 14a: invokestatic sixtwo/jf.bAH (FF)F
      // 14d: fadd
      // 14e: fstore 12
      // 150: aload 1
      // 151: aload 5
      // 153: fload 11
      // 155: fload 12
      // 157: aload 0
      // 158: getfield sixtwo/Q.zEeue F
      // 15b: aload 6
      // 15d: invokevirtual sixtwo/lC.cem (Lsixtwo/lf;FFFLsixtwo/mG;)V
      // 160: aload 4
      // 162: ifnull 1d0
      // 165: aload 0
      // 166: goto 16d
      // 169: invokestatic sixtwo/Q.it (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 16c: athrow
      // 16d: getfield sixtwo/Q.MCnYt F
      // 170: ldc 9.0
      // 172: fadd
      // 173: fstore 9
      // 175: aload 0
      // 176: getfield sixtwo/Q.pNyTQ F
      // 179: aload 0
      // 17a: getfield sixtwo/Q.zEeue F
      // 17d: aload 0
      // 17e: getfield sixtwo/Q.WjISQ F
      // 181: invokestatic sixtwo/jf.bAH (FF)F
      // 184: fadd
      // 185: fstore 10
      // 187: aload 1
      // 188: aload 5
      // 18a: fload 9
      // 18c: fload 10
      // 18e: aload 0
      // 18f: getfield sixtwo/Q.zEeue F
      // 192: aload 6
      // 194: invokevirtual sixtwo/lC.cem (Lsixtwo/lf;FFFLsixtwo/mG;)V
      // 197: fload 9
      // 199: aload 0
      // 19a: getfield sixtwo/Q.zEeue F
      // 19d: fadd
      // 19e: ldc 5.0
      // 1a0: fadd
      // 1a1: fstore 11
      // 1a3: aload 0
      // 1a4: getfield sixtwo/Q.pNyTQ F
      // 1a7: fload 8
      // 1a9: aload 0
      // 1aa: getfield sixtwo/Q.WjISQ F
      // 1ad: invokestatic sixtwo/jf.bAH (FF)F
      // 1b0: fadd
      // 1b1: fstore 12
      // 1b3: aload 1
      // 1b4: aload 0
      // 1b5: getfield sixtwo/Q.GLZJQ Lsixtwo/lq;
      // 1b8: aload 0
      // 1b9: getfield sixtwo/Q.YXNaM Ljava/lang/String;
      // 1bc: fload 11
      // 1be: fload 12
      // 1c0: aload 7
      // 1c2: ldc 0.8
      // 1c4: ldc 0.99
      // 1c6: aload 0
      // 1c7: getfield sixtwo/Q.BcpIo F
      // 1ca: ldc 24.0
      // 1cc: fsub
      // 1cd: invokevirtual sixtwo/lC.ceH (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;FFF)V
      // 1d0: return
   }

   private static String iv(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 6421;
      if (lhTYh[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])IAsFe.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               IAsFe.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/Q", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = BaLsn[var5].getBytes("ISO-8859-1");
         lhTYh[var5] = iu(((Cipher)var4[0]).doFinal(var9));
      }

      return lhTYh[var5];
   }

   public float im() {
      return this.zEeue;
   }

   public lq ik() {
      return this.GLZJQ;
   }

   public String ij() {
      return this.YXNaM;
   }

   public Q iq(lq var1) {
      this.GLZJQ = var1;
      return this;
   }

   private static String iu(byte[] var0) {
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

   public S il() {
      return this.rMeoS;
   }

   public lf ii() {
      return this.wiuXp;
   }
}
