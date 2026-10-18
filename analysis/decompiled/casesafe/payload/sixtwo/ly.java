package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1044;

public class ly extends az {
   private od xhcgK;
   private mG HWpZc = mG.hoGuU;
   private int jtMYw = 0;
   private int CGOfu = -1;
   private boolean WKvNO = false;
   private long dbpqd;
   private int iPvCR = 1;
   private boolean IwNbv = false;
   private static final long laEVD = gb.aYR(5765214969812948101L, 4642015618544650956L, MethodHandles.lookup().lookupClass()).a(161237231622214L);
   private static final long iIKTk;

   public boolean cct() {
      return this.IwNbv;
   }

   public void ccu() {
      long var1 = laEVD ^ 36335151984051L;
      String[] var3 = lw.cbS();

      ly var10000;
      boolean var10001;
      label22: {
         label21: {
            try {
               var10000 = this;
               var10001 = this.IwNbv;
               if (var3 == null) {
                  break label22;
               }

               if (!this.IwNbv) {
                  break label21;
               }
            } catch (MatchException var4) {
               throw ccJ(var4);
            }

            var10001 = false;
            break label22;
         }

         var10001 = true;
      }

      var10000.IwNbv = var10001;
   }

   public void ccs() {
      this.CGOfu = -1;
   }

   public boolean ccp() {
      long var1 = laEVD ^ 129373069393144L;
      String[] var3 = lw.cbS();

      try {
         if (var3 == null) {
            return this.WKvNO;
         }

         if (!this.WKvNO) {
            return true;
         }
      } catch (MatchException var4) {
         throw ccJ(var4);
      }

      return false;
   }

   public void cco() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ly.laEVD J
      // 03: ldc2_w 10502060026576
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/lw.cbS ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 4d
      // 11: getfield sixtwo/ly.CGOfu I
      // 14: iflt 45
      // 17: goto 1e
      // 1a: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: aload 3
      // 20: ifnull 4d
      // 23: goto 2a
      // 26: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: getfield sixtwo/ly.jtMYw I
      // 2d: aload 0
      // 2e: getfield sixtwo/ly.CGOfu I
      // 31: if_icmpne 45
      // 34: goto 3b
      // 37: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a: athrow
      // 3b: aload 0
      // 3c: bipush 0
      // 3d: putfield sixtwo/ly.WKvNO Z
      // 40: return
      // 41: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: aload 0
      // 46: invokestatic java/lang/System.nanoTime ()J
      // 49: putfield sixtwo/ly.dbpqd J
      // 4c: aload 0
      // 4d: bipush 1
      // 4e: putfield sixtwo/ly.WKvNO Z
      // 51: return
   }

   public ly ccC(mG var1) {
      this.HWpZc = var1;
      return this;
   }

   public ly(od var1) {
      this.xhcgK = var1;
      this.BcpIo = var1.cBR().cph() / 2.0F;
      this.WjISQ = var1.cBR().cpi() / 2.0F;
      this.dbpqd = System.nanoTime();
   }

   static {
      long var0 = laEVD ^ 87115027250247L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = 7475676854500482455L;
      byte[] var6 = var2.doFinal(
         new byte[]{
            (byte)(var4 >>> 56),
            (byte)(var4 >>> 48),
            (byte)(var4 >>> 40),
            (byte)(var4 >>> 32),
            (byte)(var4 >>> 24),
            (byte)(var4 >>> 16),
            (byte)(var4 >>> 8),
            (byte)var4
         }
      );
      long var7 = (var6[0] & 255L) << 56
         | (var6[1] & 255L) << 48
         | (var6[2] & 255L) << 40
         | (var6[3] & 255L) << 32
         | (var6[4] & 255L) << 24
         | (var6[5] & 255L) << 16
         | (var6[6] & 255L) << 8
         | var6[7] & 255L;
      byte var10001 = -1;
      iIKTk = var7;
   }

   private void ccl(long param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/ly.laEVD J
      // 003: ldc2_w 30814783986907
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/lw.cbS ()[Ljava/lang/String;
      // 00b: aload 0
      // 00c: getfield sixtwo/ly.xhcgK Lsixtwo/od;
      // 00f: invokevirtual sixtwo/od.cBR ()Lsixtwo/mI;
      // 012: invokevirtual sixtwo/mI.cpg ()I
      // 015: istore 6
      // 017: astore 5
      // 019: iload 6
      // 01b: aload 5
      // 01d: ifnull 041
      // 020: bipush 1
      // 021: if_icmple 044
      // 024: goto 02b
      // 027: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02a: athrow
      // 02b: lload 1
      // 02c: aload 5
      // 02e: ifnull 046
      // 031: goto 038
      // 034: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 037: athrow
      // 038: lconst_0
      // 039: lcmp
      // 03a: goto 041
      // 03d: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 040: athrow
      // 041: ifgt 045
      // 044: return
      // 045: lconst_0
      // 046: lstore 7
      // 048: lload 7
      // 04a: lload 1
      // 04b: lcmp
      // 04c: ifge 301
      // 04f: aload 0
      // 050: getfield sixtwo/ly.WKvNO Z
      // 053: aload 5
      // 055: ifnull 06d
      // 058: ifeq 301
      // 05b: goto 062
      // 05e: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 061: athrow
      // 062: aload 0
      // 063: getfield sixtwo/ly.IwNbv Z
      // 066: goto 06d
      // 069: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06c: athrow
      // 06d: aload 5
      // 06f: ifnull 07d
      // 072: ifeq 080
      // 075: goto 07c
      // 078: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07b: athrow
      // 07c: bipush -1
      // 07d: goto 081
      // 080: bipush 1
      // 081: istore 9
      // 083: aload 5
      // 085: ifnull 2fc
      // 088: getstatic sixtwo/ly$uC.wWFaw [I
      // 08b: aload 0
      // 08c: getfield sixtwo/ly.xhcgK Lsixtwo/od;
      // 08f: invokevirtual sixtwo/od.cBS ()Lsixtwo/mI$uP;
      // 092: invokevirtual sixtwo/mI$uP.ordinal ()I
      // 095: iaload
      // 096: tableswitch 608 1 3 30 288 426
      // 0b0: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b3: athrow
      // 0b4: aload 0
      // 0b5: getfield sixtwo/ly.jtMYw I
      // 0b8: iload 9
      // 0ba: iadd
      // 0bb: iload 6
      // 0bd: iadd
      // 0be: iload 6
      // 0c0: irem
      // 0c1: istore 10
      // 0c3: aload 0
      // 0c4: getfield sixtwo/ly.IwNbv Z
      // 0c7: aload 5
      // 0c9: ifnull 120
      // 0cc: ifne 11c
      // 0cf: goto 0d6
      // 0d2: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d5: athrow
      // 0d6: aload 0
      // 0d7: getfield sixtwo/ly.CGOfu I
      // 0da: aload 5
      // 0dc: ifnull 120
      // 0df: goto 0e6
      // 0e2: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e5: athrow
      // 0e6: iload 6
      // 0e8: bipush 1
      // 0e9: isub
      // 0ea: if_icmpne 11c
      // 0ed: goto 0f4
      // 0f0: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f3: athrow
      // 0f4: aload 0
      // 0f5: getfield sixtwo/ly.jtMYw I
      // 0f8: aload 5
      // 0fa: ifnull 120
      // 0fd: goto 104
      // 100: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 103: athrow
      // 104: iload 6
      // 106: bipush 1
      // 107: isub
      // 108: if_icmpne 11c
      // 10b: goto 112
      // 10e: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 111: athrow
      // 112: aload 0
      // 113: bipush 0
      // 114: putfield sixtwo/ly.WKvNO Z
      // 117: return
      // 118: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 11b: athrow
      // 11c: aload 0
      // 11d: getfield sixtwo/ly.IwNbv Z
      // 120: aload 5
      // 122: ifnull 177
      // 125: ifeq 16d
      // 128: goto 12f
      // 12b: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 12e: athrow
      // 12f: aload 0
      // 130: getfield sixtwo/ly.CGOfu I
      // 133: aload 5
      // 135: ifnull 177
      // 138: goto 13f
      // 13b: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13e: athrow
      // 13f: ifne 16d
      // 142: goto 149
      // 145: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 148: athrow
      // 149: aload 0
      // 14a: getfield sixtwo/ly.jtMYw I
      // 14d: aload 5
      // 14f: ifnull 177
      // 152: goto 159
      // 155: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 158: athrow
      // 159: ifne 16d
      // 15c: goto 163
      // 15f: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 162: athrow
      // 163: aload 0
      // 164: bipush 0
      // 165: putfield sixtwo/ly.WKvNO Z
      // 168: return
      // 169: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 16c: athrow
      // 16d: aload 0
      // 16e: iload 10
      // 170: putfield sixtwo/ly.jtMYw I
      // 173: aload 0
      // 174: getfield sixtwo/ly.CGOfu I
      // 177: aload 5
      // 179: ifnull 19d
      // 17c: iflt 1b1
      // 17f: goto 186
      // 182: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 185: athrow
      // 186: aload 0
      // 187: aload 5
      // 189: ifnull 1ac
      // 18c: goto 193
      // 18f: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 192: athrow
      // 193: getfield sixtwo/ly.jtMYw I
      // 196: goto 19d
      // 199: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 19c: athrow
      // 19d: aload 0
      // 19e: getfield sixtwo/ly.CGOfu I
      // 1a1: if_icmpne 1b1
      // 1a4: aload 0
      // 1a5: goto 1ac
      // 1a8: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1ab: athrow
      // 1ac: bipush 0
      // 1ad: putfield sixtwo/ly.WKvNO Z
      // 1b0: return
      // 1b1: aload 5
      // 1b3: ifnonnull 2f6
      // 1b6: aload 0
      // 1b7: getfield sixtwo/ly.jtMYw I
      // 1ba: iload 9
      // 1bc: iadd
      // 1bd: istore 10
      // 1bf: aload 5
      // 1c1: ifnull 1f6
      // 1c4: iload 10
      // 1c6: iflt 1ea
      // 1c9: goto 1d0
      // 1cc: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1cf: athrow
      // 1d0: iload 10
      // 1d2: aload 5
      // 1d4: ifnull 201
      // 1d7: goto 1de
      // 1da: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1dd: athrow
      // 1de: iload 6
      // 1e0: if_icmplt 1f7
      // 1e3: goto 1ea
      // 1e6: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e9: athrow
      // 1ea: aload 0
      // 1eb: bipush 0
      // 1ec: putfield sixtwo/ly.WKvNO Z
      // 1ef: goto 1f6
      // 1f2: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f5: athrow
      // 1f6: return
      // 1f7: aload 0
      // 1f8: iload 10
      // 1fa: putfield sixtwo/ly.jtMYw I
      // 1fd: aload 0
      // 1fe: getfield sixtwo/ly.CGOfu I
      // 201: aload 5
      // 203: ifnull 227
      // 206: iflt 23b
      // 209: goto 210
      // 20c: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20f: athrow
      // 210: aload 0
      // 211: aload 5
      // 213: ifnull 236
      // 216: goto 21d
      // 219: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21c: athrow
      // 21d: getfield sixtwo/ly.jtMYw I
      // 220: goto 227
      // 223: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 226: athrow
      // 227: aload 0
      // 228: getfield sixtwo/ly.CGOfu I
      // 22b: if_icmpne 23b
      // 22e: aload 0
      // 22f: goto 236
      // 232: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 235: athrow
      // 236: bipush 0
      // 237: putfield sixtwo/ly.WKvNO Z
      // 23a: return
      // 23b: aload 5
      // 23d: ifnonnull 2f6
      // 240: aload 0
      // 241: getfield sixtwo/ly.IwNbv Z
      // 244: aload 5
      // 246: ifnull 25b
      // 249: goto 250
      // 24c: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24f: athrow
      // 250: ifeq 25e
      // 253: goto 25a
      // 256: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 259: athrow
      // 25a: bipush -1
      // 25b: goto 25f
      // 25e: bipush 1
      // 25f: istore 10
      // 261: aload 0
      // 262: getfield sixtwo/ly.jtMYw I
      // 265: iload 10
      // 267: aload 0
      // 268: getfield sixtwo/ly.iPvCR I
      // 26b: imul
      // 26c: iadd
      // 26d: istore 11
      // 26f: iload 11
      // 271: aload 5
      // 273: ifnull 29b
      // 276: iload 6
      // 278: if_icmplt 292
      // 27b: goto 282
      // 27e: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 281: athrow
      // 282: aload 0
      // 283: bipush -1
      // 284: putfield sixtwo/ly.iPvCR I
      // 287: iload 6
      // 289: bipush 2
      // 28a: isub
      // 28b: istore 11
      // 28d: aload 5
      // 28f: ifnonnull 2b2
      // 292: iload 11
      // 294: goto 29b
      // 297: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29a: athrow
      // 29b: aload 5
      // 29d: ifnull 2c8
      // 2a0: ifge 2b2
      // 2a3: goto 2aa
      // 2a6: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a9: athrow
      // 2aa: aload 0
      // 2ab: bipush 1
      // 2ac: putfield sixtwo/ly.iPvCR I
      // 2af: bipush 1
      // 2b0: istore 11
      // 2b2: aload 0
      // 2b3: iload 11
      // 2b5: putfield sixtwo/ly.jtMYw I
      // 2b8: aload 5
      // 2ba: ifnull 2fc
      // 2bd: aload 0
      // 2be: getfield sixtwo/ly.CGOfu I
      // 2c1: goto 2c8
      // 2c4: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c7: athrow
      // 2c8: iflt 2f6
      // 2cb: aload 0
      // 2cc: aload 5
      // 2ce: ifnull 2f1
      // 2d1: goto 2d8
      // 2d4: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d7: athrow
      // 2d8: getfield sixtwo/ly.jtMYw I
      // 2db: aload 0
      // 2dc: getfield sixtwo/ly.CGOfu I
      // 2df: if_icmpne 2f6
      // 2e2: goto 2e9
      // 2e5: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2e8: athrow
      // 2e9: aload 0
      // 2ea: goto 2f1
      // 2ed: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f0: athrow
      // 2f1: bipush 0
      // 2f2: putfield sixtwo/ly.WKvNO Z
      // 2f5: return
      // 2f6: lload 7
      // 2f8: lconst_1
      // 2f9: ladd
      // 2fa: lstore 7
      // 2fc: aload 5
      // 2fe: ifnonnull 048
      // 301: return
   }

   public void ccq() {
      this.WKvNO = false;
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
      // 00: getstatic sixtwo/ly.laEVD J
      // 03: ldc2_w 71976848629959
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/lw.cbS ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnull 3e
      // 13: getfield sixtwo/ly.WKvNO Z
      // 16: ifeq 2b
      // 19: goto 20
      // 1c: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 0
      // 21: invokevirtual sixtwo/ly.cck ()V
      // 24: goto 2b
      // 27: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: aload 0
      // 2c: getfield sixtwo/ly.xhcgK Lsixtwo/od;
      // 2f: invokevirtual sixtwo/od.cBR ()Lsixtwo/mI;
      // 32: invokevirtual sixtwo/mI.cpk ()Ljava/util/List;
      // 35: aload 0
      // 36: getfield sixtwo/ly.jtMYw I
      // 39: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 3e: checkcast sixtwo/mI$uR
      // 41: astore 5
      // 43: aload 5
      // 45: invokevirtual sixtwo/mI$uR.dvA ()Lnet/minecraft/class_1044;
      // 48: ifnull 6f
      // 4b: aload 1
      // 4c: aload 5
      // 4e: invokevirtual sixtwo/mI$uR.dvA ()Lnet/minecraft/class_1044;
      // 51: aload 0
      // 52: getfield sixtwo/ly.MCnYt F
      // 55: aload 0
      // 56: getfield sixtwo/ly.pNyTQ F
      // 59: aload 0
      // 5a: getfield sixtwo/ly.BcpIo F
      // 5d: aload 0
      // 5e: getfield sixtwo/ly.WjISQ F
      // 61: aload 0
      // 62: getfield sixtwo/ly.HWpZc Lsixtwo/mG;
      // 65: invokevirtual sixtwo/lC.cdW (Lnet/minecraft/class_1044;FFFFLsixtwo/mG;)V
      // 68: goto 6f
      // 6b: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6e: athrow
      // 6f: return
   }

   public void ccr(int var1) {
      this.CGOfu = var1;
   }

   public void ccz() {
      this.jtMYw = 0;
      this.iPvCR = 1;
      this.dbpqd = System.nanoTime();
   }

   public void ccm() {
      this.jtMYw = (this.jtMYw + 1) % this.xhcgK.cBR().cpg();
   }

   public ly ccD(int var1) {
      this.jtMYw = var1;
      return this;
   }

   public class_1044 ccA() {
      return this.xhcgK.cBR().cpk().get(0).dvA();
   }

   public ly ccI(boolean var1) {
      this.IwNbv = var1;
      return this;
   }

   private static MatchException ccJ(MatchException var0) {
      return var0;
   }

   public void ccn() {
      this.jtMYw = (this.jtMYw - 1 + this.xhcgK.cBR().cpg()) % this.xhcgK.cBR().cpg();
   }

   public void ccv() {
      this.IwNbv = false;
      this.cco();
   }

   public boolean ccy() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ly.laEVD J
      // 03: ldc2_w 132225221481093
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/lw.cbS ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/ly.jtMYw I
      // 10: aload 3
      // 11: ifnull 32
      // 14: aload 0
      // 15: getfield sixtwo/ly.xhcgK Lsixtwo/od;
      // 18: invokevirtual sixtwo/od.cBR ()Lsixtwo/mI;
      // 1b: invokevirtual sixtwo/mI.cpg ()I
      // 1e: bipush 1
      // 1f: isub
      // 20: if_icmpne 35
      // 23: goto 2a
      // 26: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: bipush 1
      // 2b: goto 32
      // 2e: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: goto 36
      // 35: bipush 0
      // 36: ireturn
   }

   public ly ccG(long var1) {
      this.dbpqd = var1;
      return this;
   }

   public ly ccH(int var1) {
      this.iPvCR = var1;
      return this;
   }

   public boolean ccx() {
      long var1 = laEVD ^ 64044977482432L;
      String[] var3 = lw.cbS();

      try {
         if (var3 == null) {
            return (boolean)this.jtMYw;
         }

         if (this.jtMYw == 0) {
            return (boolean)1;
         }
      } catch (MatchException var4) {
         throw ccJ(var4);
      }

      return (boolean)0;
   }

   public ly ccF(boolean var1) {
      this.WKvNO = var1;
      return this;
   }

   public ly ccB(od var1) {
      this.xhcgK = var1;
      return this;
   }

   private void cck() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ly.laEVD J
      // 03: ldc2_w 46382984118387
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/lw.cbS ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/ly.xhcgK Lsixtwo/od;
      // 10: aload 3
      // 11: ifnull 29
      // 14: ifnull 42
      // 17: goto 1e
      // 1a: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: getfield sixtwo/ly.xhcgK Lsixtwo/od;
      // 22: goto 29
      // 25: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: invokevirtual sixtwo/od.cBR ()Lsixtwo/mI;
      // 2c: invokevirtual sixtwo/mI.cpk ()Ljava/util/List;
      // 2f: invokeinterface java/util/List.isEmpty ()Z 1
      // 34: aload 3
      // 35: ifnull 4d
      // 38: ifeq 43
      // 3b: goto 42
      // 3e: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: return
      // 43: aload 0
      // 44: getfield sixtwo/ly.xhcgK Lsixtwo/od;
      // 47: invokevirtual sixtwo/od.cBR ()Lsixtwo/mI;
      // 4a: invokevirtual sixtwo/mI.cpj ()I
      // 4d: ifgt 51
      // 50: return
      // 51: invokestatic java/lang/System.nanoTime ()J
      // 54: lstore 4
      // 56: getstatic sixtwo/ly.iIKTk J
      // 59: bipush 1
      // 5a: aload 0
      // 5b: getfield sixtwo/ly.xhcgK Lsixtwo/od;
      // 5e: invokevirtual sixtwo/od.cBR ()Lsixtwo/mI;
      // 61: invokevirtual sixtwo/mI.cpj ()I
      // 64: invokestatic java/lang/Math.max (II)I
      // 67: i2l
      // 68: ldiv
      // 69: lstore 6
      // 6b: lload 4
      // 6d: aload 0
      // 6e: getfield sixtwo/ly.dbpqd J
      // 71: lsub
      // 72: lstore 8
      // 74: lload 8
      // 76: lload 6
      // 78: aload 3
      // 79: ifnull 92
      // 7c: lcmp
      // 7d: iflt a9
      // 80: goto 87
      // 83: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 86: athrow
      // 87: lload 8
      // 89: lload 6
      // 8b: goto 92
      // 8e: invokestatic sixtwo/ly.ccJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 91: athrow
      // 92: ldiv
      // 93: lstore 10
      // 95: aload 0
      // 96: lload 10
      // 98: invokevirtual sixtwo/ly.ccl (J)V
      // 9b: aload 0
      // 9c: dup
      // 9d: getfield sixtwo/ly.dbpqd J
      // a0: lload 10
      // a2: lload 6
      // a4: lmul
      // a5: ladd
      // a6: putfield sixtwo/ly.dbpqd J
      // a9: return
   }

   public void ccw() {
      this.IwNbv = true;
      this.cco();
   }

   public ly ccE(int var1) {
      this.CGOfu = var1;
      return this;
   }
}
