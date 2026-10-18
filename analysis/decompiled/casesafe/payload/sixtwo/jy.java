package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1799;
import org.joml.Matrix3x2f;
import org.joml.Matrix3x2fc;
import org.jspecify.annotations.Nullable;

abstract class jy<T extends jy<T>> implements lK, lJ<T> {
   private static final lN wyYmy;
   protected final Matrix3x2fc wvKbm;
   protected final class_1799 qeMTM;
   protected final float svsZw;
   protected final float zXQoo;
   protected ju$tT qxFcM;
   private static final long NBNQu = gb.aYR(7289900486859939433L, 933198282271656753L, MethodHandles.lookup().lookupClass()).a(110455426521662L);

   @Override
   public lN batchKey() {
      long var1 = NBNQu ^ 100056628601163L;

      try {
         if (this.qxFcM == ju$tT.IHKNQ) {
            return wyYmy;
         }
      } catch (MatchException var3) {
         throw bGB(var3);
      }

      return lN.immediate();
   }

   protected jy(@Nullable Matrix3x2fc var1, class_1799 var2, float var3, float var4, ju$tT var5) {
      long var6 = NBNQu ^ 90134237374511L;
      String var10000 = ju.bGn();
      super();
      String var8 = var10000;

      Matrix3x2f var10001;
      label42: {
         try {
            var12 = this;
            if (var1 == null) {
               var10001 = null;
               break label42;
            }
         } catch (MatchException var11) {
            throw bGB(var11);
         }

         var10001 = new Matrix3x2f(var1);
      }

      label35: {
         label34: {
            try {
               var12.wvKbm = var10001;
               this.qeMTM = var2.method_7972();
               this.svsZw = var3;
               this.zXQoo = var4;
               var13 = this;
               var14 = var5;
               if (var8 == null) {
                  break label35;
               }

               if (var5 == null) {
                  break label34;
               }
            } catch (MatchException var10) {
               throw bGB(var10);
            }

            var14 = var5;
            break label35;
         }

         var14 = ju$tT.yDoOO;
      }

      try {
         var13.qxFcM = var14;
         if (var8 == null) {
            iS.bwK("d1G9Kc");
         }
      } catch (MatchException var9) {
         throw bGB(var9);
      }
   }

   static {
      long var4 = NBNQu ^ 71825725699573L;
      Cipher var1;
      Cipher var10000 = var1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var4 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var2 = 1; var2 < 8; var2++) {
         var10003[var2] = (byte)(var4 << var2 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var3 = var1.doFinal("S\u0001U\u0090\u0085\u0011k┬ŽZb\u008c\u008aF┬│'\r4├ÜSis\u009f┬Ş├ů".getBytes("ISO-8859-1"));
      String var6 = bGC(var3).intern();
      byte var10001 = -1;
      String var0 = var6;
      wyYmy = lN.of(var0, null, lB.xCeuB, ju$tT.IHKNQ);
   }

   @Override
   public void execute() {
      this.renderIntoBatch();
   }

   @Override
   public void endBatch() {
      long var1 = NBNQu ^ 138822515502549L;

      try {
         if (this.qxFcM == ju$tT.IHKNQ) {
            ju.bFV();
         }
      } catch (MatchException var3) {
         throw bGB(var3);
      }
   }

   public T bGx() {
      return this.bGy(ju$tT.yDoOO);
   }

   public T bGy(ju$tT var1) {
      long var2 = NBNQu ^ 46195621837748L;
      String var4 = ju.bGn();

      jy var10000;
      ju$tT var10001;
      label22: {
         label21: {
            try {
               var10000 = this;
               var10001 = var1;
               if (var4 == null) {
                  break label22;
               }

               if (var1 == null) {
                  break label21;
               }
            } catch (MatchException var5) {
               throw bGB(var5);
            }

            var10001 = var1;
            break label22;
         }

         var10001 = ju$tT.yDoOO;
      }

      var10000.qxFcM = var10001;
      return this.bGA();
   }

   private static MatchException bGB(MatchException var0) {
      return var0;
   }

   private T bGA() {
      return (T)this;
   }

   private static String bGC(byte[] var0) {
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

   @Override
   public void beginBatch() {
   }

   public T bGw() {
      return this.bGy(ju$tT.IHKNQ);
   }

   public T bGv() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jy.NBNQu J
      // 03: ldc2_w 57028238422275
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/ju.bGn ()Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 30
      // 11: getfield sixtwo/jy.qeMTM Lnet/minecraft/class_1799;
      // 14: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 17: ifne 2c
      // 1a: goto 21
      // 1d: invokestatic sixtwo/jy.bGB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 0
      // 22: invokestatic sixtwo/lF.cfA (Lsixtwo/lI;)V
      // 25: goto 2c
      // 28: invokestatic sixtwo/jy.bGB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: aload 0
      // 2d: invokevirtual sixtwo/jy.bGA ()Lsixtwo/jy;
      // 30: areturn
   }
}
