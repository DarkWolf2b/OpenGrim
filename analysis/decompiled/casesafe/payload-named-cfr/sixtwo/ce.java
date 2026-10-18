/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.gui.screen.ChatScreen
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.gui.screen.ChatScreen;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.ca;
import sixtwo.co;
import sixtwo.gb;
import sixtwo.gc;
import sixtwo.gg;
import sixtwo.ii;
import sixtwo.jb;
import sixtwo.jf;
import sixtwo.jk;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.ld;
import sixtwo.lf;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.rD;
import sixtwo.ri;
import sixtwo.rj;
import sixtwo.rk;

public class ce
extends co {
    private final cJ cHqOw;
    private final cJ UIgzX;
    private final cG QyAzy;
    private final cG sFKNs;
    private int WViuF;
    private static final long AjBQU;
    private static final long[] DHEMI;
    private static final Integer[] sMfLg;
    private static final Map QuPpy;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ce() {
        long l2 = AjBQU ^ 0xACFAB920C52L;
        int[] nArray = new int[ce.PW("m", (int)11243, (long)(0x1DEB022E05DF385FL ^ l2))];
        nArray[0] = (int)ce.PW("m", (int)17516, (long)(0x21327B8EA95157F4L ^ l2));
        nArray[1] = (int)ce.PW("m", (int)7431, (long)(0x58DD44FC8BEC0EB0L ^ l2));
        nArray[2] = (int)ce.PW("m", (int)4271, (long)(0xCAD3CD3A864032FL ^ l2));
        nArray[3] = (int)ce.PW("m", (int)25851, (long)(0x71D9FA01EE687765L ^ l2));
        nArray[4] = (int)ce.PW("m", (int)627, (long)(0x2EF47998245C11FEL ^ l2));
        nArray[5] = (int)ce.PW("m", (int)30720, (long)(0x2818A5947C546B95L ^ l2));
        nArray[ce.PW("m", (int)18567, (long)(0x5C3D9CFDD7F45B16L ^ l2))] = (int)ce.PW("m", (int)18918, (long)(0x1FEE4218D838DA4BL ^ l2));
        nArray[ce.PW("m", (int)17214, (long)(0x1C4423E0D6FF5086L ^ l2))] = (int)ce.PW("m", (int)8328, (long)(0x7D7DFAD362483303L ^ l2));
        super(nArray, lf.wmWhC);
        int[] nArray2 = new int[ce.PW("m", (int)9694, (long)(0x41E607123E0B65CL ^ l2))];
        nArray2[0] = (int)ce.PW("m", (int)9043, (long)(0x18F4B354C6C7B0FFL ^ l2));
        nArray2[1] = (int)ce.PW("m", (int)23728, (long)(0x762E9E53CF914F0EL ^ l2));
        nArray2[2] = (int)ce.PW("m", (int)6958, (long)(0x3D2B12608ECF88B2L ^ l2));
        nArray2[3] = (int)ce.PW("m", (int)7393, (long)(0x5A6425DC2FF08F7EL ^ l2));
        nArray2[4] = (int)ce.PW("m", (int)20252, (long)(0x61EEFF1322B9DCB7L ^ l2));
        nArray2[5] = (int)ce.PW("m", (int)2944, (long)(0x2D534F32DFAB9814L ^ l2));
        nArray2[ce.PW("m", (int)175, (long)(0x789EAD272C1931EL ^ l2))] = (int)ce.PW("m", (int)5349, (long)(0x5FD15C96D0408756L ^ l2));
        nArray2[ce.PW("m", (int)28382, (long)(0x1D73F7434BB6FD4EL ^ l2))] = (int)ce.PW("m", (int)19660, (long)(0x2914CF785CBBDF71L ^ l2));
        nArray2[ce.PW("m", (int)20303, (long)(0x3EC512EBA3225CF0L ^ l2))] = (int)ce.PW("m", (int)4786, (long)(0x212C94ED6E5F013BL ^ l2));
        nArray2[ce.PW("m", (int)19074, (long)(0x727C6F84F2A2D914L ^ l2))] = (int)ce.PW("m", (int)24823, (long)(0x2870C3DC93E8F345L ^ l2));
        nArray2[ce.PW("m", (int)5175, (long)(0x7DC71E26DA3807BFL ^ l2))] = (int)ce.PW("m", (int)24193, (long)(0x2C55B0A92B13CD0BL ^ l2));
        this.cHqOw = new cJ(this, mr.clS(nArray2)).WE(true);
        int[] nArray3 = new int[ce.PW("m", (int)16782, (long)(0x524778B14D9B520DL ^ l2))];
        nArray3[0] = (int)ce.PW("m", (int)9865, (long)(0x3F1E0C96B70E3533L ^ l2));
        nArray3[1] = (int)ce.PW("m", (int)7393, (long)(0x5A6425DC2FF08F7EL ^ l2));
        nArray3[2] = (int)ce.PW("m", (int)23728, (long)(0x762E9E53CF914F0EL ^ l2));
        nArray3[3] = (int)ce.PW("m", (int)24783, (long)(0x28A7C77E02E8F35DL ^ l2));
        nArray3[4] = (int)ce.PW("m", (int)30245, (long)(0x4DE460B96E4CE5AAL ^ l2));
        nArray3[5] = (int)ce.PW("m", (int)4786, (long)(0x212C94ED6E5F013BL ^ l2));
        nArray3[ce.PW("m", (int)175, (long)(0x789EAD272C1931EL ^ l2))] = (int)ce.PW("m", (int)25977, (long)(0x1022F01DABF576EEL ^ l2));
        nArray3[ce.PW("m", (int)28382, (long)(0x1D73F7434BB6FD4EL ^ l2))] = (int)ce.PW("m", (int)2149, (long)(0x5BA8F5C35F179BD0L ^ l2));
        nArray3[ce.PW("m", (int)20303, (long)(0x3EC512EBA3225CF0L ^ l2))] = (int)ce.PW("m", (int)13598, (long)(0x67ECA88A2B9BA6AEL ^ l2));
        nArray3[ce.PW("m", (int)27485, (long)(0x5158CC61E18B78C7L ^ l2))] = (int)ce.PW("m", (int)3163, (long)(0x13A2C214E0771FEDL ^ l2));
        nArray3[ce.PW("m", (int)16216, (long)(0x716480A89ECB2CE1L ^ l2))] = (int)ce.PW("m", (int)14470, (long)(0x408A0F78DDC62B00L ^ l2));
        nArray3[ce.PW("m", (int)12233, (long)(0x7294A956F0983C75L ^ l2))] = (int)ce.PW("m", (int)13848, (long)(0x1D46E8D4C87CA58BL ^ l2));
        nArray3[ce.PW("m", (int)10325, (long)(0x6C4511681154BBD2L ^ l2))] = (int)ce.PW("m", (int)25787, (long)(0x768E2D8C9D91F720L ^ l2));
        this.UIgzX = new cJ(this, mr.clS(nArray3)).WE(true);
        int[] nArray4 = new int[ce.PW("m", (int)14981, (long)(0x2B273042A87DA901L ^ l2))];
        nArray4[0] = (int)ce.PW("m", (int)5100, (long)(0x422F43D52599806DL ^ l2));
        nArray4[1] = (int)ce.PW("m", (int)23728, (long)(0x762E9E53CF914F0EL ^ l2));
        nArray4[2] = (int)ce.PW("m", (int)17196, (long)(0x4E40E7F7AD625083L ^ l2));
        nArray4[3] = (int)ce.PW("m", (int)25690, (long)(0x27B1070788EB77C3L ^ l2));
        nArray4[4] = (int)ce.PW("m", (int)14470, (long)(0x408A0F78DDC62B00L ^ l2));
        nArray4[5] = (int)ce.PW("m", (int)24193, (long)(0x2C55B0A92B13CD0BL ^ l2));
        nArray4[ce.PW("m", (int)175, (long)(0x789EAD272C1931EL ^ l2))] = (int)ce.PW("m", (int)16247, (long)(0x67EC6D87632ACDDL ^ l2));
        nArray4[ce.PW("m", (int)28382, (long)(0x1D73F7434BB6FD4EL ^ l2))] = (int)ce.PW("m", (int)2149, (long)(0x5BA8F5C35F179BD0L ^ l2));
        nArray4[ce.PW("m", (int)20303, (long)(0x3EC512EBA3225CF0L ^ l2))] = (int)ce.PW("m", (int)7309, (long)(0x5F7EB36614470F08L ^ l2));
        nArray4[ce.PW("m", (int)27485, (long)(0x5158CC61E18B78C7L ^ l2))] = (int)ce.PW("m", (int)13848, (long)(0x1D46E8D4C87CA58BL ^ l2));
        nArray4[ce.PW("m", (int)16216, (long)(0x716480A89ECB2CE1L ^ l2))] = (int)ce.PW("m", (int)14470, (long)(0x408A0F78DDC62B00L ^ l2));
        nArray4[ce.PW("m", (int)12233, (long)(0x7294A956F0983C75L ^ l2))] = (int)ce.PW("m", (int)13848, (long)(0x1D46E8D4C87CA58BL ^ l2));
        nArray4[ce.PW("m", (int)31349, (long)(0xA0F431740EB69F9L ^ l2))] = (int)ce.PW("m", (int)18033, (long)(0x3CEC5E994945D5ECL ^ l2));
        this.QyAzy = new cG(this, mr.clS(nArray4)).Uf(jk.jEkxo);
        int[] nArray5 = new int[ce.PW("m", (int)17579, (long)(0x1975C6967D105725L ^ l2))];
        nArray5[0] = (int)ce.PW("m", (int)8256, (long)(0x630CA0DF3ABBB3FBL ^ l2));
        nArray5[1] = (int)ce.PW("m", (int)4786, (long)(0x212C94ED6E5F013BL ^ l2));
        nArray5[2] = (int)ce.PW("m", (int)26523, (long)(0x6D32C452D48FF435L ^ l2));
        nArray5[3] = (int)ce.PW("m", (int)17196, (long)(0x4E40E7F7AD625083L ^ l2));
        nArray5[4] = (int)ce.PW("m", (int)25690, (long)(0x27B1070788EB77C3L ^ l2));
        nArray5[5] = (int)ce.PW("m", (int)14470, (long)(0x408A0F78DDC62B00L ^ l2));
        nArray5[ce.PW("m", (int)175, (long)(0x789EAD272C1931EL ^ l2))] = (int)ce.PW("m", (int)24193, (long)(0x2C55B0A92B13CD0BL ^ l2));
        nArray5[ce.PW("m", (int)28382, (long)(0x1D73F7434BB6FD4EL ^ l2))] = (int)ce.PW("m", (int)16247, (long)(0x67EC6D87632ACDDL ^ l2));
        nArray5[ce.PW("m", (int)20303, (long)(0x3EC512EBA3225CF0L ^ l2))] = (int)ce.PW("m", (int)2149, (long)(0x5BA8F5C35F179BD0L ^ l2));
        nArray5[ce.PW("m", (int)27485, (long)(0x5158CC61E18B78C7L ^ l2))] = (int)ce.PW("m", (int)7309, (long)(0x5F7EB36614470F08L ^ l2));
        nArray5[ce.PW("m", (int)16216, (long)(0x716480A89ECB2CE1L ^ l2))] = (int)ce.PW("m", (int)13848, (long)(0x1D46E8D4C87CA58BL ^ l2));
        nArray5[ce.PW("m", (int)12233, (long)(0x7294A956F0983C75L ^ l2))] = (int)ce.PW("m", (int)14470, (long)(0x408A0F78DDC62B00L ^ l2));
        nArray5[ce.PW("m", (int)31349, (long)(0xA0F431740EB69F9L ^ l2))] = (int)ce.PW("m", (int)13848, (long)(0x1D46E8D4C87CA58BL ^ l2));
        nArray5[ce.PW("m", (int)14981, (long)(0x2B273042A87DA901L ^ l2))] = (int)ce.PW("m", (int)18033, (long)(0x3CEC5E994945D5ECL ^ l2));
        this.sFKNs = new cG(this, mr.clS(nArray5)).Uf(jk.mPXGi);
        this.UIgzX.Vf(() -> {
            boolean bl2;
            block2: {
                block3: {
                    long l2 = AjBQU ^ 0x2562D0DF5C42L;
                    boolean bl3 = ca.OY();
                    try {
                        bl2 = this.cHqOw.WF();
                        if (!bl3) break block2;
                        if (bl2) break block3;
                    }
                    catch (MatchException matchException) {
                        throw ce.PT(matchException);
                    }
                    bl2 = true;
                    break block2;
                }
                bl2 = false;
            }
            return bl2;
        });
        this.QyAzy.Vf(() -> {
            boolean bl2;
            block8: {
                block7: {
                    boolean bl3;
                    block6: {
                        long l2 = AjBQU ^ 0x67458BBB3CB9L;
                        bl3 = ca.OY();
                        try {
                            try {
                                bl2 = this.UIgzX.WF();
                                if (!bl3) break block6;
                                if (!bl2) break block7;
                            }
                            catch (MatchException matchException) {
                                throw ce.PT(matchException);
                            }
                            bl2 = this.cHqOw.WF();
                        }
                        catch (MatchException matchException) {
                            throw ce.PT(matchException);
                        }
                    }
                    try {
                        if (!bl3) break block8;
                        if (bl2) break block7;
                    }
                    catch (MatchException matchException) {
                        throw ce.PT(matchException);
                    }
                    bl2 = true;
                    break block8;
                }
                bl2 = false;
            }
            return bl2;
        });
        this.sFKNs.Vf(() -> {
            boolean bl2;
            block8: {
                block7: {
                    boolean bl3;
                    block6: {
                        long l2 = AjBQU ^ 0x24D1FF285177L;
                        bl3 = ca.OY();
                        try {
                            try {
                                bl2 = this.UIgzX.WF();
                                if (!bl3) break block6;
                                if (!bl2) break block7;
                            }
                            catch (MatchException matchException) {
                                throw ce.PT(matchException);
                            }
                            bl2 = this.cHqOw.WF();
                        }
                        catch (MatchException matchException) {
                            throw ce.PT(matchException);
                        }
                    }
                    try {
                        if (!bl3) break block8;
                        if (bl2) break block7;
                    }
                    catch (MatchException matchException) {
                        throw ce.PT(matchException);
                    }
                    bl2 = true;
                    break block8;
                }
                bl2 = false;
            }
            return bl2;
        });
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                ce.AjBQU = gb.aYR(7143941292212095405L, 356946915132009460L, MethodHandles.lookup().lookupClass()).a(198176423092325L);
                ce.QuPpy = new HashMap<K, V>(13);
                var0 = ce.AjBQU ^ 111885727475900L;
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
                var6_5 = ">\u00ee\u00d2\u00f9R\u00fd\u00c8\f\u001f\u00f5+\bR\u00e0\u00fc\u00f5A\u00a3\u00c4\u001f\u00a4-\u00b2:\u00f3!\u00c7sH\u0097\u00c9m\u00e2\u000e\u00d3\u00b1E$\u00b1|Z\u008coy\u00ad\u00b7})\u00bdp\u0097ha@D\u00cb_'\u00ac\u00c57\u00eb\u00a2\u008bx\u001c%l\u009c\u00c4\u00df\u0011/r\u00f3c}\u00c6?Y\u00ed\u00b5h\u00e3\u00cd\u00af<\u0011?]\u0081_\u00db\u00dbJ\u0018\u009b\u00e9,RW3\u0003\u00f8\u00e9X\r\u00c9\u00d4\u008em\u00fa~h?/\u00a2\u00a2\u00db\u00a3$ D\u00b4\u00e1\u00b4<\u00b9e\u00c1\f\u00eb(\u00d5\u00a0\u00fbGq\u009f\u00e6!~j\u009ekkm&K\u00c8L\u00959\u00ea\u0001\u00f3\u00de9\u001e\u00cbK\u00eb\u00b7\u00fe.\u007f\u0081\u00be\u0014Os\u0090\u00ab!\u00b5)\u00aa1\u0084F\u0095\u0096\u00f8=\u0087\u0096\u00fer\u00a8{\u00a1X\u0097K\u0088\u00db\u00b6h \u0089yoI\u00fa\u0017\u00c4(\u00ba\u00e1dWv\r'hE\u00abP^:\u009b\u00e3\u0088\"]X\u0098\u0085N\u00e2\u008a'\u00f0\u00c0\u009e[\u000e\u00f3\u00c7\u00a2F\u00bcc\u008b\u0003\u00c0\u00e6\u0012\u0083\u00f9\u0000\u00b7X\u00df\u00b2\u00ad{i\u00c82\u00e0G\u00f5\u00d9k\u00bb\u0015*\u0003\u00d9\u00db\u00d8\u00e9/\u00fdJ\u00c5\u00cf/\u00e0\u00e3\u00e5\u00aa1\u00e6\u00fe\u00f7\u0087\b\u00bc\u0080\u00fb\u0007Y\u00b1\u001e_\u00aezx\u00c5E\u001d1a\u00cc\u00ee\u000b\u00c7M\u0018\u00b7E\u0010)E\u00d8\u00cd\u00a9\u00cc\u00d4\u00ef\u00de\u00b77$\u00ed\u00a8iM\u00b3\u00b7\u0098\"\u00b1k\u00b6\u0086\u000e\u00d6\u0094\u00a9\bCidl9\u0018\u00d2\u00af?\u00c1\u001f\u00be\u0006\u0006Lo.i8hfk\u00b4\u00dd\u00b5\u00d26\u00f7\u00e7\u00bd|\u00ea\u00e41\u0012\u0084+\u00c8\u00f6\u00c7\u00a5\u00d88\u00f7\u00da\u00ae#\u00f1\u0098\u0087x\u00e3z0\n\u0091\u00bcUG\u00d5\u00cfP\u008a\u00d6(\u008c\u000e\u000e\u00ca[\u0092\\\u00c6";
                var7_6 = ">\u00ee\u00d2\u00f9R\u00fd\u00c8\f\u001f\u00f5+\bR\u00e0\u00fc\u00f5A\u00a3\u00c4\u001f\u00a4-\u00b2:\u00f3!\u00c7sH\u0097\u00c9m\u00e2\u000e\u00d3\u00b1E$\u00b1|Z\u008coy\u00ad\u00b7})\u00bdp\u0097ha@D\u00cb_'\u00ac\u00c57\u00eb\u00a2\u008bx\u001c%l\u009c\u00c4\u00df\u0011/r\u00f3c}\u00c6?Y\u00ed\u00b5h\u00e3\u00cd\u00af<\u0011?]\u0081_\u00db\u00dbJ\u0018\u009b\u00e9,RW3\u0003\u00f8\u00e9X\r\u00c9\u00d4\u008em\u00fa~h?/\u00a2\u00a2\u00db\u00a3$ D\u00b4\u00e1\u00b4<\u00b9e\u00c1\f\u00eb(\u00d5\u00a0\u00fbGq\u009f\u00e6!~j\u009ekkm&K\u00c8L\u00959\u00ea\u0001\u00f3\u00de9\u001e\u00cbK\u00eb\u00b7\u00fe.\u007f\u0081\u00be\u0014Os\u0090\u00ab!\u00b5)\u00aa1\u0084F\u0095\u0096\u00f8=\u0087\u0096\u00fer\u00a8{\u00a1X\u0097K\u0088\u00db\u00b6h \u0089yoI\u00fa\u0017\u00c4(\u00ba\u00e1dWv\r'hE\u00abP^:\u009b\u00e3\u0088\"]X\u0098\u0085N\u00e2\u008a'\u00f0\u00c0\u009e[\u000e\u00f3\u00c7\u00a2F\u00bcc\u008b\u0003\u00c0\u00e6\u0012\u0083\u00f9\u0000\u00b7X\u00df\u00b2\u00ad{i\u00c82\u00e0G\u00f5\u00d9k\u00bb\u0015*\u0003\u00d9\u00db\u00d8\u00e9/\u00fdJ\u00c5\u00cf/\u00e0\u00e3\u00e5\u00aa1\u00e6\u00fe\u00f7\u0087\b\u00bc\u0080\u00fb\u0007Y\u00b1\u001e_\u00aezx\u00c5E\u001d1a\u00cc\u00ee\u000b\u00c7M\u0018\u00b7E\u0010)E\u00d8\u00cd\u00a9\u00cc\u00d4\u00ef\u00de\u00b77$\u00ed\u00a8iM\u00b3\u00b7\u0098\"\u00b1k\u00b6\u0086\u000e\u00d6\u0094\u00a9\bCidl9\u0018\u00d2\u00af?\u00c1\u001f\u00be\u0006\u0006Lo.i8hfk\u00b4\u00dd\u00b5\u00d26\u00f7\u00e7\u00bd|\u00ea\u00e41\u0012\u0084+\u00c8\u00f6\u00c7\u00a5\u00d88\u00f7\u00da\u00ae#\u00f1\u0098\u0087x\u00e3z0\n\u0091\u00bcUG\u00d5\u00cfP\u008a\u00d6(\u008c\u000e\u000e\u00ca[\u0092\\\u00c6".length();
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
                    var6_5 = "\u0006\u009a\u0006@\u00a9m\u00df\u0093)\u00aa\u00f3Y\u00ca\u000bP\r";
                    var7_6 = "\u0006\u009a\u0006@\u00a9m\u00df\u0093)\u00aa\u00f3Y\u00ca\u000bP\r".length();
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
        ce.DHEMI = var8_3;
        ce.sMfLg = new Integer[54];
    }

    private static MatchException PT(MatchException matchException) {
        return matchException;
    }

    private static boolean PO(gg gg2, boolean bl2) {
        boolean bl3;
        block16: {
            block15: {
                block17: {
                    boolean bl4;
                    block14: {
                        gg gg3;
                        block12: {
                            block13: {
                                long l2 = AjBQU ^ 0x741909C74288L;
                                bl4 = ca.OX();
                                try {
                                    try {
                                        gg3 = gg2;
                                        if (bl4) break block12;
                                        if (!gg3.baj()) break block13;
                                    }
                                    catch (MatchException matchException) {
                                        throw ce.PT(matchException);
                                    }
                                    return false;
                                }
                                catch (MatchException matchException) {
                                    throw ce.PT(matchException);
                                }
                            }
                            gg3 = gg2;
                        }
                        gc gc2 = gg3.baf();
                        try {
                            bl3 = gc2.aZf();
                            if (bl4) break block14;
                            if (bl3) break block15;
                        }
                        catch (MatchException matchException) {
                            throw ce.PT(matchException);
                        }
                        bl3 = bl2;
                    }
                    try {
                        try {
                            try {
                                if (bl4) break block16;
                                if (!bl3) break block17;
                            }
                            catch (MatchException matchException) {
                                throw ce.PT(matchException);
                            }
                            bl3 = gg2.bag();
                            if (bl4) break block16;
                        }
                        catch (MatchException matchException) {
                            throw ce.PT(matchException);
                        }
                        if (!bl3) break block15;
                    }
                    catch (MatchException matchException) {
                        throw ce.PT(matchException);
                    }
                }
                bl3 = true;
                break block16;
            }
            bl3 = false;
        }
        return bl3;
    }

    private static CallSite PW(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ce" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int PU(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x1059;
        if (sMfLg[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = DHEMI[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])QuPpy.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    QuPpy.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ce", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            ce.sMfLg[n3] = n4;
        }
        return sMfLg[n3];
    }

    private static int PV(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = ce.PU(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    @Override
    protected void NV(lC lC2) {
        block27: {
            ArrayList<gg> arrayList;
            float f2;
            float f3;
            float f4;
            ii ii2;
            lq lq2;
            boolean bl2;
            block26: {
                block25: {
                    long l2 = AjBQU ^ 0x2A446EA26640L;
                    lq lq3 = lE.WTzbi.bYM(7.0f);
                    bl2 = ca.OY();
                    lq2 = lE.joxgd.bYM(7.0f);
                    ii2 = rD.dlM();
                    f4 = this.ormBS.dhj();
                    f3 = this.gILqY.dhj();
                    mG mG2 = ii2.bjb().coa(255.0f * f4);
                    mG mG3 = ii2.bjc().coa(255.0f * f4);
                    float f5 = 20.0f;
                    f2 = 2.0f;
                    lC2.ccU(this.toIeR, this.QWaAn, this.jTsqG, f5, f4, f3);
                    lC2.ceA(lq3, this.eqWHC, this.toIeR + 7.0f, this.QWaAn + jf.bAH(lq3.cat(), f5), mG2);
                    float f6 = 8.0f;
                    lC2.cem(this.jAncU, this.toIeR + this.jTsqG - f6 - 7.0f, this.QWaAn + jf.bAH(f6, f5), f6, mG3);
                    arrayList = new ArrayList<gg>(rD.dlJ().aZz().values());
                    try {
                        ce ce2;
                        try {
                            ce2 = this;
                            if (!bl2) break block25;
                            if (ce2.WViuF == arrayList.size()) break block26;
                        }
                        catch (MatchException matchException) {
                            throw ce.PT(matchException);
                        }
                        arrayList.sort(Comparator.comparingDouble(gg2 -> lq3.cap(gg2.bad()) + lq3.cao(jb.byM(gg2.baf().aZh()))));
                        ce2 = this;
                    }
                    catch (MatchException matchException) {
                        throw ce.PT(matchException);
                    }
                }
                ce2.WViuF = arrayList.size();
            }
            float f7 = 13.0f;
            zXCXX.bUa(lq2);
            float f8 = 22.0f;
            for (gg gg3 : arrayList) {
                float f9;
                float f10;
                float f11;
                float f12;
                float f13;
                String string;
                mG mG4;
                float f14;
                float f15;
                block34: {
                    block35: {
                        block36: {
                            block31: {
                                mG mG5;
                                ri ri2;
                                block33: {
                                    block32: {
                                        boolean bl3;
                                        block30: {
                                            float f16;
                                            block28: {
                                                rk rk2;
                                                block29: {
                                                    rk2 = gg3.bal();
                                                    try {
                                                        try {
                                                            try {
                                                                if (!bl2) break block27;
                                                                f16 = rk2.dhj();
                                                                if (!bl2) break block28;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw ce.PT(matchException);
                                                            }
                                                            if (f16 != 0.0f) break block29;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw ce.PT(matchException);
                                                        }
                                                        if (bl2) continue;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw ce.PT(matchException);
                                                    }
                                                }
                                                f16 = rk2.dhj();
                                            }
                                            f15 = f16;
                                            float f17 = -4.5f + 4.5f * f15;
                                            f14 = this.QWaAn + f8 + f17;
                                            try {
                                                try {
                                                    bl3 = this.UIgzX.WF();
                                                    if (!bl2) break block30;
                                                    if (!bl3) break block31;
                                                }
                                                catch (MatchException matchException) {
                                                    throw ce.PT(matchException);
                                                }
                                                bl3 = this.cHqOw.WF();
                                            }
                                            catch (MatchException matchException) {
                                                throw ce.PT(matchException);
                                            }
                                        }
                                        try {
                                            try {
                                                if (bl3) break block31;
                                                ri2 = gg3.ban();
                                                if (!gg3.bag()) break block32;
                                            }
                                            catch (MatchException matchException) {
                                                throw ce.PT(matchException);
                                            }
                                            mG5 = this.QyAzy.Wf();
                                            break block33;
                                        }
                                        catch (MatchException matchException) {
                                            throw ce.PT(matchException);
                                        }
                                    }
                                    mG5 = this.sFKNs.Wf();
                                }
                                ri2.dfT(mG5);
                                mG4 = gg3.ban().dfU();
                                if (bl2) break block36;
                            }
                            mG4 = ii2.bjb();
                        }
                        mG4 = mG4.coa(255.0f * f15);
                        string = jb.byM(gg3.baf().aZh());
                        f13 = lq2.cap(gg3.bad());
                        float f18 = lq2.cao(string);
                        f12 = 7.0f;
                        f11 = this.toIeR + f18 + f12 * 2.0f + 3.0f;
                        float f19 = f18 + f12 * 2.0f;
                        try {
                            try {
                                f10 = f15;
                                f9 = 0.1f;
                                if (!bl2) break block34;
                                if (!(f10 >= f9)) break block35;
                            }
                            catch (MatchException matchException) {
                                throw ce.PT(matchException);
                            }
                            lC2.ccW(this.toIeR, f14, f19, 13.0f, f4, f3, ld.all(5.0f), 7.0f);
                            lC2.ccW(f11, f14, f13 + f12 * 2.0f, 13.0f, f4, f3, ld.all(5.0f), 7.0f);
                        }
                        catch (MatchException matchException) {
                            throw ce.PT(matchException);
                        }
                    }
                    f10 = this.toIeR;
                    f9 = f12 * f15;
                }
                float f20 = f10 + f9;
                float f21 = f14 + jf.bAH(lq2.cat(), 13.0f);
                lC2.cer(lq2, string, f20, f21, mG4);
                float f22 = f11 + f13 + f12 * 2.0f - f12 * f15;
                lC2.cew(lq2, gg3.bad(), f22, f21, mG4);
                f8 += (13.0f + f2) * f15;
                if (bl2) continue;
            }
            zXCXX.endBatch();
        }
    }

    @Override
    public void LX(lC lC2) {
        block7: {
            long l2 = AjBQU ^ 0x3EFF84A78980L;
            this.jTsqG = 67.0f;
            this.Xtjvx = 20.0f;
            boolean bl2 = this.cHqOw.WF();
            lq lq2 = lE.joxgd.bYM(7.0f);
            boolean bl3 = ca.OX();
            for (gg gg2 : rD.dlJ().aZz().values()) {
                block8: {
                    rk rk2;
                    block9: {
                        boolean bl4 = ce.PO(gg2, bl2);
                        rk2 = gg2.bal();
                        try {
                            try {
                                try {
                                    rk2.dhc(bl4);
                                    rk2.dhs(rj.XzDkv);
                                    if (bl3) break block7;
                                    if (bl3) break block8;
                                }
                                catch (MatchException matchException) {
                                    throw ce.PT(matchException);
                                }
                                if (rk2.dhj() == 0.0f) break block9;
                            }
                            catch (MatchException matchException) {
                                throw ce.PT(matchException);
                            }
                            this.jTsqG = Math.max(lq2.cap(gg2.bad()) + lq2.cao(jb.byM(gg2.baf().aZh())) + 31.0f, this.jTsqG);
                        }
                        catch (MatchException matchException) {
                            throw ce.PT(matchException);
                        }
                    }
                    this.Xtjvx += 15.0f * rk2.dhj();
                }
                if (!bl3) continue;
            }
            super.LX(lC2);
        }
    }

    @Override
    public boolean Om() {
        boolean bl2;
        block11: {
            boolean bl3;
            boolean bl4;
            block9: {
                block10: {
                    long l2 = AjBQU ^ 0x29C9F822236AL;
                    bl4 = ca.OY();
                    try {
                        try {
                            bl3 = rD.dlmvG.currentScreen instanceof ChatScreen;
                            if (!bl4) break block9;
                            if (!bl3) break block10;
                        }
                        catch (MatchException matchException) {
                            throw ce.PT(matchException);
                        }
                        return true;
                    }
                    catch (MatchException matchException) {
                        throw ce.PT(matchException);
                    }
                }
                bl3 = this.cHqOw.WF();
            }
            boolean bl5 = bl3;
            for (gg gg2 : rD.dlJ().aZz().values()) {
                block13: {
                    boolean bl6;
                    block12: {
                        try {
                            try {
                                bl2 = ce.PO(gg2, bl5);
                                if (!bl4) break block11;
                                if (!bl4) break block12;
                            }
                            catch (MatchException matchException) {
                                throw ce.PT(matchException);
                            }
                            if (!bl2) break block13;
                        }
                        catch (MatchException matchException) {
                            throw ce.PT(matchException);
                        }
                        bl6 = true;
                    }
                    return bl6;
                }
                if (bl4) continue;
            }
            bl2 = false;
        }
        return bl2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ce.class, "PV", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

