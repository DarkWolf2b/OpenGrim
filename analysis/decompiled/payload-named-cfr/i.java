/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.sun.jna.Native
 *  com.sun.jna.platform.mac.IOKit$IOService
 *  com.sun.jna.platform.mac.IOKitUtil
 *  oshi.util.Memoizer
 *  oshi.util.Util
 *  oshi.util.tuples.Quartet
 */
import com.sun.jna.Native;
import com.sun.jna.platform.mac.IOKit;
import com.sun.jna.platform.mac.IOKitUtil;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.util.function.Supplier;
import oshi.util.Memoizer;
import oshi.util.Util;
import oshi.util.tuples.Quartet;

public class i {
    private final Supplier<Quartet<String, String, String, String>> R = Memoizer.memoize(i::N);
    private static final String[] a;
    private static final String[] b;

    /*
     * Unable to fully structure code
     */
    static {
        block20: {
            block19: {
                var5 = new String[9];
                var3_1 = 0;
                var2_2 = "\u00a3\r1\u00c5-F#\u0085\u00f9a\u0016\u00b9B[\u00f4@4%\u0014\u00e21S\u008e\u00c8\u00c5\u0012\u009bf\u009af\u00cc\u0011\u00bf\fy\u00cf\u00dd\u00b7ns\u0002P\u00a4\u00de\\\u0085\u00160\u001bj\u00dffQ\u00e1\u00b8z\u00a4V!\u00be\u0082\u008d\u00e6\u00ee>'AGs\u000e\u0085\u00a4\u00dc(\u00b0\u00af;g!_;n\u00eep\u0005\u00b6\u009e.BQ\u0007*m\u00a9\u0016L)c";
                var4_3 = "\u00a3\r1\u00c5-F#\u0085\u00f9a\u0016\u00b9B[\u00f4@4%\u0014\u00e21S\u008e\u00c8\u00c5\u0012\u009bf\u009af\u00cc\u0011\u00bf\fy\u00cf\u00dd\u00b7ns\u0002P\u00a4\u00de\\\u0085\u00160\u001bj\u00dffQ\u00e1\u00b8z\u00a4V!\u00be\u0082\u008d\u00e6\u00ee>'AGs\u000e\u0085\u00a4\u00dc(\u00b0\u00af;g!_;n\u00eep\u0005\u00b6\u009e.BQ\u0007*m\u00a9\u0016L)c".length();
                var1_4 = 10;
                var0_5 = -1;
lbl7:
                // 2 sources

                while (true) {
                    v0 = ++var0_5;
                    v1 = var2_2.substring(v0, v0 + var1_4);
                    v2 = -1;
                    break block19;
                    break;
                }
lbl12:
                // 1 sources

                while (true) {
                    var5[var3_1++] = v3.intern();
                    if ((var0_5 += var1_4) < var4_3) {
                        var1_4 = var2_2.charAt(var0_5);
                        ** continue;
                    }
                    var2_2 = "\u00a7\u00af\u001e8\u0007\u0006\u00ac,.\u00fc.u";
                    var4_3 = "\u00a7\u00af\u001e8\u0007\u0006\u00ac,.\u00fc.u".length();
                    var1_4 = 4;
                    var0_5 = -1;
lbl21:
                    // 2 sources

                    while (true) {
                        v4 = ++var0_5;
                        v1 = var2_2.substring(v4, v4 + var1_4);
                        v2 = 0;
                        break block19;
                        break;
                    }
                    break;
                }
lbl26:
                // 1 sources

                while (true) {
                    var5[var3_1++] = v3.intern();
                    if ((var0_5 += var1_4) < var4_3) {
                        var1_4 = var2_2.charAt(var0_5);
                        ** continue;
                    }
                    break block20;
                    break;
                }
            }
            v5 = v1.toCharArray();
            var6_6 = 0;
            v6 = v5.length;
            v7 = v5;
            v8 = v6;
            if (v6 > 1) ** GOTO lbl76
            do {
                v9 = v7;
                v10 = v7;
                v11 = var6_6;
                while (true) {
                    v12 = v9[v11];
                    switch (var6_6 % 7) {
                        case 0: {
                            v13 = 32;
                            break;
                        }
                        case 1: {
                            v13 = 50;
                            break;
                        }
                        case 2: {
                            v13 = 88;
                            break;
                        }
                        case 3: {
                            v13 = 48;
                            break;
                        }
                        case 4: {
                            v13 = 27;
                            break;
                        }
                        case 5: {
                            v13 = 57;
                            break;
                        }
                        default: {
                            v13 = 101;
                        }
                    }
                    v9[v11] = (char)(v12 ^ v13);
                    ++var6_6;
                    v7 = v10;
                    v8 = v8;
                    if (v8 != 0) break;
                    v10 = v7;
                    v14 = v8;
                    v11 = v8;
                    v9 = v7;
                }
lbl76:
                // 2 sources

                v15 = v7;
                v14 = v8;
            } while (v8 > var6_6);
            v3 = new String(v15);
            switch (v2) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl85:
                // 1 sources

                ** continue;
            }
        }
        i.a = var5;
        i.b = new String[9];
    }

    private static String a(int n2, int n3, int n4) {
        int n5 = (n2 ^ n4 ^ 0xFFFFD8DA) & 0xFFFF;
        if (b[n5] == null) {
            int n6;
            char[] cArray = a[n5].toCharArray();
            int n7 = switch (cArray[0] & 0xFF) {
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
            int n8 = ((n3 ^= n4) & 0xFF) - n7;
            if (n8 < 0) {
                n8 += 256;
            }
            if ((n6 = ((n3 & 0xFFFF) >>> 8) - n7) < 0) {
                n6 += 256;
            }
            int n9 = 0;
            while (n9 < cArray.length) {
                int n10 = n9 % 2;
                int n11 = n9;
                char[] cArray2 = cArray;
                char c2 = cArray[n11];
                if (n10 == 0) {
                    cArray2[n11] = (char)(c2 ^ n8);
                    n8 = ((n8 >>> 3 | n8 << 5) ^ cArray[n9]) & 0xFF;
                } else {
                    cArray2[n11] = (char)(c2 ^ n6);
                    n6 = ((n6 >>> 3 | n6 << 5) ^ cArray[n9]) & 0xFF;
                }
                ++n9;
            }
            i.b[n5] = new String(cArray).intern();
        }
        return b[n5];
    }

    public String j(Object[] objectArray) {
        Object object;
        block3: {
            long l2 = (Long)objectArray[0];
            object = objectArray;
            boolean bl2 = (Boolean)objectArray[1];
            if (l2 <= 0L) break block3;
            if (bl2) {
                return i.a(1379642820 + (char)-31651, -1379642820 + -((char)-25176), (int)l2) + (String)this.R.get().getD();
            }
            object = this.R.get().getD();
        }
        return (String)object;
    }

    private static Quartet<String, String, String, String> N() {
        Quartet quartet;
        String string;
        String string2;
        String string3;
        String string4;
        long l2;
        block9: {
            IOKit.IOService iOService;
            block13: {
                byte[] byArray;
                block12: {
                    byte[] byArray2;
                    int n2;
                    block11: {
                        byte[] byArray3;
                        block10: {
                            IOKit.IOService iOService2;
                            block8: {
                                l2 = 101442625171060L;
                                string4 = null;
                                string3 = null;
                                n2 = e.R;
                                string2 = null;
                                string = null;
                                iOService = IOKitUtil.getMatchingService((String)i.a(207352740 + (char)-15605, 207352740 + (char)-17056, (int)l2));
                                iOService2 = iOService;
                                if (n2 != 0) break block8;
                                if (iOService2 == null) break block9;
                                iOService2 = iOService;
                            }
                            byArray2 = iOService2.getByteArrayProperty(i.a(207352740 + (char)-15608, 207352740 + (char)-23487, (int)l2));
                            byArray3 = byArray2;
                            if (n2 != 0) break block10;
                            if (byArray3 == null) break block11;
                            byArray3 = byArray2;
                        }
                        string4 = Native.toString((byte[])byArray3, (Charset)StandardCharsets.UTF_8);
                    }
                    byArray2 = iOService.getByteArrayProperty(i.a(207352740 + (char)-15609, -207352740 + -((char)-1383), (int)l2));
                    byArray = byArray2;
                    if (n2 != 0) break block12;
                    if (byArray == null) break block13;
                    byArray = byArray2;
                }
                string3 = Native.toString((byte[])byArray, (Charset)StandardCharsets.UTF_8);
            }
            string2 = iOService.getStringProperty(i.a(207352740 + (char)-15607, -207352740 + -((char)-6382), (int)l2));
            string = iOService.getStringProperty(i.a(207352740 + (char)-15610, -207352740 + -((char)-20955), (int)l2));
            iOService.release();
        }
        Quartet quartet2 = quartet;
        Quartet quartet3 = quartet;
        String string5 = Util.isBlank(string4) ? i.a(207352740 + (char)-15606, -207352740 + -((char)-19075), (int)l2) : string4;
        quartet2((Object)string5, Util.isBlank(string3) ? i.a(207352740 + (char)-15612, 207352740 + (char)-5, (int)l2) : string3, Util.isBlank(string2) ? i.a(207352740 + (char)-15614, -207352740 + -((char)-16288), (int)l2) : string2, Util.isBlank(string) ? i.a(207352740 + (char)-15614, -207352740 + -((char)-16288), (int)l2) : string);
        return quartet3;
    }
}

