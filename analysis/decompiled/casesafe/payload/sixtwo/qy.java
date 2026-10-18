package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.List;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2960;

public class qy extends qz {
   private final String npyNN;
   private class_2960 Lizxc;
   private static final long cYQCA = gb.aYR(-5979013963953818785L, 5127075084666226216L, MethodHandles.lookup().lookupClass()).a(141215288678797L);
   private static final String YEeWf;
   private static final long DijeV;

   public qy(String var1) {
      long var2 = cYQCA ^ 38616003940175L;
      super(var1);
      qw.cZd();
      this.npyNN = null;

      try {
         this.Lizxc = rD.dlT().dat().getOrDefault(rD.dlT().das().get(var1).getFirst(), List.of()).stream().findFirst().orElse(null);
         if (iS.bwL() == null) {
            qw.cZc("sS2mJ");
         }
      } catch (MatchException var5) {
         throw cZo(var5);
      }
   }

   public qy(String var1, String var2) {
      super(var1);
      this.npyNN = var2;
      this.cZj();
   }

   static {
      long var5 = cYQCA ^ 36979452893699L;
      Cipher var7;
      Cipher var10000 = var7 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var8 = 1; var8 < 8; var8++) {
         var10003[var8] = (byte)(var5 << var8 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var9 = var7.doFinal("┬żN[D├ú\u001a/d".getBytes("ISO-8859-1"));
      String var12 = cZp(var9).intern();
      byte var10001 = -1;
      YEeWf = var12;
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var5 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var2 = -7251447436314085502L;
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
      DijeV = var14;
   }

   @Override
   public class_2960 cZk() {
      return this.Lizxc;
   }

   private static Throwable cZo(Throwable var0) {
      return var0;
   }

   private static String cZp(byte[] var0) {
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

   private void cZj() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/qy.cYQCA J
      // 03: ldc2_w 64313979477195
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/qw.cZd ()Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnonnull 24
      // 11: getfield sixtwo/qy.Lizxc Lnet/minecraft/class_2960;
      // 14: ifnull 23
      // 17: goto 1e
      // 1a: invokestatic sixtwo/qy.cZo (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: return
      // 1f: invokestatic sixtwo/qy.cZo (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 22: athrow
      // 23: aload 0
      // 24: invokedynamic run (Lsixtwo/qy;)Ljava/lang/Runnable; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()V, sixtwo/qy.cZl ()V, ()V ]
      // 29: invokestatic java/util/concurrent/CompletableFuture.runAsync (Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;
      // 2c: pop
      // 2d: return
   }
}
