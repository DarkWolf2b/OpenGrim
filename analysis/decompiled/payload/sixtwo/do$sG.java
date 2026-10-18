package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;

class do$sG {
   private final class_1297 ZaYMC;
   private boolean hkzUL;
   private final rk zzzOY;
   private static final long yWgTa = gb.aYR(6292795855422193390L, 741134432073114025L, MethodHandles.lookup().lookupClass()).a(62048899624806L);
   private static final long dEIfC;

   public do$sG(class_1297 var1) {
      long var2 = yWgTa ^ 30312754236518L;
      super();
      this.hkzUL = false;
      this.zzzOY = new rk((int)dEIfC).dhs(rj.XzDkv);
      this.ZaYMC = var1;
   }

   static {
      long var0 = yWgTa ^ 47576562395281L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = 7637147985002929944L;
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
      dEIfC = var7;
   }

   private static MatchException doO(MatchException var0) {
      return var0;
   }

   public void doM(lC var1, float var2, float var3, float var4, mG var5) {
      long var6 = yWgTa ^ 51621057808714L;
      iS[] var8 = dh.afl();

      rk var10000;
      boolean var10001;
      label22: {
         label21: {
            try {
               var10000 = this.zzzOY;
               var10001 = this.hkzUL;
               if (var8 != null) {
                  break label22;
               }

               if (!this.hkzUL) {
                  break label21;
               }
            } catch (MatchException var12) {
               throw doO(var12);
            }

            var10001 = false;
            break label22;
         }

         var10001 = true;
      }

      var10000.dhc(var10001);
      float var9 = this.zzzOY.dhj();
      mG var10 = var5.cob(var9);
      float var11 = 30.0F - 30.0F * var9;
      lG.XSRvt.bUH(kG.bTw(var1.cfc(), var2 - var4 / 2.0F, var3 - var11, 0.0, var4, var4).dtF(var10).dtG());
   }

   public boolean doN() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/do$sG.yWgTa J
      // 03: ldc2_w 80684615966538
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/do$sG.hkzUL Z
      // 10: aload 3
      // 11: ifnonnull 2e
      // 14: ifeq 40
      // 17: goto 1e
      // 1a: invokestatic sixtwo/do$sG.doO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: getfield sixtwo/do$sG.zzzOY Lsixtwo/rk;
      // 22: invokevirtual sixtwo/rk.dhj ()F
      // 25: fconst_0
      // 26: fcmpl
      // 27: goto 2e
      // 2a: invokestatic sixtwo/do$sG.doO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: aload 3
      // 2f: ifnonnull 3d
      // 32: ifne 40
      // 35: goto 3c
      // 38: invokestatic sixtwo/do$sG.doO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: bipush 1
      // 3d: goto 41
      // 40: bipush 0
      // 41: ireturn
   }
}
