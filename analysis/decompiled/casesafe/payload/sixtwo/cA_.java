package sixtwo;

import com.google.gson.JsonElement;
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
import org.apache.commons.lang3.tuple.MutablePair;

public class cA extends cB {
   private double PTaqi = -Double.MAX_VALUE;
   private double GOtZp = Double.MAX_VALUE;
   private double thjOL;
   private final MutablePair<Double, Double> wJgtl;
   private String pSPRn = "";
   private static final long ohlej = gb.aYR(8502255672634985563L, -6050114685291028941L, MethodHandles.lookup().lookupClass()).a(40475717437278L);
   private static final String[] hoqLM;
   private static final String[] xcUqQ;
   private static final Map wtWpm = new HashMap(13);

   public cA(mr var1) {
      super(var1);
      this.wJgtl = MutablePair.of(0.0, 0.0);
   }

   public cA(iS var1, mr var2) {
      this(var2);
      this.Vg(var1);
   }

   static {
      long var0 = ohlej ^ 79353097297229L;
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
      String var6 = "├ö┬»┬ó\u0010\u0096┬ź ├ú├ź\u0016├ÇcE├ü\u0097├Ą\u0010FF\u009a\u0019:m\"<kwZ)B\\v\u0082";
      int var8 = "├ö┬»┬ó\u0010\u0096┬ź ├ú├ź\u0016├ÇcE├ü\u0097├Ą\u0010FF\u009a\u0019:m\"<kwZ)B\\v\u0082".length();
      char var5 = 16;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = UZ(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     hoqLM = var9;
                     xcUqQ = new String[4];
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

                  var6 = "\u00834├Ě9┬╝e\u0080]\u008c├Ç├╗├Á'├▓\u0081├║\u0010lm\u000e├Ü┬áUT┬│@┬á┬░+m┬ź_\t";
                  var8 = "\u00834├Ě9┬╝e\u0080]\u008c├Ç├╗├Á'├▓\u0081├║\u0010lm\u000e├Ü┬áUT┬│@┬á┬░+m┬ź_\t".length();
                  var5 = 16;
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   public float UP(int var1) {
      long var2 = ohlej ^ 84680208413816L;

      try {
         if (var1 == 0) {
            return ((Double)this.wJgtl.getLeft()).floatValue();
         }
      } catch (MatchException var4) {
         throw UY(var4);
      }

      return ((Double)this.wJgtl.getRight()).floatValue();
   }

   public double UT() {
      return this.PTaqi;
   }

   private double US(double var1) {
      long var3 = ohlej ^ 42867196440536L;
      boolean var10000 = cB.Vu();
      double var6 = Math.min(this.PTaqi, this.GOtZp);
      boolean var5 = var10000;
      double var8 = Math.max(this.PTaqi, this.GOtZp);
      double var10 = Math.max(var6, Math.min(var8, var1));

      try {
         if (var5) {
            return this.thjOL;
         }

         if (!(this.thjOL > 0.0)) {
            return var10;
         }
      } catch (MatchException var12) {
         throw UY(var12);
      }

      var10 = Math.round(var10 / this.thjOL) * this.thjOL;
      return Math.max(var6, Math.min(var8, var10));
   }

   public cA UK(double param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cA.ohlej J
      // 03: ldc2_w 135325006144455
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/cB.Vu ()Z
      // 0b: aload 0
      // 0c: dload 1
      // 0d: invokevirtual sixtwo/cA.US (D)D
      // 10: dstore 6
      // 12: istore 5
      // 14: aload 0
      // 15: getfield sixtwo/cA.wJgtl Lorg/apache/commons/lang3/tuple/MutablePair;
      // 18: iload 5
      // 1a: ifne 3f
      // 1d: getfield org/apache/commons/lang3/tuple/MutablePair.left Ljava/lang/Object;
      // 20: checkcast java/lang/Double
      // 23: invokevirtual java/lang/Double.doubleValue ()D
      // 26: dload 6
      // 28: invokestatic java/lang/Double.compare (DD)I
      // 2b: ifne 3b
      // 2e: goto 35
      // 31: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 34: athrow
      // 35: aload 0
      // 36: areturn
      // 37: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a: athrow
      // 3b: aload 0
      // 3c: getfield sixtwo/cA.wJgtl Lorg/apache/commons/lang3/tuple/MutablePair;
      // 3f: dload 6
      // 41: invokestatic java/lang/Double.valueOf (D)Ljava/lang/Double;
      // 44: invokevirtual org/apache/commons/lang3/tuple/MutablePair.setLeft (Ljava/lang/Object;)V
      // 47: aload 0
      // 48: invokevirtual sixtwo/cA.Vk ()V
      // 4b: aload 0
      // 4c: areturn
   }

   public double UV() {
      return this.thjOL;
   }

   public cA UI(double var1, double var3) {
      return this.UJ(MutablePair.of(var1, var3));
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
      // 000: getstatic sixtwo/cA.ohlej J
      // 003: ldc2_w 59181236786858
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/cB.Vu ()Z
      // 00b: aload 0
      // 00c: getfield sixtwo/cA.wJgtl Lorg/apache/commons/lang3/tuple/MutablePair;
      // 00f: getfield org/apache/commons/lang3/tuple/MutablePair.left Ljava/lang/Object;
      // 012: checkcast java/lang/Double
      // 015: invokevirtual java/lang/Double.doubleValue ()D
      // 018: dstore 5
      // 01a: aload 0
      // 01b: getfield sixtwo/cA.wJgtl Lorg/apache/commons/lang3/tuple/MutablePair;
      // 01e: getfield org/apache/commons/lang3/tuple/MutablePair.right Ljava/lang/Object;
      // 021: checkcast java/lang/Double
      // 024: invokevirtual java/lang/Double.doubleValue ()D
      // 027: dstore 7
      // 029: istore 4
      // 02b: aload 1
      // 02c: iload 4
      // 02e: ifne 097
      // 031: invokevirtual com/google/gson/JsonElement.isJsonArray ()Z
      // 034: ifeq 08f
      // 037: goto 03e
      // 03a: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03d: athrow
      // 03e: aload 1
      // 03f: invokevirtual com/google/gson/JsonElement.getAsJsonArray ()Lcom/google/gson/JsonArray;
      // 042: astore 9
      // 044: aload 9
      // 046: invokevirtual com/google/gson/JsonArray.isEmpty ()Z
      // 049: iload 4
      // 04b: ifne 074
      // 04e: ifne 063
      // 051: goto 058
      // 054: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 057: athrow
      // 058: aload 9
      // 05a: bipush 0
      // 05b: invokevirtual com/google/gson/JsonArray.get (I)Lcom/google/gson/JsonElement;
      // 05e: invokevirtual com/google/gson/JsonElement.getAsDouble ()D
      // 061: dstore 5
      // 063: aload 9
      // 065: iload 4
      // 067: ifne 085
      // 06a: invokevirtual com/google/gson/JsonArray.size ()I
      // 06d: goto 074
      // 070: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 073: athrow
      // 074: bipush 1
      // 075: if_icmple 08a
      // 078: aload 9
      // 07a: bipush 1
      // 07b: invokevirtual com/google/gson/JsonArray.get (I)Lcom/google/gson/JsonElement;
      // 07e: goto 085
      // 081: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 084: athrow
      // 085: invokevirtual com/google/gson/JsonElement.getAsDouble ()D
      // 088: dstore 7
      // 08a: iload 4
      // 08c: ifeq 113
      // 08f: aload 1
      // 090: goto 097
      // 093: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 096: athrow
      // 097: invokevirtual com/google/gson/JsonElement.getAsJsonObject ()Lcom/google/gson/JsonObject;
      // 09a: astore 9
      // 09c: aload 9
      // 09e: sipush 19391
      // 0a1: ldc2_w 6637044885065389711
      // 0a4: lload 2
      // 0a5: lxor
      // 0a6: invokedynamic y (IJ)Ljava/lang/String; bsm=sixtwo/cA.Vc (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0ab: invokevirtual com/google/gson/JsonObject.has (Ljava/lang/String;)Z
      // 0ae: iload 4
      // 0b0: ifne 0f2
      // 0b3: ifeq 0d4
      // 0b6: goto 0bd
      // 0b9: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0bc: athrow
      // 0bd: aload 9
      // 0bf: sipush 30571
      // 0c2: ldc2_w 8083870684983945816
      // 0c5: lload 2
      // 0c6: lxor
      // 0c7: invokedynamic y (IJ)Ljava/lang/String; bsm=sixtwo/cA.Vc (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0cc: invokevirtual com/google/gson/JsonObject.get (Ljava/lang/String;)Lcom/google/gson/JsonElement;
      // 0cf: invokevirtual com/google/gson/JsonElement.getAsDouble ()D
      // 0d2: dstore 5
      // 0d4: aload 9
      // 0d6: sipush 26735
      // 0d9: ldc2_w 7524066723178345822
      // 0dc: lload 2
      // 0dd: lxor
      // 0de: invokedynamic y (IJ)Ljava/lang/String; bsm=sixtwo/cA.Vc (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0e3: iload 4
      // 0e5: ifne 10b
      // 0e8: invokevirtual com/google/gson/JsonObject.has (Ljava/lang/String;)Z
      // 0eb: goto 0f2
      // 0ee: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f1: athrow
      // 0f2: ifeq 113
      // 0f5: aload 9
      // 0f7: sipush 17767
      // 0fa: ldc2_w 2048034790780065877
      // 0fd: lload 2
      // 0fe: lxor
      // 0ff: invokedynamic y (IJ)Ljava/lang/String; bsm=sixtwo/cA.Vc (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 104: goto 10b
      // 107: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 10a: athrow
      // 10b: invokevirtual com/google/gson/JsonObject.get (Ljava/lang/String;)Lcom/google/gson/JsonElement;
      // 10e: invokevirtual com/google/gson/JsonElement.getAsDouble ()D
      // 111: dstore 7
      // 113: aload 0
      // 114: new org/apache/commons/lang3/tuple/MutablePair
      // 117: dup
      // 118: dload 5
      // 11a: invokestatic java/lang/Double.valueOf (D)Ljava/lang/Double;
      // 11d: dload 7
      // 11f: invokestatic java/lang/Double.valueOf (D)Ljava/lang/Double;
      // 122: invokespecial org/apache/commons/lang3/tuple/MutablePair.<init> (Ljava/lang/Object;Ljava/lang/Object;)V
      // 125: invokevirtual sixtwo/cA.UJ (Lorg/apache/commons/lang3/tuple/MutablePair;)Lsixtwo/cA;
      // 128: pop
      // 129: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 12c: ifnonnull 147
      // 12f: iload 4
      // 131: ifeq 143
      // 134: goto 13b
      // 137: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13a: athrow
      // 13b: bipush 0
      // 13c: goto 144
      // 13f: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 142: athrow
      // 143: bipush 1
      // 144: invokestatic sixtwo/cB.Vs (Z)V
      // 147: return
   }

   public MutablePair<Double, Double> UW() {
      return this.wJgtl;
   }

   @Override
   public void SR(Map<String, Object> var1) {
      var1.put(Arrays.toString(this.NwlSF), MutablePair.of((Double)this.wJgtl.left, (Double)this.wJgtl.right));
   }

   public String UX() {
      return this.pSPRn;
   }

   private static String Va(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 13722;
      if (xcUqQ[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])wtWpm.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               wtWpm.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/cA", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = hoqLM[var5].getBytes("ISO-8859-1");
         xcUqQ[var5] = UZ(((Cipher)var4[0]).doFinal(var9));
      }

      return xcUqQ[var5];
   }

   public boolean UM(double param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cA.ohlej J
      // 03: ldc2_w 47427841538319
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/cB.Vt ()Z
      // 0b: istore 5
      // 0d: dload 1
      // 0e: aload 0
      // 0f: getfield sixtwo/cA.wJgtl Lorg/apache/commons/lang3/tuple/MutablePair;
      // 12: invokevirtual org/apache/commons/lang3/tuple/MutablePair.getLeft ()Ljava/lang/Object;
      // 15: checkcast java/lang/Double
      // 18: invokevirtual java/lang/Double.doubleValue ()D
      // 1b: dcmpl
      // 1c: iload 5
      // 1e: ifeq 41
      // 21: iflt 54
      // 24: goto 2b
      // 27: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: dload 1
      // 2c: aload 0
      // 2d: getfield sixtwo/cA.wJgtl Lorg/apache/commons/lang3/tuple/MutablePair;
      // 30: invokevirtual org/apache/commons/lang3/tuple/MutablePair.getRight ()Ljava/lang/Object;
      // 33: checkcast java/lang/Double
      // 36: invokevirtual java/lang/Double.doubleValue ()D
      // 39: dcmpg
      // 3a: goto 41
      // 3d: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 40: athrow
      // 41: iload 5
      // 43: ifeq 51
      // 46: ifgt 54
      // 49: goto 50
      // 4c: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4f: athrow
      // 50: bipush 1
      // 51: goto 55
      // 54: bipush 0
      // 55: ireturn
   }

   public long UR(int var1) {
      long var2 = ohlej ^ 2379230580918L;

      try {
         if (var1 == 0) {
            return ((Double)this.wJgtl.getLeft()).longValue();
         }
      } catch (MatchException var4) {
         throw UY(var4);
      }

      return ((Double)this.wJgtl.getRight()).longValue();
   }

   private static CallSite Vc(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Vb".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cA" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public int UQ(int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cA.ohlej J
      // 03: ldc2_w 24818855701281
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vu ()Z
      // 0b: istore 4
      // 0d: iload 1
      // 0e: iload 4
      // 10: ifne 31
      // 13: ifne 34
      // 16: goto 1d
      // 19: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 0
      // 1e: getfield sixtwo/cA.wJgtl Lorg/apache/commons/lang3/tuple/MutablePair;
      // 21: invokevirtual org/apache/commons/lang3/tuple/MutablePair.getLeft ()Ljava/lang/Object;
      // 24: checkcast java/lang/Double
      // 27: invokevirtual java/lang/Double.intValue ()I
      // 2a: goto 31
      // 2d: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30: athrow
      // 31: goto 41
      // 34: aload 0
      // 35: getfield sixtwo/cA.wJgtl Lorg/apache/commons/lang3/tuple/MutablePair;
      // 38: invokevirtual org/apache/commons/lang3/tuple/MutablePair.getRight ()Ljava/lang/Object;
      // 3b: checkcast java/lang/Double
      // 3e: invokevirtual java/lang/Double.intValue ()I
      // 41: ireturn
   }

   public Number UO() {
      return ((Double)this.wJgtl.getLeft() + (Double)this.wJgtl.getRight()) / 2.0;
   }

   private static Object Vb(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = Va(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public cA UL(double param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cA.ohlej J
      // 03: ldc2_w 17598455909601
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/cB.Vu ()Z
      // 0b: aload 0
      // 0c: dload 1
      // 0d: invokevirtual sixtwo/cA.US (D)D
      // 10: dstore 6
      // 12: istore 5
      // 14: aload 0
      // 15: getfield sixtwo/cA.wJgtl Lorg/apache/commons/lang3/tuple/MutablePair;
      // 18: iload 5
      // 1a: ifne 3f
      // 1d: getfield org/apache/commons/lang3/tuple/MutablePair.right Ljava/lang/Object;
      // 20: checkcast java/lang/Double
      // 23: invokevirtual java/lang/Double.doubleValue ()D
      // 26: dload 6
      // 28: invokestatic java/lang/Double.compare (DD)I
      // 2b: ifne 3b
      // 2e: goto 35
      // 31: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 34: athrow
      // 35: aload 0
      // 36: areturn
      // 37: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a: athrow
      // 3b: aload 0
      // 3c: getfield sixtwo/cA.wJgtl Lorg/apache/commons/lang3/tuple/MutablePair;
      // 3f: dload 6
      // 41: invokestatic java/lang/Double.valueOf (D)Ljava/lang/Double;
      // 44: invokevirtual org/apache/commons/lang3/tuple/MutablePair.setRight (Ljava/lang/Object;)V
      // 47: aload 0
      // 48: invokevirtual sixtwo/cA.Vk ()V
      // 4b: aload 0
      // 4c: areturn
   }

   public double UU() {
      return this.GOtZp;
   }

   private static String UZ(byte[] var0) {
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

   public Number UN() {
      return mU.cpR(this);
   }

   private static MatchException UY(MatchException var0) {
      return var0;
   }

   public cA UJ(MutablePair<Double, Double> param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cA.ohlej J
      // 03: ldc2_w 14676835329887
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vu ()Z
      // 0b: aload 0
      // 0c: aload 1
      // 0d: getfield org/apache/commons/lang3/tuple/MutablePair.left Ljava/lang/Object;
      // 10: checkcast java/lang/Double
      // 13: invokevirtual java/lang/Double.doubleValue ()D
      // 16: invokevirtual sixtwo/cA.US (D)D
      // 19: dstore 5
      // 1b: istore 4
      // 1d: aload 0
      // 1e: aload 1
      // 1f: getfield org/apache/commons/lang3/tuple/MutablePair.right Ljava/lang/Object;
      // 22: checkcast java/lang/Double
      // 25: invokevirtual java/lang/Double.doubleValue ()D
      // 28: invokevirtual sixtwo/cA.US (D)D
      // 2b: dstore 7
      // 2d: aload 0
      // 2e: getfield sixtwo/cA.wJgtl Lorg/apache/commons/lang3/tuple/MutablePair;
      // 31: iload 4
      // 33: ifne 8c
      // 36: getfield org/apache/commons/lang3/tuple/MutablePair.left Ljava/lang/Object;
      // 39: checkcast java/lang/Double
      // 3c: invokevirtual java/lang/Double.doubleValue ()D
      // 3f: dload 5
      // 41: invokestatic java/lang/Double.compare (DD)I
      // 44: ifne 7c
      // 47: goto 4e
      // 4a: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4d: athrow
      // 4e: aload 0
      // 4f: getfield sixtwo/cA.wJgtl Lorg/apache/commons/lang3/tuple/MutablePair;
      // 52: iload 4
      // 54: ifne 8c
      // 57: goto 5e
      // 5a: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5d: athrow
      // 5e: getfield org/apache/commons/lang3/tuple/MutablePair.right Ljava/lang/Object;
      // 61: checkcast java/lang/Double
      // 64: invokevirtual java/lang/Double.doubleValue ()D
      // 67: dload 7
      // 69: invokestatic java/lang/Double.compare (DD)I
      // 6c: ifne 7c
      // 6f: goto 76
      // 72: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 75: athrow
      // 76: aload 0
      // 77: areturn
      // 78: invokestatic sixtwo/cA.UY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7b: athrow
      // 7c: aload 0
      // 7d: getfield sixtwo/cA.wJgtl Lorg/apache/commons/lang3/tuple/MutablePair;
      // 80: dload 5
      // 82: invokestatic java/lang/Double.valueOf (D)Ljava/lang/Double;
      // 85: invokevirtual org/apache/commons/lang3/tuple/MutablePair.setLeft (Ljava/lang/Object;)V
      // 88: aload 0
      // 89: getfield sixtwo/cA.wJgtl Lorg/apache/commons/lang3/tuple/MutablePair;
      // 8c: dload 7
      // 8e: invokestatic java/lang/Double.valueOf (D)Ljava/lang/Double;
      // 91: invokevirtual org/apache/commons/lang3/tuple/MutablePair.setRight (Ljava/lang/Object;)V
      // 94: aload 0
      // 95: invokevirtual sixtwo/cA.Vk ()V
      // 98: aload 0
      // 99: areturn
   }

   public cA UE(double var1) {
      this.PTaqi = var1;
      return this.UJ(MutablePair.of((Double)this.wJgtl.left, (Double)this.wJgtl.right));
   }

   public cA UG(double var1) {
      this.thjOL = Math.max(0.0, var1);
      return this.UJ(MutablePair.of((Double)this.wJgtl.left, (Double)this.wJgtl.right));
   }

   public cA UF(double var1) {
      this.GOtZp = var1;
      return this.UJ(MutablePair.of((Double)this.wJgtl.left, (Double)this.wJgtl.right));
   }

   public cA UH(String var1) {
      long var2 = ohlej ^ 95089535377231L;
      boolean var4 = cB.Vu();

      cA var10000;
      String var10001;
      label22: {
         label21: {
            try {
               var10000 = this;
               var10001 = var1;
               if (var4) {
                  break label22;
               }

               if (var1 == null) {
                  break label21;
               }
            } catch (MatchException var5) {
               throw UY(var5);
            }

            var10001 = var1;
            break label22;
         }

         var10001 = "";
      }

      var10000.pSPRn = var10001;
      return this;
   }
}
