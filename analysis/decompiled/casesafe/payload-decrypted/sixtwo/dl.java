/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.EntityType
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
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EntityType;
import sixtwo.cC;
import sixtwo.cF;
import sixtwo.cG;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gi;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jJ;
import sixtwo.jg$tJ;
import sixtwo.ki;
import sixtwo.kn;
import sixtwo.lH;
import sixtwo.mr;
import sixtwo.rD;

public class dl
extends gg {
    private final cF Myqqn;
    private final cG bfmBp;
    private final ct kHCyC;
    private final cu ySLzi;
    private final cu TJfWG;
    private final cu rjOTp;
    private final cu bFjPw;
    private final cG aMyMs;
    private final cC UITAz;
    private final cC yUron;
    private final cC ZEreL;
    private final cC tNzOl;
    private final cC EOBwn;
    private final cC TYtlY;
    private final cC DMmsT;
    private static final long TjDPX;
    private static final long[] hxrHD;
    private static final Integer[] KtDAm;
    private static final Map tdLit;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dl() {
        long l2 = TjDPX ^ 0x566AA7CB0A4FL;
        super(gf.aZL((int)131, false, gh.nOCvV));
        int[] nArray = new int[8];
        nArray[0] = (int)69;
        nArray[1] = (int)110;
        nArray[2] = (int)116;
        nArray[3] = (int)105;
        nArray[4] = (int)116;
        nArray[5] = (int)105;
        nArray[6] = (int)101;
        nArray[7] = (int)115;
        this.Myqqn = new cF(this, mr.clS(nArray)).VS(jg$tJ.OCdZM).VT(EntityType.END_CRYSTAL);
        this.bfmBp = new cG(this, mr.clS(new int[]{(int)67, (int)111, (int)108, (int)111, (int)114})).Uf(rD.dlM().bjG().bis());
        int[] nArray2 = new int[10];
        nArray2[0] = (int)67;
        nArray2[1] = (int)111;
        nArray2[2] = (int)dl.agT("k", (int)Short.MAX_VALUE, (long)(0x57380C9D68D35797L ^ l2));
        nArray2[3] = (int)111;
        nArray2[4] = (int)114;
        nArray2[5] = (int)32;
        nArray2[6] = (int)77;
        nArray2[7] = (int)111;
        nArray2[8] = (int)100;
        nArray2[9] = (int)101;
        this.kHCyC = new ct(this, mr.clS(nArray2));
        this.ySLzi = new cu(this.kHCyC, mr.clS(new int[]{(int)90, (int)101, (int)114, (int)111}));
        this.TJfWG = new cu(this.kHCyC, mr.clS(new int[]{(int)79, (int)110, (int)101}));
        this.rjOTp = new cu(this.kHCyC, mr.clS(new int[]{(int)84, (int)119, (int)111}));
        this.bFjPw = new cu(this.kHCyC, mr.clS(new int[]{(int)84, (int)104, (int)114, (int)101, (int)101}));
        int[] nArray3 = new int[12];
        nArray3[0] = (int)83;
        nArray3[1] = (int)101;
        nArray3[2] = (int)99;
        nArray3[3] = (int)111;
        nArray3[4] = (int)110;
        nArray3[5] = (int)100;
        nArray3[6] = (int)32;
        nArray3[7] = (int)67;
        nArray3[8] = (int)111;
        nArray3[9] = (int)dl.agT("k", (int)Short.MAX_VALUE, (long)(0x57380C9D68D35797L ^ l2));
        nArray3[10] = (int)111;
        nArray3[11] = (int)114;
        this.aMyMs = new cG(this, mr.clS(nArray3)).Uf(rD.dlM().bjG().bis());
        int[] nArray4 = new int[15];
        nArray4[0] = (int)65;
        nArray4[1] = (int)110;
        nArray4[2] = (int)105;
        nArray4[3] = (int)109;
        nArray4[4] = (int)97;
        nArray4[5] = (int)116;
        nArray4[6] = (int)105;
        nArray4[7] = (int)111;
        nArray4[8] = (int)110;
        nArray4[9] = (int)32;
        nArray4[10] = (int)83;
        nArray4[11] = (int)112;
        nArray4[12] = (int)101;
        nArray4[13] = (int)101;
        nArray4[14] = (int)100;
        this.UITAz = new cC(this, mr.clS(nArray4)).Vy(0.1).Vw(0.0).Vx(3.0).VA(1.5);
        int[] nArray5 = new int[12];
        nArray5[0] = (int)71;
        nArray5[1] = (int)dl.agT("k", (int)Short.MAX_VALUE, (long)(0x57380C9D68D35797L ^ l2));
        nArray5[2] = (int)111;
        nArray5[3] = (int)119;
        nArray5[4] = (int)32;
        nArray5[5] = (int)81;
        nArray5[6] = (int)117;
        nArray5[7] = (int)97;
        nArray5[8] = (int)dl.agT("k", (int)Short.MAX_VALUE, (long)(0x57380C9D68D35797L ^ l2));
        nArray5[9] = (int)105;
        nArray5[10] = (int)116;
        nArray5[11] = (int)121;
        this.yUron = new cC(this, mr.clS(nArray5)).Vy(1.0).Vw(1.0).Vx(4.0).VA(2.0);
        int[] nArray6 = new int[11];
        nArray6[0] = (int)71;
        nArray6[1] = (int)dl.agT("k", (int)Short.MAX_VALUE, (long)(0x57380C9D68D35797L ^ l2));
        nArray6[2] = (int)111;
        nArray6[3] = (int)119;
        nArray6[4] = (int)32;
        nArray6[5] = (int)82;
        nArray6[6] = (int)97;
        nArray6[7] = (int)100;
        nArray6[8] = (int)105;
        nArray6[9] = (int)117;
        nArray6[10] = (int)115;
        this.ZEreL = new cC(this, mr.clS(nArray6)).Vy(0.1).Vw(1.0).Vx(16.0).VA(4.3);
        int[] nArray7 = new int[21];
        nArray7[0] = (int)71;
        nArray7[1] = (int)dl.agT("k", (int)Short.MAX_VALUE, (long)(0x57380C9D68D35797L ^ l2));
        nArray7[2] = (int)111;
        nArray7[3] = (int)119;
        nArray7[4] = (int)32;
        nArray7[5] = (int)65;
        nArray7[6] = (int)dl.agT("k", (int)Short.MAX_VALUE, (long)(0x57380C9D68D35797L ^ l2));
        nArray7[7] = (int)112;
        nArray7[8] = (int)104;
        nArray7[9] = (int)97;
        nArray7[10] = (int)32;
        nArray7[11] = (int)77;
        nArray7[12] = (int)117;
        nArray7[13] = (int)dl.agT("k", (int)Short.MAX_VALUE, (long)(0x57380C9D68D35797L ^ l2));
        nArray7[14] = (int)116;
        nArray7[15] = (int)105;
        nArray7[16] = (int)112;
        nArray7[17] = (int)dl.agT("k", (int)Short.MAX_VALUE, (long)(0x57380C9D68D35797L ^ l2));
        nArray7[18] = (int)105;
        nArray7[19] = (int)101;
        nArray7[20] = (int)114;
        this.tNzOl = new cC(this, mr.clS(nArray7)).Vy(0.1).Vw(0.0).Vx(4.0).VA(1.0);
        int[] nArray8 = new int[21];
        nArray8[0] = (int)70;
        nArray8[1] = (int)105;
        nArray8[2] = (int)dl.agT("k", (int)Short.MAX_VALUE, (long)(0x57380C9D68D35797L ^ l2));
        nArray8[3] = (int)dl.agT("k", (int)Short.MAX_VALUE, (long)(0x57380C9D68D35797L ^ l2));
        nArray8[4] = (int)32;
        nArray8[5] = (int)65;
        nArray8[6] = (int)dl.agT("k", (int)Short.MAX_VALUE, (long)(0x57380C9D68D35797L ^ l2));
        nArray8[7] = (int)112;
        nArray8[8] = (int)104;
        nArray8[9] = (int)97;
        nArray8[10] = (int)32;
        nArray8[11] = (int)77;
        nArray8[12] = (int)117;
        nArray8[13] = (int)dl.agT("k", (int)Short.MAX_VALUE, (long)(0x57380C9D68D35797L ^ l2));
        nArray8[14] = (int)116;
        nArray8[15] = (int)105;
        nArray8[16] = (int)112;
        nArray8[17] = (int)dl.agT("k", (int)Short.MAX_VALUE, (long)(0x57380C9D68D35797L ^ l2));
        nArray8[18] = (int)105;
        nArray8[19] = (int)101;
        nArray8[20] = (int)114;
        this.EOBwn = new cC(this, mr.clS(nArray8)).Vy(0.01).Vw(0.0).Vx(1.0).VA(0.3);
        int[] nArray9 = new int[10];
        nArray9[0] = (int)83;
        nArray9[1] = (int)97;
        nArray9[2] = (int)116;
        nArray9[3] = (int)117;
        nArray9[4] = (int)114;
        nArray9[5] = (int)97;
        nArray9[6] = (int)116;
        nArray9[7] = (int)105;
        nArray9[8] = (int)111;
        nArray9[9] = (int)110;
        this.TYtlY = new cC(this, mr.clS(nArray9)).Vy(0.1).Vw(0.0).Vx(5.0).VA(0.7);
        int[] nArray10 = new int[10];
        nArray10[0] = (int)66;
        nArray10[1] = (int)114;
        nArray10[2] = (int)105;
        nArray10[3] = (int)103;
        nArray10[4] = (int)104;
        nArray10[5] = (int)116;
        nArray10[6] = (int)110;
        nArray10[7] = (int)101;
        nArray10[8] = (int)115;
        nArray10[9] = (int)115;
        this.DMmsT = new cC(this, mr.clS(nArray10)).Vy(0.1).Vw(0.0).Vx(50.0).VA(2.0);
        this.DMmsT.Vf(() -> this.kHCyC.SQ(1));
        this.TYtlY.Vf(() -> this.kHCyC.SQ(1));
        this.aMyMs.Vf(() -> {
            boolean bl2;
            block6: {
                block8: {
                    block7: {
                        long l2 = TjDPX ^ 0x3B84D9CFD644L;
                        iS[] iSArray = dh.afl();
                        try {
                            try {
                                try {
                                    bl2 = this.kHCyC.SQ(2);
                                    if (iSArray != null) break block6;
                                    if (bl2) break block7;
                                }
                                catch (MatchException matchException) {
                                    throw dl.agQ(matchException);
                                }
                                bl2 = this.kHCyC.SQ(3);
                                if (iSArray != null) break block6;
                            }
                            catch (MatchException matchException) {
                                throw dl.agQ(matchException);
                            }
                            if (!bl2) break block8;
                        }
                        catch (MatchException matchException) {
                            throw dl.agQ(matchException);
                        }
                    }
                    bl2 = true;
                    break block6;
                }
                bl2 = false;
            }
            return bl2;
        });
        this.UITAz.Vf(() -> {
            boolean bl2;
            block10: {
                block12: {
                    block11: {
                        long l2 = TjDPX ^ 0x5DB2EE7F5AC4L;
                        iS[] iSArray = dh.afl();
                        try {
                            try {
                                try {
                                    try {
                                        try {
                                            bl2 = this.kHCyC.SQ(1);
                                            if (iSArray != null) break block10;
                                            if (bl2) break block11;
                                        }
                                        catch (MatchException matchException) {
                                            throw dl.agQ(matchException);
                                        }
                                        bl2 = this.kHCyC.SQ(2);
                                        if (iSArray != null) break block10;
                                    }
                                    catch (MatchException matchException) {
                                        throw dl.agQ(matchException);
                                    }
                                    if (bl2) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw dl.agQ(matchException);
                                }
                                bl2 = this.kHCyC.SQ(3);
                                if (iSArray != null) break block10;
                            }
                            catch (MatchException matchException) {
                                throw dl.agQ(matchException);
                            }
                            if (!bl2) break block12;
                        }
                        catch (MatchException matchException) {
                            throw dl.agQ(matchException);
                        }
                    }
                    bl2 = true;
                    break block10;
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
                dl.TjDPX = gb.aYR(-7196779503475912123L, -5547199977112367906L, MethodHandles.lookup().lookupClass()).a(195987932491550L);
                dl.tdLit = new HashMap<K, V>(13);
                var0 = dl.TjDPX ^ 29230108050784L;
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
                var8_3 = new long[86];
                var5_4 = 0;
                var6_5 = "\u00a0\u0099\u0010Yci\u001f\u00f6+S\u00ed-\u00a0#\u00bd\u00af\u0012\u00f0Y\u0093L\u00f5\u00b8<\u00e0\u0000\u00f42\u00ed\b\u00df\u00aa\u0094q\u00fd`t\u00ce7\u00b99\u00adx]\t\u0011\u0013d\u00e6\u00a5Q5\u00eb\"\u00bdV\u00dbm\u00f9w\u00d1\u00e9z\u0018\u00e7'\u00fd\u00dc\u0004\u00a386\u00bag\u00a4\u00a2c\u00f2m\u00cd\u00be\u00c547R\u00c5\u00d4PD|DP\u0098\u00c02Z\u00c3\u00c1\u00b3\u00e6\u00fa\u0004\u00ba\u00ebv:\f\u00bdV\u0086\u0016bC\u00cb\u00dba\u0015M\u00ca\u009b/\u0094\u00a8L\u0086y\u00c8\u00f3\u00acz\u00ba\u00d3\u00df\u0099\u0080\u0095p;4\u0085\u00d29\u00aa\u00bf\u00f49`O\u00cd#\u00f61R&w\u00fbs\u0002,\u001b\u0013*\u001ff[\u00a5\u0098\u00cf\u001384\u009bss.]\u0003n\bC-K\u0090\u0006\u00b0\u001f\u00f2\u00840\u0015\u00bd#\u0014\u00e5\u008b\u00d1\u00d1=\u00ea$\u00e4_\u00ba\f\u00e9\u00faQ\u00df\u00be\u001cb\u00b3\u001c\u00f4H\u00ffaL\u001f\u009cYg\u0010\u00f1\u00d7{e>B[\r`\u0095\u0089\u00a2O5\u00e13\u0087\u00cf:\u0005\u00afT>\u00cc\u00a8\"\u00ed\u0089\u00b7\u00a0\u00e3\u00ff\u0085}3\u00f2\u001c\u001d\u00d4\u00d8z\u00f6wpwu\u00fd\u00ed\u008e\u0086\u001c\u0082\u00dd}u\u00de\u0091'\u00e2\u00b7\u00fa\u000eK\u00a4\u00b8\u0081y\u00a8`\u00a6\u008b\u00bc\u00e0\u0099l\u00e8\u007f\u00b8\u00a2\u00b6{\u0096\u009d\u0001\u00c7S\u00c1\u00aa\u00b2\u00eb\u001c\b0\u00ad\u0085s\u00ffX\u0091\u0099\u0083\u00d4\u00b4\u00efz\u00a4\u0096\u001fW\u00df\u0015\u009a%r\u00b9\u00b6\u0012\u001c\u0007=9\u0017\u00c6\u0088\u00de\u0007\u00e41\u00d3\u00dd\u00da\u0006X\u007fI\u00f3nS\u00df\u00c0\u008bo\u00b9}\u00ed\u00ff\u00f9c\u0098\u00bf5\u00a5\u00fdlx;Z\u0015\r\u00e3Hc\u0004X\u00dfv\u00c0\u00e2B\u00da\u0083\u00b1-\u00af\u0082\u00c4\u00a73~$%\u00f1\u0002\u000f\u0007U\u00e0\u0095\u0018\u00e2\u0084\u001f\n\b\u0091,n\u0091\u0082\u00d6\u0010_\u00d2\u0016z\u00a75\u00ff\u00c6g\u00c9\u0095v>Q#RoZr%o \u00f4/\u00c7\u00f2\u0099y\u00b7\u00ba\u0006|\u0099\u007f\u00f8PA\u0004\u00ea\u00ffcSr\u007f\u00a5\u00df\u008a\u00e8\u00c7M\u00e1}\no\u0081iKj\u00d6\u009e\u0015^~yF\u0091A\u00ad`\u00eb\u00b8\u00d1\u00e9\u001a\u00c1\u0016\u00d8\u0080[\u009b\u008d[R@\u009e\u0018_\u00bef^,\u001d\u00ae\u0017\u00d8\u00a8\b\u00db7\u007f2\u000f\u00d2([Nek\"\u00be\u00f6\u0080C\u00f4\u001c6\u0098a\u00f3\u00f5\u0011:\u0000W\u008d\u00f9\u0080\u00beN2\u00bc\u00a0\u00f5\u00e58\u008a\u00e1\u0089\u00d5n\u00ee\u00d3Z\u00cd;]\u00bb\u00bd\u00d7[\u00cc\u00a0\u0081\u00eb\u0013\u0000\u001c\u00f2mv\u00acc\u0093\u008f.\u00ccP\u00ff\u00bbQ\u0002R\u00d18\u00a6\u0010/\u00ad\u001c\\\u00ebY\r\u009e\u0005:y\u0012\u0013\u00bc\u00ba\u00a7\u00b0^]\u0086\u00d4\u00ea\u0097\u00b4\u0018\u00c8\u00bb\u00e3\u00a4S\u00ee\u00fco\u0004\u008d\u0090\u00eb/\u00f1\u0012\u000bO\u00d9y\u00e6o+\u0013\u0095\u0084(\u00e6V\u0087+RsJ[\u00b61\u001a\u00cc\u00f2U\u0095g\u0090C4\u0084\u00d7";
                var7_6 = "\u00a0\u0099\u0010Yci\u001f\u00f6+S\u00ed-\u00a0#\u00bd\u00af\u0012\u00f0Y\u0093L\u00f5\u00b8<\u00e0\u0000\u00f42\u00ed\b\u00df\u00aa\u0094q\u00fd`t\u00ce7\u00b99\u00adx]\t\u0011\u0013d\u00e6\u00a5Q5\u00eb\"\u00bdV\u00dbm\u00f9w\u00d1\u00e9z\u0018\u00e7'\u00fd\u00dc\u0004\u00a386\u00bag\u00a4\u00a2c\u00f2m\u00cd\u00be\u00c547R\u00c5\u00d4PD|DP\u0098\u00c02Z\u00c3\u00c1\u00b3\u00e6\u00fa\u0004\u00ba\u00ebv:\f\u00bdV\u0086\u0016bC\u00cb\u00dba\u0015M\u00ca\u009b/\u0094\u00a8L\u0086y\u00c8\u00f3\u00acz\u00ba\u00d3\u00df\u0099\u0080\u0095p;4\u0085\u00d29\u00aa\u00bf\u00f49`O\u00cd#\u00f61R&w\u00fbs\u0002,\u001b\u0013*\u001ff[\u00a5\u0098\u00cf\u001384\u009bss.]\u0003n\bC-K\u0090\u0006\u00b0\u001f\u00f2\u00840\u0015\u00bd#\u0014\u00e5\u008b\u00d1\u00d1=\u00ea$\u00e4_\u00ba\f\u00e9\u00faQ\u00df\u00be\u001cb\u00b3\u001c\u00f4H\u00ffaL\u001f\u009cYg\u0010\u00f1\u00d7{e>B[\r`\u0095\u0089\u00a2O5\u00e13\u0087\u00cf:\u0005\u00afT>\u00cc\u00a8\"\u00ed\u0089\u00b7\u00a0\u00e3\u00ff\u0085}3\u00f2\u001c\u001d\u00d4\u00d8z\u00f6wpwu\u00fd\u00ed\u008e\u0086\u001c\u0082\u00dd}u\u00de\u0091'\u00e2\u00b7\u00fa\u000eK\u00a4\u00b8\u0081y\u00a8`\u00a6\u008b\u00bc\u00e0\u0099l\u00e8\u007f\u00b8\u00a2\u00b6{\u0096\u009d\u0001\u00c7S\u00c1\u00aa\u00b2\u00eb\u001c\b0\u00ad\u0085s\u00ffX\u0091\u0099\u0083\u00d4\u00b4\u00efz\u00a4\u0096\u001fW\u00df\u0015\u009a%r\u00b9\u00b6\u0012\u001c\u0007=9\u0017\u00c6\u0088\u00de\u0007\u00e41\u00d3\u00dd\u00da\u0006X\u007fI\u00f3nS\u00df\u00c0\u008bo\u00b9}\u00ed\u00ff\u00f9c\u0098\u00bf5\u00a5\u00fdlx;Z\u0015\r\u00e3Hc\u0004X\u00dfv\u00c0\u00e2B\u00da\u0083\u00b1-\u00af\u0082\u00c4\u00a73~$%\u00f1\u0002\u000f\u0007U\u00e0\u0095\u0018\u00e2\u0084\u001f\n\b\u0091,n\u0091\u0082\u00d6\u0010_\u00d2\u0016z\u00a75\u00ff\u00c6g\u00c9\u0095v>Q#RoZr%o \u00f4/\u00c7\u00f2\u0099y\u00b7\u00ba\u0006|\u0099\u007f\u00f8PA\u0004\u00ea\u00ffcSr\u007f\u00a5\u00df\u008a\u00e8\u00c7M\u00e1}\no\u0081iKj\u00d6\u009e\u0015^~yF\u0091A\u00ad`\u00eb\u00b8\u00d1\u00e9\u001a\u00c1\u0016\u00d8\u0080[\u009b\u008d[R@\u009e\u0018_\u00bef^,\u001d\u00ae\u0017\u00d8\u00a8\b\u00db7\u007f2\u000f\u00d2([Nek\"\u00be\u00f6\u0080C\u00f4\u001c6\u0098a\u00f3\u00f5\u0011:\u0000W\u008d\u00f9\u0080\u00beN2\u00bc\u00a0\u00f5\u00e58\u008a\u00e1\u0089\u00d5n\u00ee\u00d3Z\u00cd;]\u00bb\u00bd\u00d7[\u00cc\u00a0\u0081\u00eb\u0013\u0000\u001c\u00f2mv\u00acc\u0093\u008f.\u00ccP\u00ff\u00bbQ\u0002R\u00d18\u00a6\u0010/\u00ad\u001c\\\u00ebY\r\u009e\u0005:y\u0012\u0013\u00bc\u00ba\u00a7\u00b0^]\u0086\u00d4\u00ea\u0097\u00b4\u0018\u00c8\u00bb\u00e3\u00a4S\u00ee\u00fco\u0004\u008d\u0090\u00eb/\u00f1\u0012\u000bO\u00d9y\u00e6o+\u0013\u0095\u0084(\u00e6V\u0087+RsJ[\u00b61\u001a\u00cc\u00f2U\u0095g\u0090C4\u0084\u00d7".length();
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
                    var6_5 = "\u00d7pK\u00a65-3v\u00f4_\u00b7\u00c9C\u00aa\u00df\u00bb";
                    var7_6 = "\u00d7pK\u00a65-3v\u00f4_\u00b7\u00c9C\u00aa\u00df\u00bb".length();
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
        dl.hxrHD = var8_3;
        dl.KtDAm = new Integer[86];
    }

    private static CallSite agT(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dl" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException agQ(MatchException matchException) {
        return matchException;
    }

    private static int agS(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = dl.agR(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    @hG
    public void agJ(go.sX sX2) {
        ArrayList<Entity> arrayList;
        float f2;
        MatrixStack matrixStack;
        block19: {
            boolean bl2;
            ArrayList<Entity> arrayList2;
            block16: {
                long l2 = TjDPX ^ 0x7ADC87E074D3L;
                iS[] iSArray = dh.afl();
                try {
                    if (!this.bab()) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw dl.agQ(matchException);
                }
                matrixStack = sX2.bbh();
                f2 = sX2.bbi();
                arrayList2 = new ArrayList<Entity>();
                for (Entity entity : rD.dlmvG.world.getEntities()) {
                    block17: {
                        boolean bl3;
                        block18: {
                            Entity entity2;
                            block15: {
                                try {
                                    try {
                                        entity2 = entity;
                                        if (iSArray != null) break block15;
                                        bl2 = jJ.bIB(entity2);
                                        if (iSArray != null) break block16;
                                    }
                                    catch (MatchException matchException) {
                                        throw dl.agQ(matchException);
                                    }
                                    if (!bl2) continue;
                                }
                                catch (MatchException matchException) {
                                    throw dl.agQ(matchException);
                                }
                                entity2 = entity;
                            }
                            if (entity2 == rD.dlmvG.player) continue;
                            try {
                                try {
                                    bl3 = this.Myqqn.VX(entity);
                                    if (iSArray != null) break block17;
                                    if (bl3) break block18;
                                }
                                catch (MatchException matchException) {
                                    throw dl.agQ(matchException);
                                }
                                if (iSArray == null) continue;
                            }
                            catch (MatchException matchException) {
                                throw dl.agQ(matchException);
                            }
                        }
                        bl3 = arrayList2.add(entity);
                    }
                    if (iSArray == null) continue;
                }
                try {
                    arrayList = arrayList2;
                    if (iSArray != null) break block19;
                    bl2 = arrayList.isEmpty();
                }
                catch (MatchException matchException) {
                    throw dl.agQ(matchException);
                }
            }
            if (bl2) {
                return;
            }
            arrayList = arrayList2;
        }
        Runnable runnable = () -> {
            block7: {
                long l2 = TjDPX ^ 0x6579E8B5267EL;
                kn.YNOIY = true;
                iS[] iSArray = dh.afl();
                try {
                    lH lH2 = new lH();
                    for (Entity entity : arrayList) {
                        try {
                            lH2.cgm(kn.bQt(entity, f2, matrixStack));
                            if (iSArray == null) {
                                if (iSArray == null) continue;
                                break;
                            }
                            break block7;
                        }
                        catch (MatchException matchException) {
                            throw dl.agQ(matchException);
                        }
                    }
                    lH2.cgp();
                }
                finally {
                    kn.YNOIY = false;
                }
            }
        };
        ki.bPi(runnable, this.bfmBp.Wf(), this.aMyMs.Wf(), this.kHCyC.ST(), this.yUron.VC(), this.ZEreL.VB(), this.UITAz.VB(), this.tNzOl.VB(), this.EOBwn.VB(), this.TYtlY.VB(), this.DMmsT.VB());
    }

    @hG
    public void agK(gi gi2) {
        long l2 = TjDPX ^ 0x13B48363AB7L;
        try {
            if (kn.YNOIY) {
                gi2.bdX(true);
            }
        }
        catch (MatchException matchException) {
            throw dl.agQ(matchException);
        }
    }

    private static int agR(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x502;
        if (KtDAm[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = hxrHD[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])tdLit.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    tdLit.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dl", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dl.KtDAm[n3] = n4;
        }
        return KtDAm[n3];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dl.class, "agS", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

