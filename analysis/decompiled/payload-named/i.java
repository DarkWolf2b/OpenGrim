import com.sun.jna.Native;
import com.sun.jna.platform.mac.IOKitUtil;
import com.sun.jna.platform.mac.IOKit.IOService;
import java.nio.charset.StandardCharsets;
import java.util.function.Supplier;
import oshi.util.Memoizer;
import oshi.util.Util;
import oshi.util.tuples.Quartet;

public class i {
   private final Supplier<Quartet<String, String, String, String>> R = Memoizer.memoize(i::N);
   private static final String[] a;
   private static final String[] b;

   // $VF: Irreducible bytecode was duplicated to produce valid code
   static {
      String[] var5 = new String[9];
      int var3 = 0;
      String var2 = "£\r1Å-F#\u0085ùa\u0016¹B[ô@4%\u0014â1S\u008eÈÅ\u0012\u009bf\u009afÌ\u0011¿\fyÏÝ·ns\u0002P¤Þ\\\u0085\u00160\u001bjßfQá¸z¤V!¾\u0082\u008dæî>'AGs\u000e\u0085¤Ü(°¯;g!_;nîp\u0005¶\u009e.BQ\u0007*m©\u0016L)c";
      int var4 = "£\r1Å-F#\u0085ùa\u0016¹B[ô@4%\u0014â1S\u008eÈÅ\u0012\u009bf\u009afÌ\u0011¿\fyÏÝ·ns\u0002P¤Þ\\\u0085\u00160\u001bjßfQá¸z¤V!¾\u0082\u008dæî>'AGs\u000e\u0085¤Ü(°¯;g!_;nîp\u0005¶\u009e.BQ\u0007*m©\u0016L)c"
         .length();
      char var1 = '\n';
      int var8 = -1;

      label52:
      while (true) {
         String var10000 = var2.substring(++var8, var8 + var1);
         int var10001 = -1;

         while (true) {
            char[] var20;
            label47: {
               char[] var11 = var10000.toCharArray();
               int var10003 = var11.length;
               int var6 = 0;
               var20 = var11;
               var10001 = var10003;
               char[] var28;
               int var10004;
               if (var10003 <= 1) {
                  var28 = var11;
                  var10004 = var6;
               } else {
                  var20 = var11;
                  var10001 = var10003;
                  if (var10003 <= var6) {
                     break label47;
                  }

                  var28 = var11;
                  var10004 = var6;
               }

               while (true) {
                  var28[var10004] = (char)(var28[var10004] ^ switch (var6 % 7) {
                     case 0 -> 32;
                     case 1 -> 50;
                     case 2 -> 88;
                     case 3 -> 48;
                     case 4 -> 27;
                     case 5 -> 57;
                     default -> 101;
                  });
                  var6++;
                  if (var10001 == 0) {
                     var10004 = var10001;
                     var28 = var20;
                  } else {
                     if (var10001 <= var6) {
                        break;
                     }

                     var28 = var20;
                     var10004 = var6;
                  }
               }
            }

            String var35 = new String(var20).intern();
            switch (var10001) {
               case 0:
                  var5[var3++] = var35;
                  if ((var8 += var1) >= var4) {
                     a = var5;
                     b = new String[9];
                     return;
                  }

                  var1 = var2.charAt(var8);
                  break;
               default:
                  var5[var3++] = var35;
                  if ((var8 += var1) < var4) {
                     var1 = var2.charAt(var8);
                     continue label52;
                  }

                  var2 = "§¯\u001e8\u0007\u0006¬,.ü.u";
                  var4 = "§¯\u001e8\u0007\u0006¬,.ü.u".length();
                  var1 = 4;
                  var8 = -1;
            }

            var10000 = var2.substring(++var8, var8 + var1);
            var10001 = 0;
         }
      }
   }

   private static String a(int var0, int var1, int var2) {
      int var3 = (var0 ^ var2 ^ -10022) & 65535;
      if (b[var3] == null) {
         char[] var4 = a[var3].toCharArray();

         short var5 = switch (var4[0] & 0xFF) {
            case 0 -> 112;
            case 1 -> 62;
            case 2 -> 135;
            case 3 -> 193;
            case 4 -> 170;
            case 5 -> 214;
            case 6 -> 143;
            case 7 -> 73;
            case 8 -> 3;
            case 9 -> 71;
            case 10 -> 108;
            case 11 -> 159;
            case 12 -> 222;
            case 13 -> 167;
            case 14 -> 228;
            case 15 -> 105;
            case 16 -> 229;
            case 17 -> 121;
            case 18 -> 86;
            case 19 -> 210;
            case 20 -> 255;
            case 21 -> 217;
            case 22 -> 7;
            case 23 -> 174;
            case 24 -> 91;
            case 25 -> 141;
            case 26 -> 77;
            case 27 -> 246;
            case 28 -> 132;
            case 29 -> 38;
            case 30 -> 154;
            case 31 -> 205;
            case 32 -> 29;
            case 33 -> 209;
            case 34 -> 131;
            case 35 -> 142;
            case 36 -> 207;
            case 37 -> 187;
            case 38 -> 53;
            case 39 -> 32;
            case 40 -> 8;
            case 41 -> 99;
            case 42 -> 123;
            case 43 -> 190;
            case 44 -> 239;
            case 45 -> 28;
            case 46 -> 252;
            case 47 -> 128;
            case 48 -> 182;
            case 49 -> 204;
            case 50 -> 107;
            case 51 -> 57;
            case 52 -> 63;
            case 53 -> 16;
            case 54 -> 22;
            case 55 -> 42;
            case 56 -> 148;
            case 57 -> 177;
            case 58 -> 208;
            case 59 -> 245;
            case 60 -> 44;
            case 61 -> 248;
            case 62 -> 2;
            case 63 -> 251;
            case 64 -> 60;
            case 65 -> 234;
            case 66 -> 130;
            case 67 -> 134;
            case 68 -> 43;
            case 69 -> 55;
            case 70 -> 200;
            case 71 -> 65;
            case 72 -> 158;
            case 73 -> 236;
            case 74 -> 6;
            case 75 -> 67;
            case 76 -> 186;
            case 77 -> 30;
            case 78 -> 152;
            case 79 -> 145;
            case 80 -> 157;
            case 81 -> 98;
            case 82 -> 238;
            case 83 -> 103;
            case 84 -> 126;
            case 85 -> 97;
            case 86 -> 230;
            case 87 -> 161;
            case 88 -> 36;
            case 89 -> 93;
            case 90 -> 137;
            case 91 -> 181;
            case 92 -> 226;
            case 93 -> 225;
            case 94 -> 94;
            case 95 -> 17;
            case 96 -> 223;
            case 97 -> 147;
            case 98 -> 162;
            case 99 -> 15;
            case 100 -> 199;
            case 101 -> 244;
            case 102 -> 50;
            case 103 -> 198;
            case 104 -> 254;
            case 105 -> 58;
            case 106 -> 136;
            case 107 -> 64;
            case 108 -> 168;
            case 109 -> 146;
            case 110 -> 139;
            case 111 -> 237;
            case 112 -> 9;
            case 113 -> 12;
            case 114 -> 155;
            case 115 -> 54;
            case 116 -> 106;
            case 117 -> 70;
            case 118 -> 169;
            case 119 -> 84;
            case 120 -> 82;
            case 121 -> 20;
            case 122 -> 124;
            case 123 -> 33;
            case 124 -> 183;
            case 125 -> 75;
            case 126 -> 56;
            case 127 -> 27;
            case 128 -> 133;
            case 129 -> 176;
            case 130 -> 110;
            case 131 -> 233;
            case 132 -> 144;
            case 133 -> 140;
            case 134 -> 175;
            case 135 -> 150;
            case 136 -> 114;
            case 137 -> 250;
            case 138 -> 1;
            case 139 -> 166;
            case 140 -> 51;
            case 141 -> 215;
            case 142 -> 196;
            case 143 -> 81;
            case 144 -> 68;
            case 145 -> 31;
            case 146 -> 249;
            case 147 -> 211;
            case 148 -> 247;
            case 149 -> 101;
            case 150 -> 188;
            case 151 -> 83;
            case 152 -> 104;
            case 153 -> 160;
            case 154 -> 11;
            case 155 -> 13;
            case 156 -> 37;
            case 157 -> 24;
            case 158 -> 49;
            case 159 -> 156;
            case 160 -> 184;
            case 161 -> 151;
            case 162 -> 201;
            case 163 -> 118;
            case 164 -> 127;
            case 165 -> 87;
            case 166 -> 179;
            case 167 -> 25;
            case 168 -> 253;
            case 169 -> 79;
            case 170 -> 46;
            case 171 -> 52;
            case 172 -> 95;
            case 173 -> 85;
            case 174 -> 206;
            case 175 -> 191;
            case 176 -> 138;
            case 177 -> 194;
            case 178 -> 240;
            case 179 -> 80;
            case 180 -> 111;
            case 181 -> 202;
            case 182 -> 171;
            case 183 -> 88;
            case 184 -> 74;
            case 185 -> 180;
            case 186 -> 35;
            case 187 -> 66;
            case 188 -> 213;
            case 189 -> 14;
            case 190 -> 10;
            case 191 -> 165;
            case 192 -> 195;
            case 193 -> 115;
            case 194 -> 189;
            case 195 -> 92;
            case 196 -> 220;
            case 197 -> 34;
            case 198 -> 21;
            case 199 -> 19;
            case 200 -> 45;
            case 201 -> 231;
            case 202 -> 185;
            case 203 -> 26;
            case 204 -> 69;
            case 205 -> 5;
            case 206 -> 243;
            case 207 -> 172;
            case 208 -> 76;
            case 209 -> 192;
            case 210 -> 89;
            case 211 -> 4;
            case 212 -> 149;
            case 213 -> 125;
            case 214 -> 235;
            case 215 -> 173;
            case 216 -> 153;
            case 217 -> 39;
            case 218 -> 102;
            case 219 -> 47;
            case 220 -> 48;
            case 221 -> 41;
            case 222 -> 61;
            case 223 -> 218;
            case 224 -> 122;
            case 225 -> 117;
            case 226 -> 72;
            case 227 -> 203;
            case 228 -> 109;
            case 229 -> 113;
            case 230 -> 129;
            case 231 -> 221;
            case 232 -> 163;
            case 233 -> 100;
            case 234 -> 164;
            case 235 -> 40;
            case 236 -> 212;
            case 237 -> 96;
            case 238 -> 78;
            case 239 -> 232;
            case 240 -> 224;
            case 241 -> 23;
            case 242 -> 178;
            case 243 -> 227;
            case 244 -> 59;
            case 245 -> 18;
            case 246 -> 120;
            case 247 -> 119;
            case 248 -> 0;
            case 249 -> 116;
            case 250 -> 197;
            case 251 -> 242;
            case 252 -> 216;
            case 253 -> 90;
            case 254 -> 241;
            default -> 219;
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

   public String j(Object[] var1) {
      Object[] var10000 = var1;
      long var2 = (Long)var1[0];
      boolean var4 = (Boolean)var1[1];

      try {
         if (var2 <= 0L) {
            return (String)var10000;
         }

         if (var4) {
            return a(1379642820 + (char)-31651, -1379642820 + -((char)-25176), (int)var2) + (String)this.R.get().getD();
         }
      } catch (IllegalArgumentException var5) {
         throw var5;
      }

      return (String)this.R.get().getD();
   }

   private static Quartet<String, String, String, String> N() {
      long var0 = 101442625171060L;
      String var3 = null;
      String var4 = null;
      int var2 = e.R;
      String var5 = null;
      String var6 = null;
      IOService var7 = IOKitUtil.getMatchingService(a(207352740 + (char)-15605, 207352740 + (char)-17056, (int)var0));

      label88: {
         IOService var10000;
         label83: {
            try {
               var10000 = var7;
               if (var2 != 0) {
                  break label83;
               }

               if (var7 == null) {
                  break label88;
               }
            } catch (IllegalArgumentException var12) {
               throw var12;
            }

            var10000 = var7;
         }

         byte[] var8 = var10000.getByteArrayProperty(a(207352740 + (char)-15608, 207352740 + (char)-23487, (int)var0));

         label74: {
            label73: {
               try {
                  var14 = var8;
                  if (var2 != 0) {
                     break label73;
                  }

                  if (var8 == null) {
                     break label74;
                  }
               } catch (IllegalArgumentException var11) {
                  throw var11;
               }

               var14 = var8;
            }

            var3 = Native.toString(var14, StandardCharsets.UTF_8);
         }

         var8 = var7.getByteArrayProperty(a(207352740 + (char)-15609, -207352740 + -((char)-1383), (int)var0));

         label64: {
            label63: {
               try {
                  var15 = var8;
                  if (var2 != 0) {
                     break label63;
                  }

                  if (var8 == null) {
                     break label64;
                  }
               } catch (IllegalArgumentException var10) {
                  throw var10;
               }

               var15 = var8;
            }

            var4 = Native.toString(var15, StandardCharsets.UTF_8);
         }

         var5 = var7.getStringProperty(a(207352740 + (char)-15607, -207352740 + -((char)-6382), (int)var0));
         var6 = var7.getStringProperty(a(207352740 + (char)-15610, -207352740 + -((char)-20955), (int)var0));
         var7.release();
      }

      Quartet var16;
      Quartet var10001;
      String var10002;
      label55: {
         try {
            var16 = new Quartet;
            var10001 = var16;
            if (Util.isBlank(var3)) {
               var10002 = a(207352740 + (char)-15606, -207352740 + -((char)-19075), (int)var0);
               break label55;
            }
         } catch (IllegalArgumentException var9) {
            throw var9;
         }

         var10002 = var3;
      }

      var10001./* $VF: Unable to resugar constructor */<init>(
         var10002,
         Util.isBlank(var4) ? a(207352740 + (char)-15612, 207352740 + (char)-5, (int)var0) : var4,
         Util.isBlank(var5) ? a(207352740 + (char)-15614, -207352740 + -((char)-16288), (int)var0) : var5,
         Util.isBlank(var6) ? a(207352740 + (char)-15614, -207352740 + -((char)-16288), (int)var0) : var6
      );
      return var16;
   }
}
