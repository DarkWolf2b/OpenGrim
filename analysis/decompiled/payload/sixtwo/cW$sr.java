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
import net.minecraft.class_243;

class cW$sr {
   private final rg TgsVq;
   private final rk HxWES;
   private int hRZdA;
   private class_243 AqODg;
   private boolean YMQFH;
   private boolean tIPuz;
   private static final long qQuCT = gb.aYR(509936826766451556L, 85579035793697715L, MethodHandles.lookup().lookupClass()).a(274841104533760L);
   private static final long[] yHRsF;
   private static final Integer[] wVrvT;
   private static final Map GdEsA = new HashMap(13);

   private cW$sr() {
      long var1 = qQuCT ^ 48714144917621L;
      super();
      this.TgsVq = new rg(dnR<"n">(21556, 887137945912470717L ^ var1));
      this.HxWES = new rk(dnR<"n">(28298, 3013326503525799426L ^ var1));
      this.AqODg = class_243.field_1353;
   }

   static {
      long var0 = qQuCT ^ 32237920270229L;
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
      String var6 = "âåf2´\u001a\u0084#¼¸vÉ=\u009a¹6";
      int var7 = "âåf2´\u001a\u0084#¼¸vÉ=\u009a¹6".length();
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

      yHRsF = var8;
      wVrvT = new Integer[2];
   }

   private static CallSite dnR(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("dnQ".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cW$sr" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static MatchException dnO(MatchException var0) {
      return var0;
   }

   private static int dnQ(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = dnP(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int dnP(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 16786;
      if (wVrvT[var3] == null) {
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
         long var5 = yHRsF[var3];
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
         Object[] var9 = (Object[])GdEsA.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               GdEsA.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cW$sr", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         wVrvT[var3] = var15;
      }

      return wVrvT[var3];
   }

   public void dnK() {
      this.tIPuz = true;
      this.HxWES.dhs(rj.AYqck);
   }

   public boolean dnN() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cW$sr.qQuCT J
      // 03: ldc2_w 61838185857381
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/cW$sr.tIPuz Z
      // 10: aload 3
      // 11: ifnonnull 2e
      // 14: ifeq 40
      // 17: goto 1e
      // 1a: invokestatic sixtwo/cW$sr.dnO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: getfield sixtwo/cW$sr.HxWES Lsixtwo/rk;
      // 22: invokevirtual sixtwo/rk.dhj ()F
      // 25: fconst_0
      // 26: fcmpl
      // 27: goto 2e
      // 2a: invokestatic sixtwo/cW$sr.dnO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: aload 3
      // 2f: ifnonnull 3d
      // 32: ifne 40
      // 35: goto 3c
      // 38: invokestatic sixtwo/cW$sr.dnO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: bipush 1
      // 3d: goto 41
      // 40: bipush 0
      // 41: ireturn
   }

   public float dnM() {
      long var1 = qQuCT ^ 61798585723391L;
      iS[] var3 = dh.afl();

      rk var10000;
      boolean var10001;
      label22: {
         label21: {
            try {
               var10000 = this.HxWES;
               var10001 = this.tIPuz;
               if (var3 != null) {
                  break label22;
               }

               if (!this.tIPuz) {
                  break label21;
               }
            } catch (MatchException var4) {
               throw dnO(var4);
            }

            var10001 = false;
            break label22;
         }

         var10001 = true;
      }

      var10000.dhc(var10001);
      return this.HxWES.dhj();
   }

   public class_243 dnL() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cW$sr.qQuCT J
      // 03: ldc2_w 94761933649205
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnonnull 38
      // 11: getfield sixtwo/cW$sr.YMQFH Z
      // 14: ifne 37
      // 17: goto 1e
      // 1a: invokestatic sixtwo/cW$sr.dnO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: getfield sixtwo/cW$sr.TgsVq Lsixtwo/rg;
      // 22: aload 0
      // 23: getfield sixtwo/cW$sr.AqODg Lnet/minecraft/class_243;
      // 26: invokevirtual sixtwo/rg.dfE (Lnet/minecraft/class_243;)V
      // 29: aload 0
      // 2a: bipush 1
      // 2b: putfield sixtwo/cW$sr.YMQFH Z
      // 2e: aload 0
      // 2f: getfield sixtwo/cW$sr.AqODg Lnet/minecraft/class_243;
      // 32: areturn
      // 33: invokestatic sixtwo/cW$sr.dnO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: aload 0
      // 38: getfield sixtwo/cW$sr.TgsVq Lsixtwo/rg;
      // 3b: aload 0
      // 3c: getfield sixtwo/cW$sr.AqODg Lnet/minecraft/class_243;
      // 3f: invokevirtual sixtwo/rg.dfA (Lnet/minecraft/class_243;)Lnet/minecraft/class_243;
      // 42: areturn
   }

   public void dnJ(int var1, class_243 var2) {
      this.hRZdA = var1;
      this.AqODg = var2;
      this.tIPuz = false;
      this.HxWES.dhs(rj.XzDkv);
   }
}
