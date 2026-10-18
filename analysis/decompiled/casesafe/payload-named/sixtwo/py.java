/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.item.ItemStack
 *  net.minecraft.util.math.Vec2f
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.entity.Entity;
import net.minecraft.item.ItemStack;
import net.minecraft.util.math.Vec2f;
import sixtwo.az;
import sixtwo.cC;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jF;
import sixtwo.jG;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.mr;
import sixtwo.pC;
import sixtwo.pE;
import sixtwo.pK;
import sixtwo.pM;
import sixtwo.pj;
import sixtwo.pz;
import sixtwo.rj;
import sixtwo.rk;

public abstract class py
extends az {
    protected final rk RnEgc;
    protected final rk oOKGX;
    protected final rk kosRk;
    protected final rk vqYvK;
    protected final cC hmPAD;
    private final String hNALo;
    private final String RJEfO;
    private final lc euKNr;
    private pM lKAKH;
    private pK qbstY;
    private int jPzky;
    private boolean uajJe;
    private boolean Rrudb;
    private boolean GWcRy;
    private boolean Iqptt;
    private boolean pHrkM;
    private float ybpom;
    private float KAWQC;
    private float IIJgd;
    private float lbLFN;
    private float OLEnw;
    private float HPRNB;
    private float sJTEF;
    private float OAdOq;
    private float UOoKH;
    private float SzsRB;
    private float XykmV;
    private float ZOsRY;
    private static int hDHpj;
    private static final long dfcBl;
    private static final long[] DsBXn;
    private static final Integer[] NFScw;
    private static final Map MYDKC;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public py(String string, String string2, double d2) {
        long l2 = dfcBl ^ 0x2E22971F3C88L;
        int n2 = py.cRA();
        this.RnEgc = new rk((int)py.cRF("j", (int)31305, (long)(0x4FDF64E71082E16CL ^ l2))).dhs(rj.UPXqT);
        this.oOKGX = new rk((int)py.cRF("j", (int)15532, (long)(0x5F12AA33D4FCA78DL ^ l2))).dhs(rj.NJlxm);
        this.kosRk = new rk((int)py.cRF("j", (int)25617, (long)(0x52A84BFEF8037F31L ^ l2))).dhs(rj.NJlxm);
        this.vqYvK = new rk((int)py.cRF("j", (int)73, (long)(0x4F82EA51C5B9B64L ^ l2))).dhs(rj.NJlxm);
        int n3 = n2;
        try {
            this.hmPAD = new cC(this, mr.clS(new int[]{(int)py.cRF("j", (int)1823, (long)(0x569452A37AB31C38L ^ l2)), (int)py.cRF("j", (int)32211, (long)(0x79E26E5A8D0966F1L ^ l2)), (int)py.cRF("j", (int)2090, (long)(0x41D894E4C2DC9309L ^ l2)), (int)py.cRF("j", (int)13955, (long)(0x4077EF73AE092DA7L ^ l2)), (int)py.cRF("j", (int)27264, (long)(0x7BE4B0FBEE8371A6L ^ l2))})).Vw(0.5).Vx(2.0).Vy(0.01).VA(1.0);
            this.euKNr = new lc(0.0f, 0.0f, 0.0f, 0.0f);
            this.lKAKH = pM.oFEYk;
            this.qbstY = pK.AkTYU;
            this.uajJe = true;
            this.hNALo = string;
            this.RJEfO = string2;
            this.hmPAD.Vx(d2);
            if (n3 == 0) {
                iS.bwK("egohW");
            }
        }
        catch (MatchException matchException) {
            throw py.cRC(matchException);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                py.dfcBl = gb.aYR(-4975932006003757102L, -2536993283428394912L, MethodHandles.lookup().lookupClass()).a(224652685794718L);
                py.MYDKC = new HashMap<K, V>(13);
                var0 = py.dfcBl ^ 2084097077399L;
                py.cRz(64);
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
                var8_3 = new long[9];
                var5_4 = 0;
                var6_5 = "c\u007fN~N\u00de.\u00be\u00b4\u00cau\u00ef\u00a5\u00ce\u0091\u00ddq\u00ae\u00eb\u0092$\u00d0\u00e6u\u0089\u00bc\u001a\u001e\u00d6\u00b34yP\u00e8\u00a2+\u00c6\u00c9\u00e6\u0010\u00a5A\u0081\u00e58;\u00eb\u00c3T\u00a2\u0004\u0089\u0006\u00c43\u007f";
                var7_6 = "c\u007fN~N\u00de.\u00be\u00b4\u00cau\u00ef\u00a5\u00ce\u0091\u00ddq\u00ae\u00eb\u0092$\u00d0\u00e6u\u0089\u00bc\u001a\u001e\u00d6\u00b34yP\u00e8\u00a2+\u00c6\u00c9\u00e6\u0010\u00a5A\u0081\u00e58;\u00eb\u00c3T\u00a2\u0004\u0089\u0006\u00c43\u007f".length();
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
                    var6_5 = "\u0082\u0080T\u00d5e\u00fd\u00ce\u0002\u0017\u00ab8\u009e|\u0092\u00daN";
                    var7_6 = "\u0082\u0080T\u00d5e\u00fd\u00ce\u0002\u0017\u00ab8\u009e|\u0092\u00daN".length();
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
        py.DsBXn = var8_3;
        py.NFScw = new Integer[9];
    }

    public py position(pM pM2) {
        this.lKAKH = pM2;
        return this;
    }

    public pM position() {
        return this.lKAKH;
    }

    @Override
    public boolean tg(double d2, double d3) {
        boolean bl2;
        block13: {
            block11: {
                int n2;
                block12: {
                    block10: {
                        long l2 = dfcBl ^ 0x301E42D6C5C3L;
                        n2 = py.cRB();
                        try {
                            try {
                                bl2 = this.uajJe;
                                if (n2 != 0) break block10;
                                if (!bl2) break block11;
                            }
                            catch (MatchException matchException) {
                                throw py.cRC(matchException);
                            }
                            bl2 = this.Rrudb;
                        }
                        catch (MatchException matchException) {
                            throw py.cRC(matchException);
                        }
                    }
                    try {
                        try {
                            if (n2 != 0) break block12;
                            if (bl2) break block11;
                        }
                        catch (MatchException matchException) {
                            throw py.cRC(matchException);
                        }
                        bl2 = this.euKNr.bXD(d2, d3);
                    }
                    catch (MatchException matchException) {
                        throw py.cRC(matchException);
                    }
                }
                try {
                    if (n2 != 0) break block13;
                    if (!bl2) break block11;
                }
                catch (MatchException matchException) {
                    throw py.cRC(matchException);
                }
                bl2 = true;
                break block13;
            }
            bl2 = false;
        }
        return bl2;
    }

    public py order(int n2) {
        this.jPzky = n2;
        return this;
    }

    public int order() {
        return this.jPzky;
    }

    @Override
    public boolean ti(lC lC2) {
        boolean bl2;
        block18: {
            block15: {
                int n2;
                block17: {
                    block16: {
                        block14: {
                            long l2 = dfcBl ^ 0xF61D658CCE0L;
                            n2 = py.cRB();
                            try {
                                try {
                                    bl2 = this.uajJe;
                                    if (n2 != 0) break block14;
                                    if (!bl2) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw py.cRC(matchException);
                                }
                                bl2 = this.Rrudb;
                            }
                            catch (MatchException matchException) {
                                throw py.cRC(matchException);
                            }
                        }
                        try {
                            try {
                                if (n2 != 0) break block16;
                                if (bl2) break block15;
                            }
                            catch (MatchException matchException) {
                                throw py.cRC(matchException);
                            }
                            bl2 = jG.bHZ(lC2);
                        }
                        catch (MatchException matchException) {
                            throw py.cRC(matchException);
                        }
                    }
                    try {
                        try {
                            if (n2 != 0) break block17;
                            if (!bl2) break block15;
                        }
                        catch (MatchException matchException) {
                            throw py.cRC(matchException);
                        }
                        bl2 = this.euKNr.bXE(lC2);
                    }
                    catch (MatchException matchException) {
                        throw py.cRC(matchException);
                    }
                }
                try {
                    if (n2 != 0) break block18;
                    if (!bl2) break block15;
                }
                catch (MatchException matchException) {
                    throw py.cRC(matchException);
                }
                bl2 = true;
                break block18;
            }
            bl2 = false;
        }
        return bl2;
    }

    public boolean active() {
        return this.uajJe;
    }

    @Override
    protected void bV(lC lC2) {
    }

    public float cQZ() {
        return this.IIJgd;
    }

    public py cRr(float f2) {
        this.OLEnw = f2;
        return this;
    }

    public py cRl(boolean bl2) {
        this.Iqptt = bl2;
        return this;
    }

    public float cRb() {
        return this.OLEnw;
    }

    public py cRt(float f2) {
        this.sJTEF = f2;
        return this;
    }

    public rk cQN() {
        return this.RnEgc;
    }

    public void cQA() {
        this.Rrudb = false;
        this.Iqptt = this.uajJe;
        this.pHrkM = false;
    }

    protected float cQI(float f2, float f3) {
        return f2 * f3;
    }

    public boolean cQU() {
        return this.GWcRy;
    }

    public py cRu(float f2) {
        this.OAdOq = f2;
        return this;
    }

    public py cRw(float f2) {
        this.SzsRB = f2;
        return this;
    }

    public py cRo(float f2) {
        this.KAWQC = f2;
        return this;
    }

    public py cRx(float f2) {
        this.XykmV = f2;
        return this;
    }

    public py cRy(float f2) {
        this.ZOsRY = f2;
        return this;
    }

    private static int cRD(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x57CA;
        if (NFScw[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = DsBXn[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])MYDKC.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    MYDKC.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/py", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            py.NFScw[n3] = n4;
        }
        return NFScw[n3];
    }

    public void cQy(double d2, double d3) {
        this.Rrudb = true;
        this.Iqptt = false;
        this.ybpom = (float)d2;
        this.KAWQC = (float)d3;
        this.IIJgd = 0.5f;
        this.lbLFN = 0.5f;
        this.OLEnw = this.euKNr.bXF();
        this.HPRNB = this.euKNr.bXG();
        this.pHrkM = false;
    }

    public void cQx(double d2, double d3) {
        py py2;
        block4: {
            block5: {
                long l2 = dfcBl ^ 0x2419035D7EC0L;
                int n2 = py.cRA();
                try {
                    try {
                        py2 = this;
                        if (n2 == 0) break block4;
                        if (py2.tg(d2, d3)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw py.cRC(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw py.cRC(matchException);
                }
            }
            this.Rrudb = true;
            this.Iqptt = false;
            py2 = this;
        }
        float f2 = Math.max(py2.euKNr.bXH(), 1.0f);
        float f3 = Math.max(this.euKNr.bXI(), 1.0f);
        this.ybpom = (float)d2;
        this.KAWQC = (float)d3;
        this.IIJgd = Math.clamp((float)((d2 - (double)this.euKNr.bXF()) / (double)f2), 0.0f, 1.0f);
        this.lbLFN = Math.clamp((float)((d3 - (double)this.euKNr.bXG()) / (double)f3), 0.0f, 1.0f);
        this.OLEnw = this.euKNr.bXF();
        this.HPRNB = this.euKNr.bXG();
        this.pHrkM = false;
    }

    private static int cRE(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = py.cRD(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public py cRj(boolean bl2) {
        this.Rrudb = bl2;
        return this;
    }

    public py cRn(float f2) {
        this.ybpom = f2;
        return this;
    }

    protected float cQJ(lc lc2, boolean bl2) {
        lc lc3;
        block7: {
            block8: {
                long l2 = dfcBl ^ 0x4C329560EFE3L;
                int n2 = py.cRA();
                try {
                    block6: {
                        try {
                            try {
                                if (bl2) break block6;
                                lc3 = lc2;
                                if (n2 == 0) break block7;
                            }
                            catch (MatchException matchException) {
                                throw py.cRC(matchException);
                            }
                            if (lc3 != null) break block8;
                        }
                        catch (MatchException matchException) {
                            throw py.cRC(matchException);
                        }
                    }
                    return this.cQE();
                }
                catch (MatchException matchException) {
                    throw py.cRC(matchException);
                }
            }
            lc3 = lc2;
        }
        float f2 = Math.clamp(lc3.bXI() / 80.0f, 0.4f, 1.0f);
        return this.cQE() * f2;
    }

    public float cRe() {
        return this.OAdOq;
    }

    public py cRv(float f2) {
        this.UOoKH = f2;
        return this;
    }

    public void cQB() {
        this.Rrudb = false;
        this.GWcRy = false;
        this.Iqptt = false;
        this.pHrkM = false;
    }

    public float cQX() {
        return this.ybpom;
    }

    public void cQG(double d2) {
        block4: {
            block5: {
                long l2 = dfcBl ^ 0x7EFB22EFBAA1L;
                int n2 = py.cRB();
                try {
                    try {
                        if (n2 != 0) break block4;
                        if (d2 != 0.0) break block5;
                    }
                    catch (MatchException matchException) {
                        throw py.cRC(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw py.cRC(matchException);
                }
            }
            this.cQD((float)((double)this.cQE() + d2 * this.hmPAD.VH()));
        }
    }

    public py cQD(float f2) {
        this.hmPAD.VA(f2);
        return this;
    }

    public rk cQO() {
        return this.oOKGX;
    }

    public float cQY() {
        return this.KAWQC;
    }

    public float cRc() {
        return this.HPRNB;
    }

    public float cRg() {
        return this.SzsRB;
    }

    public float cRi() {
        return this.ZOsRY;
    }

    protected void cQK(lC lC2, ItemStack itemStack, float f2, float f3, float f4, float f5) {
        float f6;
        block13: {
            block14: {
                block11: {
                    int n2;
                    block12: {
                        ItemStack itemStack2;
                        int n3;
                        block10: {
                            long l2 = dfcBl ^ 0x71C019715F9BL;
                            n3 = py.cRB();
                            try {
                                itemStack2 = itemStack;
                                if (n3 != 0) break block10;
                                if (itemStack2 == null) break block11;
                            }
                            catch (MatchException matchException) {
                                throw py.cRC(matchException);
                            }
                            itemStack2 = itemStack;
                        }
                        try {
                            try {
                                try {
                                    n2 = itemStack2.isEmpty();
                                    if (n3 != 0) break block12;
                                    if (n2 != 0) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw py.cRC(matchException);
                                }
                                f6 = f5;
                                if (n3 != 0) break block13;
                            }
                            catch (MatchException matchException) {
                                throw py.cRC(matchException);
                            }
                            float f7 = f6 - 0.0f;
                            n2 = f7 == 0.0f ? 0 : (f7 < 0.0f ? -1 : 1);
                        }
                        catch (MatchException matchException) {
                            throw py.cRC(matchException);
                        }
                    }
                    if (n2 > 0) break block14;
                }
                return;
            }
            f6 = jF.bHy();
        }
        float f8 = f6;
        float f9 = Math.min(1.0f, f5);
        jF.bHz(1.0f, 1.0f, 1.0f, f9);
        lC2.cea(itemStack, f2, f3, f4).bGv();
        jF.bHz(1.0f, 1.0f, 1.0f, f8);
    }

    public boolean cQT() {
        return this.Rrudb;
    }

    public boolean cQV() {
        return this.Iqptt;
    }

    public py cRk(boolean bl2) {
        this.GWcRy = bl2;
        return this;
    }

    public py cRp(float f2) {
        this.IIJgd = f2;
        return this;
    }

    public cC cQF() {
        return this.hmPAD;
    }

    public py cRq(float f2) {
        this.lbLFN = f2;
        return this;
    }

    public rk cQP() {
        return this.kosRk;
    }

    public String cQR() {
        return this.hNALo;
    }

    public boolean cQW() {
        return this.pHrkM;
    }

    public float cRa() {
        return this.lbLFN;
    }

    public float cRh() {
        return this.XykmV;
    }

    public void cQz(double d2, double d3) {
        py py2;
        block4: {
            block5: {
                long l2 = dfcBl ^ 0x687F9C06AFC4L;
                int n2 = py.cRA();
                try {
                    try {
                        py2 = this;
                        if (n2 == 0) break block4;
                        if (py2.Rrudb) break block5;
                    }
                    catch (MatchException matchException) {
                        throw py.cRC(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw py.cRC(matchException);
                }
            }
            this.ybpom = (float)d2;
            this.KAWQC = (float)d3;
            this.OLEnw = this.ybpom - this.euKNr.bXH() * this.IIJgd;
            this.HPRNB = this.KAWQC - this.euKNr.bXI() * this.lbLFN;
            this.kosRk.dhe(this.OLEnw - this.sJTEF);
            this.vqYvK.dhe(this.HPRNB - this.OAdOq);
            py2 = this;
        }
        py2.euKNr.bXt(this.OLEnw, this.HPRNB);
    }

    public float cRd() {
        return this.sJTEF;
    }

    public float cQE() {
        return this.hmPAD.VB();
    }

    public py cQC(boolean bl2) {
        this.uajJe = bl2;
        return this;
    }

    protected Vec2f cQL() {
        return Vec2f.ZERO;
    }

    public float cRf() {
        return this.UOoKH;
    }

    public py cRs(float f2) {
        this.HPRNB = f2;
        return this;
    }

    public rk cQQ() {
        return this.vqYvK;
    }

    public String cQS() {
        return this.RJEfO;
    }

    public py cRm(boolean bl2) {
        this.pHrkM = bl2;
        return this;
    }

    protected float cQM(boolean bl2) {
        float f2;
        long l2 = dfcBl ^ 0x3E92A2F7B24CL;
        try {
            f2 = bl2 ? this.oOKGX.dhj() * this.RnEgc.dhj() : this.RnEgc.dhj();
        }
        catch (MatchException matchException) {
            throw py.cRC(matchException);
        }
        return f2;
    }

    protected float cQH(float f2) {
        return f2 * this.cQE();
    }

    private float cQv(lc lc2, lc lc3) {
        float f2;
        block6: {
            lc lc4;
            block4: {
                block5: {
                    long l2 = dfcBl ^ 0x72E4DFF785F7L;
                    int n2 = py.cRB();
                    try {
                        try {
                            lc4 = lc3;
                            if (n2 != 0) break block4;
                            if (lc4 != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw py.cRC(matchException);
                        }
                        f2 = lc2.bXG();
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw py.cRC(matchException);
                    }
                }
                lc4 = lc2;
            }
            f2 = lc4.bXG() - lc3.bXG();
        }
        return f2;
    }

    private static MatchException cRC(MatchException matchException) {
        return matchException;
    }

    public static void cRz(int n2) {
        hDHpj = n2;
    }

    public void cQp(lC lC2, lc lc2, Entity entity) {
        this.cQr(lC2, lc2, entity, false);
    }

    public lc cQs(lc lc2) {
        return this.cQt(lc2, null);
    }

    private float cQu(lc lc2, lc lc3) {
        float f2;
        block6: {
            lc lc4;
            block4: {
                block5: {
                    long l2 = dfcBl ^ 0x314E9678CC6CL;
                    int n2 = py.cRA();
                    try {
                        try {
                            lc4 = lc3;
                            if (n2 == 0) break block4;
                            if (lc4 != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw py.cRC(matchException);
                        }
                        f2 = lc2.bXF();
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw py.cRC(matchException);
                    }
                }
                lc4 = lc2;
            }
            f2 = lc4.bXF() - lc3.bXF();
        }
        return f2;
    }

    public static int cRA() {
        return hDHpj;
    }

    private static CallSite cRF(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/py" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public void cQq(lC lC2, lc lc2) {
        this.cQr(lC2, lc2, null, true);
    }

    public lc cQt(lc lc2, lc lc3) {
        lc lc4;
        int n2;
        block70: {
            py py2;
            float f2;
            float f3;
            block79: {
                int n3;
                block78: {
                    block77: {
                        block75: {
                            block73: {
                                int n4;
                                block71: {
                                    block68: {
                                        int n5;
                                        block66: {
                                            block63: {
                                                block67: {
                                                    block65: {
                                                        block64: {
                                                            block62: {
                                                                long l2 = dfcBl ^ 0x3E6451D4B71DL;
                                                                f3 = this.cQu(lc2, lc3);
                                                                f2 = this.cQv(lc2, lc3);
                                                                n2 = py.cRB();
                                                                try {
                                                                    try {
                                                                        n5 = this.GWcRy;
                                                                        if (n2 != 0) break block62;
                                                                        if (n5 == 0) break block63;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw py.cRC(matchException);
                                                                    }
                                                                    n5 = this.uajJe;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw py.cRC(matchException);
                                                                }
                                                            }
                                                            try {
                                                                try {
                                                                    if (n2 != 0) break block64;
                                                                    if (n5 == 0) break block63;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw py.cRC(matchException);
                                                                }
                                                                n5 = this.Rrudb;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw py.cRC(matchException);
                                                            }
                                                        }
                                                        try {
                                                            try {
                                                                if (n2 != 0) break block65;
                                                                if (n5 != 0) break block63;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw py.cRC(matchException);
                                                            }
                                                            float f4 = this.UOoKH - f3;
                                                            n5 = f4 == 0.0f ? 0 : (f4 > 0.0f ? 1 : -1);
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw py.cRC(matchException);
                                                        }
                                                    }
                                                    try {
                                                        try {
                                                            try {
                                                                if (n2 != 0) break block66;
                                                                if (n5 != 0) break block67;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw py.cRC(matchException);
                                                            }
                                                            float f5 = this.SzsRB - f2;
                                                            n5 = f5 == 0.0f ? 0 : (f5 > 0.0f ? 1 : -1);
                                                            if (n2 != 0) break block66;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw py.cRC(matchException);
                                                        }
                                                        if (n5 == 0) break block63;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw py.cRC(matchException);
                                                    }
                                                }
                                                n5 = 1;
                                                break block66;
                                            }
                                            n5 = 0;
                                        }
                                        n4 = n5;
                                        try {
                                            block69: {
                                                try {
                                                    try {
                                                        this.sJTEF = lc2.bXF();
                                                        this.OAdOq = lc2.bXG();
                                                        this.UOoKH = f3;
                                                        this.SzsRB = f2;
                                                        n3 = this.Rrudb;
                                                        if (n2 != 0) break block68;
                                                        if (n3 == 0) break block69;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw py.cRC(matchException);
                                                    }
                                                    this.OLEnw = this.ybpom - lc2.bXH() * this.IIJgd;
                                                    this.HPRNB = this.KAWQC - lc2.bXI() * this.lbLFN;
                                                    this.kosRk.dhe(this.OLEnw - lc2.bXF());
                                                    this.vqYvK.dhe(this.HPRNB - lc2.bXG());
                                                    this.cQw(lc2, this.kosRk.dhj(), this.vqYvK.dhj(), f3, f2);
                                                    this.GWcRy = true;
                                                    this.pHrkM = false;
                                                    if (n2 == 0) break block70;
                                                }
                                                catch (MatchException matchException) {
                                                    throw py.cRC(matchException);
                                                }
                                            }
                                            n3 = this.uajJe;
                                        }
                                        catch (MatchException matchException) {
                                            throw py.cRC(matchException);
                                        }
                                    }
                                    try {
                                        block72: {
                                            try {
                                                try {
                                                    try {
                                                        try {
                                                            try {
                                                                try {
                                                                    if (n2 != 0) break block71;
                                                                    if (n3 != 0) break block72;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw py.cRC(matchException);
                                                                }
                                                                float f6 = this.euKNr.bXH() - 0.0f;
                                                                n3 = f6 == 0.0f ? 0 : (f6 > 0.0f ? 1 : -1);
                                                                if (n2 != 0) break block71;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw py.cRC(matchException);
                                                            }
                                                            if (n3 <= 0) break block72;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw py.cRC(matchException);
                                                        }
                                                        float f7 = this.euKNr.bXI() - 0.0f;
                                                        n3 = f7 == 0.0f ? 0 : (f7 > 0.0f ? 1 : -1);
                                                        if (n2 != 0) break block71;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw py.cRC(matchException);
                                                    }
                                                    if (n3 <= 0) break block72;
                                                }
                                                catch (MatchException matchException) {
                                                    throw py.cRC(matchException);
                                                }
                                                this.cQw(lc2, this.kosRk.dhj(), this.vqYvK.dhj(), f3, f2);
                                                this.GWcRy = true;
                                                if (n2 == 0) break block70;
                                            }
                                            catch (MatchException matchException) {
                                                throw py.cRC(matchException);
                                            }
                                        }
                                        n3 = this.GWcRy;
                                    }
                                    catch (MatchException matchException) {
                                        throw py.cRC(matchException);
                                    }
                                }
                                try {
                                    block74: {
                                        try {
                                            try {
                                                if (n2 != 0) break block73;
                                                if (n3 != 0) break block74;
                                            }
                                            catch (MatchException matchException) {
                                                throw py.cRC(matchException);
                                            }
                                            this.kosRk.dhe(0.0f);
                                            this.vqYvK.dhe(0.0f);
                                            this.cQw(lc2, 0.0f, 0.0f, f3, f2);
                                            this.GWcRy = true;
                                            this.Iqptt = false;
                                            this.pHrkM = true;
                                            if (n2 == 0) break block70;
                                        }
                                        catch (MatchException matchException) {
                                            throw py.cRC(matchException);
                                        }
                                    }
                                    n3 = n4;
                                }
                                catch (MatchException matchException) {
                                    throw py.cRC(matchException);
                                }
                            }
                            try {
                                block76: {
                                    try {
                                        try {
                                            if (n2 != 0) break block75;
                                            if (n3 == 0) break block76;
                                        }
                                        catch (MatchException matchException) {
                                            throw py.cRC(matchException);
                                        }
                                        this.kosRk.dhe(this.XykmV - f3);
                                        this.vqYvK.dhe(this.ZOsRY - f2);
                                        this.Iqptt = true;
                                        this.pHrkM = true;
                                        if (n2 == 0) break block77;
                                    }
                                    catch (MatchException matchException) {
                                        throw py.cRC(matchException);
                                    }
                                }
                                n3 = this.Iqptt ? 1 : 0;
                            }
                            catch (MatchException matchException) {
                                throw py.cRC(matchException);
                            }
                        }
                        try {
                            try {
                                if (n2 != 0) break block78;
                                if (n3 != 0) break block77;
                            }
                            catch (MatchException matchException) {
                                throw py.cRC(matchException);
                            }
                            this.kosRk.dhe(0.0f);
                            this.vqYvK.dhe(0.0f);
                            this.cQw(lc2, 0.0f, 0.0f, f3, f2);
                            return this.euKNr;
                        }
                        catch (MatchException matchException) {
                            throw py.cRC(matchException);
                        }
                    }
                    try {
                        py2 = this;
                        if (n2 != 0) break block79;
                        n3 = py2.pHrkM ? 1 : 0;
                    }
                    catch (MatchException matchException) {
                        throw py.cRC(matchException);
                    }
                }
                try {
                    if (n3 == 0) {
                        this.kosRk.dhe(this.XykmV - f3);
                        this.vqYvK.dhe(this.ZOsRY - f2);
                        this.pHrkM = true;
                    }
                }
                catch (MatchException matchException) {
                    throw py.cRC(matchException);
                }
                py2 = this;
            }
            float f8 = py2.kosRk.dhh(0.0f);
            float f9 = this.vqYvK.dhh(0.0f);
            this.cQw(lc2, f8, f9, f3, f2);
        }
        try {
            lc4 = this.euKNr;
            if (iS.bwL() == null) {
                py.cRz(++n2);
            }
        }
        catch (MatchException matchException) {
            throw py.cRC(matchException);
        }
        return lc4;
    }

    private void cQw(lc lc2, float f2, float f3, float f4, float f5) {
        this.euKNr.bXr(lc2.bXF() + f2, lc2.bXG() + f3, lc2.bXH(), lc2.bXI());
        this.XykmV = f4 + f2;
        this.ZOsRY = f5 + f3;
        this.sZ(this.euKNr);
    }

    /*
     * Unable to fully structure code
     */
    private void cQr(lC var1_1, lc var2_2, Entity var3_3, boolean var4_4) {
        block13: {
            block12: {
                block10: {
                    block11: {
                        var5_5 = py.dfcBl ^ 54115312918841L;
                        var9_6 = this;
                        var7_7 = py.cRA();
                        try {
                            v0 = var9_6 instanceof pC;
                            if (var7_7 == 0) break block10;
                            if (!v0) break block11;
                        }
                        catch (MatchException v1) {
                            throw py.cRC(v1);
                        }
                        var8_8 = (pC)var9_6;
                        var8_8.drawFrame(var1_1, var2_2, var3_3, var4_4);
                        return;
                    }
                    v0 = this instanceof pz;
                }
                try {
                    try {
                        if (var7_7 == 0) break block12;
                        if (!v0) {
                        }
                        ** GOTO lbl32
                    }
                    catch (MatchException v2) {
                        throw py.cRC(v2);
                    }
                    v0 = this instanceof pE;
                }
                catch (MatchException v3) {
                    throw py.cRC(v3);
                }
            }
            try {
                if (!v0) break block13;
lbl32:
                // 2 sources

                pj.cNs(var1_1, var2_2, var3_3, List.of(this), var4_4);
            }
            catch (MatchException v4) {
                throw py.cRC(v4);
            }
        }
    }

    public static int cRB() {
        int n2 = py.cRA();
        try {
            if (n2 == 0) {
                return 117;
            }
        }
        catch (MatchException matchException) {
            throw py.cRC(matchException);
        }
        return 0;
    }

    public py verticalAnchor(pK pK2) {
        this.qbstY = pK2;
        return this;
    }

    public pK verticalAnchor() {
        return this.qbstY;
    }

    public lc previewBounds() {
        return this.euKNr;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(py.class, "cRE", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

