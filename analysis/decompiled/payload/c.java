import java.util.function.Supplier;
import oshi.util.Memoizer;

public class c {
   private final Supplier<String> D = Memoizer.memoize(c::p);
   private static final String[] a;
   private static final String[] b;

   // $VF: Irreducible bytecode was duplicated to produce valid code
   static {
      String[] var5 = new String[2];
      int var3 = 0;
      String var2 = "HEèê\u0007`\u0080ë$Üü\u008a";
      int var4 = "HEèê\u0007`\u0080ë$Üü\u008a".length();
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
                  case 0 -> 81;
                  case 1 -> 36;
                  case 2 -> 125;
                  case 3 -> 125;
                  case 4 -> 103;
                  case 5 -> 3;
                  default -> 17;
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
            b = new String[2];
            return;
         }

         var1 = var2.charAt(var0);
      }
   }

   private static String a(int var0, int var1, int var2) {
      int var3 = (var0 ^ var2 ^ 10024) & 65535;
      if (b[var3] == null) {
         char[] var4 = a[var3].toCharArray();

         short var5 = switch (var4[0] & 0xFF) {
            case 0 -> 88;
            case 1 -> 72;
            case 2 -> 157;
            case 3 -> 69;
            case 4 -> 67;
            case 5 -> 95;
            case 6 -> 143;
            case 7 -> 51;
            case 8 -> 125;
            case 9 -> 87;
            case 10 -> 18;
            case 11 -> 218;
            case 12 -> 108;
            case 13 -> 201;
            case 14 -> 19;
            case 15 -> 229;
            case 16 -> 197;
            case 17 -> 168;
            case 18 -> 59;
            case 19 -> 105;
            case 20 -> 146;
            case 21 -> 109;
            case 22 -> 219;
            case 23 -> 230;
            case 24 -> 102;
            case 25 -> 202;
            case 26 -> 103;
            case 27 -> 233;
            case 28 -> 217;
            case 29 -> 27;
            case 30 -> 57;
            case 31 -> 166;
            case 32 -> 145;
            case 33 -> 94;
            case 34 -> 215;
            case 35 -> 139;
            case 36 -> 129;
            case 37 -> 147;
            case 38 -> 61;
            case 39 -> 66;
            case 40 -> 110;
            case 41 -> 159;
            case 42 -> 155;
            case 43 -> 205;
            case 44 -> 117;
            case 45 -> 130;
            case 46 -> 91;
            case 47 -> 21;
            case 48 -> 35;
            case 49 -> 126;
            case 50 -> 237;
            case 51 -> 74;
            case 52 -> 203;
            case 53 -> 78;
            case 54 -> 208;
            case 55 -> 242;
            case 56 -> 38;
            case 57 -> 31;
            case 58 -> 246;
            case 59 -> 40;
            case 60 -> 253;
            case 61 -> 232;
            case 62 -> 2;
            case 63 -> 167;
            case 64 -> 39;
            case 65 -> 243;
            case 66 -> 140;
            case 67 -> 179;
            case 68 -> 119;
            case 69 -> 238;
            case 70 -> 79;
            case 71 -> 204;
            case 72 -> 118;
            case 73 -> 8;
            case 74 -> 200;
            case 75 -> 64;
            case 76 -> 44;
            case 77 -> 25;
            case 78 -> 101;
            case 79 -> 185;
            case 80 -> 26;
            case 81 -> 131;
            case 82 -> 33;
            case 83 -> 148;
            case 84 -> 192;
            case 85 -> 12;
            case 86 -> 55;
            case 87 -> 96;
            case 88 -> 120;
            case 89 -> 135;
            case 90 -> 182;
            case 91 -> 84;
            case 92 -> 221;
            case 93 -> 123;
            case 94 -> 213;
            case 95 -> 142;
            case 96 -> 63;
            case 97 -> 30;
            case 98 -> 244;
            case 99 -> 178;
            case 100 -> 52;
            case 101 -> 222;
            case 102 -> 73;
            case 103 -> 195;
            case 104 -> 5;
            case 105 -> 223;
            case 106 -> 255;
            case 107 -> 216;
            case 108 -> 71;
            case 109 -> 158;
            case 110 -> 187;
            case 111 -> 181;
            case 112 -> 6;
            case 113 -> 36;
            case 114 -> 97;
            case 115 -> 198;
            case 116 -> 53;
            case 117 -> 43;
            case 118 -> 111;
            case 119 -> 136;
            case 120 -> 165;
            case 121 -> 58;
            case 122 -> 3;
            case 123 -> 134;
            case 124 -> 132;
            case 125 -> 163;
            case 126 -> 41;
            case 127 -> 225;
            case 128 -> 175;
            case 129 -> 29;
            case 130 -> 28;
            case 131 -> 210;
            case 132 -> 234;
            case 133 -> 124;
            case 134 -> 24;
            case 135 -> 227;
            case 136 -> 171;
            case 137 -> 46;
            case 138 -> 214;
            case 139 -> 48;
            case 140 -> 254;
            case 141 -> 162;
            case 142 -> 42;
            case 143 -> 112;
            case 144 -> 164;
            case 145 -> 115;
            case 146 -> 70;
            case 147 -> 137;
            case 148 -> 122;
            case 149 -> 170;
            case 150 -> 138;
            case 151 -> 32;
            case 152 -> 86;
            case 153 -> 89;
            case 154 -> 231;
            case 155 -> 104;
            case 156 -> 236;
            case 157 -> 13;
            case 158 -> 196;
            case 159 -> 128;
            case 160 -> 247;
            case 161 -> 156;
            case 162 -> 116;
            case 163 -> 152;
            case 164 -> 224;
            case 165 -> 240;
            case 166 -> 177;
            case 167 -> 180;
            case 168 -> 209;
            case 169 -> 100;
            case 170 -> 191;
            case 171 -> 239;
            case 172 -> 17;
            case 173 -> 251;
            case 174 -> 169;
            case 175 -> 188;
            case 176 -> 241;
            case 177 -> 151;
            case 178 -> 15;
            case 179 -> 54;
            case 180 -> 23;
            case 181 -> 160;
            case 182 -> 190;
            case 183 -> 22;
            case 184 -> 154;
            case 185 -> 133;
            case 186 -> 50;
            case 187 -> 149;
            case 188 -> 20;
            case 189 -> 252;
            case 190 -> 207;
            case 191 -> 93;
            case 192 -> 92;
            case 193 -> 174;
            case 194 -> 220;
            case 195 -> 98;
            case 196 -> 173;
            case 197 -> 176;
            case 198 -> 153;
            case 199 -> 228;
            case 200 -> 249;
            case 201 -> 250;
            case 202 -> 11;
            case 203 -> 47;
            case 204 -> 83;
            case 205 -> 211;
            case 206 -> 186;
            case 207 -> 16;
            case 208 -> 4;
            case 209 -> 172;
            case 210 -> 14;
            case 211 -> 62;
            case 212 -> 144;
            case 213 -> 184;
            case 214 -> 150;
            case 215 -> 0;
            case 216 -> 37;
            case 217 -> 235;
            case 218 -> 121;
            case 219 -> 9;
            case 220 -> 248;
            case 221 -> 212;
            case 222 -> 107;
            case 223 -> 245;
            case 224 -> 75;
            case 225 -> 113;
            case 226 -> 85;
            case 227 -> 141;
            case 228 -> 1;
            case 229 -> 80;
            case 230 -> 68;
            case 231 -> 45;
            case 232 -> 10;
            case 233 -> 60;
            case 234 -> 56;
            case 235 -> 99;
            case 236 -> 127;
            case 237 -> 226;
            case 238 -> 34;
            case 239 -> 106;
            case 240 -> 81;
            case 241 -> 65;
            case 242 -> 76;
            case 243 -> 82;
            case 244 -> 199;
            case 245 -> 183;
            case 246 -> 49;
            case 247 -> 161;
            case 248 -> 77;
            case 249 -> 7;
            case 250 -> 206;
            case 251 -> 193;
            case 252 -> 90;
            case 253 -> 114;
            case 254 -> 194;
            default -> 189;
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

   private static String p() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: ldc2_w 91591215085408
      // 03: lstore 0
      // 04: getstatic e.R I
      // 07: istore 2
      // 08: invokestatic oshi/driver/linux/Sysfs.queryUUID ()Ljava/lang/String;
      // 0b: dup
      // 0c: astore 3
      // 0d: iload 2
      // 0e: ifne 5e
      // 11: ifnonnull 5d
      // 14: goto 18
      // 17: athrow
      // 18: invokestatic oshi/driver/linux/Dmidecode.queryUUID ()Ljava/lang/String;
      // 1b: dup
      // 1c: astore 3
      // 1d: iload 2
      // 1e: ifne 5e
      // 21: ifnonnull 5d
      // 24: goto 28
      // 27: athrow
      // 28: invokestatic oshi/driver/linux/Lshal.queryUUID ()Ljava/lang/String;
      // 2b: dup
      // 2c: astore 3
      // 2d: iload 2
      // 2e: ifne 5e
      // 31: ifnonnull 5d
      // 34: goto 38
      // 37: athrow
      // 38: invokestatic oshi/driver/linux/Lshw.queryUUID ()Ljava/lang/String;
      // 3b: dup
      // 3c: astore 3
      // 3d: iload 2
      // 3e: ifne 5e
      // 41: ifnonnull 5d
      // 44: goto 48
      // 47: athrow
      // 48: ldc 1037550120
      // 4a: sipush -3617
      // 4d: i2c
      // 4e: isub
      // 4f: ldc 1037419050
      // 51: sipush -648
      // 54: i2c
      // 55: iadd
      // 56: lload 0
      // 57: l2i
      // 58: invokestatic c.a (III)Ljava/lang/String;
      // 5b: areturn
      // 5c: athrow
      // 5d: aload 3
      // 5e: areturn
   }

   public String T(Object[] var1) {
      Object[] var10000 = var1;
      boolean var2 = (Boolean)var1[0];
      long var3 = (Long)var1[1];

      try {
         if (var3 <= 0L) {
            return (String)var10000;
         }

         if (var2) {
            return a(858639570 + 23819, -858639570 + -16971, (int)var3) + this.D.get();
         }
      } catch (IllegalArgumentException var5) {
         throw var5;
      }

      return this.D.get();
   }
}
