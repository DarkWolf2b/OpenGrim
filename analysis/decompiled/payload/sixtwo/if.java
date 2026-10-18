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

public class if implements rp {
   private float oiSwF;
   private float KLUBM;
   private static final long duldL = gb.aYR(1112118321749536250L, -4631589397090665998L, MethodHandles.lookup().lookupClass()).a(155657763135764L);
   private static final String[] byyuw;
   private static final String[] GeaKN;
   private static final Map rJnaA = new HashMap(13);
   private static final long[] waMdm;
   private static final Integer[] GAyVU;
   private static final Map lKMAG;

   static {
      long var11 = duldL ^ 83083579722568L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[6];
      int var18 = 0;
      String var17 = "\u0093ÇKW\u009a\"ñ·,ll\u0011\u0010Î\u001d\u008e£Â5ôWýdM\u0018»\u001f\u0001\u0093Ô\u009a6R/\u0086\u00944\u00ad\u0099ú\u0090\u009a\u008aðáÐË¦\u0081\u0010;;Òw\u00129<\u0002]\u0000\u008f¢\u009d\u0091Å«\u0010·GN\u0000\u0085¬SP\u0082\u0019¼øT¯\u009b\u0018";
      int var19 = "\u0093ÇKW\u009a\"ñ·,ll\u0011\u0010Î\u001d\u008e£Â5ôWýdM\u0018»\u001f\u0001\u0093Ô\u009a6R/\u0086\u00944\u00ad\u0099ú\u0090\u009a\u008aðáÐË¦\u0081\u0010;;Òw\u00129<\u0002]\u0000\u008f¢\u009d\u0091Å«\u0010·GN\u0000\u0085¬SP\u0082\u0019¼øT¯\u009b\u0018"
         .length();
      char var16 = 24;
      int var23 = -1;

      label45:
      while (true) {
         String var24 = var17.substring(++var23, var23 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var24.getBytes("ISO-8859-1"));
            String var33 = bih(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var33;
                  if ((var23 += var16) >= var19) {
                     byyuw = var20;
                     GeaKN = new String[6];
                     lKMAG = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[2];
                     int var3 = 0;
                     String var4 = "¹ý]u×\u00878øç\u0007ÈiÝA\u0090½";
                     int var5 = "¹ý]u×\u00878øç\u0007ÈiÝA\u0090½".length();
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

                     waMdm = var6;
                     GAyVU = new Integer[2];
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

                  var17 = "ªk´¨{ÔÈ8\u001b<ª\u0095vÌ+\u001e+ö÷\b\u0088Jû¤\u009bY\u0094ìq\u0093kW\u001a\u0097\u001eÍÚÑHé ÖàÂ/\u000b¾\u009e\u008eª\u0017¿\u001föìµ¾\u00185è\u001b¤ò«Æ\u009c¥:³Ø¼@¿";
                  var19 = "ªk´¨{ÔÈ8\u001b<ª\u0095vÌ+\u001e+ö÷\b\u0088Jû¤\u009bY\u0094ìq\u0093kW\u001a\u0097\u001eÍÚÑHé ÖàÂ/\u000b¾\u009e\u008eª\u0017¿\u001föìµ¾\u00185è\u001b¤ò«Æ\u009c¥:³Ø¼@¿"
                     .length();
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
      // 00: getstatic sixtwo/if.duldL J
      // 03: ldc2_w 130825824504697
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ie.bhR ()Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 1
      // 0e: aload 4
      // 10: ifnonnull 25
      // 13: aload 0
      // 14: if_acmpne 24
      // 17: goto 1e
      // 1a: invokestatic sixtwo/if.big (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: bipush 1
      // 1f: ireturn
      // 20: invokestatic sixtwo/if.big (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aload 1
      // 25: aload 4
      // 27: ifnonnull 3e
      // 2a: instanceof sixtwo/if
      // 2d: ifne 3d
      // 30: goto 37
      // 33: invokestatic sixtwo/if.big (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: bipush 0
      // 38: ireturn
      // 39: invokestatic sixtwo/if.big (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: aload 1
      // 3e: checkcast sixtwo/if
      // 41: astore 5
      // 43: aload 5
      // 45: aload 0
      // 46: invokevirtual sixtwo/if.bif (Ljava/lang/Object;)Z
      // 49: aload 4
      // 4b: ifnonnull 6a
      // 4e: ifne 5e
      // 51: goto 58
      // 54: invokestatic sixtwo/if.big (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 57: athrow
      // 58: bipush 0
      // 59: ireturn
      // 5a: invokestatic sixtwo/if.big (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5d: athrow
      // 5e: aload 0
      // 5f: invokevirtual sixtwo/if.bib ()F
      // 62: aload 5
      // 64: invokevirtual sixtwo/if.bib ()F
      // 67: invokestatic java/lang/Float.compare (FF)I
      // 6a: aload 4
      // 6c: ifnonnull 8b
      // 6f: ifeq 7f
      // 72: goto 79
      // 75: invokestatic sixtwo/if.big (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 78: athrow
      // 79: bipush 0
      // 7a: ireturn
      // 7b: invokestatic sixtwo/if.big (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7e: athrow
      // 7f: aload 0
      // 80: invokevirtual sixtwo/if.bic ()F
      // 83: aload 5
      // 85: invokevirtual sixtwo/if.bic ()F
      // 88: invokestatic java/lang/Float.compare (FF)I
      // 8b: aload 4
      // 8d: ifnonnull a1
      // 90: ifeq a0
      // 93: goto 9a
      // 96: invokestatic sixtwo/if.big (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 99: athrow
      // 9a: bipush 0
      // 9b: ireturn
      // 9c: invokestatic sixtwo/if.big (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9f: athrow
      // a0: bipush 1
      // a1: ireturn
   }

   @Override
   public String toString() {
      long var1 = duldL ^ 53548275022390L;
      return bik<"q">(11286, 5796334283870112299L ^ var1) + this.bib() + bik<"q">(14658, 1223607950709727098L ^ var1) + this.bic() + ")";
   }

   @Override
   public int hashCode() {
      long var1 = duldL ^ 75990282406067L;
      int var3 = bin<"w">(27259, 1184641999678325991L ^ var1);
      int var4 = 1;
      var4 = var4 * bin<"w">(8592, 5020161047655223053L ^ var1) + Float.floatToIntBits(this.bib());
      return var4 * bin<"w">(8592, 5020161047655223053L ^ var1) + Float.floatToIntBits(this.bic());
   }

   private static MatchException big(MatchException var0) {
      return var0;
   }

   private static CallSite bin(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bim".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/if" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public float bic() {
      return this.KLUBM;
   }

   @Override
   public void fromJson(JsonObject var1) {
      long var2 = duldL ^ 49410533270617L;
      this.oiSwF = this.readFloat(var1, bik<"q">(4945, 7236271958924897029L ^ var2));
      this.KLUBM = this.readFloat(var1, bik<"q">(29113, 6196994142093265386L ^ var2));
   }

   @Override
   public JsonObject toJson() {
      long var1 = duldL ^ 56053836831442L;
      JsonObject var3 = new JsonObject();
      var3.addProperty(bik<"q">(21211, 723958665235862533L ^ var1), this.oiSwF);
      var3.addProperty(bik<"q">(13743, 2656732127289340786L ^ var1), this.KLUBM);
      return var3;
   }

   public float bib() {
      return this.oiSwF;
   }

   public static if bia(float var0, float var1) {
      return new if().bid(var0).bie(var1);
   }

   private static String bii(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 21877;
      if (GeaKN[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])rJnaA.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               rJnaA.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/if", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = byyuw[var5].getBytes("ISO-8859-1");
         GeaKN[var5] = bih(((Cipher)var4[0]).doFinal(var9));
      }

      return GeaKN[var5];
   }

   private static Object bij(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bii(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   protected boolean bif(Object var1) {
      return var1 instanceof if;
   }

   private static int bim(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bil(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite bik(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bij".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/if" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public if bie(float var1) {
      this.KLUBM = var1;
      return this;
   }

   private static int bil(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 28500;
      if (GAyVU[var3] == null) {
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
         long var5 = waMdm[var3];
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
         Object[] var9 = (Object[])lKMAG.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               lKMAG.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/if", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         GAyVU[var3] = var15;
      }

      return GAyVU[var3];
   }

   public if bid(float var1) {
      this.oiSwF = var1;
      return this;
   }

   private static String bih(byte[] var0) {
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
