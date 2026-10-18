/*
 * Decompiled with CFR 0.152.
 */
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.InputStream;
import java.util.HashMap;
import java.util.Map;
import java.util.jar.JarInputStream;
import javax.crypto.Cipher;
import javax.crypto.spec.SecretKeySpec;

class R
extends ClassLoader {
    private final Map<String, byte[]> n = new HashMap<String, byte[]>();
    private final Map<String, byte[]> w;
    private static final String[] a;
    private static final String[] b;
    private static final long[] c;
    private static final Integer[] d;

    /*
     * Unable to fully structure code
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    R(byte[] var1_1, long var2_2, byte[] var4_3, ClassLoader var5_4) throws Exception {
        super(var5_4);
        var6_5 = e.R;
        this.w = new HashMap<String, byte[]>();
        var8_6 = Cipher.getInstance(R.a(1879805940 - 29705, 1879805940 - 23565, (int)var2_2));
        var9_7 = new SecretKeySpec(var4_3, R.a(1879805940 - 29708, -1879805940 - -6176, (int)var2_2));
        var8_6.init(2, var9_7);
        var10_8 = var8_6.doFinal(var1_1);
        var11_9 = new JarInputStream(new ByteArrayInputStream(var10_8));
        try {
            var13_10 = new byte[R.a(2002, 2360469705059484421L ^ var2_2)];
            block12: while (true) {
                v0 = var11_9;
                block13: while (true) {
                    if ((var12_13 = v0.getNextJarEntry()) == null) ** GOTO lbl75
                    v1 = var6_5;
                    block14: while (v1 == 0) {
                        block20: {
                            block21: {
                                block19: {
                                    block22: {
                                        var14_15 = new ByteArrayOutputStream();
                                        block15: while ((var15_16 = var11_9.read(var13_10)) != -1) {
                                            var14_15.write(var13_10, 0, var15_16);
                                            v2 = var6_5;
                                            do {
                                                if (v2 != 0) continue block12;
                                                v1 = var6_5;
                                                if (var2_2 < 0L) continue block14;
                                                if (v1 == 0) continue block15;
                                                var7_12 = Init.y;
                                                v2 = ++var7_12;
                                            } while (var2_2 < 0L);
                                            Init.y = v2;
                                            break;
                                        }
                                        var16_17 = var12_13.getName();
                                        var17_18 = var14_15.toByteArray();
                                        v3 = var16_17.endsWith(R.a(1879805940 - 29707, 1879805940 - 15026, (int)var2_2));
                                        if (var2_2 < 0L || var6_5 != 0) break block19;
                                        if (v3 != 0) {
                                        }
                                        ** GOTO lbl50
                                        var18_19 = var16_17.replace((char)R.a(2425, 3927046397056503215L ^ var2_2), (char)R.a(14889, 1637114545950686973L ^ var2_2)).replaceAll(R.a(1879805940 - 29706, -1879805940 - -22323, (int)var2_2), "");
                                        this.n.put(var18_19, var17_18);
                                        v3 = var6_5;
                                        if (var2_2 <= 0L) break block20;
                                        if (v3 == 0) break block21;
lbl50:
                                        // 3 sources

                                        this.w.put(var16_17, var17_18);
                                        v5 = var16_17;
                                        if (var6_5 != 0) break block21;
                                        break block22;
                                        catch (Throwable v6) {
                                            throw v6;
                                        }
                                    }
                                    v3 = (int)v5.startsWith("/");
                                }
                                if (var2_2 < 0L) break block20;
                                if (v3 == 0) {
                                    v5 = this.w.put("/" + var16_17, var17_18);
                                }
                            }
                            v3 = var6_5;
                        }
                        if (v3 != 0) ** break;
                        continue block12;
lbl75:
                        // 2 sources

                        v0 = var11_9;
                        if (var2_2 < 0L) continue block13;
                    }
                    break;
                }
                break;
            }
        }
        catch (Throwable var12_14) {
            try {
                var11_9.close();
                throw var12_14;
            }
            catch (Throwable var13_11) {
                var12_14.addSuppressed(var13_11);
            }
            throw var12_14;
        }
        {
            v0.close();
            return;
            return;
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block24: {
            block23: {
                block22: {
                    block21: {
                        var13 = new String[4];
                        var11_1 = 0;
                        var10_2 = "\u0085\u00bb\u009ag\u00ec\u00f6\u00d4\u00a2H\u00c5\u00c2\n\u00d5\u00ce0o?\u00be\u00a2g\bV:n\u0012`C\u00d4)";
                        var12_3 = "\u0085\u00bb\u009ag\u00ec\u00f6\u00d4\u00a2H\u00c5\u00c2\n\u00d5\u00ce0o?\u00be\u00a2g\bV:n\u0012`C\u00d4)".length();
                        var9_4 = 20;
                        var8_5 = -1;
lbl7:
                        // 2 sources

                        while (true) {
                            v0 = ++var8_5;
                            v1 = var10_2.substring(v0, v0 + var9_4);
                            v2 = -1;
                            break block21;
                            break;
                        }
lbl12:
                        // 1 sources

                        while (true) {
                            var13[var11_1++] = v3.intern();
                            if ((var8_5 += var9_4) < var12_3) {
                                var9_4 = var10_2.charAt(var8_5);
                                ** continue;
                            }
                            var10_2 = ";A\u00f0\u0094O?\u0003\u00a9I\u001f";
                            var12_3 = ";A\u00f0\u0094O?\u0003\u00a9I\u001f".length();
                            var9_4 = 6;
                            var8_5 = -1;
lbl21:
                            // 2 sources

                            while (true) {
                                v4 = ++var8_5;
                                v1 = var10_2.substring(v4, v4 + var9_4);
                                v2 = 0;
                                break block21;
                                break;
                            }
                            break;
                        }
lbl26:
                        // 1 sources

                        while (true) {
                            var13[var11_1++] = v3.intern();
                            if ((var8_5 += var9_4) < var12_3) {
                                var9_4 = var10_2.charAt(var8_5);
                                ** continue;
                            }
                            break block22;
                            break;
                        }
                    }
                    v5 = v1.toCharArray();
                    var14_6 = 0;
                    v6 = v5.length;
                    v7 = v5;
                    v8 = v6;
                    if (v6 > 1) ** GOTO lbl76
                    do {
                        v9 = v7;
                        v10 = v7;
                        v11 = var14_6;
                        while (true) {
                            v12 = v9[v11];
                            switch (var14_6 % 7) {
                                case 0: {
                                    v13 = 115;
                                    break;
                                }
                                case 1: {
                                    v13 = 100;
                                    break;
                                }
                                case 2: {
                                    v13 = 126;
                                    break;
                                }
                                case 3: {
                                    v13 = 94;
                                    break;
                                }
                                case 4: {
                                    v13 = 12;
                                    break;
                                }
                                case 5: {
                                    v13 = 88;
                                    break;
                                }
                                default: {
                                    v13 = 103;
                                }
                            }
                            v9[v11] = (char)(v12 ^ v13);
                            ++var14_6;
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
                    } while (v8 > var14_6);
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
                R.a = var13;
                R.b = new String[4];
                var0_7 = 37899890778676L;
                var6_8 = new long[3];
                var3_9 = 0;
                var4_10 = "\u00fe\u00c2\u0088\\x\u008a\u001bw\u0084\u00a2\u00d2\u00a5\u00f0\u00a9\u0085\u00f2\u00f3\u0002\u00dc\u00a3I\u008e($";
                var5_11 = "\u00fe\u00c2\u0088\\x\u008a\u001bw\u0084\u00a2\u00d2\u00a5\u00f0\u00a9\u0085\u00f2\u00f3\u0002\u00dc\u00a3I\u008e($".length();
                var2_12 = 0;
                while (true) {
                    break block23;
                    break;
                }
lbl97:
                // 1 sources

                while (true) {
                    var6_8[v16] = (((long)var7_13[0] & 255L) << 56 | ((long)var7_13[1] & 255L) << 48 | ((long)var7_13[2] & 255L) << 40 | ((long)var7_13[3] & 255L) << 32 | ((long)var7_13[4] & 255L) << 24 | ((long)var7_13[5] & 255L) << 16 | ((long)var7_13[6] & 255L) << 8 | (long)var7_13[7] & 255L) ^ var0_7;
                    if (var2_12 < var5_11) ** continue;
                    break block24;
                    break;
                }
            }
            var7_13 = var4_10.substring(var2_12, var2_12 += 8).getBytes("ISO-8859-1");
            v16 = var3_9++;
            ** while (true)
        }
        R.c = var6_8;
        R.d = new Integer[3];
    }

    private static int a(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x7015;
        if (d[n3] == null) {
            R.d[n3] = (int)(c[n3] ^ l2);
        }
        return d[n3];
    }

    private static String a(int n2, int n3, int n4) {
        int n5 = (n2 ^ n4 ^ 0x2F28) & 0xFFFF;
        if (b[n5] == null) {
            int n6;
            char[] cArray = a[n5].toCharArray();
            int n7 = switch (cArray[0] & 0xFF) {
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
            R.b[n5] = new String(cArray).intern();
        }
        return b[n5];
    }

    @Override
    public InputStream getResourceAsStream(String string) {
        long l2 = 17441314301571L;
        byte[] byArray = this.w.get(string);
        if (byArray != null) {
            return new ByteArrayInputStream(byArray);
        }
        return super.getResourceAsStream(string);
    }

    @Override
    protected Class<?> findClass(String string) throws ClassNotFoundException {
        long l2 = 31477196403932L;
        byte[] byArray = this.n.remove(string);
        if (byArray != null) {
            return this.defineClass(string, byArray, 0, byArray.length);
        }
        return super.findClass(string);
    }
}

