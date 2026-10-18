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

public class cw {
   private final cv yxpCS;
   private final int[] fvuVZ;
   private boolean wefqQ;
   private boolean RDnKR;
   private float rFBJr;
   private final rk vpibn;
   private final rk sXriw;
   private final rk FDzJk;
   private static int[] Lllxb;
   private static final long uHspP = gb.aYR(-2576606539899926608L, 5530636504189042914L, MethodHandles.lookup().lookupClass()).a(93770905611452L);
   private static final String RnzsT;
   private static final long[] fmilM;
   private static final Integer[] ZUFQT;
   private static final Map FQVgq;

   public static int[] TL() {
      return Lllxb;
   }

   public cw(cv var1, mr var2) {
      long var3 = uHspP ^ 34034883742668L;
      super();
      int[] var10000 = TL();
      this.wefqQ = true;
      this.RDnKR = true;
      this.vpibn = new rk(TQ<"m">(31329, 4310232762931465684L ^ var3)).dhs(rj.UPXqT);
      int[] var5 = var10000;

      try {
         this.sXriw = new rk(TQ<"m">(23276, 2721218076154654040L ^ var3)).dhs(rj.UPXqT);
         this.FDzJk = new rk(TQ<"m">(23276, 2721218076154654040L ^ var3)).dhs(rj.XzDkv);
         this.yxpCS = var1;
         this.fvuVZ = var2.clT();
         var1.Ts().add(this);
         if (var5 == null) {
            iS.bwK("xj1Bvb");
         }
      } catch (MatchException var6) {
         throw TM(var6);
      }
   }

   static {
      int[] var10000 = new int[4];
      long var11 = uHspP ^ 98990822720170L;
      TK(var10000);
      Cipher var13;
      Cipher var16 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var16.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("\u009ag2;dr┬ótE┬«V\u0010Q┬«}F\u0014├ľk├Ä┬¬N\u001d+I┬ę\u009di┬╣&\u000b\u0088├▒u├â|├ér\u009c\u0094".getBytes("ISO-8859-1"));
      String var20 = TN(var15).intern();
      int var10001 = -1;
      RnzsT = var20;
      FQVgq = new HashMap(13);
      Cipher var0;
      Cipher var17 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var17.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[2];
      int var3 = 0;
      String var4 = "]\u008e3┬ę┬ž├Ž├ô#├ć\u0092z├Ä3┬░├ő┬Â";
      int var5 = "]\u008e3┬ę┬ž├Ž├ô#├ć\u0092z├Ä3┬░├ő┬Â".length();
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
         byte var23 = -1;
         var6[var10001] = var10004;
      } while (var2 < var5);

      fmilM = var6;
      ZUFQT = new Integer[2];
   }

   public rk TH() {
      return this.vpibn;
   }

   private static int TO(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 8084;
      if (ZUFQT[var3] == null) {
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
         long var5 = fmilM[var3];
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
         Object[] var9 = (Object[])FQVgq.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               FQVgq.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cw", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         ZUFQT[var3] = var15;
      }

      return ZUFQT[var3];
   }

   public int[] TE() {
      return this.fvuVZ;
   }

   public cw Tz() {
      this.yxpCS.To(this);
      return this;
   }

   public boolean TC() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cw.uHspP J
      // 03: ldc2_w 98846294954572
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/cw.TL ()[I
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/cw.RDnKR Z
      // 10: aload 3
      // 11: ifnull 2c
      // 14: ifne 24
      // 17: goto 1e
      // 1a: invokestatic sixtwo/cw.TM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: bipush 0
      // 1f: ireturn
      // 20: invokestatic sixtwo/cw.TM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aload 0
      // 25: getfield sixtwo/cw.yxpCS Lsixtwo/cv;
      // 28: aload 0
      // 29: invokevirtual sixtwo/cv.Tn (Lsixtwo/cw;)Z
      // 2c: ireturn
   }

   private static int TP(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = TO(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite TQ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("TP".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cw" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public float TG() {
      return this.rFBJr;
   }

   public cw Tx(float var1) {
      this.rFBJr = var1;
      return this;
   }

   private static String TN(byte[] var0) {
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

   public rk TI() {
      return this.sXriw;
   }

   public static void TK(int[] var0) {
      Lllxb = var0;
   }

   public cw TB() {
      this.wefqQ = false;
      return this;
   }

   public rk TJ() {
      return this.FDzJk;
   }

   public boolean TF() {
      return this.RDnKR;
   }

   public cw Ty(boolean var1) {
      this.RDnKR = var1;
      return this;
   }

   private static MatchException TM(MatchException var0) {
      return var0;
   }

   public cv TD() {
      return this.yxpCS;
   }

   public cw TA() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cw.uHspP J
      // 03: ldc2_w 34535596477122
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/cw.TL ()[I
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/cw.yxpCS Lsixtwo/cv;
      // 10: aload 0
      // 11: aload 3
      // 12: ifnull 87
      // 15: invokevirtual sixtwo/cv.Tn (Lsixtwo/cw;)Z
      // 18: ifeq 7b
      // 1b: goto 22
      // 1e: invokestatic sixtwo/cw.TM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: aload 0
      // 23: getfield sixtwo/cw.wefqQ Z
      // 26: aload 3
      // 27: ifnull 5e
      // 2a: goto 31
      // 2d: invokestatic sixtwo/cw.TM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30: athrow
      // 31: ifne 47
      // 34: goto 3b
      // 37: invokestatic sixtwo/cw.TM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a: athrow
      // 3b: getstatic sixtwo/cw.RnzsT Ljava/lang/String;
      // 3e: invokestatic sixtwo/cN.XI (Ljava/lang/String;)V
      // 41: aload 0
      // 42: areturn
      // 43: invokestatic sixtwo/cw.TM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 46: athrow
      // 47: aload 0
      // 48: aload 3
      // 49: ifnull 8b
      // 4c: getfield sixtwo/cw.yxpCS Lsixtwo/cv;
      // 4f: invokevirtual sixtwo/cv.Tt ()Ljava/util/List;
      // 52: invokeinterface java/util/List.size ()I 1
      // 57: goto 5e
      // 5a: invokestatic sixtwo/cw.TM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5d: athrow
      // 5e: aload 0
      // 5f: getfield sixtwo/cw.yxpCS Lsixtwo/cv;
      // 62: invokevirtual sixtwo/cv.Tu ()I
      // 65: if_icmple 8a
      // 68: aload 0
      // 69: getfield sixtwo/cw.yxpCS Lsixtwo/cv;
      // 6c: aload 0
      // 6d: invokevirtual sixtwo/cv.Tp (Lsixtwo/cw;)V
      // 70: aload 3
      // 71: ifnonnull 8a
      // 74: goto 7b
      // 77: invokestatic sixtwo/cw.TM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7a: athrow
      // 7b: aload 0
      // 7c: getfield sixtwo/cw.yxpCS Lsixtwo/cv;
      // 7f: aload 0
      // 80: goto 87
      // 83: invokestatic sixtwo/cw.TM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 86: athrow
      // 87: invokevirtual sixtwo/cv.To (Lsixtwo/cw;)V
      // 8a: aload 0
      // 8b: areturn
   }
}
