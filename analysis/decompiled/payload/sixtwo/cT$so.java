package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.CopyOnWriteArrayList;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2960;
import net.minecraft.class_5602;
import net.minecraft.class_591;
import net.minecraft.class_742;
import org.joml.Vector3f;

class cT$so {
   private final class_742 VwpaT;
   private final class_591 ugYAv;
   private final class_2960 UvTDM;
   private final mT hKtLW;
   final cT RqOGl;
   private static final long BAIKm = gb.aYR(-6992043895842856326L, -3835896092020489527L, MethodHandles.lookup().lookupClass()).a(133161837207714L);
   private static final long[] bZlSN;
   private static final Long[] OQynS;
   private static final Map qYOrT = new HashMap(13);

   public cT$so(cT var1, class_742 var2, class_2960 var3) {
      this.RqOGl = var1;
      this.hKtLW = mT.cpz();
      this.VwpaT = var2;
      this.ugYAv = new class_591(rD.dlmvG.method_31974().method_32072(class_5602.field_27577), true);
      this.ugYAv.method_2838().method_41924(new Vector3f(-0.3F, -0.3F, -0.3F));
      this.UvTDM = var3;
   }

   static {
      long var0 = BAIKm ^ 40671583515222L;
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
      String var6 = "\u0081ÒÒ??R\u0010\u009b\u0088\u001c-U\u0014Tæt";
      int var7 = "\u0081ÒÒ??R\u0010\u009b\u0088\u001c-U\u0014Tæt".length();
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

      bZlSN = var8;
      OQynS = new Long[2];
   }

   private static CallSite dnF(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("dnE".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cT$so" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public class_742 dny() {
      return this.VwpaT;
   }

   public class_591 dnz() {
      return this.ugYAv;
   }

   public class_2960 dnA() {
      return this.UvTDM;
   }

   private static MatchException dnC(MatchException var0) {
      return var0;
   }

   private static long dnD(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 12784;
      if (OQynS[var3] == null) {
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
         long var5 = bZlSN[var3];
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
         Object[] var9 = (Object[])qYOrT.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               qYOrT.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cT$so", var14);
         }

         long var15 = (var10[0] & 255L) << 56
            | (var10[1] & 255L) << 48
            | (var10[2] & 255L) << 40
            | (var10[3] & 255L) << 32
            | (var10[4] & 255L) << 24
            | (var10[5] & 255L) << 16
            | (var10[6] & 255L) << 8
            | var10[7] & 255L;
         OQynS[var3] = var15;
      }

      return OQynS[var3];
   }

   private static long dnE(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      long var7 = dnD(var4, var5);
      MethodHandle var9 = MethodHandles.constant(long.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var9, 0, int.class, long.class));
      return var7;
   }

   public mT dnB() {
      return this.hKtLW;
   }

   public float dnx() {
      long var1 = BAIKm ^ 70294166855386L;
      long var3 = this.RqOGl.CeLKq.VC() * dnF<"b">(13391, 501205186586941373L ^ var1);
      long var5 = this.hKtLW.cpF();
      long var7 = Math.max(0L, var3 - var5);
      return Math.min(1.0F, (float)var7 / (float)var3);
   }

   public void dnw(CopyOnWriteArrayList<cT$so> param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cT$so.BAIKm J
      // 03: ldc2_w 105028080431699
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/cT$so.hKtLW Lsixtwo/mT;
      // 11: aload 0
      // 12: getfield sixtwo/cT$so.RqOGl Lsixtwo/cT;
      // 15: getfield sixtwo/cT.CeLKq Lsixtwo/cC;
      // 18: invokevirtual sixtwo/cC.VC ()I
      // 1b: i2l
      // 1c: sipush 12519
      // 1f: ldc2_w 6600779464665546653
      // 22: lload 2
      // 23: lxor
      // 24: invokedynamic b (IJ)J bsm=sixtwo/cT$so.dnF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 29: lmul
      // 2a: invokevirtual sixtwo/mT.cpC (J)Z
      // 2d: aload 4
      // 2f: ifnonnull 48
      // 32: ifeq 6d
      // 35: goto 3c
      // 38: invokestatic sixtwo/cT$so.dnC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: aload 1
      // 3d: aload 0
      // 3e: invokevirtual java/util/concurrent/CopyOnWriteArrayList.remove (Ljava/lang/Object;)Z
      // 41: goto 48
      // 44: invokestatic sixtwo/cT$so.dnC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: pop
      // 49: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 4c: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 4f: aload 0
      // 50: getfield sixtwo/cT$so.VwpaT Lnet/minecraft/class_742;
      // 53: invokevirtual net/minecraft/class_742.method_5628 ()I
      // 56: getstatic net/minecraft/class_1297$class_5529.field_26999 Lnet/minecraft/class_1297$class_5529;
      // 59: invokevirtual net/minecraft/class_638.method_2945 (ILnet/minecraft/class_1297$class_5529;)V
      // 5c: aload 0
      // 5d: getfield sixtwo/cT$so.VwpaT Lnet/minecraft/class_742;
      // 60: getstatic net/minecraft/class_1297$class_5529.field_26999 Lnet/minecraft/class_1297$class_5529;
      // 63: invokevirtual net/minecraft/class_742.method_31745 (Lnet/minecraft/class_1297$class_5529;)V
      // 66: aload 0
      // 67: getfield sixtwo/cT$so.VwpaT Lnet/minecraft/class_742;
      // 6a: invokevirtual net/minecraft/class_742.method_36209 ()V
      // 6d: return
   }
}
