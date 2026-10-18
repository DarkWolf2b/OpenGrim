package sixtwo;

import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_241;

public class cL extends cB {
   private class_241 lWTUx = class_241.field_1340;
   private class_241 rciMJ = new class_241(1.0F, 1.0F);
   private static final long JrqPd = gb.aYR(-953890712074032818L, -7957121300344467127L, MethodHandles.lookup().lookupClass()).a(150848065840668L);
   private static final String[] BwAAb;
   private static final String[] fPPzo;
   private static final Map HDgaN = new HashMap(13);

   public cL(iS var1, mr var2) {
      super(var2);
      this.Vg(var1);
   }

   static {
      long var0 = JrqPd ^ 41818288140684L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[4];
      int var7 = 0;
      String var6 = "\u0093┬Â├ćO\t\u0098\u0085├ś┬ę\u0092\t\u009d\u0000├Üo\u0017\u0010├ę├│┬▓GK┬┐D`┬│1├ő├╣├Ę\u00161O";
      int var8 = "\u0093┬Â├ćO\t\u0098\u0085├ś┬ę\u0092\t\u009d\u0000├Üo\u0017\u0010├ę├│┬▓GK┬┐D`┬│1├ő├╣├Ę\u00161O".length();
      char var5 = 16;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = Xw(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     BwAAb = var9;
                     fPPzo = new String[4];
                     return;
                  }

                  var5 = var6.charAt(var12);
                  break;
               default:
                  var9[var7++] = var19;
                  if ((var12 += var5) < var8) {
                     var5 = var6.charAt(var12);
                     continue label27;
                  }

                  var6 = "\u0098aq<O\u009d\u001cQ┬Ş\u0081\u0095\u0087├Ş\u0012┬«├Ö\u0010h┬«┬▒i;┬ź\u0083├Ár├â├│XV\u007f┬«<";
                  var8 = "\u0098aq<O\u009d\u001cQ┬Ş\u0081\u0095\u0087├Ş\u0012┬«├Ö\u0010h┬«┬▒i;┬ź\u0083├Ár├â├│XV\u007f┬«<".length();
                  var5 = 16;
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   public cL Xp(io var1) {
      return this.Xn(new class_241(var1.bly(), var1.blz()));
   }

   @Override
   public void SS(JsonElement param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cL.JrqPd J
      // 03: ldc2_w 88905912080417
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vt ()Z
      // 0b: istore 4
      // 0d: aload 1
      // 0e: iload 4
      // 10: ifeq 26
      // 13: invokevirtual com/google/gson/JsonElement.isJsonObject ()Z
      // 16: ifne 25
      // 19: goto 20
      // 1c: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: return
      // 21: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: aload 1
      // 26: invokevirtual com/google/gson/JsonElement.getAsJsonObject ()Lcom/google/gson/JsonObject;
      // 29: astore 5
      // 2b: aload 0
      // 2c: aload 5
      // 2e: sipush 16954
      // 31: ldc2_w 8456473716545696071
      // 34: lload 2
      // 35: lxor
      // 36: invokedynamic v (IJ)Ljava/lang/String; bsm=sixtwo/cL.Xz (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 3b: aload 0
      // 3c: getfield sixtwo/cL.lWTUx Lnet/minecraft/class_241;
      // 3f: invokevirtual sixtwo/cL.Xs (Lcom/google/gson/JsonObject;Ljava/lang/String;Lnet/minecraft/class_241;)Lnet/minecraft/class_241;
      // 42: astore 6
      // 44: aload 0
      // 45: aload 5
      // 47: sipush 29979
      // 4a: ldc2_w 1405616224424396391
      // 4d: lload 2
      // 4e: lxor
      // 4f: invokedynamic v (IJ)Ljava/lang/String; bsm=sixtwo/cL.Xz (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 54: aload 0
      // 55: getfield sixtwo/cL.rciMJ Lnet/minecraft/class_241;
      // 58: invokevirtual sixtwo/cL.Xs (Lcom/google/gson/JsonObject;Ljava/lang/String;Lnet/minecraft/class_241;)Lnet/minecraft/class_241;
      // 5b: astore 7
      // 5d: aload 0
      // 5e: iload 4
      // 60: ifeq a6
      // 63: getfield sixtwo/cL.lWTUx Lnet/minecraft/class_241;
      // 66: aload 6
      // 68: invokevirtual net/minecraft/class_241.method_1016 (Lnet/minecraft/class_241;)Z
      // 6b: ifeq 99
      // 6e: goto 75
      // 71: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 74: athrow
      // 75: aload 0
      // 76: iload 4
      // 78: ifeq a6
      // 7b: goto 82
      // 7e: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 81: athrow
      // 82: getfield sixtwo/cL.rciMJ Lnet/minecraft/class_241;
      // 85: aload 7
      // 87: invokevirtual net/minecraft/class_241.method_1016 (Lnet/minecraft/class_241;)Z
      // 8a: ifeq 99
      // 8d: goto 94
      // 90: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 93: athrow
      // 94: return
      // 95: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 98: athrow
      // 99: aload 0
      // 9a: aload 6
      // 9c: putfield sixtwo/cL.lWTUx Lnet/minecraft/class_241;
      // 9f: aload 0
      // a0: aload 7
      // a2: putfield sixtwo/cL.rciMJ Lnet/minecraft/class_241;
      // a5: aload 0
      // a6: invokevirtual sixtwo/cL.Vk ()V
      // a9: return
   }

   public class_241 Xu() {
      return this.rciMJ;
   }

   public class_241 Xt() {
      return this.lWTUx;
   }

   @Override
   public void SR(Map<String, Object> var1) {
      long var2 = JrqPd ^ 4009606530445L;
      HashMap var4 = new HashMap();
      var4.put(Xz<"v">(14478, 642023772535772765L ^ var2), this.Xr(this.lWTUx));
      var4.put(Xz<"v">(11079, 341923903491949973L ^ var2), this.Xr(this.rciMJ));
      var1.put(Arrays.toString(this.NwlSF), var4);
   }

   public cL Xl(float var1, float var2) {
      return this.Xn(new class_241(var1, var2));
   }

   public cL Xk(float var1, float var2) {
      return this.Xm(new class_241(var1, var2));
   }

   public cL Xm(class_241 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cL.JrqPd J
      // 03: ldc2_w 118175551076577
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vt ()Z
      // 0b: istore 4
      // 0d: iload 4
      // 0f: ifeq 33
      // 12: aload 1
      // 13: aload 0
      // 14: getfield sixtwo/cL.lWTUx Lnet/minecraft/class_241;
      // 17: invokevirtual net/minecraft/class_241.method_1016 (Lnet/minecraft/class_241;)Z
      // 1a: ifeq 2a
      // 1d: goto 24
      // 20: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aload 0
      // 25: areturn
      // 26: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: aload 0
      // 2b: aload 1
      // 2c: putfield sixtwo/cL.lWTUx Lnet/minecraft/class_241;
      // 2f: aload 0
      // 30: invokevirtual sixtwo/cL.Vk ()V
      // 33: aload 0
      // 34: areturn
   }

   private class_241 Xs(JsonObject param1, String param2, class_241 param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cL.JrqPd J
      // 03: ldc2_w 60754616890553
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/cB.Vt ()Z
      // 0c: istore 6
      // 0e: aload 1
      // 0f: aload 2
      // 10: invokevirtual com/google/gson/JsonObject.has (Ljava/lang/String;)Z
      // 13: iload 6
      // 15: ifeq 3d
      // 18: ifeq 40
      // 1b: goto 22
      // 1e: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: aload 1
      // 23: aload 2
      // 24: iload 6
      // 26: ifeq 48
      // 29: goto 30
      // 2c: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: invokevirtual com/google/gson/JsonObject.get (Ljava/lang/String;)Lcom/google/gson/JsonElement;
      // 33: invokevirtual com/google/gson/JsonElement.isJsonObject ()Z
      // 36: goto 3d
      // 39: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: ifne 46
      // 40: aload 3
      // 41: areturn
      // 42: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 45: athrow
      // 46: aload 1
      // 47: aload 2
      // 48: invokevirtual com/google/gson/JsonObject.getAsJsonObject (Ljava/lang/String;)Lcom/google/gson/JsonObject;
      // 4b: astore 7
      // 4d: aload 3
      // 4e: iload 6
      // 50: ifeq 5e
      // 53: ifnull 64
      // 56: goto 5d
      // 59: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5c: athrow
      // 5d: aload 3
      // 5e: getfield net/minecraft/class_241.field_1343 F
      // 61: goto 65
      // 64: fconst_0
      // 65: fstore 8
      // 67: aload 3
      // 68: iload 6
      // 6a: ifeq 78
      // 6d: ifnull 7e
      // 70: goto 77
      // 73: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 76: athrow
      // 77: aload 3
      // 78: getfield net/minecraft/class_241.field_1342 F
      // 7b: goto 7f
      // 7e: fconst_0
      // 7f: fstore 9
      // 81: aload 7
      // 83: ldc "x"
      // 85: iload 6
      // 87: ifeq a2
      // 8a: invokevirtual com/google/gson/JsonObject.has (Ljava/lang/String;)Z
      // 8d: ifeq ab
      // 90: goto 97
      // 93: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 96: athrow
      // 97: aload 7
      // 99: ldc "x"
      // 9b: goto a2
      // 9e: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a1: athrow
      // a2: invokevirtual com/google/gson/JsonObject.get (Ljava/lang/String;)Lcom/google/gson/JsonElement;
      // a5: invokevirtual com/google/gson/JsonElement.getAsFloat ()F
      // a8: goto ad
      // ab: fload 8
      // ad: fstore 10
      // af: aload 7
      // b1: ldc "y"
      // b3: iload 6
      // b5: ifeq d0
      // b8: invokevirtual com/google/gson/JsonObject.has (Ljava/lang/String;)Z
      // bb: ifeq d9
      // be: goto c5
      // c1: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c4: athrow
      // c5: aload 7
      // c7: ldc "y"
      // c9: goto d0
      // cc: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // cf: athrow
      // d0: invokevirtual com/google/gson/JsonObject.get (Ljava/lang/String;)Lcom/google/gson/JsonElement;
      // d3: invokevirtual com/google/gson/JsonElement.getAsFloat ()F
      // d6: goto db
      // d9: fload 9
      // db: fstore 11
      // dd: new net/minecraft/class_241
      // e0: dup
      // e1: fload 10
      // e3: fload 11
      // e5: invokespecial net/minecraft/class_241.<init> (FF)V
      // e8: areturn
   }

   private static CallSite Xz(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Xy".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cL" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public rj Xq() {
      return rj.dgc(this.lWTUx.field_1343, 1.0F - this.lWTUx.field_1342, this.rciMJ.field_1343, 1.0F - this.rciMJ.field_1342);
   }

   private static String Xw(byte[] var0) {
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

   public cL Xn(class_241 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cL.JrqPd J
      // 03: ldc2_w 30432720909278
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vu ()Z
      // 0b: istore 4
      // 0d: iload 4
      // 0f: ifne 33
      // 12: aload 1
      // 13: aload 0
      // 14: getfield sixtwo/cL.rciMJ Lnet/minecraft/class_241;
      // 17: invokevirtual net/minecraft/class_241.method_1016 (Lnet/minecraft/class_241;)Z
      // 1a: ifeq 2a
      // 1d: goto 24
      // 20: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aload 0
      // 25: areturn
      // 26: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: aload 0
      // 2b: aload 1
      // 2c: putfield sixtwo/cL.rciMJ Lnet/minecraft/class_241;
      // 2f: aload 0
      // 30: invokevirtual sixtwo/cL.Vk ()V
      // 33: aload 0
      // 34: areturn
   }

   private static Object Xy(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = Xx(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public cL Xo(io var1) {
      return this.Xm(new class_241(var1.bly(), var1.blz()));
   }

   private static MatchException Xv(MatchException var0) {
      return var0;
   }

   private static String Xx(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 23511;
      if (fPPzo[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])HDgaN.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               HDgaN.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/cL", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = BwAAb[var5].getBytes("ISO-8859-1");
         fPPzo[var5] = Xw(((Cipher)var4[0]).doFinal(var9));
      }

      return fPPzo[var5];
   }

   private Map<String, Object> Xr(class_241 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cL.JrqPd J
      // 03: ldc2_w 109496196470233
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vu ()Z
      // 0b: new java/util/HashMap
      // 0e: dup
      // 0f: invokespecial java/util/HashMap.<init> ()V
      // 12: astore 5
      // 14: istore 4
      // 16: aload 1
      // 17: iload 4
      // 19: ifne 4e
      // 1c: ifnull 4f
      // 1f: goto 26
      // 22: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 5
      // 28: ldc "x"
      // 2a: aload 1
      // 2b: getfield net/minecraft/class_241.field_1343 F
      // 2e: invokestatic java/lang/Float.valueOf (F)Ljava/lang/Float;
      // 31: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 36: pop
      // 37: aload 5
      // 39: ldc "y"
      // 3b: aload 1
      // 3c: getfield net/minecraft/class_241.field_1342 F
      // 3f: invokestatic java/lang/Float.valueOf (F)Ljava/lang/Float;
      // 42: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 47: goto 4e
      // 4a: invokestatic sixtwo/cL.Xv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4d: athrow
      // 4e: pop
      // 4f: aload 5
      // 51: areturn
   }
}
