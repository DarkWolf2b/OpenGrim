package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import java.util.TreeMap;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1792;

public class ch extends co {
   private final Map<String, mz<class_1792, mP>> snpNi;
   private static final long LVRos = gb.aYR(7741857583350899870L, -6443874923026755424L, MethodHandles.lookup().lookupClass()).a(107885206058094L);
   private static final String[] AQbcv;
   private static final String[] ODNiP;
   private static final Map oNUTQ = new HashMap(13);
   private static final long[] eiaau;
   private static final Integer[] TxnZp;
   private static final Map PqIzN;

   public ch() {
      long var1 = LVRos ^ 98200132106256L;
      int[] var10001 = new int[Qr<"q">(29172, 8063349628460180676L ^ var1)];
      var10001[0] = Qr<"q">(188, 994878752370283912L ^ var1);
      var10001[1] = Qr<"q">(27308, 1002558233811632017L ^ var1);
      var10001[2] = Qr<"q">(29444, 7405508259270108728L ^ var1);
      var10001[3] = Qr<"q">(15374, 8096829305845180732L ^ var1);
      var10001[4] = Qr<"q">(3323, 5675491037333379530L ^ var1);
      var10001[5] = Qr<"q">(29444, 7405508259270108728L ^ var1);
      var10001[Qr<"q">(3609, 4369985499728861994L ^ var1)] = Qr<"q">(20613, 8894503815840073150L ^ var1);
      var10001[Qr<"q">(29213, 3769605585121683236L ^ var1)] = Qr<"q">(14204, 3031608208007389764L ^ var1);
      var10001[Qr<"q">(21791, 4589303052508397609L ^ var1)] = Qr<"q">(17539, 7933057748472533437L ^ var1);
      super(var10001, lf.znKtW);
      this.snpNi = new TreeMap<>();
   }

   static {
      long var11 = LVRos ^ 68197182066007L;
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
      String var17 = "┬í├Şq\u008a\u0090z\u0080\u00ad├Ś├Ż┬«├Ł_$├ż\u0097 \u0093┬í┬Ę0B\u0081\u009d\u008a/├äo┬│├Ä\u007f├č├ô|├Ż\u009f├ó├║I\u001cO┬▒├ź┬á├ë├Č├ź┬ę\u009d";
      int var19 = "┬í├Şq\u008a\u0090z\u0080\u00ad├Ś├Ż┬«├Ł_$├ż\u0097 \u0093┬í┬Ę0B\u0081\u009d\u008a/├äo┬│├Ä\u007f├č├ô|├Ż\u009f├ó├║I\u001cO┬▒├ź┬á├ë├Č├ź┬ę\u009d".length();
      char var16 = 16;
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = Ql(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            AQbcv = var20;
            ODNiP = new String[2];
            PqIzN = new HashMap(13);
            Cipher var0;
            var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[15];
            int var3 = 0;
            String var4 = "\u0017┬ę)├Ęe├é├Ęj\u0084C├É\u0013\u001akOg\u0018┬Ş├Ö$\u0000N+\u0002{┬▓├Ť┬┐T\u0088) u\"?F\u001f├ô├ç1\u0096H├╗s├úb├ú\b\u0000├ç\u008f├ő\u0000I├ó├ś├▒\u009a\u0014┬╣┬áB├ĺ\"├×Gy8GD├Ş\u008e0cC\u009ejx┬ú\u0099\u007fe├┐\u0000\u007f├×/├ś┬Żc├┤t\u008d7\b5┬«\u001dq\u009ao`├É├«";
            int var5 = "\u0017┬ę)├Ęe├é├Ęj\u0084C├É\u0013\u001akOg\u0018┬Ş├Ö$\u0000N+\u0002{┬▓├Ť┬┐T\u0088) u\"?F\u001f├ô├ç1\u0096H├╗s├úb├ú\b\u0000├ç\u008f├ő\u0000I├ó├ś├▒\u009a\u0014┬╣┬áB├ĺ\"├×Gy8GD├Ş\u008e0cC\u009ejx┬ú\u0099\u007fe├┐\u0000\u007f├×/├ś┬Żc├┤t\u008d7\b5┬«\u001dq\u009ao`├É├«"
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
                           eiaau = var6;
                           TxnZp = new Integer[15];
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "\u009d+├É\u0004├Ç\u0096├é\u0086\u0015e┬«\u0016\u0003┬Ż├Č┬╣";
                        var5 = "\u009d+├É\u0004├Ç\u0096├é\u0086\u0015e┬«\u0016\u0003┬Ż├Č┬╣".length();
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

   private static CallSite Qo(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Qn".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ch" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static MatchException Qk(MatchException var0) {
      return var0;
   }

   private static String Ql(byte[] var0) {
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

   private static String Qm(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 22915;
      if (ODNiP[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])oNUTQ.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               oNUTQ.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/ch", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = AQbcv[var5].getBytes("ISO-8859-1");
         ODNiP[var5] = Ql(((Cipher)var4[0]).doFinal(var9));
      }

      return ODNiP[var5];
   }

   private static Object Qn(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = Qm(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int Qp(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 18883;
      if (TxnZp[var3] == null) {
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
         long var5 = eiaau[var3];
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
         Object[] var9 = (Object[])PqIzN.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               PqIzN.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/ch", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         TxnZp[var3] = var15;
      }

      return TxnZp[var3];
   }

   private static int Qq(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = Qp(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite Qr(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Qq".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ch" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   @Override
   protected void NV(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/ch.LVRos J
      // 003: ldc2_w 72229586193725
      // 006: lxor
      // 007: lstore 2
      // 008: aload 0
      // 009: aload 1
      // 00a: invokespecial sixtwo/co.NV (Lsixtwo/lC;)V
      // 00d: getstatic sixtwo/lE.joxgd Lsixtwo/lj;
      // 010: ldc_w 7.0
      // 013: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 016: astore 5
      // 018: invokestatic sixtwo/ca.OX ()Z
      // 01b: invokestatic sixtwo/rD.dlM ()Lsixtwo/ii;
      // 01e: astore 6
      // 020: ldc_w 22.0
      // 023: fstore 7
      // 025: aconst_null
      // 026: astore 8
      // 028: istore 4
      // 02a: aload 0
      // 02b: getfield sixtwo/ch.snpNi Ljava/util/Map;
      // 02e: invokeinterface java/util/Map.values ()Ljava/util/Collection; 1
      // 033: invokeinterface java/util/Collection.iterator ()Ljava/util/Iterator; 1
      // 038: astore 9
      // 03a: aload 9
      // 03c: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 041: ifeq 106
      // 044: aload 9
      // 046: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 04b: checkcast sixtwo/mz
      // 04e: astore 10
      // 050: aload 10
      // 052: invokevirtual sixtwo/mz.right ()Ljava/lang/Object;
      // 055: checkcast sixtwo/mP
      // 058: invokeinterface sixtwo/mP.getFadeAnimation ()Lsixtwo/rk; 1
      // 05d: astore 11
      // 05f: aload 11
      // 061: invokevirtual sixtwo/rk.dhj ()F
      // 064: fconst_0
      // 065: iload 4
      // 067: ifne 096
      // 06a: fcmpl
      // 06b: iload 4
      // 06d: ifne 12a
      // 070: goto 077
      // 073: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 076: athrow
      // 077: ifne 08a
      // 07a: goto 081
      // 07d: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 080: athrow
      // 081: aload 10
      // 083: astore 8
      // 085: iload 4
      // 087: ifeq 03a
      // 08a: ldc_w -4.5
      // 08d: ldc_w 4.5
      // 090: aload 11
      // 092: invokevirtual sixtwo/rk.dhj ()F
      // 095: fmul
      // 096: fadd
      // 097: fstore 12
      // 099: aload 0
      // 09a: getfield sixtwo/ch.toIeR F
      // 09d: ldc_w 7.0
      // 0a0: aload 11
      // 0a2: invokevirtual sixtwo/rk.dhj ()F
      // 0a5: fmul
      // 0a6: fadd
      // 0a7: fstore 13
      // 0a9: aload 0
      // 0aa: getfield sixtwo/ch.QWaAn F
      // 0ad: fload 7
      // 0af: fadd
      // 0b0: fload 12
      // 0b2: fadd
      // 0b3: ldc_w 8.0
      // 0b6: ldc_w 18.0
      // 0b9: invokestatic sixtwo/jf.bAH (FF)F
      // 0bc: fadd
      // 0bd: fstore 14
      // 0bf: invokestatic sixtwo/jF.bHw ()[F
      // 0c2: bipush 3
      // 0c3: faload
      // 0c4: fstore 15
      // 0c6: fconst_1
      // 0c7: fconst_1
      // 0c8: fconst_1
      // 0c9: fload 15
      // 0cb: aload 11
      // 0cd: invokevirtual sixtwo/rk.dhj ()F
      // 0d0: fmul
      // 0d1: invokestatic sixtwo/jF.bHz (FFFF)V
      // 0d4: aload 1
      // 0d5: aload 10
      // 0d7: invokevirtual sixtwo/mz.left ()Ljava/lang/Object;
      // 0da: checkcast net/minecraft/class_1792
      // 0dd: fload 13
      // 0df: fload 14
      // 0e1: ldc_w 0.5
      // 0e4: invokevirtual sixtwo/lC.cdZ (Lnet/minecraft/class_1792;FFF)Lsixtwo/jv;
      // 0e7: invokevirtual sixtwo/jv.bGv ()Lsixtwo/jy;
      // 0ea: pop
      // 0eb: fconst_1
      // 0ec: fconst_1
      // 0ed: fconst_1
      // 0ee: fload 15
      // 0f0: invokestatic sixtwo/jF.bHz (FFFF)V
      // 0f3: fload 7
      // 0f5: ldc_w 18.0
      // 0f8: aload 11
      // 0fa: invokevirtual sixtwo/rk.dhj ()F
      // 0fd: fmul
      // 0fe: fadd
      // 0ff: fstore 7
      // 101: iload 4
      // 103: ifeq 03a
      // 106: ldc_w 22.0
      // 109: fstore 7
      // 10b: getstatic sixtwo/ch.zXCXX Lsixtwo/kJ;
      // 10e: aload 5
      // 110: invokevirtual sixtwo/kJ.bUa (Lsixtwo/lq;)V
      // 113: aload 0
      // 114: getfield sixtwo/ch.snpNi Ljava/util/Map;
      // 117: invokeinterface java/util/Map.values ()Ljava/util/Collection; 1
      // 11c: invokeinterface java/util/Collection.iterator ()Ljava/util/Iterator; 1
      // 121: astore 9
      // 123: aload 9
      // 125: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 12a: ifeq 2ef
      // 12d: aload 9
      // 12f: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 134: checkcast sixtwo/mz
      // 137: astore 10
      // 139: aload 10
      // 13b: invokevirtual sixtwo/mz.right ()Ljava/lang/Object;
      // 13e: checkcast sixtwo/mP
      // 141: invokeinterface sixtwo/mP.getFadeAnimation ()Lsixtwo/rk; 1
      // 146: astore 11
      // 148: aload 10
      // 14a: invokevirtual sixtwo/mz.right ()Ljava/lang/Object;
      // 14d: checkcast sixtwo/mP
      // 150: invokeinterface sixtwo/mP.getTimerAnimation ()Lsixtwo/Z; 1
      // 155: astore 12
      // 157: aload 11
      // 159: iload 4
      // 15b: ifne 312
      // 15e: iload 4
      // 160: ifne 18a
      // 163: goto 16a
      // 166: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 169: athrow
      // 16a: invokevirtual sixtwo/rk.dhj ()F
      // 16d: fconst_0
      // 16e: fcmpl
      // 16f: ifne 185
      // 172: goto 179
      // 175: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 178: athrow
      // 179: iload 4
      // 17b: ifeq 123
      // 17e: goto 185
      // 181: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 184: athrow
      // 185: aload 10
      // 187: invokevirtual sixtwo/mz.left ()Ljava/lang/Object;
      // 18a: checkcast net/minecraft/class_1792
      // 18d: invokevirtual net/minecraft/class_1792.method_7854 ()Lnet/minecraft/class_1799;
      // 190: astore 13
      // 192: sipush 29186
      // 195: ldc_w -4.5
      // 198: ldc_w 4.5
      // 19b: aload 11
      // 19d: invokevirtual sixtwo/rk.dhj ()F
      // 1a0: fmul
      // 1a1: fadd
      // 1a2: fstore 14
      // 1a4: ldc2_w 4117778939314192981
      // 1a7: lload 2
      // 1a8: lxor
      // 1a9: aload 6
      // 1ab: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 1ae: ldc_w 255.0
      // 1b1: aload 11
      // 1b3: invokevirtual sixtwo/rk.dhj ()F
      // 1b6: fmul
      // 1b7: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 1ba: astore 15
      // 1bc: aload 13
      // 1be: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 1c1: invokevirtual net/minecraft/class_1792.method_7876 ()Ljava/lang/String;
      // 1c4: invokestatic net/minecraft/class_2561.method_43471 (Ljava/lang/String;)Lnet/minecraft/class_5250;
      // 1c7: invokevirtual net/minecraft/class_5250.getString ()Ljava/lang/String;
      // 1ca: astore 16
      // 1cc: aload 0
      // 1cd: getfield sixtwo/ch.toIeR F
      // 1d0: ldc_w 13.0
      // 1d3: fadd
      // 1d4: ldc_w 7.0
      // 1d7: aload 11
      // 1d9: invokevirtual sixtwo/rk.dhj ()F
      // 1dc: fmul
      // 1dd: fadd
      // 1de: fstore 17
      // 1e0: aload 0
      // 1e1: getfield sixtwo/ch.QWaAn F
      // 1e4: fload 7
      // 1e6: fadd
      // 1e7: fload 14
      // 1e9: fadd
      // 1ea: aload 5
      // 1ec: invokevirtual sixtwo/lq.cat ()F
      // 1ef: ldc_w 18.0
      // 1f2: invokestatic sixtwo/jf.bAH (FF)F
      // 1f5: fadd
      // 1f6: fstore 18
      // 1f8: aload 1
      // 1f9: aload 5
      // 1fb: aload 16
      // 1fd: fload 17
      // 1ff: fload 18
      // 201: aload 15
      // 203: invokevirtual sixtwo/lC.cer (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 206: aload 13
      // 208: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 20b: invokestatic sixtwo/jc.bzh (Lnet/minecraft/class_1792;)I
      // 20e: sipush 17692
      // 211: ldc2_w 6183947686034564363
      // 214: lload 2
      // 215: lxor
      // 216: invokedynamic q (IJ)I bsm=sixtwo/ch.Qr (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 21b: idiv
      // 21c: istore 19
      // 21e: iload 19
      // 220: sipush 24731
      // 223: ldc2_w 406102226665652353
      // 226: lload 2
      // 227: lxor
      // 228: invokedynamic q (IJ)I bsm=sixtwo/ch.Qr (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 22d: idiv
      // 22e: istore 20
      // 230: iload 19
      // 232: sipush 31819
      // 235: ldc2_w 3100143968948903001
      // 238: lload 2
      // 239: lxor
      // 23a: invokedynamic q (IJ)I bsm=sixtwo/ch.Qr (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 23f: irem
      // 240: istore 21
      // 242: invokedynamic a (IJ)Ljava/lang/String; bsm=sixtwo/ch.Qo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 247: bipush 1
      // 248: anewarray 294
      // 24b: dup
      // 24c: bipush 0
      // 24d: iload 20
      // 24f: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 252: aastore
      // 253: invokestatic java/lang/String.format (Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
      // 256: astore 22
      // 258: sipush 17271
      // 25b: ldc2_w 4497665182782452513
      // 25e: lload 2
      // 25f: lxor
      // 260: invokedynamic a (IJ)Ljava/lang/String; bsm=sixtwo/ch.Qo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 265: bipush 2
      // 266: anewarray 294
      // 269: dup
      // 26a: bipush 0
      // 26b: iload 20
      // 26d: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 270: aastore
      // 271: dup
      // 272: bipush 1
      // 273: iload 21
      // 275: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 278: aastore
      // 279: invokestatic java/lang/String.format (Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
      // 27c: astore 23
      // 27e: aload 5
      // 280: aload 22
      // 282: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 285: fstore 24
      // 287: aload 5
      // 289: aload 23
      // 28b: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 28e: fstore 25
      // 290: aload 0
      // 291: getfield sixtwo/ch.toIeR F
      // 294: aload 0
      // 295: getfield sixtwo/ch.jTsqG F
      // 298: fadd
      // 299: ldc_w 7.0
      // 29c: aload 11
      // 29e: invokevirtual sixtwo/rk.dhj ()F
      // 2a1: fmul
      // 2a2: fsub
      // 2a3: fstore 26
      // 2a5: aload 1
      // 2a6: aload 5
      // 2a8: aload 22
      // 2aa: fload 26
      // 2ac: fload 25
      // 2ae: fsub
      // 2af: fload 18
      // 2b1: aload 15
      // 2b3: invokevirtual sixtwo/lC.cer (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 2b6: aload 12
      // 2b8: bipush 1
      // 2b9: aload 15
      // 2bb: invokevirtual sixtwo/Z.kS (ZLsixtwo/mG;)Lsixtwo/Z;
      // 2be: pop
      // 2bf: aload 12
      // 2c1: iload 21
      // 2c3: invokevirtual sixtwo/Z.kO (I)V
      // 2c6: aload 12
      // 2c8: fload 26
      // 2ca: fload 25
      // 2cc: fsub
      // 2cd: fload 24
      // 2cf: fadd
      // 2d0: fload 18
      // 2d2: invokevirtual sixtwo/Z.sW (FF)Lsixtwo/az;
      // 2d5: pop
      // 2d6: aload 12
      // 2d8: aload 1
      // 2d9: invokevirtual sixtwo/Z.su (Lsixtwo/lC;)V
      // 2dc: fload 7
      // 2de: ldc_w 18.0
      // 2e1: aload 11
      // 2e3: invokevirtual sixtwo/rk.dhj ()F
      // 2e6: fmul
      // 2e7: fadd
      // 2e8: fstore 7
      // 2ea: iload 4
      // 2ec: ifeq 123
      // 2ef: getstatic sixtwo/ch.zXCXX Lsixtwo/kJ;
      // 2f2: invokevirtual sixtwo/kJ.endBatch ()V
      // 2f5: aload 8
      // 2f7: iload 4
      // 2f9: ifne 312
      // 2fc: ifnull 32e
      // 2ff: goto 306
      // 302: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 305: athrow
      // 306: aload 8
      // 308: invokevirtual sixtwo/mz.left ()Ljava/lang/Object;
      // 30b: goto 312
      // 30e: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 311: athrow
      // 312: checkcast net/minecraft/class_1792
      // 315: invokevirtual net/minecraft/class_1792.method_7876 ()Ljava/lang/String;
      // 318: invokestatic net/minecraft/class_2561.method_43471 (Ljava/lang/String;)Lnet/minecraft/class_5250;
      // 31b: invokevirtual net/minecraft/class_5250.getString ()Ljava/lang/String;
      // 31e: astore 9
      // 320: aload 0
      // 321: getfield sixtwo/ch.snpNi Ljava/util/Map;
      // 324: aload 9
      // 326: aload 8
      // 328: invokeinterface java/util/Map.remove (Ljava/lang/Object;Ljava/lang/Object;)Z 3
      // 32d: pop
      // 32e: return
   }

   @Override
   public void LX(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/ch.LVRos J
      // 003: ldc2_w 93504270639869
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/ca.OX ()Z
      // 00b: aload 0
      // 00c: ldc 92.0
      // 00e: putfield sixtwo/ch.jTsqG F
      // 011: istore 4
      // 013: aload 0
      // 014: ldc 20.0
      // 016: putfield sixtwo/ch.Xtjvx F
      // 019: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 01c: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 01f: invokevirtual net/minecraft/class_746.method_7357 ()Lnet/minecraft/class_1796;
      // 022: checkcast mixin/accessors/ItemCooldownsAccessor
      // 025: invokeinterface mixin/accessors/ItemCooldownsAccessor.getCooldowns ()Ljava/util/Map; 1
      // 02a: astore 5
      // 02c: aload 5
      // 02e: invokeinterface java/util/Map.entrySet ()Ljava/util/Set; 1
      // 033: invokeinterface java/util/Set.iterator ()Ljava/util/Iterator; 1
      // 038: astore 6
      // 03a: aload 6
      // 03c: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 041: ifeq 152
      // 044: aload 6
      // 046: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 04b: checkcast java/util/Map$Entry
      // 04e: astore 7
      // 050: aload 7
      // 052: invokeinterface java/util/Map$Entry.getKey ()Ljava/lang/Object; 1
      // 057: checkcast net/minecraft/class_2960
      // 05a: astore 8
      // 05c: aload 7
      // 05e: invokeinterface java/util/Map$Entry.getValue ()Ljava/lang/Object; 1
      // 063: astore 9
      // 065: getstatic net/minecraft/class_7923.field_41178 Lnet/minecraft/class_7922;
      // 068: aload 8
      // 06a: invokeinterface net/minecraft/class_7922.method_17966 (Lnet/minecraft/class_2960;)Ljava/util/Optional; 2
      // 06f: aconst_null
      // 070: invokevirtual java/util/Optional.orElse (Ljava/lang/Object;)Ljava/lang/Object;
      // 073: checkcast net/minecraft/class_1792
      // 076: astore 10
      // 078: aload 10
      // 07a: iload 4
      // 07c: ifne 19d
      // 07f: iload 4
      // 081: ifne 0a3
      // 084: goto 08b
      // 087: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08a: athrow
      // 08b: ifnonnull 0a1
      // 08e: goto 095
      // 091: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 094: athrow
      // 095: iload 4
      // 097: ifeq 03a
      // 09a: goto 0a1
      // 09d: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a0: athrow
      // 0a1: aload 10
      // 0a3: invokevirtual net/minecraft/class_1792.method_7876 ()Ljava/lang/String;
      // 0a6: invokestatic net/minecraft/class_2561.method_43471 (Ljava/lang/String;)Lnet/minecraft/class_5250;
      // 0a9: invokevirtual net/minecraft/class_5250.getString ()Ljava/lang/String;
      // 0ac: astore 11
      // 0ae: aload 11
      // 0b0: iload 4
      // 0b2: ifne 0d0
      // 0b5: invokevirtual java/lang/String.isBlank ()Z
      // 0b8: ifeq 0ce
      // 0bb: goto 0c2
      // 0be: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c1: athrow
      // 0c2: iload 4
      // 0c4: ifeq 03a
      // 0c7: goto 0ce
      // 0ca: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0cd: athrow
      // 0ce: aload 9
      // 0d0: checkcast sixtwo/mP
      // 0d3: astore 12
      // 0d5: aload 0
      // 0d6: getfield sixtwo/ch.snpNi Ljava/util/Map;
      // 0d9: aload 11
      // 0db: iload 4
      // 0dd: ifne 140
      // 0e0: invokeinterface java/util/Map.containsKey (Ljava/lang/Object;)Z 2
      // 0e5: ifeq 133
      // 0e8: goto 0ef
      // 0eb: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ee: athrow
      // 0ef: aload 0
      // 0f0: getfield sixtwo/ch.snpNi Ljava/util/Map;
      // 0f3: aload 11
      // 0f5: aload 10
      // 0f7: aload 12
      // 0f9: invokestatic sixtwo/mz.of (Ljava/lang/Object;Ljava/lang/Object;)Lsixtwo/mz;
      // 0fc: invokeinterface java/util/Map.replace (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 101: pop
      // 102: aload 12
      // 104: invokeinterface sixtwo/mP.getFadeAnimation ()Lsixtwo/rk; 1
      // 109: astore 13
      // 10b: aload 13
      // 10d: iload 4
      // 10f: ifne 12a
      // 112: invokevirtual sixtwo/rk.dhj ()F
      // 115: fconst_0
      // 116: fcmpl
      // 117: ifne 12e
      // 11a: goto 121
      // 11d: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 120: athrow
      // 121: aload 13
      // 123: goto 12a
      // 126: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 129: athrow
      // 12a: fconst_1
      // 12b: invokevirtual sixtwo/rk.dhe (F)V
      // 12e: iload 4
      // 130: ifeq 14d
      // 133: aload 0
      // 134: getfield sixtwo/ch.snpNi Ljava/util/Map;
      // 137: aload 11
      // 139: goto 140
      // 13c: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13f: athrow
      // 140: aload 10
      // 142: aload 12
      // 144: invokestatic sixtwo/mz.of (Ljava/lang/Object;Ljava/lang/Object;)Lsixtwo/mz;
      // 147: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 14c: pop
      // 14d: iload 4
      // 14f: ifeq 03a
      // 152: aload 0
      // 153: getfield sixtwo/ch.snpNi Ljava/util/Map;
      // 156: iload 4
      // 158: ifne 180
      // 15b: invokeinterface java/util/Map.isEmpty ()Z 1
      // 160: ifne 17c
      // 163: goto 16a
      // 166: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 169: athrow
      // 16a: aload 0
      // 16b: dup
      // 16c: getfield sixtwo/ch.Xtjvx F
      // 16f: ldc 5.0
      // 171: fadd
      // 172: putfield sixtwo/ch.Xtjvx F
      // 175: goto 17c
      // 178: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 17b: athrow
      // 17c: aload 0
      // 17d: getfield sixtwo/ch.snpNi Ljava/util/Map;
      // 180: invokeinterface java/util/Map.values ()Ljava/util/Collection; 1
      // 185: invokeinterface java/util/Collection.iterator ()Ljava/util/Iterator; 1
      // 18a: astore 6
      // 18c: aload 6
      // 18e: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 193: ifeq 227
      // 196: aload 6
      // 198: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 19d: checkcast sixtwo/mz
      // 1a0: astore 7
      // 1a2: aload 7
      // 1a4: invokevirtual sixtwo/mz.right ()Ljava/lang/Object;
      // 1a7: checkcast sixtwo/mP
      // 1aa: invokeinterface sixtwo/mP.getFadeAnimation ()Lsixtwo/rk; 1
      // 1af: astore 8
      // 1b1: aload 7
      // 1b3: invokevirtual sixtwo/mz.left ()Ljava/lang/Object;
      // 1b6: checkcast net/minecraft/class_1792
      // 1b9: astore 9
      // 1bb: getstatic net/minecraft/class_7923.field_41178 Lnet/minecraft/class_7922;
      // 1be: aload 9
      // 1c0: invokeinterface net/minecraft/class_7922.method_10221 (Ljava/lang/Object;)Lnet/minecraft/class_2960; 2
      // 1c5: astore 10
      // 1c7: aload 8
      // 1c9: aload 5
      // 1cb: aload 10
      // 1cd: invokeinterface java/util/Map.containsKey (Ljava/lang/Object;)Z 2
      // 1d2: invokevirtual sixtwo/rk.dhc (Z)V
      // 1d5: aload 8
      // 1d7: getstatic sixtwo/rj.XzDkv Lsixtwo/rj;
      // 1da: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 1dd: pop
      // 1de: aload 0
      // 1df: getstatic sixtwo/lE.joxgd Lsixtwo/lj;
      // 1e2: ldc_w 7.0
      // 1e5: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 1e8: aload 9
      // 1ea: invokevirtual net/minecraft/class_1792.method_7876 ()Ljava/lang/String;
      // 1ed: invokestatic net/minecraft/class_2561.method_43471 (Ljava/lang/String;)Lnet/minecraft/class_5250;
      // 1f0: invokevirtual net/minecraft/class_5250.getString ()Ljava/lang/String;
      // 1f3: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 1f6: ldc_w 60.0
      // 1f9: fadd
      // 1fa: aload 0
      // 1fb: getfield sixtwo/ch.jTsqG F
      // 1fe: invokestatic java/lang/Math.max (FF)F
      // 201: putfield sixtwo/ch.jTsqG F
      // 204: aload 0
      // 205: dup
      // 206: getfield sixtwo/ch.Xtjvx F
      // 209: ldc_w 18.0
      // 20c: aload 8
      // 20e: invokevirtual sixtwo/rk.dhj ()F
      // 211: fmul
      // 212: fadd
      // 213: putfield sixtwo/ch.Xtjvx F
      // 216: iload 4
      // 218: ifne 22c
      // 21b: iload 4
      // 21d: ifeq 18c
      // 220: goto 227
      // 223: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 226: athrow
      // 227: aload 0
      // 228: aload 1
      // 229: invokespecial sixtwo/co.LX (Lsixtwo/lC;)V
      // 22c: return
   }

   @Override
   public boolean Om() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ch.LVRos J
      // 03: ldc2_w 72829027715095
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/ca.OY ()Z
      // 0b: istore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/ch.snpNi Ljava/util/Map;
      // 10: invokeinterface java/util/Map.isEmpty ()Z 1
      // 15: iload 3
      // 16: ifeq 24
      // 19: ifne 27
      // 1c: goto 23
      // 1f: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: bipush 1
      // 24: goto 28
      // 27: bipush 0
      // 28: istore 4
      // 2a: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2d: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 30: instanceof net/minecraft/class_408
      // 33: istore 5
      // 35: iload 4
      // 37: iload 3
      // 38: ifeq 5d
      // 3b: ifne 5c
      // 3e: goto 45
      // 41: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: iload 5
      // 47: iload 3
      // 48: ifeq 5d
      // 4b: goto 52
      // 4e: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51: athrow
      // 52: ifeq 60
      // 55: goto 5c
      // 58: invokestatic sixtwo/ch.Qk (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5b: athrow
      // 5c: bipush 1
      // 5d: goto 61
      // 60: bipush 0
      // 61: ireturn
   }
}
