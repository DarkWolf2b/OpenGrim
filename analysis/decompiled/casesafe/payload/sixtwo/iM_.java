package sixtwo;

import com.google.gson.JsonObject;
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

public class iM extends iO implements rp {
   private String zovQt;
   private static final long troaK = gb.aYR(-5817641879075806236L, 6860356179802339588L, MethodHandles.lookup().lookupClass()).a(41264538323482L);
   private static final String[] OvjhM;
   private static final String[] rBQyn;
   private static final Map zrqsg = new HashMap(13);
   private static final long[] kAULI;
   private static final Integer[] rPbaq;
   private static final Map Ixfyl;

   static {
      long var11 = troaK ^ 127929146613922L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[3];
      int var18 = 0;
      String var17 = "y├ł├ú\u0094U├¬X├×a \u0092J\u008d\u0088Ubm├▒\u0006\f├ş┬Ž\u0082├Ş0\u001f├Łk]\u0096Qv┬ź\u00ad\u0083(9,S├Â\"├ş3 ┬│┬┐\u0005{\u001f├┐├ú\u0006├ę┬¬:┬ž┬¬├╗├ö├Ż\u00ad\u009ap}├Ç.\u00145\u0019H&┬«]\u0010├ć\u0015\u0088\u0083├ź┬Âgt\u0082K]#├ćJSv";
      int var19 = "y├ł├ú\u0094U├¬X├×a \u0092J\u008d\u0088Ubm├▒\u0006\f├ş┬Ž\u0082├Ş0\u001f├Łk]\u0096Qv┬ź\u00ad\u0083(9,S├Â\"├ş3 ┬│┬┐\u0005{\u001f├┐├ú\u0006├ę┬¬:┬ž┬¬├╗├ö├Ż\u00ad\u009ap}├Ç.\u00145\u0019H&┬«]\u0010├ć\u0015\u0088\u0083├ź┬Âgt\u0082K]#├ćJSv"
         .length();
      char var16 = 24;
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var27 = btA(var21).intern();
         int var10001 = -1;
         var20[var18++] = var27;
         if ((var15 += var16) >= var19) {
            OvjhM = var20;
            rBQyn = new String[3];
            Ixfyl = new HashMap(13);
            Cipher var0;
            var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[3];
            int var3 = 0;
            String var4 = "/┬Ż\u0003\u0096┬┐├î┬░M┬Â┬▓\u007f~\u001c\u0016w├ž┬ž├É:├úJ\u0002`|";
            int var5 = "/┬Ż\u0003\u0096┬┐├î┬░M┬Â┬▓\u007f~\u001c\u0016w├ž┬ž├É:├úJ\u0002`|".length();
            byte var2 = 0;

            do {
               var10001 = var2;
               var2 += 8;
               byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
               var10001 = var3++;
               long var8 = (var7[0] & 255L) << 56
                  | (var7[1] & 255L) << 48
                  | (var7[2] & 255L) << 40
                  | (var7[3] & 255L) << 32
                  | (var7[4] & 255L) << 24
                  | (var7[5] & 255L) << 16
                  | (var7[6] & 255L) << 8
                  | var7[7] & 255L;
               byte[] var10 = var0.doFinal(
                  new byte[]{
                     (byte)(var8 >>> 56),
                     (byte)(var8 >>> 48),
                     (byte)(var8 >>> 40),
                     (byte)(var8 >>> 32),
                     (byte)(var8 >>> 24),
                     (byte)(var8 >>> 16),
                     (byte)(var8 >>> 8),
                     (byte)var8
                  }
               );
               long var10004 = (var10[0] & 255L) << 56
                  | (var10[1] & 255L) << 48
                  | (var10[2] & 255L) << 40
                  | (var10[3] & 255L) << 32
                  | (var10[4] & 255L) << 24
                  | (var10[5] & 255L) << 16
                  | (var10[6] & 255L) << 8
                  | var10[7] & 255L;
               byte var31 = -1;
               var6[var10001] = var10004;
            } while (var2 < var5);

            kAULI = var6;
            rPbaq = new Integer[3];
            return;
         }

         var16 = var17.charAt(var15);
      }
   }

   @Override
   public boolean equals(Object param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/iM.troaK J
      // 03: ldc2_w 100726103965379
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/iO.buz ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 1
      // 0e: aload 4
      // 10: ifnonnull 25
      // 13: aload 0
      // 14: if_acmpne 24
      // 17: goto 1e
      // 1a: invokestatic sixtwo/iM.btz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: bipush 1
      // 1f: ireturn
      // 20: invokestatic sixtwo/iM.btz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aload 1
      // 25: aload 4
      // 27: ifnonnull 3e
      // 2a: instanceof sixtwo/iM
      // 2d: ifne 3d
      // 30: goto 37
      // 33: invokestatic sixtwo/iM.btz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: bipush 0
      // 38: ireturn
      // 39: invokestatic sixtwo/iM.btz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: aload 1
      // 3e: checkcast sixtwo/iM
      // 41: astore 5
      // 43: aload 5
      // 45: aload 0
      // 46: invokevirtual sixtwo/iM.bty (Ljava/lang/Object;)Z
      // 49: aload 4
      // 4b: ifnonnull 6f
      // 4e: ifne 5e
      // 51: goto 58
      // 54: invokestatic sixtwo/iM.btz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 57: athrow
      // 58: bipush 0
      // 59: ireturn
      // 5a: invokestatic sixtwo/iM.btz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5d: athrow
      // 5e: aload 0
      // 5f: aload 4
      // 61: ifnonnull 79
      // 64: aload 1
      // 65: invokespecial sixtwo/iO.equals (Ljava/lang/Object;)Z
      // 68: goto 6f
      // 6b: invokestatic sixtwo/iM.btz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6e: athrow
      // 6f: ifne 78
      // 72: bipush 0
      // 73: ireturn
      // 74: invokestatic sixtwo/iM.btz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 77: athrow
      // 78: aload 0
      // 79: invokevirtual sixtwo/iM.btw ()Ljava/lang/String;
      // 7c: astore 6
      // 7e: aload 5
      // 80: invokevirtual sixtwo/iM.btw ()Ljava/lang/String;
      // 83: astore 7
      // 85: aload 6
      // 87: aload 4
      // 89: ifnonnull ab
      // 8c: ifnonnull a9
      // 8f: goto 96
      // 92: invokestatic sixtwo/iM.btz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 95: athrow
      // 96: aload 7
      // 98: ifnull c5
      // 9b: goto a2
      // 9e: invokestatic sixtwo/iM.btz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a1: athrow
      // a2: goto bf
      // a5: invokestatic sixtwo/iM.btz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a8: athrow
      // a9: aload 6
      // ab: aload 7
      // ad: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // b0: aload 4
      // b2: ifnonnull c6
      // b5: ifne c5
      // b8: goto bf
      // bb: invokestatic sixtwo/iM.btz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // be: athrow
      // bf: bipush 0
      // c0: ireturn
      // c1: invokestatic sixtwo/iM.btz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c4: athrow
      // c5: bipush 1
      // c6: ireturn
   }

   @Override
   public String toString() {
      long var1 = troaK ^ 19113307245128L;
      return btD<"h">(2051, 1970191265958013661L ^ var1);
   }

   @Override
   public int hashCode() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/iM.troaK J
      // 03: ldc2_w 47204461641551
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/iO.buz ()[Ljava/lang/String;
      // 0b: sipush 29686
      // 0e: ldc2_w 1641470371599452376
      // 11: lload 1
      // 12: lxor
      // 13: invokedynamic k (IJ)I bsm=sixtwo/iM.btG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 18: istore 4
      // 1a: astore 3
      // 1b: aload 0
      // 1c: invokespecial sixtwo/iO.hashCode ()I
      // 1f: istore 5
      // 21: aload 0
      // 22: invokevirtual sixtwo/iM.btw ()Ljava/lang/String;
      // 25: astore 6
      // 27: iload 5
      // 29: sipush 3735
      // 2c: ldc2_w 3212590460045129146
      // 2f: lload 1
      // 30: lxor
      // 31: invokedynamic k (IJ)I bsm=sixtwo/iM.btG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 36: imul
      // 37: aload 6
      // 39: aload 3
      // 3a: ifnonnull 5d
      // 3d: ifnonnull 5b
      // 40: goto 47
      // 43: invokestatic sixtwo/iM.btz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 46: athrow
      // 47: sipush 1567
      // 4a: ldc2_w 6860233061222776112
      // 4d: lload 1
      // 4e: lxor
      // 4f: invokedynamic k (IJ)I bsm=sixtwo/iM.btG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 54: goto 60
      // 57: invokestatic sixtwo/iM.btz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5a: athrow
      // 5b: aload 6
      // 5d: invokevirtual java/lang/Object.hashCode ()I
      // 60: iadd
      // 61: istore 5
      // 63: iload 5
      // 65: ireturn
   }

   public String btw() {
      return this.zovQt;
   }

   @Override
   public void fromJson(JsonObject var1) {
      long var2 = troaK ^ 10862356753095L;
      super.fromJson(var1);
      this.zovQt = this.readString(var1, btD<"h">(6734, 8859503934997387294L ^ var2));
   }

   @Override
   public JsonObject toJson() {
      long var1 = troaK ^ 26295176696908L;
      JsonObject var3 = super.toJson();

      try {
         if (this.zovQt != null) {
            var3.addProperty(btD<"h">(22263, 7031610502183021102L ^ var1), this.zovQt);
         }

         return var3;
      } catch (MatchException var4) {
         throw btz(var4);
      }
   }

   private static MatchException btz(MatchException var0) {
      return var0;
   }

   @Override
   protected boolean bty(Object var1) {
      return var1 instanceof iM;
   }

   private static String btA(byte[] var0) {
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

   private static CallSite btD(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("btC".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/iM" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public iM btx(String var1) {
      this.zovQt = var1;
      return this;
   }

   private static Object btC(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = btB(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String btB(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 12147;
      if (rBQyn[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])zrqsg.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               zrqsg.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/iM", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = OvjhM[var5].getBytes("ISO-8859-1");
         rBQyn[var5] = btA(((Cipher)var4[0]).doFinal(var9));
      }

      return rBQyn[var5];
   }

   private static int btF(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = btE(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite btG(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("btF".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/iM" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int btE(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 900;
      if (rPbaq[var3] == null) {
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
         long var5 = kAULI[var3];
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
         Object[] var9 = (Object[])Ixfyl.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               Ixfyl.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/iM", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         rPbaq[var3] = var15;
      }

      return rPbaq[var3];
   }
}
