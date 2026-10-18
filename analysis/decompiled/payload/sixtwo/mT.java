package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class mT {
   private long vJZlo;
   private static iS[] EzOWk;
   private static final long StDmr = gb.aYR(1886939362979048446L, 7818008554207186013L, MethodHandles.lookup().lookupClass()).a(58514490112402L);
   private static final long fCqJQ;

   public static mT cpz() {
      return new mT(true);
   }

   private mT(boolean var1) {
      long var2 = StDmr ^ 121301096547950L;
      super();
      if (var1) {
         this.cpB();
      }
   }

   static {
      long var0 = StDmr ^ 113707352385891L;
      cpJ(null);
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = -5376001920620031636L;
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
      fCqJQ = var7;
   }

   public boolean cpC(long var1) {
      long var3 = StDmr ^ 19559422286456L;
      iS[] var5 = cpK();

      try {
         long var7;
         int var10000 = (var7 = System.currentTimeMillis() - this.vJZlo - var1) == 0L ? 0 : (var7 < 0L ? -1 : 1);
         if (var5 != null) {
            return (boolean)var10000;
         }

         if (var10000 > 0) {
            return (boolean)1;
         }
      } catch (MatchException var6) {
         throw cpL(var6);
      }

      return (boolean)0;
   }

   public long cpF() {
      return System.currentTimeMillis() - this.vJZlo;
   }

   public static iS[] cpK() {
      return EzOWk;
   }

   public static void cpJ(iS[] var0) {
      EzOWk = var0;
   }

   public boolean cpH() {
      long var1 = StDmr ^ 68006022124265L;
      iS[] var3 = cpK();

      try {
         long var5;
         int var10000 = (var5 = this.cpF() - 0L) == 0L ? 0 : (var5 < 0L ? -1 : 1);
         if (var3 != null) {
            return (boolean)var10000;
         }

         if (var10000 <= 0) {
            return (boolean)1;
         }
      } catch (MatchException var4) {
         throw cpL(var4);
      }

      return (boolean)0;
   }

   public void cpB() {
      this.vJZlo = System.currentTimeMillis();
   }

   private static MatchException cpL(MatchException var0) {
      return var0;
   }

   public long cpI() {
      return this.vJZlo;
   }

   public boolean cpD(long var1) {
      long var3 = StDmr ^ 107675626837405L;
      iS[] var5 = cpK();

      int var10000;
      label30: {
         label29: {
            try {
               long var8;
               var10000 = (var8 = this.cpF() - var1 * fCqJQ) == 0L ? 0 : (var8 < 0L ? -1 : 1);
               if (var5 != null) {
                  break label30;
               }

               if (var10000 > 0) {
                  break label29;
               }
            } catch (MatchException var7) {
               throw cpL(var7);
            }

            var10000 = 0;
            break label30;
         }

         var10000 = 1;
      }

      try {
         if (iS.bwL() == null) {
            cpJ(new iS[5]);
         }

         return (boolean)var10000;
      } catch (MatchException var6) {
         throw cpL(var6);
      }
   }

   public static mT cpA() {
      return new mT(false);
   }

   public boolean cpE(long param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mT.StDmr J
      // 03: ldc2_w 132133682010817
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/mT.cpK ()[Lsixtwo/iS;
      // 0b: astore 5
      // 0d: aload 0
      // 0e: invokevirtual sixtwo/mT.cpF ()J
      // 11: lconst_0
      // 12: lcmp
      // 13: aload 5
      // 15: ifnonnull 33
      // 18: ifge 2d
      // 1b: goto 22
      // 1e: invokestatic sixtwo/mT.cpL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: aload 0
      // 23: invokevirtual sixtwo/mT.cpB ()V
      // 26: goto 2d
      // 29: invokestatic sixtwo/mT.cpL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: aload 0
      // 2e: invokevirtual sixtwo/mT.cpF ()J
      // 31: lload 1
      // 32: lcmp
      // 33: aload 5
      // 35: ifnonnull 43
      // 38: iflt 46
      // 3b: goto 42
      // 3e: invokestatic sixtwo/mT.cpL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: bipush 1
      // 43: goto 47
      // 46: bipush 0
      // 47: istore 6
      // 49: iload 6
      // 4b: aload 5
      // 4d: ifnonnull 67
      // 50: ifeq 65
      // 53: goto 5a
      // 56: invokestatic sixtwo/mT.cpL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 59: athrow
      // 5a: aload 0
      // 5b: invokevirtual sixtwo/mT.cpB ()V
      // 5e: goto 65
      // 61: invokestatic sixtwo/mT.cpL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 64: athrow
      // 65: iload 6
      // 67: aload 5
      // 69: ifnull 78
      // 6c: ldc "X4F5Eb"
      // 6e: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 71: goto 78
      // 74: invokestatic sixtwo/mT.cpL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 77: athrow
      // 78: ireturn
   }

   public void cpG(long var1) {
      this.vJZlo = var1;
   }
}
