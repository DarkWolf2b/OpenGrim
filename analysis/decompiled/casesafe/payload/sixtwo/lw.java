package sixtwo;

import java.awt.Dimension;
import java.awt.Rectangle;
import java.awt.image.BufferedImage;
import java.io.BufferedInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class lw {
   public static final int zlgnw = 0;
   public static final int jVScm = 1;
   public static final int IGhFi;
   protected BufferedInputStream HYawK;
   protected int kCzBe;
   protected int yvHap;
   protected int HROeA;
   protected boolean EZnCM;
   protected int JwAHq;
   protected int NLTcE;
   protected int[] nUJgo;
   protected int[] ywgHj;
   protected int[] tgdGD;
   protected int QeHiv;
   protected int OcGcZ;
   protected int miitl;
   protected int OrQhv;
   protected boolean EJqxz;
   protected boolean nztLI;
   protected int XvFAo;
   protected int FxXIz;
   protected int TKEYU;
   protected int kfgBG;
   protected int Heeou;
   protected Rectangle AecSu;
   protected BufferedImage VCUiV;
   protected BufferedImage mEYhc;
   protected byte[] Raost;
   protected int dRLBH;
   protected int PXRra;
   protected int qfWPV;
   protected boolean QnUEw;
   protected int ZBGhF;
   protected int oXvuq;
   protected static final int iUbzi;
   protected short[] LACSj;
   protected byte[] MzFcm;
   protected byte[] WzUAy;
   protected byte[] TqXuX;
   protected ArrayList RAaDq;
   protected int iOjiE;
   private static String[] OhYyv;
   private static final long mhICS = gb.aYR(-2879237144925233431L, -5007989433139545023L, MethodHandles.lookup().lookupClass()).a(203719300113169L);
   private static final String[] lGcRA;
   private static final String[] XkSHt;
   private static final Map lxlTo = new HashMap(13);
   private static final long[] DLziM;
   private static final Integer[] PvmQO;
   private static final Map cLSYu;

   private static Exception cbT(Exception var0) {
      return var0;
   }

   protected int cbF() {
      int var1 = 0;

      try {
         var1 = this.HYawK.read();
      } catch (IOException var3) {
         this.kCzBe = 1;
      }

      return var1;
   }

   public int cbv() {
      return this.NLTcE;
   }

   protected int cbG() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lw.mhICS J
      // 03: ldc2_w 22466455307320
      // 06: lxor
      // 07: lstore 1
      // 08: aload 0
      // 09: aload 0
      // 0a: invokevirtual sixtwo/lw.cbF ()I
      // 0d: putfield sixtwo/lw.dRLBH I
      // 10: invokestatic sixtwo/lw.cbS ()[Ljava/lang/String;
      // 13: bipush 0
      // 14: istore 4
      // 16: astore 3
      // 17: aload 0
      // 18: getfield sixtwo/lw.dRLBH I
      // 1b: aload 3
      // 1c: ifnull ab
      // 1f: ifle a9
      // 22: goto 29
      // 25: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 28: athrow
      // 29: bipush 0
      // 2a: istore 5
      // 2c: iload 4
      // 2e: aload 0
      // 2f: getfield sixtwo/lw.dRLBH I
      // 32: if_icmpge 84
      // 35: aload 0
      // 36: getfield sixtwo/lw.HYawK Ljava/io/BufferedInputStream;
      // 39: aload 0
      // 3a: getfield sixtwo/lw.Raost [B
      // 3d: iload 4
      // 3f: aload 0
      // 40: getfield sixtwo/lw.dRLBH I
      // 43: iload 4
      // 45: isub
      // 46: invokevirtual java/io/BufferedInputStream.read ([BII)I
      // 49: istore 5
      // 4b: iload 5
      // 4d: bipush -1
      // 4e: aload 3
      // 4f: ifnull 9a
      // 52: aload 3
      // 53: ifnull 7d
      // 56: goto 5d
      // 59: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 5c: athrow
      // 5d: if_icmpne 72
      // 60: goto 67
      // 63: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 66: athrow
      // 67: aload 3
      // 68: ifnonnull 84
      // 6b: goto 72
      // 6e: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 71: athrow
      // 72: iload 4
      // 74: iload 5
      // 76: goto 7d
      // 79: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 7c: athrow
      // 7d: iadd
      // 7e: istore 4
      // 80: aload 3
      // 81: ifnonnull 2c
      // 84: goto 89
      // 87: astore 5
      // 89: iload 4
      // 8b: aload 3
      // 8c: ifnull ab
      // 8f: aload 0
      // 90: getfield sixtwo/lw.dRLBH I
      // 93: goto 9a
      // 96: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 99: athrow
      // 9a: if_icmpge a9
      // 9d: aload 0
      // 9e: bipush 1
      // 9f: putfield sixtwo/lw.kCzBe I
      // a2: goto a9
      // a5: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // a8: athrow
      // a9: iload 4
      // ab: ireturn
   }

   protected void cbw() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lw.mhICS J
      // 003: ldc2_w 38001354144847
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/lw.cbS ()[Ljava/lang/String;
      // 00b: aload 0
      // 00c: getfield sixtwo/lw.VCUiV Ljava/awt/image/BufferedImage;
      // 00f: invokevirtual java/awt/image/BufferedImage.getRaster ()Ljava/awt/image/WritableRaster;
      // 012: invokevirtual java/awt/image/WritableRaster.getDataBuffer ()Ljava/awt/image/DataBuffer;
      // 015: checkcast java/awt/image/DataBufferInt
      // 018: invokevirtual java/awt/image/DataBufferInt.getData ()[I
      // 01b: astore 4
      // 01d: astore 3
      // 01e: aload 0
      // 01f: getfield sixtwo/lw.qfWPV I
      // 022: aload 3
      // 023: ifnull 123
      // 026: ifle 122
      // 029: goto 030
      // 02c: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 02f: athrow
      // 030: aload 0
      // 031: aload 3
      // 032: ifnull 086
      // 035: goto 03c
      // 038: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 03b: athrow
      // 03c: getfield sixtwo/lw.qfWPV I
      // 03f: bipush 3
      // 040: if_icmpne 085
      // 043: goto 04a
      // 046: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 049: athrow
      // 04a: aload 0
      // 04b: getfield sixtwo/lw.iOjiE I
      // 04e: bipush 2
      // 04f: isub
      // 050: istore 5
      // 052: aload 3
      // 053: ifnull 075
      // 056: iload 5
      // 058: ifle 079
      // 05b: goto 062
      // 05e: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 061: athrow
      // 062: aload 0
      // 063: aload 0
      // 064: iload 5
      // 066: bipush 1
      // 067: isub
      // 068: invokevirtual sixtwo/lw.cbx (I)Ljava/awt/image/BufferedImage;
      // 06b: putfield sixtwo/lw.mEYhc Ljava/awt/image/BufferedImage;
      // 06e: goto 075
      // 071: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 074: athrow
      // 075: aload 3
      // 076: ifnonnull 085
      // 079: aload 0
      // 07a: aconst_null
      // 07b: putfield sixtwo/lw.mEYhc Ljava/awt/image/BufferedImage;
      // 07e: goto 085
      // 081: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 084: athrow
      // 085: aload 0
      // 086: getfield sixtwo/lw.mEYhc Ljava/awt/image/BufferedImage;
      // 089: aload 3
      // 08a: ifnull 0a2
      // 08d: ifnull 122
      // 090: goto 097
      // 093: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 096: athrow
      // 097: aload 0
      // 098: getfield sixtwo/lw.mEYhc Ljava/awt/image/BufferedImage;
      // 09b: goto 0a2
      // 09e: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0a1: athrow
      // 0a2: invokevirtual java/awt/image/BufferedImage.getRaster ()Ljava/awt/image/WritableRaster;
      // 0a5: invokevirtual java/awt/image/WritableRaster.getDataBuffer ()Ljava/awt/image/DataBuffer;
      // 0a8: checkcast java/awt/image/DataBufferInt
      // 0ab: invokevirtual java/awt/image/DataBufferInt.getData ()[I
      // 0ae: astore 5
      // 0b0: aload 5
      // 0b2: bipush 0
      // 0b3: aload 4
      // 0b5: bipush 0
      // 0b6: aload 0
      // 0b7: getfield sixtwo/lw.yvHap I
      // 0ba: aload 0
      // 0bb: getfield sixtwo/lw.HROeA I
      // 0be: imul
      // 0bf: invokestatic java/lang/System.arraycopy (Ljava/lang/Object;ILjava/lang/Object;II)V
      // 0c2: aload 0
      // 0c3: getfield sixtwo/lw.qfWPV I
      // 0c6: aload 3
      // 0c7: ifnull 123
      // 0ca: bipush 2
      // 0cb: if_icmpne 122
      // 0ce: goto 0d5
      // 0d1: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0d4: athrow
      // 0d5: aload 0
      // 0d6: getfield sixtwo/lw.VCUiV Ljava/awt/image/BufferedImage;
      // 0d9: invokevirtual java/awt/image/BufferedImage.createGraphics ()Ljava/awt/Graphics2D;
      // 0dc: astore 6
      // 0de: aconst_null
      // 0df: astore 7
      // 0e1: aload 0
      // 0e2: getfield sixtwo/lw.QnUEw Z
      // 0e5: ifeq 0f8
      // 0e8: new java/awt/Color
      // 0eb: dup
      // 0ec: bipush 0
      // 0ed: bipush 0
      // 0ee: bipush 0
      // 0ef: bipush 0
      // 0f0: invokespecial java/awt/Color.<init> (IIII)V
      // 0f3: astore 7
      // 0f5: goto 105
      // 0f8: new java/awt/Color
      // 0fb: dup
      // 0fc: aload 0
      // 0fd: getfield sixtwo/lw.miitl I
      // 100: invokespecial java/awt/Color.<init> (I)V
      // 103: astore 7
      // 105: aload 6
      // 107: aload 7
      // 109: invokevirtual java/awt/Graphics2D.setColor (Ljava/awt/Color;)V
      // 10c: aload 6
      // 10e: getstatic java/awt/AlphaComposite.Src Ljava/awt/AlphaComposite;
      // 111: invokevirtual java/awt/Graphics2D.setComposite (Ljava/awt/Composite;)V
      // 114: aload 6
      // 116: aload 0
      // 117: getfield sixtwo/lw.AecSu Ljava/awt/Rectangle;
      // 11a: invokevirtual java/awt/Graphics2D.fill (Ljava/awt/Shape;)V
      // 11d: aload 6
      // 11f: invokevirtual java/awt/Graphics2D.dispose ()V
      // 122: bipush 1
      // 123: istore 5
      // 125: sipush 1325
      // 128: ldc2_w 4284572087937691370
      // 12b: lload 1
      // 12c: lxor
      // 12d: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 132: istore 6
      // 134: bipush 0
      // 135: istore 7
      // 137: bipush 0
      // 138: istore 8
      // 13a: iload 8
      // 13c: aload 0
      // 13d: getfield sixtwo/lw.Heeou I
      // 140: if_icmpge 281
      // 143: iload 8
      // 145: istore 9
      // 147: aload 0
      // 148: getfield sixtwo/lw.nztLI Z
      // 14b: aload 3
      // 14c: ifnull 1dc
      // 14f: ifeq 1c6
      // 152: goto 159
      // 155: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 158: athrow
      // 159: iload 7
      // 15b: aload 0
      // 15c: getfield sixtwo/lw.Heeou I
      // 15f: aload 3
      // 160: ifnull 1c3
      // 163: goto 16a
      // 166: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 169: athrow
      // 16a: if_icmplt 1bb
      // 16d: goto 174
      // 170: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 173: athrow
      // 174: iinc 5 1
      // 177: iload 5
      // 179: aload 3
      // 17a: ifnull 1c4
      // 17d: goto 184
      // 180: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 183: athrow
      // 184: tableswitch 55 2 4 32 39 49
      // 1a0: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 1a3: athrow
      // 1a4: bipush 4
      // 1a5: istore 7
      // 1a7: aload 3
      // 1a8: ifnonnull 1bb
      // 1ab: bipush 2
      // 1ac: istore 7
      // 1ae: bipush 4
      // 1af: istore 6
      // 1b1: aload 3
      // 1b2: ifnonnull 1bb
      // 1b5: bipush 1
      // 1b6: istore 7
      // 1b8: bipush 2
      // 1b9: istore 6
      // 1bb: iload 7
      // 1bd: istore 9
      // 1bf: iload 7
      // 1c1: iload 6
      // 1c3: iadd
      // 1c4: istore 7
      // 1c6: iload 9
      // 1c8: aload 0
      // 1c9: getfield sixtwo/lw.TKEYU I
      // 1cc: iadd
      // 1cd: istore 9
      // 1cf: aload 3
      // 1d0: ifnull 27d
      // 1d3: iload 9
      // 1d5: goto 1dc
      // 1d8: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 1db: athrow
      // 1dc: aload 0
      // 1dd: getfield sixtwo/lw.HROeA I
      // 1e0: if_icmpge 27a
      // 1e3: iload 9
      // 1e5: aload 0
      // 1e6: getfield sixtwo/lw.yvHap I
      // 1e9: imul
      // 1ea: istore 10
      // 1ec: iload 10
      // 1ee: aload 0
      // 1ef: getfield sixtwo/lw.FxXIz I
      // 1f2: iadd
      // 1f3: istore 11
      // 1f5: iload 11
      // 1f7: aload 0
      // 1f8: getfield sixtwo/lw.kfgBG I
      // 1fb: iadd
      // 1fc: istore 12
      // 1fe: iload 10
      // 200: aload 0
      // 201: getfield sixtwo/lw.yvHap I
      // 204: iadd
      // 205: iload 12
      // 207: aload 3
      // 208: ifnull 224
      // 20b: if_icmpge 21e
      // 20e: goto 215
      // 211: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 214: athrow
      // 215: iload 10
      // 217: aload 0
      // 218: getfield sixtwo/lw.yvHap I
      // 21b: iadd
      // 21c: istore 12
      // 21e: iload 8
      // 220: aload 0
      // 221: getfield sixtwo/lw.kfgBG I
      // 224: imul
      // 225: istore 13
      // 227: iload 11
      // 229: iload 12
      // 22b: if_icmpge 27a
      // 22e: aload 0
      // 22f: getfield sixtwo/lw.TqXuX [B
      // 232: iload 13
      // 234: iinc 13 1
      // 237: baload
      // 238: sipush 19115
      // 23b: ldc2_w 4599231352409727349
      // 23e: lload 1
      // 23f: lxor
      // 240: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 245: iand
      // 246: istore 14
      // 248: aload 0
      // 249: getfield sixtwo/lw.tgdGD [I
      // 24c: iload 14
      // 24e: iaload
      // 24f: istore 15
      // 251: aload 3
      // 252: ifnull 276
      // 255: iload 15
      // 257: aload 3
      // 258: ifnull 13c
      // 25b: goto 262
      // 25e: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 261: athrow
      // 262: ifeq 273
      // 265: aload 4
      // 267: iload 11
      // 269: iload 15
      // 26b: iastore
      // 26c: goto 273
      // 26f: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 272: athrow
      // 273: iinc 11 1
      // 276: aload 3
      // 277: ifnonnull 227
      // 27a: iinc 8 1
      // 27d: aload 3
      // 27e: ifnonnull 13a
      // 281: return
   }

   public Dimension cby() {
      return new Dimension(this.yvHap, this.HROeA);
   }

   protected void cbK() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lw.mhICS J
      // 003: ldc2_w 70484606647676
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/lw.cbS ()[Ljava/lang/String;
      // 00b: new java/lang/StringBuilder
      // 00e: dup
      // 00f: invokespecial java/lang/StringBuilder.<init> ()V
      // 012: astore 4
      // 014: astore 3
      // 015: bipush 0
      // 016: istore 5
      // 018: iload 5
      // 01a: sipush 3240
      // 01d: ldc2_w 3043859059088123460
      // 020: lload 1
      // 021: lxor
      // 022: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 027: if_icmpge 04b
      // 02a: aload 0
      // 02b: invokevirtual sixtwo/lw.cbF ()I
      // 02e: istore 6
      // 030: aload 4
      // 032: iload 6
      // 034: i2c
      // 035: invokevirtual java/lang/StringBuilder.append (C)Ljava/lang/StringBuilder;
      // 038: pop
      // 039: iinc 5 1
      // 03c: aload 3
      // 03d: ifnull 07c
      // 040: aload 3
      // 041: ifnonnull 018
      // 044: goto 04b
      // 047: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 04a: athrow
      // 04b: aload 4
      // 04d: invokevirtual java/lang/StringBuilder.toString ()Ljava/lang/String;
      // 050: sipush 14465
      // 053: ldc2_w 1392001780511925582
      // 056: lload 1
      // 057: lxor
      // 058: invokedynamic k (IJ)Ljava/lang/String; bsm=sixtwo/lw.cbX (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 05d: invokevirtual java/lang/String.startsWith (Ljava/lang/String;)Z
      // 060: aload 3
      // 061: ifnull 080
      // 064: ifne 078
      // 067: goto 06e
      // 06a: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 06d: athrow
      // 06e: aload 0
      // 06f: bipush 1
      // 070: putfield sixtwo/lw.kCzBe I
      // 073: return
      // 074: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 077: athrow
      // 078: aload 0
      // 079: invokevirtual sixtwo/lw.cbM ()V
      // 07c: aload 0
      // 07d: getfield sixtwo/lw.EZnCM Z
      // 080: aload 3
      // 081: ifnull 0a4
      // 084: ifeq 120
      // 087: goto 08e
      // 08a: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 08d: athrow
      // 08e: aload 0
      // 08f: aload 3
      // 090: ifnull 0bb
      // 093: goto 09a
      // 096: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 099: athrow
      // 09a: invokevirtual sixtwo/lw.cbD ()Z
      // 09d: goto 0a4
      // 0a0: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0a3: athrow
      // 0a4: ifne 120
      // 0a7: aload 0
      // 0a8: aload 0
      // 0a9: aload 0
      // 0aa: getfield sixtwo/lw.JwAHq I
      // 0ad: invokevirtual sixtwo/lw.cbH (I)[I
      // 0b0: putfield sixtwo/lw.nUJgo [I
      // 0b3: aload 0
      // 0b4: goto 0bb
      // 0b7: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0ba: athrow
      // 0bb: aload 3
      // 0bc: ifnull 0d7
      // 0bf: getfield sixtwo/lw.nUJgo [I
      // 0c2: ifnonnull 0d6
      // 0c5: goto 0cc
      // 0c8: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0cb: athrow
      // 0cc: aload 0
      // 0cd: bipush 1
      // 0ce: putfield sixtwo/lw.kCzBe I
      // 0d1: return
      // 0d2: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0d5: athrow
      // 0d6: aload 0
      // 0d7: aload 3
      // 0d8: ifnull 10e
      // 0db: getfield sixtwo/lw.QeHiv I
      // 0de: iflt 106
      // 0e1: goto 0e8
      // 0e4: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0e7: athrow
      // 0e8: aload 0
      // 0e9: aload 3
      // 0ea: ifnull 114
      // 0ed: goto 0f4
      // 0f0: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0f3: athrow
      // 0f4: getfield sixtwo/lw.QeHiv I
      // 0f7: aload 0
      // 0f8: getfield sixtwo/lw.nUJgo [I
      // 0fb: arraylength
      // 0fc: if_icmplt 113
      // 0ff: goto 106
      // 102: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 105: athrow
      // 106: aload 0
      // 107: goto 10e
      // 10a: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 10d: athrow
      // 10e: bipush 1
      // 10f: putfield sixtwo/lw.kCzBe I
      // 112: return
      // 113: aload 0
      // 114: aload 0
      // 115: getfield sixtwo/lw.nUJgo [I
      // 118: aload 0
      // 119: getfield sixtwo/lw.QeHiv I
      // 11c: iaload
      // 11d: putfield sixtwo/lw.OcGcZ I
      // 120: return
   }

   private static CallSite cbX(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cbW".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/lw" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   protected boolean cbD() {
      long var1 = mhICS ^ 7250138881590L;
      String[] var3 = cbS();

      try {
         if (var3 == null) {
            return (boolean)this.kCzBe;
         }

         if (this.kCzBe != 0) {
            return (boolean)1;
         }
      } catch (MatchException var4) {
         throw cbT(var4);
      }

      return (boolean)0;
   }

   protected void cbC() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lw.mhICS J
      // 003: ldc2_w 4029862386476
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/lw.cbS ()[Ljava/lang/String;
      // 00b: bipush -1
      // 00c: istore 4
      // 00e: astore 3
      // 00f: aload 0
      // 010: getfield sixtwo/lw.kfgBG I
      // 013: aload 0
      // 014: getfield sixtwo/lw.Heeou I
      // 017: imul
      // 018: istore 5
      // 01a: aload 0
      // 01b: aload 3
      // 01c: ifnull 050
      // 01f: getfield sixtwo/lw.TqXuX [B
      // 022: ifnull 048
      // 025: goto 02c
      // 028: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 02b: athrow
      // 02c: aload 0
      // 02d: aload 3
      // 02e: ifnull 058
      // 031: goto 038
      // 034: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 037: athrow
      // 038: getfield sixtwo/lw.TqXuX [B
      // 03b: arraylength
      // 03c: iload 5
      // 03e: if_icmpge 057
      // 041: goto 048
      // 044: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 047: athrow
      // 048: aload 0
      // 049: goto 050
      // 04c: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 04f: athrow
      // 050: iload 5
      // 052: newarray 8
      // 054: putfield sixtwo/lw.TqXuX [B
      // 057: aload 0
      // 058: aload 3
      // 059: ifnull 084
      // 05c: getfield sixtwo/lw.LACSj [S
      // 05f: ifnonnull 083
      // 062: goto 069
      // 065: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 068: athrow
      // 069: aload 0
      // 06a: sipush 11495
      // 06d: ldc2_w 8667973413676097614
      // 070: lload 1
      // 071: lxor
      // 072: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 077: newarray 9
      // 079: putfield sixtwo/lw.LACSj [S
      // 07c: goto 083
      // 07f: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 082: athrow
      // 083: aload 0
      // 084: getfield sixtwo/lw.MzFcm [B
      // 087: aload 3
      // 088: ifnull 0be
      // 08b: ifnonnull 0af
      // 08e: goto 095
      // 091: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 094: athrow
      // 095: aload 0
      // 096: sipush 28758
      // 099: ldc2_w 5374212001158331636
      // 09c: lload 1
      // 09d: lxor
      // 09e: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0a3: newarray 8
      // 0a5: putfield sixtwo/lw.MzFcm [B
      // 0a8: goto 0af
      // 0ab: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0ae: athrow
      // 0af: aload 0
      // 0b0: aload 3
      // 0b1: ifnull 0dc
      // 0b4: getfield sixtwo/lw.WzUAy [B
      // 0b7: goto 0be
      // 0ba: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0bd: athrow
      // 0be: ifnonnull 0db
      // 0c1: aload 0
      // 0c2: sipush 12952
      // 0c5: ldc2_w 4043298412152962619
      // 0c8: lload 1
      // 0c9: lxor
      // 0ca: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0cf: newarray 8
      // 0d1: putfield sixtwo/lw.WzUAy [B
      // 0d4: goto 0db
      // 0d7: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0da: athrow
      // 0db: aload 0
      // 0dc: invokevirtual sixtwo/lw.cbF ()I
      // 0df: istore 18
      // 0e1: bipush 1
      // 0e2: iload 18
      // 0e4: ishl
      // 0e5: istore 7
      // 0e7: iload 7
      // 0e9: bipush 1
      // 0ea: iadd
      // 0eb: istore 10
      // 0ed: iload 7
      // 0ef: bipush 2
      // 0f0: iadd
      // 0f1: istore 6
      // 0f3: iload 4
      // 0f5: istore 12
      // 0f7: iload 18
      // 0f9: bipush 1
      // 0fa: iadd
      // 0fb: istore 9
      // 0fd: bipush 1
      // 0fe: iload 9
      // 100: ishl
      // 101: bipush 1
      // 102: isub
      // 103: istore 8
      // 105: bipush 0
      // 106: istore 14
      // 108: iload 14
      // 10a: iload 7
      // 10c: if_icmpge 12e
      // 10f: aload 0
      // 110: getfield sixtwo/lw.LACSj [S
      // 113: iload 14
      // 115: bipush 0
      // 116: sastore
      // 117: aload 0
      // 118: getfield sixtwo/lw.MzFcm [B
      // 11b: iload 14
      // 11d: iload 14
      // 11f: i2b
      // 120: bastore
      // 121: iinc 14 1
      // 124: aload 3
      // 125: ifnonnull 108
      // 128: ldc_w "oltVL"
      // 12b: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 12e: bipush 0
      // 12f: dup
      // 130: istore 21
      // 132: dup
      // 133: istore 22
      // 135: dup
      // 136: istore 20
      // 138: dup
      // 139: istore 19
      // 13b: dup
      // 13c: istore 15
      // 13e: dup
      // 13f: istore 13
      // 141: istore 17
      // 143: bipush 0
      // 144: istore 16
      // 146: iload 16
      // 148: iload 5
      // 14a: if_icmpge 3bd
      // 14d: iload 20
      // 14f: aload 3
      // 150: ifnull 3bf
      // 153: aload 3
      // 154: ifnull 16a
      // 157: goto 15e
      // 15a: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 15d: athrow
      // 15e: ifne 3a2
      // 161: goto 168
      // 164: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 167: athrow
      // 168: iload 13
      // 16a: iload 9
      // 16c: aload 3
      // 16d: ifnull 20a
      // 170: if_icmpge 1e6
      // 173: goto 17a
      // 176: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 179: athrow
      // 17a: iload 15
      // 17c: aload 3
      // 17d: ifnull 1d7
      // 180: goto 187
      // 183: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 186: athrow
      // 187: ifne 1bc
      // 18a: goto 191
      // 18d: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 190: athrow
      // 191: aload 0
      // 192: invokevirtual sixtwo/lw.cbG ()I
      // 195: istore 15
      // 197: iload 15
      // 199: aload 3
      // 19a: ifnull 1ba
      // 19d: ifgt 1b2
      // 1a0: goto 1a7
      // 1a3: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 1a6: athrow
      // 1a7: aload 3
      // 1a8: ifnonnull 3bd
      // 1ab: goto 1b2
      // 1ae: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 1b1: athrow
      // 1b2: bipush 0
      // 1b3: goto 1ba
      // 1b6: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 1b9: athrow
      // 1ba: istore 21
      // 1bc: iload 17
      // 1be: aload 0
      // 1bf: getfield sixtwo/lw.Raost [B
      // 1c2: iload 21
      // 1c4: baload
      // 1c5: sipush 19115
      // 1c8: ldc2_w 4599267763654641174
      // 1cb: lload 1
      // 1cc: lxor
      // 1cd: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1d2: iand
      // 1d3: iload 13
      // 1d5: ishl
      // 1d6: iadd
      // 1d7: istore 17
      // 1d9: iinc 13 8
      // 1dc: iinc 21 1
      // 1df: iinc 15 -1
      // 1e2: aload 3
      // 1e3: ifnonnull 146
      // 1e6: iload 17
      // 1e8: iload 8
      // 1ea: iand
      // 1eb: istore 14
      // 1ed: iload 17
      // 1ef: iload 9
      // 1f1: ishr
      // 1f2: istore 17
      // 1f4: iload 13
      // 1f6: iload 9
      // 1f8: isub
      // 1f9: istore 13
      // 1fb: iload 14
      // 1fd: aload 3
      // 1fe: ifnull 3bf
      // 201: iload 6
      // 203: goto 20a
      // 206: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 209: athrow
      // 20a: if_icmpgt 3bd
      // 20d: iload 14
      // 20f: iload 10
      // 211: aload 3
      // 212: ifnull 23c
      // 215: goto 21c
      // 218: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 21b: athrow
      // 21c: if_icmpne 231
      // 21f: goto 226
      // 222: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 225: athrow
      // 226: aload 3
      // 227: ifnonnull 3bd
      // 22a: goto 231
      // 22d: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 230: athrow
      // 231: iload 14
      // 233: iload 7
      // 235: goto 23c
      // 238: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 23b: athrow
      // 23c: aload 3
      // 23d: ifnull 275
      // 240: if_icmpne 266
      // 243: goto 24a
      // 246: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 249: athrow
      // 24a: iload 18
      // 24c: bipush 1
      // 24d: iadd
      // 24e: istore 9
      // 250: bipush 1
      // 251: iload 9
      // 253: ishl
      // 254: bipush 1
      // 255: isub
      // 256: istore 8
      // 258: iload 7
      // 25a: bipush 2
      // 25b: iadd
      // 25c: istore 6
      // 25e: iload 4
      // 260: istore 12
      // 262: aload 3
      // 263: ifnonnull 146
      // 266: iload 12
      // 268: aload 3
      // 269: ifnull 297
      // 26c: iload 4
      // 26e: goto 275
      // 271: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 274: athrow
      // 275: if_icmpne 295
      // 278: aload 0
      // 279: getfield sixtwo/lw.WzUAy [B
      // 27c: iload 20
      // 27e: iinc 20 1
      // 281: aload 0
      // 282: getfield sixtwo/lw.MzFcm [B
      // 285: iload 14
      // 287: baload
      // 288: bastore
      // 289: iload 14
      // 28b: istore 12
      // 28d: iload 14
      // 28f: istore 19
      // 291: aload 3
      // 292: ifnonnull 146
      // 295: iload 14
      // 297: istore 11
      // 299: iload 14
      // 29b: iload 6
      // 29d: aload 3
      // 29e: ifnull 2c0
      // 2a1: if_icmpne 2bc
      // 2a4: goto 2ab
      // 2a7: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 2aa: athrow
      // 2ab: aload 0
      // 2ac: getfield sixtwo/lw.WzUAy [B
      // 2af: iload 20
      // 2b1: iinc 20 1
      // 2b4: iload 19
      // 2b6: i2b
      // 2b7: bastore
      // 2b8: iload 12
      // 2ba: istore 14
      // 2bc: iload 14
      // 2be: iload 7
      // 2c0: if_icmple 2ec
      // 2c3: aload 0
      // 2c4: getfield sixtwo/lw.WzUAy [B
      // 2c7: iload 20
      // 2c9: iinc 20 1
      // 2cc: aload 0
      // 2cd: getfield sixtwo/lw.MzFcm [B
      // 2d0: iload 14
      // 2d2: baload
      // 2d3: bastore
      // 2d4: aload 0
      // 2d5: getfield sixtwo/lw.LACSj [S
      // 2d8: iload 14
      // 2da: saload
      // 2db: istore 14
      // 2dd: aload 3
      // 2de: ifnull 303
      // 2e1: aload 3
      // 2e2: ifnonnull 2bc
      // 2e5: goto 2ec
      // 2e8: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 2eb: athrow
      // 2ec: aload 0
      // 2ed: getfield sixtwo/lw.MzFcm [B
      // 2f0: iload 14
      // 2f2: baload
      // 2f3: sipush 19115
      // 2f6: ldc2_w 4599267763654641174
      // 2f9: lload 1
      // 2fa: lxor
      // 2fb: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 300: iand
      // 301: istore 19
      // 303: iload 6
      // 305: sipush 28758
      // 308: ldc2_w 5374212001158331636
      // 30b: lload 1
      // 30c: lxor
      // 30d: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 312: aload 3
      // 313: ifnull 360
      // 316: if_icmplt 338
      // 319: goto 320
      // 31c: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 31f: athrow
      // 320: aload 0
      // 321: getfield sixtwo/lw.WzUAy [B
      // 324: iload 20
      // 326: iinc 20 1
      // 329: iload 19
      // 32b: i2b
      // 32c: bastore
      // 32d: aload 3
      // 32e: ifnonnull 146
      // 331: goto 338
      // 334: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 337: athrow
      // 338: aload 0
      // 339: getfield sixtwo/lw.WzUAy [B
      // 33c: iload 20
      // 33e: iinc 20 1
      // 341: iload 19
      // 343: i2b
      // 344: bastore
      // 345: aload 0
      // 346: getfield sixtwo/lw.LACSj [S
      // 349: iload 6
      // 34b: iload 12
      // 34d: i2s
      // 34e: sastore
      // 34f: aload 0
      // 350: getfield sixtwo/lw.MzFcm [B
      // 353: iload 6
      // 355: iload 19
      // 357: i2b
      // 358: bastore
      // 359: iinc 6 1
      // 35c: iload 6
      // 35e: iload 8
      // 360: iand
      // 361: aload 3
      // 362: ifnull 3a0
      // 365: ifne 39e
      // 368: goto 36f
      // 36b: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 36e: athrow
      // 36f: iload 6
      // 371: aload 3
      // 372: ifnull 3a0
      // 375: goto 37c
      // 378: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 37b: athrow
      // 37c: sipush 28758
      // 37f: ldc2_w 5374212001158331636
      // 382: lload 1
      // 383: lxor
      // 384: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 389: if_icmpge 39e
      // 38c: goto 393
      // 38f: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 392: athrow
      // 393: iinc 9 1
      // 396: bipush 1
      // 397: iload 9
      // 399: ishl
      // 39a: bipush 1
      // 39b: isub
      // 39c: istore 8
      // 39e: iload 11
      // 3a0: istore 12
      // 3a2: iinc 20 -1
      // 3a5: aload 0
      // 3a6: getfield sixtwo/lw.TqXuX [B
      // 3a9: iload 22
      // 3ab: iinc 22 1
      // 3ae: aload 0
      // 3af: getfield sixtwo/lw.WzUAy [B
      // 3b2: iload 20
      // 3b4: baload
      // 3b5: bastore
      // 3b6: iinc 16 1
      // 3b9: aload 3
      // 3ba: ifnonnull 146
      // 3bd: iload 22
      // 3bf: istore 16
      // 3c1: iload 16
      // 3c3: iload 5
      // 3c5: if_icmpge 3d7
      // 3c8: aload 0
      // 3c9: getfield sixtwo/lw.TqXuX [B
      // 3cc: iload 16
      // 3ce: bipush 0
      // 3cf: bastore
      // 3d0: iinc 16 1
      // 3d3: aload 3
      // 3d4: ifnonnull 3c1
      // 3d7: return
   }

   protected int[] cbH(int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lw.mhICS J
      // 003: ldc2_w 76933125859298
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/lw.cbS ()[Ljava/lang/String;
      // 00b: bipush 3
      // 00c: iload 1
      // 00d: imul
      // 00e: istore 5
      // 010: iload 5
      // 012: newarray 8
      // 014: astore 6
      // 016: astore 4
      // 018: bipush 0
      // 019: istore 7
      // 01b: iload 7
      // 01d: iload 5
      // 01f: if_icmpge 071
      // 022: aload 0
      // 023: getfield sixtwo/lw.HYawK Ljava/io/BufferedInputStream;
      // 026: aload 6
      // 028: iload 7
      // 02a: iload 5
      // 02c: iload 7
      // 02e: isub
      // 02f: invokevirtual java/io/BufferedInputStream.read ([BII)I
      // 032: istore 8
      // 034: iload 8
      // 036: bipush -1
      // 037: aload 4
      // 039: ifnull 084
      // 03c: aload 4
      // 03e: ifnull 069
      // 041: goto 048
      // 044: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 047: athrow
      // 048: if_icmpne 05e
      // 04b: goto 052
      // 04e: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 051: athrow
      // 052: aload 4
      // 054: ifnonnull 071
      // 057: goto 05e
      // 05a: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 05d: athrow
      // 05e: iload 7
      // 060: iload 8
      // 062: goto 069
      // 065: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 068: athrow
      // 069: iadd
      // 06a: istore 7
      // 06c: aload 4
      // 06e: ifnonnull 01b
      // 071: goto 080
      // 074: astore 8
      // 076: aload 8
      // 078: invokevirtual java/io/IOException.printStackTrace ()V
      // 07b: aload 0
      // 07c: bipush 1
      // 07d: putfield sixtwo/lw.kCzBe I
      // 080: iload 7
      // 082: iload 5
      // 084: aload 4
      // 086: ifnull 129
      // 089: if_icmpge 11b
      // 08c: goto 093
      // 08f: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 092: athrow
      // 093: aload 0
      // 094: bipush 1
      // 095: putfield sixtwo/lw.kCzBe I
      // 098: sipush 9990
      // 09b: ldc2_w 6380049031520835439
      // 09e: lload 2
      // 09f: lxor
      // 0a0: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0a5: iload 1
      // 0a6: invokestatic java/lang/Math.max (II)I
      // 0a9: newarray 10
      // 0ab: astore 8
      // 0ad: bipush 0
      // 0ae: istore 9
      // 0b0: iload 9
      // 0b2: iload 1
      // 0b3: if_icmpge 118
      // 0b6: iload 9
      // 0b8: i2f
      // 0b9: bipush 1
      // 0ba: iload 1
      // 0bb: bipush 1
      // 0bc: isub
      // 0bd: invokestatic java/lang/Math.max (II)I
      // 0c0: i2f
      // 0c1: fdiv
      // 0c2: ldc_w 255.0
      // 0c5: fmul
      // 0c6: f2i
      // 0c7: istore 10
      // 0c9: sipush 28899
      // 0cc: ldc2_w 3949454177314537626
      // 0cf: lload 2
      // 0d0: lxor
      // 0d1: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0d6: iload 10
      // 0d8: sipush 20587
      // 0db: ldc2_w 1727311525069201438
      // 0de: lload 2
      // 0df: lxor
      // 0e0: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0e5: ishl
      // 0e6: ior
      // 0e7: iload 10
      // 0e9: sipush 1325
      // 0ec: ldc2_w 4284538335977928007
      // 0ef: lload 2
      // 0f0: lxor
      // 0f1: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0f6: ishl
      // 0f7: ior
      // 0f8: iload 10
      // 0fa: ior
      // 0fb: istore 11
      // 0fd: aload 8
      // 0ff: aload 4
      // 101: ifnull 11a
      // 104: iload 9
      // 106: iload 11
      // 108: iastore
      // 109: iinc 9 1
      // 10c: aload 4
      // 10e: ifnonnull 0b0
      // 111: goto 118
      // 114: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 117: athrow
      // 118: aload 8
      // 11a: areturn
      // 11b: sipush 9990
      // 11e: ldc2_w 6380049031520835439
      // 121: lload 2
      // 122: lxor
      // 123: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 128: iload 1
      // 129: invokestatic java/lang/Math.max (II)I
      // 12c: istore 8
      // 12e: iload 8
      // 130: newarray 10
      // 132: astore 9
      // 134: bipush 0
      // 135: istore 10
      // 137: bipush 0
      // 138: istore 11
      // 13a: iload 10
      // 13c: iload 1
      // 13d: if_icmpge 1d3
      // 140: aload 6
      // 142: iload 11
      // 144: iinc 11 1
      // 147: baload
      // 148: sipush 19115
      // 14b: ldc2_w 4599204343549082328
      // 14e: lload 2
      // 14f: lxor
      // 150: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 155: iand
      // 156: istore 12
      // 158: aload 6
      // 15a: iload 11
      // 15c: iinc 11 1
      // 15f: baload
      // 160: sipush 19115
      // 163: ldc2_w 4599204343549082328
      // 166: lload 2
      // 167: lxor
      // 168: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 16d: iand
      // 16e: istore 13
      // 170: aload 6
      // 172: iload 11
      // 174: iinc 11 1
      // 177: baload
      // 178: sipush 19115
      // 17b: ldc2_w 4599204343549082328
      // 17e: lload 2
      // 17f: lxor
      // 180: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 185: iand
      // 186: istore 14
      // 188: aload 9
      // 18a: aload 4
      // 18c: ifnull 1d5
      // 18f: iload 10
      // 191: iinc 10 1
      // 194: sipush 2812
      // 197: ldc2_w 7604460908953729672
      // 19a: lload 2
      // 19b: lxor
      // 19c: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1a1: iload 12
      // 1a3: sipush 21552
      // 1a6: ldc2_w 8467297619731227718
      // 1a9: lload 2
      // 1aa: lxor
      // 1ab: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1b0: ishl
      // 1b1: ior
      // 1b2: iload 13
      // 1b4: sipush 1325
      // 1b7: ldc2_w 4284538335977928007
      // 1ba: lload 2
      // 1bb: lxor
      // 1bc: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1c1: ishl
      // 1c2: ior
      // 1c3: iload 14
      // 1c5: ior
      // 1c6: iastore
      // 1c7: aload 4
      // 1c9: ifnonnull 13a
      // 1cc: goto 1d3
      // 1cf: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 1d2: athrow
      // 1d3: aload 9
      // 1d5: areturn
   }

   protected void cbL() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lw.mhICS J
      // 003: ldc2_w 116715372390794
      // 006: lxor
      // 007: lstore 1
      // 008: aload 0
      // 009: aload 0
      // 00a: invokevirtual sixtwo/lw.cbO ()I
      // 00d: putfield sixtwo/lw.FxXIz I
      // 010: aload 0
      // 011: aload 0
      // 012: invokevirtual sixtwo/lw.cbO ()I
      // 015: putfield sixtwo/lw.TKEYU I
      // 018: aload 0
      // 019: aload 0
      // 01a: invokevirtual sixtwo/lw.cbO ()I
      // 01d: putfield sixtwo/lw.kfgBG I
      // 020: aload 0
      // 021: aload 0
      // 022: invokevirtual sixtwo/lw.cbO ()I
      // 025: putfield sixtwo/lw.Heeou I
      // 028: invokestatic sixtwo/lw.cbS ()[Ljava/lang/String;
      // 02b: aload 0
      // 02c: invokevirtual sixtwo/lw.cbF ()I
      // 02f: istore 4
      // 031: astore 3
      // 032: aload 0
      // 033: iload 4
      // 035: sipush 20898
      // 038: ldc2_w 3427162688544731052
      // 03b: lload 1
      // 03c: lxor
      // 03d: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 042: iand
      // 043: aload 3
      // 044: ifnull 052
      // 047: ifeq 055
      // 04a: goto 051
      // 04d: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 050: athrow
      // 051: bipush 1
      // 052: goto 056
      // 055: bipush 0
      // 056: putfield sixtwo/lw.EJqxz Z
      // 059: aload 0
      // 05a: iload 4
      // 05c: sipush 11994
      // 05f: ldc2_w 707646767131660505
      // 062: lload 1
      // 063: lxor
      // 064: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 069: iand
      // 06a: aload 3
      // 06b: ifnull 079
      // 06e: ifeq 07c
      // 071: goto 078
      // 074: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 077: athrow
      // 078: bipush 1
      // 079: goto 07d
      // 07c: bipush 0
      // 07d: putfield sixtwo/lw.nztLI Z
      // 080: aload 0
      // 081: bipush 2
      // 082: iload 4
      // 084: sipush 30996
      // 087: ldc2_w 2453286833574102814
      // 08a: lload 1
      // 08b: lxor
      // 08c: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 091: iand
      // 092: ishl
      // 093: putfield sixtwo/lw.XvFAo I
      // 096: aload 0
      // 097: getfield sixtwo/lw.EJqxz Z
      // 09a: aload 3
      // 09b: ifnull 0da
      // 09e: ifeq 0c7
      // 0a1: goto 0a8
      // 0a4: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0a7: athrow
      // 0a8: aload 0
      // 0a9: aload 0
      // 0aa: aload 0
      // 0ab: getfield sixtwo/lw.XvFAo I
      // 0ae: invokevirtual sixtwo/lw.cbH (I)[I
      // 0b1: putfield sixtwo/lw.ywgHj [I
      // 0b4: aload 0
      // 0b5: aload 0
      // 0b6: getfield sixtwo/lw.ywgHj [I
      // 0b9: putfield sixtwo/lw.tgdGD [I
      // 0bc: aload 3
      // 0bd: ifnonnull 0f8
      // 0c0: goto 0c7
      // 0c3: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0c6: athrow
      // 0c7: aload 0
      // 0c8: aload 0
      // 0c9: getfield sixtwo/lw.nUJgo [I
      // 0cc: putfield sixtwo/lw.tgdGD [I
      // 0cf: aload 0
      // 0d0: getfield sixtwo/lw.QeHiv I
      // 0d3: goto 0da
      // 0d6: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0d9: athrow
      // 0da: aload 3
      // 0db: ifnull 0f9
      // 0de: aload 0
      // 0df: getfield sixtwo/lw.oXvuq I
      // 0e2: if_icmpne 0f8
      // 0e5: goto 0ec
      // 0e8: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0eb: athrow
      // 0ec: aload 0
      // 0ed: bipush 0
      // 0ee: putfield sixtwo/lw.OcGcZ I
      // 0f1: goto 0f8
      // 0f4: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0f7: athrow
      // 0f8: bipush 0
      // 0f9: istore 5
      // 0fb: aload 0
      // 0fc: aload 3
      // 0fd: ifnull 123
      // 100: getfield sixtwo/lw.QnUEw Z
      // 103: ifeq 122
      // 106: goto 10d
      // 109: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 10c: athrow
      // 10d: aload 0
      // 10e: getfield sixtwo/lw.tgdGD [I
      // 111: aload 0
      // 112: getfield sixtwo/lw.oXvuq I
      // 115: iaload
      // 116: istore 5
      // 118: aload 0
      // 119: getfield sixtwo/lw.tgdGD [I
      // 11c: aload 0
      // 11d: getfield sixtwo/lw.oXvuq I
      // 120: bipush 0
      // 121: iastore
      // 122: aload 0
      // 123: aload 3
      // 124: ifnull 141
      // 127: getfield sixtwo/lw.tgdGD [I
      // 12a: ifnonnull 140
      // 12d: goto 134
      // 130: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 133: athrow
      // 134: aload 0
      // 135: bipush 1
      // 136: putfield sixtwo/lw.kCzBe I
      // 139: goto 140
      // 13c: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 13f: athrow
      // 140: aload 0
      // 141: invokevirtual sixtwo/lw.cbD ()Z
      // 144: aload 3
      // 145: ifnull 15f
      // 148: ifeq 153
      // 14b: goto 152
      // 14e: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 151: athrow
      // 152: return
      // 153: aload 0
      // 154: invokevirtual sixtwo/lw.cbC ()V
      // 157: aload 0
      // 158: invokevirtual sixtwo/lw.cbQ ()V
      // 15b: aload 0
      // 15c: invokevirtual sixtwo/lw.cbD ()Z
      // 15f: aload 3
      // 160: ifnull 1b6
      // 163: ifeq 16e
      // 166: goto 16d
      // 169: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 16c: athrow
      // 16d: return
      // 16e: aload 0
      // 16f: dup
      // 170: getfield sixtwo/lw.iOjiE I
      // 173: bipush 1
      // 174: iadd
      // 175: putfield sixtwo/lw.iOjiE I
      // 178: aload 0
      // 179: new java/awt/image/BufferedImage
      // 17c: dup
      // 17d: aload 0
      // 17e: getfield sixtwo/lw.yvHap I
      // 181: aload 0
      // 182: getfield sixtwo/lw.HROeA I
      // 185: bipush 3
      // 186: invokespecial java/awt/image/BufferedImage.<init> (III)V
      // 189: putfield sixtwo/lw.VCUiV Ljava/awt/image/BufferedImage;
      // 18c: aload 0
      // 18d: invokevirtual sixtwo/lw.cbw ()V
      // 190: aload 0
      // 191: getfield sixtwo/lw.RAaDq Ljava/util/ArrayList;
      // 194: new sixtwo/lw$uA
      // 197: dup
      // 198: aload 0
      // 199: getfield sixtwo/lw.VCUiV Ljava/awt/image/BufferedImage;
      // 19c: aload 0
      // 19d: getfield sixtwo/lw.ZBGhF I
      // 1a0: invokespecial sixtwo/lw$uA.<init> (Ljava/awt/image/BufferedImage;I)V
      // 1a3: invokevirtual java/util/ArrayList.add (Ljava/lang/Object;)Z
      // 1a6: pop
      // 1a7: aload 0
      // 1a8: aload 3
      // 1a9: ifnull 1cc
      // 1ac: getfield sixtwo/lw.QnUEw Z
      // 1af: goto 1b6
      // 1b2: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 1b5: athrow
      // 1b6: ifeq 1cb
      // 1b9: aload 0
      // 1ba: getfield sixtwo/lw.tgdGD [I
      // 1bd: aload 0
      // 1be: getfield sixtwo/lw.oXvuq I
      // 1c1: iload 5
      // 1c3: iastore
      // 1c4: goto 1cb
      // 1c7: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 1ca: athrow
      // 1cb: aload 0
      // 1cc: invokevirtual sixtwo/lw.cbP ()V
      // 1cf: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 1d2: ifnonnull 1e3
      // 1d5: bipush 4
      // 1d6: anewarray 299
      // 1d9: invokestatic sixtwo/lw.cbR ([Ljava/lang/String;)V
      // 1dc: goto 1e3
      // 1df: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 1e2: athrow
      // 1e3: return
   }

   protected void cbJ() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lw.mhICS J
      // 03: ldc2_w 111762775361931
      // 06: lxor
      // 07: lstore 1
      // 08: aload 0
      // 09: invokevirtual sixtwo/lw.cbF ()I
      // 0c: pop
      // 0d: aload 0
      // 0e: invokevirtual sixtwo/lw.cbF ()I
      // 11: istore 4
      // 13: invokestatic sixtwo/lw.cbS ()[Ljava/lang/String;
      // 16: aload 0
      // 17: iload 4
      // 19: sipush 24688
      // 1c: ldc2_w 2695643327257656945
      // 1f: lload 1
      // 20: lxor
      // 21: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 26: iand
      // 27: bipush 2
      // 28: ishr
      // 29: putfield sixtwo/lw.PXRra I
      // 2c: astore 3
      // 2d: aload 0
      // 2e: aload 3
      // 2f: ifnull 4c
      // 32: getfield sixtwo/lw.PXRra I
      // 35: ifne 4b
      // 38: goto 3f
      // 3b: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 3e: athrow
      // 3f: aload 0
      // 40: bipush 1
      // 41: putfield sixtwo/lw.PXRra I
      // 44: goto 4b
      // 47: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 4a: athrow
      // 4b: aload 0
      // 4c: iload 4
      // 4e: bipush 1
      // 4f: iand
      // 50: aload 3
      // 51: ifnull 5f
      // 54: ifeq 62
      // 57: goto 5e
      // 5a: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 5d: athrow
      // 5e: bipush 1
      // 5f: goto 63
      // 62: bipush 0
      // 63: putfield sixtwo/lw.QnUEw Z
      // 66: aload 0
      // 67: aload 0
      // 68: invokevirtual sixtwo/lw.cbO ()I
      // 6b: sipush 471
      // 6e: ldc2_w 8802806797264642015
      // 71: lload 1
      // 72: lxor
      // 73: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 78: imul
      // 79: putfield sixtwo/lw.ZBGhF I
      // 7c: aload 0
      // 7d: aload 0
      // 7e: invokevirtual sixtwo/lw.cbF ()I
      // 81: putfield sixtwo/lw.oXvuq I
      // 84: aload 0
      // 85: invokevirtual sixtwo/lw.cbF ()I
      // 88: pop
      // 89: return
   }

   private static CallSite cca(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cbZ".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/lw" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   protected void cbE() {
      this.kCzBe = 0;
      this.iOjiE = 0;
      this.RAaDq = new ArrayList();
      this.nUJgo = null;
      this.ywgHj = null;
   }

   protected void cbI() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lw.mhICS J
      // 003: ldc2_w 131679449163826
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/lw.cbS ()[Ljava/lang/String;
      // 00b: bipush 0
      // 00c: istore 4
      // 00e: astore 3
      // 00f: iload 4
      // 011: ifne 155
      // 014: aload 0
      // 015: invokevirtual sixtwo/lw.cbD ()Z
      // 018: aload 3
      // 019: ifnull 031
      // 01c: ifne 155
      // 01f: goto 026
      // 022: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 025: athrow
      // 026: aload 0
      // 027: invokevirtual sixtwo/lw.cbF ()I
      // 02a: goto 031
      // 02d: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 030: athrow
      // 031: istore 5
      // 033: aload 3
      // 034: ifnull 073
      // 037: iload 5
      // 039: lookupswitch 268 4 0 257 33 62 44 47 59 250
      // 064: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 067: athrow
      // 068: aload 0
      // 069: invokevirtual sixtwo/lw.cbL ()V
      // 06c: goto 073
      // 06f: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 072: athrow
      // 073: aload 3
      // 074: ifnonnull 151
      // 077: aload 0
      // 078: invokevirtual sixtwo/lw.cbF ()I
      // 07b: istore 5
      // 07d: aload 3
      // 07e: ifnull 12f
      // 081: iload 5
      // 083: lookupswitch 161 2 249 29 255 44
      // 09c: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 09f: athrow
      // 0a0: aload 0
      // 0a1: invokevirtual sixtwo/lw.cbJ ()V
      // 0a4: aload 3
      // 0a5: ifnonnull 151
      // 0a8: goto 0af
      // 0ab: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0ae: athrow
      // 0af: aload 0
      // 0b0: invokevirtual sixtwo/lw.cbG ()I
      // 0b3: pop
      // 0b4: ldc_w ""
      // 0b7: astore 6
      // 0b9: bipush 0
      // 0ba: istore 7
      // 0bc: iload 7
      // 0be: sipush 20823
      // 0c1: ldc2_w 6768739519161593590
      // 0c4: lload 1
      // 0c5: lxor
      // 0c6: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0cb: if_icmpge 0f1
      // 0ce: aload 6
      // 0d0: aload 0
      // 0d1: getfield sixtwo/lw.Raost [B
      // 0d4: iload 7
      // 0d6: baload
      // 0d7: i2c
      // 0d8: invokedynamic makeConcatWithConstants (Ljava/lang/String;C)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001\u0001" ]
      // 0dd: astore 6
      // 0df: iinc 7 1
      // 0e2: aload 3
      // 0e3: ifnull 120
      // 0e6: aload 3
      // 0e7: ifnonnull 0bc
      // 0ea: goto 0f1
      // 0ed: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0f0: athrow
      // 0f1: aload 6
      // 0f3: sipush 27505
      // 0f6: ldc2_w 3108280574639530994
      // 0f9: lload 1
      // 0fa: lxor
      // 0fb: invokedynamic k (IJ)Ljava/lang/String; bsm=sixtwo/lw.cbX (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 100: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 103: ifeq 115
      // 106: aload 0
      // 107: invokevirtual sixtwo/lw.cbN ()V
      // 10a: aload 3
      // 10b: ifnonnull 151
      // 10e: goto 115
      // 111: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 114: athrow
      // 115: aload 0
      // 116: invokevirtual sixtwo/lw.cbQ ()V
      // 119: goto 120
      // 11c: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 11f: athrow
      // 120: aload 3
      // 121: ifnonnull 151
      // 124: aload 0
      // 125: invokevirtual sixtwo/lw.cbQ ()V
      // 128: goto 12f
      // 12b: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 12e: athrow
      // 12f: aload 3
      // 130: ifnonnull 151
      // 133: bipush 1
      // 134: istore 4
      // 136: aload 3
      // 137: ifnonnull 151
      // 13a: aload 3
      // 13b: ifnonnull 151
      // 13e: goto 145
      // 141: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 144: athrow
      // 145: aload 0
      // 146: bipush 1
      // 147: putfield sixtwo/lw.kCzBe I
      // 14a: goto 151
      // 14d: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 150: athrow
      // 151: aload 3
      // 152: ifnonnull 00f
      // 155: return
   }

   public int cbz(BufferedInputStream param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lw.mhICS J
      // 03: ldc2_w 60017269951005
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/lw.cbS ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnull 7b
      // 13: invokevirtual sixtwo/lw.cbE ()V
      // 16: aload 1
      // 17: ifnull 73
      // 1a: goto 21
      // 1d: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 20: athrow
      // 21: aload 0
      // 22: aload 1
      // 23: putfield sixtwo/lw.HYawK Ljava/io/BufferedInputStream;
      // 26: aload 0
      // 27: invokevirtual sixtwo/lw.cbK ()V
      // 2a: aload 4
      // 2c: ifnull 8f
      // 2f: goto 36
      // 32: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 35: athrow
      // 36: aload 0
      // 37: invokevirtual sixtwo/lw.cbD ()Z
      // 3a: ifne 8b
      // 3d: goto 44
      // 40: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 43: athrow
      // 44: aload 0
      // 45: invokevirtual sixtwo/lw.cbI ()V
      // 48: aload 4
      // 4a: ifnull 8f
      // 4d: goto 54
      // 50: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 53: athrow
      // 54: aload 0
      // 55: getfield sixtwo/lw.iOjiE I
      // 58: ifge 8b
      // 5b: goto 62
      // 5e: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 61: athrow
      // 62: aload 0
      // 63: bipush 1
      // 64: putfield sixtwo/lw.kCzBe I
      // 67: aload 4
      // 69: ifnonnull 8b
      // 6c: goto 73
      // 6f: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 72: athrow
      // 73: aload 0
      // 74: goto 7b
      // 77: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 7a: athrow
      // 7b: sipush 419
      // 7e: ldc2_w 593756832435723307
      // 81: lload 2
      // 82: lxor
      // 83: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 88: putfield sixtwo/lw.kCzBe I
      // 8b: aload 1
      // 8c: invokevirtual java/io/BufferedInputStream.close ()V
      // 8f: goto 94
      // 92: astore 5
      // 94: aload 0
      // 95: getfield sixtwo/lw.kCzBe I
      // 98: ireturn
   }

   public BufferedImage cbu() {
      return this.cbx(0);
   }

   public int cbA(InputStream param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lw.mhICS J
      // 03: ldc2_w 21849545874617
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/lw.cbS ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnull 9a
      // 13: invokevirtual sixtwo/lw.cbE ()V
      // 16: aload 1
      // 17: ifnull 92
      // 1a: goto 21
      // 1d: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 20: athrow
      // 21: aload 1
      // 22: instanceof java/io/BufferedInputStream
      // 25: aload 4
      // 27: ifnull 60
      // 2a: goto 31
      // 2d: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 30: athrow
      // 31: ifne 44
      // 34: goto 3b
      // 37: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 3a: athrow
      // 3b: new java/io/BufferedInputStream
      // 3e: dup
      // 3f: aload 1
      // 40: invokespecial java/io/BufferedInputStream.<init> (Ljava/io/InputStream;)V
      // 43: astore 1
      // 44: aload 0
      // 45: aload 1
      // 46: checkcast java/io/BufferedInputStream
      // 49: putfield sixtwo/lw.HYawK Ljava/io/BufferedInputStream;
      // 4c: aload 0
      // 4d: invokevirtual sixtwo/lw.cbK ()V
      // 50: aload 4
      // 52: ifnull ae
      // 55: aload 0
      // 56: invokevirtual sixtwo/lw.cbD ()Z
      // 59: goto 60
      // 5c: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 5f: athrow
      // 60: ifne aa
      // 63: aload 0
      // 64: invokevirtual sixtwo/lw.cbI ()V
      // 67: aload 4
      // 69: ifnull ae
      // 6c: goto 73
      // 6f: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 72: athrow
      // 73: aload 0
      // 74: getfield sixtwo/lw.iOjiE I
      // 77: ifge aa
      // 7a: goto 81
      // 7d: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 80: athrow
      // 81: aload 0
      // 82: bipush 1
      // 83: putfield sixtwo/lw.kCzBe I
      // 86: aload 4
      // 88: ifnonnull aa
      // 8b: goto 92
      // 8e: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 91: athrow
      // 92: aload 0
      // 93: goto 9a
      // 96: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 99: athrow
      // 9a: sipush 19094
      // 9d: ldc2_w 4784435782132613557
      // a0: lload 2
      // a1: lxor
      // a2: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // a7: putfield sixtwo/lw.kCzBe I
      // aa: aload 1
      // ab: invokevirtual java/io/InputStream.close ()V
      // ae: goto b3
      // b1: astore 5
      // b3: aload 0
      // b4: getfield sixtwo/lw.kCzBe I
      // b7: ireturn
   }

   protected void cbN() {
      long var1 = mhICS ^ 9464132033395L;
      String[] var3 = cbS();

      label30:
      while (true) {
         this.cbG();
         if (this.Raost[0] == 1) {
            int var4 = this.Raost[1] & cca<"z">(3754, 4411798959484617300L ^ var1);
            int var5 = this.Raost[2] & cca<"z">(19115, 4599277584964126281L ^ var1);
            this.NLTcE = var5 << cca<"z">(1325, 4284596193089604054L ^ var1) | var4;
         }

         do {
            int var10000 = this.dRLBH;
            if (var3 != null) {
               try {
                  if (var10000 <= 0) {
                     continue;
                  }

                  var10000 = this.cbD();
               } catch (MatchException var6) {
                  throw cbT(var6);
               }
            }

            if (var10000 == 0) {
               continue label30;
            }
         } while (var3 == null);

         return;
      }
   }

   private static Object cbW(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = cbV(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   protected void cbP() {
      this.qfWPV = this.PXRra;
      this.AecSu = new Rectangle(this.FxXIz, this.TKEYU, this.kfgBG, this.Heeou);
      this.mEYhc = this.VCUiV;
      this.miitl = this.OcGcZ;
      boolean var1 = false;
      boolean var2 = false;
      boolean var3 = false;
      this.ywgHj = null;
   }

   private static String cbU(byte[] var0) {
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

   private static int cbZ(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = cbY(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   protected void cbQ() {
      long var1 = mhICS ^ 55686554591582L;

      do {
         this.cbG();
      } while (this.dRLBH > 0 && !this.cbD());
   }

   public static void cbR(String[] var0) {
      OhYyv = var0;
   }

   protected int cbO() {
      long var1 = mhICS ^ 136979387539611L;
      return this.cbF() | this.cbF() << cca<"z">(22616, 2356551362166402884L ^ var1);
   }

   protected void cbM() {
      long var1 = mhICS ^ 78185788998388L;
      this.yvHap = this.cbO();
      String[] var10000 = cbS();
      this.HROeA = this.cbO();
      String[] var3 = var10000;
      int var4 = this.cbF();

      int var10001;
      label22: {
         label21: {
            try {
               var6 = this;
               var10001 = var4 & cca<"z">(25856, 6008143430491304053L ^ var1);
               if (var3 == null) {
                  break label22;
               }

               if (var10001 != 0) {
                  break label21;
               }
            } catch (MatchException var5) {
               throw cbT(var5);
            }

            var10001 = 0;
            break label22;
         }

         var10001 = 1;
      }

      var6.EZnCM = (boolean)var10001;
      this.JwAHq = 2 << (var4 & cca<"z">(31020, 5090763748298288202L ^ var1));
      this.QeHiv = this.cbF();
      this.OrQhv = this.cbF();
   }

   private static int cbY(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 29042;
      if (PvmQO[var3] == null) {
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
         long var5 = DLziM[var3];
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
         Object[] var9 = (Object[])cLSYu.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               cLSYu.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/lw", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         PvmQO[var3] = var15;
      }

      return PvmQO[var3];
   }

   private static String cbV(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 17987;
      if (XkSHt[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])lxlTo.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               lxlTo.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/lw", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = lGcRA[var5].getBytes("ISO-8859-1");
         XkSHt[var5] = cbU(((Cipher)var4[0]).doFinal(var9));
      }

      return XkSHt[var5];
   }

   public lw() {
      long var1 = mhICS ^ 14929657900858L;
      super();
      this.NLTcE = 1;
      this.Raost = new byte[cca<"z">(25423, 1611472724717165561L ^ var1)];
      this.dRLBH = 0;
      this.PXRra = 0;
      this.qfWPV = 0;
      this.QnUEw = false;
      this.ZBGhF = 0;
   }

   static {
      String[] var10000 = new String[1];
      long var11 = mhICS ^ 74284909392948L;
      cbR(var10000);
      Cipher var13;
      Cipher var25 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var25.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[4];
      int var18 = 0;
      String var17 = "┬«├ä_X┬╗┬žfT┬ž┬«┬┤\f├ťh|^xe├Ż├Ç|├ó;{\u0010├Ö\u0097\u008c\u0093y├┐b606├ëM\fYBv";
      int var19 = "┬«├ä_X┬╗┬žfT┬ž┬«┬┤\f├ťh|^xe├Ż├Ç|├ó;{\u0010├Ö\u0097\u008c\u0093y├┐b606├ëM\fYBv".length();
      char var16 = 24;
      int var24 = -1;

      label54:
      while (true) {
         String var26 = var17.substring(++var24, var24 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var26.getBytes("ISO-8859-1"));
            String var37 = cbU(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var37;
                  if ((var24 += var16) >= var19) {
                     lGcRA = var20;
                     XkSHt = new String[4];
                     cLSYu = new HashMap(13);
                     Cipher var0;
                     Cipher var28 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
                     }

                     var28.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[26];
                     int var3 = 0;
                     String var4 = "├ś├ů┬┤o\u0016\u001b├ś\u009f├é├čfg\u008b├ę\u0007┬ż:P├Ź┬Ę\u0016├î├ë\u0002├üC?├¬k\u00ad┬Č?├żq├ç^├âL┬╝├ĺ\u0012\u009dc\u008a┬▒├ĺ├ş$├░V|├Ĺ\u0091r\u0019├║|┬░z├â├×\u0098\u0086^├»┬ż'\u0087q\u0096q├Żl\u0091├ą\u0093r&┬ęqc\u0001├╣h\u0010\u008f?\u00124├Ł\u00869\u0082\u0083\u001dE\u00896F\u0097A\u008c├Ő├Ťs┬ĘH┬ę%├î┬»┬«3v2├Ü\u008c|T┬¬\u0087├î\u000b%\u0098├╣├íe\u0081\u0090A┬«\rZT├ö├Äp&\u0006$3├Ź\u0083┬┤┬ŻU├Ž├▓\u0085\t\u0005┬ó├ź├ľS\u001f&\u001d├ü'X\u009d├ÇlGX$\u008blK┬á├ę&\u009d├Ę\u008c\u001d├ĺ\u0093oc├╝├ş*├▓]?\\├č├Ő┬║";
                     int var5 = "├ś├ů┬┤o\u0016\u001b├ś\u009f├é├čfg\u008b├ę\u0007┬ż:P├Ź┬Ę\u0016├î├ë\u0002├üC?├¬k\u00ad┬Č?├żq├ç^├âL┬╝├ĺ\u0012\u009dc\u008a┬▒├ĺ├ş$├░V|├Ĺ\u0091r\u0019├║|┬░z├â├×\u0098\u0086^├»┬ż'\u0087q\u0096q├Żl\u0091├ą\u0093r&┬ęqc\u0001├╣h\u0010\u008f?\u00124├Ł\u00869\u0082\u0083\u001dE\u00896F\u0097A\u008c├Ő├Ťs┬ĘH┬ę%├î┬»┬«3v2├Ü\u008c|T┬¬\u0087├î\u000b%\u0098├╣├íe\u0081\u0090A┬«\rZT├ö├Äp&\u0006$3├Ź\u0083┬┤┬ŻU├Ž├▓\u0085\t\u0005┬ó├ź├ľS\u001f&\u001d├ü'X\u009d├ÇlGX$\u008blK┬á├ę&\u009d├Ę\u008c\u001d├ĺ\u0093oc├╝├ş*├▓]?\\├č├Ő┬║"
                        .length();
                     byte var2 = 0;

                     label36:
                     while (true) {
                        var10001 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
                        long[] var29 = var6;
                        var10001 = var3++;
                        long var41 = (var7[0] & 255L) << 56
                           | (var7[1] & 255L) << 48
                           | (var7[2] & 255L) << 40
                           | (var7[3] & 255L) << 32
                           | (var7[4] & 255L) << 24
                           | (var7[5] & 255L) << 16
                           | (var7[6] & 255L) << 8
                           | var7[7] & 255L;
                        byte var44 = -1;

                        while (true) {
                           long var8 = var41;
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
                           long var46 = (var10[0] & 255L) << 56
                              | (var10[1] & 255L) << 48
                              | (var10[2] & 255L) << 40
                              | (var10[3] & 255L) << 32
                              | (var10[4] & 255L) << 24
                              | (var10[5] & 255L) << 16
                              | (var10[6] & 255L) << 8
                              | var10[7] & 255L;
                           switch (var44) {
                              case 0:
                                 var29[var10001] = var46;
                                 if (var2 >= var5) {
                                    DLziM = var6;
                                    PvmQO = new Integer[26];
                                    IGhFi = cca<"z">(12324, var11 ^ 3246645375524361110L);
                                    iUbzi = cca<"z">(2759, var11 ^ 5953016391568681329L);
                                    return;
                                 }
                                 break;
                              default:
                                 var29[var10001] = var46;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "W┬Ž\u0097\u001fa\t├Ľ\u0007W┬ą(\u008cp>├â├▓";
                                 var5 = "W┬Ž\u0097\u001fa\t├Ľ\u0007W┬ą(\u008cp>├â├▓".length();
                                 var2 = 0;
                           }

                           byte var35 = var2;
                           var2 += 8;
                           var7 = var4.substring(var35, var2).getBytes("ISO-8859-1");
                           var29 = var6;
                           var10001 = var3++;
                           var41 = (var7[0] & 255L) << 56
                              | (var7[1] & 255L) << 48
                              | (var7[2] & 255L) << 40
                              | (var7[3] & 255L) << 32
                              | (var7[4] & 255L) << 24
                              | (var7[5] & 255L) << 16
                              | (var7[6] & 255L) << 8
                              | var7[7] & 255L;
                           var44 = 0;
                        }
                     }
                  }

                  var16 = var17.charAt(var24);
                  break;
               default:
                  var20[var18++] = var37;
                  if ((var24 += var16) < var19) {
                     var16 = var17.charAt(var24);
                     continue label54;
                  }

                  var17 = "}?K1\u009e├ŚW\u0092+\u0085├ůt\u0089┬Ż├╗Q\u0018├×\u009c├»├ĺ1!├Ą`b┬▒~├╣\fl3\u0003├ł=┬Ş┬│0,'┬Ž";
                  var19 = "}?K1\u009e├ŚW\u0092+\u0085├ůt\u0089┬Ż├╗Q\u0018├×\u009c├»├ĺ1!├Ą`b┬▒~├╣\fl3\u0003├ł=┬Ş┬│0,'┬Ž".length();
                  var16 = 16;
                  var24 = -1;
            }

            var26 = var17.substring(++var24, var24 + var16);
            var10001 = 0;
         }
      }
   }

   public int cbB(String param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lw.mhICS J
      // 03: ldc2_w 62855799805726
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/lw.cbS ()[Ljava/lang/String;
      // 0b: aload 0
      // 0c: bipush 0
      // 0d: putfield sixtwo/lw.kCzBe I
      // 10: astore 4
      // 12: aload 1
      // 13: invokevirtual java/lang/String.trim ()Ljava/lang/String;
      // 16: invokevirtual java/lang/String.toLowerCase ()Ljava/lang/String;
      // 19: astore 1
      // 1a: aload 1
      // 1b: bipush 110
      // 1d: ldc2_w 3884287460767741890
      // 20: lload 2
      // 21: lxor
      // 22: invokedynamic k (IJ)Ljava/lang/String; bsm=sixtwo/lw.cbX (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 27: invokevirtual java/lang/String.indexOf (Ljava/lang/String;)I
      // 2a: aload 4
      // 2c: ifnull 51
      // 2f: ifge 54
      // 32: goto 39
      // 35: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 38: athrow
      // 39: aload 1
      // 3a: sipush 8658
      // 3d: ldc2_w 2327485378739410556
      // 40: lload 2
      // 41: lxor
      // 42: invokedynamic k (IJ)Ljava/lang/String; bsm=sixtwo/lw.cbX (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 47: invokevirtual java/lang/String.indexOf (Ljava/lang/String;)I
      // 4a: goto 51
      // 4d: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 50: athrow
      // 51: ifle 73
      // 54: new java/net/URL
      // 57: dup
      // 58: aload 1
      // 59: invokespecial java/net/URL.<init> (Ljava/lang/String;)V
      // 5c: astore 5
      // 5e: aload 0
      // 5f: new java/io/BufferedInputStream
      // 62: dup
      // 63: aload 5
      // 65: invokevirtual java/net/URL.openStream ()Ljava/io/InputStream;
      // 68: invokespecial java/io/BufferedInputStream.<init> (Ljava/io/InputStream;)V
      // 6b: putfield sixtwo/lw.HYawK Ljava/io/BufferedInputStream;
      // 6e: aload 4
      // 70: ifnonnull 8d
      // 73: aload 0
      // 74: new java/io/BufferedInputStream
      // 77: dup
      // 78: new java/io/FileInputStream
      // 7b: dup
      // 7c: aload 1
      // 7d: invokespecial java/io/FileInputStream.<init> (Ljava/lang/String;)V
      // 80: invokespecial java/io/BufferedInputStream.<init> (Ljava/io/InputStream;)V
      // 83: putfield sixtwo/lw.HYawK Ljava/io/BufferedInputStream;
      // 86: goto 8d
      // 89: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 8c: athrow
      // 8d: aload 0
      // 8e: aload 0
      // 8f: aload 0
      // 90: getfield sixtwo/lw.HYawK Ljava/io/BufferedInputStream;
      // 93: invokevirtual sixtwo/lw.cbz (Ljava/io/BufferedInputStream;)I
      // 96: putfield sixtwo/lw.kCzBe I
      // 99: goto af
      // 9c: astore 5
      // 9e: aload 0
      // 9f: sipush 419
      // a2: ldc2_w 593768226674573608
      // a5: lload 2
      // a6: lxor
      // a7: invokedynamic z (IJ)I bsm=sixtwo/lw.cca (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // ac: putfield sixtwo/lw.kCzBe I
      // af: aload 0
      // b0: getfield sixtwo/lw.kCzBe I
      // b3: ireturn
   }

   public BufferedImage cbx(int var1) {
      long var2 = mhICS ^ 75746169399618L;
      String[] var10000 = cbS();
      BufferedImage var5 = null;
      String[] var4 = var10000;

      label22: {
         try {
            var7 = var1;
            if (var4 == null) {
               break label22;
            }

            if (var1 < 0) {
               return var5;
            }
         } catch (MatchException var6) {
            throw cbT(var6);
         }

         var7 = var1;
      }

      if (var7 < this.iOjiE) {
         var5 = ((lw$uA)this.RAaDq.get(var1)).ccIdo;
      }

      return var5;
   }

   public int cbt() {
      return this.iOjiE;
   }

   public int cbs(int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lw.mhICS J
      // 03: ldc2_w 65450578705773
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/lw.cbS ()[Ljava/lang/String;
      // 0b: aload 0
      // 0c: bipush -1
      // 0d: putfield sixtwo/lw.ZBGhF I
      // 10: astore 4
      // 12: iload 1
      // 13: aload 4
      // 15: ifnull 5a
      // 18: iflt 56
      // 1b: goto 22
      // 1e: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 21: athrow
      // 22: iload 1
      // 23: aload 4
      // 25: ifnull 5a
      // 28: goto 2f
      // 2b: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 2e: athrow
      // 2f: aload 0
      // 30: getfield sixtwo/lw.iOjiE I
      // 33: if_icmpge 56
      // 36: goto 3d
      // 39: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 3c: athrow
      // 3d: aload 0
      // 3e: aload 0
      // 3f: getfield sixtwo/lw.RAaDq Ljava/util/ArrayList;
      // 42: iload 1
      // 43: invokevirtual java/util/ArrayList.get (I)Ljava/lang/Object;
      // 46: checkcast sixtwo/lw$uA
      // 49: getfield sixtwo/lw$uA.jBbEt I
      // 4c: putfield sixtwo/lw.ZBGhF I
      // 4f: goto 56
      // 52: invokestatic sixtwo/lw.cbT (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 55: athrow
      // 56: aload 0
      // 57: getfield sixtwo/lw.ZBGhF I
      // 5a: ireturn
   }

   public static String[] cbS() {
      return OhYyv;
   }
}
