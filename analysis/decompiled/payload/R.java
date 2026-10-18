import java.io.ByteArrayInputStream;
import java.io.InputStream;
import java.util.Map;

class R extends ClassLoader {
   private final Map<String, byte[]> n;
   private final Map<String, byte[]> w;
   private static final String[] a;
   private static final String[] b;
   private static final long[] c;
   private static final Integer[] d;

   R(byte[] param1, long param2, byte[] param4, ClassLoader param5) throws Exception {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: ldc 1879805940
      // 002: sipush 29705
      // 005: isub
      // 006: getstatic e.R I
      // 009: aload 0
      // 00a: aload 5
      // 00c: invokespecial java/lang/ClassLoader.<init> (Ljava/lang/ClassLoader;)V
      // 00f: aload 0
      // 010: new java/util/HashMap
      // 013: dup
      // 014: invokespecial java/util/HashMap.<init> ()V
      // 017: putfield R.n Ljava/util/Map;
      // 01a: istore 6
      // 01c: ldc 1879805940
      // 01e: sipush 23565
      // 021: isub
      // 022: lload 2
      // 023: l2i
      // 024: aload 0
      // 025: new java/util/HashMap
      // 028: dup
      // 029: invokespecial java/util/HashMap.<init> ()V
      // 02c: putfield R.w Ljava/util/Map;
      // 02f: invokestatic R.a (III)Ljava/lang/String;
      // 032: invokestatic javax/crypto/Cipher.getInstance (Ljava/lang/String;)Ljavax/crypto/Cipher;
      // 035: astore 8
      // 037: new javax/crypto/spec/SecretKeySpec
      // 03a: dup
      // 03b: aload 4
      // 03d: ldc 1879805940
      // 03f: sipush 29708
      // 042: isub
      // 043: ldc -1879805940
      // 045: sipush -6176
      // 048: isub
      // 049: lload 2
      // 04a: l2i
      // 04b: invokestatic R.a (III)Ljava/lang/String;
      // 04e: invokespecial javax/crypto/spec/SecretKeySpec.<init> ([BLjava/lang/String;)V
      // 051: astore 9
      // 053: aload 8
      // 055: bipush 2
      // 056: aload 9
      // 058: invokevirtual javax/crypto/Cipher.init (ILjava/security/Key;)V
      // 05b: aload 8
      // 05d: aload 1
      // 05e: invokevirtual javax/crypto/Cipher.doFinal ([B)[B
      // 061: astore 10
      // 063: new java/util/jar/JarInputStream
      // 066: dup
      // 067: new java/io/ByteArrayInputStream
      // 06a: dup
      // 06b: aload 10
      // 06d: invokespecial java/io/ByteArrayInputStream.<init> ([B)V
      // 070: invokespecial java/util/jar/JarInputStream.<init> (Ljava/io/InputStream;)V
      // 073: astore 11
      // 075: sipush 2002
      // 078: ldc2_w 2360469705059484421
      // 07b: lload 2
      // 07c: lxor
      // 07d: invokestatic R.a (IJ)I
      // 080: newarray 8
      // 082: astore 13
      // 084: aload 11
      // 086: invokevirtual java/util/jar/JarInputStream.getNextJarEntry ()Ljava/util/jar/JarEntry;
      // 089: dup
      // 08a: astore 12
      // 08c: ifnull 1a1
      // 08f: iload 6
      // 091: ifne 1ac
      // 094: new java/io/ByteArrayOutputStream
      // 097: dup
      // 098: invokespecial java/io/ByteArrayOutputStream.<init> ()V
      // 09b: astore 14
      // 09d: aload 11
      // 09f: aload 13
      // 0a1: invokevirtual java/util/jar/JarInputStream.read ([B)I
      // 0a4: dup
      // 0a5: istore 15
      // 0a7: bipush -1
      // 0a8: if_icmpeq 0d8
      // 0ab: aload 14
      // 0ad: aload 13
      // 0af: bipush 0
      // 0b0: iload 15
      // 0b2: invokevirtual java/io/ByteArrayOutputStream.write ([BII)V
      // 0b5: iload 6
      // 0b7: ifne 084
      // 0ba: iload 6
      // 0bc: lload 2
      // 0bd: lconst_0
      // 0be: lcmp
      // 0bf: iflt 091
      // 0c2: ifeq 09d
      // 0c5: getstatic Init.y I
      // 0c8: istore 7
      // 0ca: iinc 7 1
      // 0cd: iload 7
      // 0cf: lload 2
      // 0d0: lconst_0
      // 0d1: lcmp
      // 0d2: iflt 0b7
      // 0d5: putstatic Init.y I
      // 0d8: aload 12
      // 0da: invokevirtual java/util/jar/JarEntry.getName ()Ljava/lang/String;
      // 0dd: astore 16
      // 0df: aload 14
      // 0e1: invokevirtual java/io/ByteArrayOutputStream.toByteArray ()[B
      // 0e4: astore 17
      // 0e6: aload 16
      // 0e8: ldc 1879805940
      // 0ea: sipush 29707
      // 0ed: isub
      // 0ee: ldc 1879805940
      // 0f0: sipush 15026
      // 0f3: isub
      // 0f4: lload 2
      // 0f5: l2i
      // 0f6: invokestatic R.a (III)Ljava/lang/String;
      // 0f9: invokevirtual java/lang/String.endsWith (Ljava/lang/String;)Z
      // 0fc: lload 2
      // 0fd: lconst_0
      // 0fe: lcmp
      // 0ff: iflt 17c
      // 102: iload 6
      // 104: ifne 17c
      // 107: ifeq 15a
      // 10a: goto 10e
      // 10d: athrow
      // 10e: aload 16
      // 110: sipush 2425
      // 113: ldc2_w 3927046397056503215
      // 116: lload 2
      // 117: lxor
      // 118: invokestatic R.a (IJ)I
      // 11b: sipush 14889
      // 11e: ldc2_w 1637114545950686973
      // 121: lload 2
      // 122: lxor
      // 123: invokestatic R.a (IJ)I
      // 126: invokevirtual java/lang/String.replace (CC)Ljava/lang/String;
      // 129: ldc 1879805940
      // 12b: sipush 29706
      // 12e: isub
      // 12f: ldc -1879805940
      // 131: sipush -22323
      // 134: isub
      // 135: lload 2
      // 136: l2i
      // 137: invokestatic R.a (III)Ljava/lang/String;
      // 13a: ldc ""
      // 13c: invokevirtual java/lang/String.replaceAll (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
      // 13f: astore 18
      // 141: aload 0
      // 142: getfield R.n Ljava/util/Map;
      // 145: aload 18
      // 147: aload 17
      // 149: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 14e: pop
      // 14f: iload 6
      // 151: lload 2
      // 152: lconst_0
      // 153: lcmp
      // 154: ifle 19e
      // 157: ifeq 19c
      // 15a: aload 0
      // 15b: getfield R.w Ljava/util/Map;
      // 15e: aload 16
      // 160: aload 17
      // 162: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 167: pop
      // 168: aload 16
      // 16a: iload 6
      // 16c: ifne 19b
      // 16f: goto 173
      // 172: athrow
      // 173: ldc "/"
      // 175: invokevirtual java/lang/String.startsWith (Ljava/lang/String;)Z
      // 178: goto 17c
      // 17b: athrow
      // 17c: lload 2
      // 17d: lconst_0
      // 17e: lcmp
      // 17f: iflt 19e
      // 182: ifne 19c
      // 185: aload 0
      // 186: getfield R.w Ljava/util/Map;
      // 189: aload 16
      // 18b: invokedynamic makeConcatWithConstants (Ljava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "/\u0001" ]
      // 190: aload 17
      // 192: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 197: goto 19b
      // 19a: athrow
      // 19b: pop
      // 19c: iload 6
      // 19e: ifeq 084
      // 1a1: aload 11
      // 1a3: lload 2
      // 1a4: lconst_0
      // 1a5: lcmp
      // 1a6: iflt 086
      // 1a9: invokevirtual java/util/jar/JarInputStream.close ()V
      // 1ac: goto 1c5
      // 1af: astore 12
      // 1b1: aload 11
      // 1b3: invokevirtual java/util/jar/JarInputStream.close ()V
      // 1b6: goto 1c2
      // 1b9: astore 13
      // 1bb: aload 12
      // 1bd: aload 13
      // 1bf: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 1c2: aload 12
      // 1c4: athrow
      // 1c5: return
   }

   // $VF: Irreducible bytecode was duplicated to produce valid code
   static {
      String[] var13 = new String[4];
      int var11 = 0;
      String var10 = "\u0085»\u009agìöÔ¢HÅÂ\nÕÎ0o?¾¢g\bV:n\u0012`CÔ)";
      int var12 = "\u0085»\u009agìöÔ¢HÅÂ\nÕÎ0o?¾¢g\bV:n\u0012`CÔ)".length();
      char var9 = 20;
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
                     case 0 -> 115;
                     case 1 -> 100;
                     case 2 -> 126;
                     case 3 -> 94;
                     case 4 -> 12;
                     case 5 -> 88;
                     default -> 103;
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
                     b = new String[4];
                     long var0 = 37899890778676L;
                     long[] var6 = new long[3];
                     int var3 = 0;
                     String var4 = "þÂ\u0088\\x\u008a\u001bw\u0084¢Ò¥ð©\u0085òó\u0002Ü£I\u008e($";
                     int var5 = "þÂ\u0088\\x\u008a\u001bw\u0084¢Ò¥ð©\u0085òó\u0002Ü£I\u008e($".length();
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

                     c = var6;
                     d = new Integer[3];
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

                  var10 = ";Að\u0094O?\u0003©I\u001f";
                  var12 = ";Að\u0094O?\u0003©I\u001f".length();
                  var9 = 6;
                  var16 = -1;
            }

            var10000 = var10.substring(++var16, var16 + var9);
            var10001 = 0;
         }
      }
   }

   private static int a(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 28693;
      if (d[var3] == null) {
         d[var3] = (int)(c[var3] ^ var1);
      }

      return d[var3];
   }

   private static String a(int var0, int var1, int var2) {
      int var3 = (var0 ^ var2 ^ 12072) & 65535;
      if (b[var3] == null) {
         char[] var4 = a[var3].toCharArray();

         short var5 = switch (var4[0] & 0xFF) {
            case 0 -> 38;
            case 1 -> 204;
            case 2 -> 63;
            case 3 -> 100;
            case 4 -> 178;
            case 5 -> 215;
            case 6 -> 29;
            case 7 -> 95;
            case 8 -> 156;
            case 9 -> 65;
            case 10 -> 120;
            case 11 -> 54;
            case 12 -> 189;
            case 13 -> 238;
            case 14 -> 113;
            case 15 -> 161;
            case 16 -> 181;
            case 17 -> 168;
            case 18 -> 22;
            case 19 -> 64;
            case 20 -> 225;
            case 21 -> 39;
            case 22 -> 117;
            case 23 -> 2;
            case 24 -> 11;
            case 25 -> 41;
            case 26 -> 28;
            case 27 -> 52;
            case 28 -> 19;
            case 29 -> 119;
            case 30 -> 24;
            case 31 -> 7;
            case 32 -> 236;
            case 33 -> 241;
            case 34 -> 67;
            case 35 -> 237;
            case 36 -> 21;
            case 37 -> 131;
            case 38 -> 208;
            case 39 -> 99;
            case 40 -> 32;
            case 41 -> 253;
            case 42 -> 149;
            case 43 -> 106;
            case 44 -> 197;
            case 45 -> 82;
            case 46 -> 174;
            case 47 -> 180;
            case 48 -> 160;
            case 49 -> 127;
            case 50 -> 72;
            case 51 -> 163;
            case 52 -> 73;
            case 53 -> 150;
            case 54 -> 230;
            case 55 -> 136;
            case 56 -> 138;
            case 57 -> 212;
            case 58 -> 251;
            case 59 -> 179;
            case 60 -> 97;
            case 61 -> 69;
            case 62 -> 152;
            case 63 -> 83;
            case 64 -> 219;
            case 65 -> 118;
            case 66 -> 137;
            case 67 -> 4;
            case 68 -> 93;
            case 69 -> 135;
            case 70 -> 104;
            case 71 -> 9;
            case 72 -> 27;
            case 73 -> 123;
            case 74 -> 78;
            case 75 -> 70;
            case 76 -> 200;
            case 77 -> 71;
            case 78 -> 221;
            case 79 -> 242;
            case 80 -> 146;
            case 81 -> 6;
            case 82 -> 62;
            case 83 -> 57;
            case 84 -> 157;
            case 85 -> 151;
            case 86 -> 166;
            case 87 -> 192;
            case 88 -> 206;
            case 89 -> 51;
            case 90 -> 91;
            case 91 -> 195;
            case 92 -> 86;
            case 93 -> 145;
            case 94 -> 218;
            case 95 -> 207;
            case 96 -> 81;
            case 97 -> 90;
            case 98 -> 140;
            case 99 -> 245;
            case 100 -> 142;
            case 101 -> 191;
            case 102 -> 144;
            case 103 -> 148;
            case 104 -> 43;
            case 105 -> 159;
            case 106 -> 202;
            case 107 -> 88;
            case 108 -> 26;
            case 109 -> 203;
            case 110 -> 107;
            case 111 -> 59;
            case 112 -> 128;
            case 113 -> 162;
            case 114 -> 133;
            case 115 -> 240;
            case 116 -> 68;
            case 117 -> 75;
            case 118 -> 198;
            case 119 -> 37;
            case 120 -> 205;
            case 121 -> 176;
            case 122 -> 122;
            case 123 -> 77;
            case 124 -> 224;
            case 125 -> 169;
            case 126 -> 16;
            case 127 -> 134;
            case 128 -> 47;
            case 129 -> 158;
            case 130 -> 139;
            case 131 -> 132;
            case 132 -> 228;
            case 133 -> 1;
            case 134 -> 44;
            case 135 -> 103;
            case 136 -> 246;
            case 137 -> 164;
            case 138 -> 124;
            case 139 -> 31;
            case 140 -> 80;
            case 141 -> 49;
            case 142 -> 194;
            case 143 -> 14;
            case 144 -> 155;
            case 145 -> 129;
            case 146 -> 170;
            case 147 -> 250;
            case 148 -> 79;
            case 149 -> 239;
            case 150 -> 209;
            case 151 -> 111;
            case 152 -> 5;
            case 153 -> 201;
            case 154 -> 116;
            case 155 -> 233;
            case 156 -> 89;
            case 157 -> 20;
            case 158 -> 121;
            case 159 -> 114;
            case 160 -> 61;
            case 161 -> 154;
            case 162 -> 235;
            case 163 -> 193;
            case 164 -> 214;
            case 165 -> 175;
            case 166 -> 252;
            case 167 -> 153;
            case 168 -> 231;
            case 169 -> 50;
            case 170 -> 188;
            case 171 -> 184;
            case 172 -> 92;
            case 173 -> 45;
            case 174 -> 196;
            case 175 -> 165;
            case 176 -> 211;
            case 177 -> 15;
            case 178 -> 102;
            case 179 -> 58;
            case 180 -> 25;
            case 181 -> 34;
            case 182 -> 167;
            case 183 -> 96;
            case 184 -> 226;
            case 185 -> 177;
            case 186 -> 98;
            case 187 -> 254;
            case 188 -> 33;
            case 189 -> 232;
            case 190 -> 190;
            case 191 -> 173;
            case 192 -> 23;
            case 193 -> 18;
            case 194 -> 30;
            case 195 -> 40;
            case 196 -> 249;
            case 197 -> 55;
            case 198 -> 182;
            case 199 -> 172;
            case 200 -> 46;
            case 201 -> 141;
            case 202 -> 244;
            case 203 -> 53;
            case 204 -> 0;
            case 205 -> 187;
            case 206 -> 12;
            case 207 -> 223;
            case 208 -> 42;
            case 209 -> 247;
            case 210 -> 36;
            case 211 -> 66;
            case 212 -> 3;
            case 213 -> 74;
            case 214 -> 115;
            case 215 -> 108;
            case 216 -> 199;
            case 217 -> 130;
            case 218 -> 84;
            case 219 -> 227;
            case 220 -> 220;
            case 221 -> 94;
            case 222 -> 8;
            case 223 -> 87;
            case 224 -> 171;
            case 225 -> 126;
            case 226 -> 222;
            case 227 -> 147;
            case 228 -> 110;
            case 229 -> 17;
            case 230 -> 186;
            case 231 -> 10;
            case 232 -> 35;
            case 233 -> 210;
            case 234 -> 216;
            case 235 -> 85;
            case 236 -> 185;
            case 237 -> 229;
            case 238 -> 234;
            case 239 -> 248;
            case 240 -> 217;
            case 241 -> 183;
            case 242 -> 76;
            case 243 -> 101;
            case 244 -> 13;
            case 245 -> 60;
            case 246 -> 109;
            case 247 -> 112;
            case 248 -> 56;
            case 249 -> 143;
            case 250 -> 213;
            case 251 -> 255;
            case 252 -> 125;
            case 253 -> 105;
            case 254 -> 243;
            default -> 48;
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

         b[var3] = new String(var4).intern();
      }

      return b[var3];
   }

   @Override
   public InputStream getResourceAsStream(String var1) {
      long var2 = 17441314301571L;
      byte[] var4 = this.w.get(var1);

      try {
         if (var4 != null) {
            return new ByteArrayInputStream(var4);
         }
      } catch (IllegalArgumentException var5) {
         throw var5;
      }

      return super.getResourceAsStream(var1);
   }

   @Override
   protected Class<?> findClass(String var1) throws ClassNotFoundException {
      long var2 = 31477196403932L;
      byte[] var4 = this.n.remove(var1);

      try {
         if (var4 != null) {
            return this.defineClass(var1, var4, 0, var4.length);
         }
      } catch (ClassNotFoundException var5) {
         throw var5;
      }

      return super.findClass(var1);
   }
}
