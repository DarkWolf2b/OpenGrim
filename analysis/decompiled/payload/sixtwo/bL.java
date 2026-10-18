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
import media.IMediaSession;
import media.MediaInfo;
import net.minecraft.class_241;

public class bL extends bV {
   private final rk[] pBlmF;
   private final float[] CkuYo;
   private final mT VSvxM;
   private final ri jGMUW;
   private final rk PgRze;
   private final rk IACKo;
   private final rk GBFJq;
   private final rk CAJMs;
   private final rk UzjcR;
   private static final long PysbJ = gb.aYR(3522061553632044626L, -8172081121300398233L, MethodHandles.lookup().lookupClass()).a(33674603162358L);
   private static final long[] njGgj;
   private static final Integer[] KhHGj;
   private static final Map jOYJZ = new HashMap(13);
   private static final long rsXSP;

   public bL(cv param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/bL.PysbJ J
      // 003: ldc2_w 46730500523752
      // 006: lxor
      // 007: lstore 2
      // 008: aload 0
      // 009: aload 1
      // 00a: sipush 10220
      // 00d: ldc2_w 6069739458820806357
      // 010: lload 2
      // 011: lxor
      // 012: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 017: newarray 10
      // 019: dup
      // 01a: bipush 0
      // 01b: sipush 5192
      // 01e: ldc2_w 5929680184803239289
      // 021: lload 2
      // 022: lxor
      // 023: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 028: iastore
      // 029: dup
      // 02a: bipush 1
      // 02b: sipush 8269
      // 02e: ldc2_w 7169934827557065083
      // 031: lload 2
      // 032: lxor
      // 033: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 038: iastore
      // 039: dup
      // 03a: bipush 2
      // 03b: sipush 6374
      // 03e: ldc2_w 5659912290580900296
      // 041: lload 2
      // 042: lxor
      // 043: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 048: iastore
      // 049: dup
      // 04a: bipush 3
      // 04b: sipush 20668
      // 04e: ldc2_w 3017766284733637003
      // 051: lload 2
      // 052: lxor
      // 053: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 058: iastore
      // 059: dup
      // 05a: bipush 4
      // 05b: sipush 1217
      // 05e: ldc2_w 7016885933968930281
      // 061: lload 2
      // 062: lxor
      // 063: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 068: iastore
      // 069: dup
      // 06a: bipush 5
      // 06b: sipush 27774
      // 06e: ldc2_w 4140496425572818257
      // 071: lload 2
      // 072: lxor
      // 073: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 078: iastore
      // 079: dup
      // 07a: sipush 3057
      // 07d: ldc2_w 6273152813089733338
      // 080: lload 2
      // 081: lxor
      // 082: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 087: sipush 3408
      // 08a: ldc2_w 4937309124513545327
      // 08d: lload 2
      // 08e: lxor
      // 08f: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 094: iastore
      // 095: dup
      // 096: sipush 24800
      // 099: ldc2_w 8123883420556612044
      // 09c: lload 2
      // 09d: lxor
      // 09e: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0a3: sipush 12355
      // 0a6: ldc2_w 976213611774607743
      // 0a9: lload 2
      // 0aa: lxor
      // 0ab: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0b0: iastore
      // 0b1: dup
      // 0b2: sipush 3817
      // 0b5: ldc2_w 3304795496284078043
      // 0b8: lload 2
      // 0b9: lxor
      // 0ba: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0bf: sipush 32735
      // 0c2: ldc2_w 3738773525557137130
      // 0c5: lload 2
      // 0c6: lxor
      // 0c7: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0cc: iastore
      // 0cd: dup
      // 0ce: sipush 20904
      // 0d1: ldc2_w 3693649257820217494
      // 0d4: lload 2
      // 0d5: lxor
      // 0d6: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0db: sipush 13770
      // 0de: ldc2_w 5629932619321378041
      // 0e1: lload 2
      // 0e2: lxor
      // 0e3: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0e8: iastore
      // 0e9: dup
      // 0ea: sipush 27797
      // 0ed: ldc2_w 6116711171858783662
      // 0f0: lload 2
      // 0f1: lxor
      // 0f2: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0f7: sipush 18379
      // 0fa: ldc2_w 4921163095449532150
      // 0fd: lload 2
      // 0fe: lxor
      // 0ff: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 104: iastore
      // 105: dup
      // 106: sipush 25276
      // 109: ldc2_w 1214485945007657864
      // 10c: lload 2
      // 10d: lxor
      // 10e: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 113: sipush 5080
      // 116: ldc2_w 7104501285152924384
      // 119: lload 2
      // 11a: lxor
      // 11b: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 120: iastore
      // 121: invokestatic sixtwo/mr.clS ([I)Lsixtwo/mr;
      // 124: invokespecial sixtwo/bV.<init> (Lsixtwo/cv;Lsixtwo/mr;)V
      // 127: aload 0
      // 128: sipush 19958
      // 12b: ldc2_w 1698513046335454428
      // 12e: lload 2
      // 12f: lxor
      // 130: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 135: anewarray 100
      // 138: putfield sixtwo/bL.pBlmF [Lsixtwo/rk;
      // 13b: aload 0
      // 13c: sipush 19958
      // 13f: ldc2_w 1698513046335454428
      // 142: lload 2
      // 143: lxor
      // 144: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 149: newarray 6
      // 14b: putfield sixtwo/bL.CkuYo [F
      // 14e: aload 0
      // 14f: invokestatic sixtwo/mT.cpz ()Lsixtwo/mT;
      // 152: putfield sixtwo/bL.VSvxM Lsixtwo/mT;
      // 155: aload 0
      // 156: new sixtwo/ri
      // 159: dup
      // 15a: sipush 16257
      // 15d: ldc2_w 7377012692872400556
      // 160: lload 2
      // 161: lxor
      // 162: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 167: invokespecial sixtwo/ri.<init> (I)V
      // 16a: putfield sixtwo/bL.jGMUW Lsixtwo/ri;
      // 16d: aload 0
      // 16e: new sixtwo/rk
      // 171: dup
      // 172: sipush 32728
      // 175: ldc2_w 318239389824339705
      // 178: lload 2
      // 179: lxor
      // 17a: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 17f: invokespecial sixtwo/rk.<init> (I)V
      // 182: getstatic sixtwo/rj.NJlxm Lsixtwo/rj;
      // 185: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 188: putfield sixtwo/bL.PgRze Lsixtwo/rk;
      // 18b: invokestatic sixtwo/bJ.MN ()Z
      // 18e: aload 0
      // 18f: new sixtwo/rk
      // 192: dup
      // 193: sipush 27304
      // 196: ldc2_w 2774524917873564568
      // 199: lload 2
      // 19a: lxor
      // 19b: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1a0: invokespecial sixtwo/rk.<init> (I)V
      // 1a3: getstatic sixtwo/rj.UPXqT Lsixtwo/rj;
      // 1a6: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 1a9: putfield sixtwo/bL.IACKo Lsixtwo/rk;
      // 1ac: aload 0
      // 1ad: new sixtwo/rk
      // 1b0: dup
      // 1b1: sipush 27304
      // 1b4: ldc2_w 2774524917873564568
      // 1b7: lload 2
      // 1b8: lxor
      // 1b9: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1be: invokespecial sixtwo/rk.<init> (I)V
      // 1c1: getstatic sixtwo/rj.UPXqT Lsixtwo/rj;
      // 1c4: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 1c7: putfield sixtwo/bL.GBFJq Lsixtwo/rk;
      // 1ca: aload 0
      // 1cb: new sixtwo/rk
      // 1ce: dup
      // 1cf: sipush 27304
      // 1d2: ldc2_w 2774524917873564568
      // 1d5: lload 2
      // 1d6: lxor
      // 1d7: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1dc: invokespecial sixtwo/rk.<init> (I)V
      // 1df: getstatic sixtwo/rj.UPXqT Lsixtwo/rj;
      // 1e2: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 1e5: putfield sixtwo/bL.CAJMs Lsixtwo/rk;
      // 1e8: aload 0
      // 1e9: new sixtwo/rk
      // 1ec: dup
      // 1ed: sipush 10829
      // 1f0: ldc2_w 1508678846848867191
      // 1f3: lload 2
      // 1f4: lxor
      // 1f5: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1fa: invokespecial sixtwo/rk.<init> (I)V
      // 1fd: getstatic sixtwo/rj.Xmkbr Lsixtwo/rj;
      // 200: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 203: putfield sixtwo/bL.UzjcR Lsixtwo/rk;
      // 206: bipush 0
      // 207: istore 5
      // 209: istore 4
      // 20b: iload 5
      // 20d: aload 0
      // 20e: getfield sixtwo/bL.pBlmF [Lsixtwo/rk;
      // 211: arraylength
      // 212: if_icmpge 253
      // 215: aload 0
      // 216: getfield sixtwo/bL.pBlmF [Lsixtwo/rk;
      // 219: iload 5
      // 21b: new sixtwo/rk
      // 21e: dup
      // 21f: sipush 4038
      // 222: ldc2_w 3081227209627418351
      // 225: lload 2
      // 226: lxor
      // 227: invokedynamic b (IJ)I bsm=sixtwo/bL.Nm (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 22c: invokespecial sixtwo/rk.<init> (I)V
      // 22f: getstatic sixtwo/rj.Xmkbr Lsixtwo/rj;
      // 232: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 235: aastore
      // 236: aload 0
      // 237: getfield sixtwo/bL.pBlmF [Lsixtwo/rk;
      // 23a: iload 5
      // 23c: aaload
      // 23d: ldc 0.35
      // 23f: invokevirtual sixtwo/rk.dhf (F)V
      // 242: aload 0
      // 243: getfield sixtwo/bL.CkuYo [F
      // 246: iload 5
      // 248: ldc 0.35
      // 24a: fastore
      // 24b: iinc 5 1
      // 24e: iload 4
      // 250: ifeq 20b
      // 253: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 256: ifnonnull 271
      // 259: iload 4
      // 25b: ifeq 26d
      // 25e: goto 265
      // 261: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 264: athrow
      // 265: bipush 0
      // 266: goto 26e
      // 269: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26c: athrow
      // 26d: bipush 1
      // 26e: invokestatic sixtwo/bJ.ML (Z)V
      // 271: return
   }

   static {
      long var5 = PysbJ ^ 120042774779715L;
      Cipher var7;
      Cipher var10000 = var7 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var8 = 1; var8 < 8; var8++) {
         var10003[var8] = (byte)(var5 << var8 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var13 = new long[25];
      int var10 = 0;
      String var11 = "v\u0019Â& ³áê\u0087%cªÖ¯\u0097\u001f?SÄ÷¹3ê@sã¸ø\u0097g\u0091PöÝm\u007fmåE)u¨\u0017\u0081 \u0007Í¹4\u0000ó Dxþü3è\u0013\u001e\u00adb\u0091\u0010ûm\u0003,%iÆà\u0080¼\u000fX\u0000u²¹\u0014FV\u0014ä\u001aªF&\u0019yaÑdONDbqW\u0084\u0089\u000b¸ÚûD)\u001d\u000bb'rFÔ\u0085U\u0098ºÙZÔ\u0002¤6\u0088½º¤ñú\u008fï³ÂÉà¦Î\u008d\u0019H8W\"©¯Ø\u007fæ©{Æ°\nÄ}\u008a%7l8\u0092I8 Nþ 2¶GQOtà\u0000\u008dÃâ\u0001éÙx";
      int var12 = "v\u0019Â& ³áê\u0087%cªÖ¯\u0097\u001f?SÄ÷¹3ê@sã¸ø\u0097g\u0091PöÝm\u007fmåE)u¨\u0017\u0081 \u0007Í¹4\u0000ó Dxþü3è\u0013\u001e\u00adb\u0091\u0010ûm\u0003,%iÆà\u0080¼\u000fX\u0000u²¹\u0014FV\u0014ä\u001aªF&\u0019yaÑdONDbqW\u0084\u0089\u000b¸ÚûD)\u001d\u000bb'rFÔ\u0085U\u0098ºÙZÔ\u0002¤6\u0088½º¤ñú\u008fï³ÂÉà¦Î\u008d\u0019H8W\"©¯Ø\u007fæ©{Æ°\nÄ}\u008a%7l8\u0092I8 Nþ 2¶GQOtà\u0000\u008dÃâ\u0001éÙx"
         .length();
      byte var9 = 0;

      label33:
      while (true) {
         int var10001 = var9;
         var9 += 8;
         byte[] var14 = var11.substring(var10001, var9).getBytes("ISO-8859-1");
         long[] var19 = var13;
         var10001 = var10++;
         long var24 = (var14[0] & 255L) << 56
            | (var14[1] & 255L) << 48
            | (var14[2] & 255L) << 40
            | (var14[3] & 255L) << 32
            | (var14[4] & 255L) << 24
            | (var14[5] & 255L) << 16
            | (var14[6] & 255L) << 8
            | var14[7] & 255L;
         byte var28 = -1;

         while (true) {
            long var15 = var24;
            byte[] var17 = var7.doFinal(
               new byte[]{
                  (byte)(var15 >>> 56),
                  (byte)(var15 >>> 48),
                  (byte)(var15 >>> 40),
                  (byte)(var15 >>> 32),
                  (byte)(var15 >>> 24),
                  (byte)(var15 >>> 16),
                  (byte)(var15 >>> 8),
                  (byte)var15
               }
            );
            long var31 = (var17[0] & 255L) << 56
               | (var17[1] & 255L) << 48
               | (var17[2] & 255L) << 40
               | (var17[3] & 255L) << 32
               | (var17[4] & 255L) << 24
               | (var17[5] & 255L) << 16
               | (var17[6] & 255L) << 8
               | var17[7] & 255L;
            switch (var28) {
               case 0:
                  var19[var10001] = var31;
                  if (var9 >= var12) {
                     njGgj = var13;
                     KhHGj = new Integer[25];
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var5 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long var2 = 6068978616664588365L;
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
                     long var27 = (var4[0] & 255L) << 56
                        | (var4[1] & 255L) << 48
                        | (var4[2] & 255L) << 40
                        | (var4[3] & 255L) << 32
                        | (var4[4] & 255L) << 24
                        | (var4[5] & 255L) << 16
                        | (var4[6] & 255L) << 8
                        | var4[7] & 255L;
                     byte var23 = -1;
                     rsXSP = var27;
                     return;
                  }
                  break;
               default:
                  var19[var10001] = var31;
                  if (var9 < var12) {
                     continue label33;
                  }

                  var11 = "´9\u0088\u0094\\»«ø\u009fìb|\u0094~¯º";
                  var12 = "´9\u0088\u0094\\»«ø\u009fìb|\u0094~¯º".length();
                  var9 = 0;
            }

            byte var22 = var9;
            var9 += 8;
            var14 = var11.substring(var22, var9).getBytes("ISO-8859-1");
            var19 = var13;
            var10001 = var10++;
            var24 = (var14[0] & 255L) << 56
               | (var14[1] & 255L) << 48
               | (var14[2] & 255L) << 40
               | (var14[3] & 255L) << 32
               | (var14[4] & 255L) << 24
               | (var14[5] & 255L) << 16
               | (var14[6] & 255L) << 8
               | var14[7] & 255L;
            var28 = 0;
         }
      }
   }

   @Override
   public boolean MH() {
      return rD.dmg().dcQ();
   }

   private void Nd(lC var1, mG var2, IMediaSession var3, float var4, float var5, float var6) {
      lc var7 = this.Nf(var4, var5);
      lc var8 = this.Ng(var4, var5);
      lc var9 = this.Nh(var4, var5);
      class_241 var10 = rm.dis();
      this.IACKo.dhc(var7.bXD(var10.field_1343, var10.field_1342));
      this.GBFJq.dhc(var8.bXD(var10.field_1343, var10.field_1342));
      this.CAJMs.dhc(var9.bXD(var10.field_1343, var10.field_1342));
      var1.ceq(lf.RJfxY, var7, var2.coa((255.0F - 100.0F * this.IACKo.dhj()) * var6));
      float var11 = this.PgRze.dhj();
      float var12 = var8.bXF() + var8.bXH() / 2.0F;
      float var13 = var8.bXG() + var8.bXI() / 2.0F;
      var1.ceV();
      var1.cfb(var12, var13, 90.0F * var11);
      jH.bId(var1, var12, var13, 1.0F - var11);
      var1.ceq(lf.bLlHc, var8, var2.coa((255.0F * (1.0F - var11) - 100.0F * this.GBFJq.dhj()) * var6));
      jH.bIf();
      var1.ceW();
      var1.ceV();
      var1.cfb(var12, var13, -90.0F + 90.0F * var11);
      jH.bId(var1, var12, var13, var11);
      var1.ceq(lf.wJqgL, var8, var2.coa((255.0F * var11 - 100.0F * this.GBFJq.dhj()) * var6));
      jH.bIf();
      var1.ceW();
      var1.ceq(lf.xesLS, var9, var2.coa((255.0F - 100.0F * this.CAJMs.dhj()) * var6));
   }

   private static int Nl(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = Nk(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   @Override
   public void MG(lC param1, ii param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/bL.PysbJ J
      // 003: ldc2_w 58623073716668
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/rD.dlK ()Lsixtwo/cq;
      // 00b: invokevirtual sixtwo/cq.RC ()Lsixtwo/bU;
      // 00e: astore 6
      // 010: aload 6
      // 012: invokevirtual sixtwo/bU.RW ()F
      // 015: fstore 7
      // 017: invokestatic sixtwo/bJ.MN ()Z
      // 01a: aload 6
      // 01c: invokevirtual sixtwo/bU.RX ()F
      // 01f: fstore 8
      // 021: invokestatic sixtwo/rD.dmg ()Lsixtwo/qO;
      // 024: astore 9
      // 026: istore 5
      // 028: aload 9
      // 02a: invokevirtual sixtwo/qO.dcS ()Lmedia/IMediaSession;
      // 02d: astore 10
      // 02f: aload 9
      // 031: invokevirtual sixtwo/qO.dcQ ()Z
      // 034: ifne 03c
      // 037: return
      // 038: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03b: athrow
      // 03c: aload 2
      // 03d: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 040: astore 11
      // 042: aload 10
      // 044: invokeinterface media/IMediaSession.media ()Lmedia/MediaInfo; 1
      // 049: astore 12
      // 04b: getstatic sixtwo/lE.WTzbi Lsixtwo/lj;
      // 04e: ldc 7.0
      // 050: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 053: astore 13
      // 055: ldc 164.0
      // 057: fstore 14
      // 059: ldc 80.0
      // 05b: fstore 15
      // 05d: ldc 100.0
      // 05f: fstore 16
      // 061: ldc 32.0
      // 063: aload 13
      // 065: aload 12
      // 067: invokevirtual media/MediaInfo.title ()Ljava/lang/String;
      // 06a: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 06d: fadd
      // 06e: fstore 17
      // 070: aload 0
      // 071: getfield sixtwo/bL.fGWTH Lsixtwo/bT;
      // 074: aload 6
      // 076: invokevirtual sixtwo/bU.Oa ()Z
      // 079: ifeq 085
      // 07c: fload 14
      // 07e: goto 08c
      // 081: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 084: athrow
      // 085: fload 17
      // 087: fload 16
      // 089: invokestatic java/lang/Math.min (FF)F
      // 08c: aload 6
      // 08e: invokevirtual sixtwo/bU.Oa ()Z
      // 091: ifeq 09d
      // 094: fload 15
      // 096: goto 0a0
      // 099: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09c: athrow
      // 09d: ldc_w 15.0
      // 0a0: invokevirtual sixtwo/bT.NU (FF)V
      // 0a3: aload 6
      // 0a5: invokevirtual sixtwo/bU.Ob ()Lsixtwo/rk;
      // 0a8: invokevirtual sixtwo/rk.dhj ()F
      // 0ab: fstore 18
      // 0ad: ldc_w 4.0
      // 0b0: ldc_w 6.0
      // 0b3: fload 18
      // 0b5: fmul
      // 0b6: fadd
      // 0b7: fstore 19
      // 0b9: ldc 7.0
      // 0bb: ldc_w 19.0
      // 0be: fload 18
      // 0c0: fmul
      // 0c1: fadd
      // 0c2: fstore 20
      // 0c4: fload 8
      // 0c6: aload 6
      // 0c8: invokevirtual sixtwo/bU.Oa ()Z
      // 0cb: ifeq 0d7
      // 0ce: fload 19
      // 0d0: goto 0e4
      // 0d3: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d6: athrow
      // 0d7: fload 20
      // 0d9: aload 6
      // 0db: invokevirtual sixtwo/bU.NZ ()Lsixtwo/bT;
      // 0de: getfield sixtwo/bT.Joctj F
      // 0e1: invokestatic sixtwo/jf.bAH (FF)F
      // 0e4: fadd
      // 0e5: fstore 21
      // 0e7: aload 1
      // 0e8: aload 9
      // 0ea: invokevirtual sixtwo/qO.dcK ()Lnet/minecraft/class_1044;
      // 0ed: fload 7
      // 0ef: fload 19
      // 0f1: fadd
      // 0f2: ldc_w 10.0
      // 0f5: fsub
      // 0f6: ldc_w 10.0
      // 0f9: aload 0
      // 0fa: getfield sixtwo/bL.dExGi Lsixtwo/rk;
      // 0fd: invokevirtual sixtwo/rk.dhj ()F
      // 100: fmul
      // 101: fadd
      // 102: fload 21
      // 104: fload 20
      // 106: fload 20
      // 108: fconst_1
      // 109: ldc_w 4.0
      // 10c: fload 18
      // 10e: fmul
      // 10f: fadd
      // 110: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 113: invokevirtual sixtwo/lC.cee (Lnet/minecraft/class_1044;FFFFLsixtwo/ld;)V
      // 116: aload 1
      // 117: aload 13
      // 119: aload 12
      // 11b: invokevirtual media/MediaInfo.title ()Ljava/lang/String;
      // 11e: fload 7
      // 120: ldc_w 5.0
      // 123: fsub
      // 124: ldc_w 10.0
      // 127: aload 0
      // 128: getfield sixtwo/bL.dExGi Lsixtwo/rk;
      // 12b: invokevirtual sixtwo/rk.dhj ()F
      // 12e: fmul
      // 12f: fadd
      // 130: ldc_w 10.0
      // 133: aload 0
      // 134: getfield sixtwo/bL.dExGi Lsixtwo/rk;
      // 137: invokevirtual sixtwo/rk.dhj ()F
      // 13a: fmul
      // 13b: fadd
      // 13c: ldc_w 29.0
      // 13f: fload 18
      // 141: fmul
      // 142: fadd
      // 143: fload 8
      // 145: ldc_w 5.0
      // 148: fadd
      // 149: ldc_w 11.0
      // 14c: fload 18
      // 14e: fmul
      // 14f: fadd
      // 150: aload 11
      // 152: ldc_w 0.3
      // 155: ldc_w 0.7
      // 158: aload 6
      // 15a: invokevirtual sixtwo/bU.Oa ()Z
      // 15d: ifeq 16d
      // 160: fload 14
      // 162: ldc_w 30.0
      // 165: fsub
      // 166: goto 173
      // 169: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 16c: athrow
      // 16d: fload 16
      // 16f: ldc_w 5.0
      // 172: fadd
      // 173: invokevirtual sixtwo/lC.ceH (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;FFF)V
      // 176: invokestatic sixtwo/rD.dmg ()Lsixtwo/qO;
      // 179: invokevirtual sixtwo/qO.dcU ()Lsixtwo/mG;
      // 17c: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 17f: ldc_w 0.2
      // 182: invokevirtual sixtwo/mG.coc (Lsixtwo/mG;F)Lsixtwo/mG;
      // 185: astore 22
      // 187: aload 0
      // 188: aload 1
      // 189: iload 5
      // 18b: ifne 1b8
      // 18e: aload 22
      // 190: aload 12
      // 192: fload 7
      // 194: fload 8
      // 196: fload 18
      // 198: fload 17
      // 19a: fload 14
      // 19c: fload 16
      // 19e: invokevirtual sixtwo/bL.Nb (Lsixtwo/lC;Lsixtwo/mG;Lmedia/MediaInfo;FFFFFF)V
      // 1a1: fload 18
      // 1a3: fconst_0
      // 1a4: fcmpl
      // 1a5: ifle 1c9
      // 1a8: goto 1af
      // 1ab: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1ae: athrow
      // 1af: aload 0
      // 1b0: aload 1
      // 1b1: goto 1b8
      // 1b4: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b7: athrow
      // 1b8: aload 10
      // 1ba: aload 12
      // 1bc: aload 11
      // 1be: fload 7
      // 1c0: fload 8
      // 1c2: fload 14
      // 1c4: fload 18
      // 1c6: invokevirtual sixtwo/bL.MZ (Lsixtwo/lC;Lmedia/IMediaSession;Lmedia/MediaInfo;Lsixtwo/mG;FFFF)V
      // 1c9: return
   }

   @Override
   public mG MI() {
      return rD.dmg().dcU();
   }

   private lc Nf(float var1, float var2) {
      return new lc(var1 + 40.0F, var2 + 55.0F, 16.0F, 16.0F);
   }

   private static int Nk(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 23717;
      if (KhHGj[var3] == null) {
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
         long var5 = njGgj[var3];
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
         Object[] var9 = (Object[])jOYJZ.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               jOYJZ.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/bL", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         KhHGj[var3] = var15;
      }

      return KhHGj[var3];
   }

   private lc Nh(float var1, float var2) {
      return new lc(var1 + 104.0F, var2 + 55.0F, 16.0F, 16.0F);
   }

   private lc Ng(float var1, float var2) {
      return new lc(var1 + 72.0F, var2 + 55.0F, 16.0F, 16.0F);
   }

   private void Nc(boolean param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bL.PysbJ J
      // 03: ldc2_w 137909690547924
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/bJ.MN ()Z
      // 0b: istore 4
      // 0d: iload 1
      // 0e: iload 4
      // 10: ifne 35
      // 13: ifne 2b
      // 16: goto 1d
      // 19: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 0
      // 1e: getfield sixtwo/bL.CkuYo [F
      // 21: ldc 0.35
      // 23: invokestatic java/util/Arrays.fill ([FF)V
      // 26: return
      // 27: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: aload 0
      // 2c: getfield sixtwo/bL.VSvxM Lsixtwo/mT;
      // 2f: getstatic sixtwo/bL.rsXSP J
      // 32: invokevirtual sixtwo/mT.cpE (J)Z
      // 35: iload 4
      // 37: ifne 46
      // 3a: ifne 45
      // 3d: goto 44
      // 40: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 43: athrow
      // 44: return
      // 45: bipush 0
      // 46: istore 5
      // 48: iload 5
      // 4a: aload 0
      // 4b: getfield sixtwo/bL.CkuYo [F
      // 4e: arraylength
      // 4f: if_icmpge 6b
      // 52: aload 0
      // 53: getfield sixtwo/bL.CkuYo [F
      // 56: iload 5
      // 58: invokestatic java/lang/Math.random ()D
      // 5b: d2f
      // 5c: ldc 0.35
      // 5e: fconst_1
      // 5f: invokestatic net/minecraft/class_3532.method_16439 (FFF)F
      // 62: fastore
      // 63: iinc 5 1
      // 66: iload 4
      // 68: ifeq 48
      // 6b: return
   }

   private void Na(lC var1, mG var2, MediaInfo var3, float var4, float var5, float var6, float var7) {
      lq var8 = lE.SVnNc.bYM(6.0F);
      String var9 = jf.bAN(var3.position());
      long var10 = Math.max(0L, var3.duration() - var3.position());
      String var12 = "-" + jf.bAN(var10);
      float var13 = 110.0F;
      float var14 = 3.0F;
      float var15 = var4 + jf.bAH(var13, var6);
      float var16 = var5 + 45.0F;
      mG var17 = var2.coa(63.75F * var7);
      var1.cdg(var15, var16, var13, var14, ld.all(0.5F), var17);
      this.UzjcR.dhd(Math.min(1.0F, (float)var3.position() / (float)var3.duration()));
      float var18 = var13 * this.UzjcR.dhj();
      mG var19 = var2.coa(150.0F * var7);
      var1.cdg(var15, var16, var18, var14, ld.all(0.5F), var19);
      mG var20 = var2.cob(0.5F * var7);
      var1.cez(var8, var9, var15 - var8.cao(var9) - 3.0F, var16 - 0.75F, var20);
      var1.cez(var8, var12, var15 + var13 + 3.0F, var16 - 0.75F, var20);
   }

   private void Nb(lC var1, mG var2, MediaInfo var3, float var4, float var5, float var6, float var7, float var8, float var9) {
      long var10 = PysbJ ^ 61757052823117L;
      int var10000 = bJ.MN();
      this.Nc(var3.playing());
      kW var13 = new kW(var2.cof(), var2);
      float var14 = 1.2F;
      boolean var12 = (boolean)var10000;
      float var15 = 7.0F;
      float var16 = 1.0F;

      label32: {
         label31: {
            try {
               float var30;
               var10000 = (var30 = var6 - 0.7F) == 0.0F ? 0 : (var30 < 0.0F ? -1 : 1);
               if (var12) {
                  break label32;
               }

               if (var10000 > 0) {
                  break label31;
               }
            } catch (MatchException var28) {
               throw Nj(var28);
            }

            var10000 = 4;
            break label32;
         }

         var10000 = Nm<"b">(19958, 1698497213403012217L ^ var10);
      }

      int var17 = var10000;
      float var18 = var14 * var17 + (var17 - 1) * var16;
      float var19 = 5.0F - 5.0F * var6;
      float var20 = var4 + mZ.csl(Math.min(var7, var9), var8 - var18, var6) - var18 * this.dExGi.dhj() - var19;
      int var21 = 0;

      while (var21 < var17) {
         this.pBlmF[var21].dhq(Nm<"b">(27304, 2774504466802719549L ^ var10));
         float var22 = this.pBlmF[var21].dhd(this.CkuYo[var21]);
         float var23 = var15 * var22;
         float var24 = var5 + 5.0F + 11.0F * var6;
         float var25 = var24 + 3.0F;
         float var26 = var20 + var21 * (var14 + var16);
         float var27 = var25 - var23 / 2.0F;
         var1.cdP(var26, var27, var14, var23, ld.all(0.25F), var13, 0.5F);
         var21++;
         if (var12) {
            break;
         }
      }
   }

   private static MatchException Nj(MatchException var0) {
      return var0;
   }

   private lc Ni(float var1, float var2) {
      return new lc(var1 + 136.0F, var2 + 59.0F, 8.0F, 8.0F);
   }

   private void MZ(lC param1, IMediaSession param2, MediaInfo param3, mG param4, float param5, float param6, float param7, float param8) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/bL.PysbJ J
      // 003: ldc2_w 31995452235836
      // 006: lxor
      // 007: lstore 9
      // 009: invokestatic sixtwo/bJ.MM ()Z
      // 00c: istore 11
      // 00e: aload 0
      // 00f: getfield sixtwo/bL.PgRze Lsixtwo/rk;
      // 012: aload 3
      // 013: invokevirtual media/MediaInfo.playing ()Z
      // 016: ifeq 021
      // 019: fconst_1
      // 01a: goto 022
      // 01d: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 020: athrow
      // 021: fconst_0
      // 022: invokevirtual sixtwo/rk.dhd (F)F
      // 025: pop
      // 026: fload 5
      // 028: ldc_w 20.0
      // 02b: fadd
      // 02c: ldc_w 24.0
      // 02f: fload 8
      // 031: fmul
      // 032: fadd
      // 033: fstore 12
      // 035: fload 6
      // 037: ldc_w 5.0
      // 03a: fadd
      // 03b: ldc_w 19.0
      // 03e: fload 8
      // 040: fmul
      // 041: fadd
      // 042: fstore 13
      // 044: aload 1
      // 045: getstatic sixtwo/lE.joxgd Lsixtwo/lj;
      // 048: ldc 7.0
      // 04a: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 04d: aload 3
      // 04e: invokevirtual media/MediaInfo.artist ()Ljava/lang/String;
      // 051: fload 12
      // 053: fload 13
      // 055: aload 4
      // 057: ldc_w 0.7
      // 05a: fload 8
      // 05c: fmul
      // 05d: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 060: ldc_w 0.3
      // 063: ldc_w 0.7
      // 066: fload 7
      // 068: ldc_w 34.0
      // 06b: fsub
      // 06c: invokevirtual sixtwo/lC.ceH (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;FFF)V
      // 06f: aload 0
      // 070: aload 1
      // 071: aload 4
      // 073: aload 3
      // 074: fload 5
      // 076: fload 6
      // 078: fload 7
      // 07a: fload 8
      // 07c: invokevirtual sixtwo/bL.Na (Lsixtwo/lC;Lsixtwo/mG;Lmedia/MediaInfo;FFFF)V
      // 07f: aload 0
      // 080: aload 1
      // 081: aload 4
      // 083: aload 2
      // 084: fload 5
      // 086: fload 6
      // 088: fload 8
      // 08a: invokevirtual sixtwo/bL.Nd (Lsixtwo/lC;Lsixtwo/mG;Lmedia/IMediaSession;FFF)V
      // 08d: aload 0
      // 08e: fload 5
      // 090: fload 6
      // 092: invokevirtual sixtwo/bL.Ni (FF)Lsixtwo/lc;
      // 095: astore 14
      // 097: iload 11
      // 099: ifeq 0de
      // 09c: aload 2
      // 09d: invokeinterface media/IMediaSession.getCycleType ()I 1
      // 0a2: lookupswitch 100 2 1 30 2 65
      // 0bc: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0bf: athrow
      // 0c0: aload 1
      // 0c1: getstatic sixtwo/lf.PzeJx Lsixtwo/lf;
      // 0c4: aload 14
      // 0c6: aload 0
      // 0c7: getfield sixtwo/bL.jGMUW Lsixtwo/ri;
      // 0ca: aload 4
      // 0cc: fload 8
      // 0ce: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 0d1: invokevirtual sixtwo/ri.dfT (Lsixtwo/mG;)Lsixtwo/mG;
      // 0d4: invokevirtual sixtwo/lC.ceq (Lsixtwo/lf;Lsixtwo/lc;Lsixtwo/mG;)V
      // 0d7: goto 0de
      // 0da: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0dd: athrow
      // 0de: iload 11
      // 0e0: ifne 128
      // 0e3: aload 1
      // 0e4: getstatic sixtwo/lf.QZzTA Lsixtwo/lf;
      // 0e7: aload 14
      // 0e9: aload 0
      // 0ea: getfield sixtwo/bL.jGMUW Lsixtwo/ri;
      // 0ed: aload 4
      // 0ef: fload 8
      // 0f1: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 0f4: invokevirtual sixtwo/ri.dfT (Lsixtwo/mG;)Lsixtwo/mG;
      // 0f7: invokevirtual sixtwo/lC.ceq (Lsixtwo/lf;Lsixtwo/lc;Lsixtwo/mG;)V
      // 0fa: iload 11
      // 0fc: ifne 128
      // 0ff: goto 106
      // 102: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 105: athrow
      // 106: aload 1
      // 107: getstatic sixtwo/lf.PzeJx Lsixtwo/lf;
      // 10a: aload 14
      // 10c: aload 0
      // 10d: getfield sixtwo/bL.jGMUW Lsixtwo/ri;
      // 110: aload 4
      // 112: ldc_w 0.5
      // 115: fload 8
      // 117: fmul
      // 118: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 11b: invokevirtual sixtwo/ri.dfT (Lsixtwo/mG;)Lsixtwo/mG;
      // 11e: invokevirtual sixtwo/lC.ceq (Lsixtwo/lf;Lsixtwo/lc;Lsixtwo/mG;)V
      // 121: goto 128
      // 124: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 127: athrow
      // 128: return
   }

   private static CallSite Nm(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Nl".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bL" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   @Override
   public void Ne(double param1, double param3, mA param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/bL.PysbJ J
      // 003: ldc2_w 65835992673172
      // 006: lxor
      // 007: lstore 6
      // 009: invokestatic sixtwo/bJ.MM ()Z
      // 00c: invokestatic sixtwo/rD.dmg ()Lsixtwo/qO;
      // 00f: invokevirtual sixtwo/qO.dcS ()Lmedia/IMediaSession;
      // 012: astore 9
      // 014: istore 8
      // 016: aload 9
      // 018: ifnonnull 020
      // 01b: return
      // 01c: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: invokestatic sixtwo/rD.dlK ()Lsixtwo/cq;
      // 023: invokevirtual sixtwo/cq.RC ()Lsixtwo/bU;
      // 026: astore 10
      // 028: aload 10
      // 02a: invokevirtual sixtwo/bU.RW ()F
      // 02d: fstore 11
      // 02f: aload 10
      // 031: invokevirtual sixtwo/bU.RX ()F
      // 034: fstore 12
      // 036: aload 0
      // 037: fload 11
      // 039: fload 12
      // 03b: invokevirtual sixtwo/bL.Nf (FF)Lsixtwo/lc;
      // 03e: dload 1
      // 03f: dload 3
      // 040: invokevirtual sixtwo/lc.bXD (DD)Z
      // 043: iload 8
      // 045: ifeq 06b
      // 048: ifeq 05e
      // 04b: goto 052
      // 04e: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 051: athrow
      // 052: aload 9
      // 054: invokeinterface media/IMediaSession.previous ()V 1
      // 059: return
      // 05a: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05d: athrow
      // 05e: aload 0
      // 05f: fload 11
      // 061: fload 12
      // 063: invokevirtual sixtwo/bL.Ng (FF)Lsixtwo/lc;
      // 066: dload 1
      // 067: dload 3
      // 068: invokevirtual sixtwo/lc.bXD (DD)Z
      // 06b: iload 8
      // 06d: ifeq 093
      // 070: ifeq 086
      // 073: goto 07a
      // 076: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 079: athrow
      // 07a: aload 9
      // 07c: invokeinterface media/IMediaSession.playPause ()V 1
      // 081: return
      // 082: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 085: athrow
      // 086: aload 0
      // 087: fload 11
      // 089: fload 12
      // 08b: invokevirtual sixtwo/bL.Nh (FF)Lsixtwo/lc;
      // 08e: dload 1
      // 08f: dload 3
      // 090: invokevirtual sixtwo/lc.bXD (DD)Z
      // 093: iload 8
      // 095: ifeq 0bb
      // 098: ifeq 0ae
      // 09b: goto 0a2
      // 09e: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a1: athrow
      // 0a2: aload 9
      // 0a4: invokeinterface media/IMediaSession.next ()V 1
      // 0a9: return
      // 0aa: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ad: athrow
      // 0ae: aload 0
      // 0af: fload 11
      // 0b1: fload 12
      // 0b3: invokevirtual sixtwo/bL.Ni (FF)Lsixtwo/lc;
      // 0b6: dload 1
      // 0b7: dload 3
      // 0b8: invokevirtual sixtwo/lc.bXD (DD)Z
      // 0bb: iload 8
      // 0bd: ifeq 0dd
      // 0c0: ifeq 12e
      // 0c3: goto 0ca
      // 0c6: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c9: athrow
      // 0ca: aload 9
      // 0cc: invokeinterface media/IMediaSession.swapCycle ()V 1
      // 0d1: aload 9
      // 0d3: instanceof media/impl/win/WindowsMediaSession
      // 0d6: goto 0dd
      // 0d9: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0dc: athrow
      // 0dd: iload 8
      // 0df: ifeq 10e
      // 0e2: ifeq 102
      // 0e5: goto 0ec
      // 0e8: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0eb: athrow
      // 0ec: aload 9
      // 0ee: invokeinterface media/IMediaSession.getCycleType ()I 1
      // 0f3: invokestatic media/impl/win/WindowsMediaSession.setCycle (I)V
      // 0f6: iload 8
      // 0f8: ifne 12e
      // 0fb: goto 102
      // 0fe: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 101: athrow
      // 102: aload 9
      // 104: instanceof media/impl/macos/MacOSMediaSession
      // 107: goto 10e
      // 10a: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 10d: athrow
      // 10e: iload 8
      // 110: ifeq 12b
      // 113: ifeq 12e
      // 116: goto 11d
      // 119: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 11c: athrow
      // 11d: aload 9
      // 11f: invokeinterface media/IMediaSession.getCycleType ()I 1
      // 124: goto 12b
      // 127: invokestatic sixtwo/bL.Nj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 12a: athrow
      // 12b: invokestatic media/impl/macos/MacOSMediaSession.setCycle (I)V
      // 12e: return
   }
}
