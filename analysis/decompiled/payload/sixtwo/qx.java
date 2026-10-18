package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.List;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2960;

public class qx extends qw {
   private final String voGpz;
   private class_2960 PlFdi;
   private static final long xsBIM = gb.aYR(-7961019648072389690L, 1314819911249130024L, MethodHandles.lookup().lookupClass()).a(177949752087313L);
   private static final String xkDbM;
   private static final long AdcHI;

   public qx(String var1) {
      long var2 = xsBIM ^ 20806997241855L;
      String var10000 = qw.cZd();
      super(var1);
      String var4 = var10000;

      try {
         this.voGpz = null;
         this.PlFdi = rD.dlR().cZS().getOrDefault(rD.dlR().cZR().get(var1).getFirst(), List.of()).stream().findFirst().orElse(null);
         if (var4 != null) {
            iS.bwK("y81N2");
         }
      } catch (MatchException var5) {
         throw cZh(var5);
      }
   }

   public qx(String var1, String var2) {
      super(var1);
      this.voGpz = var2;
      this.cZe();
   }

   static {
      long var5 = xsBIM ^ 82555397449211L;
      Cipher var7;
      Cipher var10000 = var7 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var8 = 1; var8 < 8; var8++) {
         var10003[var8] = (byte)(var5 << var8 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var9 = var7.doFinal("\u0080â\u0001DT\u0092¾)".getBytes("ISO-8859-1"));
      String var12 = cZi(var9).intern();
      byte var10001 = -1;
      xkDbM = var12;
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var5 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var2 = -4059865398935449578L;
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
      long var14 = (var4[0] & 255L) << 56
         | (var4[1] & 255L) << 48
         | (var4[2] & 255L) << 40
         | (var4[3] & 255L) << 32
         | (var4[4] & 255L) << 24
         | (var4[5] & 255L) << 16
         | (var4[6] & 255L) << 8
         | var4[7] & 255L;
      var10001 = -1;
      AdcHI = var14;
   }

   @Override
   public class_2960 cZa() {
      return this.PlFdi;
   }

   private void cZe() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/qx.xsBIM J
      // 03: ldc2_w 137734007744936
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/qw.cZd ()Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnonnull 24
      // 11: getfield sixtwo/qx.PlFdi Lnet/minecraft/class_2960;
      // 14: ifnull 23
      // 17: goto 1e
      // 1a: invokestatic sixtwo/qx.cZh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: return
      // 1f: invokestatic sixtwo/qx.cZh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 22: athrow
      // 23: aload 0
      // 24: invokedynamic run (Lsixtwo/qx;)Ljava/lang/Runnable; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()V, sixtwo/qx.cZf ()V, ()V ]
      // 29: invokestatic java/util/concurrent/CompletableFuture.runAsync (Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;
      // 2c: pop
      // 2d: return
   }

   private static Throwable cZh(Throwable var0) {
      return var0;
   }

   private static String cZi(byte[] var0) {
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
}
