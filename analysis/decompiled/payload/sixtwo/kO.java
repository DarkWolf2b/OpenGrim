package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.pipeline.RenderPipeline.Snippet;
import com.mojang.blaze3d.vertex.VertexFormat;
import com.mojang.blaze3d.vertex.VertexFormat.class_5596;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_10789;

public final class kO {
   private final String DiCsC;
   private final VertexFormat uzwKP;
   private final class_5596 YetoX;
   private final String WbSgM;
   private final String wLlrv;
   private final jN XySPj;
   private final List<String> mgCAT;
   private final Map<String, class_10789> frezO;
   private final Snippet[] asrXs;
   private final Map<kS, RenderPipeline> ftyjn = new ConcurrentHashMap<>();
   private static final long KinWI = gb.aYR(-183619953945926409L, 2954576237394249373L, MethodHandles.lookup().lookupClass()).a(257615190186659L);
   private static final String[] JtrOW;
   private static final String[] YjeYU;
   private static final Map mPfDh = new HashMap(13);

   private kO(kO$uq var1) {
      this.DiCsC = var1.IfTav;
      this.uzwKP = var1.mrfud;
      this.YetoX = var1.bmQDp;
      this.WbSgM = var1.SqHTg;
      this.wLlrv = var1.UxEjn;
      this.XySPj = var1.scPFe;
      this.mgCAT = List.copyOf(var1.JfGsn);
      this.frezO = Map.copyOf(var1.rGVcy);
      this.asrXs = var1.EEbpA;
   }

   static {
      long var0 = KinWI ^ 137204824165017L;
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
      String var6 = "\u008bÁ»Þ\u008cÁq\u0082 ^f\u0087ÿ3\u009a!\u0010(ÕÀ\u0087ÛÛpÆã\u009e\u0080\u0000!¿\u0012å";
      int var8 = "\u008bÁ»Þ\u008cÁq\u0082 ^f\u0087ÿ3\u009a!\u0010(ÕÀ\u0087ÛÛpÆã\u009e\u0080\u0000!¿\u0012å".length();
      char var5 = 16;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = bVe(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     JtrOW = var9;
                     YjeYU = new String[4];
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

                  var6 = "\u00837\u000e¥³\u001a\u0094Å\u009cv¥\u008f\u0080 \u009d(\u0010é!Ç¶ö\u001aØà\u0014ÁïÆ\u0093®]â";
                  var8 = "\u00837\u000e¥³\u001a\u0094Å\u009cv¥\u008f\u0080 \u009d(\u0010é!Ç¶ö\u001aØà\u0014ÁïÆ\u0093®]â".length();
                  var5 = 16;
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   public static kO$uq bVc(String var0) {
      return new kO$uq(var0);
   }

   public RenderPipeline bUZ(kS var1) {
      return this.ftyjn.computeIfAbsent(var1, this::bVa);
   }

   private static String bVb(kS param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kO.KinWI J
      // 03: ldc2_w 122167370011297
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/kQ.bVo ()I
      // 0b: aload 0
      // 0c: invokevirtual sixtwo/kS.bVJ ()Lsixtwo/lh;
      // 0f: astore 4
      // 11: istore 3
      // 12: aload 4
      // 14: iload 3
      // 15: ifeq 38
      // 18: ifnonnull 36
      // 1b: goto 22
      // 1e: invokestatic sixtwo/kO.bVd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: sipush 25010
      // 25: ldc2_w 8776769199177479743
      // 28: lload 1
      // 29: lxor
      // 2a: invokedynamic b (IJ)Ljava/lang/String; bsm=sixtwo/kO.bVh (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2f: goto 41
      // 32: invokestatic sixtwo/kO.bVd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 35: athrow
      // 36: aload 4
      // 38: invokevirtual sixtwo/lh.name ()Ljava/lang/String;
      // 3b: getstatic java/util/Locale.ROOT Ljava/util/Locale;
      // 3e: invokevirtual java/lang/String.toLowerCase (Ljava/util/Locale;)Ljava/lang/String;
      // 41: aload 0
      // 42: invokevirtual sixtwo/kS.bVK ()Lcom/mojang/blaze3d/platform/DepthTestFunction;
      // 45: invokevirtual com/mojang/blaze3d/platform/DepthTestFunction.name ()Ljava/lang/String;
      // 48: getstatic java/util/Locale.ROOT Ljava/util/Locale;
      // 4b: invokevirtual java/lang/String.toLowerCase (Ljava/util/Locale;)Ljava/lang/String;
      // 4e: aload 0
      // 4f: invokevirtual sixtwo/kS.bVL ()Z
      // 52: ifeq 5f
      // 55: ldc_w "1"
      // 58: goto 62
      // 5b: invokestatic sixtwo/kO.bVd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5e: athrow
      // 5f: ldc_w "0"
      // 62: aload 0
      // 63: invokevirtual sixtwo/kS.bVM ()Z
      // 66: ifeq 73
      // 69: ldc_w "1"
      // 6c: goto 76
      // 6f: invokestatic sixtwo/kO.bVd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 72: athrow
      // 73: ldc_w "0"
      // 76: astore 5
      // 78: astore 6
      // 7a: astore 7
      // 7c: sipush 17984
      // 7f: ldc2_w 7670880006021485004
      // 82: lload 1
      // 83: lxor
      // 84: invokedynamic b (IJ)Ljava/lang/String; bsm=sixtwo/kO.bVh (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 89: aload 7
      // 8b: sipush 29266
      // 8e: ldc2_w 2455145310535984604
      // 91: lload 1
      // 92: lxor
      // 93: invokedynamic b (IJ)Ljava/lang/String; bsm=sixtwo/kO.bVh (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 98: aload 6
      // 9a: sipush 15678
      // 9d: ldc2_w 3813317872974883505
      // a0: lload 1
      // a1: lxor
      // a2: invokedynamic b (IJ)Ljava/lang/String; bsm=sixtwo/kO.bVh (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // a7: aload 5
      // a9: invokedynamic makeConcatWithConstants (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001\u0001\u0001\u0001\u0001\u0001\u0001" ]
      // ae: areturn
   }

   private static MatchException bVd(MatchException var0) {
      return var0;
   }

   private static CallSite bVh(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bVg".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kO" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private RenderPipeline bVa(kS param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/kO.KinWI J
      // 003: ldc2_w 90958909406800
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/kQ.bVo ()I
      // 00b: aload 0
      // 00c: getfield sixtwo/kO.DiCsC Ljava/lang/String;
      // 00f: aload 1
      // 010: invokestatic sixtwo/kO.bVb (Lsixtwo/kS;)Ljava/lang/String;
      // 013: invokedynamic makeConcatWithConstants (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001/\u0001" ]
      // 018: aload 0
      // 019: getfield sixtwo/kO.asrXs [Lcom/mojang/blaze3d/pipeline/RenderPipeline$Snippet;
      // 01c: invokestatic sixtwo/kU.bVX (Ljava/lang/String;[Lcom/mojang/blaze3d/pipeline/RenderPipeline$Snippet;)Lsixtwo/kU;
      // 01f: aload 0
      // 020: getfield sixtwo/kO.uzwKP Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 023: aload 0
      // 024: getfield sixtwo/kO.YetoX Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 027: invokevirtual sixtwo/kU.bVY (Lcom/mojang/blaze3d/vertex/VertexFormat;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;)Lsixtwo/kU;
      // 02a: aload 1
      // 02b: invokevirtual sixtwo/kU.bWc (Lsixtwo/kS;)Lsixtwo/kU;
      // 02e: astore 5
      // 030: istore 4
      // 032: aload 0
      // 033: iload 4
      // 035: ifeq 095
      // 038: getfield sixtwo/kO.XySPj Lsixtwo/jN;
      // 03b: ifnonnull 094
      // 03e: goto 045
      // 041: invokestatic sixtwo/kO.bVd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 044: athrow
      // 045: aload 0
      // 046: getfield sixtwo/kO.WbSgM Ljava/lang/String;
      // 049: iload 4
      // 04b: ifeq 080
      // 04e: goto 055
      // 051: invokestatic sixtwo/kO.bVd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 054: athrow
      // 055: ifnull 070
      // 058: goto 05f
      // 05b: invokestatic sixtwo/kO.bVd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05e: athrow
      // 05f: aload 5
      // 061: aload 0
      // 062: getfield sixtwo/kO.WbSgM Ljava/lang/String;
      // 065: invokevirtual sixtwo/kU.bVZ (Ljava/lang/String;)Lsixtwo/kU;
      // 068: pop
      // 069: goto 070
      // 06c: invokestatic sixtwo/kO.bVd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06f: athrow
      // 070: aload 0
      // 071: iload 4
      // 073: ifeq 095
      // 076: getfield sixtwo/kO.wLlrv Ljava/lang/String;
      // 079: goto 080
      // 07c: invokestatic sixtwo/kO.bVd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07f: athrow
      // 080: ifnull 094
      // 083: aload 5
      // 085: aload 0
      // 086: getfield sixtwo/kO.wLlrv Ljava/lang/String;
      // 089: invokevirtual sixtwo/kU.bWa (Ljava/lang/String;)Lsixtwo/kU;
      // 08c: pop
      // 08d: goto 094
      // 090: invokestatic sixtwo/kO.bVd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 093: athrow
      // 094: aload 0
      // 095: getfield sixtwo/kO.frezO Ljava/util/Map;
      // 098: invokeinterface java/util/Map.entrySet ()Ljava/util/Set; 1
      // 09d: invokeinterface java/util/Set.iterator ()Ljava/util/Iterator; 1
      // 0a2: astore 6
      // 0a4: aload 6
      // 0a6: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0ab: ifeq 0e5
      // 0ae: aload 6
      // 0b0: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 0b5: checkcast java/util/Map$Entry
      // 0b8: astore 7
      // 0ba: aload 5
      // 0bc: aload 7
      // 0be: invokeinterface java/util/Map$Entry.getKey ()Ljava/lang/Object; 1
      // 0c3: checkcast java/lang/String
      // 0c6: aload 7
      // 0c8: invokeinterface java/util/Map$Entry.getValue ()Ljava/lang/Object; 1
      // 0cd: checkcast net/minecraft/class_10789
      // 0d0: invokevirtual sixtwo/kU.bWe (Ljava/lang/String;Lnet/minecraft/class_10789;)Lsixtwo/kU;
      // 0d3: pop
      // 0d4: iload 4
      // 0d6: ifeq 0f0
      // 0d9: iload 4
      // 0db: ifne 0a4
      // 0de: goto 0e5
      // 0e1: invokestatic sixtwo/kO.bVd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e4: athrow
      // 0e5: aload 0
      // 0e6: getfield sixtwo/kO.mgCAT Ljava/util/List;
      // 0e9: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 0ee: astore 6
      // 0f0: aload 6
      // 0f2: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0f7: ifeq 11f
      // 0fa: aload 6
      // 0fc: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 101: checkcast java/lang/String
      // 104: astore 7
      // 106: aload 5
      // 108: aload 7
      // 10a: invokevirtual sixtwo/kU.bWf (Ljava/lang/String;)Lsixtwo/kU;
      // 10d: pop
      // 10e: iload 4
      // 110: ifeq 137
      // 113: iload 4
      // 115: ifne 0f0
      // 118: goto 11f
      // 11b: invokestatic sixtwo/kO.bVd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 11e: athrow
      // 11f: aload 0
      // 120: getfield sixtwo/kO.XySPj Lsixtwo/jN;
      // 123: ifnull 137
      // 126: aload 5
      // 128: aload 0
      // 129: getfield sixtwo/kO.XySPj Lsixtwo/jN;
      // 12c: invokevirtual sixtwo/kU.bWd (Lsixtwo/jN;)Lsixtwo/kU;
      // 12f: pop
      // 130: goto 137
      // 133: invokestatic sixtwo/kO.bVd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 136: athrow
      // 137: aload 5
      // 139: invokevirtual sixtwo/kU.bWg ()Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 13c: areturn
   }

   private static String bVf(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 24689;
      if (YjeYU[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])mPfDh.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               mPfDh.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/kO", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = JtrOW[var5].getBytes("ISO-8859-1");
         YjeYU[var5] = bVe(((Cipher)var4[0]).doFinal(var9));
      }

      return YjeYU[var5];
   }

   private static Object bVg(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bVf(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String bVe(byte[] var0) {
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
}
