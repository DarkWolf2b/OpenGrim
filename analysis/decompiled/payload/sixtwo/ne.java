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

public class ne implements rp {
   private int LOMJC;
   private transient int mxtEm;
   private static final long AdiPa = gb.aYR(-5591567316391317439L, 4056276759534062257L, MethodHandles.lookup().lookupClass()).a(165024987489519L);
   private static final String[] OIsku;
   private static final String[] bLMIm;
   private static final Map ZkIIf = new HashMap(13);
   private static final long[] dllYw;
   private static final Integer[] qPvdD;
   private static final Map tDnlj;

   static {
      long var11 = AdiPa ^ 139143043845502L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[4];
      int var18 = 0;
      String var17 = "§\u009b\u008f^Ü³\u001f@×ð1\\6~\u0000UçQÓ9\u0089;\u000b\u0003\u0016¥Ùm»\u000f\u007fûp\u0086³²\u0090¤<°\u0010\u0018s\u0014JÛÂá\u0006=/:Áã\u0084\u0098§";
      int var19 = "§\u009b\u008f^Ü³\u001f@×ð1\\6~\u0000UçQÓ9\u0089;\u000b\u0003\u0016¥Ùm»\u000f\u007fûp\u0086³²\u0090¤<°\u0010\u0018s\u0014JÛÂá\u0006=/:Áã\u0084\u0098§"
         .length();
      char var16 = '(';
      int var23 = -1;

      label45:
      while (true) {
         String var24 = var17.substring(++var23, var23 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var24.getBytes("ISO-8859-1"));
            String var33 = ctz(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var33;
                  if ((var23 += var16) >= var19) {
                     OIsku = var20;
                     bLMIm = new String[4];
                     tDnlj = new HashMap(13);
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
                     String var4 = "\u008aõU\u0011ÄÒD\u0011\u001fï\u001a©\"v\u0088\u0084æbà\tgs\u0017ã";
                     int var5 = "\u008aõU\u0011ÄÒD\u0011\u001fï\u001a©\"v\u0088\u0084æbà\tgs\u0017ã".length();
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
                        byte var38 = -1;
                        var6[var10001] = var10004;
                     } while (var2 < var5);

                     dllYw = var6;
                     qPvdD = new Integer[3];
                     return;
                  }

                  var16 = var17.charAt(var23);
                  break;
               default:
                  var20[var18++] = var33;
                  if ((var23 += var16) < var19) {
                     var16 = var17.charAt(var23);
                     continue label45;
                  }

                  var17 = "$4ÇMeÏr(\u000flý\u008c+Ý}B\u0018\u0097ÁZ©h]g\u0098ÛÐ/JÖ \u0011zTÑzaPAë\u0010\u0004\u001d\u008a?Iøã¾`Zù¨{lôð";
                  var19 = "$4ÇMeÏr(\u000flý\u008c+Ý}B\u0018\u0097ÁZ©h]g\u0098ÛÐ/JÖ \u0011zTÑzaPAë\u0010\u0004\u001d\u008a?Iøã¾`Zù¨{lôð".length();
                  var16 = '(';
                  var23 = -1;
            }

            var24 = var17.substring(++var23, var23 + var16);
            var10001 = 0;
         }
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
      // 00: getstatic sixtwo/ne.AdiPa J
      // 03: ldc2_w 88636979675822
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/nf.cup ()I
      // 0b: istore 4
      // 0d: aload 1
      // 0e: iload 4
      // 10: ifne 25
      // 13: aload 0
      // 14: if_acmpne 24
      // 17: goto 1e
      // 1a: invokestatic sixtwo/ne.cty (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: bipush 1
      // 1f: ireturn
      // 20: invokestatic sixtwo/ne.cty (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aload 1
      // 25: iload 4
      // 27: ifne 3e
      // 2a: instanceof sixtwo/ne
      // 2d: ifne 3d
      // 30: goto 37
      // 33: invokestatic sixtwo/ne.cty (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: bipush 0
      // 38: ireturn
      // 39: invokestatic sixtwo/ne.cty (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: aload 1
      // 3e: checkcast sixtwo/ne
      // 41: astore 5
      // 43: aload 5
      // 45: aload 0
      // 46: invokevirtual sixtwo/ne.ctx (Ljava/lang/Object;)Z
      // 49: iload 4
      // 4b: ifne 62
      // 4e: ifne 5e
      // 51: goto 58
      // 54: invokestatic sixtwo/ne.cty (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 57: athrow
      // 58: bipush 0
      // 59: ireturn
      // 5a: invokestatic sixtwo/ne.cty (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5d: athrow
      // 5e: aload 0
      // 5f: invokevirtual sixtwo/ne.ctt ()I
      // 62: iload 4
      // 64: ifne 7d
      // 67: aload 5
      // 69: invokevirtual sixtwo/ne.ctt ()I
      // 6c: if_icmpeq 7c
      // 6f: goto 76
      // 72: invokestatic sixtwo/ne.cty (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 75: athrow
      // 76: bipush 0
      // 77: ireturn
      // 78: invokestatic sixtwo/ne.cty (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7b: athrow
      // 7c: bipush 1
      // 7d: ireturn
   }

   @Override
   public String toString() {
      long var1 = AdiPa ^ 120270612932255L;
      return ctC<"p">(10024, 6049010206194238380L ^ var1) + this.ctt() + ctC<"p">(19132, 3687190924065173050L ^ var1) + this.ctu() + ")";
   }

   @Override
   public int hashCode() {
      long var1 = AdiPa ^ 86359649414552L;
      int var3 = ctF<"o">(28963, 7442735100097924017L ^ var1);
      byte var4 = 1;
      return var4 * ctF<"o">(15283, 5354805498365624608L ^ var1) + this.ctt();
   }

   protected boolean ctx(Object var1) {
      return var1 instanceof ne;
   }

   public boolean ctr() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ne.AdiPa J
      // 03: ldc2_w 132548991558574
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/nf.cup ()I
      // 0b: istore 3
      // 0c: aload 0
      // 0d: invokevirtual sixtwo/ne.cto ()Z
      // 10: iload 3
      // 11: ifne 29
      // 14: ifeq 46
      // 17: goto 1e
      // 1a: invokestatic sixtwo/ne.cty (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: getfield sixtwo/ne.mxtEm I
      // 22: goto 29
      // 25: invokestatic sixtwo/ne.cty (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: iload 3
      // 2a: ifne 43
      // 2d: aload 0
      // 2e: getfield sixtwo/ne.LOMJC I
      // 31: if_icmplt 46
      // 34: goto 3b
      // 37: invokestatic sixtwo/ne.cty (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a: athrow
      // 3b: bipush 1
      // 3c: goto 43
      // 3f: invokestatic sixtwo/ne.cty (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: goto 47
      // 46: bipush 0
      // 47: ireturn
   }

   private static MatchException cty(MatchException var0) {
      return var0;
   }

   public boolean cts(int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ne.AdiPa J
      // 03: ldc2_w 34513968864950
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/nf.cup ()I
      // 0b: istore 4
      // 0d: aload 0
      // 0e: invokevirtual sixtwo/ne.cto ()Z
      // 11: iload 4
      // 13: ifne 38
      // 16: ifne 26
      // 19: goto 20
      // 1c: invokestatic sixtwo/ne.cty (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: bipush 0
      // 21: ireturn
      // 22: invokestatic sixtwo/ne.cty (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: dup
      // 28: getfield sixtwo/ne.mxtEm I
      // 2b: bipush 0
      // 2c: iload 1
      // 2d: invokestatic java/lang/Math.max (II)I
      // 30: iadd
      // 31: putfield sixtwo/ne.mxtEm I
      // 34: aload 0
      // 35: invokevirtual sixtwo/ne.ctr ()Z
      // 38: ireturn
   }

   @Override
   public void fromJson(JsonObject var1) {
      long var2 = AdiPa ^ 124632410535167L;
      this.LOMJC = this.readInt(var1, ctC<"p">(2068, 5766204292304027379L ^ var2));
      this.mxtEm = 0;
   }

   @Override
   public JsonObject toJson() {
      long var1 = AdiPa ^ 122395743373940L;
      JsonObject var3 = new JsonObject();
      var3.addProperty(ctC<"p">(27258, 7992267339354350100L ^ var1), this.LOMJC);
      return var3;
   }

   public int ctt() {
      return this.LOMJC;
   }

   private static Object ctB(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = ctA(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public void ctw(int var1) {
      this.mxtEm = var1;
   }

   public int ctu() {
      return this.mxtEm;
   }

   private static String ctA(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 23493;
      if (bLMIm[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])ZkIIf.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               ZkIIf.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/ne", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = OIsku[var5].getBytes("ISO-8859-1");
         bLMIm[var5] = ctz(((Cipher)var4[0]).doFinal(var9));
      }

      return bLMIm[var5];
   }

   public void ctv(int var1) {
      this.LOMJC = var1;
   }

   public boolean cto() {
      long var1 = AdiPa ^ 111308164499253L;
      int var3 = nf.cuo();

      try {
         if (var3 == 0) {
            return (boolean)this.LOMJC;
         }

         if (this.LOMJC > 0) {
            return (boolean)1;
         }
      } catch (MatchException var4) {
         throw cty(var4);
      }

      return (boolean)0;
   }

   private static CallSite ctC(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ctB".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ne" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String ctz(byte[] var0) {
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

   public int ctq() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ne.AdiPa J
      // 03: ldc2_w 16117649912770
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/nf.cuo ()I
      // 0b: istore 3
      // 0c: aload 0
      // 0d: invokevirtual sixtwo/ne.cto ()Z
      // 10: iload 3
      // 11: ifeq 3d
      // 14: ifne 30
      // 17: goto 1e
      // 1a: invokestatic sixtwo/ne.cty (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: sipush 26825
      // 21: ldc2_w 2345073873160260611
      // 24: lload 1
      // 25: lxor
      // 26: invokedynamic o (IJ)I bsm=sixtwo/ne.ctF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2b: ireturn
      // 2c: invokestatic sixtwo/ne.cty (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: bipush 0
      // 31: aload 0
      // 32: getfield sixtwo/ne.LOMJC I
      // 35: aload 0
      // 36: getfield sixtwo/ne.mxtEm I
      // 39: isub
      // 3a: invokestatic java/lang/Math.max (II)I
      // 3d: ireturn
   }

   private static int ctE(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = ctD(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public void ctp() {
      this.mxtEm = 0;
   }

   private static int ctD(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 20182;
      if (qPvdD[var3] == null) {
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
         long var5 = dllYw[var3];
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
         Object[] var9 = (Object[])tDnlj.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               tDnlj.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/ne", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         qPvdD[var3] = var15;
      }

      return qPvdD[var3];
   }

   private static CallSite ctF(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ctE".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ne" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
