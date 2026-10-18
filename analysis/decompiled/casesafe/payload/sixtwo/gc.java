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

public class gc {
   private gd byrwS;
   private int XQGcJ;
   private static final long jBzPG = gb.aYR(-3656354283383529996L, -6907814533791359157L, MethodHandles.lookup().lookupClass()).a(227654918747051L);
   private static final long[] BYNbB;
   private static final Integer[] echEC;
   private static final Map WOqCe = new HashMap(13);

   public gc() {
      long var1 = jBzPG ^ 139807442356710L;
      super();
      this.byrwS = gd.ipLAD;
      this.XQGcJ = aZn<"x">(19043, 9025963275480108842L ^ var1);
   }

   static {
      long var0 = jBzPG ^ 93639300369132L;
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
      String var6 = "├îLP├║\u0081├ô├á├▓\u0000x\u0099h├é=\u0081┬ú";
      int var7 = "├îLP├║\u0081├ô├á├▓\u0000x\u0099h├é=\u0081┬ú".length();
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

      BYNbB = var8;
      echEC = new Integer[2];
   }

   public gc aZj(int var1) {
      this.XQGcJ = var1;
      return this;
   }

   private static int aZm(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = aZl(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public void aZe() {
      long var1 = jBzPG ^ 7217402698525L;
      this.XQGcJ = aZn<"x">(19043, 9026005783145323985L ^ var1);
   }

   public boolean aZd(int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/gc.jBzPG J
      // 03: ldc2_w 17476493074689
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/gg.baA ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: invokevirtual sixtwo/gc.aZf ()Z
      // 11: aload 4
      // 13: ifnonnull 2a
      // 16: ifeq 26
      // 19: goto 20
      // 1c: invokestatic sixtwo/gc.aZk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: bipush 0
      // 21: ireturn
      // 22: invokestatic sixtwo/gc.aZk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: getfield sixtwo/gc.XQGcJ I
      // 2a: aload 4
      // 2c: ifnonnull 42
      // 2f: iload 1
      // 30: if_icmpne 45
      // 33: goto 3a
      // 36: invokestatic sixtwo/gc.aZk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: bipush 1
      // 3b: goto 42
      // 3e: invokestatic sixtwo/gc.aZk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: goto 46
      // 45: bipush 0
      // 46: ireturn
   }

   private static MatchException aZk(MatchException var0) {
      return var0;
   }

   public gc aZi(gd var1) {
      this.byrwS = var1;
      return this;
   }

   private static int aZl(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 29215;
      if (echEC[var3] == null) {
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
         long var5 = BYNbB[var3];
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
         Object[] var9 = (Object[])WOqCe.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               WOqCe.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/gc", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         echEC[var3] = var15;
      }

      return echEC[var3];
   }

   public gd aZg() {
      return this.byrwS;
   }

   public int aZh() {
      return this.XQGcJ;
   }

   public boolean aZf() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/gc.jBzPG J
      // 03: ldc2_w 4201986114877
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/gg.baA ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/gc.XQGcJ I
      // 10: aload 3
      // 11: ifnonnull 33
      // 14: sipush 7365
      // 17: ldc2_w 8539010080694621526
      // 1a: lload 1
      // 1b: lxor
      // 1c: invokedynamic x (IJ)I bsm=sixtwo/gc.aZn (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 21: if_icmpne 36
      // 24: goto 2b
      // 27: invokestatic sixtwo/gc.aZk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: bipush 1
      // 2c: goto 33
      // 2f: invokestatic sixtwo/gc.aZk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 32: athrow
      // 33: goto 37
      // 36: bipush 0
      // 37: ireturn
   }

   private static CallSite aZn(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aZm".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/gc" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
