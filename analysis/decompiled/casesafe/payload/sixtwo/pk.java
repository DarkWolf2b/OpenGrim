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
import net.minecraft.class_1297;

public class pk extends pA {
   private static final long tweKy = gb.aYR(-6178494343064640233L, 4714616395883178368L, MethodHandles.lookup().lookupClass()).a(117829781656289L);
   private static final String[] xoTaj;
   private static final String[] JgyZU;
   private static final Map SGYWQ = new HashMap(13);

   public pk() {
      long var1 = tweKy ^ 23228239310395L;
      super(cNH<"p">(13302, 8841909126042944225L ^ var1), cNH<"p">(17351, 7725632803032822482L ^ var1));
      this.position(pM.DXMaR);
   }

   static {
      long var0 = tweKy ^ 139537733479613L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[7];
      int var7 = 0;
      String var6 = "7N[├ą'Rj+\u0097\u0094\u0081\u009a;\"VKz{(\u0017┬▓├äT┬▒\u0099Z├Ä\u009b.%├Ü├ż \u009e\u0012H\u000bS┬»\u0085\u0006h\"\u0093g├Č├Ąd├ô4\u008a!\u0002?┬ĚP┬▒Pq┬Ż├Ć├Ľ\u001e┬│#\u0018\u0004\u008a├ś├ő┬Ě┬╣;┬í\n\"L├í├ť├â├â├ô├ä3├î|\u0006\f_\u0000\u0018J├ä\u0015\u00ad7├í1\u001a:+&\u0081z\\2├ĹV┬Ě┬¬┬ž\u000f\u0087├Ź├Ş\u0010\u001cE\u0004$+\rA\u00ad├»\u001a┬ź\u0007\t├żBJ";
      int var8 = "7N[├ą'Rj+\u0097\u0094\u0081\u009a;\"VKz{(\u0017┬▓├äT┬▒\u0099Z├Ä\u009b.%├Ü├ż \u009e\u0012H\u000bS┬»\u0085\u0006h\"\u0093g├Č├Ąd├ô4\u008a!\u0002?┬ĚP┬▒Pq┬Ż├Ć├Ľ\u001e┬│#\u0018\u0004\u008a├ś├ő┬Ě┬╣;┬í\n\"L├í├ť├â├â├ô├ä3├î|\u0006\f_\u0000\u0018J├ä\u0015\u00ad7├í1\u001a:+&\u0081z\\2├ĹV┬Ě┬¬┬ž\u000f\u0087├Ź├Ş\u0010\u001cE\u0004$+\rA\u00ad├»\u001a┬ź\u0007\t├żBJ"
         .length();
      char var5 = ' ';
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = cNE(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     xoTaj = var9;
                     JgyZU = new String[7];
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

                  var6 = "\u0092┬żi┬╣`├Ä\u008f\u008cC├ć├╝Ku┬┐┬»v!2┬Żr5┬ž├Ĺ├Ť \u008a\u000b*├ź├ś\u0081┬╣├░┬╣Es\u0081\u0003\u000f\t\u0016├ą\t\u008d├║\u008f\u0013├ç┬┐├Ä├ą├Â┬╝├úW\u009f├č";
                  var8 = "\u0092┬żi┬╣`├Ä\u008f\u008cC├ć├╝Ku┬┐┬»v!2┬Żr5┬ž├Ĺ├Ť \u008a\u000b*├ź├ś\u0081┬╣├░┬╣Es\u0081\u0003\u000f\t\u0016├ą\t\u008d├║\u008f\u0013├ç┬┐├Ä├ą├Â┬╝├úW\u009f├č"
                     .length();
                  var5 = 24;
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   @Override
   protected String cNC(class_1297 param1, boolean param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pk.tweKy J
      // 03: ldc2_w 23955842864416
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 0b: astore 5
      // 0d: iload 2
      // 0e: aload 5
      // 10: ifnonnull 3f
      // 13: ifeq 2f
      // 16: goto 1d
      // 19: invokestatic sixtwo/pk.cND (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: sipush 18940
      // 20: ldc2_w 5245568161830994929
      // 23: lload 3
      // 24: lxor
      // 25: invokedynamic p (IJ)Ljava/lang/String; bsm=sixtwo/pk.cNH (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2a: areturn
      // 2b: invokestatic sixtwo/pk.cND (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2e: athrow
      // 2f: aload 1
      // 30: aload 5
      // 32: ifnonnull 43
      // 35: instanceof net/minecraft/class_1309
      // 38: goto 3f
      // 3b: invokestatic sixtwo/pk.cND (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3e: athrow
      // 3f: ifeq 4d
      // 42: aload 1
      // 43: checkcast net/minecraft/class_1309
      // 46: astore 6
      // 48: aload 5
      // 4a: ifnull 53
      // 4d: aconst_null
      // 4e: areturn
      // 4f: invokestatic sixtwo/pk.cND (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 52: athrow
      // 53: aload 6
      // 55: invokevirtual net/minecraft/class_1309.method_5715 ()Z
      // 58: aload 5
      // 5a: ifnonnull 87
      // 5d: ifeq 7b
      // 60: goto 67
      // 63: invokestatic sixtwo/pk.cND (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 66: athrow
      // 67: sipush 12461
      // 6a: ldc2_w 3319782950099614375
      // 6d: lload 3
      // 6e: lxor
      // 6f: invokedynamic p (IJ)Ljava/lang/String; bsm=sixtwo/pk.cNH (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 74: astore 7
      // 76: aload 5
      // 78: ifnull dc
      // 7b: aload 6
      // 7d: invokevirtual net/minecraft/class_1309.method_20448 ()Z
      // 80: goto 87
      // 83: invokestatic sixtwo/pk.cND (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 86: athrow
      // 87: aload 5
      // 89: ifnonnull b6
      // 8c: ifeq aa
      // 8f: goto 96
      // 92: invokestatic sixtwo/pk.cND (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 95: athrow
      // 96: sipush 21659
      // 99: ldc2_w 3692326942067793554
      // 9c: lload 3
      // 9d: lxor
      // 9e: invokedynamic p (IJ)Ljava/lang/String; bsm=sixtwo/pk.cNH (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // a3: astore 7
      // a5: aload 5
      // a7: ifnull dc
      // aa: aload 6
      // ac: invokevirtual net/minecraft/class_1309.method_20232 ()Z
      // af: goto b6
      // b2: invokestatic sixtwo/pk.cND (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b5: athrow
      // b6: ifeq cd
      // b9: sipush 26144
      // bc: ldc2_w 2387828105937890344
      // bf: lload 3
      // c0: lxor
      // c1: invokedynamic p (IJ)Ljava/lang/String; bsm=sixtwo/pk.cNH (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // c6: astore 7
      // c8: aload 5
      // ca: ifnull dc
      // cd: sipush 28150
      // d0: ldc2_w 8134433034295257085
      // d3: lload 3
      // d4: lxor
      // d5: invokedynamic p (IJ)Ljava/lang/String; bsm=sixtwo/pk.cNH (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // da: astore 7
      // dc: aload 7
      // de: areturn
   }

   private static String cNF(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 7345;
      if (JgyZU[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])SGYWQ.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               SGYWQ.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/pk", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = xoTaj[var5].getBytes("ISO-8859-1");
         JgyZU[var5] = cNE(((Cipher)var4[0]).doFinal(var9));
      }

      return JgyZU[var5];
   }

   private static MatchException cND(MatchException var0) {
      return var0;
   }

   private static String cNE(byte[] var0) {
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

   private static CallSite cNH(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cNG".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/pk" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static Object cNG(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = cNF(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }
}
