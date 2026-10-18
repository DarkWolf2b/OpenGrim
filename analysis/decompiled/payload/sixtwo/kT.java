package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import java.lang.invoke.MethodHandles;
import java.util.Collections;
import java.util.Map;
import java.util.WeakHashMap;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2960;

public final class kT {
   public static final class_2960 dmDCF;
   public static final class_2960 wNJTB;
   private static final Map<Object, jN> MsfCa;
   private static final Map<RenderPipeline, jN> XspFr;
   private static final long kpeZC = gb.aYR(1494750730265887428L, -5285847214512154865L, MethodHandles.lookup().lookupClass()).a(60054614921373L);

   static {
      long var9 = kpeZC ^ 71450814054818L;
      Cipher var1;
      Cipher var10000 = var1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var9 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var2 = 1; var2 < 8; var2++) {
         var10003[var2] = (byte)(var9 << var2 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var0 = new String[2];
      int var6 = 0;
      String var5 = "\u000ek¸Ê\u001cºjñÎ[â\u0018üè\u00954?\u0099\u0004\u00826KÊj\u0010\u000ek¸Ê\u001cºjñ\u001fTþ[\u001aªSj";
      int var7 = "\u000ek¸Ê\u001cºjñÎ[â\u0018üè\u00954?\u0099\u0004\u00826KÊj\u0010\u000ek¸Ê\u001cºjñ\u001fTþ[\u001aªSj".length();
      char var4 = 24;
      int var3 = -1;

      while (true) {
         byte[] var8 = var1.doFinal(var5.substring(++var3, var3 + var4).getBytes("ISO-8859-1"));
         String var13 = bVW(var8).intern();
         byte var10001 = -1;
         var0[var6++] = var13;
         if ((var3 += var4) >= var7) {
            dmDCF = class_2960.method_60654(var0[1]);
            wNJTB = class_2960.method_60654(var0[0]);
            MsfCa = Collections.synchronizedMap(new WeakHashMap<>());
            XspFr = Collections.synchronizedMap(new WeakHashMap<>());
            return;
         }

         var4 = var5.charAt(var3);
      }
   }

   public static jN bVR(Object var0) {
      return MsfCa.get(var0);
   }

   public static void bVS(Object param0, jN param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kT.kpeZC J
      // 03: ldc2_w 89229284729099
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/kR.bVy ()Z
      // 0b: istore 4
      // 0d: aload 1
      // 0e: iload 4
      // 10: ifne 36
      // 13: ifnonnull 2c
      // 16: goto 1d
      // 19: invokestatic sixtwo/kT.bVV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: getstatic sixtwo/kT.MsfCa Ljava/util/Map;
      // 20: aload 0
      // 21: invokeinterface java/util/Map.remove (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 26: pop
      // 27: return
      // 28: invokestatic sixtwo/kT.bVV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: getstatic sixtwo/kT.MsfCa Ljava/util/Map;
      // 2f: aload 0
      // 30: aload 1
      // 31: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 36: pop
      // 37: return
   }

   private static String bVW(byte[] var0) {
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

   public static void bVU(RenderPipeline param0, jN param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kT.kpeZC J
      // 03: ldc2_w 67576153365649
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/kR.bVy ()Z
      // 0b: istore 4
      // 0d: aload 1
      // 0e: iload 4
      // 10: ifne 36
      // 13: ifnonnull 2c
      // 16: goto 1d
      // 19: invokestatic sixtwo/kT.bVV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: getstatic sixtwo/kT.XspFr Ljava/util/Map;
      // 20: aload 0
      // 21: invokeinterface java/util/Map.remove (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 26: pop
      // 27: return
      // 28: invokestatic sixtwo/kT.bVV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: getstatic sixtwo/kT.XspFr Ljava/util/Map;
      // 2f: aload 0
      // 30: aload 1
      // 31: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 36: pop
      // 37: return
   }

   private static MatchException bVV(MatchException var0) {
      return var0;
   }

   public static jN bVT(RenderPipeline var0) {
      return XspFr.get(var0);
   }
}
