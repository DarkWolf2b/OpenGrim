/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
 *  net.minecraft.class_241
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Locale;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_241;
import sixtwo.cG;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lc;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.pA$vy;
import sixtwo.pD;
import sixtwo.py;
import sixtwo.pz;
import sixtwo.rD;

public abstract class pA
extends py
implements pz {
    private final cG AoPsG;
    private final ct ocWeL;
    private final cu HXjad;
    private final cu XaoTf;
    private final cu JLmNL;
    private final cu PBeDf;
    private final ct xfGkT;
    private final cu UDbOu;
    private final cu Ovxcd;
    private final cu bkReZ;
    private final pD VgPLF;
    private static boolean RrTtM;
    private static final long SElsh;
    private static final long[] zXltb;
    private static final Integer[] awhmY;
    private static final Map xEKTJ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    protected pA(String string, String string2) {
        block4: {
            boolean bl;
            block6: {
                block5: {
                    long l = SElsh ^ 0x6CC105A3698DL;
                    super(string, string2, 2.0);
                    this.AoPsG = new cG(this, mr.clS(new int[]{(int)pA.cRT("z", (int)2518, (long)(0x3F10CA421C31AB27L ^ l)), (int)pA.cRT("z", (int)20694, (long)(0x3B60C8A843E1722EL ^ l)), (int)pA.cRT("z", (int)17713, (long)(0x4EDC65F7A1A6E7E1L ^ l)), (int)pA.cRT("z", (int)26177, (long)(0x45E212191B45C4B5L ^ l)), (int)pA.cRT("z", (int)27186, (long)(0x7B760D81ED57C8EEL ^ l))})).Uf(rD.dlM().bjb());
                    this.ocWeL = new ct(this, mr.clS(new int[]{(int)pA.cRT("z", (int)3579, (long)(0x39057EBE96522F2EL ^ l)), (int)pA.cRT("z", (int)26177, (long)(0x45E212191B45C4B5L ^ l)), (int)pA.cRT("z", (int)19203, (long)(0x7297E7F885C469F4L ^ l)), (int)pA.cRT("z", (int)15437, (long)(0x4048E7A6C3F61E92L ^ l))}));
                    int[] nArray = new int[pA.cRT("z", (int)20083, (long)(0x4A9A5D983EFDECADL ^ l))];
                    nArray[0] = (int)pA.cRT("z", (int)29564, (long)(0x5C7847BEC6B351AEL ^ l));
                    nArray[1] = (int)pA.cRT("z", (int)3525, (long)(0x737D46812F85AF35L ^ l));
                    nArray[2] = (int)pA.cRT("z", (int)7608, (long)(0x4591D00DA59C3F4AL ^ l));
                    nArray[3] = (int)pA.cRT("z", (int)23906, (long)(0x660FDAAE9B1B7F9FL ^ l));
                    nArray[4] = (int)pA.cRT("z", (int)3260, (long)(0x53BEF372A90E2E6BL ^ l));
                    nArray[5] = (int)pA.cRT("z", (int)29464, (long)(0x691BDCA5EA75D1C9L ^ l));
                    nArray[pA.cRT("z", (int)3270, (long)(0x317BAAC040A0AE28L ^ l))] = (int)pA.cRT("z", (int)7085, (long)(0x6E37E0B6B538B941L ^ l));
                    this.HXjad = new cu(this.ocWeL, mr.clS(nArray));
                    int[] nArray2 = new int[pA.cRT("z", (int)32597, (long)(0x50756C11B3B1DD97L ^ l))];
                    nArray2[0] = (int)pA.cRT("z", (int)27186, (long)(0x785A200E7914C8E9L ^ l));
                    nArray2[1] = (int)pA.cRT("z", (int)2508, (long)(0x2D74AEACDD55AB27L ^ l));
                    nArray2[2] = (int)pA.cRT("z", (int)9747, (long)(0x1C911C5F67D104F0L ^ l));
                    nArray2[3] = (int)pA.cRT("z", (int)22455, (long)(0x40EB6036B962F56FL ^ l));
                    nArray2[4] = (int)pA.cRT("z", (int)11870, (long)(0x296ADC5C35870C9DL ^ l));
                    nArray2[5] = (int)pA.cRT("z", (int)25994, (long)(0x60B8B8320DB5C750L ^ l));
                    this.XaoTf = new cu(this.ocWeL, mr.clS(nArray2));
                    int[] nArray3 = new int[pA.cRT("z", (int)4590, (long)(0xE214F8D3E7E3310L ^ l))];
                    nArray3[0] = (int)pA.cRT("z", (int)13805, (long)(0x356F6FA9317F970AL ^ l));
                    nArray3[1] = (int)pA.cRT("z", (int)2508, (long)(0x2D74AEACDD55AB27L ^ l));
                    nArray3[2] = (int)pA.cRT("z", (int)28901, (long)(0x33B9C003B7C0D219L ^ l));
                    nArray3[3] = (int)pA.cRT("z", (int)12854, (long)(0xC2C3634881490CDL ^ l));
                    nArray3[4] = (int)pA.cRT("z", (int)28213, (long)(0x27536B1EF190CCD8L ^ l));
                    nArray3[5] = (int)pA.cRT("z", (int)11610, (long)(0x375DEFF36A448F83L ^ l));
                    nArray3[pA.cRT("z", (int)32597, (long)(0x50756C11B3B1DD97L ^ l))] = (int)pA.cRT("z", (int)26177, (long)(0x45E212191B45C4B5L ^ l));
                    nArray3[pA.cRT("z", (int)29426, (long)(0x5D96155992575007L ^ l))] = (int)pA.cRT("z", (int)3260, (long)(0x53BEF372A90E2E6BL ^ l));
                    nArray3[pA.cRT("z", (int)24835, (long)(0x63496805A9C7C3D5L ^ l))] = (int)pA.cRT("z", (int)16451, (long)(0x3DB22146CC5B629EL ^ l));
                    this.JLmNL = new cu(this.ocWeL, mr.clS(nArray3));
                    this.PBeDf = new cu(this.ocWeL, mr.clS(new int[]{(int)pA.cRT("z", (int)23601, (long)(0x4EEB714A9B75FED4L ^ l)), (int)pA.cRT("z", (int)26177, (long)(0x45E212191B45C4B5L ^ l)), (int)pA.cRT("z", (int)3260, (long)(0x53BEF372A90E2E6BL ^ l)), (int)pA.cRT("z", (int)16451, (long)(0x3DB22146CC5B629EL ^ l))}));
                    int[] nArray4 = new int[pA.cRT("z", (int)32597, (long)(0x50756C11B3B1DD97L ^ l))];
                    nArray4[0] = (int)pA.cRT("z", (int)4125, (long)(0x18A7627F351DB2C9L ^ l));
                    nArray4[1] = (int)pA.cRT("z", (int)26177, (long)(0x45E212191B45C4B5L ^ l));
                    nArray4[2] = (int)pA.cRT("z", (int)7085, (long)(0x6E37E0B6B538B941L ^ l));
                    nArray4[3] = (int)pA.cRT("z", (int)28901, (long)(0x33B9C003B7C0D219L ^ l));
                    nArray4[4] = (int)pA.cRT("z", (int)22633, (long)(0x6815AE4C9968FABAL ^ l));
                    nArray4[5] = (int)pA.cRT("z", (int)16548, (long)(0x6426279A880C624EL ^ l));
                    this.xfGkT = new ct(this, mr.clS(nArray4));
                    boolean bl2 = pA.cRO();
                    try {
                        try {
                            this.UDbOu = new cu(this.xfGkT, mr.clS(new int[]{(int)pA.cRT("z", (int)21861, (long)(0x3777C6443DA6779FL ^ l)), (int)pA.cRT("z", (int)26177, (long)(0x45E212191B45C4B5L ^ l)), (int)pA.cRT("z", (int)1830, (long)(0x74C89F178846A5C6L ^ l)), (int)pA.cRT("z", (int)2508, (long)(0x2D74AEACDD55AB27L ^ l))}));
                            int[] nArray5 = new int[pA.cRT("z", (int)21104, (long)(0x7C7F7304631BF083L ^ l))];
                            nArray5[0] = (int)pA.cRT("z", (int)1804, (long)(0x48F16A8E010A25F5L ^ l));
                            nArray5[1] = (int)pA.cRT("z", (int)26177, (long)(0x45E212191B45C4B5L ^ l));
                            nArray5[2] = (int)pA.cRT("z", (int)6157, (long)(0x97D9D84F47D3AECL ^ l));
                            nArray5[3] = (int)pA.cRT("z", (int)2508, (long)(0x2D74AEACDD55AB27L ^ l));
                            nArray5[4] = (int)pA.cRT("z", (int)7085, (long)(0x6E37E0B6B538B941L ^ l));
                            nArray5[5] = (int)pA.cRT("z", (int)16646, (long)(0x71B413EAA97463E9L ^ l));
                            nArray5[pA.cRT("z", (int)32597, (long)(0x50756C11B3B1DD97L ^ l))] = (int)pA.cRT("z", (int)22633, (long)(0x6815AE4C9968FABAL ^ l));
                            nArray5[pA.cRT("z", (int)29426, (long)(0x5D96155992575007L ^ l))] = (int)pA.cRT("z", (int)6245, (long)(0x214BB104B2E63A87L ^ l));
                            nArray5[pA.cRT("z", (int)477, (long)(0x222B7D1225492335L ^ l))] = (int)pA.cRT("z", (int)2508, (long)(0x2D74AEACDD55AB27L ^ l));
                            this.Ovxcd = new cu(this.xfGkT, mr.clS(nArray5));
                            int[] nArray6 = new int[pA.cRT("z", (int)21104, (long)(0x7C7F7304631BF083L ^ l))];
                            nArray6[0] = (int)pA.cRT("z", (int)1224, (long)(0x4AF17FB30719A637L ^ l));
                            nArray6[1] = (int)pA.cRT("z", (int)1255, (long)(0x335A45BB4399260EL ^ l));
                            nArray6[2] = (int)pA.cRT("z", (int)11540, (long)(0x23F6C42424BA8FF2L ^ l));
                            nArray6[3] = (int)pA.cRT("z", (int)2508, (long)(0x2D74AEACDD55AB27L ^ l));
                            nArray6[4] = (int)pA.cRT("z", (int)7085, (long)(0x6E37E0B6B538B941L ^ l));
                            nArray6[5] = (int)pA.cRT("z", (int)18552, (long)(0x6ED1BFB0E7D4EA9CL ^ l));
                            nArray6[pA.cRT("z", (int)32597, (long)(0x50756C11B3B1DD97L ^ l))] = (int)pA.cRT("z", (int)22633, (long)(0x6815AE4C9968FABAL ^ l));
                            nArray6[pA.cRT("z", (int)29426, (long)(0x5D96155992575007L ^ l))] = (int)pA.cRT("z", (int)624, (long)(0x2B6695B14044A086L ^ l));
                            nArray6[pA.cRT("z", (int)477, (long)(0x222B7D1225492335L ^ l))] = (int)pA.cRT("z", (int)2508, (long)(0x2D74AEACDD55AB27L ^ l));
                            this.bkReZ = new cu(this.xfGkT, mr.clS(nArray6));
                            this.VgPLF = new pD(this);
                            this.JLmNL.SY();
                            if (iS.bwL() != null) break block4;
                            if (!bl2) break block5;
                        }
                        catch (MatchException matchException) {
                            throw pA.cRQ(matchException);
                        }
                        bl = false;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw pA.cRQ(matchException);
                    }
                }
                bl = true;
            }
            pA.cRN(bl);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                pA.SElsh = gb.aYR(6108268333681161L, 5034860091395773437L, MethodHandles.lookup().lookupClass()).a(104426701251220L);
                pA.xEKTJ = new HashMap<K, V>(13);
                var0 = pA.SElsh ^ 8339589093481L;
                pA.cRN(true);
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
                var8_3 = new long[50];
                var5_4 = 0;
                var6_5 = "\u001b\u00a0Mwzp\u00f6\u00daS\u0084\u008c\u00e0yl\u0096\u0012\u0004ip\u009e\u00e9{e\u0014\u007f&\u0092\u00a6\u00bf\u00e8\u008a\u009er\u00fa\u00f1\u00ac\u00ea\u00c6u)\u0093\u00fdaR\u0096\u007f\u00c7U\u0091\u00b0\u00fe\u00a8c(\u001d\u00a4\u0018_\u009c\u00e3\u000e\u00de\u00ba\u009b\u00eenfg\u00f6\u00b6,\u001a\u0086\u0018\u00c5<\u00a7\u0092N\u008c\u001b\u00db\u0092V\u00beX\u008c9\u00c2\u00baY\u0086\u00d4\u00b4|\u00e12>\u00bef\u0090\u00d1\u00df\u00b21e`wr#\u00ed\b&\u0015\u00b0&`\t\u0095\u00a1kY1\u0093\u00c2\u00c7+\u008d'h\u00a5\u00ca\u00f1\u00fe\u0087}\\Z\u00e7WDZ!\u00d6\u00ac[\u0096\u00c0\u0000\u00f2>g\u00bf\u00ca\u00fb\u00b3\u00cd\u00a3\u00fb\u00c1\u0013sW\u00db!~\u00a37j\u00af\u00b2Nd\u009f\u0011%\u009f\u00d2*\u0086\u00e7\u00fcm\u0089t\u0082g\u009dqA\r\u00e9\u008e\u009d\n\u00ed\u001e\u00ed3\u00ca\u0016UY\u00cf\u00b2pu\u0006_\u00e6;\u00ad_>\u0017Wo_\u001e\u00bcw\u001e\u00ba\u00ec\u008d\u00ae`\u0098\u0084LG\u008cn\u00d5a\u00c0{\u00d3f\u00f1\u00d8\u009b\u001etw\u00a9\u00b8\u0083\u001ewJM\u0015\u0088(\u00f9\u001aKRB\u001cEDJ\u00d8\u00da\u009f\u00fc\u00d6\u00e5\u009f4\u00c44\u00a9\u00a6\u00db\u001b2u\u00c6\u00b2Z\u00f5\u0096\\\u00f7y+\u00060\u00d2\u008dB\u0011P\u009300\u00a2d\u00a3f\u00f4E\u00af\u0085\u00c8\u00e1|\fg\u00e6\u0084\u00ff\u00a4\u00e2O1C\nW\u00d1\u00d1<[\u008d\u00da\u009f\u00a5\u00bd~?t\u00ea\u00f0\u00fe\u0088h\u00aad<*\u00ecs\u0005&\u0088\u007f\u0010\u00f68\u00cb*\u00d5v\u00d8\u001a\u0003\u00eb\u00f0\u00b7\u0012\u00b3p\u00f89\r\u009b\u00e0<|\u009f8N\u009a\u00f4\u00ea\u00d7\u00d4\u0081\u00ee\u00c5\u00ca";
                var7_6 = "\u001b\u00a0Mwzp\u00f6\u00daS\u0084\u008c\u00e0yl\u0096\u0012\u0004ip\u009e\u00e9{e\u0014\u007f&\u0092\u00a6\u00bf\u00e8\u008a\u009er\u00fa\u00f1\u00ac\u00ea\u00c6u)\u0093\u00fdaR\u0096\u007f\u00c7U\u0091\u00b0\u00fe\u00a8c(\u001d\u00a4\u0018_\u009c\u00e3\u000e\u00de\u00ba\u009b\u00eenfg\u00f6\u00b6,\u001a\u0086\u0018\u00c5<\u00a7\u0092N\u008c\u001b\u00db\u0092V\u00beX\u008c9\u00c2\u00baY\u0086\u00d4\u00b4|\u00e12>\u00bef\u0090\u00d1\u00df\u00b21e`wr#\u00ed\b&\u0015\u00b0&`\t\u0095\u00a1kY1\u0093\u00c2\u00c7+\u008d'h\u00a5\u00ca\u00f1\u00fe\u0087}\\Z\u00e7WDZ!\u00d6\u00ac[\u0096\u00c0\u0000\u00f2>g\u00bf\u00ca\u00fb\u00b3\u00cd\u00a3\u00fb\u00c1\u0013sW\u00db!~\u00a37j\u00af\u00b2Nd\u009f\u0011%\u009f\u00d2*\u0086\u00e7\u00fcm\u0089t\u0082g\u009dqA\r\u00e9\u008e\u009d\n\u00ed\u001e\u00ed3\u00ca\u0016UY\u00cf\u00b2pu\u0006_\u00e6;\u00ad_>\u0017Wo_\u001e\u00bcw\u001e\u00ba\u00ec\u008d\u00ae`\u0098\u0084LG\u008cn\u00d5a\u00c0{\u00d3f\u00f1\u00d8\u009b\u001etw\u00a9\u00b8\u0083\u001ewJM\u0015\u0088(\u00f9\u001aKRB\u001cEDJ\u00d8\u00da\u009f\u00fc\u00d6\u00e5\u009f4\u00c44\u00a9\u00a6\u00db\u001b2u\u00c6\u00b2Z\u00f5\u0096\\\u00f7y+\u00060\u00d2\u008dB\u0011P\u009300\u00a2d\u00a3f\u00f4E\u00af\u0085\u00c8\u00e1|\fg\u00e6\u0084\u00ff\u00a4\u00e2O1C\nW\u00d1\u00d1<[\u008d\u00da\u009f\u00a5\u00bd~?t\u00ea\u00f0\u00fe\u0088h\u00aad<*\u00ecs\u0005&\u0088\u007f\u0010\u00f68\u00cb*\u00d5v\u00d8\u001a\u0003\u00eb\u00f0\u00b7\u0012\u00b3p\u00f89\r\u009b\u00e0<|\u009f8N\u009a\u00f4\u00ea\u00d7\u00d4\u0081\u00ee\u00c5\u00ca".length();
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
lbl27:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    var6_5 = "\r)\u0006p\u0084\u00a5T\u00b8g\u00ec\u00d4\u00c19SEZ";
                    var7_6 = "\r)\u0006p\u0084\u00a5T\u00b8g\u00ec\u00d4\u00c19SEZ".length();
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
lbl40:
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
lbl53:
                // 1 sources

                ** continue;
            }
        }
        pA.zXltb = var8_3;
        pA.awhmY = new Integer[50];
    }

    @Override
    public class_241 measure(lC lC2, lc lc2, class_1297 class_12972, boolean bl) {
        class_241 class_2412;
        long l = SElsh ^ 0x324D8A9D9966L;
        pA$vy vy2 = this.cRM(lc2, class_12972, bl);
        try {
            class_2412 = vy2 == null ? this.cQL() : this.cOr(vy2);
        }
        catch (MatchException matchException) {
            throw pA.cRQ(matchException);
        }
        return class_2412;
    }

    public static boolean cRO() {
        return RrTtM;
    }

    @Override
    public void drawBox(lC lC2, lc lc2, lc lc3, class_1297 class_12972, boolean bl) {
        block4: {
            pA$vy pA$vy;
            block5: {
                long l = SElsh ^ 0x33C9AAE7D32BL;
                pA$vy = this.cRM(lc3, class_12972, bl);
                boolean bl2 = pA.cRO();
                try {
                    try {
                        if (!bl2) break block4;
                        if (pA$vy != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw pA.cRQ(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw pA.cRQ(matchException);
                }
            }
            this.cRI(lC2, lc2, pA$vy.renderScale(), pA$vy.alpha());
            this.cOs(lC2, lc2, pA$vy);
        }
    }

    private static CallSite cRT(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/pA" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    protected void cOs(lC lC2, lc lc2, pA$vy pA$vy) {
        this.cRG(lC2, pA$vy.font(), pA$vy.text(), lc2.bXF() + pA$vy.paddingX(), lc2.bXG() + pA$vy.paddingY(), pA$vy.alpha());
    }

    protected abstract String cNC(class_1297 var1, boolean var2);

    protected void cRG(lC lC2, lq lq2, String string, float f2, float f3, float f4) {
        lC2.cez(lq2, string, f2, f3, this.cRH(f4));
    }

    protected class_241 cOr(pA$vy pA$vy) {
        return new class_241(pA$vy.textWidth() + pA$vy.paddingX() * 2.0f, pA$vy.textHeight() + pA$vy.paddingY() * 2.0f);
    }

    protected mG cRH(float f2) {
        return this.AoPsG.Wf().cob(f2);
    }

    public static boolean cRP() {
        boolean bl = pA.cRO();
        try {
            if (!bl) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw pA.cRQ(matchException);
        }
        return false;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private pA$vy cRM(lc lc2, class_1297 class_12972, boolean bl) {
        String string;
        String string2;
        block5: {
            long l = SElsh ^ 0x1793DC3D432EL;
            string2 = this.cRJ(class_12972, bl);
            boolean bl2 = pA.cRO();
            try {
                string = string2;
                if (!bl2) break block5;
                if (string == null) return null;
            }
            catch (MatchException matchException) {
                throw pA.cRQ(matchException);
            }
            string = string2;
        }
        try {
            if (string.isBlank()) {
                return null;
            }
        }
        catch (MatchException matchException) {
            throw pA.cRQ(matchException);
        }
        float f2 = 1.0f;
        float f3 = this.cQJ(lc2, bl);
        return new pA$vy(class_12972, bl, string2, this.cRL(f3), f3, this.cQM(bl), this.cQI(f2, f3), this.cQI(f2, f3));
    }

    protected lq cRL(float f2) {
        boolean bl;
        float f3;
        block13: {
            block14: {
                boolean bl2;
                block11: {
                    block12: {
                        long l = SElsh ^ 0x1327B1C697L;
                        f3 = this.cQI(5.0f, f2);
                        bl2 = pA.cRP();
                        try {
                            try {
                                bl = this.HXjad.SZ();
                                if (bl2) break block11;
                                if (!bl) break block12;
                            }
                            catch (MatchException matchException) {
                                throw pA.cRQ(matchException);
                            }
                            return lE.joxgd.bYM(f3);
                        }
                        catch (MatchException matchException) {
                            throw pA.cRQ(matchException);
                        }
                    }
                    bl = this.XaoTf.SZ();
                }
                try {
                    try {
                        if (bl2) break block13;
                        if (!bl) break block14;
                    }
                    catch (MatchException matchException) {
                        throw pA.cRQ(matchException);
                    }
                    return lE.WTzbi.bYM(f3);
                }
                catch (MatchException matchException) {
                    throw pA.cRQ(matchException);
                }
            }
            bl = this.PBeDf.SZ();
        }
        try {
            if (bl) {
                return lE.ePKsc.bYM(f3);
            }
        }
        catch (MatchException matchException) {
            throw pA.cRQ(matchException);
        }
        return lE.SVnNc.bYM(f3);
    }

    private static int cRS(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = pA.cRR(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    protected String cRK(String string) {
        boolean bl;
        block17: {
            block18: {
                boolean bl2;
                block15: {
                    block16: {
                        String string2;
                        block13: {
                            block14: {
                                long l = SElsh ^ 0x3774C6595772L;
                                bl2 = pA.cRP();
                                try {
                                    try {
                                        try {
                                            string2 = string;
                                            if (bl2) break block13;
                                            if (string2 == null) break block14;
                                        }
                                        catch (MatchException matchException) {
                                            throw pA.cRQ(matchException);
                                        }
                                        bl = string.isBlank();
                                        if (bl2) break block15;
                                    }
                                    catch (MatchException matchException) {
                                        throw pA.cRQ(matchException);
                                    }
                                    if (!bl) break block16;
                                }
                                catch (MatchException matchException) {
                                    throw pA.cRQ(matchException);
                                }
                            }
                            string2 = string;
                        }
                        return string2;
                    }
                    bl = this.bkReZ.SZ();
                }
                try {
                    try {
                        if (bl2) break block17;
                        if (!bl) break block18;
                    }
                    catch (MatchException matchException) {
                        throw pA.cRQ(matchException);
                    }
                    return string.toUpperCase(Locale.ROOT);
                }
                catch (MatchException matchException) {
                    throw pA.cRQ(matchException);
                }
            }
            bl = this.Ovxcd.SZ();
        }
        try {
            if (bl) {
                return string.toLowerCase(Locale.ROOT);
            }
        }
        catch (MatchException matchException) {
            throw pA.cRQ(matchException);
        }
        return string;
    }

    private static int cRR(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x1225;
        if (awhmY[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = zXltb[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])xEKTJ.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    xEKTJ.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/pA", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            pA.awhmY[n2] = n3;
        }
        return awhmY[n2];
    }

    protected String cRJ(class_1297 class_12972, boolean bl) {
        return this.cRK(this.cNC(class_12972, bl));
    }

    public static void cRN(boolean bl) {
        RrTtM = bl;
    }

    private static MatchException cRQ(MatchException matchException) {
        return matchException;
    }

    protected void cRI(lC lC2, lc lc2, float f2, float f3) {
        this.VgPLF.cSe(lC2, lc2, f2, f3);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(pA.class, "cRS", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
