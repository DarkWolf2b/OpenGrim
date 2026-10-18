package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.Map;
import java.util.Map.Entry;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1792;
import net.minecraft.class_1802;

public final class md {
   public static final mj HIkeq;
   public static final mj WDZLh;
   public static final mj Mtwfi;
   public static final mj xxUvC;
   public static final mj TdXrD;
   public static final mj OaWjn;
   public static final mj Edrkg;
   public static final mj MucuO;
   public static final mj QotIs;
   public static final mj YXgsM;
   private static final Map<class_1792, mj> KgRvB;
   private static final long XPMxy = gb.aYR(-6628615357458597046L, -1629562632567245569L, MethodHandles.lookup().lookupClass()).a(129995601743170L);

   static {
      long var11 = XPMxy ^ 69653011674495L;
      Cipher var1;
      Cipher var10000 = var1 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var2 = 1; var2 < 8; var2++) {
         var10003[var2] = (byte)(var11 << var2 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var0 = new long[5];
      int var4 = 0;
      String var5 = "L\u001a\rZní\u0005\u0006\ta¿}S\u001f\\_\u008cÿy\u008bJ\u0089\u009c'";
      int var6 = "L\u001a\rZní\u0005\u0006\ta¿}S\u001f\\_\u008cÿy\u008bJ\u0089\u009c'".length();
      byte var3 = 0;

      label24:
      while (true) {
         int var10001 = var3;
         var3 += 8;
         byte[] var7 = var5.substring(var10001, var3).getBytes("ISO-8859-1");
         long[] var14 = var0;
         var10001 = var4++;
         long var18 = (var7[0] & 255L) << 56
            | (var7[1] & 255L) << 48
            | (var7[2] & 255L) << 40
            | (var7[3] & 255L) << 32
            | (var7[4] & 255L) << 24
            | (var7[5] & 255L) << 16
            | (var7[6] & 255L) << 8
            | var7[7] & 255L;
         byte var20 = -1;

         while (true) {
            long var8 = var18;
            byte[] var10 = var1.doFinal(
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
            long var22 = (var10[0] & 255L) << 56
               | (var10[1] & 255L) << 48
               | (var10[2] & 255L) << 40
               | (var10[3] & 255L) << 32
               | (var10[4] & 255L) << 24
               | (var10[5] & 255L) << 16
               | (var10[6] & 255L) << 8
               | var10[7] & 255L;
            switch (var20) {
               case 0:
                  var14[var10001] = var22;
                  if (var3 >= var6) {
                     HIkeq = new mj(1.5, 0.03, 0.99, 0.8, false, false, 0.0, 0.1000000014901161, 0.0);
                     WDZLh = HIkeq;
                     Mtwfi = HIkeq;
                     xxUvC = new mj(0.5, 0.05, 0.99, 0.8, false, false, 0.0, 0.1000000014901161, 20.0);
                     TdXrD = xxUvC;
                     OaWjn = new mj(0.7, 0.07, 0.99, 0.8, false, false, 0.0, 0.1000000014901161, 20.0);
                     Edrkg = new mj(2.5, 0.05, 0.99, 0.99, false, true, 0.0, 0.1000000014901161, 0.0);
                     MucuO = new mj(3.0, 0.05, 0.99, 0.6, false, true, 0.0, 0.1000000014901161, 0.0);
                     QotIs = new mj(3.15, 0.05, 0.99, 0.6, false, true, 0.0, 0.1000000014901161, 0.0);
                     YXgsM = new mj(1.5, 0.0, 1.0, 1.0, false, false, 0.0, 0.0, 0.0);
                     Entry[] var15 = new Entry[(int)var0[0]];
                     var15[0] = Map.entry(class_1802.field_8634, HIkeq);
                     var15[1] = Map.entry(class_1802.field_8543, WDZLh);
                     var15[2] = Map.entry(class_1802.field_8803, Mtwfi);
                     var15[3] = Map.entry(class_1802.field_8436, xxUvC);
                     var15[4] = Map.entry(class_1802.field_8150, TdXrD);
                     var15[5] = Map.entry(class_1802.field_8287, OaWjn);
                     var15[(int)var0[3]] = Map.entry(class_1802.field_8547, Edrkg);
                     var15[(int)var0[4]] = Map.entry(class_1802.field_8102, MucuO);
                     var15[(int)var0[1]] = Map.entry(class_1802.field_8399, QotIs);
                     var15[(int)var0[2]] = Map.entry(class_1802.field_49098, YXgsM);
                     KgRvB = Map.ofEntries(var15);
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var22;
                  if (var3 < var6) {
                     continue label24;
                  }

                  var5 = "\\m-\u00988/\u0007êGcÇò\u0015L\u0007(";
                  var6 = "\\m-\u00988/\u0007êGcÇò\u0015L\u0007(".length();
                  var3 = 0;
            }

            byte var17 = var3;
            var3 += 8;
            var7 = var5.substring(var17, var3).getBytes("ISO-8859-1");
            var14 = var0;
            var10001 = var4++;
            var18 = (var7[0] & 255L) << 56
               | (var7[1] & 255L) << 48
               | (var7[2] & 255L) << 40
               | (var7[3] & 255L) << 32
               | (var7[4] & 255L) << 24
               | (var7[5] & 255L) << 16
               | (var7[6] & 255L) << 8
               | var7[7] & 255L;
            var20 = 0;
         }
      }
   }

   public static mj cjX(class_1792 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/md.XPMxy J
      // 03: ldc2_w 68493889631344
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/mk.cle ()[I
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnonnull 2f
      // 11: ifnonnull 23
      // 14: goto 1b
      // 17: invokestatic sixtwo/md.cjY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a: athrow
      // 1b: getstatic sixtwo/md.HIkeq Lsixtwo/mj;
      // 1e: areturn
      // 1f: invokestatic sixtwo/md.cjY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: getstatic sixtwo/md.KgRvB Ljava/util/Map;
      // 26: aload 0
      // 27: getstatic sixtwo/md.HIkeq Lsixtwo/mj;
      // 2a: invokeinterface java/util/Map.getOrDefault (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 2f: checkcast sixtwo/mj
      // 32: areturn
   }

   private static MatchException cjY(MatchException var0) {
      return var0;
   }
}
