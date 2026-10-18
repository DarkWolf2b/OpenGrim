package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Random;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import media.IMediaSession;
import net.minecraft.class_1011;
import net.minecraft.class_1044;

public class qO {
   private final Thread dZNWF;
   private volatile IMediaSession Nbypb;
   private volatile byte[] sNQdS;
   private mG ynvHN;
   private final Map<Integer, lv> pIWlK;
   private final Map<Integer, mG> AfCNN;
   private String PBdhi;
   private String InsIP;
   private static final long kCZlV = gb.aYR(5168238402007549606L, 856602005683921272L, MethodHandles.lookup().lookupClass()).a(191905785319103L);
   private static final String[] EKyPO;
   private static final String[] EYVen;
   private static final Map xmkNH = new HashMap(13);
   private static final long[] NHnxq;
   private static final Integer[] iJsds;
   private static final Map CKnfM;

   public static mG dcM(class_1011 param0, int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/qO.kCZlV J
      // 003: ldc2_w 548161353570
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/qL.dcb ()Z
      // 00b: aload 0
      // 00c: invokevirtual net/minecraft/class_1011.method_4307 ()I
      // 00f: istore 5
      // 011: aload 0
      // 012: invokevirtual net/minecraft/class_1011.method_4323 ()I
      // 015: istore 6
      // 017: istore 4
      // 019: new java/util/ArrayList
      // 01c: dup
      // 01d: invokespecial java/util/ArrayList.<init> ()V
      // 020: astore 7
      // 022: bipush 0
      // 023: istore 8
      // 025: iload 8
      // 027: iload 6
      // 029: if_icmpge 126
      // 02c: bipush 0
      // 02d: iload 4
      // 02f: ifeq 12d
      // 032: istore 9
      // 034: iload 9
      // 036: iload 5
      // 038: if_icmpge 11e
      // 03b: iload 9
      // 03d: iload 8
      // 03f: iload 5
      // 041: imul
      // 042: iadd
      // 043: iload 1
      // 044: irem
      // 045: iload 4
      // 047: ifeq 027
      // 04a: iload 4
      // 04c: ifeq 064
      // 04f: ifeq 05c
      // 052: goto 059
      // 055: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 058: athrow
      // 059: goto 116
      // 05c: aload 0
      // 05d: iload 9
      // 05f: iload 8
      // 061: invokevirtual net/minecraft/class_1011.method_61940 (II)I
      // 064: istore 10
      // 066: iload 10
      // 068: sipush 26187
      // 06b: ldc2_w 3758299816006209743
      // 06e: lload 2
      // 06f: lxor
      // 070: invokedynamic m (IJ)I bsm=sixtwo/qO.ddj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 075: ishr
      // 076: sipush 23238
      // 079: ldc2_w 7219642490713730127
      // 07c: lload 2
      // 07d: lxor
      // 07e: invokedynamic m (IJ)I bsm=sixtwo/qO.ddj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 083: iand
      // 084: istore 11
      // 086: iload 11
      // 088: sipush 12364
      // 08b: ldc2_w 7371869244515911367
      // 08e: lload 2
      // 08f: lxor
      // 090: invokedynamic m (IJ)I bsm=sixtwo/qO.ddj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 095: iload 4
      // 097: ifeq 0c4
      // 09a: if_icmpge 0a7
      // 09d: goto 0a4
      // 0a0: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0a3: athrow
      // 0a4: goto 116
      // 0a7: iload 10
      // 0a9: sipush 14710
      // 0ac: ldc2_w 7906056273903095806
      // 0af: lload 2
      // 0b0: lxor
      // 0b1: invokedynamic m (IJ)I bsm=sixtwo/qO.ddj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0b6: ishr
      // 0b7: sipush 6704
      // 0ba: ldc2_w 6336275101270355132
      // 0bd: lload 2
      // 0be: lxor
      // 0bf: invokedynamic m (IJ)I bsm=sixtwo/qO.ddj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0c4: iand
      // 0c5: istore 12
      // 0c7: iload 10
      // 0c9: sipush 24280
      // 0cc: ldc2_w 4217883200030206047
      // 0cf: lload 2
      // 0d0: lxor
      // 0d1: invokedynamic m (IJ)I bsm=sixtwo/qO.ddj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0d6: ishr
      // 0d7: sipush 6704
      // 0da: ldc2_w 6336275101270355132
      // 0dd: lload 2
      // 0de: lxor
      // 0df: invokedynamic m (IJ)I bsm=sixtwo/qO.ddj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0e4: iand
      // 0e5: istore 13
      // 0e7: iload 10
      // 0e9: sipush 6704
      // 0ec: ldc2_w 6336275101270355132
      // 0ef: lload 2
      // 0f0: lxor
      // 0f1: invokedynamic m (IJ)I bsm=sixtwo/qO.ddj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0f6: iand
      // 0f7: istore 14
      // 0f9: aload 7
      // 0fb: bipush 3
      // 0fc: newarray 6
      // 0fe: dup
      // 0ff: bipush 0
      // 100: iload 12
      // 102: i2f
      // 103: fastore
      // 104: dup
      // 105: bipush 1
      // 106: iload 13
      // 108: i2f
      // 109: fastore
      // 10a: dup
      // 10b: bipush 2
      // 10c: iload 14
      // 10e: i2f
      // 10f: fastore
      // 110: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 115: pop
      // 116: iinc 9 1
      // 119: iload 4
      // 11b: ifne 034
      // 11e: iinc 8 1
      // 121: iload 4
      // 123: ifne 025
      // 126: aload 7
      // 128: invokeinterface java/util/List.isEmpty ()Z 1
      // 12d: iload 4
      // 12f: ifeq 164
      // 132: ifeq 14d
      // 135: goto 13c
      // 138: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 13b: athrow
      // 13c: ldc_w 230.0
      // 13f: ldc_w 230.0
      // 142: ldc_w 230.0
      // 145: invokestatic sixtwo/mG.cnP (FFF)Lsixtwo/mG;
      // 148: areturn
      // 149: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 14c: athrow
      // 14d: sipush 24280
      // 150: ldc2_w 4217883200030206047
      // 153: lload 2
      // 154: lxor
      // 155: invokedynamic m (IJ)I bsm=sixtwo/qO.ddj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 15a: aload 7
      // 15c: invokeinterface java/util/List.size ()I 1
      // 161: invokestatic java/lang/Math.min (II)I
      // 164: istore 8
      // 166: new java/util/Random
      // 169: dup
      // 16a: lconst_1
      // 16b: invokespecial java/util/Random.<init> (J)V
      // 16e: astore 9
      // 170: iload 8
      // 172: bipush 3
      // 173: multianewarray 423 2
      // 177: astore 10
      // 179: bipush 0
      // 17a: istore 11
      // 17c: iload 11
      // 17e: iload 8
      // 180: if_icmpge 1ac
      // 183: aload 10
      // 185: iload 11
      // 187: aload 7
      // 189: aload 9
      // 18b: aload 7
      // 18d: invokeinterface java/util/List.size ()I 1
      // 192: invokevirtual java/util/Random.nextInt (I)I
      // 195: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 19a: checkcast [F
      // 19d: invokevirtual [F.clone ()Ljava/lang/Object;
      // 1a0: checkcast [F
      // 1a3: aastore
      // 1a4: iinc 11 1
      // 1a7: iload 4
      // 1a9: ifne 17c
      // 1ac: iload 8
      // 1ae: newarray 10
      // 1b0: astore 11
      // 1b2: bipush 0
      // 1b3: istore 12
      // 1b5: iload 12
      // 1b7: sipush 1606
      // 1ba: ldc2_w 234547477664641225
      // 1bd: lload 2
      // 1be: lxor
      // 1bf: invokedynamic m (IJ)I bsm=sixtwo/qO.ddj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1c4: if_icmpge 357
      // 1c7: aload 11
      // 1c9: bipush 0
      // 1ca: invokestatic java/util/Arrays.fill ([II)V
      // 1cd: iload 8
      // 1cf: bipush 3
      // 1d0: multianewarray 423 2
      // 1d4: astore 13
      // 1d6: aload 7
      // 1d8: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 1dd: astore 14
      // 1df: aload 14
      // 1e1: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 1e6: ifeq 2ee
      // 1e9: aload 14
      // 1eb: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 1f0: checkcast [F
      // 1f3: astore 15
      // 1f5: bipush 0
      // 1f6: istore 16
      // 1f8: aload 15
      // 1fa: bipush 0
      // 1fb: faload
      // 1fc: aload 10
      // 1fe: bipush 0
      // 1ff: aaload
      // 200: bipush 0
      // 201: faload
      // 202: fsub
      // 203: aload 15
      // 205: bipush 0
      // 206: faload
      // 207: aload 10
      // 209: bipush 0
      // 20a: aaload
      // 20b: bipush 0
      // 20c: faload
      // 20d: fsub
      // 20e: fmul
      // 20f: aload 15
      // 211: bipush 1
      // 212: faload
      // 213: aload 10
      // 215: bipush 0
      // 216: aaload
      // 217: bipush 1
      // 218: faload
      // 219: fsub
      // 21a: aload 15
      // 21c: bipush 1
      // 21d: faload
      // 21e: aload 10
      // 220: bipush 0
      // 221: aaload
      // 222: bipush 1
      // 223: faload
      // 224: fsub
      // 225: fmul
      // 226: fadd
      // 227: aload 15
      // 229: bipush 2
      // 22a: faload
      // 22b: aload 10
      // 22d: bipush 0
      // 22e: aaload
      // 22f: bipush 2
      // 230: faload
      // 231: fsub
      // 232: aload 15
      // 234: bipush 2
      // 235: faload
      // 236: aload 10
      // 238: bipush 0
      // 239: aaload
      // 23a: bipush 2
      // 23b: faload
      // 23c: fsub
      // 23d: fmul
      // 23e: fadd
      // 23f: fstore 17
      // 241: bipush 1
      // 242: iload 4
      // 244: ifeq 2ef
      // 247: istore 18
      // 249: iload 18
      // 24b: iload 8
      // 24d: if_icmpge 2b6
      // 250: aload 15
      // 252: bipush 0
      // 253: faload
      // 254: aload 10
      // 256: iload 18
      // 258: aaload
      // 259: bipush 0
      // 25a: faload
      // 25b: fsub
      // 25c: fstore 19
      // 25e: aload 15
      // 260: bipush 1
      // 261: faload
      // 262: aload 10
      // 264: iload 18
      // 266: aaload
      // 267: bipush 1
      // 268: faload
      // 269: fsub
      // 26a: fstore 20
      // 26c: aload 15
      // 26e: bipush 2
      // 26f: faload
      // 270: aload 10
      // 272: iload 18
      // 274: aaload
      // 275: bipush 2
      // 276: faload
      // 277: fsub
      // 278: fstore 21
      // 27a: fload 19
      // 27c: fload 19
      // 27e: fmul
      // 27f: fload 20
      // 281: fload 20
      // 283: fmul
      // 284: fadd
      // 285: fload 21
      // 287: fload 21
      // 289: fmul
      // 28a: fadd
      // 28b: fstore 22
      // 28d: iload 4
      // 28f: ifeq 2b1
      // 292: fload 22
      // 294: fload 17
      // 296: fcmpg
      // 297: iload 4
      // 299: ifeq 1e6
      // 29c: goto 2a3
      // 29f: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 2a2: athrow
      // 2a3: ifge 2ae
      // 2a6: fload 22
      // 2a8: fstore 17
      // 2aa: iload 18
      // 2ac: istore 16
      // 2ae: iinc 18 1
      // 2b1: iload 4
      // 2b3: ifne 249
      // 2b6: aload 11
      // 2b8: iload 16
      // 2ba: dup2
      // 2bb: iaload
      // 2bc: bipush 1
      // 2bd: iadd
      // 2be: iastore
      // 2bf: aload 13
      // 2c1: iload 16
      // 2c3: aaload
      // 2c4: bipush 0
      // 2c5: dup2
      // 2c6: faload
      // 2c7: aload 15
      // 2c9: bipush 0
      // 2ca: faload
      // 2cb: fadd
      // 2cc: fastore
      // 2cd: aload 13
      // 2cf: iload 16
      // 2d1: aaload
      // 2d2: bipush 1
      // 2d3: dup2
      // 2d4: faload
      // 2d5: aload 15
      // 2d7: bipush 1
      // 2d8: faload
      // 2d9: fadd
      // 2da: fastore
      // 2db: aload 13
      // 2dd: iload 16
      // 2df: aaload
      // 2e0: bipush 2
      // 2e1: dup2
      // 2e2: faload
      // 2e3: aload 15
      // 2e5: bipush 2
      // 2e6: faload
      // 2e7: fadd
      // 2e8: fastore
      // 2e9: iload 4
      // 2eb: ifne 1df
      // 2ee: bipush 0
      // 2ef: istore 14
      // 2f1: iload 14
      // 2f3: iload 8
      // 2f5: if_icmpge 34f
      // 2f8: aload 11
      // 2fa: iload 14
      // 2fc: iaload
      // 2fd: iload 4
      // 2ff: ifeq 1b7
      // 302: ifne 308
      // 305: goto 347
      // 308: aload 10
      // 30a: iload 14
      // 30c: aaload
      // 30d: bipush 0
      // 30e: aload 13
      // 310: iload 14
      // 312: aaload
      // 313: bipush 0
      // 314: faload
      // 315: aload 11
      // 317: iload 14
      // 319: iaload
      // 31a: i2f
      // 31b: fdiv
      // 31c: fastore
      // 31d: aload 10
      // 31f: iload 14
      // 321: aaload
      // 322: bipush 1
      // 323: aload 13
      // 325: iload 14
      // 327: aaload
      // 328: bipush 1
      // 329: faload
      // 32a: aload 11
      // 32c: iload 14
      // 32e: iaload
      // 32f: i2f
      // 330: fdiv
      // 331: fastore
      // 332: aload 10
      // 334: iload 14
      // 336: aaload
      // 337: bipush 2
      // 338: aload 13
      // 33a: iload 14
      // 33c: aaload
      // 33d: bipush 2
      // 33e: faload
      // 33f: aload 11
      // 341: iload 14
      // 343: iaload
      // 344: i2f
      // 345: fdiv
      // 346: fastore
      // 347: iinc 14 1
      // 34a: iload 4
      // 34c: ifne 2f1
      // 34f: iinc 12 1
      // 352: iload 4
      // 354: ifne 1b5
      // 357: ldc_w -1.0
      // 35a: fstore 12
      // 35c: aconst_null
      // 35d: astore 13
      // 35f: bipush 0
      // 360: istore 14
      // 362: iload 14
      // 364: iload 8
      // 366: if_icmpge 472
      // 369: aload 10
      // 36b: iload 14
      // 36d: aaload
      // 36e: astore 15
      // 370: aload 15
      // 372: bipush 0
      // 373: faload
      // 374: ldc_w 255.0
      // 377: fdiv
      // 378: fstore 16
      // 37a: aload 15
      // 37c: bipush 1
      // 37d: faload
      // 37e: ldc_w 255.0
      // 381: fdiv
      // 382: fstore 17
      // 384: aload 15
      // 386: bipush 2
      // 387: faload
      // 388: ldc_w 255.0
      // 38b: fdiv
      // 38c: fstore 18
      // 38e: fload 16
      // 390: fload 17
      // 392: fload 18
      // 394: invokestatic java/lang/Math.max (FF)F
      // 397: invokestatic java/lang/Math.max (FF)F
      // 39a: fstore 19
      // 39c: fload 16
      // 39e: fload 17
      // 3a0: fload 18
      // 3a2: invokestatic java/lang/Math.min (FF)F
      // 3a5: invokestatic java/lang/Math.min (FF)F
      // 3a8: fstore 20
      // 3aa: fload 19
      // 3ac: fload 20
      // 3ae: fsub
      // 3af: fstore 21
      // 3b1: fload 19
      // 3b3: fstore 22
      // 3b5: fload 19
      // 3b7: fconst_0
      // 3b8: iload 4
      // 3ba: ifeq 49c
      // 3bd: iload 4
      // 3bf: ifeq 3e0
      // 3c2: goto 3c9
      // 3c5: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 3c8: athrow
      // 3c9: fcmpl
      // 3ca: ifne 3dc
      // 3cd: goto 3d4
      // 3d0: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 3d3: athrow
      // 3d4: fconst_0
      // 3d5: goto 3e1
      // 3d8: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 3db: athrow
      // 3dc: fload 21
      // 3de: fload 19
      // 3e0: fdiv
      // 3e1: fstore 23
      // 3e3: fload 22
      // 3e5: ldc_w 0.15
      // 3e8: fcmpg
      // 3e9: iload 4
      // 3eb: ifeq 401
      // 3ee: ifge 3fb
      // 3f1: goto 3f8
      // 3f4: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 3f7: athrow
      // 3f8: goto 46a
      // 3fb: fload 22
      // 3fd: ldc_w 0.95
      // 400: fcmpl
      // 401: iload 4
      // 403: ifeq 419
      // 406: ifle 413
      // 409: goto 410
      // 40c: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 40f: athrow
      // 410: goto 46a
      // 413: fload 23
      // 415: ldc_w 0.18
      // 418: fcmpg
      // 419: iload 4
      // 41b: ifeq 430
      // 41e: ifge 42b
      // 421: goto 428
      // 424: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 427: athrow
      // 428: goto 46a
      // 42b: aload 11
      // 42d: iload 14
      // 42f: iaload
      // 430: i2f
      // 431: fstore 24
      // 433: fload 23
      // 435: ldc_w 0.6
      // 438: fmul
      // 439: fload 22
      // 43b: ldc_w 0.2
      // 43e: fmul
      // 43f: fadd
      // 440: fload 24
      // 442: f2d
      // 443: invokestatic java/lang/Math.sqrt (D)D
      // 446: d2f
      // 447: ldc_w 0.2
      // 44a: fmul
      // 44b: fadd
      // 44c: fstore 25
      // 44e: iload 4
      // 450: ifeq 46d
      // 453: fload 25
      // 455: fload 12
      // 457: fcmpl
      // 458: ifle 46a
      // 45b: goto 462
      // 45e: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 461: athrow
      // 462: fload 25
      // 464: fstore 12
      // 466: aload 15
      // 468: astore 13
      // 46a: iinc 14 1
      // 46d: iload 4
      // 46f: ifne 362
      // 472: aload 13
      // 474: iload 4
      // 476: ifeq 496
      // 479: ifnonnull 494
      // 47c: goto 483
      // 47f: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 482: athrow
      // 483: ldc_w 230.0
      // 486: ldc_w 230.0
      // 489: ldc_w 230.0
      // 48c: invokestatic sixtwo/mG.cnP (FFF)Lsixtwo/mG;
      // 48f: areturn
      // 490: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 493: athrow
      // 494: aload 13
      // 496: bipush 0
      // 497: faload
      // 498: aload 13
      // 49a: bipush 1
      // 49b: faload
      // 49c: aload 13
      // 49e: bipush 2
      // 49f: faload
      // 4a0: invokestatic sixtwo/mG.cnP (FFF)Lsixtwo/mG;
      // 4a3: areturn
   }

   public qO() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/qO.kCZlV J
      // 03: ldc2_w 27379028711513
      // 06: lxor
      // 07: lstore 1
      // 08: aload 0
      // 09: invokespecial java/lang/Object.<init> ()V
      // 0c: aload 0
      // 0d: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 10: putfield sixtwo/qO.ynvHN Lsixtwo/mG;
      // 13: aload 0
      // 14: new java/util/concurrent/ConcurrentHashMap
      // 17: dup
      // 18: invokespecial java/util/concurrent/ConcurrentHashMap.<init> ()V
      // 1b: putfield sixtwo/qO.pIWlK Ljava/util/Map;
      // 1e: aload 0
      // 1f: new java/util/concurrent/ConcurrentHashMap
      // 22: dup
      // 23: invokespecial java/util/concurrent/ConcurrentHashMap.<init> ()V
      // 26: putfield sixtwo/qO.AfCNN Ljava/util/Map;
      // 29: aload 0
      // 2a: ldc ""
      // 2c: putfield sixtwo/qO.PBdhi Ljava/lang/String;
      // 2f: invokestatic sixtwo/qL.dcc ()Z
      // 32: aload 0
      // 33: ldc ""
      // 35: putfield sixtwo/qO.InsIP Ljava/lang/String;
      // 38: istore 3
      // 39: invokestatic sixtwo/rt.dju ()Loshi/PlatformEnum;
      // 3c: getstatic oshi/PlatformEnum.WINDOWS Loshi/PlatformEnum;
      // 3f: if_acmpne 56
      // 42: sipush 7391
      // 45: ldc2_w 3759802519526540650
      // 48: lload 1
      // 49: lxor
      // 4a: invokedynamic m (IJ)I bsm=sixtwo/qO.ddj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 4f: goto 63
      // 52: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 55: athrow
      // 56: sipush 24318
      // 59: ldc2_w 6741418556907145032
      // 5c: lload 1
      // 5d: lxor
      // 5e: invokedynamic m (IJ)I bsm=sixtwo/qO.ddj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 63: istore 4
      // 65: aload 0
      // 66: new java/lang/Thread
      // 69: dup
      // 6a: aload 0
      // 6b: iload 4
      // 6d: invokedynamic run (Lsixtwo/qO;I)Ljava/lang/Runnable; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()V, sixtwo/qO.ddb (I)V, ()V ]
      // 72: invokespecial java/lang/Thread.<init> (Ljava/lang/Runnable;)V
      // 75: putfield sixtwo/qO.dZNWF Ljava/lang/Thread;
      // 78: aload 0
      // 79: getfield sixtwo/qO.dZNWF Ljava/lang/Thread;
      // 7c: bipush 1
      // 7d: invokevirtual java/lang/Thread.setDaemon (Z)V
      // 80: aload 0
      // 81: getfield sixtwo/qO.dZNWF Ljava/lang/Thread;
      // 84: invokevirtual java/lang/Thread.start ()V
      // 87: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 8a: ifnonnull a4
      // 8d: iload 3
      // 8e: ifeq a0
      // 91: goto 98
      // 94: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 97: athrow
      // 98: bipush 0
      // 99: goto a1
      // 9c: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 9f: athrow
      // a0: bipush 1
      // a1: invokestatic sixtwo/qL.dca (Z)V
      // a4: return
   }

   static {
      long var11 = kCZlV ^ 70379192303644L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[2];
      int var18 = 0;
      String var17 = "ô\bÆóeº\t\u00ad\u001c\u0014V\u000b¡XË\u0014àË\u0080!r¯p\u008d\u008aØ\u0001´wa\u0090×Z\u00ad\u0018\u008b¦9\u0012Ø(H\u0082è?AÙS?MJiç\u0017\bB\u001c+Å\u0092\u008fhÙw\n\u0097ö\u000b\u0014\u0090\u0013\u0086À@_8âù¶=F";
      int var19 = "ô\bÆóeº\t\u00ad\u001c\u0014V\u000b¡XË\u0014àË\u0080!r¯p\u008d\u008aØ\u0001´wa\u0090×Z\u00ad\u0018\u008b¦9\u0012Ø(H\u0082è?AÙS?MJiç\u0017\bB\u001c+Å\u0092\u008fhÙw\n\u0097ö\u000b\u0014\u0090\u0013\u0086À@_8âù¶=F"
         .length();
      char var16 = '(';
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = ddd(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            EKyPO = var20;
            EYVen = new String[2];
            CKnfM = new HashMap(13);
            Cipher var0;
            var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[11];
            int var3 = 0;
            String var4 = "àÝ\u0096|r\u009e[[úO\u008c\u0093Í@Ò\u0084\u0081·\u001eå¨Ûu\u0081Åç×X\u000eQ\b\u0089\u0093&\u0098\u0084IGFJòÃ¨(Æéä\u0014Ê\n?PZ\u009e\u0081\u001b°º\u0088vL\u0096Â Uf\u0010t\u008aj\u0095ñ";
            int var5 = "àÝ\u0096|r\u009e[[úO\u008c\u0093Í@Ò\u0084\u0081·\u001eå¨Ûu\u0081Åç×X\u000eQ\b\u0089\u0093&\u0098\u0084IGFJòÃ¨(Æéä\u0014Ê\n?PZ\u009e\u0081\u001b°º\u0088vL\u0096Â Uf\u0010t\u008aj\u0095ñ"
               .length();
            byte var2 = 0;

            label32:
            while (true) {
               var10001 = var2;
               var2 += 8;
               byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
               long[] var25 = var6;
               var10001 = var3++;
               long var33 = (var7[0] & 255L) << 56
                  | (var7[1] & 255L) << 48
                  | (var7[2] & 255L) << 40
                  | (var7[3] & 255L) << 32
                  | (var7[4] & 255L) << 24
                  | (var7[5] & 255L) << 16
                  | (var7[6] & 255L) << 8
                  | var7[7] & 255L;
               byte var36 = -1;

               while (true) {
                  long var8 = var33;
                  byte[] var10 = var0.doFinal(
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
                  long var38 = (var10[0] & 255L) << 56
                     | (var10[1] & 255L) << 48
                     | (var10[2] & 255L) << 40
                     | (var10[3] & 255L) << 32
                     | (var10[4] & 255L) << 24
                     | (var10[5] & 255L) << 16
                     | (var10[6] & 255L) << 8
                     | var10[7] & 255L;
                  switch (var36) {
                     case 0:
                        var25[var10001] = var38;
                        if (var2 >= var5) {
                           NHnxq = var6;
                           iJsds = new Integer[11];
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "$S\u0017iNþ\u001a¯\"\u0083Ãµ\u001f;\u00802";
                        var5 = "$S\u0017iNþ\u001a¯\"\u0083Ãµ\u001f;\u00802".length();
                        var2 = 0;
                  }

                  byte var29 = var2;
                  var2 += 8;
                  var7 = var4.substring(var29, var2).getBytes("ISO-8859-1");
                  var25 = var6;
                  var10001 = var3++;
                  var33 = (var7[0] & 255L) << 56
                     | (var7[1] & 255L) << 48
                     | (var7[2] & 255L) << 40
                     | (var7[3] & 255L) << 32
                     | (var7[4] & 255L) << 24
                     | (var7[5] & 255L) << 16
                     | (var7[6] & 255L) << 8
                     | var7[7] & 255L;
                  var36 = 0;
               }
            }
         }

         var16 = var17.charAt(var15);
      }
   }

   public String dcX() {
      return this.PBdhi;
   }

   private static Object ddf(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = dde(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int ddi(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = ddh(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public Map<Integer, lv> dcV() {
      return this.pIWlK;
   }

   private static CallSite ddj(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ddi".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/qO" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private class_1011 dcL(class_1011 var1) {
      long var2 = kCZlV ^ 129237073159534L;
      int var10000 = qL.dcb();
      int var5 = var1.method_4307();
      boolean var4 = (boolean)var10000;
      int var6 = var1.method_4323();
      int var7 = (int)(var5 * 0.11);
      int var8 = (int)(var5 * 0.11);
      int var9 = (int)(var6 * 0.22);
      int var10 = var5 - var7 - var8;
      int var11 = var6 - var9;

      label58: {
         try {
            var10000 = var10;
            if (!var4) {
               break label58;
            }

            if (var10 <= 0) {
               return var1;
            }
         } catch (MatchException var18) {
            throw ddc(var18);
         }

         var10000 = var11;
      }

      if (var10000 > 0) {
         class_1011 var12 = new class_1011(var1.method_4318(), var10, var11, false);
         int var13 = 0;

         while (true) {
            if (var13 < var11) {
               if (!var4) {
                  break;
               }

               int var14 = 0;

               label43: {
                  while (var14 < var10) {
                     int var15 = var14 + var7;
                     int var16 = var13;

                     try {
                        var12.method_61941(var14, var13, var1.method_61940(var15, var16));
                        var14++;
                        if (!var4) {
                           break label43;
                        }

                        if (!var4) {
                           break;
                        }
                     } catch (MatchException var17) {
                        throw ddc(var17);
                     }
                  }

                  var13++;
               }

               if (var4) {
                  continue;
               }
            }

            var1.close();
            break;
         }

         return var12;
      } else {
         return var1;
      }
   }

   public Thread dcR() {
      return this.dZNWF;
   }

   public Map<Integer, mG> dcW() {
      return this.AfCNN;
   }

   private static CallSite ddg(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ddf".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/qO" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public String dcY() {
      return this.InsIP;
   }

   private static String ddd(byte[] var0) {
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

   private static float dcN(float var0, float var1, float var2) {
      float var3 = Math.abs(var0 - var1);
      float var4 = Math.abs(0.5F * (var0 + var1) - var2);
      float var6 = 0.0F;
      float var8 = 0.0F;
      float var9 = (float)Math.sqrt(var6 * var6 + var8 * var8);
      float var10 = (float)Math.sqrt(var3 * var3 + var4 * var4);
      return var9 + 0.3F * var10;
   }

   private void dcI() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/qO.kCZlV J
      // 03: ldc2_w 100552408144957
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/qL.dcc ()Z
      // 0b: istore 3
      // 0c: getstatic media/MediaPlayerInfo.INSTANCE Lmedia/MediaPlayerInfo;
      // 0f: invokeinterface media/MediaPlayerInfo.getMediaSessions ()Ljava/util/List; 1
      // 14: astore 4
      // 16: aload 0
      // 17: aload 4
      // 19: invokeinterface java/util/List.stream ()Ljava/util/stream/Stream; 1
      // 1e: invokedynamic test ()Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, sixtwo/qO.dda (Lmedia/IMediaSession;)Z, (Lmedia/IMediaSession;)Z ]
      // 23: invokeinterface java/util/stream/Stream.filter (Ljava/util/function/Predicate;)Ljava/util/stream/Stream; 2
      // 28: invokeinterface java/util/stream/Stream.findFirst ()Ljava/util/Optional; 1
      // 2d: aconst_null
      // 2e: invokevirtual java/util/Optional.orElse (Ljava/lang/Object;)Ljava/lang/Object;
      // 31: checkcast media/IMediaSession
      // 34: putfield sixtwo/qO.Nbypb Lmedia/IMediaSession;
      // 37: aload 0
      // 38: getfield sixtwo/qO.Nbypb Lmedia/IMediaSession;
      // 3b: iload 3
      // 3c: ifne 66
      // 3f: ifnonnull 62
      // 42: goto 49
      // 45: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 48: athrow
      // 49: aload 0
      // 4a: ldc ""
      // 4c: putfield sixtwo/qO.PBdhi Ljava/lang/String;
      // 4f: aload 0
      // 50: ldc ""
      // 52: putfield sixtwo/qO.InsIP Ljava/lang/String;
      // 55: aload 0
      // 56: aconst_null
      // 57: putfield sixtwo/qO.sNQdS [B
      // 5a: aload 0
      // 5b: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 5e: putfield sixtwo/qO.ynvHN Lsixtwo/mG;
      // 61: return
      // 62: aload 0
      // 63: getfield sixtwo/qO.Nbypb Lmedia/IMediaSession;
      // 66: invokeinterface media/IMediaSession.media ()Lmedia/MediaInfo; 1
      // 6b: invokevirtual media/MediaInfo.title ()Ljava/lang/String;
      // 6e: astore 5
      // 70: iload 3
      // 71: ifne 94
      // 74: aload 5
      // 76: aload 0
      // 77: getfield sixtwo/qO.PBdhi Ljava/lang/String;
      // 7a: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 7d: ifne 9c
      // 80: goto 87
      // 83: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 86: athrow
      // 87: aload 0
      // 88: aload 5
      // 8a: putfield sixtwo/qO.PBdhi Ljava/lang/String;
      // 8d: goto 94
      // 90: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 93: athrow
      // 94: aload 0
      // 95: aload 0
      // 96: getfield sixtwo/qO.Nbypb Lmedia/IMediaSession;
      // 99: invokevirtual sixtwo/qO.dcJ (Lmedia/IMediaSession;)V
      // 9c: goto a6
      // 9f: astore 4
      // a1: aload 4
      // a3: invokevirtual java/lang/Exception.printStackTrace ()V
      // a6: return
   }

   private static float dcP(float[] var0, float[] var1) {
      float var2 = var0[0] - var1[0];
      float var3 = var0[1] - var1[1];
      float var4 = var0[2] - var1[2];
      return var2 * var2 + var3 * var3 + var4 * var4;
   }

   public byte[] dcT() {
      return this.sNQdS;
   }

   private static Exception ddc(Exception var0) {
      return var0;
   }

   private static String dde(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 29013;
      if (EYVen[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])xmkNH.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               xmkNH.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/qO", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = EKyPO[var5].getBytes("ISO-8859-1");
         EYVen[var5] = ddd(((Cipher)var4[0]).doFinal(var9));
      }

      return EYVen[var5];
   }

   private void dcJ(IMediaSession param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/qO.kCZlV J
      // 03: ldc2_w 102463695155084
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/qL.dcc ()Z
      // 0b: aload 1
      // 0c: invokeinterface media/IMediaSession.owner ()Ljava/lang/String; 1
      // 11: aload 1
      // 12: invokeinterface media/IMediaSession.media ()Lmedia/MediaInfo; 1
      // 17: invokevirtual media/MediaInfo.title ()Ljava/lang/String;
      // 1a: invokedynamic makeConcatWithConstants (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001:\u0001" ]
      // 1f: astore 5
      // 21: istore 4
      // 23: iload 4
      // 25: ifne 46
      // 28: aload 5
      // 2a: aload 0
      // 2b: getfield sixtwo/qO.InsIP Ljava/lang/String;
      // 2e: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 31: ifeq 40
      // 34: goto 3b
      // 37: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 3a: athrow
      // 3b: return
      // 3c: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 3f: athrow
      // 40: aload 0
      // 41: aload 5
      // 43: putfield sixtwo/qO.InsIP Ljava/lang/String;
      // 46: invokestatic sixtwo/rt.dju ()Loshi/PlatformEnum;
      // 49: getstatic oshi/PlatformEnum.WINDOWS Loshi/PlatformEnum;
      // 4c: if_acmpne 92
      // 4f: aload 1
      // 50: invokeinterface media/IMediaSession.getArtworkBytes ()[B 1
      // 55: astore 6
      // 57: aload 6
      // 59: iload 4
      // 5b: ifne 6a
      // 5e: ifnull 88
      // 61: goto 68
      // 64: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 67: athrow
      // 68: aload 6
      // 6a: arraylength
      // 6b: sipush 20754
      // 6e: ldc2_w 8364545684164902777
      // 71: lload 2
      // 72: lxor
      // 73: invokedynamic m (IJ)I bsm=sixtwo/qO.ddj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 78: if_icmple 88
      // 7b: aload 0
      // 7c: aload 6
      // 7e: putfield sixtwo/qO.sNQdS [B
      // 81: goto 88
      // 84: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 87: athrow
      // 88: goto aa
      // 8b: astore 6
      // 8d: iload 4
      // 8f: ifeq aa
      // 92: new java/lang/Thread
      // 95: dup
      // 96: aload 0
      // 97: aload 1
      // 98: invokedynamic run (Lsixtwo/qO;Lmedia/IMediaSession;)Ljava/lang/Runnable; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()V, sixtwo/qO.dcZ (Lmedia/IMediaSession;)V, ()V ]
      // 9d: invokespecial java/lang/Thread.<init> (Ljava/lang/Runnable;)V
      // a0: invokevirtual java/lang/Thread.start ()V
      // a3: goto aa
      // a6: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // a9: athrow
      // aa: return
   }

   private static float[][] dcO(List<float[]> var0, int var1, int var2) {
      long var3 = kCZlV ^ 98073601441651L;
      int var10000 = qL.dcc();
      Random var6 = new Random();
      boolean var5 = (boolean)var10000;
      float[][] var7 = new float[var1][3];
      int var8 = 0;

      while (true) {
         if (var8 < var1) {
            try {
               var7[var8] = (float[])((float[])var0.get(var6.nextInt(var0.size()))).clone();
               var8++;
               if (var5) {
                  break;
               }

               if (!var5) {
                  continue;
               }
            } catch (MatchException var18) {
               throw ddc(var18);
            }
         }

         var8 = 0;
         break;
      }

      label95:
      while (true) {
         var10000 = var8;

         label92:
         while (var10000 < var2) {
            int[] var9 = new int[var1];
            float[][] var21 = new float[var1][3];
            if (var5) {
               return var21;
            }

            float[][] var10 = var21;
            Iterator var11 = var0.iterator();

            label89:
            while (true) {
               var10000 = var11.hasNext();

               label86:
               while (var10000 != 0) {
                  float[] var12 = (float[])var11.next();
                  int var13 = 0;
                  float var14 = dcP(var12, var7[0]);
                  var23 = 1;
                  if (var5) {
                     break label89;
                  }

                  int var15 = 1;

                  while (var15 < var1) {
                     float var16 = dcP(var12, var7[var15]);

                     label113: {
                        try {
                           if (var5) {
                              break label113;
                           }

                           float var24;
                           var10000 = (var24 = var16 - var14) == 0.0F ? 0 : (var24 < 0.0F ? -1 : 1);
                           if (var5) {
                              continue label86;
                           }
                        } catch (MatchException var17) {
                           throw ddc(var17);
                        }

                        if (var10000 < 0) {
                           var14 = var16;
                           var13 = var15;
                        }

                        var15++;
                     }

                     if (var5) {
                        break;
                     }
                  }

                  var9[var13]++;
                  var10[var13][0] = var10[var13][0] + var12[0];
                  var10[var13][1] = var10[var13][1] + var12[1];
                  var10[var13][2] = var10[var13][2] + var12[2];
                  if (!var5) {
                     continue label89;
                  }
                  break;
               }

               var23 = 0;
               break;
            }

            int var19 = var23;

            while (var19 < var1) {
               var10000 = var9[var19];
               if (var5) {
                  continue label92;
               }

               if (var10000 != 0) {
                  var7[var19][0] = var10[var19][0] / var9[var19];
                  var7[var19][1] = var10[var19][1] / var9[var19];
                  var7[var19][2] = var10[var19][2] / var9[var19];
               }

               var19++;
               if (var5) {
                  break;
               }
            }

            var8++;
            if (!var5) {
               continue label95;
            }
            break;
         }

         return var7;
      }
   }

   private static int ddh(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 31661;
      if (iJsds[var3] == null) {
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
         long var5 = NHnxq[var3];
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
         Object[] var9 = (Object[])CKnfM.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               CKnfM.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/qO", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         iJsds[var3] = var15;
      }

      return iJsds[var3];
   }

   public IMediaSession dcS() {
      return this.Nbypb;
   }

   public class_1044 dcK() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/qO.kCZlV J
      // 003: ldc2_w 34987144443134
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/qL.dcb ()Z
      // 00b: istore 3
      // 00c: aload 0
      // 00d: iload 3
      // 00e: ifeq 07d
      // 011: getfield sixtwo/qO.pIWlK Ljava/util/Map;
      // 014: invokeinterface java/util/Map.size ()I 1
      // 019: sipush 12888
      // 01c: ldc2_w 973572185802540878
      // 01f: lload 1
      // 020: lxor
      // 021: invokedynamic m (IJ)I bsm=sixtwo/qO.ddj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 026: if_icmple 07c
      // 029: goto 030
      // 02c: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 02f: athrow
      // 030: aload 0
      // 031: getfield sixtwo/qO.pIWlK Ljava/util/Map;
      // 034: invokeinterface java/util/Map.values ()Ljava/util/Collection; 1
      // 039: invokeinterface java/util/Collection.iterator ()Ljava/util/Iterator; 1
      // 03e: astore 4
      // 040: aload 4
      // 042: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 047: ifeq 06a
      // 04a: aload 4
      // 04c: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 051: checkcast sixtwo/lv
      // 054: astore 5
      // 056: aload 5
      // 058: invokevirtual sixtwo/lv.close ()V
      // 05b: iload 3
      // 05c: ifeq 073
      // 05f: iload 3
      // 060: ifne 040
      // 063: goto 06a
      // 066: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 069: athrow
      // 06a: aload 0
      // 06b: getfield sixtwo/qO.pIWlK Ljava/util/Map;
      // 06e: invokeinterface java/util/Map.clear ()V 1
      // 073: aload 0
      // 074: getfield sixtwo/qO.AfCNN Ljava/util/Map;
      // 077: invokeinterface java/util/Map.clear ()V 1
      // 07c: aload 0
      // 07d: getfield sixtwo/qO.sNQdS [B
      // 080: astore 4
      // 082: aload 4
      // 084: iload 3
      // 085: ifeq 094
      // 088: ifnull 0b0
      // 08b: goto 092
      // 08e: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 091: athrow
      // 092: aload 4
      // 094: arraylength
      // 095: iload 3
      // 096: ifeq 0c6
      // 099: sipush 24280
      // 09c: ldc2_w 4217886866110016451
      // 09f: lload 1
      // 0a0: lxor
      // 0a1: invokedynamic m (IJ)I bsm=sixtwo/qO.ddj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0a6: if_icmpge 0c1
      // 0a9: goto 0b0
      // 0ac: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0af: athrow
      // 0b0: sipush 12633
      // 0b3: ldc2_w 9008191345996041905
      // 0b6: lload 1
      // 0b7: lxor
      // 0b8: invokedynamic i (IJ)Ljava/lang/String; bsm=sixtwo/qO.ddg (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0bd: invokestatic sixtwo/ob.cBv (Ljava/lang/String;)Lnet/minecraft/class_1044;
      // 0c0: areturn
      // 0c1: aload 4
      // 0c3: invokestatic java/util/Arrays.hashCode ([B)I
      // 0c6: istore 5
      // 0c8: aload 0
      // 0c9: getfield sixtwo/qO.pIWlK Ljava/util/Map;
      // 0cc: iload 5
      // 0ce: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 0d1: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 0d6: checkcast net/minecraft/class_1044
      // 0d9: astore 6
      // 0db: aload 6
      // 0dd: iload 3
      // 0de: ifeq 109
      // 0e1: ifnull 10a
      // 0e4: goto 0eb
      // 0e7: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0ea: athrow
      // 0eb: aload 0
      // 0ec: aload 0
      // 0ed: getfield sixtwo/qO.AfCNN Ljava/util/Map;
      // 0f0: iload 5
      // 0f2: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 0f5: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 0fa: checkcast sixtwo/mG
      // 0fd: putfield sixtwo/qO.ynvHN Lsixtwo/mG;
      // 100: aload 6
      // 102: goto 109
      // 105: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 108: athrow
      // 109: areturn
      // 10a: aload 4
      // 10c: invokestatic net/minecraft/class_1011.method_49277 ([B)Lnet/minecraft/class_1011;
      // 10f: astore 7
      // 111: invokestatic sixtwo/rt.djx ()Z
      // 114: ifeq 120
      // 117: aload 7
      // 119: goto 126
      // 11c: invokestatic sixtwo/qO.ddc (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 11f: athrow
      // 120: aload 0
      // 121: aload 7
      // 123: invokevirtual sixtwo/qO.dcL (Lnet/minecraft/class_1011;)Lnet/minecraft/class_1011;
      // 126: astore 8
      // 128: aload 0
      // 129: aload 8
      // 12b: bipush 2
      // 12c: invokestatic sixtwo/qO.dcM (Lnet/minecraft/class_1011;I)Lsixtwo/mG;
      // 12f: putfield sixtwo/qO.ynvHN Lsixtwo/mG;
      // 132: new sixtwo/lv
      // 135: dup
      // 136: aload 8
      // 138: invokespecial sixtwo/lv.<init> (Lnet/minecraft/class_1011;)V
      // 13b: astore 9
      // 13d: aload 0
      // 13e: getfield sixtwo/qO.AfCNN Ljava/util/Map;
      // 141: iload 5
      // 143: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 146: aload 0
      // 147: getfield sixtwo/qO.ynvHN Lsixtwo/mG;
      // 14a: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 14f: pop
      // 150: aload 0
      // 151: getfield sixtwo/qO.pIWlK Ljava/util/Map;
      // 154: iload 5
      // 156: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 159: aload 9
      // 15b: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 160: pop
      // 161: aload 9
      // 163: areturn
      // 164: astore 4
      // 166: sipush 28200
      // 169: ldc2_w 873857188477850049
      // 16c: lload 1
      // 16d: lxor
      // 16e: invokedynamic i (IJ)Ljava/lang/String; bsm=sixtwo/qO.ddg (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 173: invokestatic sixtwo/ob.cBv (Ljava/lang/String;)Lnet/minecraft/class_1044;
      // 176: areturn
   }

   public mG dcU() {
      return this.ynvHN;
   }

   public boolean dcQ() {
      long var1 = kCZlV ^ 23619129188515L;

      try {
         if (this.Nbypb != null) {
            return true;
         }
      } catch (MatchException var3) {
         throw ddc(var3);
      }

      return false;
   }
}
