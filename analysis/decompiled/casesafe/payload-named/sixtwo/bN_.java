/*
 * Decompiled with CFR 0.152.
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
import sixtwo.bJ;
import sixtwo.bW;
import sixtwo.cv;
import sixtwo.fs;
import sixtwo.gb;
import sixtwo.ii;
import sixtwo.lC;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.rD;

public class bN
extends bW {
    private static final long QtOLO;
    private static final long[] GPNOW;
    private static final Integer[] OhOEC;
    private static final Map iaAGG;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bN(cv cv2) {
        long l2 = QtOLO ^ 0x73A8ED3ED48L;
        int[] nArray = new int[bN.Nw("z", (int)31185, (long)(0x7D8A2B52CCAE610EL ^ l2))];
        nArray[0] = (int)bN.Nw("z", (int)339, (long)(0x7E85E23ADB5F1994L ^ l2));
        nArray[1] = (int)bN.Nw("z", (int)6538, (long)(0x74C2DBCD18FC0141L ^ l2));
        nArray[2] = (int)bN.Nw("z", (int)24280, (long)(0x4DD330028C06C623L ^ l2));
        nArray[3] = (int)bN.Nw("z", (int)5911, (long)(0x66CD8D1AB8048FEDL ^ l2));
        nArray[4] = (int)bN.Nw("z", (int)29569, (long)(0x4DB95C2F08B8EB4BL ^ l2));
        nArray[5] = (int)bN.Nw("z", (int)25782, (long)(0x2124378507907C63L ^ l2));
        nArray[bN.Nw("z", (int)30521, (long)(0x6A4F5C9BFB78EFE0L ^ l2))] = (int)bN.Nw("z", (int)32461, (long)(0x101C9E8582BFE615L ^ l2));
        nArray[bN.Nw("z", (int)10708, (long)(0x5773C1F48F5B3125L ^ l2))] = (int)bN.Nw("z", (int)1805, (long)(0x3FC93188D1DC1FEBL ^ l2));
        nArray[bN.Nw("z", (int)30827, (long)(0x41F472F6441960A8L ^ l2))] = (int)bN.Nw("z", (int)7455, (long)(0x7562F2FFDC8F059EL ^ l2));
        nArray[bN.Nw("z", (int)31676, (long)(0x5CD5397C0F00E36FL ^ l2))] = (int)bN.Nw("z", (int)24812, (long)(0x47E5847F8890780BL ^ l2));
        nArray[bN.Nw("z", (int)28141, (long)(0x7B8AF1E758377533L ^ l2))] = (int)bN.Nw("z", (int)1029, (long)(0x7D66CE9F83549CCBL ^ l2));
        nArray[bN.Nw("z", (int)11673, (long)(0x6D40AECE6D7DB571L ^ l2))] = (int)bN.Nw("z", (int)28293, (long)(0x123B9C1A33CF7605L ^ l2));
        nArray[bN.Nw("z", (int)3329, (long)(0x207C02CBBA1515F3L ^ l2))] = (int)bN.Nw("z", (int)32498, (long)(0x25803FC83B09E60BL ^ l2));
        nArray[bN.Nw("z", (int)9156, (long)(0x69033A445235BB33L ^ l2))] = (int)bN.Nw("z", (int)27074, (long)(0x4F6403CAE749F11FL ^ l2));
        nArray[bN.Nw("z", (int)12206, (long)(0x513456940580B742L ^ l2))] = (int)bN.Nw("z", (int)305, (long)(0x3E042DA4125F99E6L ^ l2));
        nArray[bN.Nw("z", (int)7297, (long)(0x2A24921902740471L ^ l2))] = (int)bN.Nw("z", (int)15282, (long)(0x7DBB6B8A3FE8A366L ^ l2));
        nArray[bN.Nw("z", (int)703, (long)(0x775A5D0A64D99A6EL ^ l2))] = (int)bN.Nw("z", (int)1805, (long)(0x3FC93188D1DC1FEBL ^ l2));
        nArray[bN.Nw("z", (int)19766, (long)(0x14FC52BF9D8255D3L ^ l2))] = (int)bN.Nw("z", (int)14344, (long)(0x9CA9E666965A0CAL ^ l2));
        nArray[bN.Nw("z", (int)10905, (long)(0x2A09266A2CFAB245L ^ l2))] = (int)bN.Nw("z", (int)12573, (long)(0x465F7F26C23AA99FL ^ l2));
        nArray[bN.Nw("z", (int)28819, (long)(0x38F1BCE777C8E879L ^ l2))] = (int)bN.Nw("z", (int)26992, (long)(0x7E9C70B6A44AF194L ^ l2));
        nArray[bN.Nw("z", (int)31083, (long)(0x32DF41B6F559E1A2L ^ l2))] = (int)bN.Nw("z", (int)14735, (long)(0x50E2807BA1C7A161L ^ l2));
        nArray[bN.Nw("z", (int)24788, (long)(0x6F9A3F1CB931F821L ^ l2))] = (int)bN.Nw("z", (int)24043, (long)(0x2514F2DBAEC5C524L ^ l2));
        nArray[bN.Nw("z", (int)26796, (long)(0x595264353B74F077L ^ l2))] = (int)bN.Nw("z", (int)30269, (long)(0x5D74736174A7EEC0L ^ l2));
        nArray[bN.Nw("z", (int)27575, (long)(0x6C44D30BA124735AL ^ l2))] = (int)bN.Nw("z", (int)9984, (long)(0x319352C0F9B33FFFL ^ l2));
        nArray[bN.Nw("z", (int)15837, (long)(0x1CC292EADC51A51DL ^ l2))] = (int)bN.Nw("z", (int)14735, (long)(0x50E2807BA1C7A161L ^ l2));
        nArray[bN.Nw("z", (int)23197, (long)(0x77E968F628A9424FL ^ l2))] = (int)bN.Nw("z", (int)15044, (long)(0x6F5CB51BFF3A2227L ^ l2));
        nArray[bN.Nw("z", (int)31360, (long)(0x6E1935A09C48E24CL ^ l2))] = (int)bN.Nw("z", (int)10510, (long)(0x43552D40DB84B1ECL ^ l2));
        nArray[bN.Nw("z", (int)23368, (long)(0x34DBC85EEBAC389L ^ l2))] = (int)bN.Nw("z", (int)26992, (long)(0x7E9C70B6A44AF194L ^ l2));
        super(cv2, mr.clS(nArray));
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                bN.QtOLO = gb.aYR(-2473864786023251727L, 2366648308828434796L, MethodHandles.lookup().lookupClass()).a(190608559322180L);
                bN.iaAGG = new HashMap<K, V>(13);
                var0 = bN.QtOLO ^ 100674683477274L;
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
                var8_3 = new long[69];
                var5_4 = 0;
                var6_5 = "\u0088s\r\u00b4i@\u00d6\"\u0086I\u00dc\u00d2lxh\u00da\u0096\u00ed\u007f\u008ex\u00bd\u00be\u001ax\bW\u0001d%t\u009e\u00c5u!\u00fe \u0083] \u00d4\u00ef\u00f83\u0016r\u00d9z\u009e\u008d\u0004\u00ef\u00e0=\u0019\u00c2j\u00f05PE\u00c0\u00bd\u00a7i/uJ\u00be\u008ba\u001e:\u008bM;\u00eb\u00ac\u00b4\u00c4\u00f4\u0099\u0007\u001a\u0095|\u0088\u00f1U\u0015\u00a7\u00c4o<D\u0004\"=KJ\u009d\u00e6\u00f3\u0082Z2\t\u00d6\u008c\u00ee\u00e8\u00db\u00d9\t\u00a7\u0004\u00bc\u00a5\u00a1\u008cM\u00b9N\u0017\u00c18\b\u009c\u00f3\u0086fkT\u00a8\u0017I\u00a7\u00bf\u00e4\u00e4G\u00ac\u0016\u00e5\u00d9\u0088\u00f3\u00e2\u00e5\u00f2\u00be<_Q\u00fb\u0084\u008cy\u00c9m\u0011'\u00ad\u00ce4\u00bc\u00a8\u00b9$\u00dd\u00f0\u0094\u00d4\u00a4\u00c7!\u00ea\u00982\f\u00ad\u009d<\u00f3\u00dd)\u00d3>L\u00a4\u00a2]\u00f3E\u001f8\u00af\u00ce\u00eb\u00b0F\u009a\u0007\u009b\u00c6qF\u008e'\u00fa\u0092\u0012\u00d4\"\u00af\u00fb\u000b\u00e7F\u00d4\u0094\u0094|'7\u0001\u00cd+(\u00e9\u009e\u0082\u0001`\u009a\u0016fx\u00df\u00fbcFOg\u0089\u008f\u001a\u00b8\u0081~\u00b9\u00fa\u0015\u000b\u008e\u00ab]~B\u00d0\n\u00feV\u00b6I\u009a\u0001o\u0085\u008b\u00b1\u0082\u00d7\u00f2\u008d\u00de\u00c1<\u0017q\u00b2k\u00d1\u000f\u00b8\u0017%\u00d0*0\u00c8\u00b1j\u0014zVI\u008cPim5\u00aa\u00a5\u00e1\u00ceJ\u00b9P\u00cb\u0080\u0091#(\u008b%TUoWY\u0099&ftbY\u00d3k\u00b7\u0011\u00de\u0019\u00ffH\u008a1\u00ea\u00cc\u00c8\u00cfWd\u00f6\u00cf\u00c0\u0099\u007f\u00e0\n\b\u00beZ\u00d2w\u00ed\u00c0\u00f1\u000b\u0014y\u0096,\u00c5z\u0006\u0001y\u0099\u00b3\u00b0\u0013$\u0011\u001c\u0094\u00021t\u00d0\u00dc\u00dd\u00d1h{w.\u00c3\u00e0S\u0095\u00e1\u00c6\u000bf\u00d5/~\\\u0017\u00c5\u009b\u00d8\u0000\u0093\u00d4\u00e1s\u00dfA\u000e\u00da\u0003\u00da\u0091p \u0014|\u00aa\u00cc\u0083\u0016z\u0099\u00c0\u0001\u0004\u0095o\u0083O1S\"yi\u0005\u00bd\u0000\u00b6\u00afFB\u009b9\u0087\u0095\u00bd\u00b1w\u00d6\u008f\u0092\u00fe\u0003\u0014c6\u00c5\u0098\u0012\u00ac? \u00a5\u00ce\r\u008d\u00e5\u0002\u0099\u00cc\u00dd\u0089\u0096\u00fdK:R\u0091@\u00d4\u0086\u00d5_\u0014\u00d5[\u008a!9\u000e\u00e0\"\bdju\u0080\u00e0\u0085G\u00f7\ru\u00bd)\u0080m\u00f5\u00cd\b\u0085\u00ef\u0011\u00b6=\u00c2i\u00a3'}!\u00f9F\u008d2\u00a0\u000e\u00aa\u00cd\u00d4\u0081\u007f\r";
                var7_6 = "\u0088s\r\u00b4i@\u00d6\"\u0086I\u00dc\u00d2lxh\u00da\u0096\u00ed\u007f\u008ex\u00bd\u00be\u001ax\bW\u0001d%t\u009e\u00c5u!\u00fe \u0083] \u00d4\u00ef\u00f83\u0016r\u00d9z\u009e\u008d\u0004\u00ef\u00e0=\u0019\u00c2j\u00f05PE\u00c0\u00bd\u00a7i/uJ\u00be\u008ba\u001e:\u008bM;\u00eb\u00ac\u00b4\u00c4\u00f4\u0099\u0007\u001a\u0095|\u0088\u00f1U\u0015\u00a7\u00c4o<D\u0004\"=KJ\u009d\u00e6\u00f3\u0082Z2\t\u00d6\u008c\u00ee\u00e8\u00db\u00d9\t\u00a7\u0004\u00bc\u00a5\u00a1\u008cM\u00b9N\u0017\u00c18\b\u009c\u00f3\u0086fkT\u00a8\u0017I\u00a7\u00bf\u00e4\u00e4G\u00ac\u0016\u00e5\u00d9\u0088\u00f3\u00e2\u00e5\u00f2\u00be<_Q\u00fb\u0084\u008cy\u00c9m\u0011'\u00ad\u00ce4\u00bc\u00a8\u00b9$\u00dd\u00f0\u0094\u00d4\u00a4\u00c7!\u00ea\u00982\f\u00ad\u009d<\u00f3\u00dd)\u00d3>L\u00a4\u00a2]\u00f3E\u001f8\u00af\u00ce\u00eb\u00b0F\u009a\u0007\u009b\u00c6qF\u008e'\u00fa\u0092\u0012\u00d4\"\u00af\u00fb\u000b\u00e7F\u00d4\u0094\u0094|'7\u0001\u00cd+(\u00e9\u009e\u0082\u0001`\u009a\u0016fx\u00df\u00fbcFOg\u0089\u008f\u001a\u00b8\u0081~\u00b9\u00fa\u0015\u000b\u008e\u00ab]~B\u00d0\n\u00feV\u00b6I\u009a\u0001o\u0085\u008b\u00b1\u0082\u00d7\u00f2\u008d\u00de\u00c1<\u0017q\u00b2k\u00d1\u000f\u00b8\u0017%\u00d0*0\u00c8\u00b1j\u0014zVI\u008cPim5\u00aa\u00a5\u00e1\u00ceJ\u00b9P\u00cb\u0080\u0091#(\u008b%TUoWY\u0099&ftbY\u00d3k\u00b7\u0011\u00de\u0019\u00ffH\u008a1\u00ea\u00cc\u00c8\u00cfWd\u00f6\u00cf\u00c0\u0099\u007f\u00e0\n\b\u00beZ\u00d2w\u00ed\u00c0\u00f1\u000b\u0014y\u0096,\u00c5z\u0006\u0001y\u0099\u00b3\u00b0\u0013$\u0011\u001c\u0094\u00021t\u00d0\u00dc\u00dd\u00d1h{w.\u00c3\u00e0S\u0095\u00e1\u00c6\u000bf\u00d5/~\\\u0017\u00c5\u009b\u00d8\u0000\u0093\u00d4\u00e1s\u00dfA\u000e\u00da\u0003\u00da\u0091p \u0014|\u00aa\u00cc\u0083\u0016z\u0099\u00c0\u0001\u0004\u0095o\u0083O1S\"yi\u0005\u00bd\u0000\u00b6\u00afFB\u009b9\u0087\u0095\u00bd\u00b1w\u00d6\u008f\u0092\u00fe\u0003\u0014c6\u00c5\u0098\u0012\u00ac? \u00a5\u00ce\r\u008d\u00e5\u0002\u0099\u00cc\u00dd\u0089\u0096\u00fdK:R\u0091@\u00d4\u0086\u00d5_\u0014\u00d5[\u008a!9\u000e\u00e0\"\bdju\u0080\u00e0\u0085G\u00f7\ru\u00bd)\u0080m\u00f5\u00cd\b\u0085\u00ef\u0011\u00b6=\u00c2i\u00a3'}!\u00f9F\u008d2\u00a0\u000e\u00aa\u00cd\u00d4\u0081\u007f\r".length();
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
                    var6_5 = "\r\u000f]\u00ce&\u00867\u00a6\u001e\u0005\u00ee\u00dfl\u00f0\u0093\u0091";
                    var7_6 = "\r\u000f]\u00ce&\u00867\u00a6\u001e\u0005\u00ee\u00dfl\u00f0\u0093\u0091".length();
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
        bN.GPNOW = var8_3;
        bN.OhOEC = new Integer[69];
    }

    @Override
    public boolean MH() {
        boolean bl2;
        block8: {
            block7: {
                boolean bl3;
                block6: {
                    long l2 = QtOLO ^ 0x487C26CEC71CL;
                    fs fs2 = rD.dlJ().aZx(fs.class);
                    bl3 = bJ.MN();
                    try {
                        try {
                            bl2 = fs2.bag();
                            if (bl3) break block6;
                            if (!bl2) break block7;
                        }
                        catch (MatchException matchException) {
                            throw bN.Nt(matchException);
                        }
                        bl2 = fs2.aPz().SZ();
                    }
                    catch (MatchException matchException) {
                        throw bN.Nt(matchException);
                    }
                }
                try {
                    if (bl3) break block8;
                    if (!bl2) break block7;
                }
                catch (MatchException matchException) {
                    throw bN.Nt(matchException);
                }
                bl2 = true;
                break block8;
            }
            bl2 = false;
        }
        return bl2;
    }

    @Override
    public void MG(lC lC2, ii ii2) {
        long l2 = QtOLO ^ 0x477C0ED4FDD3L;
        fs fs2 = rD.dlJ().aZx(fs.class);
        int[] nArray = new int[bN.Nw("z", (int)27877, (long)(0x43400A7CEBABE491L ^ l2))];
        nArray[0] = (int)bN.Nw("z", (int)5934, (long)(0x485C47B258C39F5EL ^ l2));
        nArray[1] = (int)bN.Nw("z", (int)1135, (long)(0x2A0794FF58D10C02L ^ l2));
        nArray[2] = (int)bN.Nw("z", (int)4487, (long)(0x74EAF9C88DE199E0L ^ l2));
        nArray[3] = (int)bN.Nw("z", (int)21972, (long)(0x33579A759F28DD9FL ^ l2));
        nArray[4] = (int)bN.Nw("z", (int)10510, (long)(0x43556D065B83A177L ^ l2));
        nArray[5] = (int)bN.Nw("z", (int)15282, (long)(0x7DBB2BCCBFEFB3FDL ^ l2));
        nArray[bN.Nw("z", (int)3413, (long)(0x416B8AA3F48F8514L ^ l2))] = (int)bN.Nw("z", (int)1805, (long)(0x3FC971CE51DB0F70L ^ l2));
        nArray[bN.Nw("z", (int)23813, (long)(0x6211997C2C0557FL ^ l2))] = (int)bN.Nw("z", (int)26992, (long)(0x7E9C30F0244DE10FL ^ l2));
        nArray[bN.Nw("z", (int)19114, (long)(0x2A03BE34BFBF42C9L ^ l2))] = (int)bN.Nw("z", (int)15612, (long)(0x1F1B0A99063134A2L ^ l2));
        nArray[bN.Nw("z", (int)13909, (long)(0x266C18AB8332BE06L ^ l2))] = (int)bN.Nw("z", (int)26992, (long)(0x7E9C30F0244DE10FL ^ l2));
        nArray[bN.Nw("z", (int)3303, (long)(0x110A2974A19504FBL ^ l2))] = (int)bN.Nw("z", (int)14735, (long)(0x50E2C03D21C0B1FAL ^ l2));
        nArray[bN.Nw("z", (int)5433, (long)(0x1F0552A21FB81D56L ^ l2))] = (int)bN.Nw("z", (int)22123, (long)(0x52F98CBBFAC85E26L ^ l2));
        nArray[bN.Nw("z", (int)4205, (long)(0x76BD04776CD21816L ^ l2))] = (int)bN.Nw("z", (int)30269, (long)(0x5D743327F4A0FE5BL ^ l2));
        nArray[bN.Nw("z", (int)23953, (long)(0x687D84F7C37755CCL ^ l2))] = (int)bN.Nw("z", (int)32467, (long)(0x1F52B586120CF685L ^ l2));
        nArray[bN.Nw("z", (int)4919, (long)(0x3E2CB3C99C081B2FL ^ l2))] = (int)bN.Nw("z", (int)14735, (long)(0x50E2C03D21C0B1FAL ^ l2));
        nArray[bN.Nw("z", (int)8478, (long)(0x601B9C77FB6BA96CL ^ l2))] = (int)bN.Nw("z", (int)3020, (long)(0x6AF4FAF5B8388393L ^ l2));
        nArray[bN.Nw("z", (int)3433, (long)(0x2169BC096047850CL ^ l2))] = (int)bN.Nw("z", (int)10510, (long)(0x43556D065B83A177L ^ l2));
        nArray[bN.Nw("z", (int)7949, (long)(0x5D551B2508261765L ^ l2))] = (int)bN.Nw("z", (int)26992, (long)(0x7E9C30F0244DE10FL ^ l2));
        this.Oj(fs2.aPF(), nArray, mG.cnP(185.0f, 28.0f, 28.0f));
        super.MG(lC2, ii2);
    }

    private static int Nv(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = bN.Nu(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static CallSite Nw(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bN" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException Nt(MatchException matchException) {
        return matchException;
    }

    private static int Nu(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x2A90;
        if (OhOEC[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = GPNOW[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])iaAGG.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    iaAGG.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bN", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bN.OhOEC[n3] = n4;
        }
        return OhOEC[n3];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bN.class, "Nv", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

