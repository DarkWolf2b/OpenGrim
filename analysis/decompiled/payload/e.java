import java.util.function.Supplier;
import oshi.util.Memoizer;
import oshi.util.tuples.Pair;

public class e {
   private final Supplier<Pair<String, String>> S = Memoizer.memoize(e::w);
   public static int R;
   private static final String[] a;
   private static final String[] b;

   public String O(Object[] var1) {
      Object[] var10000 = var1;
      boolean var2 = (Boolean)var1[0];
      long var3 = (Long)var1[1];

      try {
         if (var3 <= 0L) {
            return (String)var10000;
         }

         if (var2) {
            return a(1923583320 + 12212, -1923583320 + -5780, (int)var3) + (String)this.S.get().getB();
         }
      } catch (IllegalArgumentException var5) {
         throw var5;
      }

      return (String)this.S.get().getB();
   }

   // $VF: Irreducible bytecode was duplicated to produce valid code
   static {
      String[] var5 = new String[3];
      int var3 = 0;
      String var2 = "Âµc8\u0007kAPÐI®ê\u0007j\u001dp[Mßj";
      int var4 = "Âµc8\u0007kAPÐI®ê\u0007j\u001dp[Mßj".length();
      char var1 = 4;
      int var0 = -1;

      while (true) {
         char[] var16;
         label38: {
            char[] var10001 = var2.substring(++var0, var0 + var1).toCharArray();
            int var10003 = var10001.length;
            int var6 = 0;
            var16 = var10001;
            int var10 = var10003;
            char[] var23;
            int var10004;
            if (var10003 <= 1) {
               var23 = var10001;
               var10004 = var6;
            } else {
               var16 = var10001;
               var10 = var10003;
               if (var10003 <= var6) {
                  break label38;
               }

               var23 = var10001;
               var10004 = var6;
            }

            while (true) {
               var23[var10004] = (char)(var23[var10004] ^ switch (var6 % 7) {
                  case 0 -> 126;
                  case 1 -> 107;
                  case 2 -> 66;
                  case 3 -> 88;
                  case 4 -> 98;
                  case 5 -> 107;
                  default -> 99;
               });
               var6++;
               if (var10 == 0) {
                  var10004 = var10;
                  var23 = var16;
               } else {
                  if (var10 <= var6) {
                     break;
                  }

                  var23 = var16;
                  var10004 = var6;
               }
            }
         }

         String var30 = new String(var16).intern();
         byte var14 = -1;
         var5[var3++] = var30;
         if ((var0 += var1) >= var4) {
            a = var5;
            b = new String[3];
            return;
         }

         var1 = var2.charAt(var0);
      }
   }

   private static String l(Object[] param0) {
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
      // 0b: pop
      // 0c: getstatic e.R I
      // 0f: invokestatic oshi/driver/windows/wmi/Win32Bios.querySerialNumber ()Lcom/sun/jna/platform/win32/COM/WbemcliUtil$WmiResult;
      // 12: astore 4
      // 14: istore 3
      // 15: aload 4
      // 17: iload 3
      // 18: ifne 2b
      // 1b: invokevirtual com/sun/jna/platform/win32/COM/WbemcliUtil$WmiResult.getResultCount ()I
      // 1e: ifle 33
      // 21: goto 25
      // 24: athrow
      // 25: aload 4
      // 27: goto 2b
      // 2a: athrow
      // 2b: getstatic oshi/driver/windows/wmi/Win32Bios$BiosSerialProperty.SERIALNUMBER Loshi/driver/windows/wmi/Win32Bios$BiosSerialProperty;
      // 2e: bipush 0
      // 2f: invokestatic oshi/util/platform/windows/WmiUtil.getString (Lcom/sun/jna/platform/win32/COM/WbemcliUtil$WmiResult;Ljava/lang/Enum;I)Ljava/lang/String;
      // 32: areturn
      // 33: aconst_null
      // 34: areturn
   }

   private static String a(int var0, int var1, int var2) {
      int var3 = (var0 ^ var2 ^ -5519) & 65535;
      if (b[var3] == null) {
         char[] var4 = a[var3].toCharArray();

         short var5 = switch (var4[0] & 0xFF) {
            case 0 -> 120;
            case 1 -> 145;
            case 2 -> 244;
            case 3 -> 202;
            case 4 -> 232;
            case 5 -> 225;
            case 6 -> 240;
            case 7 -> 29;
            case 8 -> 71;
            case 9 -> 40;
            case 10 -> 198;
            case 11 -> 83;
            case 12 -> 41;
            case 13 -> 94;
            case 14 -> 31;
            case 15 -> 194;
            case 16 -> 176;
            case 17 -> 159;
            case 18 -> 64;
            case 19 -> 138;
            case 20 -> 147;
            case 21 -> 168;
            case 22 -> 28;
            case 23 -> 132;
            case 24 -> 142;
            case 25 -> 116;
            case 26 -> 61;
            case 27 -> 152;
            case 28 -> 254;
            case 29 -> 190;
            case 30 -> 162;
            case 31 -> 124;
            case 32 -> 250;
            case 33 -> 123;
            case 34 -> 191;
            case 35 -> 15;
            case 36 -> 82;
            case 37 -> 37;
            case 38 -> 218;
            case 39 -> 151;
            case 40 -> 48;
            case 41 -> 104;
            case 42 -> 160;
            case 43 -> 199;
            case 44 -> 114;
            case 45 -> 2;
            case 46 -> 87;
            case 47 -> 14;
            case 48 -> 50;
            case 49 -> 108;
            case 50 -> 49;
            case 51 -> 175;
            case 52 -> 59;
            case 53 -> 247;
            case 54 -> 154;
            case 55 -> 23;
            case 56 -> 223;
            case 57 -> 210;
            case 58 -> 27;
            case 59 -> 177;
            case 60 -> 205;
            case 61 -> 226;
            case 62 -> 183;
            case 63 -> 107;
            case 64 -> 93;
            case 65 -> 0;
            case 66 -> 251;
            case 67 -> 18;
            case 68 -> 212;
            case 69 -> 208;
            case 70 -> 213;
            case 71 -> 231;
            case 72 -> 21;
            case 73 -> 98;
            case 74 -> 110;
            case 75 -> 253;
            case 76 -> 158;
            case 77 -> 36;
            case 78 -> 55;
            case 79 -> 52;
            case 80 -> 245;
            case 81 -> 172;
            case 82 -> 187;
            case 83 -> 214;
            case 84 -> 47;
            case 85 -> 229;
            case 86 -> 230;
            case 87 -> 112;
            case 88 -> 135;
            case 89 -> 62;
            case 90 -> 209;
            case 91 -> 150;
            case 92 -> 60;
            case 93 -> 215;
            case 94 -> 4;
            case 95 -> 122;
            case 96 -> 54;
            case 97 -> 17;
            case 98 -> 156;
            case 99 -> 86;
            case 100 -> 66;
            case 101 -> 69;
            case 102 -> 53;
            case 103 -> 39;
            case 104 -> 157;
            case 105 -> 185;
            case 106 -> 242;
            case 107 -> 32;
            case 108 -> 80;
            case 109 -> 195;
            case 110 -> 241;
            case 111 -> 207;
            case 112 -> 85;
            case 113 -> 136;
            case 114 -> 63;
            case 115 -> 178;
            case 116 -> 219;
            case 117 -> 70;
            case 118 -> 203;
            case 119 -> 143;
            case 120 -> 197;
            case 121 -> 58;
            case 122 -> 126;
            case 123 -> 193;
            case 124 -> 182;
            case 125 -> 8;
            case 126 -> 149;
            case 127 -> 56;
            case 128 -> 100;
            case 129 -> 81;
            case 130 -> 68;
            case 131 -> 6;
            case 132 -> 103;
            case 133 -> 65;
            case 134 -> 252;
            case 135 -> 140;
            case 136 -> 51;
            case 137 -> 45;
            case 138 -> 90;
            case 139 -> 192;
            case 140 -> 234;
            case 141 -> 43;
            case 142 -> 216;
            case 143 -> 133;
            case 144 -> 200;
            case 145 -> 44;
            case 146 -> 121;
            case 147 -> 141;
            case 148 -> 129;
            case 149 -> 11;
            case 150 -> 113;
            case 151 -> 249;
            case 152 -> 248;
            case 153 -> 224;
            case 154 -> 12;
            case 155 -> 204;
            case 156 -> 186;
            case 157 -> 97;
            case 158 -> 74;
            case 159 -> 166;
            case 160 -> 111;
            case 161 -> 105;
            case 162 -> 119;
            case 163 -> 217;
            case 164 -> 84;
            case 165 -> 1;
            case 166 -> 79;
            case 167 -> 25;
            case 168 -> 106;
            case 169 -> 3;
            case 170 -> 22;
            case 171 -> 72;
            case 172 -> 73;
            case 173 -> 179;
            case 174 -> 155;
            case 175 -> 227;
            case 176 -> 222;
            case 177 -> 153;
            case 178 -> 92;
            case 179 -> 127;
            case 180 -> 91;
            case 181 -> 10;
            case 182 -> 189;
            case 183 -> 115;
            case 184 -> 38;
            case 185 -> 42;
            case 186 -> 57;
            case 187 -> 181;
            case 188 -> 128;
            case 189 -> 99;
            case 190 -> 211;
            case 191 -> 109;
            case 192 -> 184;
            case 193 -> 237;
            case 194 -> 89;
            case 195 -> 206;
            case 196 -> 88;
            case 197 -> 246;
            case 198 -> 19;
            case 199 -> 130;
            case 200 -> 180;
            case 201 -> 26;
            case 202 -> 243;
            case 203 -> 188;
            case 204 -> 35;
            case 205 -> 77;
            case 206 -> 7;
            case 207 -> 16;
            case 208 -> 34;
            case 209 -> 220;
            case 210 -> 134;
            case 211 -> 131;
            case 212 -> 170;
            case 213 -> 125;
            case 214 -> 164;
            case 215 -> 169;
            case 216 -> 102;
            case 217 -> 96;
            case 218 -> 239;
            case 219 -> 238;
            case 220 -> 161;
            case 221 -> 24;
            case 222 -> 196;
            case 223 -> 165;
            case 224 -> 173;
            case 225 -> 46;
            case 226 -> 76;
            case 227 -> 118;
            case 228 -> 5;
            case 229 -> 163;
            case 230 -> 33;
            case 231 -> 201;
            case 232 -> 255;
            case 233 -> 30;
            case 234 -> 78;
            case 235 -> 228;
            case 236 -> 148;
            case 237 -> 174;
            case 238 -> 146;
            case 239 -> 95;
            case 240 -> 167;
            case 241 -> 117;
            case 242 -> 144;
            case 243 -> 101;
            case 244 -> 9;
            case 245 -> 236;
            case 246 -> 137;
            case 247 -> 67;
            case 248 -> 233;
            case 249 -> 139;
            case 250 -> 235;
            case 251 -> 13;
            case 252 -> 171;
            case 253 -> 20;
            case 254 -> 221;
            default -> 75;
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

   private static Pair<String, String> w() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: ldc2_w 63063630215856
      // 03: lstore 0
      // 04: lload 0
      // 05: dup2
      // 06: ldc2_w 38117044563136
      // 09: lxor
      // 0a: lstore 2
      // 0b: pop2
      // 0c: aconst_null
      // 0d: astore 5
      // 0f: getstatic e.R I
      // 12: aconst_null
      // 13: astore 6
      // 15: invokestatic oshi/driver/windows/wmi/Win32ComputerSystemProduct.queryIdentifyingNumberUUID ()Lcom/sun/jna/platform/win32/COM/WbemcliUtil$WmiResult;
      // 18: astore 7
      // 1a: istore 4
      // 1c: aload 7
      // 1e: iload 4
      // 20: ifne 33
      // 23: invokevirtual com/sun/jna/platform/win32/COM/WbemcliUtil$WmiResult.getResultCount ()I
      // 26: ifle 47
      // 29: goto 2d
      // 2c: athrow
      // 2d: aload 7
      // 2f: goto 33
      // 32: athrow
      // 33: getstatic oshi/driver/windows/wmi/Win32ComputerSystemProduct$ComputerSystemProductProperty.IDENTIFYINGNUMBER Loshi/driver/windows/wmi/Win32ComputerSystemProduct$ComputerSystemProductProperty;
      // 36: bipush 0
      // 37: invokestatic oshi/util/platform/windows/WmiUtil.getString (Lcom/sun/jna/platform/win32/COM/WbemcliUtil$WmiResult;Ljava/lang/Enum;I)Ljava/lang/String;
      // 3a: astore 5
      // 3c: aload 7
      // 3e: getstatic oshi/driver/windows/wmi/Win32ComputerSystemProduct$ComputerSystemProductProperty.UUID Loshi/driver/windows/wmi/Win32ComputerSystemProduct$ComputerSystemProductProperty;
      // 41: bipush 0
      // 42: invokestatic oshi/util/platform/windows/WmiUtil.getString (Lcom/sun/jna/platform/win32/COM/WbemcliUtil$WmiResult;Ljava/lang/Enum;I)Ljava/lang/String;
      // 45: astore 6
      // 47: aload 5
      // 49: invokestatic oshi/util/Util.isBlank (Ljava/lang/String;)Z
      // 4c: iload 4
      // 4e: ifne 70
      // 51: ifeq 6b
      // 54: goto 58
      // 57: athrow
      // 58: lload 2
      // 59: bipush 1
      // 5a: anewarray 165
      // 5d: dup_x2
      // 5e: dup_x2
      // 5f: pop
      // 60: invokestatic java/lang/Long.valueOf (J)Ljava/lang/Long;
      // 63: bipush 0
      // 64: swap
      // 65: aastore
      // 66: invokestatic e.l ([Ljava/lang/Object;)Ljava/lang/String;
      // 69: astore 5
      // 6b: aload 5
      // 6d: invokestatic oshi/util/Util.isBlank (Ljava/lang/String;)Z
      // 70: iload 4
      // 72: ifne a1
      // 75: ifeq 93
      // 78: goto 7c
      // 7b: athrow
      // 7c: ldc -625466040
      // 7e: sipush -5256
      // 81: i2c
      // 82: ineg
      // 83: isub
      // 84: ldc -625466040
      // 86: sipush -3728
      // 89: i2c
      // 8a: ineg
      // 8b: isub
      // 8c: lload 0
      // 8d: l2i
      // 8e: invokestatic e.a (III)Ljava/lang/String;
      // 91: astore 5
      // 93: aload 6
      // 95: iload 4
      // 97: ifne b9
      // 9a: invokestatic oshi/util/Util.isBlank (Ljava/lang/String;)Z
      // 9d: goto a1
      // a0: athrow
      // a1: ifeq bb
      // a4: ldc -625466040
      // a6: sipush -5253
      // a9: i2c
      // aa: ineg
      // ab: isub
      // ac: ldc -625334970
      // ae: sipush -11262
      // b1: i2c
      // b2: ineg
      // b3: iadd
      // b4: lload 0
      // b5: l2i
      // b6: invokestatic e.a (III)Ljava/lang/String;
      // b9: astore 6
      // bb: new oshi/util/tuples/Pair
      // be: dup
      // bf: aload 5
      // c1: aload 6
      // c3: invokespecial oshi/util/tuples/Pair.<init> (Ljava/lang/Object;Ljava/lang/Object;)V
      // c6: areturn
   }
}
