/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.sun.jna.platform.win32.COM.WbemcliUtil$WmiResult
 *  oshi.driver.windows.wmi.Win32Bios
 *  oshi.driver.windows.wmi.Win32Bios$BiosSerialProperty
 *  oshi.driver.windows.wmi.Win32ComputerSystemProduct
 *  oshi.driver.windows.wmi.Win32ComputerSystemProduct$ComputerSystemProductProperty
 *  oshi.util.Memoizer
 *  oshi.util.Util
 *  oshi.util.platform.windows.WmiUtil
 *  oshi.util.tuples.Pair
 */
import com.sun.jna.platform.win32.COM.WbemcliUtil;
import java.util.function.Supplier;
import oshi.driver.windows.wmi.Win32Bios;
import oshi.driver.windows.wmi.Win32ComputerSystemProduct;
import oshi.util.Memoizer;
import oshi.util.Util;
import oshi.util.platform.windows.WmiUtil;
import oshi.util.tuples.Pair;

public class e {
    private final Supplier<Pair<String, String>> S = Memoizer.memoize(e::w);
    public static int R;
    private static final String[] a;
    private static final String[] b;

    public String O(Object[] objectArray) {
        Object object;
        block3: {
            boolean bl2 = (Boolean)objectArray[0];
            object = objectArray;
            long l2 = (Long)objectArray[1];
            if (l2 <= 0L) break block3;
            if (bl2) {
                return e.a(1923583320 + 12212, -1923583320 + -5780, (int)l2) + (String)this.S.get().getB();
            }
            object = this.S.get().getB();
        }
        return (String)object;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block13: {
            var5 = new String[3];
            var3_1 = 0;
            var2_2 = "\u00c2\u00b5c8\u0007kAP\u00d0I\u00ae\u00ea\u0007j\u001dp[M\u00dfj";
            var4_3 = "\u00c2\u00b5c8\u0007kAP\u00d0I\u00ae\u00ea\u0007j\u001dp[M\u00dfj".length();
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
                            v10 = 126;
                            break;
                        }
                        case 1: {
                            v10 = 107;
                            break;
                        }
                        case 2: {
                            v10 = 66;
                            break;
                        }
                        case 3: {
                            v10 = 88;
                            break;
                        }
                        case 4: {
                            v10 = 98;
                            break;
                        }
                        case 5: {
                            v10 = 107;
                            break;
                        }
                        default: {
                            v10 = 99;
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
        e.a = var5;
        e.b = new String[3];
    }

    private static String l(Object[] objectArray) {
        block5: {
            WbemcliUtil.WmiResult wmiResult;
            block4: {
                long l2 = (Long)objectArray[0];
                WbemcliUtil.WmiResult wmiResult2 = Win32Bios.querySerialNumber();
                int n2 = R;
                wmiResult = wmiResult2;
                if (n2 != 0) break block4;
                if (wmiResult.getResultCount() <= 0) break block5;
                wmiResult = wmiResult2;
            }
            return WmiUtil.getString((WbemcliUtil.WmiResult)wmiResult, (Enum)Win32Bios.BiosSerialProperty.SERIALNUMBER, (int)0);
        }
        return null;
    }

    private static String a(int n2, int n3, int n4) {
        int n5 = (n2 ^ n4 ^ 0xFFFFEA71) & 0xFFFF;
        if (b[n5] == null) {
            int n6;
            char[] cArray = a[n5].toCharArray();
            int n7 = switch (cArray[0] & 0xFF) {
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
            e.b[n5] = new String(cArray).intern();
        }
        return b[n5];
    }

    private static Pair<String, String> w() {
        String string;
        String string2;
        block19: {
            String string3;
            block18: {
                boolean bl2;
                long l2;
                block16: {
                    int n2;
                    block17: {
                        block14: {
                            block15: {
                                long l3;
                                block13: {
                                    WbemcliUtil.WmiResult wmiResult;
                                    WbemcliUtil.WmiResult wmiResult2;
                                    block12: {
                                        l2 = 63063630215856L;
                                        l3 = l2 ^ 0x22AAD0E6ACC0L;
                                        string2 = null;
                                        string = null;
                                        wmiResult2 = Win32ComputerSystemProduct.queryIdentifyingNumberUUID();
                                        n2 = R;
                                        wmiResult = wmiResult2;
                                        if (n2 != 0) break block12;
                                        if (wmiResult.getResultCount() <= 0) break block13;
                                        wmiResult = wmiResult2;
                                    }
                                    string2 = WmiUtil.getString((WbemcliUtil.WmiResult)wmiResult, (Enum)Win32ComputerSystemProduct.ComputerSystemProductProperty.IDENTIFYINGNUMBER, (int)0);
                                    string = WmiUtil.getString((WbemcliUtil.WmiResult)wmiResult2, (Enum)Win32ComputerSystemProduct.ComputerSystemProductProperty.UUID, (int)0);
                                }
                                bl2 = Util.isBlank((String)string2);
                                if (n2 != 0) break block14;
                                if (!bl2) break block15;
                                Object[] objectArray = new Object[1];
                                objectArray[0] = l3;
                                string2 = e.l(objectArray);
                            }
                            bl2 = Util.isBlank((String)string2);
                        }
                        if (n2 != 0) break block16;
                        if (!bl2) break block17;
                        string2 = e.a(-625466040 - -((char)-5256), -625466040 - -((char)-3728), (int)l2);
                    }
                    string3 = string;
                    if (n2 != 0) break block18;
                    bl2 = Util.isBlank((String)string3);
                }
                if (!bl2) break block19;
                string3 = e.a(-625466040 - -((char)-5253), -625334970 + -((char)-11262), (int)l2);
            }
            string = string3;
        }
        return new Pair((Object)string2, (Object)string);
    }
}

