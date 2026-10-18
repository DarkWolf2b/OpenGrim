package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.UUID;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_1657;
import net.minecraft.class_1802;

public class pl extends pB {
   static Map<UUID, Integer> HFuhg;
   private final cJ SyMsX;
   private static final long crCnC = gb.aYR(-3892106226960719213L, 9009668015465966453L, MethodHandles.lookup().lookupClass()).a(170534345023847L);
   private static final String[] jhrGn;
   private static final String[] rzDYw;
   private static final Map HVLJi = new HashMap(13);
   private static final long[] PYqlv;
   private static final Integer[] YHnsS;
   private static final Map uFXMW;

   public pl() {
      long var1 = crCnC ^ 65967605129491L;
      super(cNV<"k">(15304, 7462080915522752628L ^ var1), cNV<"k">(20093, 6121585068488779200L ^ var1));
      int[] var10004 = new int[cNY<"m">(10811, 4121199391032889883L ^ var1)];
      var10004[0] = cNY<"m">(30440, 5427574575398981315L ^ var1);
      var10004[1] = cNY<"m">(5252, 5983123567233002683L ^ var1);
      var10004[2] = cNY<"m">(24143, 7484739426957567589L ^ var1);
      var10004[3] = cNY<"m">(5142, 2430589462997625909L ^ var1);
      var10004[4] = cNY<"m">(25954, 8579323474558328140L ^ var1);
      var10004[5] = cNY<"m">(11685, 7721126600211060123L ^ var1);
      var10004[cNY<"m">(26539, 7097218528712892311L ^ var1)] = cNY<"m">(27767, 2882305254131405905L ^ var1);
      var10004[cNY<"m">(24460, 7353807378109769643L ^ var1)] = cNY<"m">(17597, 6980730901434612888L ^ var1);
      var10004[cNY<"m">(20835, 2362684274580072780L ^ var1)] = cNY<"m">(32197, 8224242416620930537L ^ var1);
      var10004[cNY<"m">(10679, 8938468817503474074L ^ var1)] = cNY<"m">(13979, 693949231287127731L ^ var1);
      var10004[cNY<"m">(28465, 2807169964150429459L ^ var1)] = cNY<"m">(1993, 6192840005183569888L ^ var1);
      var10004[cNY<"m">(11043, 6555987363136361218L ^ var1)] = cNY<"m">(23373, 9202906572762751849L ^ var1);
      this.SyMsX = new cJ(this, mr.clS(var10004)).WE(true);
      this.position(pM.ODjfB);
   }

   static {
      long var11 = crCnC ^ 122990484646042L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[2];
      int var18 = 0;
      String var17 = "ñHÌl\fG\u0015Üc\u0082GJYtÙ÷\u008cu\u0099,Ó\u009f\u0003»\u0018\u0088BÞi\u0007\u0099U\u0086!\u008eùÏj\u008f9ø\u0098\u0082«}¶ï\u0090\u001f";
      int var19 = "ñHÌl\fG\u0015Üc\u0082GJYtÙ÷\u008cu\u0099,Ó\u009f\u0003»\u0018\u0088BÞi\u0007\u0099U\u0086!\u008eùÏj\u008f9ø\u0098\u0082«}¶ï\u0090\u001f"
         .length();
      char var16 = 24;
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = cNS(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            jhrGn = var20;
            rzDYw = new String[2];
            uFXMW = new HashMap(13);
            Cipher var0;
            var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[20];
            int var3 = 0;
            String var4 = "ï\u0003´÷\u0004\f\u0017ëÜ(oAd ÚcùÎz|\u0011Æ<õçº\u000f\u0000\u008f$\u0010\u0015\tTZ·\u0018æ\u0007\u0088\u00ad?\u0085&¸W=g=\u009cúR`¹ir:\f\u0095\u007f¯ûÒýP²,Ühãg\b\u0016ÀÝo-\u008d;\u0006ýFuÒOì\u0093U¤=\u0014ö\u0003èãÒ\u0017*«\u0085\u001d\u0013[\u0085n\\á´\u008fBO\u0003íù\u008dI\u0006C8\u009a\u0010|þ\u0099~úÚ`j*Ö\u0095#ìÓkG\u001d\u009aÎ\u0085\u0091ä%";
            int var5 = "ï\u0003´÷\u0004\f\u0017ëÜ(oAd ÚcùÎz|\u0011Æ<õçº\u000f\u0000\u008f$\u0010\u0015\tTZ·\u0018æ\u0007\u0088\u00ad?\u0085&¸W=g=\u009cúR`¹ir:\f\u0095\u007f¯ûÒýP²,Ühãg\b\u0016ÀÝo-\u008d;\u0006ýFuÒOì\u0093U¤=\u0014ö\u0003èãÒ\u0017*«\u0085\u001d\u0013[\u0085n\\á´\u008fBO\u0003íù\u008dI\u0006C8\u009a\u0010|þ\u0099~úÚ`j*Ö\u0095#ìÓkG\u001d\u009aÎ\u0085\u0091ä%"
               .length();
            byte var2 = 0;

            label32:
            while (true) {
               var10001 = var2;
               var2 += 8;
               byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
               long[] var25 = var6;
               var10001 = var3++;
               long var33 = (var7[0] & 255L) << 56
                  | (var7[1] & 255L) << 48
                  | (var7[2] & 255L) << 40
                  | (var7[3] & 255L) << 32
                  | (var7[4] & 255L) << 24
                  | (var7[5] & 255L) << 16
                  | (var7[6] & 255L) << 8
                  | var7[7] & 255L;
               byte var36 = -1;

               while (true) {
                  long var8 = var33;
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
                  long var38 = (var10[0] & 255L) << 56
                     | (var10[1] & 255L) << 48
                     | (var10[2] & 255L) << 40
                     | (var10[3] & 255L) << 32
                     | (var10[4] & 255L) << 24
                     | (var10[5] & 255L) << 16
                     | (var10[6] & 255L) << 8
                     | var10[7] & 255L;
                  switch (var36) {
                     case 0:
                        var25[var10001] = var38;
                        if (var2 >= var5) {
                           PYqlv = var6;
                           YHnsS = new Integer[20];
                           HFuhg = new HashMap<>();
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "\u0093J\u009cÌ!·\u00821\u0000ÃH\u0095e\u0013\r\u0093";
                        var5 = "\u0093J\u009cÌ!·\u00821\u0000ÃH\u0095e\u0013\r\u0093".length();
                        var2 = 0;
                  }

                  byte var29 = var2;
                  var2 += 8;
                  var7 = var4.substring(var29, var2).getBytes("ISO-8859-1");
                  var25 = var6;
                  var10001 = var3++;
                  var33 = (var7[0] & 255L) << 56
                     | (var7[1] & 255L) << 48
                     | (var7[2] & 255L) << 40
                     | (var7[3] & 255L) << 32
                     | (var7[4] & 255L) << 24
                     | (var7[5] & 255L) << 16
                     | (var7[6] & 255L) << 8
                     | var7[7] & 255L;
                  var36 = 0;
               }
            }
         }

         var16 = var17.charAt(var15);
      }
   }

   @Override
   protected List<pB$vz> cNI(class_1297 var1, boolean var2) {
      long var3 = crCnC ^ 75250755579784L;
      int var5 = this.cNP(var1, var2);

      try {
         if (var5 < 0) {
            return List.of();
         }
      } catch (MatchException var6) {
         throw cNR(var6);
      }

      return List.of(new pB$vz(class_1802.field_8288.method_7854(), this.cNQ(var5)));
   }

   public static void cNM(class_1657 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pl.crCnC J
      // 03: ldc2_w 40474858116425
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnonnull 2e
      // 11: ifnull 2f
      // 14: goto 1b
      // 17: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a: athrow
      // 1b: getstatic sixtwo/pl.HFuhg Ljava/util/Map;
      // 1e: aload 0
      // 1f: invokevirtual net/minecraft/class_1657.method_5667 ()Ljava/util/UUID;
      // 22: invokeinterface java/util/Map.remove (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 27: goto 2e
      // 2a: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: pop
      // 2f: return
   }

   private static String cNS(byte[] var0) {
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

   private String cNQ(int var1) {
      return Integer.toString(Math.max(0, var1));
   }

   public static void cNL(class_1297 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pl.crCnC J
      // 03: ldc2_w 7956874617490
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnonnull 26
      // 11: instanceof net/minecraft/class_1657
      // 14: ifeq 30
      // 17: goto 1e
      // 1a: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: goto 26
      // 22: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: checkcast net/minecraft/class_1657
      // 29: astore 4
      // 2b: aload 4
      // 2d: invokestatic sixtwo/pl.cNM (Lnet/minecraft/class_1657;)V
      // 30: return
   }

   private static Object cNU(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = cNT(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private int cNP(class_1297 param1, boolean param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pl.crCnC J
      // 03: ldc2_w 36593188768801
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 0b: astore 5
      // 0d: iload 2
      // 0e: aload 5
      // 10: ifnonnull 27
      // 13: ifeq 23
      // 16: goto 1d
      // 19: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: bipush 2
      // 1e: ireturn
      // 1f: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: aload 1
      // 24: instanceof net/minecraft/class_1657
      // 27: aload 5
      // 29: ifnonnull 49
      // 2c: ifeq 41
      // 2f: goto 36
      // 32: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 35: athrow
      // 36: aload 1
      // 37: checkcast net/minecraft/class_1657
      // 3a: astore 6
      // 3c: aload 5
      // 3e: ifnull 4a
      // 41: bipush -1
      // 42: goto 49
      // 45: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 48: athrow
      // 49: ireturn
      // 4a: aload 6
      // 4c: invokestatic sixtwo/pl.cNO (Lnet/minecraft/class_1657;)I
      // 4f: istore 7
      // 51: iload 7
      // 53: aload 5
      // 55: ifnonnull 70
      // 58: ifgt 83
      // 5b: goto 62
      // 5e: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 61: athrow
      // 62: aload 0
      // 63: getfield sixtwo/pl.SyMsX Lsixtwo/cJ;
      // 66: invokevirtual sixtwo/cJ.WF ()Z
      // 69: goto 70
      // 6c: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6f: athrow
      // 70: aload 5
      // 72: ifnonnull 80
      // 75: ifeq 83
      // 78: goto 7f
      // 7b: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7e: athrow
      // 7f: bipush -1
      // 80: goto 85
      // 83: iload 7
      // 85: ireturn
   }

   private static int cNO(class_1657 var0) {
      return HFuhg.getOrDefault(var0.method_5667(), 0);
   }

   private static MatchException cNR(MatchException var0) {
      return var0;
   }

   private static int cNW(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 32128;
      if (YHnsS[var3] == null) {
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
         long var5 = PYqlv[var3];
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
         Object[] var9 = (Object[])uFXMW.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               uFXMW.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/pl", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         YHnsS[var3] = var15;
      }

      return YHnsS[var3];
   }

   private static CallSite cNY(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cNX".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/pl" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static CallSite cNV(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cNU".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/pl" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String cNT(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 11794;
      if (rzDYw[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])HVLJi.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               HVLJi.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/pl", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = jhrGn[var5].getBytes("ISO-8859-1");
         rzDYw[var5] = cNS(((Cipher)var4[0]).doFinal(var9));
      }

      return rzDYw[var5];
   }

   private static int cNX(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = cNW(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public static void cNJ(gL$tk param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pl.crCnC J
      // 03: ldc2_w 25969242914125
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: ifnull 20
      // 10: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 13: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 16: ifnonnull 25
      // 19: goto 20
      // 1c: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: return
      // 21: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: aload 0
      // 26: invokevirtual sixtwo/gL$tk.bcf ()Lnet/minecraft/class_2596;
      // 29: astore 4
      // 2b: aload 4
      // 2d: aload 3
      // 2e: ifnonnull 47
      // 31: instanceof net/minecraft/class_2663
      // 34: ifeq 50
      // 37: goto 3e
      // 3a: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: aload 4
      // 40: goto 47
      // 43: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 46: athrow
      // 47: checkcast net/minecraft/class_2663
      // 4a: astore 5
      // 4c: aload 3
      // 4d: ifnull 55
      // 50: return
      // 51: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 54: athrow
      // 55: aload 5
      // 57: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 5a: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 5d: invokevirtual net/minecraft/class_2663.method_11469 (Lnet/minecraft/class_1937;)Lnet/minecraft/class_1297;
      // 60: astore 6
      // 62: aload 6
      // 64: aload 3
      // 65: ifnonnull 7e
      // 68: instanceof net/minecraft/class_1657
      // 6b: ifeq 87
      // 6e: goto 75
      // 71: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 74: athrow
      // 75: aload 6
      // 77: goto 7e
      // 7a: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7d: athrow
      // 7e: checkcast net/minecraft/class_1657
      // 81: astore 7
      // 83: aload 3
      // 84: ifnull 8c
      // 87: return
      // 88: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8b: athrow
      // 8c: aload 5
      // 8e: invokevirtual net/minecraft/class_2663.method_11470 ()B
      // 91: istore 8
      // 93: iload 8
      // 95: sipush 13172
      // 98: ldc2_w 7126732719654491927
      // 9b: lload 1
      // 9c: lxor
      // 9d: invokedynamic m (IJ)I bsm=sixtwo/pl.cNY (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // a2: aload 3
      // a3: ifnonnull dc
      // a6: if_icmpne d2
      // a9: goto b0
      // ac: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // af: athrow
      // b0: getstatic sixtwo/pl.HFuhg Ljava/util/Map;
      // b3: aload 7
      // b5: invokevirtual net/minecraft/class_1657.method_5667 ()Ljava/util/UUID;
      // b8: bipush 1
      // b9: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // bc: invokedynamic apply ()Ljava/util/function/BiFunction; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;, java/lang/Integer.sum (II)I, (Ljava/lang/Integer;Ljava/lang/Integer;)Ljava/lang/Integer; ]
      // c1: invokeinterface java/util/Map.merge (Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object; 4
      // c6: pop
      // c7: aload 3
      // c8: ifnull eb
      // cb: goto d2
      // ce: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d1: athrow
      // d2: iload 8
      // d4: bipush 3
      // d5: goto dc
      // d8: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // db: athrow
      // dc: if_icmpne eb
      // df: aload 7
      // e1: invokestatic sixtwo/pl.cNM (Lnet/minecraft/class_1657;)V
      // e4: goto eb
      // e7: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ea: athrow
      // eb: return
   }

   public static void cNN() {
      HFuhg.clear();
   }

   public static boolean cNK(class_1657 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pl.crCnC J
      // 03: ldc2_w 111959766384230
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnonnull 1c
      // 11: ifnull 61
      // 14: goto 1b
      // 17: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a: athrow
      // 1b: aload 0
      // 1c: invokevirtual net/minecraft/class_1657.method_5805 ()Z
      // 1f: aload 3
      // 20: ifnonnull 6c
      // 23: ifeq 67
      // 26: goto 2d
      // 29: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: aload 0
      // 2e: invokevirtual net/minecraft/class_1657.method_6032 ()F
      // 31: fconst_0
      // 32: fcmpl
      // 33: aload 3
      // 34: ifnonnull 6c
      // 37: goto 3e
      // 3a: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: ifle 67
      // 41: goto 48
      // 44: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: aload 0
      // 49: getfield net/minecraft/class_1657.field_6213 I
      // 4c: aload 3
      // 4d: ifnonnull 6c
      // 50: goto 57
      // 53: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 56: athrow
      // 57: ifgt 67
      // 5a: goto 61
      // 5d: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 60: athrow
      // 61: bipush 0
      // 62: ireturn
      // 63: invokestatic sixtwo/pl.cNR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 66: athrow
      // 67: aload 0
      // 68: invokestatic sixtwo/pl.cNM (Lnet/minecraft/class_1657;)V
      // 6b: bipush 1
      // 6c: ireturn
   }
}
