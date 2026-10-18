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

public class R extends X<sixtwo.R> {
   private ly kxeKc;
   private W fKzYw = W.igoQj;
   private static final long Ruogs = gb.aYR(-7613002557334313971L, 8057406749226264855L, MethodHandles.lookup().lookupClass()).a(52811650700071L);
   private static final String[] vMjtj;
   private static final String[] hVHQH;
   private static final Map rqkRQ = new HashMap(13);

   public R(od var1) {
      this.kxeKc = new ly(var1);
   }

   static {
      long var0 = Ruogs ^ 83898049219572L;
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
      String var6 = "\r\u0092Ów\tïïo\u0082\u008cóË¬\u0097t\u0093ÒÜè\u0080¿d\u0083ýÌ%ý7q^ç\u0011õ=¥\u0080j\u0017\u0016&( \u0096j\u0015|Lzr\u001fk\u0007¡´\u0092¡õJð\u0002g=³!ÉC*t)\u008cWq\u0083\"L\u0097Më\"\u000b\u0082";
      int var8 = "\r\u0092Ów\tïïo\u0082\u008cóË¬\u0097t\u0093ÒÜè\u0080¿d\u0083ýÌ%ý7q^ç\u0011õ=¥\u0080j\u0017\u0016&( \u0096j\u0015|Lzr\u001fk\u0007¡´\u0092¡õJð\u0002g=³!ÉC*t)\u008cWq\u0083\"L\u0097Më\"\u000b\u0082"
         .length();
      char var5 = '(';
      int var4 = -1;

      while (true) {
         byte[] var10 = var2.doFinal(var6.substring(++var4, var4 + var5).getBytes("ISO-8859-1"));
         String var13 = iC(var10).intern();
         byte var10001 = -1;
         var9[var7++] = var13;
         if ((var4 += var5) >= var8) {
            vMjtj = var9;
            hVHQH = new String[2];
            return;
         }

         var5 = var6.charAt(var4);
      }
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
      // 000: getstatic sixtwo/R.Ruogs J
      // 003: ldc2_w 65863114332303
      // 006: lxor
      // 007: lstore 6
      // 009: invokestatic sixtwo/P.hY ()[Ljava/lang/String;
      // 00c: astore 8
      // 00e: aload 0
      // 00f: dload 1
      // 010: dload 3
      // 011: invokevirtual sixtwo/R.tg (DD)Z
      // 014: aload 8
      // 016: ifnonnull 104
      // 019: ifeq 0fc
      // 01c: goto 023
      // 01f: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 022: athrow
      // 023: aload 0
      // 024: aload 8
      // 026: ifnonnull 076
      // 029: goto 030
      // 02c: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02f: athrow
      // 030: invokevirtual sixtwo/R.iW ()Z
      // 033: ifeq 075
      // 036: goto 03d
      // 039: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03c: athrow
      // 03d: aload 0
      // 03e: getfield sixtwo/R.yPQoU I
      // 041: i2l
      // 042: aload 0
      // 043: getfield sixtwo/R.TNQyk Lsixtwo/mT;
      // 046: invokestatic sixtwo/mZ.cst (JLsixtwo/mT;)J
      // 049: sipush 1365
      // 04c: ldc2_w 3151633291887772728
      // 04f: lload 6
      // 051: lxor
      // 052: invokedynamic g (IJ)Ljava/lang/String; bsm=sixtwo/R.iF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 057: dup_x2
      // 058: pop
      // 059: sipush 3927
      // 05c: ldc2_w 4372810639323729467
      // 05f: lload 6
      // 061: lxor
      // 062: invokedynamic g (IJ)Ljava/lang/String; bsm=sixtwo/R.iF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 067: invokedynamic makeConcatWithConstants (Ljava/lang/String;JLjava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001\u0001\u0001" ]
      // 06c: invokestatic sixtwo/cN.XI (Ljava/lang/String;)V
      // 06f: bipush 1
      // 070: ireturn
      // 071: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 074: athrow
      // 075: aload 0
      // 076: aload 8
      // 078: ifnonnull 0a1
      // 07b: getfield sixtwo/R.fKzYw Lsixtwo/W;
      // 07e: getstatic sixtwo/W.igoQj Lsixtwo/W;
      // 081: if_acmpne 0a0
      // 084: goto 08b
      // 087: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08a: athrow
      // 08b: aload 0
      // 08c: getfield sixtwo/R.kxeKc Lsixtwo/ly;
      // 08f: invokevirtual sixtwo/ly.ccz ()V
      // 092: aload 0
      // 093: getfield sixtwo/R.kxeKc Lsixtwo/ly;
      // 096: invokevirtual sixtwo/ly.cco ()V
      // 099: goto 0a0
      // 09c: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09f: athrow
      // 0a0: aload 0
      // 0a1: aload 8
      // 0a3: ifnonnull 0c5
      // 0a6: getfield sixtwo/R.JAVXX Lsixtwo/V;
      // 0a9: ifnull 0c4
      // 0ac: goto 0b3
      // 0af: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b2: athrow
      // 0b3: aload 0
      // 0b4: getfield sixtwo/R.JAVXX Lsixtwo/V;
      // 0b7: aload 0
      // 0b8: invokeinterface sixtwo/V.run (Lsixtwo/X;)V 2
      // 0bd: goto 0c4
      // 0c0: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c3: athrow
      // 0c4: aload 0
      // 0c5: getfield sixtwo/R.jsFhG Z
      // 0c8: aload 8
      // 0ca: ifnonnull 0fb
      // 0cd: ifeq 0fa
      // 0d0: goto 0d7
      // 0d3: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d6: athrow
      // 0d7: aload 0
      // 0d8: aload 0
      // 0d9: getfield sixtwo/R.aoGjU Z
      // 0dc: aload 8
      // 0de: ifnonnull 0f3
      // 0e1: goto 0e8
      // 0e4: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e7: athrow
      // 0e8: ifne 0f6
      // 0eb: goto 0f2
      // 0ee: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f1: athrow
      // 0f2: bipush 1
      // 0f3: goto 0f7
      // 0f6: bipush 0
      // 0f7: putfield sixtwo/R.aoGjU Z
      // 0fa: bipush 1
      // 0fb: ireturn
      // 0fc: aload 0
      // 0fd: dload 1
      // 0fe: dload 3
      // 0ff: aload 5
      // 101: invokespecial sixtwo/X.dk (DDLsixtwo/mA;)Z
      // 104: ireturn
   }

   @Override
   protected void bV(lC var1) {
      long var2 = Ruogs ^ 112645099310155L;
      super.bV(var1);
      P.hY();
      this.iy(this.ti(var1));
      float var5 = this.MCnYt + jf.bAH(this.kxeKc.kN(), this.BcpIo);
      float var6 = this.pNyTQ + jf.bAH(this.kxeKc.dn(), this.WjISQ);
      this.kxeKc.sW(var5, var6);
      this.kxeKc.ccC(this.PDdiO.dfU().cob(this.UtcTb));

      try {
         this.kxeKc.su(var1);
         if (iS.bwL() == null) {
            P.hX(new String[4]);
         }
      } catch (MatchException var7) {
         throw iB(var7);
      }
   }

   public sixtwo.R iz(ly var1) {
      this.kxeKc = var1;
      return this;
   }

   public sixtwo.R iA(W var1) {
      this.fKzYw = var1;
      return this;
   }

   private static String iC(byte[] var0) {
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

   private void iy(boolean param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/R.Ruogs J
      // 03: ldc2_w 94661420158286
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/P.hY ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/R.fKzYw Lsixtwo/W;
      // 11: getstatic sixtwo/W.xyBWW Lsixtwo/W;
      // 14: if_acmpne e0
      // 17: iload 1
      // 18: aload 4
      // 1a: ifnonnull 97
      // 1d: goto 24
      // 20: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: ifeq 89
      // 27: goto 2e
      // 2a: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: aload 0
      // 2f: getfield sixtwo/R.kxeKc Lsixtwo/ly;
      // 32: invokevirtual sixtwo/ly.cct ()Z
      // 35: aload 4
      // 37: ifnonnull 73
      // 3a: goto 41
      // 3d: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 40: athrow
      // 41: ifeq 59
      // 44: goto 4b
      // 47: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4a: athrow
      // 4b: aload 0
      // 4c: getfield sixtwo/R.kxeKc Lsixtwo/ly;
      // 4f: invokevirtual sixtwo/ly.ccu ()V
      // 52: goto 59
      // 55: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 58: athrow
      // 59: aload 0
      // 5a: getfield sixtwo/R.kxeKc Lsixtwo/ly;
      // 5d: invokevirtual sixtwo/ly.ccs ()V
      // 60: aload 0
      // 61: getfield sixtwo/R.kxeKc Lsixtwo/ly;
      // 64: aload 4
      // 66: ifnonnull 81
      // 69: invokevirtual sixtwo/ly.ccp ()Z
      // 6c: goto 73
      // 6f: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 72: athrow
      // 73: ifeq e0
      // 76: aload 0
      // 77: getfield sixtwo/R.kxeKc Lsixtwo/ly;
      // 7a: goto 81
      // 7d: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 80: athrow
      // 81: invokevirtual sixtwo/ly.cco ()V
      // 84: aload 4
      // 86: ifnull e0
      // 89: aload 0
      // 8a: getfield sixtwo/R.kxeKc Lsixtwo/ly;
      // 8d: invokevirtual sixtwo/ly.cct ()Z
      // 90: goto 97
      // 93: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 96: athrow
      // 97: aload 4
      // 99: ifnonnull cf
      // 9c: ifne b4
      // 9f: goto a6
      // a2: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a5: athrow
      // a6: aload 0
      // a7: getfield sixtwo/R.kxeKc Lsixtwo/ly;
      // aa: invokevirtual sixtwo/ly.ccu ()V
      // ad: goto b4
      // b0: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b3: athrow
      // b4: aload 0
      // b5: getfield sixtwo/R.kxeKc Lsixtwo/ly;
      // b8: bipush 0
      // b9: invokevirtual sixtwo/ly.ccr (I)V
      // bc: aload 0
      // bd: getfield sixtwo/R.kxeKc Lsixtwo/ly;
      // c0: aload 4
      // c2: ifnonnull dd
      // c5: invokevirtual sixtwo/ly.ccp ()Z
      // c8: goto cf
      // cb: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ce: athrow
      // cf: ifeq e0
      // d2: aload 0
      // d3: getfield sixtwo/R.kxeKc Lsixtwo/ly;
      // d6: goto dd
      // d9: invokestatic sixtwo/R.iB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // dc: athrow
      // dd: invokevirtual sixtwo/ly.cco ()V
      // e0: return
   }

   private static String iD(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 26517;
      if (hVHQH[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])rqkRQ.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               rqkRQ.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/R", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = vMjtj[var5].getBytes("ISO-8859-1");
         hVHQH[var5] = iC(((Cipher)var4[0]).doFinal(var9));
      }

      return hVHQH[var5];
   }

   private static Object iE(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = iD(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static MatchException iB(MatchException var0) {
      return var0;
   }

   private static CallSite iF(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("iE".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/R" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
