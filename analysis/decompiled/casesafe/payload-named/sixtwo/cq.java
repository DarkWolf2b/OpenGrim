/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.gui.screen.ChatScreen
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.function.Predicate;
import native.Loader;
import net.minecraft.client.gui.screen.ChatScreen;
import sixtwo.aj;
import sixtwo.ap;
import sixtwo.bU;
import sixtwo.bX;
import sixtwo.bY;
import sixtwo.cb;
import sixtwo.ci;
import sixtwo.cm;
import sixtwo.cr;
import sixtwo.gk;
import sixtwo.hA;
import sixtwo.hC;
import sixtwo.hD;
import sixtwo.hE;
import sixtwo.hF;
import sixtwo.hG;
import sixtwo.hx;
import sixtwo.hy;
import sixtwo.hz;
import sixtwo.jH;
import sixtwo.lA;
import sixtwo.ld;
import sixtwo.mG;
import sixtwo.mw;
import sixtwo.rD;

public class cq
implements lA {
    private final List<cr> vzihI = new ArrayList<cr>();
    private final List<ap> QcobS = new ArrayList<ap>();
    private final List<aj> awKdp = new ArrayList<aj>();
    private final cm uSTRJ = new cm();
    private bU WYTsE;
    private bY EWerh;
    private bX FUAur;
    private static long eLNhX;
    private static String[] uVCNi;
    private static String[] ERnPb;
    private static Map orwtF;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cq() {
        hF.bdI(this);
    }

    static {
        Loader.doInit(cq.class);
        cq._c98c0cbfc2ed8848e8b9749fe985ab6c();
    }

    public native cm RB();

    public native void Rs(ap var1);

    private static native /* synthetic */ boolean RG(cr var0);

    private static native /* synthetic */ boolean RF(cr var0);

    public native void Rx();

    public List<cr> Rv() {
        return this.vzihI.stream().filter(cq::RG).toList();
    }

    public native List<aj> RA();

    private static native String RJ(byte[] var0);

    private static native String RK(int var0, long var1);

    private static native CallSite RM(MethodHandles.Lookup var0, String var1, MethodType var2);

    /*
     * Unable to fully structure code
     */
    @hG(priority=mw.LOWEST)
    public void Rk(gk var1_1) {
        block63: {
            block62: {
                block60: {
                    var2_2 = cq.eLNhX ^ 128337433618904L;
                    var5_3 = var1_1.baT();
                    this.uSTRJ.QN(var5_3);
                    v0 = cr.SC();
                    this.uSTRJ.QO();
                    var6_4 = var5_3.cfe();
                    var4_5 = v0;
                    var7_6 = this.vzihI.iterator();
                    while (var7_6.hasNext()) {
                        block58: {
                            block59: {
                                block56: {
                                    block57: {
                                        block54: {
                                            block55: {
                                                block64: {
                                                    block53: {
                                                        block52: {
                                                            block51: {
                                                                block49: {
                                                                    block50: {
                                                                        var8_7 = var7_6.next();
                                                                        try {
                                                                            try {
                                                                                try {
                                                                                    var8_7.Ph(var5_3);
                                                                                    v1 = var8_7 instanceof ci;
                                                                                    if (var4_5 != null) {
                                                                                        if (var4_5 == null) break block49;
                                                                                    }
                                                                                    ** GOTO lbl124
                                                                                }
                                                                                catch (MatchException v2) {
                                                                                    throw cq.RI(v2);
                                                                                }
                                                                                if (!v1) break block50;
                                                                            }
                                                                            catch (MatchException v3) {
                                                                                throw cq.RI(v3);
                                                                            }
                                                                            if (var4_5 != null) continue;
                                                                        }
                                                                        catch (MatchException v4) {
                                                                            throw cq.RI(v4);
                                                                        }
                                                                    }
                                                                    try {
                                                                        v5 = var8_7.OsbYH.dhj();
                                                                        if (var4_5 == null) break block51;
                                                                        cfr_temp_0 = v5 - 0.0f;
                                                                        v6 = cfr_temp_0 == 0.0f ? 0 : (cfr_temp_0 > 0.0f ? 1 : -1);
                                                                    }
                                                                    catch (MatchException v7) {
                                                                        throw cq.RI(v7);
                                                                    }
                                                                }
                                                                try {
                                                                    if (v6 == false && var4_5 != null) continue;
                                                                }
                                                                catch (MatchException v8) {
                                                                    throw cq.RI(v8);
                                                                }
                                                                v5 = var8_7.OsbYH.dhj();
                                                            }
                                                            var9_8 = v5;
                                                            var10_9 = var8_7.ormBS.dhj() * var8_7.KgDVz.dhj();
                                                            try {
                                                                try {
                                                                    v9 = var8_7;
                                                                    if (var4_5 == null) break block52;
                                                                    if (!(v9 instanceof cb)) break block53;
                                                                }
                                                                catch (MatchException v10) {
                                                                    throw cq.RI(v10);
                                                                }
                                                                v9 = var8_7;
                                                            }
                                                            catch (MatchException v11) {
                                                                throw cq.RI(v11);
                                                            }
                                                        }
                                                        var12_12 = (cb)v9;
                                                        var11_10 = var12_12.Pi();
                                                        if (var4_5 != null) break block64;
                                                    }
                                                    var11_10 = 0.5f + var10_9 * 0.5f - 0.05f * var9_8;
                                                }
                                                try {
                                                    try {
                                                        var8_7.AyAnj.dhd(1.0f);
                                                        v12 = var8_7.AyAnj.dhj();
                                                        if (var4_5 == null) break block54;
                                                        if (v12 != 1.0f) break block55;
                                                    }
                                                    catch (MatchException v13) {
                                                        throw cq.RI(v13);
                                                    }
                                                    var8_7.AyAnj.dhg();
                                                }
                                                catch (MatchException v14) {
                                                    throw cq.RI(v14);
                                                }
                                            }
                                            v12 = var8_7.RT();
                                        }
                                        var12_11 = v12;
                                        try {
                                            try {
                                                jH.bIe(var6_4.getMatrices(), var8_7.toIeR + var8_7.RU() / 2.0f, var8_7.QWaAn + var8_7.RV() / 2.0f, var11_10);
                                                v15 = var12_11;
                                                v16 = 1.0f;
                                                if (var4_5 == null) break block56;
                                                if (v15 == v16) break block57;
                                            }
                                            catch (MatchException v17) {
                                                throw cq.RI(v17);
                                            }
                                            jH.bIe(var6_4.getMatrices(), var8_7.toIeR, var8_7.QWaAn, var12_11);
                                        }
                                        catch (MatchException v18) {
                                            throw cq.RI(v18);
                                        }
                                    }
                                    v15 = var8_7.AyAnj.dhj() * 2.2f;
                                    v16 = 0.5f;
                                }
                                var13_13 = v15 - v16;
                                try {
                                    try {
                                        var5_3.ceh(var8_7.toIeR, var8_7.QWaAn, var8_7.jTsqG, var8_7.Xtjvx, mG.hoGuU.coa(100.0f * var9_8), var13_13, 7.0f, ld.all(7.0f));
                                        if (var4_5 == null) break block58;
                                        if (var12_11 == 1.0f) break block59;
                                    }
                                    catch (MatchException v19) {
                                        throw cq.RI(v19);
                                    }
                                    jH.bIf();
                                }
                                catch (MatchException v20) {
                                    throw cq.RI(v20);
                                }
                            }
                            jH.bIf();
                        }
                        if (var4_5 != null) continue;
                    }
                    var7_6 = this.QcobS.iterator();
                    do lbl-1000:
                    // 3 sources

                    {
                        block61: {
                            v1 = var7_6.hasNext();
lbl124:
                            // 2 sources

                            if (!v1) break;
                            var8_7 = (ap)var7_6.next();
                            try {
                                try {
                                    try {
                                        if (var4_5 == null) continue;
                                        v21 = rD.dlmvG.currentScreen instanceof ChatScreen;
                                        if (var4_5 == null) break block60;
                                    }
                                    catch (MatchException v22) {
                                        throw cq.RI(v22);
                                    }
                                    if (!v21) break block61;
                                }
                                catch (MatchException v23) {
                                    throw cq.RI(v23);
                                }
                                if (var4_5 != null) ** GOTO lbl-1000
                            }
                            catch (MatchException v24) {
                                throw cq.RI(v24);
                            }
                        }
                        var8_7.oj(false);
                    } while (var4_5 != null);
                    this.QcobS.removeIf((Predicate<ap>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)Z, oi(), (Lsixtwo/ap;)Z)());
                    v21 = this.awKdp.removeIf((Predicate<aj>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)Z, oi(), (Lsixtwo/aj;)Z)());
                }
                var5_3.ceV();
                var7_6 = this.QcobS.iterator();
                while (var7_6.hasNext()) {
                    var8_7 = (ap)var7_6.next();
                    try {
                        var8_7.su(var5_3);
                        if (var4_5 != null) {
                            if (var4_5 != null) continue;
                            break;
                        }
                        break block62;
                    }
                    catch (MatchException v25) {
                        throw cq.RI(v25);
                    }
                }
                var7_6 = this.awKdp.iterator();
            }
            while (var7_6.hasNext()) {
                var8_7 = (aj)var7_6.next();
                try {
                    var8_7.su(var5_3);
                    if (var4_5 != null) {
                        if (var4_5 != null) continue;
                        break;
                    }
                    break block63;
                }
                catch (MatchException v26) {
                    throw cq.RI(v26);
                }
            }
            var5_3.ceW();
        }
    }

    public native void Ru(float var1, float var2);

    public native List<cr> Ry();

    public native bU RC();

    private static native MatchException RI(MatchException var0);

    private static native /* synthetic */ void RH(cr var0, aj var1);

    @hG
    public native void Rn(hy var1);

    public native void Rt(aj var1);

    public native List<ap> Rz();

    public native void Rj();

    @hG
    public native void Ro(hC var1);

    public List<cr> Rw() {
        return this.vzihI.stream().filter(cq::RF).toList();
    }

    private static native Object RL(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    @hG
    public native void Rm(hz var1);

    @hG
    public native void Rp(hE var1);

    @hG
    public native void Rq(hx var1);

    @hG
    public native void Rl(hA var1);

    @hG
    public native void Rr(hD var1);

    public native bX RE();

    public native bY RD();

    private static native void _c98c0cbfc2ed8848e8b9749fe985ab6c();
}

