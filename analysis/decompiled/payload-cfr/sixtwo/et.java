/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1309
 *  net.minecraft.class_2246
 *  net.minecraft.class_241
 *  net.minecraft.class_2560
 *  net.minecraft.class_2680
 *  net.minecraft.class_310
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1309;
import net.minecraft.class_2246;
import net.minecraft.class_241;
import net.minecraft.class_2560;
import net.minecraft.class_2680;
import net.minecraft.class_310;
import sixtwo.cC;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.eB;
import sixtwo.gH;
import sixtwo.gS;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.iX;
import sixtwo.jg;
import sixtwo.mr;
import sixtwo.rD;

public class et
extends gg {
    private final ct qHibw;
    private final cu ISwMH;
    private final cu qAyzC;
    private final cu UayhT;
    private final cC vEDmd;
    private final cC zhqoi;
    private static final long OQSFl;
    private static final long[] peEyv;
    private static final Integer[] VPMKW;
    private static final Map Etdqp;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public et() {
        long l = OQSFl ^ 0x1D858145B39BL;
        super(gf.aZL((int)et.auI("w", (int)7219, (long)(0x1B936306C36D2E88L ^ l)), false, gh.xgeEn));
        this.qHibw = new ct(this, mr.clS(new int[]{(int)et.auI("w", (int)17457, (long)(0x36A87E75AE3DF695L ^ l)), (int)et.auI("w", (int)32288, (long)(0x21573AC0B066CC8AL ^ l)), (int)et.auI("w", (int)16780, (long)(0x46FDD542B5F4F33CL ^ l)), (int)et.auI("w", (int)16592, (long)(0x16F0214A549FF259L ^ l))}));
        int[] nArray = new int[et.auI("w", (int)27838, (long)(0x1A25748442EADE35L ^ l))];
        nArray[0] = (int)et.auI("w", (int)23440, (long)(0x1A8C24A3E157690FL ^ l));
        nArray[1] = (int)et.auI("w", (int)8046, (long)(0x1CD8ADF35B6EADCEL ^ l));
        nArray[2] = (int)et.auI("w", (int)8696, (long)(0x324FF1BC4C07134DL ^ l));
        nArray[3] = (int)et.auI("w", (int)1043, (long)(0x717611816C8369EL ^ l));
        nArray[4] = (int)et.auI("w", (int)17340, (long)(0x1F125671ACEE712BL ^ l));
        nArray[5] = (int)et.auI("w", (int)24341, (long)(0x564FEED93EE7ED8FL ^ l));
        nArray[et.auI("w", (int)17151, (long)(0x24A042E7F8717073L ^ l))] = (int)et.auI("w", (int)26928, (long)(0x329BDD654214DBA9L ^ l));
        this.ISwMH = new cu(this.qHibw, mr.clS(nArray));
        int[] nArray2 = new int[et.auI("w", (int)13124, (long)(0x2AFA9707AC9601FBL ^ l))];
        nArray2[0] = (int)et.auI("w", (int)30848, (long)(0x64367327BA064A12L ^ l));
        nArray2[1] = (int)et.auI("w", (int)24341, (long)(0x564FEED93EE7ED8FL ^ l));
        nArray2[2] = (int)et.auI("w", (int)4562, (long)(0xCBBCB363707A36CL ^ l));
        nArray2[3] = (int)et.auI("w", (int)15987, (long)(0xC23928D51F00CDFL ^ l));
        nArray2[4] = (int)et.auI("w", (int)2589, (long)(0x1209EB42681B38A4L ^ l));
        nArray2[5] = (int)et.auI("w", (int)11115, (long)(0x1EF33753F98719C6L ^ l));
        this.qAyzC = new cu(this.qHibw, mr.clS(nArray2)).SY();
        this.UayhT = new cu(this.qHibw, mr.clS(new int[]{(int)et.auI("w", (int)10512, (long)(0x541CB446770C9BB2L ^ l)), (int)et.auI("w", (int)3481, (long)(0x7F7D79E8C1A6BF28L ^ l)), (int)et.auI("w", (int)24341, (long)(0x564FEED93EE7ED8FL ^ l)), (int)et.auI("w", (int)4562, (long)(0xCBBCB363707A36CL ^ l)), (int)et.auI("w", (int)20588, (long)(0x7D84EB56562D62DFL ^ l))}));
        int[] nArray3 = new int[et.auI("w", (int)8269, (long)(0x4EC94C5EB3A312FAL ^ l))];
        nArray3[0] = (int)et.auI("w", (int)8188, (long)(0x4D951D979319AD5BL ^ l));
        nArray3[1] = (int)et.auI("w", (int)3481, (long)(0x7F7D79E8C1A6BF28L ^ l));
        nArray3[2] = (int)et.auI("w", (int)10948, (long)(0x132A86764AE61872L ^ l));
        nArray3[3] = (int)et.auI("w", (int)4562, (long)(0xCBBCB363707A36CL ^ l));
        nArray3[4] = (int)et.auI("w", (int)27839, (long)(0x4C76072483A0DE2FL ^ l));
        nArray3[5] = (int)et.auI("w", (int)3481, (long)(0x7F7D79E8C1A6BF28L ^ l));
        nArray3[et.auI("w", (int)13124, (long)(0x2AFA9707AC9601FBL ^ l))] = (int)et.auI("w", (int)20714, (long)(0x70456827E2A9625EL ^ l));
        nArray3[et.auI("w", (int)5396, (long)(0x6B0B98FB209B27ACL ^ l))] = (int)et.auI("w", (int)6228, (long)(0x79DD4AE37DF52ACAL ^ l));
        nArray3[et.auI("w", (int)5113, (long)(0x1A7B86A3B6A216FL ^ l))] = (int)et.auI("w", (int)26928, (long)(0x329BDD654214DBA9L ^ l));
        nArray3[et.auI("w", (int)28561, (long)(0x384CA1C436D35D3FL ^ l))] = (int)et.auI("w", (int)24341, (long)(0x564FEED93EE7ED8FL ^ l));
        nArray3[et.auI("w", (int)19047, (long)(0x32BBF0A6666BF8EDL ^ l))] = (int)et.auI("w", (int)55, (long)(0x1ACDFAFD9638B2A2L ^ l));
        nArray3[et.auI("w", (int)20636, (long)(0x9D9944561BC6226L ^ l))] = (int)et.auI("w", (int)20158, (long)(0x751FAF25753F7C2FL ^ l));
        nArray3[et.auI("w", (int)17931, (long)(0x720DFA75563974ADL ^ l))] = (int)et.auI("w", (int)4248, (long)(0x78D7A858C6E2210L ^ l));
        nArray3[et.auI("w", (int)14924, (long)(0x2EC8EDEE2E2188FEL ^ l))] = (int)et.auI("w", (int)17448, (long)(0x6C69C970317CF695L ^ l));
        nArray3[et.auI("w", (int)24205, (long)(0x6A6668A0EAD06C2CL ^ l))] = (int)et.auI("w", (int)17448, (long)(0x6C69C970317CF695L ^ l));
        nArray3[et.auI("w", (int)17700, (long)(0x18ECA346227BF798L ^ l))] = (int)et.auI("w", (int)20588, (long)(0x7D84EB56562D62DFL ^ l));
        this.vEDmd = new cC(this, mr.clS(nArray3)).Vy(0.01).Vw(0.1).Vx(2.0).VA(0.64);
        int[] nArray4 = new int[et.auI("w", (int)24427, (long)(0x681331C9E8616DC0L ^ l))];
        nArray4[0] = (int)et.auI("w", (int)25139, (long)(0x778824318EEAD0A0L ^ l));
        nArray4[1] = (int)et.auI("w", (int)17448, (long)(0x6C69C970317CF695L ^ l));
        nArray4[2] = (int)et.auI("w", (int)559, (long)(0x1FBFA826BFE1B08CL ^ l));
        nArray4[3] = (int)et.auI("w", (int)6228, (long)(0x79DD4AE37DF52ACAL ^ l));
        nArray4[4] = (int)et.auI("w", (int)4562, (long)(0xCBBCB363707A36CL ^ l));
        nArray4[5] = (int)et.auI("w", (int)2311, (long)(0x70E84EADA949BB9CL ^ l));
        nArray4[et.auI("w", (int)13124, (long)(0x2AFA9707AC9601FBL ^ l))] = (int)et.auI("w", (int)26928, (long)(0x329BDD654214DBA9L ^ l));
        nArray4[et.auI("w", (int)5396, (long)(0x6B0B98FB209B27ACL ^ l))] = (int)et.auI("w", (int)24341, (long)(0x564FEED93EE7ED8FL ^ l));
        nArray4[et.auI("w", (int)2556, (long)(0x2875F8345D0D3B60L ^ l))] = (int)et.auI("w", (int)7389, (long)(0x62A17205A3ADAE49L ^ l));
        nArray4[et.auI("w", (int)13570, (long)(0x413FD3E72FF0879AL ^ l))] = (int)et.auI("w", (int)20158, (long)(0x751FAF25753F7C2FL ^ l));
        nArray4[et.auI("w", (int)31418, (long)(0x694CEA3EFEA6C812L ^ l))] = (int)et.auI("w", (int)11087, (long)(0x66212689BA2119D2L ^ l));
        nArray4[et.auI("w", (int)7931, (long)(0x69DE08E4B0F1AC54L ^ l))] = (int)et.auI("w", (int)17448, (long)(0x6C69C970317CF695L ^ l));
        nArray4[et.auI("w", (int)16320, (long)(0x37AD8295203E0D65L ^ l))] = (int)et.auI("w", (int)17448, (long)(0x6C69C970317CF695L ^ l));
        nArray4[et.auI("w", (int)16077, (long)(0x5A7153FD51D00C64L ^ l))] = (int)et.auI("w", (int)20588, (long)(0x7D84EB56562D62DFL ^ l));
        this.zhqoi = new cC(this, mr.clS(nArray4)).Vy(0.01).Vw(0.1).Vx(2.0).VA(0.64);
        this.zhqoi.Vf(() -> this.qHibw.SQ(1));
        this.vEDmd.Vf(() -> {
            boolean bl;
            block6: {
                block8: {
                    block7: {
                        long l = OQSFl ^ 0x205845E8065DL;
                        String[] stringArray = eB.avS();
                        try {
                            try {
                                try {
                                    bl = this.qHibw.SQ(1);
                                    if (stringArray == null) break block6;
                                    if (bl) break block7;
                                }
                                catch (MatchException matchException) {
                                    throw et.auF(matchException);
                                }
                                bl = this.qHibw.SQ(2);
                                if (stringArray == null) break block6;
                            }
                            catch (MatchException matchException) {
                                throw et.auF(matchException);
                            }
                            if (!bl) break block8;
                        }
                        catch (MatchException matchException) {
                            throw et.auF(matchException);
                        }
                    }
                    bl = true;
                    break block6;
                }
                bl = false;
            }
            return bl;
        });
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                et.OQSFl = gb.aYR(2006281515048391372L, 4209786483738017371L, MethodHandles.lookup().lookupClass()).a(121145847618753L);
                et.Etdqp = new HashMap<K, V>(13);
                var0 = et.OQSFl ^ 73482026509078L;
                var2_1 = Cipher.getInstance("DES/CBC/NoPadding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var0 >>> 56);
                for (var3_2 = 1; var3_2 < 8; ++var3_2) {
                    v2 = v2;
                    v2[var3_2] = (byte)(var0 << var3_2 * 8 >>> 56);
                }
                var2_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var8_3 = new long[54];
                var5_4 = 0;
                var6_5 = "\u00e8W\u00f9fv<\u00c8g\u00a6\u00af#\u00ad\u00df\u00f8XVEo\u00d3\u009e\u00ae@\u0095\u00c5J\u001ds\u00f8\u000bO\u0019C-\u00e9d9\u00104B\u00de\u00b0\u00d4`\u000f\u0098\u00fah\u0094\u00a8\u0080_\u00c7\u00d1)\u00b3$\u00c7I?\u00e8\u00c4\u008d\u00cd\u008e\u00c4%\u00ec\u008f\u0017q\u00f0]\u00bf\u00c6/\u0000\u0019?(AR\u00ff2\u00ea\u00d3\u008c\u00adRO\u00e3\u0019#\u00c6\u00e4\u00b1\u00b5\u009e\u0002a\u00868\u0018\u00f0<\u0087\u00d5B\u0097H\u00e9P\u00dc\u0087&\u008f\u00b0\u00dbh\u00f3\u00e4\u008e'3b\u00f1w;Sxu\t\u00eb\u0090\u009a\u00ac\u0001\u00b8\"\u009b\u00fa\u009d\u00df\u0083\u00f4\u00a3\u0083r\u00f6v\u001fT\u00cb\u00f2\u00c2\u00c3\u00e5\u00f9\u00e11)t\u00a5I\u0080\u00a3\u00bb\u0002}\u0013\u0017\u00abs\u00ba\u00bd\u00e2Lu\u00123sgo$`t\u00fcd\u0081\u0080z435\u009aa0\u00a45a!C\u0017\u00b46t\t$\u00d8B4x\u0011p\u00d9`\u00a2i\u0095\u00bb\u00b8\u001f\u00eba\u008f\u00ed\u00dd\u00e0\u00b1\u0088\u0013\u007fyi<\u001b\u00e8\u00f4\u0082\u00b6\u00cd\u00f2\r%\u0003\u0006>J\u00d8\u00c6\u00ce0\u0082\u00c2\u00d5Q\u0084\u0082\u00a7Dr\u00cf\u00c3\u00ccdL\u000eby\u00fb\n\u00a6(F\u0012\u001d\\j\u009a\u00fe\u009e\u00a5\u00a4/\b\u00b1\u0018C\u00b3\u0000\u00bf\u0005c3\u00a11p`b8\u00c8W\u00e8\u0089\u00d7\u00b4\u00cd\u00efe\u0086B\u009c\u0011t\u00ab\u00b6h\u00809\u00e9E\u0012F\u00fa\u0010@C\u00ae0\u0094\u00fb\u0010\u008d3R\u00f9\u00d5i\u001a\u00c2\u0004\u00dc\u00cb\u0086\u00ed\u0099\u008c\u0081\u00c6\u0010oU\u00014NN\u00e9\u001f\u0018\u00ef\u00b1\u00c0\u00c7\b\u00f1\u00a1N\u00f8\u00ee\u00a2\u00ce\u009a\u0013\u00b1J\u00ab\u0083\u00fbqW~\u00f2\u0089\u009d`\u0016\u00c9\u0094\u0085\u008b\u0085^D\u0015x\u00b8\u00ea\u001c\u0017\u00e0\u00d7yU\u008a\u0016=>\u00ba\u00e9\u000bB\u0094A\u00f4\u00ab\u00bcy";
                var7_6 = "\u00e8W\u00f9fv<\u00c8g\u00a6\u00af#\u00ad\u00df\u00f8XVEo\u00d3\u009e\u00ae@\u0095\u00c5J\u001ds\u00f8\u000bO\u0019C-\u00e9d9\u00104B\u00de\u00b0\u00d4`\u000f\u0098\u00fah\u0094\u00a8\u0080_\u00c7\u00d1)\u00b3$\u00c7I?\u00e8\u00c4\u008d\u00cd\u008e\u00c4%\u00ec\u008f\u0017q\u00f0]\u00bf\u00c6/\u0000\u0019?(AR\u00ff2\u00ea\u00d3\u008c\u00adRO\u00e3\u0019#\u00c6\u00e4\u00b1\u00b5\u009e\u0002a\u00868\u0018\u00f0<\u0087\u00d5B\u0097H\u00e9P\u00dc\u0087&\u008f\u00b0\u00dbh\u00f3\u00e4\u008e'3b\u00f1w;Sxu\t\u00eb\u0090\u009a\u00ac\u0001\u00b8\"\u009b\u00fa\u009d\u00df\u0083\u00f4\u00a3\u0083r\u00f6v\u001fT\u00cb\u00f2\u00c2\u00c3\u00e5\u00f9\u00e11)t\u00a5I\u0080\u00a3\u00bb\u0002}\u0013\u0017\u00abs\u00ba\u00bd\u00e2Lu\u00123sgo$`t\u00fcd\u0081\u0080z435\u009aa0\u00a45a!C\u0017\u00b46t\t$\u00d8B4x\u0011p\u00d9`\u00a2i\u0095\u00bb\u00b8\u001f\u00eba\u008f\u00ed\u00dd\u00e0\u00b1\u0088\u0013\u007fyi<\u001b\u00e8\u00f4\u0082\u00b6\u00cd\u00f2\r%\u0003\u0006>J\u00d8\u00c6\u00ce0\u0082\u00c2\u00d5Q\u0084\u0082\u00a7Dr\u00cf\u00c3\u00ccdL\u000eby\u00fb\n\u00a6(F\u0012\u001d\\j\u009a\u00fe\u009e\u00a5\u00a4/\b\u00b1\u0018C\u00b3\u0000\u00bf\u0005c3\u00a11p`b8\u00c8W\u00e8\u0089\u00d7\u00b4\u00cd\u00efe\u0086B\u009c\u0011t\u00ab\u00b6h\u00809\u00e9E\u0012F\u00fa\u0010@C\u00ae0\u0094\u00fb\u0010\u008d3R\u00f9\u00d5i\u001a\u00c2\u0004\u00dc\u00cb\u0086\u00ed\u0099\u008c\u0081\u00c6\u0010oU\u00014NN\u00e9\u001f\u0018\u00ef\u00b1\u00c0\u00c7\b\u00f1\u00a1N\u00f8\u00ee\u00a2\u00ce\u009a\u0013\u00b1J\u00ab\u0083\u00fbqW~\u00f2\u0089\u009d`\u0016\u00c9\u0094\u0085\u008b\u0085^D\u0015x\u00b8\u00ea\u001c\u0017\u00e0\u00d7yU\u008a\u0016=>\u00ba\u00e9\u000bB\u0094A\u00f4\u00ab\u00bcy".length();
                var4_7 = 0;
                while (true) {
                    var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                    v3 = var8_3;
                    v4 = var5_4++;
                    v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                    v6 = -1;
                    break block8;
                    break;
                }
lbl26:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    var6_5 = "9\u00b3\u008b\u001d\u00d0\u000b\u00037(9\u009aV$e*<";
                    var7_6 = "9\u00b3\u008b\u001d\u00d0\u000b\u00037(9\u009aV$e*<".length();
                    var4_7 = 0;
                    while (true) {
                        var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                        v3 = var8_3;
                        v4 = var5_4++;
                        v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                        v6 = 0;
                        break block8;
                        break;
                    }
                    break;
                }
lbl39:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    break block9;
                    break;
                }
            }
            var10_9 = v5;
            var12_10 = var2_1.doFinal(new byte[]{(byte)(var10_9 >>> 56), (byte)(var10_9 >>> 48), (byte)(var10_9 >>> 40), (byte)(var10_9 >>> 32), (byte)(var10_9 >>> 24), (byte)(var10_9 >>> 16), (byte)(var10_9 >>> 8), (byte)var10_9});
            v7 = ((long)var12_10[0] & 255L) << 56 | ((long)var12_10[1] & 255L) << 48 | ((long)var12_10[2] & 255L) << 40 | ((long)var12_10[3] & 255L) << 32 | ((long)var12_10[4] & 255L) << 24 | ((long)var12_10[5] & 255L) << 16 | ((long)var12_10[6] & 255L) << 8 | (long)var12_10[7] & 255L;
            switch (v6) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl52:
                // 1 sources

                ** continue;
            }
        }
        et.peEyv = var8_3;
        et.VPMKW = new Integer[54];
    }

    public ct aux() {
        return this.qHibw;
    }

    private static MatchException auF(MatchException matchException) {
        return matchException;
    }

    public cC auC() {
        return this.zhqoi;
    }

    private static int auH(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = et.auG(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static CallSite auI(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/et" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int auG(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x511F;
        if (VPMKW[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = peEyv[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])Etdqp.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    Etdqp.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/et", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            et.VPMKW[n2] = n3;
        }
        return VPMKW[n2];
    }

    @hG
    public void auv(gH.th th2) {
        block19: {
            class_310 class_3102;
            block23: {
                boolean bl;
                block21: {
                    String[] stringArray;
                    block22: {
                        et et2;
                        block20: {
                            boolean bl2;
                            block18: {
                                block16: {
                                    block17: {
                                        long l = OQSFl ^ 0x628F0D0D0B8L;
                                        stringArray = eB.avS();
                                        try {
                                            bl2 = this.bab();
                                            if (stringArray == null) break block16;
                                            if (bl2) break block17;
                                        }
                                        catch (MatchException matchException) {
                                            throw et.auF(matchException);
                                        }
                                        return;
                                    }
                                    bl2 = jg.bBs((class_1309)rD.dlmvG.field_1724);
                                }
                                try {
                                    try {
                                        try {
                                            if (stringArray == null) break block18;
                                            if (!bl2) break block19;
                                        }
                                        catch (MatchException matchException) {
                                            throw et.auF(matchException);
                                        }
                                        et2 = this;
                                        if (stringArray == null) break block20;
                                    }
                                    catch (MatchException matchException) {
                                        throw et.auF(matchException);
                                    }
                                    bl2 = et2.qHibw.SQ(1);
                                }
                                catch (MatchException matchException) {
                                    throw et.auF(matchException);
                                }
                            }
                            if (!bl2) break block19;
                            et2 = this;
                        }
                        class_241 class_2412 = iX.bxO(et2.vEDmd.VB());
                        try {
                            try {
                                rD.dlmvG.field_1724.method_18800((double)class_2412.field_1343, 0.0, (double)class_2412.field_1342);
                                bl = rD.dlmvG.field_1690.field_1903.method_1434();
                                if (stringArray == null) break block21;
                                if (!bl) break block22;
                            }
                            catch (MatchException matchException) {
                                throw et.auF(matchException);
                            }
                            rD.dlmvG.field_1724.method_18799(rD.dlmvG.field_1724.method_18798().method_1031(0.0, (double)this.zhqoi.VB(), 0.0));
                        }
                        catch (MatchException matchException) {
                            throw et.auF(matchException);
                        }
                    }
                    try {
                        class_3102 = rD.dlmvG;
                        if (stringArray == null) break block23;
                        bl = class_3102.field_1690.field_1832.method_1434();
                    }
                    catch (MatchException matchException) {
                        throw et.auF(matchException);
                    }
                }
                if (!bl) break block19;
                class_3102 = rD.dlmvG;
            }
            class_3102.field_1724.method_18799(rD.dlmvG.field_1724.method_18798().method_1031(0.0, (double)(-this.zhqoi.VB()), 0.0));
        }
    }

    @hG
    public void auw(gS gS2) {
        block11: {
            boolean bl;
            block10: {
                long l = OQSFl ^ 0x1E080BAA5FF6L;
                String[] stringArray = eB.avS();
                try {
                    if (!this.bab()) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw et.auF(matchException);
                }
                class_2680 class_26802 = gS2.bcg();
                try {
                    try {
                        bl = class_26802.method_26204() instanceof class_2560;
                        if (stringArray == null) break block10;
                        if (!bl) break block11;
                    }
                    catch (MatchException matchException) {
                        throw et.auF(matchException);
                    }
                    bl = this.qHibw.SQ(2);
                }
                catch (MatchException matchException) {
                    throw et.auF(matchException);
                }
            }
            try {
                if (bl) {
                    gS2.bci(class_2246.field_10566.method_9564());
                }
            }
            catch (MatchException matchException) {
                throw et.auF(matchException);
            }
        }
    }

    public cu auy() {
        return this.ISwMH;
    }

    public cu auz() {
        return this.qAyzC;
    }

    public cu auA() {
        return this.UayhT;
    }

    public cC auB() {
        return this.vEDmd;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(et.class, "auH", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
