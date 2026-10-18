/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.projectile.FireworkRocketEntity
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.entity.Entity;
import net.minecraft.entity.projectile.FireworkRocketEntity;
import sixtwo.cC;
import sixtwo.dh;
import sixtwo.dn$sF;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gk;
import sixtwo.hG;
import sixtwo.hu;
import sixtwo.iS;
import sixtwo.lC;
import sixtwo.mr;

public class dn
extends gg {
    private final cC xTDBB;
    private final cC zMQfx;
    private final List<dn$sF> GtFRG;
    private static final long LaMyq;
    private static final String AhEPk;
    private static final long[] AYzFk;
    private static final Integer[] KsQnb;
    private static final Map FpBNc;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dn() {
        long l2 = LaMyq ^ 0x714ACFE11FDBL;
        super(gf.aZL((int)dn.ahg("y", (int)26713, (long)(0x55994F01E984B7AEL ^ l2)), false, gh.nOCvV));
        int[] nArray = new int[dn.ahg("y", (int)853, (long)(0x3F8AEBE25760DCA5L ^ l2))];
        nArray[0] = (int)dn.ahg("y", (int)13370, (long)(0x2D86C85D95896BDAL ^ l2));
        nArray[1] = (int)dn.ahg("y", (int)32616, (long)(0x3A4D7E75031A08BL ^ l2));
        nArray[2] = (int)dn.ahg("y", (int)29346, (long)(0x127A13833D552D73L ^ l2));
        nArray[3] = (int)dn.ahg("y", (int)1873, (long)(0x4F8BD56898BB58BCL ^ l2));
        nArray[4] = (int)dn.ahg("y", (int)30122, (long)(0x238A3D6DF8D62A52L ^ l2));
        nArray[5] = (int)dn.ahg("y", (int)23897, (long)(0x308016F58D6A82A4L ^ l2));
        nArray[dn.ahg("y", (int)14068, (long)(0x2D223B67C064691FL ^ l2))] = (int)dn.ahg("y", (int)12964, (long)(0xE5B0C46777E6D4AL ^ l2));
        nArray[dn.ahg("y", (int)23958, (long)(0x37E3A6A5A4AC826DL ^ l2))] = (int)dn.ahg("y", (int)18537, (long)(0x2DD4BEC87B8397ABL ^ l2));
        nArray[dn.ahg("y", (int)27240, (long)(0x61E089E161A33591L ^ l2))] = (int)dn.ahg("y", (int)7357, (long)(0x14AB8D9116314367L ^ l2));
        nArray[dn.ahg("y", (int)5607, (long)(0x13E2E5B0461A4A15L ^ l2))] = (int)dn.ahg("y", (int)26505, (long)(0x2856E674BE92B85DL ^ l2));
        nArray[dn.ahg("y", (int)28356, (long)(0x14F52A6974CD3130L ^ l2))] = (int)dn.ahg("y", (int)12964, (long)(0xE5B0C46777E6D4AL ^ l2));
        nArray[dn.ahg("y", (int)27924, (long)(0x6A7D68D6D9E232CCL ^ l2))] = (int)dn.ahg("y", (int)31070, (long)(0x73D885DE6E5AA69FL ^ l2));
        nArray[dn.ahg("y", (int)32651, (long)(0x3DBF0607E944A048L ^ l2))] = (int)dn.ahg("y", (int)4367, (long)(0x254832A4B7654ED8L ^ l2));
        nArray[dn.ahg("y", (int)16840, (long)(0x6015D9E37EA79E0FL ^ l2))] = (int)dn.ahg("y", (int)12716, (long)(0x7FDE4AB49D25EE73L ^ l2));
        nArray[dn.ahg("y", (int)8030, (long)(0x6C382FEB823E40B1L ^ l2))] = (int)dn.ahg("y", (int)12708, (long)(0x4BEA101F3C0BEE43L ^ l2));
        nArray[dn.ahg("y", (int)24075, (long)(0xC69066C231F81E2L ^ l2))] = (int)dn.ahg("y", (int)12599, (long)(0x20E9933557F56EE4L ^ l2));
        nArray[dn.ahg("y", (int)16744, (long)(0x64A44BF3D0059E99L ^ l2))] = (int)dn.ahg("y", (int)1454, (long)(0x54FA51FE48355A48L ^ l2));
        nArray[dn.ahg("y", (int)28395, (long)(0x183D0F043C7A3135L ^ l2))] = (int)dn.ahg("y", (int)9359, (long)(0x615EAA4741657B53L ^ l2));
        nArray[dn.ahg("y", (int)31053, (long)(0xDFE0484318226B1L ^ l2))] = (int)dn.ahg("y", (int)12964, (long)(0xE5B0C46777E6D4AL ^ l2));
        nArray[dn.ahg("y", (int)32716, (long)(0x139CE21761B1A011L ^ l2))] = (int)dn.ahg("y", (int)18088, (long)(0x242805F5CCE59978L ^ l2));
        nArray[dn.ahg("y", (int)20832, (long)(0x55DC772D4CF00EA0L ^ l2))] = (int)dn.ahg("y", (int)13158, (long)(0x398334BF3B646C8AL ^ l2));
        this.xTDBB = new cC(this, mr.clS(nArray)).Vy(1.0).Vw(1.0).Vx(15.0).VA(8.0).Vz(AhEPk);
        int[] nArray2 = new int[dn.ahg("y", (int)16925, (long)(0x734BCF2C96279DF5L ^ l2))];
        nArray2[0] = (int)dn.ahg("y", (int)25915, (long)(0x59ECB9F1B27B3ADAL ^ l2));
        nArray2[1] = (int)dn.ahg("y", (int)5911, (long)(0x3D8EE4756E2A48E8L ^ l2));
        nArray2[2] = (int)dn.ahg("y", (int)18088, (long)(0x242805F5CCE59978L ^ l2));
        nArray2[3] = (int)dn.ahg("y", (int)27423, (long)(0x24A86D4D7FC5B4C6L ^ l2));
        nArray2[4] = (int)dn.ahg("y", (int)32680, (long)(0x33D61B53E14EA05DL ^ l2));
        nArray2[5] = (int)dn.ahg("y", (int)12716, (long)(0x7FDE4AB49D25EE73L ^ l2));
        nArray2[dn.ahg("y", (int)11415, (long)(0x7A2E8ECE7C49F36DL ^ l2))] = (int)dn.ahg("y", (int)16186, (long)(0x20C0D91CB49FE0DFL ^ l2));
        nArray2[dn.ahg("y", (int)7962, (long)(0x6C82023EC572C0CCL ^ l2))] = (int)dn.ahg("y", (int)20939, (long)(0x1323B296997D8E10L ^ l2));
        nArray2[dn.ahg("y", (int)26901, (long)(0x43735EEE5E8636F7L ^ l2))] = (int)dn.ahg("y", (int)31070, (long)(0x73D885DE6E5AA69FL ^ l2));
        nArray2[dn.ahg("y", (int)31107, (long)(0x12BB3158BDD6A669L ^ l2))] = (int)dn.ahg("y", (int)20294, (long)(0x5CD5450B763610B5L ^ l2));
        nArray2[dn.ahg("y", (int)16980, (long)(0x6C9ED184C9EE9DA2L ^ l2))] = (int)dn.ahg("y", (int)12716, (long)(0x7FDE4AB49D25EE73L ^ l2));
        nArray2[dn.ahg("y", (int)31234, (long)(0x3D9FA102A1E5A5E6L ^ l2))] = (int)dn.ahg("y", (int)89, (long)(0x512FC3B86661DF8BL ^ l2));
        nArray2[dn.ahg("y", (int)9225, (long)(0x7F85FAA90523FBDCL ^ l2))] = (int)dn.ahg("y", (int)12716, (long)(0x7FDE4AB49D25EE73L ^ l2));
        nArray2[dn.ahg("y", (int)30489, (long)(0x3268CA5C94F8A8E7L ^ l2))] = (int)dn.ahg("y", (int)16186, (long)(0x20C0D91CB49FE0DFL ^ l2));
        this.zMQfx = new cC(this, mr.clS(nArray2)).Vy(1.0).Vw(1.0).Vx(100.0).VA(10.0);
        this.GtFRG = new ArrayList<dn$sF>();
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                block12: {
                    dn.LaMyq = gb.aYR(-9204070481229236576L, 6510353852486166732L, MethodHandles.lookup().lookupClass()).a(233154535721591L);
                    var11 = dn.LaMyq ^ 128716650706329L;
                    var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var11 >>> 56);
                    for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                        v2 = v2;
                        v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                    }
                    break block12;
lbl13:
                    // 1 sources

                    while (true) {
                        continue;
                        break;
                    }
                }
                var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var15_3 = var13_1.doFinal("s70Z\u00b5<HR".getBytes("ISO-8859-1"));
                ** while (true)
                dn.AhEPk = dn.ahd(var15_3).intern();
                dn.FpBNc = new HashMap<K, V>(13);
                var0_4 = Cipher.getInstance("DES/CBC/NoPadding");
                v3 = SecretKeyFactory.getInstance("DES");
                v4 = new byte[8];
                v5 = v4;
                v4[0] = (byte)(var11 >>> 56);
                for (var1_5 = 1; var1_5 < 8; ++var1_5) {
                    v5 = v5;
                    v5[var1_5] = (byte)(var11 << var1_5 * 8 >>> 56);
                }
                var0_4.init(2, (Key)v3.generateSecret(new DESKeySpec(v5)), new IvParameterSpec(new byte[8]));
                var6_6 = new long[53];
                var3_7 = 0;
                var4_8 = "\u00fd\u0086\u00a4\u009a\u00e3\u00d7\u00ccMP{jA\u00f5\u0089\u00b2\u00b7\u0086\u00f8/8\u00e1\u00b5d4\u001d\u0006\u00ed5 \u00d0ZA6\u00e3\u00d1\u00b2\u0094\u00ca\u00e4\u00d4|\u00ad\u00fd\u00e54\u0093$\u00ea\"\u0099\u009a\u00f0d\u00c2\u00c0LQy\u00c7\u0088N&\u0093\u00af\u00b4#^v\\=\u000e\u00f4}\u00cdP\u00f3\u00e73\u00cdk!\u00da{\u0095\n6}iv\u008d\u00abO\u001d\u00e3\u00b4w#\u00efn\u00ca\u00c5\u00a6l\u00a4\u008bA\u00f1fFK\f\u00ee\u00c9\u00847\u0014\u00e4&v\u00ff\u008f\u00eaG6\u001a\u0080{E\u00e6\u0011\u008d\u00bc\u00f3\u00ccMq\u00ce\u00e8\u00b0.9\u00eb;\f\u009f3\u0003\u0018\u00e9\u00ee&\u00f4\u00c4}\u00d9\u00f2\u00bb5\u00bc\u00c1w\u00d2\u009f^\u00a3\u00e9\u00ad9\u00d3\u00a7\u00ae|\u009bm\u0094!\u0018\u00c7@\u00fe\u00e5f\u00a3v&:\u00a1\u009c\u001c\u0000a\u009e\u009d\u00eb\u00c4\u00f7\u00ed\u00d4\u00c2\u00a6(\u009a*\u00c8\u0012%\u00b6cn\u0091E\u0087\u0004D$G@\u0004\u008d\u00db\u001a\u00ab\u0011p\u00f1\u00ca\u0099\u00b7\u00d3y@\u00c0n\u0083\f\u00b7\u0018>j|\u001a\u0091P\u00bfz&\u00129\u00f2H\u0098b\u0097\u0001\u00a0\u00f6\u00114H\u000e\u008e@\u0003\u00ac\\\u0081\u000e\u0086\fNc\u00d0\u00db\u008d\u0001K\u00fd7\u0005\u0019\u00f9\u00c6\u00f0u\u0085MV\u00cf$c\u00de\u00fc%k\u000e\u00a3\u00e0&\u00a5?~\u0093>o\u00be\u00f1\u0099\u0098g\u00f5\u0083]\u00f7\u00f0\u00b8KQ\u00ab\u00a9\u0091\u00e6\u0017\fk\u0006H.\u0004~\u001a\u00db\u00e0\u00d1n\u00ba\u008d\u00a5\u00f8\u00bbC\u00bf|\u009bo\u00f2\u00d0\bk+\u009e\u00f5\u0007\u00db\u0097\u00ffz\u0082\u0086\u00bd\u00bao\u00a5n\u00f1\u0017\u00a1\u001bB\u00f5\u009b4\u00c9S\u0001\u00f4\u00d4\u00a3?\u0016\u008e\u00f4\u00fa\u008d\u00a8\u0016\b\u00e8\u00b6\u00fc\u00d7\u00e9\u00ff\u00c1\u00d2HU\u00ed\u00fd\u00cb\u00f1\u00b2\u0084\u009dk;\u0017\u0085\u00b2";
                var5_9 = "\u00fd\u0086\u00a4\u009a\u00e3\u00d7\u00ccMP{jA\u00f5\u0089\u00b2\u00b7\u0086\u00f8/8\u00e1\u00b5d4\u001d\u0006\u00ed5 \u00d0ZA6\u00e3\u00d1\u00b2\u0094\u00ca\u00e4\u00d4|\u00ad\u00fd\u00e54\u0093$\u00ea\"\u0099\u009a\u00f0d\u00c2\u00c0LQy\u00c7\u0088N&\u0093\u00af\u00b4#^v\\=\u000e\u00f4}\u00cdP\u00f3\u00e73\u00cdk!\u00da{\u0095\n6}iv\u008d\u00abO\u001d\u00e3\u00b4w#\u00efn\u00ca\u00c5\u00a6l\u00a4\u008bA\u00f1fFK\f\u00ee\u00c9\u00847\u0014\u00e4&v\u00ff\u008f\u00eaG6\u001a\u0080{E\u00e6\u0011\u008d\u00bc\u00f3\u00ccMq\u00ce\u00e8\u00b0.9\u00eb;\f\u009f3\u0003\u0018\u00e9\u00ee&\u00f4\u00c4}\u00d9\u00f2\u00bb5\u00bc\u00c1w\u00d2\u009f^\u00a3\u00e9\u00ad9\u00d3\u00a7\u00ae|\u009bm\u0094!\u0018\u00c7@\u00fe\u00e5f\u00a3v&:\u00a1\u009c\u001c\u0000a\u009e\u009d\u00eb\u00c4\u00f7\u00ed\u00d4\u00c2\u00a6(\u009a*\u00c8\u0012%\u00b6cn\u0091E\u0087\u0004D$G@\u0004\u008d\u00db\u001a\u00ab\u0011p\u00f1\u00ca\u0099\u00b7\u00d3y@\u00c0n\u0083\f\u00b7\u0018>j|\u001a\u0091P\u00bfz&\u00129\u00f2H\u0098b\u0097\u0001\u00a0\u00f6\u00114H\u000e\u008e@\u0003\u00ac\\\u0081\u000e\u0086\fNc\u00d0\u00db\u008d\u0001K\u00fd7\u0005\u0019\u00f9\u00c6\u00f0u\u0085MV\u00cf$c\u00de\u00fc%k\u000e\u00a3\u00e0&\u00a5?~\u0093>o\u00be\u00f1\u0099\u0098g\u00f5\u0083]\u00f7\u00f0\u00b8KQ\u00ab\u00a9\u0091\u00e6\u0017\fk\u0006H.\u0004~\u001a\u00db\u00e0\u00d1n\u00ba\u008d\u00a5\u00f8\u00bbC\u00bf|\u009bo\u00f2\u00d0\bk+\u009e\u00f5\u0007\u00db\u0097\u00ffz\u0082\u0086\u00bd\u00bao\u00a5n\u00f1\u0017\u00a1\u001bB\u00f5\u009b4\u00c9S\u0001\u00f4\u00d4\u00a3?\u0016\u008e\u00f4\u00fa\u008d\u00a8\u0016\b\u00e8\u00b6\u00fc\u00d7\u00e9\u00ff\u00c1\u00d2HU\u00ed\u00fd\u00cb\u00f1\u00b2\u0084\u009dk;\u0017\u0085\u00b2".length();
                var2_10 = 0;
                while (true) {
                    var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                    v6 = var6_6;
                    v7 = var3_7++;
                    v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                    v9 = -1;
                    break block10;
                    break;
                }
lbl44:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    var4_8 = "\u007f\u00d63v\u0097\u0096\u00dd\u00ef\u00df\u00e2\u0094\u00c8\u00cd\u008c\u0098\u000b";
                    var5_9 = "\u007f\u00d63v\u0097\u0096\u00dd\u00ef\u00df\u00e2\u0094\u00c8\u00cd\u008c\u0098\u000b".length();
                    var2_10 = 0;
                    while (true) {
                        var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                        v6 = var6_6;
                        v7 = var3_7++;
                        v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                        v9 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl57:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    break block11;
                    break;
                }
            }
            var8_12 = v8;
            var10_13 = var0_4.doFinal(new byte[]{(byte)(var8_12 >>> 56), (byte)(var8_12 >>> 48), (byte)(var8_12 >>> 40), (byte)(var8_12 >>> 32), (byte)(var8_12 >>> 24), (byte)(var8_12 >>> 16), (byte)(var8_12 >>> 8), (byte)var8_12});
            v10 = ((long)var10_13[0] & 255L) << 56 | ((long)var10_13[1] & 255L) << 48 | ((long)var10_13[2] & 255L) << 40 | ((long)var10_13[3] & 255L) << 32 | ((long)var10_13[4] & 255L) << 24 | ((long)var10_13[5] & 255L) << 16 | ((long)var10_13[6] & 255L) << 8 | (long)var10_13[7] & 255L;
            switch (v9) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl70:
                // 1 sources

                ** continue;
            }
        }
        dn.AYzFk = var6_6;
        dn.KsQnb = new Integer[53];
    }

    @Override
    public void YO() {
        super.YO();
        this.GtFRG.clear();
    }

    @hG
    public void aha(gk gk2) {
        long l2 = LaMyq ^ 0x7821DC140169L;
        iS[] iSArray = dh.afl();
        try {
            if (!this.bab()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw dn.ahc(matchException);
        }
        lC lC2 = gk2.baT();
        Iterator<dn$sF> iterator = this.GtFRG.iterator();
        while (iterator.hasNext()) {
            dn$sF dn$sF = iterator.next();
            try {
                dn$sF.doJ(lC2, this.xTDBB.VC());
                if (dn$sF.doK()) {
                    iterator.remove();
                }
            }
            catch (MatchException matchException) {
                throw dn.ahc(matchException);
            }
            if (iSArray == null) continue;
        }
    }

    private static MatchException ahc(MatchException matchException) {
        return matchException;
    }

    private static int ahe(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x6624;
        if (KsQnb[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = AYzFk[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])FpBNc.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    FpBNc.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dn", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dn.KsQnb[n3] = n4;
        }
        return KsQnb[n3];
    }

    private static int ahf(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = dn.ahe(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    @hG
    public void ahb(hu hu2) {
        block8: {
            int n2;
            int n3;
            iS[] iSArray;
            block9: {
                int n4;
                Entity entity;
                block7: {
                    long l2 = LaMyq ^ 0x4D673C6BB76BL;
                    Entity entity2 = hu2.bdj();
                    iSArray = dh.afl();
                    try {
                        try {
                            entity = entity2;
                            if (iSArray != null) break block7;
                            if (!(entity instanceof FireworkRocketEntity)) break block8;
                        }
                        catch (MatchException matchException) {
                            throw dn.ahc(matchException);
                        }
                        entity = entity2;
                    }
                    catch (MatchException matchException) {
                        throw dn.ahc(matchException);
                    }
                }
                FireworkRocketEntity fireworkRocketEntity = (FireworkRocketEntity)entity;
                this.GtFRG.add(new dn$sF(fireworkRocketEntity.getEntityPos()));
                n3 = this.GtFRG.size() - this.zMQfx.VC();
                try {
                    n4 = n3;
                    if (iSArray != null) break block9;
                    if (n4 <= 0) break block8;
                }
                catch (MatchException matchException) {
                    throw dn.ahc(matchException);
                }
                n4 = n2 = 0;
            }
            while (n2 < n3) {
                dn$sF dn$sF = this.GtFRG.get(n2);
                dn$sF.DUqGa.dhd(0.0f);
                dn$sF.uAOSS = true;
                ++n2;
                if (iSArray == null) continue;
            }
        }
    }

    private static CallSite ahg(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dn" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String ahd(byte[] byArray) {
        int n2 = 0;
        int n3 = byArray.length;
        char[] cArray = new char[n3];
        for (int i2 = 0; i2 < n3; ++i2) {
            char c2;
            int n4 = 0xFF & byArray[i2];
            if (n4 < 192) {
                cArray[n2++] = (char)n4;
                continue;
            }
            if (n4 < 224) {
                c2 = (char)((char)(n4 & 0x1F) << 6);
                n4 = byArray[++i2];
                c2 = (char)(c2 | (char)(n4 & 0x3F));
                cArray[n2++] = c2;
                continue;
            }
            if (i2 >= n3 - 2) continue;
            c2 = (char)((char)(n4 & 0xF) << 12);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F) << 6);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F));
            cArray[n2++] = c2;
        }
        return new String(cArray, 0, n2);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dn.class, "ahf", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

