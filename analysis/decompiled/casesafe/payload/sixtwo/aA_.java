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

public abstract class aA extends az {
   private final rk pLXUh;
   private final rk sWdzd;
   private float UNVTC;
   private float kLgGw;
   private boolean hxRxH;
   private float yNfcJ;
   private float TMZHo;
   private float uoFGr;
   private boolean hkFfr;
   private boolean DCCbb;
   private boolean WBAUx;
   private boolean QdNTF;
   private boolean fHvqn;
   private static final long GTpjx = gb.aYR(-4850908496947294916L, -5906113067756810804L, MethodHandles.lookup().lookupClass()).a(234998979476403L);
   private static final long[] INkfH;
   private static final Integer[] bhgzy;
   private static final Map BrWZl = new HashMap(13);

   public aA() {
      long var1 = GTpjx ^ 127531009634081L;
      super();
      this.pLXUh = new rk(tO<"d">(5197, 2503955793091616306L ^ var1)).dhs(rj.MBpuQ);
      this.sWdzd = new rk(tO<"d">(1864, 289371749049453878L ^ var1)).dhs(rj.MBpuQ);
      this.WBAUx = true;
      this.QdNTF = true;
   }

   static {
      long var0 = GTpjx ^ 69824576699718L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[2];
      int var5 = 0;
      String var6 = "@├Á\u0014├Łk\u0093├Ś┬»├ľ┬¬├Ä~├ó)\u009b├ö";
      int var7 = "@├Á\u0014├Łk\u0093├Ś┬»├ľ┬¬├Ä~├ó)\u009b├ö".length();
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
         byte var14 = -1;
         var8[var10001] = var10004;
      } while (var4 < var7);

      INkfH = var8;
      bhgzy = new Integer[2];
   }

   @Override
   public void dY() {
      super.dY();
      this.tK();
   }

   protected void tK() {
      this.hxRxH = false;
      this.hkFfr = false;
      this.DCCbb = false;
      this.UNVTC = this.MCnYt;
      this.kLgGw = this.pNyTQ;
      this.pLXUh.dhg();
      this.sWdzd.dhg();
   }

   private static MatchException tL(MatchException var0) {
      return var0;
   }

   public aA tI(boolean param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/aA.GTpjx J
      // 03: ldc2_w 109753773834413
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnull 31
      // 13: iload 1
      // 14: putfield sixtwo/aA.QdNTF Z
      // 17: iload 1
      // 18: ifne 30
      // 1b: goto 22
      // 1e: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: aload 0
      // 23: getfield sixtwo/aA.sWdzd Lsixtwo/rk;
      // 26: invokevirtual sixtwo/rk.dhg ()V
      // 29: goto 30
      // 2c: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: aload 0
      // 31: areturn
   }

   private static int tM(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 18770;
      if (bhgzy[var3] == null) {
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
         long var5 = INkfH[var3];
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
         Object[] var9 = (Object[])BrWZl.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               BrWZl.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/aA", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         bhgzy[var3] = var15;
      }

      return bhgzy[var3];
   }

   public aA tH(boolean param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/aA.GTpjx J
      // 03: ldc2_w 126613821960578
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnull 31
      // 13: iload 1
      // 14: putfield sixtwo/aA.WBAUx Z
      // 17: iload 1
      // 18: ifne 30
      // 1b: goto 22
      // 1e: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: aload 0
      // 23: getfield sixtwo/aA.pLXUh Lsixtwo/rk;
      // 26: invokevirtual sixtwo/rk.dhg ()V
      // 29: goto 30
      // 2c: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: aload 0
      // 31: areturn
   }

   public aA tJ(boolean var1) {
      this.fHvqn = var1;
      return this;
   }

   private static CallSite tO(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("tN".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/aA" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int tN(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = tM(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public aA tG(float param1, float param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/aA.GTpjx J
      // 003: ldc2_w 122213593604793
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 00b: fconst_0
      // 00c: fstore 6
      // 00e: fconst_0
      // 00f: fstore 7
      // 011: fconst_0
      // 012: fstore 8
      // 014: bipush 0
      // 015: istore 9
      // 017: fconst_0
      // 018: fstore 10
      // 01a: fconst_0
      // 01b: fstore 11
      // 01d: bipush 0
      // 01e: istore 12
      // 020: fconst_0
      // 021: fstore 13
      // 023: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 026: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 029: astore 16
      // 02b: astore 5
      // 02d: aload 16
      // 02f: instanceof sixtwo/bl
      // 032: aload 5
      // 034: ifnull 0a0
      // 037: ifeq 093
      // 03a: goto 041
      // 03d: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 040: athrow
      // 041: aload 16
      // 043: checkcast sixtwo/bl
      // 046: astore 14
      // 048: aload 14
      // 04a: invokevirtual sixtwo/bl.EF ()Z
      // 04d: aload 5
      // 04f: ifnull 074
      // 052: ifeq 073
      // 055: goto 05c
      // 058: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05b: athrow
      // 05c: bipush 1
      // 05d: istore 9
      // 05f: aload 14
      // 061: invokevirtual sixtwo/bl.Ey ()Lsixtwo/lc;
      // 064: invokevirtual sixtwo/lc.bXF ()F
      // 067: fstore 10
      // 069: aload 14
      // 06b: invokevirtual sixtwo/bl.Ey ()Lsixtwo/lc;
      // 06e: invokevirtual sixtwo/lc.bXG ()F
      // 071: fstore 11
      // 073: bipush 1
      // 074: istore 12
      // 076: aload 14
      // 078: invokevirtual sixtwo/bl.Ez ()Lsixtwo/ah;
      // 07b: invokevirtual sixtwo/ah.nH ()D
      // 07e: dneg
      // 07f: d2f
      // 080: fstore 13
      // 082: aload 5
      // 084: ifnonnull 0dc
      // 087: ldc "YClhyb"
      // 089: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 08c: goto 093
      // 08f: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 092: athrow
      // 093: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 096: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 099: astore 16
      // 09b: aload 16
      // 09d: instanceof sixtwo/bz
      // 0a0: aload 5
      // 0a2: ifnull 0de
      // 0a5: ifeq 0dc
      // 0a8: goto 0af
      // 0ab: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ae: athrow
      // 0af: aload 16
      // 0b1: checkcast sixtwo/bz
      // 0b4: astore 15
      // 0b6: bipush 1
      // 0b7: istore 9
      // 0b9: aload 15
      // 0bb: invokevirtual sixtwo/bz.KI ()Lsixtwo/lc;
      // 0be: invokevirtual sixtwo/lc.bXF ()F
      // 0c1: fstore 10
      // 0c3: aload 15
      // 0c5: invokevirtual sixtwo/bz.KI ()Lsixtwo/lc;
      // 0c8: invokevirtual sixtwo/lc.bXG ()F
      // 0cb: fstore 11
      // 0cd: bipush 1
      // 0ce: istore 12
      // 0d0: aload 15
      // 0d2: invokevirtual sixtwo/bz.KO ()Lsixtwo/ah;
      // 0d5: invokevirtual sixtwo/ah.nH ()D
      // 0d8: dneg
      // 0d9: d2f
      // 0da: fstore 13
      // 0dc: iload 9
      // 0de: aload 5
      // 0e0: ifnull 104
      // 0e3: ifeq 147
      // 0e6: goto 0ed
      // 0e9: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ec: athrow
      // 0ed: aload 0
      // 0ee: aload 5
      // 0f0: ifnull 13d
      // 0f3: goto 0fa
      // 0f6: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f9: athrow
      // 0fa: getfield sixtwo/aA.hkFfr Z
      // 0fd: goto 104
      // 100: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 103: athrow
      // 104: ifne 124
      // 107: aload 0
      // 108: fload 10
      // 10a: putfield sixtwo/aA.yNfcJ F
      // 10d: aload 0
      // 10e: fload 11
      // 110: putfield sixtwo/aA.TMZHo F
      // 113: aload 0
      // 114: bipush 1
      // 115: putfield sixtwo/aA.hkFfr Z
      // 118: aload 5
      // 11a: ifnonnull 153
      // 11d: goto 124
      // 120: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 123: athrow
      // 124: fload 10
      // 126: aload 0
      // 127: getfield sixtwo/aA.yNfcJ F
      // 12a: fsub
      // 12b: fstore 6
      // 12d: fload 11
      // 12f: aload 0
      // 130: getfield sixtwo/aA.TMZHo F
      // 133: fsub
      // 134: fstore 7
      // 136: aload 0
      // 137: fload 10
      // 139: putfield sixtwo/aA.yNfcJ F
      // 13c: aload 0
      // 13d: fload 11
      // 13f: putfield sixtwo/aA.TMZHo F
      // 142: aload 5
      // 144: ifnonnull 153
      // 147: aload 0
      // 148: bipush 0
      // 149: putfield sixtwo/aA.hkFfr Z
      // 14c: goto 153
      // 14f: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 152: athrow
      // 153: iload 12
      // 155: aload 5
      // 157: ifnull 17b
      // 15a: ifeq 1a9
      // 15d: goto 164
      // 160: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 163: athrow
      // 164: aload 0
      // 165: aload 5
      // 167: ifnull 19f
      // 16a: goto 171
      // 16d: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 170: athrow
      // 171: getfield sixtwo/aA.DCCbb Z
      // 174: goto 17b
      // 177: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 17a: athrow
      // 17b: ifne 195
      // 17e: aload 0
      // 17f: fload 13
      // 181: putfield sixtwo/aA.uoFGr F
      // 184: aload 0
      // 185: bipush 1
      // 186: putfield sixtwo/aA.DCCbb Z
      // 189: aload 5
      // 18b: ifnonnull 1b5
      // 18e: goto 195
      // 191: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 194: athrow
      // 195: fload 13
      // 197: aload 0
      // 198: getfield sixtwo/aA.uoFGr F
      // 19b: fsub
      // 19c: fstore 8
      // 19e: aload 0
      // 19f: fload 13
      // 1a1: putfield sixtwo/aA.uoFGr F
      // 1a4: aload 5
      // 1a6: ifnonnull 1b5
      // 1a9: aload 0
      // 1aa: bipush 0
      // 1ab: putfield sixtwo/aA.DCCbb Z
      // 1ae: goto 1b5
      // 1b1: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b4: athrow
      // 1b5: aload 0
      // 1b6: aload 5
      // 1b8: ifnull 1e8
      // 1bb: getfield sixtwo/aA.hxRxH Z
      // 1be: ifne 1ec
      // 1c1: goto 1c8
      // 1c4: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c7: athrow
      // 1c8: aload 0
      // 1c9: fload 1
      // 1ca: putfield sixtwo/aA.UNVTC F
      // 1cd: aload 0
      // 1ce: fload 2
      // 1cf: putfield sixtwo/aA.kLgGw F
      // 1d2: aload 0
      // 1d3: getfield sixtwo/aA.pLXUh Lsixtwo/rk;
      // 1d6: invokevirtual sixtwo/rk.dhg ()V
      // 1d9: aload 0
      // 1da: getfield sixtwo/aA.sWdzd Lsixtwo/rk;
      // 1dd: invokevirtual sixtwo/rk.dhg ()V
      // 1e0: aload 0
      // 1e1: goto 1e8
      // 1e4: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e7: athrow
      // 1e8: bipush 1
      // 1e9: putfield sixtwo/aA.hxRxH Z
      // 1ec: fload 1
      // 1ed: aload 0
      // 1ee: getfield sixtwo/aA.UNVTC F
      // 1f1: fsub
      // 1f2: fstore 14
      // 1f4: fload 2
      // 1f5: aload 0
      // 1f6: getfield sixtwo/aA.kLgGw F
      // 1f9: fsub
      // 1fa: fstore 15
      // 1fc: aload 0
      // 1fd: fload 1
      // 1fe: putfield sixtwo/aA.UNVTC F
      // 201: aload 0
      // 202: fload 2
      // 203: putfield sixtwo/aA.kLgGw F
      // 206: fload 14
      // 208: fconst_0
      // 209: fcmpl
      // 20a: aload 5
      // 20c: ifnull 23e
      // 20f: ifne 233
      // 212: goto 219
      // 215: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 218: athrow
      // 219: fload 15
      // 21b: fconst_0
      // 21c: fcmpl
      // 21d: aload 5
      // 21f: ifnull 23e
      // 222: goto 229
      // 225: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 228: athrow
      // 229: ifeq 2fe
      // 22c: goto 233
      // 22f: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 232: athrow
      // 233: aload 0
      // 234: getfield sixtwo/aA.WBAUx Z
      // 237: goto 23e
      // 23a: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23d: athrow
      // 23e: ifeq 24d
      // 241: fload 14
      // 243: fload 6
      // 245: fsub
      // 246: goto 24e
      // 249: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24c: athrow
      // 24d: fconst_0
      // 24e: fstore 16
      // 250: aload 0
      // 251: getfield sixtwo/aA.QdNTF Z
      // 254: ifeq 263
      // 257: fload 15
      // 259: fload 7
      // 25b: fsub
      // 25c: goto 264
      // 25f: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 262: athrow
      // 263: fconst_0
      // 264: fstore 17
      // 266: aload 0
      // 267: getfield sixtwo/aA.QdNTF Z
      // 26a: aload 5
      // 26c: ifnull 2b8
      // 26f: ifeq 2b4
      // 272: goto 279
      // 275: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 278: athrow
      // 279: fload 8
      // 27b: fconst_0
      // 27c: fcmpl
      // 27d: aload 5
      // 27f: ifnull 2b8
      // 282: goto 289
      // 285: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 288: athrow
      // 289: ifeq 2b4
      // 28c: goto 293
      // 28f: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 292: athrow
      // 293: fload 17
      // 295: fload 8
      // 297: fsub
      // 298: fstore 18
      // 29a: fload 18
      // 29c: invokestatic java/lang/Math.abs (F)F
      // 29f: ldc 0.001
      // 2a1: fcmpg
      // 2a2: aload 5
      // 2a4: ifnull 2b8
      // 2a7: ifgt 2b4
      // 2aa: goto 2b1
      // 2ad: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b0: athrow
      // 2b1: fconst_0
      // 2b2: fstore 17
      // 2b4: fload 16
      // 2b6: fconst_0
      // 2b7: fcmpl
      // 2b8: aload 5
      // 2ba: ifnull 2d2
      // 2bd: ifne 2d5
      // 2c0: goto 2c7
      // 2c3: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c6: athrow
      // 2c7: fload 17
      // 2c9: fconst_0
      // 2ca: fcmpl
      // 2cb: goto 2d2
      // 2ce: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d1: athrow
      // 2d2: ifeq 2fe
      // 2d5: aload 0
      // 2d6: getfield sixtwo/aA.pLXUh Lsixtwo/rk;
      // 2d9: aload 0
      // 2da: getfield sixtwo/aA.pLXUh Lsixtwo/rk;
      // 2dd: invokevirtual sixtwo/rk.dhj ()F
      // 2e0: fload 16
      // 2e2: fsub
      // 2e3: invokevirtual sixtwo/rk.dhe (F)V
      // 2e6: aload 0
      // 2e7: getfield sixtwo/aA.sWdzd Lsixtwo/rk;
      // 2ea: aload 0
      // 2eb: getfield sixtwo/aA.sWdzd Lsixtwo/rk;
      // 2ee: invokevirtual sixtwo/rk.dhj ()F
      // 2f1: fload 17
      // 2f3: fsub
      // 2f4: invokevirtual sixtwo/rk.dhe (F)V
      // 2f7: goto 2fe
      // 2fa: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2fd: athrow
      // 2fe: aload 0
      // 2ff: aload 0
      // 300: getfield sixtwo/aA.UNVTC F
      // 303: aload 0
      // 304: aload 5
      // 306: ifnull 31e
      // 309: getfield sixtwo/aA.WBAUx Z
      // 30c: ifeq 328
      // 30f: goto 316
      // 312: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 315: athrow
      // 316: aload 0
      // 317: goto 31e
      // 31a: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31d: athrow
      // 31e: getfield sixtwo/aA.pLXUh Lsixtwo/rk;
      // 321: fconst_0
      // 322: invokevirtual sixtwo/rk.dhd (F)F
      // 325: goto 329
      // 328: fconst_0
      // 329: fadd
      // 32a: putfield sixtwo/aA.MCnYt F
      // 32d: aload 0
      // 32e: getfield sixtwo/aA.kLgGw F
      // 331: aload 0
      // 332: aload 5
      // 334: ifnull 34c
      // 337: getfield sixtwo/aA.QdNTF Z
      // 33a: ifeq 356
      // 33d: goto 344
      // 340: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 343: athrow
      // 344: aload 0
      // 345: goto 34c
      // 348: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 34b: athrow
      // 34c: getfield sixtwo/aA.sWdzd Lsixtwo/rk;
      // 34f: fconst_0
      // 350: invokevirtual sixtwo/rk.dhd (F)F
      // 353: goto 357
      // 356: fconst_0
      // 357: fadd
      // 358: fstore 16
      // 35a: aload 0
      // 35b: aload 5
      // 35d: ifnull 3b5
      // 360: getfield sixtwo/aA.fHvqn Z
      // 363: ifeq 3ae
      // 366: goto 36d
      // 369: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36c: athrow
      // 36d: aload 0
      // 36e: aload 5
      // 370: ifnull 3b5
      // 373: goto 37a
      // 376: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 379: athrow
      // 37a: getfield sixtwo/aA.QdNTF Z
      // 37d: ifeq 3ae
      // 380: goto 387
      // 383: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 386: athrow
      // 387: fload 7
      // 389: aload 5
      // 38b: ifnull 3ac
      // 38e: goto 395
      // 391: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 394: athrow
      // 395: fconst_0
      // 396: fcmpl
      // 397: ifne 3ae
      // 39a: goto 3a1
      // 39d: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a0: athrow
      // 3a1: aload 0
      // 3a2: getfield sixtwo/aA.kLgGw F
      // 3a5: goto 3ac
      // 3a8: invokestatic sixtwo/aA.tL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3ab: athrow
      // 3ac: fstore 16
      // 3ae: aload 0
      // 3af: fload 16
      // 3b1: putfield sixtwo/aA.pNyTQ F
      // 3b4: aload 0
      // 3b5: areturn
   }
}
