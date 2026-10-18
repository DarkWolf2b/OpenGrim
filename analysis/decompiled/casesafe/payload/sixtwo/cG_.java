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

public class cG extends cB {
   private mG HYLiK;
   private mG mbUpG;
   private boolean nfBAC;
   private boolean xPYck;
   private boolean CDdOA = false;
   private static boolean XqhhV;
   private static final long QtQoN = gb.aYR(-6159334118562630845L, -6107607831421606237L, MethodHandles.lookup().lookupClass()).a(54622285838946L);
   private static final String[] TatDI;
   private static final String[] zfSXE;
   private static final Map GtaeP = new HashMap(13);

   public cG(mr var1) {
      super(var1);
      this.HYLiK = mG.hoGuU;
      this.mbUpG = mG.hoGuU;
      this.nfBAC = false;
   }

   public cG(iS var1, mr var2) {
      this(var2);
      this.Vg(var1);
   }

   static {
      Wm(false);
      long var0 = QtQoN ^ 77473402780386L;
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
      String var6 = "\u000e┬ąh┬┤├Öe~├şm\u001c>\u0006┬Ą\u0085┬á├č&\t├ąL├│Y^$\u0093{\u0015├Ĺ\u0001fm├É ┬ż├ô├Ço\u0097┬┐\u0014N\u001bZDM├ő=/9\r┬ź├Ł/d┬ą\u0017r\u008b\u009a┬Żt>z├ž┬ź\u0010MR├«)\u0096zC\u009bK├»\u0003┬ż├Ę\u001dL┬Ę\u0018├ČA\u0090N┬Ęp\u0080,\u0001├ź\u0000┬╗\u0003├Ż├ŞA\u00878├âSJ\u0091}┬Â F┬ČO=\u009d├É┬▓├Ą├ą 6├«Tcpe┬ą0├Ö6┬╣├Ě\u0083├â├Ü┬╝\u0086A\u0092aC\u0093\u0010┬¬0┬╗M<├íC├Ç\u0011[\u0010├┤Vy\u009e├Č";
      int var8 = "\u000e┬ąh┬┤├Öe~├şm\u001c>\u0006┬Ą\u0085┬á├č&\t├ąL├│Y^$\u0093{\u0015├Ĺ\u0001fm├É ┬ż├ô├Ço\u0097┬┐\u0014N\u001bZDM├ő=/9\r┬ź├Ł/d┬ą\u0017r\u008b\u009a┬Żt>z├ž┬ź\u0010MR├«)\u0096zC\u009bK├»\u0003┬ż├Ę\u001dL┬Ę\u0018├ČA\u0090N┬Ęp\u0080,\u0001├ź\u0000┬╗\u0003├Ż├ŞA\u00878├âSJ\u0091}┬Â F┬ČO=\u009d├É┬▓├Ą├ą 6├«Tcpe┬ą0├Ö6┬╣├Ě\u0083├â├Ü┬╝\u0086A\u0092aC\u0093\u0010┬¬0┬╗M<├íC├Ç\u0011[\u0010├┤Vy\u009e├Č"
         .length();
      char var5 = ' ';
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = Wq(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     TatDI = var9;
                     zfSXE = new String[8];
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

                  var6 = "\u0092├ź├×zqb├źQ├│\u007f├ĺ├Ž├Ő\u0092\u0004* uD├Ł1N├Ž\u001c\t├É2┬Ž┬¬├Ć┬ú├×├ü├Ž\u0013├ú\u0094┬║\\\u0082b|├░├á\u0083\u001b├é├Ě├Ł";
                  var8 = "\u0092├ź├×zqb├źQ├│\u007f├ĺ├Ž├Ő\u0092\u0004* uD├Ł1N├Ž\u001c\t├É2┬Ž┬¬├Ć┬ú├×├ü├Ž\u0013├ú\u0094┬║\\\u0082b|├░├á\u0083\u001b├é├Ě├Ł".length();
                  var5 = 16;
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   public mG Wf() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cG.QtQoN J
      // 03: ldc2_w 100893521603222
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/cB.Vt ()Z
      // 0b: istore 3
      // 0c: aload 0
      // 0d: iload 3
      // 0e: ifeq 29
      // 11: getfield sixtwo/cG.xPYck Z
      // 14: ifeq 28
      // 17: goto 1e
      // 1a: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: invokestatic sixtwo/jk.bDk ()Lsixtwo/mG;
      // 21: goto 2c
      // 24: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: aload 0
      // 29: getfield sixtwo/cG.HYLiK Lsixtwo/mG;
      // 2c: areturn
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
      // 000: getstatic sixtwo/cG.QtQoN J
      // 003: ldc2_w 117698765231536
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/cB.Vt ()Z
      // 00b: istore 4
      // 00d: aload 1
      // 00e: iload 4
      // 010: ifeq 02f
      // 013: invokevirtual com/google/gson/JsonElement.isJsonObject ()Z
      // 016: ifne 02e
      // 019: goto 020
      // 01c: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: aload 0
      // 021: aload 1
      // 022: invokevirtual com/google/gson/JsonElement.getAsInt ()I
      // 025: invokevirtual sixtwo/cG.Uc (I)Lsixtwo/cG;
      // 028: pop
      // 029: return
      // 02a: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02d: athrow
      // 02e: aload 1
      // 02f: invokevirtual com/google/gson/JsonElement.getAsJsonObject ()Lcom/google/gson/JsonObject;
      // 032: astore 5
      // 034: aload 5
      // 036: sipush 15358
      // 039: ldc2_w 6675171942423020229
      // 03c: lload 2
      // 03d: lxor
      // 03e: invokedynamic h (IJ)Ljava/lang/String; bsm=sixtwo/cG.Wt (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 043: invokevirtual com/google/gson/JsonObject.has (Ljava/lang/String;)Z
      // 046: iload 4
      // 048: ifeq 088
      // 04b: ifeq 076
      // 04e: goto 055
      // 051: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 054: athrow
      // 055: aload 0
      // 056: aload 5
      // 058: sipush 9713
      // 05b: ldc2_w 2656100875656223947
      // 05e: lload 2
      // 05f: lxor
      // 060: invokedynamic h (IJ)Ljava/lang/String; bsm=sixtwo/cG.Wt (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 065: invokevirtual com/google/gson/JsonObject.get (Ljava/lang/String;)Lcom/google/gson/JsonElement;
      // 068: invokevirtual com/google/gson/JsonElement.getAsInt ()I
      // 06b: invokevirtual sixtwo/cG.Uc (I)Lsixtwo/cG;
      // 06e: pop
      // 06f: goto 076
      // 072: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 075: athrow
      // 076: aload 5
      // 078: sipush 15521
      // 07b: ldc2_w 8771290620218131871
      // 07e: lload 2
      // 07f: lxor
      // 080: invokedynamic h (IJ)Ljava/lang/String; bsm=sixtwo/cG.Wt (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 085: invokevirtual com/google/gson/JsonObject.has (Ljava/lang/String;)Z
      // 088: iload 4
      // 08a: ifeq 0ca
      // 08d: ifeq 0b8
      // 090: goto 097
      // 093: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 096: athrow
      // 097: aload 0
      // 098: aload 5
      // 09a: sipush 21463
      // 09d: ldc2_w 4430519497396857578
      // 0a0: lload 2
      // 0a1: lxor
      // 0a2: invokedynamic h (IJ)Ljava/lang/String; bsm=sixtwo/cG.Wt (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0a7: invokevirtual com/google/gson/JsonObject.get (Ljava/lang/String;)Lcom/google/gson/JsonElement;
      // 0aa: invokevirtual com/google/gson/JsonElement.getAsInt ()I
      // 0ad: invokevirtual sixtwo/cG.Ud (I)Lsixtwo/cG;
      // 0b0: pop
      // 0b1: goto 0b8
      // 0b4: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b7: athrow
      // 0b8: aload 5
      // 0ba: sipush 17132
      // 0bd: ldc2_w 8248093272783797204
      // 0c0: lload 2
      // 0c1: lxor
      // 0c2: invokedynamic h (IJ)Ljava/lang/String; bsm=sixtwo/cG.Wt (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0c7: invokevirtual com/google/gson/JsonObject.has (Ljava/lang/String;)Z
      // 0ca: iload 4
      // 0cc: ifeq 10c
      // 0cf: ifeq 0fa
      // 0d2: goto 0d9
      // 0d5: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d8: athrow
      // 0d9: aload 0
      // 0da: aload 5
      // 0dc: sipush 23921
      // 0df: ldc2_w 4017859264831136840
      // 0e2: lload 2
      // 0e3: lxor
      // 0e4: invokedynamic h (IJ)Ljava/lang/String; bsm=sixtwo/cG.Wt (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0e9: invokevirtual com/google/gson/JsonObject.get (Ljava/lang/String;)Lcom/google/gson/JsonElement;
      // 0ec: invokevirtual com/google/gson/JsonElement.getAsBoolean ()Z
      // 0ef: invokevirtual sixtwo/cG.Ug (Z)Lsixtwo/cG;
      // 0f2: pop
      // 0f3: goto 0fa
      // 0f6: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f9: athrow
      // 0fa: aload 5
      // 0fc: sipush 18307
      // 0ff: ldc2_w 5023679526178799292
      // 102: lload 2
      // 103: lxor
      // 104: invokedynamic h (IJ)Ljava/lang/String; bsm=sixtwo/cG.Wt (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 109: invokevirtual com/google/gson/JsonObject.has (Ljava/lang/String;)Z
      // 10c: ifeq 130
      // 10f: aload 0
      // 110: aload 5
      // 112: sipush 6439
      // 115: ldc2_w 140113239982628891
      // 118: lload 2
      // 119: lxor
      // 11a: invokedynamic h (IJ)Ljava/lang/String; bsm=sixtwo/cG.Wt (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 11f: invokevirtual com/google/gson/JsonObject.get (Ljava/lang/String;)Lcom/google/gson/JsonElement;
      // 122: invokevirtual com/google/gson/JsonElement.getAsBoolean ()Z
      // 125: invokevirtual sixtwo/cG.Uh (Z)Lsixtwo/cG;
      // 128: pop
      // 129: goto 130
      // 12c: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 12f: athrow
      // 130: return
   }

   @Override
   public void SR(Map<String, Object> var1) {
      long var2 = QtQoN ^ 62064080259100L;
      JsonObject var4 = new JsonObject();
      var4.addProperty(Wt<"h">(9713, 2656014192384229735L ^ var2), this.HYLiK.coh());
      var4.addProperty(Wt<"h">(21463, 4430430958690940742L ^ var2), this.mbUpG.coh());
      var4.addProperty(Wt<"h">(23921, 4017807692908673508L ^ var2), this.nfBAC);
      var4.addProperty(Wt<"h">(6439, 140063789769620919L ^ var2), this.xPYck);
      var1.put(Arrays.toString(this.NwlSF), var4);
   }

   public cG Uh(boolean param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cG.QtQoN J
      // 03: ldc2_w 64186689140697
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vt ()Z
      // 0b: istore 4
      // 0d: aload 0
      // 0e: iload 4
      // 10: ifeq 31
      // 13: getfield sixtwo/cG.xPYck Z
      // 16: iload 1
      // 17: if_icmpne 27
      // 1a: goto 21
      // 1d: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 0
      // 22: areturn
      // 23: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 0
      // 28: iload 1
      // 29: putfield sixtwo/cG.xPYck Z
      // 2c: aload 0
      // 2d: invokevirtual sixtwo/cG.Vk ()V
      // 30: aload 0
      // 31: areturn
   }

   public cG We() {
      this.CDdOA = true;
      return this;
   }

   public cG Ue(mG param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cG.QtQoN J
      // 03: ldc2_w 98485881981846
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vt ()Z
      // 0b: istore 4
      // 0d: aload 1
      // 0e: iload 4
      // 10: ifeq 26
      // 13: ifnonnull 25
      // 16: goto 1d
      // 19: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: bipush 0
      // 1e: goto 29
      // 21: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: aload 1
      // 26: invokevirtual sixtwo/mG.coh ()I
      // 29: istore 5
      // 2b: aload 0
      // 2c: getfield sixtwo/cG.mbUpG Lsixtwo/mG;
      // 2f: iload 4
      // 31: ifeq 4a
      // 34: ifnonnull 46
      // 37: goto 3e
      // 3a: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: bipush 0
      // 3f: goto 4d
      // 42: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 45: athrow
      // 46: aload 0
      // 47: getfield sixtwo/cG.mbUpG Lsixtwo/mG;
      // 4a: invokevirtual sixtwo/mG.coh ()I
      // 4d: istore 6
      // 4f: iload 4
      // 51: ifeq 71
      // 54: iload 6
      // 56: iload 5
      // 58: if_icmpne 68
      // 5b: goto 62
      // 5e: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 61: athrow
      // 62: aload 0
      // 63: areturn
      // 64: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 67: athrow
      // 68: aload 0
      // 69: aload 1
      // 6a: putfield sixtwo/cG.mbUpG Lsixtwo/mG;
      // 6d: aload 0
      // 6e: invokevirtual sixtwo/cG.Vk ()V
      // 71: aload 0
      // 72: areturn
   }

   public cG Uc(int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cG.QtQoN J
      // 03: ldc2_w 28183360502667
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vu ()Z
      // 0b: istore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/cG.HYLiK Lsixtwo/mG;
      // 11: iload 4
      // 13: ifne 2c
      // 16: ifnonnull 28
      // 19: goto 20
      // 1c: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: bipush 0
      // 21: goto 2f
      // 24: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: aload 0
      // 29: getfield sixtwo/cG.HYLiK Lsixtwo/mG;
      // 2c: invokevirtual sixtwo/mG.coh ()I
      // 2f: istore 5
      // 31: iload 4
      // 33: ifne 55
      // 36: iload 5
      // 38: iload 1
      // 39: if_icmpne 49
      // 3c: goto 43
      // 3f: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: aload 0
      // 44: areturn
      // 45: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 48: athrow
      // 49: aload 0
      // 4a: iload 1
      // 4b: invokestatic sixtwo/mG.cnQ (I)Lsixtwo/mG;
      // 4e: putfield sixtwo/cG.HYLiK Lsixtwo/mG;
      // 51: aload 0
      // 52: invokevirtual sixtwo/cG.Vk ()V
      // 55: aload 0
      // 56: areturn
   }

   public cG Ub(boolean var1) {
      this.CDdOA = var1;
      return this;
   }

   public static boolean Wo() {
      boolean var0 = Wn();

      try {
         return !var0;
      } catch (MatchException var1) {
         throw Wp(var1);
      }
   }

   private static MatchException Wp(MatchException var0) {
      return var0;
   }

   private static Object Ws(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = Wr(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String Wr(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 20882;
      if (zfSXE[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])GtaeP.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               GtaeP.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/cG", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = TatDI[var5].getBytes("ISO-8859-1");
         zfSXE[var5] = Wq(((Cipher)var4[0]).doFinal(var9));
      }

      return zfSXE[var5];
   }

   private static String Wq(byte[] var0) {
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

   public static void Wm(boolean var0) {
      XqhhV = var0;
   }

   public boolean Wk() {
      return this.xPYck;
   }

   public boolean Wl() {
      return this.CDdOA;
   }

   public cG Ud(int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cG.QtQoN J
      // 03: ldc2_w 131312772721744
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vu ()Z
      // 0b: istore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/cG.mbUpG Lsixtwo/mG;
      // 11: iload 4
      // 13: ifne 2c
      // 16: ifnonnull 28
      // 19: goto 20
      // 1c: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: bipush 0
      // 21: goto 2f
      // 24: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: aload 0
      // 29: getfield sixtwo/cG.mbUpG Lsixtwo/mG;
      // 2c: invokevirtual sixtwo/mG.coh ()I
      // 2f: istore 5
      // 31: iload 4
      // 33: ifne 55
      // 36: iload 5
      // 38: iload 1
      // 39: if_icmpne 49
      // 3c: goto 43
      // 3f: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: aload 0
      // 44: areturn
      // 45: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 48: athrow
      // 49: aload 0
      // 4a: iload 1
      // 4b: invokestatic sixtwo/mG.cnQ (I)Lsixtwo/mG;
      // 4e: putfield sixtwo/cG.mbUpG Lsixtwo/mG;
      // 51: aload 0
      // 52: invokevirtual sixtwo/cG.Vk ()V
      // 55: aload 0
      // 56: areturn
   }

   public static boolean Wn() {
      return XqhhV;
   }

   public mG Wg() {
      return this.HYLiK;
   }

   public mG Wi() {
      return this.mbUpG;
   }

   private static CallSite Wt(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Ws".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cG" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public boolean Wj() {
      return this.nfBAC;
   }

   public cG Ug(boolean param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cG.QtQoN J
      // 03: ldc2_w 28499763817874
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vu ()Z
      // 0b: istore 4
      // 0d: aload 0
      // 0e: iload 4
      // 10: ifne 31
      // 13: getfield sixtwo/cG.nfBAC Z
      // 16: iload 1
      // 17: if_icmpne 27
      // 1a: goto 21
      // 1d: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 0
      // 22: areturn
      // 23: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 0
      // 28: iload 1
      // 29: putfield sixtwo/cG.nfBAC Z
      // 2c: aload 0
      // 2d: invokevirtual sixtwo/cG.Vk ()V
      // 30: aload 0
      // 31: areturn
   }

   public cG Uf(mG param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cG.QtQoN J
      // 03: ldc2_w 31027954742809
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vt ()Z
      // 0b: istore 4
      // 0d: aload 1
      // 0e: iload 4
      // 10: ifeq 26
      // 13: ifnonnull 25
      // 16: goto 1d
      // 19: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: bipush 0
      // 1e: goto 29
      // 21: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: aload 1
      // 26: invokevirtual sixtwo/mG.coh ()I
      // 29: istore 5
      // 2b: aload 0
      // 2c: getfield sixtwo/cG.HYLiK Lsixtwo/mG;
      // 2f: iload 4
      // 31: ifeq 4a
      // 34: ifnonnull 46
      // 37: goto 3e
      // 3a: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: bipush 0
      // 3f: goto 4d
      // 42: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 45: athrow
      // 46: aload 0
      // 47: getfield sixtwo/cG.HYLiK Lsixtwo/mG;
      // 4a: invokevirtual sixtwo/mG.coh ()I
      // 4d: istore 6
      // 4f: iload 4
      // 51: ifeq 71
      // 54: iload 6
      // 56: iload 5
      // 58: if_icmpne 68
      // 5b: goto 62
      // 5e: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 61: athrow
      // 62: aload 0
      // 63: areturn
      // 64: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 67: athrow
      // 68: aload 0
      // 69: aload 1
      // 6a: putfield sixtwo/cG.HYLiK Lsixtwo/mG;
      // 6d: aload 0
      // 6e: invokevirtual sixtwo/cG.Vk ()V
      // 71: aload 0
      // 72: areturn
   }

   public int Wh() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cG.QtQoN J
      // 03: ldc2_w 121602040431605
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/cB.Vu ()Z
      // 0b: istore 3
      // 0c: aload 0
      // 0d: iload 3
      // 0e: ifne 2c
      // 11: getfield sixtwo/cG.xPYck Z
      // 14: ifeq 2b
      // 17: goto 1e
      // 1a: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: invokestatic sixtwo/jk.bDk ()Lsixtwo/mG;
      // 21: invokevirtual sixtwo/mG.coh ()I
      // 24: goto 32
      // 27: invokestatic sixtwo/cG.Wp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: aload 0
      // 2c: getfield sixtwo/cG.HYLiK Lsixtwo/mG;
      // 2f: invokevirtual sixtwo/mG.coh ()I
      // 32: ireturn
   }
}
