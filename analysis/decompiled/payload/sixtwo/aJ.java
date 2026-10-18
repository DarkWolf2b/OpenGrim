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
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class aJ extends az {
   private final List<aH> DIrGH;
   private final Map<aH, aE> Sbssq;
   private aE AyCAC;
   private aE npWSx;
   private aH HNIDe;
   private final az ngAwC;
   private static String[] erCia;
   private static final long iklvp = gb.aYR(-8049947572768292019L, 7048069767684806331L, MethodHandles.lookup().lookupClass()).a(245925426125427L);
   private static final String[] ElbCl;
   private static final String[] QZoSV;
   private static final Map OMsXa = new HashMap(13);
   private static final long[] IfUGU;
   private static final Integer[] KkXjw;
   private static final Map ADQrN;

   public aJ() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/aJ.iklvp J
      // 003: ldc2_w 61194989653667
      // 006: lxor
      // 007: lstore 1
      // 008: aload 0
      // 009: invokespecial sixtwo/az.<init> ()V
      // 00c: aload 0
      // 00d: new java/util/ArrayList
      // 010: dup
      // 011: invokespecial java/util/ArrayList.<init> ()V
      // 014: putfield sixtwo/aJ.DIrGH Ljava/util/List;
      // 017: invokestatic sixtwo/aJ.wv ()[Ljava/lang/String;
      // 01a: aload 0
      // 01b: new java/util/LinkedHashMap
      // 01e: dup
      // 01f: invokespecial java/util/LinkedHashMap.<init> ()V
      // 022: putfield sixtwo/aJ.Sbssq Ljava/util/Map;
      // 025: ldc 18.0
      // 027: fstore 4
      // 029: astore 3
      // 02a: ldc 7.5
      // 02c: fstore 5
      // 02e: ldc 60.0
      // 030: fstore 6
      // 032: invokestatic sixtwo/aI.values ()[Lsixtwo/aI;
      // 035: astore 7
      // 037: aload 7
      // 039: arraylength
      // 03a: istore 8
      // 03c: bipush 0
      // 03d: istore 9
      // 03f: iload 9
      // 041: iload 8
      // 043: if_icmpge 0b8
      // 046: aload 7
      // 048: iload 9
      // 04a: aaload
      // 04b: astore 10
      // 04d: new sixtwo/aH
      // 050: dup
      // 051: aload 0
      // 052: aload 10
      // 054: invokespecial sixtwo/aH.<init> (Lsixtwo/aJ;Lsixtwo/aI;)V
      // 057: astore 11
      // 059: aload 11
      // 05b: fload 5
      // 05d: fload 6
      // 05f: ldc 80.0
      // 061: fload 4
      // 063: invokevirtual sixtwo/aH.sY (FFFF)Lsixtwo/az;
      // 066: pop
      // 067: aload 0
      // 068: getfield sixtwo/aJ.DIrGH Ljava/util/List;
      // 06b: aload 11
      // 06d: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 072: pop
      // 073: fload 6
      // 075: fload 4
      // 077: ldc 5.0
      // 079: fadd
      // 07a: fadd
      // 07b: fstore 6
      // 07d: aload 10
      // 07f: getstatic sixtwo/aI.fhJit Lsixtwo/aI;
      // 082: aload 3
      // 083: ifnonnull 09c
      // 086: if_acmpne 097
      // 089: goto 090
      // 08c: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08f: athrow
      // 090: fload 6
      // 092: ldc 15.0
      // 094: fadd
      // 095: fstore 6
      // 097: aload 10
      // 099: getstatic sixtwo/aI.mMivt Lsixtwo/aI;
      // 09c: if_acmpne 0b1
      // 09f: aload 11
      // 0a1: invokedynamic run ()Lsixtwo/aG; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Lsixtwo/aH;)V, sixtwo/aJ.wt (Lsixtwo/aH;)V, (Lsixtwo/aH;)V ]
      // 0a6: invokevirtual sixtwo/aH.vT (Lsixtwo/aG;)Lsixtwo/aH;
      // 0a9: pop
      // 0aa: goto 0b1
      // 0ad: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b0: athrow
      // 0b1: iinc 9 1
      // 0b4: aload 3
      // 0b5: ifnull 03f
      // 0b8: ldc sixtwo/aC
      // 0ba: invokedynamic get ()Ljava/util/function/Supplier; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()Ljava/lang/Object;, sixtwo/aC.<init> ()V, ()Lsixtwo/aC; ]
      // 0bf: invokestatic sixtwo/aE.vB (Ljava/lang/Class;Ljava/util/function/Supplier;)Lsixtwo/aE;
      // 0c2: astore 7
      // 0c4: sipush 10815
      // 0c7: ldc sixtwo/aB
      // 0c9: invokedynamic get ()Ljava/util/function/Supplier; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()Ljava/lang/Object;, sixtwo/aB.<init> ()V, ()Lsixtwo/aB; ]
      // 0ce: invokestatic sixtwo/aE.vB (Ljava/lang/Class;Ljava/util/function/Supplier;)Lsixtwo/aE;
      // 0d1: astore 8
      // 0d3: ldc2_w 3363332735267940035
      // 0d6: lload 1
      // 0d7: lxor
      // 0d8: ldc sixtwo/aD
      // 0da: invokedynamic get ()Ljava/util/function/Supplier; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()Ljava/lang/Object;, sixtwo/aD.<init> ()V, ()Lsixtwo/aD; ]
      // 0df: invokestatic sixtwo/aE.vB (Ljava/lang/Class;Ljava/util/function/Supplier;)Lsixtwo/aE;
      // 0e2: astore 9
      // 0e4: aload 0
      // 0e5: getfield sixtwo/aJ.Sbssq Ljava/util/Map;
      // 0e8: aload 0
      // 0e9: getfield sixtwo/aJ.DIrGH Ljava/util/List;
      // 0ec: bipush 0
      // 0ed: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 0f2: checkcast sixtwo/aH
      // 0f5: aload 7
      // 0f7: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 0fc: pop
      // 0fd: aload 0
      // 0fe: getfield sixtwo/aJ.Sbssq Ljava/util/Map;
      // 101: aload 0
      // 102: getfield sixtwo/aJ.DIrGH Ljava/util/List;
      // 105: bipush 1
      // 106: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 10b: checkcast sixtwo/aH
      // 10e: aload 7
      // 110: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 115: pop
      // 116: aload 0
      // 117: getfield sixtwo/aJ.Sbssq Ljava/util/Map;
      // 11a: aload 0
      // 11b: getfield sixtwo/aJ.DIrGH Ljava/util/List;
      // 11e: bipush 2
      // 11f: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 124: checkcast sixtwo/aH
      // 127: aload 7
      // 129: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 12e: pop
      // 12f: aload 0
      // 130: getfield sixtwo/aJ.Sbssq Ljava/util/Map;
      // 133: aload 0
      // 134: getfield sixtwo/aJ.DIrGH Ljava/util/List;
      // 137: bipush 3
      // 138: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 13d: checkcast sixtwo/aH
      // 140: aload 7
      // 142: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 147: pop
      // 148: aload 0
      // 149: getfield sixtwo/aJ.Sbssq Ljava/util/Map;
      // 14c: aload 0
      // 14d: getfield sixtwo/aJ.DIrGH Ljava/util/List;
      // 150: bipush 4
      // 151: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 156: checkcast sixtwo/aH
      // 159: aload 7
      // 15b: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 160: pop
      // 161: aload 0
      // 162: getfield sixtwo/aJ.Sbssq Ljava/util/Map;
      // 165: aload 0
      // 166: getfield sixtwo/aJ.DIrGH Ljava/util/List;
      // 169: bipush 5
      // 16a: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 16f: checkcast sixtwo/aH
      // 172: aload 8
      // 174: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 179: pop
      // 17a: aload 0
      // 17b: getfield sixtwo/aJ.Sbssq Ljava/util/Map;
      // 17e: aload 0
      // 17f: getfield sixtwo/aJ.DIrGH Ljava/util/List;
      // 182: sipush 2626
      // 185: ldc2_w 947685505520427208
      // 188: lload 1
      // 189: lxor
      // 18a: invokedynamic m (IJ)I bsm=sixtwo/aJ.wD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 18f: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 194: checkcast sixtwo/aH
      // 197: aload 9
      // 199: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 19e: pop
      // 19f: aload 0
      // 1a0: getfield sixtwo/aJ.Sbssq Ljava/util/Map;
      // 1a3: aload 0
      // 1a4: getfield sixtwo/aJ.DIrGH Ljava/util/List;
      // 1a7: sipush 2931
      // 1aa: ldc2_w 6400124867359105530
      // 1ad: lload 1
      // 1ae: lxor
      // 1af: invokedynamic m (IJ)I bsm=sixtwo/aJ.wD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1b4: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 1b9: checkcast sixtwo/aH
      // 1bc: aconst_null
      // 1bd: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 1c2: pop
      // 1c3: aload 0
      // 1c4: invokevirtual sixtwo/aJ.we ()V
      // 1c7: invokestatic sixtwo/ry.dkB ()Lsixtwo/ry;
      // 1ca: invokevirtual sixtwo/ry.dkL ()Ljava/lang/String;
      // 1cd: astore 10
      // 1cf: invokedynamic j (IJ)Ljava/lang/String; bsm=sixtwo/aJ.wA (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1d4: astore 11
      // 1d6: aload 10
      // 1d8: sipush 4015
      // 1db: ldc2_w 1510636583022166869
      // 1de: lload 1
      // 1df: lxor
      // 1e0: invokedynamic j (IJ)Ljava/lang/String; bsm=sixtwo/aJ.wA (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1e5: invokevirtual java/lang/String.endsWith (Ljava/lang/String;)Z
      // 1e8: aload 3
      // 1e9: ifnonnull 24c
      // 1ec: ifeq 21d
      // 1ef: goto 1f6
      // 1f2: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f5: athrow
      // 1f6: new sixtwo/lx
      // 1f9: dup
      // 1fa: aload 10
      // 1fc: aload 11
      // 1fe: invokedynamic makeConcatWithConstants (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001\u0001" ]
      // 203: invokespecial sixtwo/lx.<init> (Ljava/lang/String;)V
      // 206: astore 12
      // 208: aload 12
      // 20a: ldc 4.0
      // 20c: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 20f: invokevirtual sixtwo/lx.ccf (Lsixtwo/ld;)Lsixtwo/lx;
      // 212: pop
      // 213: aload 0
      // 214: aload 12
      // 216: putfield sixtwo/aJ.ngAwC Lsixtwo/az;
      // 219: aload 3
      // 21a: ifnull 29a
      // 21d: aload 0
      // 21e: new sixtwo/an
      // 221: dup
      // 222: invokespecial sixtwo/an.<init> ()V
      // 225: putfield sixtwo/aJ.ngAwC Lsixtwo/az;
      // 228: aload 10
      // 22a: sipush 16613
      // 22d: ldc2_w 5539823902444112922
      // 230: lload 1
      // 231: lxor
      // 232: invokedynamic j (IJ)Ljava/lang/String; bsm=sixtwo/aJ.wA (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 237: aload 3
      // 238: ifnonnull 288
      // 23b: goto 242
      // 23e: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 241: athrow
      // 242: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 245: goto 24c
      // 248: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24b: athrow
      // 24c: ifeq 27d
      // 24f: aload 0
      // 250: getfield sixtwo/aJ.ngAwC Lsixtwo/az;
      // 253: checkcast sixtwo/an
      // 256: astore 12
      // 258: aload 12
      // 25a: sipush 20788
      // 25d: ldc2_w 1699405721817898444
      // 260: lload 1
      // 261: lxor
      // 262: invokedynamic j (IJ)Ljava/lang/String; bsm=sixtwo/aJ.wA (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 267: invokestatic sixtwo/ob.cBv (Ljava/lang/String;)Lnet/minecraft/class_1044;
      // 26a: invokevirtual sixtwo/an.ph (Lnet/minecraft/class_1044;)Lsixtwo/an;
      // 26d: pop
      // 26e: aload 12
      // 270: ldc 4.0
      // 272: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 275: invokevirtual sixtwo/an.pi (Lsixtwo/ld;)Lsixtwo/an;
      // 278: pop
      // 279: aload 3
      // 27a: ifnull 29a
      // 27d: aload 10
      // 27f: aload 11
      // 281: goto 288
      // 284: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 287: athrow
      // 288: invokedynamic makeConcatWithConstants (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001\u0001" ]
      // 28d: invokestatic sixtwo/oe.cCd (Ljava/lang/String;)Ljava/util/concurrent/CompletableFuture;
      // 290: aload 0
      // 291: invokedynamic accept (Lsixtwo/aJ;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/aJ.ws (Lsixtwo/lv;)V, (Lsixtwo/lv;)V ]
      // 296: invokevirtual java/util/concurrent/CompletableFuture.thenAccept (Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;
      // 299: pop
      // 29a: aload 0
      // 29b: getfield sixtwo/aJ.ngAwC Lsixtwo/az;
      // 29e: ldc_w 20.0
      // 2a1: ldc_w 20.0
      // 2a4: invokevirtual sixtwo/az.sX (FF)Lsixtwo/az;
      // 2a7: pop
      // 2a8: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 2ab: ifnonnull 2bc
      // 2ae: bipush 5
      // 2af: anewarray 208
      // 2b2: invokestatic sixtwo/aJ.wu ([Ljava/lang/String;)V
      // 2b5: goto 2bc
      // 2b8: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2bb: athrow
      // 2bc: aload 0
      // 2bd: getfield sixtwo/aJ.DIrGH Ljava/util/List;
      // 2c0: bipush 6
      // 2c2: invokeinterface java/util/List.remove (I)Ljava/lang/Object; 2
      // 2c7: aload 0
      // 2c8: getfield sixtwo/aJ.Sbssq Ljava/util/Map;
      // 2cb: swap
      // 2cc: invokeinterface java/util/Map.remove (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 2d1: pop
      // 2d2: return
   }

   static {
      long var11 = iklvp ^ 139714416130577L;
      wu(null);
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[8];
      int var18 = 0;
      String var17 = "8«yí\u0014W\u001emÁ\b\u0098Â\u008aÉ¯\u0089\u0092§îÒx©\u007fiÊo\fÕôÈ¹«\u0010º\u008ef±KH\u0002\u0090áívÏ\\¨Ó+ ñN9KáÛÁ&²Yû§\u0088)h}VpÝ\bÂ¤A\u008boØðB@cy¤ \u000f&3$µwK¾êåf÷\u0016\u0088û&\f\f\u007fÃ¸\u00125®E\u008eüqXoÝC\u0010¤Á\u0001d7»@ÌðjMt\u0086?ÂO\u0010^\\CP§\u0003qÌ+§\u0004fÂaóù";
      int var19 = "8«yí\u0014W\u001emÁ\b\u0098Â\u008aÉ¯\u0089\u0092§îÒx©\u007fiÊo\fÕôÈ¹«\u0010º\u008ef±KH\u0002\u0090áívÏ\\¨Ó+ ñN9KáÛÁ&²Yû§\u0088)h}VpÝ\bÂ¤A\u008boØðB@cy¤ \u000f&3$µwK¾êåf÷\u0016\u0088û&\f\f\u007fÃ¸\u00125®E\u008eüqXoÝC\u0010¤Á\u0001d7»@ÌðjMt\u0086?ÂO\u0010^\\CP§\u0003qÌ+§\u0004fÂaóù"
         .length();
      char var16 = ' ';
      int var24 = -1;

      label54:
      while (true) {
         String var25 = var17.substring(++var24, var24 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = wx(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var36;
                  if ((var24 += var16) >= var19) {
                     ElbCl = var20;
                     QZoSV = new String[8];
                     ADQrN = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[19];
                     int var3 = 0;
                     String var4 = "\u0000Ï¦\u009auÞRM\u0092\u009c)Ø6Þë 'AÂ¿ÞbA·\u0007Â\u0097v±äåyã)nûÈ ®\u0002h±\u00ad\u001f&õÃâíÎRÍQ<_\u001bZèB3nñ\u001a\u0082\u0091B\u001e\u008clS³\nÁÞkBq³\u009cq¢\u001aü\u009b8 C\u0010±çÖ\u00adÀÿ\u008d\u0013'Á\u0090\u00057Wx®/3o\u008e\u000eK´X°\u0004\u009f\u0087.\u0088Y\u0013è\u008c{$MÒ¸ÑR\u0001[N7;\u0001Ú";
                     int var5 = "\u0000Ï¦\u009auÞRM\u0092\u009c)Ø6Þë 'AÂ¿ÞbA·\u0007Â\u0097v±äåyã)nûÈ ®\u0002h±\u00ad\u001f&õÃâíÎRÍQ<_\u001bZèB3nñ\u001a\u0082\u0091B\u001e\u008clS³\nÁÞkBq³\u009cq¢\u001aü\u009b8 C\u0010±çÖ\u00adÀÿ\u008d\u0013'Á\u0090\u00057Wx®/3o\u008e\u000eK´X°\u0004\u009f\u0087.\u0088Y\u0013è\u008c{$MÒ¸ÑR\u0001[N7;\u0001Ú"
                        .length();
                     byte var2 = 0;

                     label36:
                     while (true) {
                        var10001 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
                        long[] var28 = var6;
                        var10001 = var3++;
                        long var40 = (var7[0] & 255L) << 56
                           | (var7[1] & 255L) << 48
                           | (var7[2] & 255L) << 40
                           | (var7[3] & 255L) << 32
                           | (var7[4] & 255L) << 24
                           | (var7[5] & 255L) << 16
                           | (var7[6] & 255L) << 8
                           | var7[7] & 255L;
                        byte var43 = -1;

                        while (true) {
                           long var8 = var40;
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
                           long var45 = (var10[0] & 255L) << 56
                              | (var10[1] & 255L) << 48
                              | (var10[2] & 255L) << 40
                              | (var10[3] & 255L) << 32
                              | (var10[4] & 255L) << 24
                              | (var10[5] & 255L) << 16
                              | (var10[6] & 255L) << 8
                              | var10[7] & 255L;
                           switch (var43) {
                              case 0:
                                 var28[var10001] = var45;
                                 if (var2 >= var5) {
                                    IfUGU = var6;
                                    KkXjw = new Integer[19];
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "D\u009eyZnÐ&(ä@\u0012§xKîû";
                                 var5 = "D\u009eyZnÐ&(ä@\u0012§xKîû".length();
                                 var2 = 0;
                           }

                           byte var34 = var2;
                           var2 += 8;
                           var7 = var4.substring(var34, var2).getBytes("ISO-8859-1");
                           var28 = var6;
                           var10001 = var3++;
                           var40 = (var7[0] & 255L) << 56
                              | (var7[1] & 255L) << 48
                              | (var7[2] & 255L) << 40
                              | (var7[3] & 255L) << 32
                              | (var7[4] & 255L) << 24
                              | (var7[5] & 255L) << 16
                              | (var7[6] & 255L) << 8
                              | var7[7] & 255L;
                           var43 = 0;
                        }
                     }
                  }

                  var16 = var17.charAt(var24);
                  break;
               default:
                  var20[var18++] = var36;
                  if ((var24 += var16) < var19) {
                     var16 = var17.charAt(var24);
                     continue label54;
                  }

                  var17 = ",\u0096\u001c\u009eÆH\u0004G\\\u000e\u0092ÒgÔ\u008e\u0095\u009b\u0004\u000fêÍ+\u0007\u001e²±\u007fÆIùÛw\u0018ªN=`Qå¨.ãÞ/\u0005Ô~¾\u008eõß\u001f©\u008a`mX";
                  var19 = ",\u0096\u001c\u009eÆH\u0004G\\\u000e\u0092ÒgÔ\u008e\u0095\u009b\u0004\u000fêÍ+\u0007\u001e²±\u007fÆIùÛw\u0018ªN=`Qå¨.ãÞ/\u0005Ô~¾\u008eõß\u001f©\u008a`mX"
                     .length();
                  var16 = ' ';
                  var24 = -1;
            }

            var25 = var17.substring(++var24, var24 + var16);
            var10001 = 0;
         }
      }
   }

   public void wi(aE param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/aJ.iklvp J
      // 03: ldc2_w 42827390049589
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/aJ.wv ()[Ljava/lang/String;
      // 0b: aconst_null
      // 0c: astore 5
      // 0e: aload 0
      // 0f: getfield sixtwo/aJ.Sbssq Ljava/util/Map;
      // 12: invokeinterface java/util/Map.entrySet ()Ljava/util/Set; 1
      // 17: invokeinterface java/util/Set.iterator ()Ljava/util/Iterator; 1
      // 1c: astore 6
      // 1e: astore 4
      // 20: aload 6
      // 22: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 27: ifeq 66
      // 2a: aload 6
      // 2c: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 31: checkcast java/util/Map$Entry
      // 34: astore 7
      // 36: aload 7
      // 38: invokeinterface java/util/Map$Entry.getValue ()Ljava/lang/Object; 1
      // 3d: aload 4
      // 3f: ifnonnull 5b
      // 42: aload 1
      // 43: if_acmpne 63
      // 46: goto 4d
      // 49: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4c: athrow
      // 4d: aload 7
      // 4f: invokeinterface java/util/Map$Entry.getKey ()Ljava/lang/Object; 1
      // 54: goto 5b
      // 57: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5a: athrow
      // 5b: checkcast sixtwo/aH
      // 5e: astore 5
      // 60: goto 66
      // 63: goto 20
      // 66: aload 5
      // 68: ifnull 7d
      // 6b: aload 0
      // 6c: aload 5
      // 6e: invokevirtual sixtwo/aJ.wf (Lsixtwo/aH;)V
      // 71: aload 4
      // 73: ifnull 89
      // 76: goto 7d
      // 79: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7c: athrow
      // 7d: aload 0
      // 7e: aload 1
      // 7f: invokevirtual sixtwo/aJ.wh (Lsixtwo/aE;)V
      // 82: goto 89
      // 85: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 88: athrow
      // 89: return
   }

   public az wr() {
      return this.ngAwC;
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
      // 00: getstatic sixtwo/aJ.iklvp J
      // 03: ldc2_w 76893862472847
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/aJ.wv ()[Ljava/lang/String;
      // 0c: aload 0
      // 0d: getfield sixtwo/aJ.DIrGH Ljava/util/List;
      // 10: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 15: astore 9
      // 17: astore 8
      // 19: aload 9
      // 1b: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 20: ifeq 5a
      // 23: aload 9
      // 25: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 2a: checkcast sixtwo/aH
      // 2d: astore 10
      // 2f: aload 10
      // 31: dload 1
      // 32: dload 3
      // 33: aload 5
      // 35: invokevirtual sixtwo/aH.dk (DDLsixtwo/mA;)Z
      // 38: aload 8
      // 3a: ifnonnull 62
      // 3d: aload 8
      // 3f: ifnonnull 54
      // 42: goto 49
      // 45: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 48: athrow
      // 49: ifeq 55
      // 4c: goto 53
      // 4f: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 52: athrow
      // 53: bipush 1
      // 54: ireturn
      // 55: aload 8
      // 57: ifnull 19
      // 5a: aload 0
      // 5b: dload 1
      // 5c: dload 3
      // 5d: aload 5
      // 5f: invokespecial sixtwo/az.dk (DDLsixtwo/mA;)Z
      // 62: ireturn
   }

   @Override
   protected void bV(lC var1) {
      long var2 = iklvp ^ 26916424939595L;
      float var5 = bl.Ex().sj().dhj();
      mG var6 = this.CtPwV.bjb().coa(255.0F * var5);
      lc var7 = new lc(this.MCnYt + 5.0F, this.pNyTQ + 7.5F, 30.0F, 30.0F);
      var1.cdU(rD.dmm(), var7, mG.hoGuU.cob(var5));
      lq var8 = lE.WTzbi.bYM(9.0F);
      lq var9 = lE.WTzbi.bYM(6.0F);
      float var10 = var7.bXz() + 5.0F;
      float var11 = var7.bXG() + 7.5F;
      int[] var10002 = new int[wD<"m">(5093, 6866902229628047245L ^ var2)];
      var10002[0] = wD<"m">(3053, 6972789070781208461L ^ var2);
      var10002[1] = wD<"m">(29100, 5101993877518659010L ^ var2);
      var10002[2] = wD<"m">(7440, 6392136849436033376L ^ var2);
      var10002[3] = wD<"m">(7759, 1914528636849668669L ^ var2);
      var10002[4] = wD<"m">(27812, 6156758450922401987L ^ var2);
      var10002[5] = wD<"m">(3364, 4179904255069835592L ^ var2);
      var10002[wD<"m">(17691, 4271164632782608754L ^ var2)] = wD<"m">(1528, 4563926011264850327L ^ var2);
      var10002[wD<"m">(2622, 1806215961261299283L ^ var2)] = wD<"m">(25934, 5021270151507720490L ^ var2);
      var10002[wD<"m">(18741, 9043408669660550495L ^ var2)] = wD<"m">(16046, 2275044195357287133L ^ var2);
      var10002[wD<"m">(23643, 8639238658637365296L ^ var2)] = wD<"m">(20025, 6408228193273713247L ^ var2);
      var10002[wD<"m">(30270, 7999723128462748253L ^ var2)] = wD<"m">(19531, 3864635549112143918L ^ var2);
      var1.ceA(var8, var10002, var10, var11, var6);
      var1.cez(var9, wA<"j">(20182, 6397467903115424967L ^ var2), var10, var11 + var8.cat() + 4.5F, var6.cob(0.5F));
      lc var12 = bl.Ex().Ey();
      String[] var10000 = wv();
      float var13 = var12.bXA() - this.ngAwC.dn() - 7.5F;
      this.ngAwC.sW(this.MCnYt + 7.5F, var13);
      this.ngAwC.su(var1);
      lq var14 = lE.WTzbi.bYM(7.0F);
      float var15 = 4.5F;
      float var16 = var14.cat() * 2.0F + var15;
      float var17 = var13 + (this.ngAwC.dn() - var16) / 2.0F;
      float var18 = this.ngAwC.tc() + 5.0F;
      ry.dkB();
      var1.cez(var14, "matthew", var18, var17, var6);
      ry.dkB();
      var1.cez(var14, wA<"j">(26278, 7848073990663789749L ^ var2) + 1337, var18, var17 + var14.cat() + var15, var6.cob(0.5F));
      String[] var4 = var10000;
      lq var19 = lE.WTzbi.bYM(5.0F);
      var1.cez(var19, wA<"j">(27395, 6445039891507433750L ^ var2), this.MCnYt + 12.5F, this.pNyTQ + 52.5F, var6.cob(0.5F));
      var1.cez(var19, wA<"j">(7455, 5676665328972375817L ^ var2), this.MCnYt + 12.5F, this.pNyTQ + 52.5F + 130.0F, var6.cob(0.5F));

      for (aH var21 : this.DIrGH) {
         float var22 = var21.tr();
         float var23 = var21.ts();
         var21.sW(this.MCnYt + var22, this.pNyTQ + var23);
         var21.su(var1);
         var21.sW(var22, var23);
         if (var4 != null) {
            iS.bwK("c9lwn");
            break;
         }
      }
   }

   public aE wo() {
      return this.AyCAC;
   }

   private static String wx(byte[] var0) {
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

   private static String wy(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 2091;
      if (QZoSV[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])OMsXa.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               OMsXa.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/aJ", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = ElbCl[var5].getBytes("ISO-8859-1");
         QZoSV[var5] = wx(((Cipher)var4[0]).doFinal(var9));
      }

      return QZoSV[var5];
   }

   private static Object wz(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = wy(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static MatchException ww(MatchException var0) {
      return var0;
   }

   private static int wC(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = wB(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite wA(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("wz".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/aJ" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static CallSite wD(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("wC".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/aJ" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int wB(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 28254;
      if (KkXjw[var3] == null) {
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
         long var5 = IfUGU[var3];
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
         Object[] var9 = (Object[])ADQrN.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               ADQrN.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/aJ", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         KkXjw[var3] = var15;
      }

      return KkXjw[var3];
   }

   public void we() {
      this.HNIDe = this.DIrGH.get(0);
      this.HNIDe.vP().dhe(1.0F);
      this.npWSx = this.Sbssq.get(this.HNIDe);
      this.wl(this.npWSx);
   }

   public List<aH> wm() {
      return this.DIrGH;
   }

   public Map<aH, aE> wn() {
      return this.Sbssq;
   }

   public static String[] wv() {
      return erCia;
   }

   public void wk() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/aJ.iklvp J
      // 03: ldc2_w 100889868761822
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/aJ.wv ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/aJ.AyCAC Lsixtwo/aE;
      // 10: aload 3
      // 11: ifnonnull 29
      // 14: ifnull 56
      // 17: goto 1e
      // 1a: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: getfield sixtwo/aJ.AyCAC Lsixtwo/aE;
      // 22: goto 29
      // 25: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: aload 3
      // 2a: ifnonnull 46
      // 2d: aload 0
      // 2e: getfield sixtwo/aJ.npWSx Lsixtwo/aE;
      // 31: if_acmpeq 56
      // 34: goto 3b
      // 37: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a: athrow
      // 3b: aload 0
      // 3c: getfield sixtwo/aJ.npWSx Lsixtwo/aE;
      // 3f: goto 46
      // 42: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 45: athrow
      // 46: astore 4
      // 48: aload 0
      // 49: aload 0
      // 4a: getfield sixtwo/aJ.AyCAC Lsixtwo/aE;
      // 4d: invokevirtual sixtwo/aJ.wh (Lsixtwo/aE;)V
      // 50: aload 0
      // 51: aload 4
      // 53: putfield sixtwo/aJ.AyCAC Lsixtwo/aE;
      // 56: return
   }

   public static void wu(String[] var0) {
      erCia = var0;
   }

   public void wj(bg param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/aJ.iklvp J
      // 03: ldc2_w 25795474214713
      // 06: lxor
      // 07: lstore 2
      // 08: aload 1
      // 09: invokevirtual sixtwo/bg.CX ()Lsixtwo/gg;
      // 0c: astore 5
      // 0e: invokestatic sixtwo/aJ.wv ()[Ljava/lang/String;
      // 11: aload 5
      // 13: invokevirtual sixtwo/gg.bak ()Lsixtwo/gh;
      // 16: astore 6
      // 18: astore 4
      // 1a: getstatic sixtwo/aJ$rV.XrLHU [I
      // 1d: aload 6
      // 1f: invokevirtual sixtwo/gh.ordinal ()I
      // 22: iaload
      // 23: tableswitch 33 1 5 47 53 59 65 71
      // 44: new java/lang/MatchException
      // 47: dup
      // 48: aconst_null
      // 49: aconst_null
      // 4a: invokespecial java/lang/MatchException.<init> (Ljava/lang/String;Ljava/lang/Throwable;)V
      // 4d: athrow
      // 4e: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51: athrow
      // 52: getstatic sixtwo/aI.JkFqu Lsixtwo/aI;
      // 55: goto 6d
      // 58: getstatic sixtwo/aI.OOZEg Lsixtwo/aI;
      // 5b: goto 6d
      // 5e: getstatic sixtwo/aI.PGwMP Lsixtwo/aI;
      // 61: goto 6d
      // 64: getstatic sixtwo/aI.ejRch Lsixtwo/aI;
      // 67: goto 6d
      // 6a: getstatic sixtwo/aI.fhJit Lsixtwo/aI;
      // 6d: astore 7
      // 6f: aload 0
      // 70: getfield sixtwo/aJ.DIrGH Ljava/util/List;
      // 73: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 78: astore 8
      // 7a: aload 8
      // 7c: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 81: ifeq c4
      // 84: aload 8
      // 86: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 8b: checkcast sixtwo/aH
      // 8e: astore 9
      // 90: aload 4
      // 92: ifnonnull b3
      // 95: aload 9
      // 97: invokevirtual sixtwo/aH.vM ()Lsixtwo/aI;
      // 9a: aload 7
      // 9c: if_acmpne b8
      // 9f: goto a6
      // a2: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a5: athrow
      // a6: aload 0
      // a7: aload 9
      // a9: invokevirtual sixtwo/aJ.wf (Lsixtwo/aH;)V
      // ac: goto b3
      // af: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b2: athrow
      // b3: aload 4
      // b5: ifnull c4
      // b8: aload 4
      // ba: ifnull 7a
      // bd: goto c4
      // c0: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c3: athrow
      // c4: return
   }

   public aH wq() {
      return this.HNIDe;
   }

   public void wf(aH param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/aJ.iklvp J
      // 03: ldc2_w 70281794127612
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/aJ.wv ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnonnull 27
      // 13: getfield sixtwo/aJ.HNIDe Lsixtwo/aH;
      // 16: aload 1
      // 17: if_acmpne 26
      // 1a: goto 21
      // 1d: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: return
      // 22: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: aload 4
      // 29: ifnonnull 49
      // 2c: getfield sixtwo/aJ.npWSx Lsixtwo/aE;
      // 2f: ifnull 48
      // 32: goto 39
      // 35: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: aload 0
      // 3a: aload 0
      // 3b: getfield sixtwo/aJ.npWSx Lsixtwo/aE;
      // 3e: putfield sixtwo/aJ.AyCAC Lsixtwo/aE;
      // 41: goto 48
      // 44: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: aload 0
      // 49: getfield sixtwo/aJ.HNIDe Lsixtwo/aH;
      // 4c: aload 4
      // 4e: ifnonnull 70
      // 51: ifnull 6b
      // 54: goto 5b
      // 57: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5a: athrow
      // 5b: aload 0
      // 5c: getfield sixtwo/aJ.HNIDe Lsixtwo/aH;
      // 5f: bipush 0
      // 60: invokevirtual sixtwo/aH.vW (Z)Lsixtwo/aH;
      // 63: pop
      // 64: goto 6b
      // 67: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6a: athrow
      // 6b: aload 1
      // 6c: bipush 1
      // 6d: invokevirtual sixtwo/aH.vW (Z)Lsixtwo/aH;
      // 70: pop
      // 71: aload 0
      // 72: aload 1
      // 73: putfield sixtwo/aJ.HNIDe Lsixtwo/aH;
      // 76: aload 0
      // 77: aload 0
      // 78: getfield sixtwo/aJ.Sbssq Ljava/util/Map;
      // 7b: aload 0
      // 7c: getfield sixtwo/aJ.HNIDe Lsixtwo/aH;
      // 7f: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 84: checkcast sixtwo/aE
      // 87: putfield sixtwo/aJ.npWSx Lsixtwo/aE;
      // 8a: aload 0
      // 8b: aload 0
      // 8c: getfield sixtwo/aJ.npWSx Lsixtwo/aE;
      // 8f: invokevirtual sixtwo/aJ.wl (Lsixtwo/aE;)V
      // 92: return
   }

   public void wh(aE param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/aJ.iklvp J
      // 03: ldc2_w 61864894782359
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/aJ.wv ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnonnull 50
      // 13: getfield sixtwo/aJ.npWSx Lsixtwo/aE;
      // 16: ifnull 3e
      // 19: goto 20
      // 1c: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 1
      // 21: aload 0
      // 22: getfield sixtwo/aJ.npWSx Lsixtwo/aE;
      // 25: if_acmpeq 3e
      // 28: goto 2f
      // 2b: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2e: athrow
      // 2f: aload 0
      // 30: aload 0
      // 31: getfield sixtwo/aJ.npWSx Lsixtwo/aE;
      // 34: putfield sixtwo/aJ.AyCAC Lsixtwo/aE;
      // 37: goto 3e
      // 3a: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: aload 0
      // 3f: aload 1
      // 40: putfield sixtwo/aJ.npWSx Lsixtwo/aE;
      // 43: invokestatic sixtwo/bl.Ex ()Lsixtwo/bl;
      // 46: invokevirtual sixtwo/bl.EC ()Lsixtwo/al;
      // 49: invokevirtual sixtwo/al.oQ ()Lsixtwo/rk;
      // 4c: invokevirtual sixtwo/rk.dhg ()V
      // 4f: aload 0
      // 50: aload 0
      // 51: getfield sixtwo/aJ.npWSx Lsixtwo/aE;
      // 54: invokevirtual sixtwo/aJ.wl (Lsixtwo/aE;)V
      // 57: return
   }

   public aE wp() {
      return this.npWSx;
   }

   private void wl(aE var1) {
      long var2 = iklvp ^ 69048734358218L;
      String[] var4 = wv();

      label109: {
         aE var10000;
         label104: {
            try {
               var10000 = var1;
               if (var4 != null) {
                  break label104;
               }

               if (var1 == null) {
                  break label109;
               }
            } catch (MatchException var11) {
               throw ww(var11);
            }

            var10000 = var1;
         }

         label96: {
            label110: {
               try {
                  if (var4 != null) {
                     break label96;
                  }

                  if (!(var10000 instanceof aC)) {
                     break label110;
                  }
               } catch (MatchException var10) {
                  throw ww(var10);
               }

               aC var5 = (aC)var1;

               label88: {
                  label87: {
                     label86: {
                        label85: {
                           label84: {
                              try {
                                 switch (aJ$rV.hlWwY[this.HNIDe.vM().ordinal()]) {
                                    case 1:
                                       var15 = gh.xwjCw;
                                       break label88;
                                    case 2:
                                       break label87;
                                    case 3:
                                       break label86;
                                    case 4:
                                       break label85;
                                    case 5:
                                       break label84;
                                 }
                              } catch (MatchException var9) {
                                 throw ww(var9);
                              }

                              var15 = null;
                              break label88;
                           }

                           var15 = gh.KfAlY;
                           break label88;
                        }

                        var15 = gh.nOCvV;
                        break label88;
                     }

                     var15 = gh.qBzlZ;
                     break label88;
                  }

                  var15 = gh.xgeEn;
               }

               gh var6 = var15;
               var5.uk(var6);
            }

            var10000 = var1;
         }

         var10000.dY();
      }

      Iterator var12 = bl.Ex().manager().aY(bd.class).iterator();

      while (true) {
         if (var12.hasNext()) {
            bd var13 = (bd)var12.next();

            try {
               var13.Cg(false);
               if (var4 != null) {
                  break;
               }

               if (var4 == null) {
                  continue;
               }
            } catch (MatchException var8) {
               throw ww(var8);
            }
         }

         var12 = bl.Ex().manager().aY(aR.class).iterator();
         break;
      }

      while (true) {
         if (var12.hasNext()) {
            aR var14 = (aR)var12.next();

            try {
               var14.yg(false);
               if (var4 != null) {
                  break;
               }

               if (var4 == null) {
                  continue;
               }
            } catch (MatchException var7) {
               throw ww(var7);
            }
         }

         bl.Ex().Ez().nI();
         break;
      }
   }

   public void wg(aH param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/aJ.iklvp J
      // 03: ldc2_w 20329600636522
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/aJ.wv ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/aJ.HNIDe Lsixtwo/aH;
      // 11: aload 4
      // 13: ifnonnull 2a
      // 16: aload 1
      // 17: if_acmpne 26
      // 1a: goto 21
      // 1d: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: return
      // 22: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: getfield sixtwo/aJ.HNIDe Lsixtwo/aH;
      // 2a: aload 4
      // 2c: ifnonnull 4e
      // 2f: ifnull 49
      // 32: goto 39
      // 35: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: aload 0
      // 3a: getfield sixtwo/aJ.HNIDe Lsixtwo/aH;
      // 3d: bipush 0
      // 3e: invokevirtual sixtwo/aH.vW (Z)Lsixtwo/aH;
      // 41: pop
      // 42: goto 49
      // 45: invokestatic sixtwo/aJ.ww (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 48: athrow
      // 49: aload 1
      // 4a: bipush 1
      // 4b: invokevirtual sixtwo/aH.vW (Z)Lsixtwo/aH;
      // 4e: pop
      // 4f: aload 0
      // 50: aload 1
      // 51: putfield sixtwo/aJ.HNIDe Lsixtwo/aH;
      // 54: return
   }
}
