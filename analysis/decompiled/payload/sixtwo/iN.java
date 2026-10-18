package sixtwo;

import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import java.util.Optional;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class iN {
   private final String dmpmN;
   private final JsonObject xDpWq;
   private static final long lBagP = gb.aYR(8966501344039546894L, -3130552171237775395L, MethodHandles.lookup().lookupClass()).a(238854674416724L);
   private static final String[] KWerv;
   private static final String[] oGkHR;
   private static final Map Fvbad = new HashMap(13);

   private static Exception btM(Exception var0) {
      return var0;
   }

   private static String btO(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 15018;
      if (oGkHR[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])Fvbad.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               Fvbad.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/iN", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = KWerv[var5].getBytes("ISO-8859-1");
         oGkHR[var5] = btN(((Cipher)var4[0]).doFinal(var9));
      }

      return oGkHR[var5];
   }

   private static JsonObject btJ(String param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/iN.lBagP J
      // 03: ldc2_w 108736742281424
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/iO.buz ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: invokestatic com/google/gson/JsonParser.parseString (Ljava/lang/String;)Lcom/google/gson/JsonElement;
      // 10: astore 4
      // 12: aload 4
      // 14: aload 3
      // 15: ifnonnull 24
      // 18: ifnull 42
      // 1b: goto 22
      // 1e: invokestatic sixtwo/iN.btM (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 21: athrow
      // 22: aload 4
      // 24: aload 3
      // 25: ifnonnull 3e
      // 28: invokevirtual com/google/gson/JsonElement.isJsonObject ()Z
      // 2b: ifeq 42
      // 2e: goto 35
      // 31: invokestatic sixtwo/iN.btM (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 34: athrow
      // 35: aload 4
      // 37: goto 3e
      // 3a: invokestatic sixtwo/iN.btM (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 3d: athrow
      // 3e: invokevirtual com/google/gson/JsonElement.getAsJsonObject ()Lcom/google/gson/JsonObject;
      // 41: areturn
      // 42: goto 47
      // 45: astore 4
      // 47: new com/google/gson/JsonObject
      // 4a: dup
      // 4b: invokespecial com/google/gson/JsonObject.<init> ()V
      // 4e: areturn
   }

   private static CallSite btQ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("btP".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/iN" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public JsonObject btH() {
      return this.xDpWq.deepCopy();
   }

   private static Object btP(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = btO(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public String btK() {
      return this.dmpmN;
   }

   public JsonObject btL() {
      return this.xDpWq;
   }

   private static String btN(byte[] var0) {
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

   public Optional<JsonElement> btI(String param1, int[] param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/iN.lBagP J
      // 003: ldc2_w 62087971060452
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/iO.buz ()[Ljava/lang/String;
      // 00b: astore 5
      // 00d: aload 1
      // 00e: aload 5
      // 010: ifnonnull 01e
      // 013: ifnull 02f
      // 016: goto 01d
      // 019: invokestatic sixtwo/iN.btM (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 01c: athrow
      // 01d: aload 1
      // 01e: invokevirtual java/lang/String.isBlank ()Z
      // 021: ifne 02f
      // 024: aload 2
      // 025: ifnonnull 037
      // 028: goto 02f
      // 02b: invokestatic sixtwo/iN.btM (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 02e: athrow
      // 02f: invokestatic java/util/Optional.empty ()Ljava/util/Optional;
      // 032: areturn
      // 033: invokestatic sixtwo/iN.btM (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 036: athrow
      // 037: aload 0
      // 038: getfield sixtwo/iN.xDpWq Lcom/google/gson/JsonObject;
      // 03b: aload 1
      // 03c: invokevirtual com/google/gson/JsonObject.get (Ljava/lang/String;)Lcom/google/gson/JsonElement;
      // 03f: astore 6
      // 041: aload 6
      // 043: aload 5
      // 045: ifnonnull 054
      // 048: ifnull 066
      // 04b: goto 052
      // 04e: invokestatic sixtwo/iN.btM (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 051: athrow
      // 052: aload 6
      // 054: aload 5
      // 056: ifnonnull 070
      // 059: invokevirtual com/google/gson/JsonElement.isJsonObject ()Z
      // 05c: ifne 06e
      // 05f: goto 066
      // 062: invokestatic sixtwo/iN.btM (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 065: athrow
      // 066: invokestatic java/util/Optional.empty ()Ljava/util/Optional;
      // 069: areturn
      // 06a: invokestatic sixtwo/iN.btM (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 06d: athrow
      // 06e: aload 6
      // 070: invokevirtual com/google/gson/JsonElement.getAsJsonObject ()Lcom/google/gson/JsonObject;
      // 073: astore 7
      // 075: aload 7
      // 077: sipush 32752
      // 07a: ldc2_w 5274457906874778844
      // 07d: lload 3
      // 07e: lxor
      // 07f: invokedynamic n (IJ)Ljava/lang/String; bsm=sixtwo/iN.btQ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 084: invokevirtual com/google/gson/JsonObject.get (Ljava/lang/String;)Lcom/google/gson/JsonElement;
      // 087: astore 8
      // 089: aload 8
      // 08b: aload 5
      // 08d: ifnonnull 09c
      // 090: ifnull 0a2
      // 093: goto 09a
      // 096: invokestatic sixtwo/iN.btM (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 099: athrow
      // 09a: aload 8
      // 09c: invokevirtual com/google/gson/JsonElement.isJsonArray ()Z
      // 09f: ifne 0aa
      // 0a2: invokestatic java/util/Optional.empty ()Ljava/util/Optional;
      // 0a5: areturn
      // 0a6: invokestatic sixtwo/iN.btM (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0a9: athrow
      // 0aa: aload 2
      // 0ab: invokestatic java/util/Arrays.toString ([I)Ljava/lang/String;
      // 0ae: astore 9
      // 0b0: aload 8
      // 0b2: invokevirtual com/google/gson/JsonElement.getAsJsonArray ()Lcom/google/gson/JsonArray;
      // 0b5: astore 10
      // 0b7: aload 10
      // 0b9: invokevirtual com/google/gson/JsonArray.iterator ()Ljava/util/Iterator;
      // 0bc: astore 11
      // 0be: aload 11
      // 0c0: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0c5: ifeq 14a
      // 0c8: aload 11
      // 0ca: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 0cf: checkcast com/google/gson/JsonElement
      // 0d2: astore 12
      // 0d4: aload 12
      // 0d6: aload 5
      // 0d8: ifnonnull 0f6
      // 0db: invokevirtual com/google/gson/JsonElement.isJsonObject ()Z
      // 0de: ifne 0f4
      // 0e1: goto 0e8
      // 0e4: invokestatic sixtwo/iN.btM (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0e7: athrow
      // 0e8: aload 5
      // 0ea: ifnull 0be
      // 0ed: goto 0f4
      // 0f0: invokestatic sixtwo/iN.btM (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0f3: athrow
      // 0f4: aload 12
      // 0f6: invokevirtual com/google/gson/JsonElement.getAsJsonObject ()Lcom/google/gson/JsonObject;
      // 0f9: astore 13
      // 0fb: aload 13
      // 0fd: aload 9
      // 0ff: aload 5
      // 101: ifnonnull 121
      // 104: invokevirtual com/google/gson/JsonObject.has (Ljava/lang/String;)Z
      // 107: ifne 11d
      // 10a: goto 111
      // 10d: invokestatic sixtwo/iN.btM (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 110: athrow
      // 111: aload 5
      // 113: ifnull 0be
      // 116: goto 11d
      // 119: invokestatic sixtwo/iN.btM (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 11c: athrow
      // 11d: aload 13
      // 11f: aload 9
      // 121: invokevirtual com/google/gson/JsonObject.get (Ljava/lang/String;)Lcom/google/gson/JsonElement;
      // 124: astore 14
      // 126: aload 14
      // 128: aload 5
      // 12a: ifnonnull 146
      // 12d: ifnonnull 141
      // 130: goto 137
      // 133: invokestatic sixtwo/iN.btM (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 136: athrow
      // 137: invokestatic java/util/Optional.empty ()Ljava/util/Optional;
      // 13a: goto 149
      // 13d: invokestatic sixtwo/iN.btM (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 140: athrow
      // 141: aload 14
      // 143: invokevirtual com/google/gson/JsonElement.deepCopy ()Lcom/google/gson/JsonElement;
      // 146: invokestatic java/util/Optional.of (Ljava/lang/Object;)Ljava/util/Optional;
      // 149: areturn
      // 14a: invokestatic java/util/Optional.empty ()Ljava/util/Optional;
      // 14d: areturn
   }

   public iN(String var1) {
      long var2 = lBagP ^ 104366668309883L;
      String[] var10000 = iO.buz();
      super();
      String[] var4 = var10000;

      String var10001;
      label22: {
         label21: {
            try {
               var6 = this;
               var10001 = var1;
               if (var4 != null) {
                  break label22;
               }

               if (var1 == null) {
                  break label21;
               }
            } catch (MatchException var5) {
               throw btM(var5);
            }

            var10001 = var1;
            break label22;
         }

         var10001 = btQ<"n">(1278, 7830004745662013516L ^ var2);
      }

      var6.dmpmN = var10001;
      this.xDpWq = btJ(this.dmpmN);
   }

   static {
      long var0 = lBagP ^ 13361888068959L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[2];
      int var7 = 0;
      String var6 = "l\u0094\u0086Z\u0001ðèc\r¯\u0082ä\u0090¤\u0001³\u0010\u008d\u000eÁ`ÒÄç\u0019Ï$î¯ÆÝ8t";
      int var8 = "l\u0094\u0086Z\u0001ðèc\r¯\u0082ä\u0090¤\u0001³\u0010\u008d\u000eÁ`ÒÄç\u0019Ï$î¯ÆÝ8t".length();
      char var5 = 16;
      int var4 = -1;

      while (true) {
         byte[] var10 = var2.doFinal(var6.substring(++var4, var4 + var5).getBytes("ISO-8859-1"));
         String var13 = btN(var10).intern();
         byte var10001 = -1;
         var9[var7++] = var13;
         if ((var4 += var5) >= var8) {
            KWerv = var9;
            oGkHR = new String[2];
            return;
         }

         var5 = var6.charAt(var4);
      }
   }
}
