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

public abstract class X<T extends X<T>> extends az {
   protected boolean rfAch;
   protected ld dPBSv;
   protected boolean jsFhG;
   protected boolean aoGjU;
   protected V<? super T> JAVXX;
   protected int yPQoU;
   protected mT TNQyk;
   protected mG PDPjF;
   protected mG mLQxH;
   protected mG syPUd;
   protected mG qMEZk;
   protected mG cQuwD;
   protected mG OiSGh;
   protected mG yNEVl;
   protected mG ZboOg;
   protected mG DMXak;
   protected float UtcTb;
   protected final ri PDdiO;
   protected final ri KUqGC;
   protected final ri IpOQw;
   protected mT VoUxF;
   protected boolean hyJHA;
   protected k cpjgN;
   protected boolean tKJaM;
   protected boolean SYMSh;
   private static String[] pwtRk;
   private static final long gfxGl = gb.aYR(-6788563015481561213L, 2550596124349801623L, MethodHandles.lookup().lookupClass()).a(153933445783030L);
   private static final long[] ubpsf;
   private static final Integer[] QagfK;
   private static final Map cdJwA = new HashMap(13);

   public X() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/X.gfxGl J
      // 003: ldc2_w 97242369970009
      // 006: lxor
      // 007: lstore 1
      // 008: aload 0
      // 009: invokespecial sixtwo/az.<init> ()V
      // 00c: aload 0
      // 00d: bipush 0
      // 00e: putfield sixtwo/X.rfAch Z
      // 011: aload 0
      // 012: getstatic sixtwo/ld.NONE Lsixtwo/ld;
      // 015: putfield sixtwo/X.dPBSv Lsixtwo/ld;
      // 018: aload 0
      // 019: bipush 0
      // 01a: putfield sixtwo/X.yPQoU I
      // 01d: aload 0
      // 01e: invokestatic sixtwo/mT.cpA ()Lsixtwo/mT;
      // 021: putfield sixtwo/X.TNQyk Lsixtwo/mT;
      // 024: aload 0
      // 025: aconst_null
      // 026: putfield sixtwo/X.PDPjF Lsixtwo/mG;
      // 029: aload 0
      // 02a: aconst_null
      // 02b: putfield sixtwo/X.mLQxH Lsixtwo/mG;
      // 02e: aload 0
      // 02f: aconst_null
      // 030: putfield sixtwo/X.syPUd Lsixtwo/mG;
      // 033: invokestatic sixtwo/X.jZ ()[Ljava/lang/String;
      // 036: aload 0
      // 037: aconst_null
      // 038: putfield sixtwo/X.qMEZk Lsixtwo/mG;
      // 03b: aload 0
      // 03c: aconst_null
      // 03d: putfield sixtwo/X.cQuwD Lsixtwo/mG;
      // 040: aload 0
      // 041: aconst_null
      // 042: putfield sixtwo/X.OiSGh Lsixtwo/mG;
      // 045: aload 0
      // 046: getstatic sixtwo/mG.UhgnI Lsixtwo/mG;
      // 049: putfield sixtwo/X.yNEVl Lsixtwo/mG;
      // 04c: astore 3
      // 04d: aload 0
      // 04e: getstatic sixtwo/mG.UhgnI Lsixtwo/mG;
      // 051: putfield sixtwo/X.ZboOg Lsixtwo/mG;
      // 054: aload 0
      // 055: getstatic sixtwo/mG.UhgnI Lsixtwo/mG;
      // 058: putfield sixtwo/X.DMXak Lsixtwo/mG;
      // 05b: aload 0
      // 05c: fconst_1
      // 05d: putfield sixtwo/X.UtcTb F
      // 060: aload 0
      // 061: invokestatic sixtwo/mT.cpz ()Lsixtwo/mT;
      // 064: putfield sixtwo/X.VoUxF Lsixtwo/mT;
      // 067: aload 0
      // 068: aload 3
      // 069: ifnull 088
      // 06c: getfield sixtwo/X.syPUd Lsixtwo/mG;
      // 06f: ifnonnull 087
      // 072: goto 079
      // 075: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 078: athrow
      // 079: aload 0
      // 07a: getfield sixtwo/X.CtPwV Lsixtwo/ii;
      // 07d: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 080: goto 08b
      // 083: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 086: athrow
      // 087: aload 0
      // 088: getfield sixtwo/X.syPUd Lsixtwo/mG;
      // 08b: astore 4
      // 08d: aload 0
      // 08e: aload 3
      // 08f: ifnull 0ae
      // 092: getfield sixtwo/X.OiSGh Lsixtwo/mG;
      // 095: ifnonnull 0ad
      // 098: goto 09f
      // 09b: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09e: athrow
      // 09f: aload 0
      // 0a0: getfield sixtwo/X.CtPwV Lsixtwo/ii;
      // 0a3: invokevirtual sixtwo/ii.bjc ()Lsixtwo/mG;
      // 0a6: goto 0b1
      // 0a9: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ac: athrow
      // 0ad: aload 0
      // 0ae: getfield sixtwo/X.OiSGh Lsixtwo/mG;
      // 0b1: astore 5
      // 0b3: aload 0
      // 0b4: new sixtwo/ri
      // 0b7: dup
      // 0b8: sipush 832
      // 0bb: ldc2_w 4856085033981109352
      // 0be: lload 1
      // 0bf: lxor
      // 0c0: invokedynamic h (IJ)I bsm=sixtwo/X.kd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0c5: aload 4
      // 0c7: invokespecial sixtwo/ri.<init> (ILsixtwo/mG;)V
      // 0ca: putfield sixtwo/X.PDdiO Lsixtwo/ri;
      // 0cd: aload 0
      // 0ce: new sixtwo/ri
      // 0d1: dup
      // 0d2: sipush 10822
      // 0d5: ldc2_w 8017886021886397807
      // 0d8: lload 1
      // 0d9: lxor
      // 0da: invokedynamic h (IJ)I bsm=sixtwo/X.kd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0df: aload 5
      // 0e1: invokespecial sixtwo/ri.<init> (ILsixtwo/mG;)V
      // 0e4: putfield sixtwo/X.IpOQw Lsixtwo/ri;
      // 0e7: aload 0
      // 0e8: new sixtwo/ri
      // 0eb: dup
      // 0ec: sipush 10822
      // 0ef: ldc2_w 8017886021886397807
      // 0f2: lload 1
      // 0f3: lxor
      // 0f4: invokedynamic h (IJ)I bsm=sixtwo/X.kd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0f9: aload 0
      // 0fa: getfield sixtwo/X.yNEVl Lsixtwo/mG;
      // 0fd: invokespecial sixtwo/ri.<init> (ILsixtwo/mG;)V
      // 100: putfield sixtwo/X.KUqGC Lsixtwo/ri;
      // 103: aload 3
      // 104: ifnonnull 113
      // 107: ldc "pJrm7b"
      // 109: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 10c: goto 113
      // 10f: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 112: athrow
      // 113: return
   }

   static {
      String[] var10000 = new String[3];
      long var0 = gfxGl ^ 124183574608123L;
      jY(var10000);
      Cipher var2;
      Cipher var13 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var13.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[2];
      int var5 = 0;
      String var6 = "├▒├â/\u0005p├ź-├ĺ\u0098\u001ev├ú6w1\u001f";
      int var7 = "├▒├â/\u0005p├ź-├ĺ\u0098\u001ev├ú6w1\u001f".length();
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

      ubpsf = var8;
      QagfK = new Integer[2];
   }

   public X<T> jv(boolean var1) {
      this.hyJHA = var1;
      return this;
   }

   private static int kc(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = kb(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public X<T> jf(ld var1) {
      this.dPBSv = var1;
      return this;
   }

   public T ja(mG var1) {
      this.qMEZk = var1;
      this.cQuwD = var1;
      this.OiSGh = var1;
      return (T)this;
   }

   public X<T> jp(mG var1) {
      this.OiSGh = var1;
      return this;
   }

   public X<T> je(boolean var1) {
      this.rfAch = var1;
      return this;
   }

   public X<T> jw(k var1) {
      this.cpjgN = var1;
      return this;
   }

   public X<T> ji(int var1) {
      this.yPQoU = var1;
      return this;
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
      // 000: getstatic sixtwo/X.gfxGl J
      // 003: ldc2_w 40050139109926
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/X.jZ ()[Ljava/lang/String;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: getfield sixtwo/X.SYMSh Z
      // 011: aload 4
      // 013: ifnull 035
      // 016: ifne 030
      // 019: goto 020
      // 01c: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: aload 0
      // 021: invokevirtual sixtwo/X.iX ()V
      // 024: aload 0
      // 025: bipush 1
      // 026: putfield sixtwo/X.SYMSh Z
      // 029: goto 030
      // 02c: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02f: athrow
      // 030: aload 0
      // 031: aload 1
      // 032: invokevirtual sixtwo/X.ti (Lsixtwo/lC;)Z
      // 035: istore 5
      // 037: aload 4
      // 039: ifnull 1f2
      // 03c: iload 5
      // 03e: ifeq 1da
      // 041: goto 048
      // 044: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 047: athrow
      // 048: aload 0
      // 049: aload 4
      // 04b: ifnull 076
      // 04e: goto 055
      // 051: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 054: athrow
      // 055: getfield sixtwo/X.hyJHA Z
      // 058: ifne 075
      // 05b: goto 062
      // 05e: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 061: athrow
      // 062: aload 0
      // 063: invokestatic sixtwo/mT.cpz ()Lsixtwo/mT;
      // 066: putfield sixtwo/X.VoUxF Lsixtwo/mT;
      // 069: aload 0
      // 06a: bipush 1
      // 06b: putfield sixtwo/X.hyJHA Z
      // 06e: goto 075
      // 071: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 074: athrow
      // 075: aload 0
      // 076: aload 4
      // 078: ifnull 0dc
      // 07b: getfield sixtwo/X.cpjgN Lsixtwo/k;
      // 07e: ifnull 0db
      // 081: goto 088
      // 084: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 087: athrow
      // 088: aload 0
      // 089: aload 4
      // 08b: ifnull 0dc
      // 08e: goto 095
      // 091: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 094: athrow
      // 095: getfield sixtwo/X.tKJaM Z
      // 098: ifne 0db
      // 09b: goto 0a2
      // 09e: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a1: athrow
      // 0a2: aload 0
      // 0a3: aload 4
      // 0a5: ifnull 0dc
      // 0a8: goto 0af
      // 0ab: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ae: athrow
      // 0af: getfield sixtwo/X.VoUxF Lsixtwo/mT;
      // 0b2: aload 0
      // 0b3: getfield sixtwo/X.cpjgN Lsixtwo/k;
      // 0b6: invokevirtual sixtwo/k.cy ()I
      // 0b9: i2l
      // 0ba: invokevirtual sixtwo/mT.cpC (J)Z
      // 0bd: ifeq 0db
      // 0c0: goto 0c7
      // 0c3: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c6: athrow
      // 0c7: aload 0
      // 0c8: getfield sixtwo/X.cpjgN Lsixtwo/k;
      // 0cb: invokestatic sixtwo/aw.route (Lsixtwo/k;)Z
      // 0ce: pop
      // 0cf: aload 0
      // 0d0: bipush 1
      // 0d1: putfield sixtwo/X.tKJaM Z
      // 0d4: goto 0db
      // 0d7: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0da: athrow
      // 0db: aload 0
      // 0dc: aload 4
      // 0de: ifnull 0fd
      // 0e1: getfield sixtwo/X.syPUd Lsixtwo/mG;
      // 0e4: ifnonnull 0fc
      // 0e7: goto 0ee
      // 0ea: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ed: athrow
      // 0ee: aload 0
      // 0ef: getfield sixtwo/X.CtPwV Lsixtwo/ii;
      // 0f2: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 0f5: goto 100
      // 0f8: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0fb: athrow
      // 0fc: aload 0
      // 0fd: getfield sixtwo/X.syPUd Lsixtwo/mG;
      // 100: astore 6
      // 102: aload 0
      // 103: aload 4
      // 105: ifnull 124
      // 108: getfield sixtwo/X.mLQxH Lsixtwo/mG;
      // 10b: ifnonnull 123
      // 10e: goto 115
      // 111: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 114: athrow
      // 115: aload 0
      // 116: getfield sixtwo/X.CtPwV Lsixtwo/ii;
      // 119: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 11c: goto 127
      // 11f: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 122: athrow
      // 123: aload 0
      // 124: getfield sixtwo/X.mLQxH Lsixtwo/mG;
      // 127: astore 7
      // 129: aload 0
      // 12a: aload 4
      // 12c: ifnull 14b
      // 12f: getfield sixtwo/X.OiSGh Lsixtwo/mG;
      // 132: ifnonnull 14a
      // 135: goto 13c
      // 138: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13b: athrow
      // 13c: aload 0
      // 13d: getfield sixtwo/X.CtPwV Lsixtwo/ii;
      // 140: invokevirtual sixtwo/ii.bjc ()Lsixtwo/mG;
      // 143: goto 14e
      // 146: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 149: athrow
      // 14a: aload 0
      // 14b: getfield sixtwo/X.OiSGh Lsixtwo/mG;
      // 14e: astore 8
      // 150: aload 0
      // 151: aload 4
      // 153: ifnull 172
      // 156: getfield sixtwo/X.cQuwD Lsixtwo/mG;
      // 159: ifnonnull 171
      // 15c: goto 163
      // 15f: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 162: athrow
      // 163: aload 0
      // 164: getfield sixtwo/X.CtPwV Lsixtwo/ii;
      // 167: invokevirtual sixtwo/ii.bjc ()Lsixtwo/mG;
      // 16a: goto 175
      // 16d: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 170: athrow
      // 171: aload 0
      // 172: getfield sixtwo/X.cQuwD Lsixtwo/mG;
      // 175: astore 9
      // 177: aload 0
      // 178: getfield sixtwo/X.PDdiO Lsixtwo/ri;
      // 17b: aload 0
      // 17c: getfield sixtwo/X.aoGjU Z
      // 17f: ifeq 18b
      // 182: aload 6
      // 184: goto 18d
      // 187: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 18a: athrow
      // 18b: aload 7
      // 18d: invokevirtual sixtwo/ri.dfT (Lsixtwo/mG;)Lsixtwo/mG;
      // 190: pop
      // 191: aload 0
      // 192: getfield sixtwo/X.IpOQw Lsixtwo/ri;
      // 195: aload 0
      // 196: getfield sixtwo/X.aoGjU Z
      // 199: ifeq 1a5
      // 19c: aload 8
      // 19e: goto 1a7
      // 1a1: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a4: athrow
      // 1a5: aload 9
      // 1a7: invokevirtual sixtwo/ri.dfT (Lsixtwo/mG;)Lsixtwo/mG;
      // 1aa: pop
      // 1ab: aload 0
      // 1ac: getfield sixtwo/X.KUqGC Lsixtwo/ri;
      // 1af: aload 0
      // 1b0: aload 4
      // 1b2: ifnull 1ce
      // 1b5: getfield sixtwo/X.aoGjU Z
      // 1b8: ifeq 1cd
      // 1bb: goto 1c2
      // 1be: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c1: athrow
      // 1c2: aload 0
      // 1c3: getfield sixtwo/X.DMXak Lsixtwo/mG;
      // 1c6: goto 1d1
      // 1c9: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1cc: athrow
      // 1cd: aload 0
      // 1ce: getfield sixtwo/X.ZboOg Lsixtwo/mG;
      // 1d1: invokevirtual sixtwo/ri.dfT (Lsixtwo/mG;)Lsixtwo/mG;
      // 1d4: pop
      // 1d5: aload 4
      // 1d7: ifnonnull 2f1
      // 1da: aload 0
      // 1db: bipush 0
      // 1dc: putfield sixtwo/X.hyJHA Z
      // 1df: aload 0
      // 1e0: invokestatic sixtwo/mT.cpz ()Lsixtwo/mT;
      // 1e3: putfield sixtwo/X.VoUxF Lsixtwo/mT;
      // 1e6: aload 0
      // 1e7: bipush 0
      // 1e8: putfield sixtwo/X.tKJaM Z
      // 1eb: goto 1f2
      // 1ee: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f1: athrow
      // 1f2: aload 0
      // 1f3: aload 4
      // 1f5: ifnull 219
      // 1f8: getfield sixtwo/X.PDPjF Lsixtwo/mG;
      // 1fb: ifnonnull 218
      // 1fe: goto 205
      // 201: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 204: athrow
      // 205: aload 0
      // 206: getfield sixtwo/X.CtPwV Lsixtwo/ii;
      // 209: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 20c: ldc 0.5
      // 20e: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 211: goto 21c
      // 214: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 217: athrow
      // 218: aload 0
      // 219: getfield sixtwo/X.PDPjF Lsixtwo/mG;
      // 21c: astore 6
      // 21e: aload 0
      // 21f: aload 4
      // 221: ifnull 240
      // 224: getfield sixtwo/X.syPUd Lsixtwo/mG;
      // 227: ifnonnull 23f
      // 22a: goto 231
      // 22d: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 230: athrow
      // 231: aload 0
      // 232: getfield sixtwo/X.CtPwV Lsixtwo/ii;
      // 235: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 238: goto 243
      // 23b: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23e: athrow
      // 23f: aload 0
      // 240: getfield sixtwo/X.syPUd Lsixtwo/mG;
      // 243: astore 7
      // 245: aload 0
      // 246: aload 4
      // 248: ifnull 267
      // 24b: getfield sixtwo/X.qMEZk Lsixtwo/mG;
      // 24e: ifnonnull 266
      // 251: goto 258
      // 254: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 257: athrow
      // 258: aload 0
      // 259: getfield sixtwo/X.CtPwV Lsixtwo/ii;
      // 25c: invokevirtual sixtwo/ii.bjc ()Lsixtwo/mG;
      // 25f: goto 26a
      // 262: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 265: athrow
      // 266: aload 0
      // 267: getfield sixtwo/X.qMEZk Lsixtwo/mG;
      // 26a: astore 8
      // 26c: aload 0
      // 26d: aload 4
      // 26f: ifnull 28e
      // 272: getfield sixtwo/X.OiSGh Lsixtwo/mG;
      // 275: ifnonnull 28d
      // 278: goto 27f
      // 27b: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27e: athrow
      // 27f: aload 0
      // 280: getfield sixtwo/X.CtPwV Lsixtwo/ii;
      // 283: invokevirtual sixtwo/ii.bjc ()Lsixtwo/mG;
      // 286: goto 291
      // 289: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28c: athrow
      // 28d: aload 0
      // 28e: getfield sixtwo/X.OiSGh Lsixtwo/mG;
      // 291: astore 9
      // 293: aload 0
      // 294: getfield sixtwo/X.PDdiO Lsixtwo/ri;
      // 297: aload 0
      // 298: getfield sixtwo/X.aoGjU Z
      // 29b: ifeq 2a7
      // 29e: aload 7
      // 2a0: goto 2a9
      // 2a3: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a6: athrow
      // 2a7: aload 6
      // 2a9: invokevirtual sixtwo/ri.dfT (Lsixtwo/mG;)Lsixtwo/mG;
      // 2ac: pop
      // 2ad: aload 0
      // 2ae: getfield sixtwo/X.IpOQw Lsixtwo/ri;
      // 2b1: aload 0
      // 2b2: getfield sixtwo/X.aoGjU Z
      // 2b5: ifeq 2c1
      // 2b8: aload 9
      // 2ba: goto 2c3
      // 2bd: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c0: athrow
      // 2c1: aload 8
      // 2c3: invokevirtual sixtwo/ri.dfT (Lsixtwo/mG;)Lsixtwo/mG;
      // 2c6: pop
      // 2c7: aload 0
      // 2c8: getfield sixtwo/X.KUqGC Lsixtwo/ri;
      // 2cb: aload 0
      // 2cc: aload 4
      // 2ce: ifnull 2ea
      // 2d1: getfield sixtwo/X.aoGjU Z
      // 2d4: ifeq 2e9
      // 2d7: goto 2de
      // 2da: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2dd: athrow
      // 2de: aload 0
      // 2df: getfield sixtwo/X.DMXak Lsixtwo/mG;
      // 2e2: goto 2ed
      // 2e5: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2e8: athrow
      // 2e9: aload 0
      // 2ea: getfield sixtwo/X.yNEVl Lsixtwo/mG;
      // 2ed: invokevirtual sixtwo/ri.dfT (Lsixtwo/mG;)Lsixtwo/mG;
      // 2f0: pop
      // 2f1: aload 0
      // 2f2: getfield sixtwo/X.KUqGC Lsixtwo/ri;
      // 2f5: invokevirtual sixtwo/ri.dfU ()Lsixtwo/mG;
      // 2f8: aload 0
      // 2f9: getfield sixtwo/X.UtcTb F
      // 2fc: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 2ff: astore 6
      // 301: aload 0
      // 302: getfield sixtwo/X.rfAch Z
      // 305: aload 4
      // 307: ifnull 320
      // 30a: ifeq 346
      // 30d: goto 314
      // 310: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 313: athrow
      // 314: aload 6
      // 316: invokevirtual sixtwo/mG.cnW ()Z
      // 319: goto 320
      // 31c: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31f: athrow
      // 320: ifne 346
      // 323: aload 1
      // 324: aload 0
      // 325: getfield sixtwo/X.MCnYt F
      // 328: aload 0
      // 329: getfield sixtwo/X.pNyTQ F
      // 32c: aload 0
      // 32d: getfield sixtwo/X.BcpIo F
      // 330: aload 0
      // 331: getfield sixtwo/X.WjISQ F
      // 334: ldc 5.0
      // 336: aload 0
      // 337: getfield sixtwo/X.dPBSv Lsixtwo/ld;
      // 33a: aload 6
      // 33c: invokevirtual sixtwo/lC.cdm (FFFFFLsixtwo/ld;Lsixtwo/mG;)V
      // 33f: goto 346
      // 342: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 345: athrow
      // 346: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 349: ifnonnull 35a
      // 34c: bipush 4
      // 34d: anewarray 241
      // 350: invokestatic sixtwo/X.jY ([Ljava/lang/String;)V
      // 353: goto 35a
      // 356: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 359: athrow
      // 35a: return
   }

   private static CallSite kd(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("kc".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/X" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public X<T> js(mG var1) {
      this.DMXak = var1;
      return this;
   }

   public X<T> jg(boolean var1) {
      this.jsFhG = var1;
      return this;
   }

   public T jd(String var1, String... var2) {
      this.cpjgN = new n(this, var1, var2);
      return (T)this;
   }

   private static MatchException ka(MatchException var0) {
      return var0;
   }

   public boolean jC() {
      return this.aoGjU;
   }

   public X<T> jt(float var1) {
      this.UtcTb = var1;
      return this;
   }

   public T jc(int[] var1) {
      this.cpjgN = new l(this, var1);
      return (T)this;
   }

   public X<T> jh(boolean var1) {
      this.aoGjU = var1;
      return this;
   }

   public boolean jB() {
      return this.jsFhG;
   }

   public ri jR() {
      return this.KUqGC;
   }

   public T iZ(mG var1) {
      this.yNEVl = var1;
      this.ZboOg = var1;
      this.DMXak = var1;
      return (T)this;
   }

   public X<T> ju(mT var1) {
      this.VoUxF = var1;
      return this;
   }

   public X<T> jy(boolean var1) {
      this.SYMSh = var1;
      return this;
   }

   public mG jM() {
      return this.yNEVl;
   }

   public mG jO() {
      return this.DMXak;
   }

   public float jP() {
      return this.UtcTb;
   }

   public mT jT() {
      return this.VoUxF;
   }

   public boolean jU() {
      return this.hyJHA;
   }

   public boolean jW() {
      return this.tKJaM;
   }

   public X<T> jo(mG var1) {
      this.cQuwD = var1;
      return this;
   }

   public X<T> jj(mT var1) {
      this.TNQyk = var1;
      return this;
   }

   public mG jK() {
      return this.cQuwD;
   }

   public ri jS() {
      return this.IpOQw;
   }

   public ld jA() {
      return this.dPBSv;
   }

   public int jE() {
      return this.yPQoU;
   }

   public mT jF() {
      return this.TNQyk;
   }

   public mG jL() {
      return this.OiSGh;
   }

   public ri jQ() {
      return this.PDdiO;
   }

   public k jV() {
      return this.cpjgN;
   }

   public mG jN() {
      return this.ZboOg;
   }

   public X<T> jn(mG var1) {
      this.qMEZk = var1;
      return this;
   }

   public boolean jX() {
      return this.SYMSh;
   }

   public mG jJ() {
      return this.qMEZk;
   }

   public static void jY(String[] var0) {
      pwtRk = var0;
   }

   public X<T> jx(boolean var1) {
      this.tKJaM = var1;
      return this;
   }

   public mG jI() {
      return this.syPUd;
   }

   private void iX() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/X.gfxGl J
      // 003: ldc2_w 2997358823637
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/X.jZ ()[Ljava/lang/String;
      // 00b: astore 3
      // 00c: aload 0
      // 00d: aload 3
      // 00e: ifnull 032
      // 011: getfield sixtwo/X.PDPjF Lsixtwo/mG;
      // 014: ifnonnull 031
      // 017: goto 01e
      // 01a: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01d: athrow
      // 01e: aload 0
      // 01f: getfield sixtwo/X.CtPwV Lsixtwo/ii;
      // 022: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 025: ldc 0.5
      // 027: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 02a: goto 035
      // 02d: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 030: athrow
      // 031: aload 0
      // 032: getfield sixtwo/X.PDPjF Lsixtwo/mG;
      // 035: astore 4
      // 037: aload 0
      // 038: aload 3
      // 039: ifnull 058
      // 03c: getfield sixtwo/X.syPUd Lsixtwo/mG;
      // 03f: ifnonnull 057
      // 042: goto 049
      // 045: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 048: athrow
      // 049: aload 0
      // 04a: getfield sixtwo/X.CtPwV Lsixtwo/ii;
      // 04d: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 050: goto 05b
      // 053: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 056: athrow
      // 057: aload 0
      // 058: getfield sixtwo/X.syPUd Lsixtwo/mG;
      // 05b: astore 5
      // 05d: aload 0
      // 05e: aload 3
      // 05f: ifnull 07e
      // 062: getfield sixtwo/X.qMEZk Lsixtwo/mG;
      // 065: ifnonnull 07d
      // 068: goto 06f
      // 06b: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06e: athrow
      // 06f: aload 0
      // 070: getfield sixtwo/X.CtPwV Lsixtwo/ii;
      // 073: invokevirtual sixtwo/ii.bjc ()Lsixtwo/mG;
      // 076: goto 081
      // 079: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07c: athrow
      // 07d: aload 0
      // 07e: getfield sixtwo/X.qMEZk Lsixtwo/mG;
      // 081: astore 6
      // 083: aload 0
      // 084: aload 3
      // 085: ifnull 0a4
      // 088: getfield sixtwo/X.OiSGh Lsixtwo/mG;
      // 08b: ifnonnull 0a3
      // 08e: goto 095
      // 091: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 094: athrow
      // 095: aload 0
      // 096: getfield sixtwo/X.CtPwV Lsixtwo/ii;
      // 099: invokevirtual sixtwo/ii.bjc ()Lsixtwo/mG;
      // 09c: goto 0a7
      // 09f: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a2: athrow
      // 0a3: aload 0
      // 0a4: getfield sixtwo/X.OiSGh Lsixtwo/mG;
      // 0a7: astore 7
      // 0a9: aload 0
      // 0aa: getfield sixtwo/X.aoGjU Z
      // 0ad: ifeq 0b9
      // 0b0: aload 5
      // 0b2: goto 0bb
      // 0b5: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b8: athrow
      // 0b9: aload 4
      // 0bb: astore 8
      // 0bd: aload 0
      // 0be: getfield sixtwo/X.aoGjU Z
      // 0c1: ifeq 0cd
      // 0c4: aload 7
      // 0c6: goto 0cf
      // 0c9: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0cc: athrow
      // 0cd: aload 6
      // 0cf: astore 9
      // 0d1: aload 0
      // 0d2: aload 3
      // 0d3: ifnull 0ef
      // 0d6: getfield sixtwo/X.aoGjU Z
      // 0d9: ifeq 0ee
      // 0dc: goto 0e3
      // 0df: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e2: athrow
      // 0e3: aload 0
      // 0e4: getfield sixtwo/X.DMXak Lsixtwo/mG;
      // 0e7: goto 0f2
      // 0ea: invokestatic sixtwo/X.ka (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ed: athrow
      // 0ee: aload 0
      // 0ef: getfield sixtwo/X.yNEVl Lsixtwo/mG;
      // 0f2: astore 10
      // 0f4: aload 0
      // 0f5: getfield sixtwo/X.PDdiO Lsixtwo/ri;
      // 0f8: aload 8
      // 0fa: invokevirtual sixtwo/ri.dfY (Lsixtwo/mG;)Lsixtwo/ri;
      // 0fd: pop
      // 0fe: aload 0
      // 0ff: getfield sixtwo/X.IpOQw Lsixtwo/ri;
      // 102: aload 9
      // 104: invokevirtual sixtwo/ri.dfY (Lsixtwo/mG;)Lsixtwo/ri;
      // 107: pop
      // 108: aload 0
      // 109: getfield sixtwo/X.KUqGC Lsixtwo/ri;
      // 10c: aload 10
      // 10e: invokevirtual sixtwo/ri.dfY (Lsixtwo/mG;)Lsixtwo/ri;
      // 111: pop
      // 112: return
   }

   public static String[] jZ() {
      return pwtRk;
   }

   public boolean iW() {
      long var1 = gfxGl ^ 4271297355427L;
      String[] var3 = jZ();

      try {
         boolean var10000 = this.TNQyk.cpC(this.yPQoU);
         if (var3 == null) {
            return var10000;
         }

         if (!var10000) {
            return true;
         }
      } catch (MatchException var4) {
         throw ka(var4);
      }

      return false;
   }

   public mG jH() {
      return this.mLQxH;
   }

   public V<? super T> jD() {
      return this.JAVXX;
   }

   private static int kb(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 106;
      if (QagfK[var3] == null) {
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
         long var5 = ubpsf[var3];
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
         Object[] var9 = (Object[])cdJwA.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               cdJwA.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/X", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         QagfK[var3] = var15;
      }

      return QagfK[var3];
   }

   public mG jG() {
      return this.PDPjF;
   }

   public X<T> jl(mG var1) {
      this.mLQxH = var1;
      return this;
   }

   public T iY(mG var1) {
      this.PDPjF = var1;
      this.mLQxH = var1;
      this.syPUd = var1;
      return (T)this;
   }

   public X<T> jk(mG var1) {
      this.PDPjF = var1;
      return this;
   }

   public X<T> jq(mG var1) {
      this.yNEVl = var1;
      return this;
   }

   public X<T> jr(mG var1) {
      this.ZboOg = var1;
      return this;
   }

   public T jb(V<? super T> var1) {
      this.JAVXX = var1;
      return (T)this;
   }

   public X<T> jm(mG var1) {
      this.syPUd = var1;
      return this;
   }

   public boolean jz() {
      return this.rfAch;
   }
}
