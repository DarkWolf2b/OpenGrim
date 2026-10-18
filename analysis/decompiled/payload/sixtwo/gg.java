package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import java.util.Objects;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public abstract class gg extends iS {
   protected int XWrfQ;
   protected int[] RcFWc;
   protected int[] lRvVv;
   protected gc GfFkt;
   protected boolean RliRe;
   protected boolean tZRhp;
   protected boolean dktTQ;
   protected boolean EDndy;
   protected gh utKrA;
   protected rk vGSNX;
   protected rk bKydN;
   protected ri GYAAa;
   private static String[] rWBfw;
   private static final long sxSiM = gb.aYR(-4690808252542375339L, -5296510176118890153L, MethodHandles.lookup().lookupClass()).a(83809520359028L);
   private static final String jdjGT;
   private static final long[] KVEqq;
   private static final Integer[] LTRAw;
   private static final Map BXJbv;

   public gg(gf var1) {
      long var2 = sxSiM ^ 8662086940288L;
      super();
      baA();
      this.GfFkt = new gc();
      this.vGSNX = new rk(baF<"s">(12464, 1307997509236530959L ^ var2)).dhs(rj.UPXqT);
      this.bKydN = new rk(baF<"s">(30186, 6479504497207040596L ^ var2)).dhs(rj.MBpuQ);
      this.GYAAa = new ri(baF<"s">(30186, 6479504497207040596L ^ var2));
      var1 = Objects.requireNonNull(var1, jdjGT);
      this.XWrfQ = var1.aZM();
      this.RliRe = var1.aZN();
      this.tZRhp = var1.aZR();
      this.dktTQ = var1.aZT();

      try {
         this.EDndy = var1.aZV();
         this.utKrA = var1.aZO();
         this.GfFkt.aZj(var1.aZP());
         if (iS.bwL() == null) {
            baz(new String[1]);
         }
      } catch (MatchException var5) {
         throw baB(var5);
      }
   }

   static {
      long var11 = sxSiM ^ 115278408283827L;
      baz(null);
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("ã\u008a»\u000bæ\u0083E\u0092".getBytes("ISO-8859-1"));
      String var19 = baC(var15).intern();
      int var10001 = -1;
      jdjGT = var19;
      BXJbv = new HashMap(13);
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[2];
      int var3 = 0;
      String var4 = "/»V=\u0084å°ÿ\u0019T\u0099Æ\u008b.æs";
      int var5 = "/»V=\u0084å°ÿ\u0019T\u0099Æ\u008b.æs".length();
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
         byte var22 = -1;
         var6[var10001] = var10004;
      } while (var2 < var5);

      KVEqq = var6;
      LTRAw = new Integer[2];
   }

   public static void baz(String[] var0) {
      rWBfw = var0;
   }

   private static int baD(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 24774;
      if (LTRAw[var3] == null) {
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
         long var5 = KVEqq[var3];
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
         Object[] var9 = (Object[])BXJbv.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               BXJbv.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/gg", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         LTRAw[var3] = var15;
      }

      return LTRAw[var3];
   }

   public gg bau(boolean var1) {
      this.EDndy = var1;
      return this;
   }

   public gg bav(gh var1) {
      this.utKrA = var1;
      return this;
   }

   public gc baf() {
      return this.GfFkt;
   }

   private static CallSite baF(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("baE".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/gg" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public void baa(boolean param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/gg.sxSiM J
      // 03: ldc2_w 134954558454745
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/gg.baA ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: invokestatic sixtwo/mZ.css ()Z
      // 10: aload 4
      // 12: ifnonnull 24
      // 15: ifne 20
      // 18: goto 1f
      // 1b: invokestatic sixtwo/gg.baB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e: athrow
      // 1f: return
      // 20: aload 0
      // 21: getfield sixtwo/gg.RliRe Z
      // 24: aload 4
      // 26: ifnonnull 4e
      // 29: iload 1
      // 2a: if_icmpne 39
      // 2d: goto 34
      // 30: invokestatic sixtwo/gg.baB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33: athrow
      // 34: return
      // 35: invokestatic sixtwo/gg.baB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: aload 0
      // 3a: iload 1
      // 3b: putfield sixtwo/gg.RliRe Z
      // 3e: aload 0
      // 3f: aload 4
      // 41: ifnonnull 69
      // 44: getfield sixtwo/gg.RliRe Z
      // 47: goto 4e
      // 4a: invokestatic sixtwo/gg.baB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4d: athrow
      // 4e: ifeq 61
      // 51: aload 0
      // 52: invokevirtual sixtwo/gg.aaj ()V
      // 55: aload 4
      // 57: ifnull 6c
      // 5a: goto 61
      // 5d: invokestatic sixtwo/gg.baB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 60: athrow
      // 61: aload 0
      // 62: goto 69
      // 65: invokestatic sixtwo/gg.baB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 68: athrow
      // 69: invokevirtual sixtwo/gg.YO ()V
      // 6c: return
   }

   public rk bal() {
      return this.vGSNX;
   }

   public rk bam() {
      return this.bKydN;
   }

   public ri ban() {
      return this.GYAAa;
   }

   public gg baq(int[] var1) {
      this.lRvVv = var1;
      return this;
   }

   public gg bas(boolean var1) {
      this.tZRhp = var1;
      return this;
   }

   private static MatchException baB(MatchException var0) {
      return var0;
   }

   public gg bap(int[] var1) {
      this.RcFWc = var1;
      return this;
   }

   public gg baw(rk var1) {
      this.vGSNX = var1;
      return this;
   }

   public boolean bai() {
      return this.dktTQ;
   }

   public static String[] baA() {
      return rWBfw;
   }

   public void aZZ() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/gg.sxSiM J
      // 03: ldc2_w 78165156798348
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/gg.baA ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 0
      // 0e: getfield sixtwo/gg.RliRe Z
      // 11: aload 3
      // 12: ifnonnull 20
      // 15: ifne 23
      // 18: goto 1f
      // 1b: invokestatic sixtwo/gg.baB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e: athrow
      // 1f: bipush 1
      // 20: goto 24
      // 23: bipush 0
      // 24: putfield sixtwo/gg.RliRe Z
      // 27: aload 0
      // 28: aload 3
      // 29: ifnonnull 5c
      // 2c: getfield sixtwo/gg.RliRe Z
      // 2f: ifeq 4e
      // 32: goto 39
      // 35: invokestatic sixtwo/gg.baB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: invokestatic sixtwo/rD.dmd ()Lsixtwo/qI;
      // 3c: invokevirtual sixtwo/qI.daT ()V
      // 3f: aload 0
      // 40: invokevirtual sixtwo/gg.aaj ()V
      // 43: aload 3
      // 44: ifnull 5f
      // 47: goto 4e
      // 4a: invokestatic sixtwo/gg.baB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4d: athrow
      // 4e: invokestatic sixtwo/rD.dmd ()Lsixtwo/qI;
      // 51: invokevirtual sixtwo/qI.daU ()V
      // 54: aload 0
      // 55: goto 5c
      // 58: invokestatic sixtwo/gg.baB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5b: athrow
      // 5c: invokevirtual sixtwo/gg.YO ()V
      // 5f: return
   }

   public int bac() {
      return this.XWrfQ;
   }

   public int[] bad() {
      return this.RcFWc;
   }

   public int[] bae() {
      return this.lRvVv;
   }

   public boolean bah() {
      return this.tZRhp;
   }

   public boolean baj() {
      return this.EDndy;
   }

   public void aaj() {
      hF.bdI(this);
   }

   public gg bao(int var1) {
      this.XWrfQ = var1;
      return this;
   }

   public gg bar(gc var1) {
      this.GfFkt = var1;
      return this;
   }

   public gh bak() {
      return this.utKrA;
   }

   protected boolean bab() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/gg.sxSiM J
      // 03: ldc2_w 19675518842850
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/gg.baA ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f: aload 3
      // 10: ifnonnull 2a
      // 13: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 16: ifnull 6e
      // 19: goto 20
      // 1c: invokestatic sixtwo/gg.baB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 23: goto 2a
      // 26: invokestatic sixtwo/gg.baB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: aload 3
      // 2b: ifnonnull 45
      // 2e: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 31: ifnull 6e
      // 34: goto 3b
      // 37: invokestatic sixtwo/gg.baB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a: athrow
      // 3b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 3e: goto 45
      // 41: invokestatic sixtwo/gg.baB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: aload 3
      // 46: ifnonnull 60
      // 49: getfield net/minecraft/class_310.field_1761 Lnet/minecraft/class_636;
      // 4c: ifnull 6e
      // 4f: goto 56
      // 52: invokestatic sixtwo/gg.baB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 55: athrow
      // 56: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 59: goto 60
      // 5c: invokestatic sixtwo/gg.baB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5f: athrow
      // 60: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 63: ifnull 6e
      // 66: bipush 1
      // 67: goto 6f
      // 6a: invokestatic sixtwo/gg.baB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6d: athrow
      // 6e: bipush 0
      // 6f: ireturn
   }

   private static int baE(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = baD(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public gg bax(rk var1) {
      this.bKydN = var1;
      return this;
   }

   public gg bay(ri var1) {
      this.GYAAa = var1;
      return this;
   }

   private static String baC(byte[] var0) {
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

   public gg bat(boolean var1) {
      this.dktTQ = var1;
      return this;
   }

   public boolean bag() {
      return this.RliRe;
   }

   public void YO() {
      hF.bdM(this);
   }
}
