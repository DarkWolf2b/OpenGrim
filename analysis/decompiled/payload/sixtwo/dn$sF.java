package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_243;

class dn$sF {
   private final class_243 MZUGo;
   private final long SAKLk;
   private boolean uAOSS;
   private final rk DUqGa;
   private static final long HGXbz = gb.aYR(9072864521275221345L, 5003618611436866665L, MethodHandles.lookup().lookupClass()).a(138821822091752L);
   private static final long jYWIl;
   private static final long ZOVgw;

   public dn$sF(class_243 var1) {
      long var2 = HGXbz ^ 57271381941245L;
      super();
      this.uAOSS = false;
      this.DUqGa = new rk((int)jYWIl);
      this.MZUGo = var1;
      this.SAKLk = System.currentTimeMillis();
   }

   static {
      long var5 = HGXbz ^ 81159760527003L;
      Cipher var7;
      Cipher var10000 = var7 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var8 = 1; var8 < 8; var8++) {
         var10003[var8] = (byte)(var5 << var8 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var9 = -4365810018466571872L;
      byte[] var11 = var7.doFinal(
         new byte[]{
            (byte)(var9 >>> 56),
            (byte)(var9 >>> 48),
            (byte)(var9 >>> 40),
            (byte)(var9 >>> 32),
            (byte)(var9 >>> 24),
            (byte)(var9 >>> 16),
            (byte)(var9 >>> 8),
            (byte)var9
         }
      );
      long var14 = (var11[0] & 255L) << 56
         | (var11[1] & 255L) << 48
         | (var11[2] & 255L) << 40
         | (var11[3] & 255L) << 32
         | (var11[4] & 255L) << 24
         | (var11[5] & 255L) << 16
         | (var11[6] & 255L) << 8
         | var11[7] & 255L;
      byte var10001 = -1;
      jYWIl = var14;
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var5 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var2 = -8523123680099423305L;
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
      long var16 = (var4[0] & 255L) << 56
         | (var4[1] & 255L) << 48
         | (var4[2] & 255L) << 40
         | (var4[3] & 255L) << 32
         | (var4[4] & 255L) << 24
         | (var4[5] & 255L) << 16
         | (var4[6] & 255L) << 8
         | var4[7] & 255L;
      var10001 = -1;
      ZOVgw = var16;
   }

   private static MatchException doL(MatchException var0) {
      return var0;
   }

   public boolean doK() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dn$sF.HGXbz J
      // 03: ldc2_w 100088582092764
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/dn$sF.DUqGa Lsixtwo/rk;
      // 10: invokevirtual sixtwo/rk.dhj ()F
      // 13: fconst_0
      // 14: fcmpl
      // 15: aload 3
      // 16: ifnonnull 2e
      // 19: ifne 40
      // 1c: goto 23
      // 1f: invokestatic sixtwo/dn$sF.doL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: aload 0
      // 24: getfield sixtwo/dn$sF.uAOSS Z
      // 27: goto 2e
      // 2a: invokestatic sixtwo/dn$sF.doL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: aload 3
      // 2f: ifnonnull 3d
      // 32: ifeq 40
      // 35: goto 3c
      // 38: invokestatic sixtwo/dn$sF.doL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: bipush 1
      // 3d: goto 41
      // 40: bipush 0
      // 41: ireturn
   }

   public void doJ(lC param1, int param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dn$sF.HGXbz J
      // 003: ldc2_w 72732541165970
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 5
      // 00d: aload 0
      // 00e: getfield sixtwo/dn$sF.DUqGa Lsixtwo/rk;
      // 011: aload 0
      // 012: getfield sixtwo/dn$sF.uAOSS Z
      // 015: aload 5
      // 017: ifnonnull 025
      // 01a: ifne 028
      // 01d: goto 024
      // 020: invokestatic sixtwo/dn$sF.doL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 023: athrow
      // 024: bipush 1
      // 025: goto 029
      // 028: bipush 0
      // 029: invokevirtual sixtwo/rk.dhc (Z)V
      // 02c: aload 0
      // 02d: getfield sixtwo/dn$sF.DUqGa Lsixtwo/rk;
      // 030: aload 0
      // 031: getfield sixtwo/dn$sF.uAOSS Z
      // 034: ifne 041
      // 037: getstatic sixtwo/rj.XzDkv Lsixtwo/rj;
      // 03a: goto 044
      // 03d: invokestatic sixtwo/dn$sF.doL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 040: athrow
      // 041: getstatic sixtwo/rj.AYqck Lsixtwo/rj;
      // 044: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 047: pop
      // 048: invokestatic java/lang/System.currentTimeMillis ()J
      // 04b: aload 0
      // 04c: getfield sixtwo/dn$sF.SAKLk J
      // 04f: lsub
      // 050: lstore 6
      // 052: aload 5
      // 054: ifnonnull 076
      // 057: lload 6
      // 059: iload 2
      // 05a: i2l
      // 05b: getstatic sixtwo/dn$sF.ZOVgw J
      // 05e: lmul
      // 05f: lcmp
      // 060: ifle 07f
      // 063: goto 06a
      // 066: invokestatic sixtwo/dn$sF.doL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 069: athrow
      // 06a: aload 0
      // 06b: bipush 1
      // 06c: putfield sixtwo/dn$sF.uAOSS Z
      // 06f: goto 076
      // 072: invokestatic sixtwo/dn$sF.doL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 075: athrow
      // 076: aload 0
      // 077: getfield sixtwo/dn$sF.DUqGa Lsixtwo/rk;
      // 07a: fconst_0
      // 07b: invokevirtual sixtwo/rk.dhd (F)F
      // 07e: pop
      // 07f: aload 0
      // 080: getfield sixtwo/dn$sF.MZUGo Lnet/minecraft/class_243;
      // 083: invokestatic sixtwo/jI.bIw (Lnet/minecraft/class_243;)Lnet/minecraft/class_241;
      // 086: astore 8
      // 088: aload 8
      // 08a: ifnonnull 092
      // 08d: return
      // 08e: invokestatic sixtwo/dn$sF.doL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 091: athrow
      // 092: ldc 25.0
      // 094: fstore 9
      // 096: aload 8
      // 098: getfield net/minecraft/class_241.field_1343 F
      // 09b: fload 9
      // 09d: fconst_2
      // 09e: fdiv
      // 09f: fsub
      // 0a0: fstore 10
      // 0a2: aload 8
      // 0a4: getfield net/minecraft/class_241.field_1342 F
      // 0a7: fstore 11
      // 0a9: fload 10
      // 0ab: ldc 16.0
      // 0ad: fload 9
      // 0af: invokestatic sixtwo/jf.bAH (FF)F
      // 0b2: fadd
      // 0b3: fstore 12
      // 0b5: fload 11
      // 0b7: ldc 16.0
      // 0b9: fload 9
      // 0bb: invokestatic sixtwo/jf.bAH (FF)F
      // 0be: fadd
      // 0bf: fstore 13
      // 0c1: aload 0
      // 0c2: getfield sixtwo/dn$sF.DUqGa Lsixtwo/rk;
      // 0c5: invokevirtual sixtwo/rk.dhj ()F
      // 0c8: fstore 14
      // 0ca: aload 1
      // 0cb: fload 10
      // 0cd: fload 9
      // 0cf: fconst_2
      // 0d0: fdiv
      // 0d1: fadd
      // 0d2: fload 11
      // 0d4: fload 9
      // 0d6: fconst_2
      // 0d7: fdiv
      // 0d8: fadd
      // 0d9: ldc 0.5
      // 0db: ldc 0.5
      // 0dd: fload 14
      // 0df: fmul
      // 0e0: fadd
      // 0e1: invokestatic sixtwo/jH.bId (Lsixtwo/lC;FFF)V
      // 0e4: aload 1
      // 0e5: fload 10
      // 0e7: fload 11
      // 0e9: fload 9
      // 0eb: fload 9
      // 0ed: fload 14
      // 0ef: fconst_0
      // 0f0: fload 9
      // 0f2: fconst_2
      // 0f3: fdiv
      // 0f4: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 0f7: ldc 3.0
      // 0f9: invokevirtual sixtwo/lC.ccW (FFFFFFLsixtwo/ld;F)V
      // 0fc: aload 1
      // 0fd: getstatic net/minecraft/class_1802.field_8639 Lnet/minecraft/class_1792;
      // 100: fload 12
      // 102: fload 13
      // 104: fconst_1
      // 105: invokevirtual sixtwo/lC.cdZ (Lnet/minecraft/class_1792;FFF)Lsixtwo/jv;
      // 108: invokevirtual sixtwo/jv.bGv ()Lsixtwo/jy;
      // 10b: pop
      // 10c: invokestatic sixtwo/jH.bIf ()V
      // 10f: return
   }
}
