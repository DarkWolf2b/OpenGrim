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

public class cx extends cG {
   private boolean rDHjA;
   private static final long ZzviL = gb.aYR(617550604232887679L, -5656378775418170534L, MethodHandles.lookup().lookupClass()).a(223291670411508L);
   private static final String[] klIkv;
   private static final String[] bkfAf;
   private static final Map LSeue = new HashMap(13);

   public cx(mr var1) {
      super(var1);
   }

   public cx(iS var1, mr var2) {
      this(var2);
      this.Vg(var1);
   }

   static {
      long var0 = ZzviL ^ 11499158449864L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[8];
      int var7 = 0;
      String var6 = "-\u001a«¥\u009e$¢=)(Ý\t{£[\u0089 HErÉÌ|\u0084ÏuøÏ\u0005\u0006§æ\u0016NqU.°-DðÒ¤??\u009c\u0019eO\u0018è99Tu?dQyÇ4m/G«SNí=¾HÀø»\u0010úß<Þ\u0011=yô!\u009fkÒüe/\u001e\u0010~«s× ©Ï,=êÉ!u÷õ¦\u0010B¾\u0013\u0097rW\u0088fU92<Ø]\u009d$";
      int var8 = "-\u001a«¥\u009e$¢=)(Ý\t{£[\u0089 HErÉÌ|\u0084ÏuøÏ\u0005\u0006§æ\u0016NqU.°-DðÒ¤??\u009c\u0019eO\u0018è99Tu?dQyÇ4m/G«SNí=¾HÀø»\u0010úß<Þ\u0011=yô!\u009fkÒüe/\u001e\u0010~«s× ©Ï,=êÉ!u÷õ¦\u0010B¾\u0013\u0097rW\u0088fU92<Ø]\u009d$"
         .length();
      char var5 = 16;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = Uj(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     klIkv = var9;
                     bkfAf = new String[8];
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

                  var6 = "µp{¤\r\u0017ä\u000e\u008d£c\u008c¢BÍÛ\u0010\u0093>\b\u008f\u0087\u008b@ü\u0085ðþy9ä\u009bÇ";
                  var8 = "µp{¤\r\u0017ä\u000e\u008d£c\u008c¢BÍÛ\u0010\u0093>\b\u008f\u0087\u008b@ü\u0085ðþy9ä\u009bÇ".length();
                  var5 = 16;
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   public cx TW(boolean var1) {
      super.Ub(var1);
      return this;
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
      // 00: getstatic sixtwo/cx.ZzviL J
      // 03: ldc2_w 68468231693108
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vt ()Z
      // 0b: istore 4
      // 0d: aload 1
      // 0e: invokevirtual com/google/gson/JsonElement.isJsonPrimitive ()Z
      // 11: iload 4
      // 13: ifeq 60
      // 16: ifeq 4b
      // 19: goto 20
      // 1c: invokestatic sixtwo/cx.Ui (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 1
      // 21: invokevirtual com/google/gson/JsonElement.getAsJsonPrimitive ()Lcom/google/gson/JsonPrimitive;
      // 24: invokevirtual com/google/gson/JsonPrimitive.isBoolean ()Z
      // 27: iload 4
      // 29: ifeq 60
      // 2c: goto 33
      // 2f: invokestatic sixtwo/cx.Ui (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 32: athrow
      // 33: ifeq 4b
      // 36: goto 3d
      // 39: invokestatic sixtwo/cx.Ui (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: aload 0
      // 3e: aload 1
      // 3f: invokevirtual com/google/gson/JsonElement.getAsBoolean ()Z
      // 42: invokevirtual sixtwo/cx.TT (Z)Lsixtwo/cx;
      // 45: pop
      // 46: return
      // 47: invokestatic sixtwo/cx.Ui (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4a: athrow
      // 4b: aload 0
      // 4c: aload 1
      // 4d: invokespecial sixtwo/cG.SS (Lcom/google/gson/JsonElement;)V
      // 50: aload 1
      // 51: iload 4
      // 53: ifeq 65
      // 56: invokevirtual com/google/gson/JsonElement.isJsonObject ()Z
      // 59: goto 60
      // 5c: invokestatic sixtwo/cx.Ui (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5f: athrow
      // 60: ifne 64
      // 63: return
      // 64: aload 1
      // 65: invokevirtual com/google/gson/JsonElement.getAsJsonObject ()Lcom/google/gson/JsonObject;
      // 68: astore 5
      // 6a: aload 5
      // 6c: sipush 4600
      // 6f: ldc2_w 5459649461606322431
      // 72: lload 2
      // 73: lxor
      // 74: invokedynamic a (IJ)Ljava/lang/String; bsm=sixtwo/cx.Um (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 79: invokevirtual com/google/gson/JsonObject.has (Ljava/lang/String;)Z
      // 7c: iload 4
      // 7e: ifeq ca
      // 81: ifeq b1
      // 84: goto 8b
      // 87: invokestatic sixtwo/cx.Ui (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8a: athrow
      // 8b: aload 0
      // 8c: aload 5
      // 8e: sipush 8421
      // 91: ldc2_w 9144851149669638631
      // 94: lload 2
      // 95: lxor
      // 96: invokedynamic a (IJ)Ljava/lang/String; bsm=sixtwo/cx.Um (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 9b: invokevirtual com/google/gson/JsonObject.get (Ljava/lang/String;)Lcom/google/gson/JsonElement;
      // 9e: invokevirtual com/google/gson/JsonElement.getAsBoolean ()Z
      // a1: invokevirtual sixtwo/cx.TT (Z)Lsixtwo/cx;
      // a4: pop
      // a5: iload 4
      // a7: ifne ee
      // aa: goto b1
      // ad: invokestatic sixtwo/cx.Ui (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b0: athrow
      // b1: aload 5
      // b3: sipush 28507
      // b6: ldc2_w 4810814609095814744
      // b9: lload 2
      // ba: lxor
      // bb: invokedynamic a (IJ)Ljava/lang/String; bsm=sixtwo/cx.Um (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // c0: invokevirtual com/google/gson/JsonObject.has (Ljava/lang/String;)Z
      // c3: goto ca
      // c6: invokestatic sixtwo/cx.Ui (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c9: athrow
      // ca: ifeq ee
      // cd: aload 0
      // ce: aload 5
      // d0: sipush 17028
      // d3: ldc2_w 2853454483762824064
      // d6: lload 2
      // d7: lxor
      // d8: invokedynamic a (IJ)Ljava/lang/String; bsm=sixtwo/cx.Um (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // dd: invokevirtual com/google/gson/JsonObject.get (Ljava/lang/String;)Lcom/google/gson/JsonElement;
      // e0: invokevirtual com/google/gson/JsonElement.getAsBoolean ()Z
      // e3: invokevirtual sixtwo/cx.TT (Z)Lsixtwo/cx;
      // e6: pop
      // e7: goto ee
      // ea: invokestatic sixtwo/cx.Ui (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ed: athrow
      // ee: return
   }

   @Override
   public void SR(Map<String, Object> var1) {
      long var2 = ZzviL ^ 120104645983896L;
      boolean var10000 = cB.Vu();
      JsonObject var5 = new JsonObject();
      var5.addProperty(Um<"a">(8421, 9144940379588738123L ^ var2), this.rDHjA);
      boolean var4 = var10000;

      try {
         var5.addProperty(Um<"a">(20886, 756330734218857786L ^ var2), this.Wg().coh());
         var5.addProperty(Um<"a">(27600, 810829610774656889L ^ var2), this.Wi().coh());
         var5.addProperty(Um<"a">(29235, 2597154777338506905L ^ var2), this.Wj());
         var5.addProperty(Um<"a">(29083, 3886226842207382838L ^ var2), this.Wk());
         var1.put(Arrays.toString(this.NwlSF), var5);
         if (var4) {
            iS.bwK("qfKgSb");
         }
      } catch (MatchException var6) {
         throw Ui(var6);
      }
   }

   public cx TY(int var1) {
      super.Uc(var1);
      return this;
   }

   public cx TZ(mG var1) {
      super.Ue(var1);
      return this;
   }

   public cx Ua(int var1) {
      super.Ud(var1);
      return this;
   }

   private static CallSite Um(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Ul".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cx" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String Uj(byte[] var0) {
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

   private static String Uk(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 10671;
      if (bkfAf[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])LSeue.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               LSeue.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/cx", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = klIkv[var5].getBytes("ISO-8859-1");
         bkfAf[var5] = Uj(((Cipher)var4[0]).doFinal(var9));
      }

      return bkfAf[var5];
   }

   public cx TV(boolean var1) {
      super.Ug(var1);
      return this;
   }

   private static Object Ul(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = Uk(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public cx TS() {
      long var1 = ZzviL ^ 53302197922316L;
      boolean var3 = cB.Vu();

      cx var10000;
      try {
         var10000 = this;
         if (var3) {
            return this.TT(this.rDHjA);
         }

         if (!this.rDHjA) {
            return this.TT(true);
         }
      } catch (MatchException var4) {
         throw Ui(var4);
      }

      return var10000.TT(false);
   }

   private static MatchException Ui(MatchException var0) {
      return var0;
   }

   public cx TX(mG var1) {
      super.Uf(var1);
      return this;
   }

   public boolean TR() {
      return this.rDHjA;
   }

   public cx TT(boolean param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cx.ZzviL J
      // 03: ldc2_w 71966086120682
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vt ()Z
      // 0b: istore 4
      // 0d: aload 0
      // 0e: iload 4
      // 10: ifeq 31
      // 13: getfield sixtwo/cx.rDHjA Z
      // 16: iload 1
      // 17: if_icmpne 27
      // 1a: goto 21
      // 1d: invokestatic sixtwo/cx.Ui (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 0
      // 22: areturn
      // 23: invokestatic sixtwo/cx.Ui (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 0
      // 28: iload 1
      // 29: putfield sixtwo/cx.rDHjA Z
      // 2c: aload 0
      // 2d: invokevirtual sixtwo/cx.Vk ()V
      // 30: aload 0
      // 31: areturn
   }

   public cx TU(boolean var1) {
      super.Uh(var1);
      return this;
   }
}
