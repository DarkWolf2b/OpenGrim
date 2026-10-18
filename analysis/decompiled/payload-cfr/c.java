/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  oshi.driver.linux.Dmidecode
 *  oshi.driver.linux.Lshal
 *  oshi.driver.linux.Lshw
 *  oshi.driver.linux.Sysfs
 *  oshi.util.Memoizer
 */
import java.util.function.Supplier;
import oshi.driver.linux.Dmidecode;
import oshi.driver.linux.Lshal;
import oshi.driver.linux.Lshw;
import oshi.driver.linux.Sysfs;
import oshi.util.Memoizer;

public class c {
    private final Supplier<String> D = Memoizer.memoize(c::p);
    private static final String[] a;
    private static final String[] b;

    /*
     * Unable to fully structure code
     */
    static {
        block13: {
            var5 = new String[2];
            var3_1 = 0;
            var2_2 = "HE\u00e8\u00ea\u0007`\u0080\u00eb$\u00dc\u00fc\u008a";
            var4_3 = "HE\u00e8\u00ea\u0007`\u0080\u00eb$\u00dc\u00fc\u008a".length();
            var1_4 = 4;
            var0_5 = -1;
lbl7:
            // 2 sources

            while (true) {
                continue;
                break;
            }
lbl9:
            // 1 sources

            while (true) {
                var5[var3_1++] = new String(v0).intern();
                if ((var0_5 += var1_4) < var4_3) {
                    var1_4 = var2_2.charAt(var0_5);
                    ** continue;
                }
                break block13;
                break;
            }
            v1 = ++var0_5;
            v2 = var2_2.substring(v1, v1 + var1_4).toCharArray();
            var6_6 = 0;
            v3 = v2.length;
            v4 = v2;
            v5 = v3;
            if (v3 > 1) ** GOTO lbl59
            do {
                v6 = v4;
                v7 = v4;
                v8 = var6_6;
                while (true) {
                    v9 = v6[v8];
                    switch (var6_6 % 7) {
                        case 0: {
                            v10 = 81;
                            break;
                        }
                        case 1: {
                            v10 = 36;
                            break;
                        }
                        case 2: {
                            v10 = 125;
                            break;
                        }
                        case 3: {
                            v10 = 125;
                            break;
                        }
                        case 4: {
                            v10 = 103;
                            break;
                        }
                        case 5: {
                            v10 = 3;
                            break;
                        }
                        default: {
                            v10 = 17;
                        }
                    }
                    v6[v8] = (char)(v9 ^ v10);
                    ++var6_6;
                    v4 = v7;
                    v5 = v5;
                    if (v5 != 0) break;
                    v7 = v4;
                    v11 = v5;
                    v8 = v5;
                    v6 = v4;
                }
lbl59:
                // 2 sources

                v0 = v4;
                v11 = v5;
            } while (v5 > var6_6);
            ** while (true)
        }
        c.a = var5;
        c.b = new String[2];
    }

    private static String a(int n, int n2, int n3) {
        int n4 = (n ^ n3 ^ 0x2728) & 0xFFFF;
        if (b[n4] == null) {
            int n5;
            char[] cArray = a[n4].toCharArray();
            int n6 = switch (cArray[0] & 0xFF) {
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
            int n7 = ((n2 ^= n3) & 0xFF) - n6;
            if (n7 < 0) {
                n7 += 256;
            }
            if ((n5 = ((n2 & 0xFFFF) >>> 8) - n6) < 0) {
                n5 += 256;
            }
            int n8 = 0;
            while (n8 < cArray.length) {
                int n9 = n8 % 2;
                int n10 = n8;
                char[] cArray2 = cArray;
                char c2 = cArray[n10];
                if (n9 == 0) {
                    cArray2[n10] = (char)(c2 ^ n7);
                    n7 = ((n7 >>> 3 | n7 << 5) ^ cArray[n8]) & 0xFF;
                } else {
                    cArray2[n10] = (char)(c2 ^ n5);
                    n5 = ((n5 >>> 3 | n5 << 5) ^ cArray[n8]) & 0xFF;
                }
                ++n8;
            }
            c.b[n4] = new String(cArray).intern();
        }
        return b[n4];
    }

    private static String p() {
        String string;
        block10: {
            String string2;
            block11: {
                long l = 91591215085408L;
                int n = e.R;
                string = string2 = Sysfs.queryUUID();
                if (n != 0) break block10;
                if (string != null) break block11;
                string = string2 = Dmidecode.queryUUID();
                if (n != 0) break block10;
                if (string != null) break block11;
                string = string2 = Lshal.queryUUID();
                if (n != 0) break block10;
                if (string != null) break block11;
                string = string2 = Lshw.queryUUID();
                if (n != 0) break block10;
                if (string != null) break block11;
                return c.a(1037550120 - (char)-3617, 1037419050 + (char)-648, (int)l);
            }
            string = string2;
        }
        return string;
    }

    public String T(Object[] objectArray) {
        Object object;
        block3: {
            boolean bl = (Boolean)objectArray[0];
            object = objectArray;
            long l = (Long)objectArray[1];
            if (l <= 0L) break block3;
            if (bl) {
                return c.a(858639570 + 23819, -858639570 + -16971, (int)l) + this.D.get();
            }
            object = this.D.get();
        }
        return (String)object;
    }
}
