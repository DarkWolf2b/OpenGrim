/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import native.Loader;
import sixtwo.ah;
import sixtwo.ak;
import sixtwo.az;
import sixtwo.bg;
import sixtwo.bk;
import sixtwo.cB;
import sixtwo.cJ;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lf;
import sixtwo.mA;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.rj;
import sixtwo.rk;
import sixtwo.v;

public class bd
extends az {
    private final bg gLpse;
    private final List<ak<?>> iWGks;
    private final rk lWwPB;
    private final rk JrgcS;
    private final rk qicmf;
    private final v jyYNO;
    private final bk TUcNz;
    private final ah WmfRJ;
    private boolean MqINl;
    private boolean qMYan;
    private float fNXMn;
    private float LaFgq;
    private cB Wmfur;
    private boolean UUEVR;
    private static float Pblor = 18.0f;
    private static long aAWpI;
    private static long[] HPoXz;
    private static Integer[] HhdWQ;
    private static Map SSEbJ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bd(bg bg2, float f2, float f3, cB cB2) {
        block7: {
            boolean bl2;
            long l2 = aAWpI ^ 0x26D3D2F10863L;
            int n2 = bg.Dd();
            int n3 = n2;
            try {
                this.iWGks = new ArrayList();
                this.lWwPB = new rk((int)bd.Cq("q", (int)19494, (long)(0x4F4F3FC871F89B00L ^ l2))).dhs(rj.NJlxm);
                this.JrgcS = new rk((int)bd.Cq("q", (int)44, (long)(0x14DE905BC9EE570FL ^ l2))).dhs(rj.UPXqT);
                this.qicmf = new rk((int)bd.Cq("q", (int)22822, (long)(0x5FC60E4752560E0FL ^ l2))).dhs(rj.UPXqT);
                this.WmfRJ = new ah();
                this.gLpse = bg2;
                this.MCnYt = f2;
                this.pNyTQ = f3;
                this.BcpIo = 127.0f;
                this.Wmfur = cB2;
                bd bd2 = this;
                bl2 = cB2 == null;
            }
            catch (MatchException matchException) {
                throw bd.Cn(matchException);
            }
            bd2.UUEVR = bl2;
            int[] nArray = new int[bd.Cq("q", (int)20856, (long)(0x1191CEE3E47D8653L ^ l2))];
            nArray[0] = (int)bd.Cq("q", (int)8743, (long)(0x579C2E477DD77507L ^ l2));
            nArray[1] = (int)bd.Cq("q", (int)20488, (long)(0x284F158A98D5072AL ^ l2));
            nArray[2] = (int)bd.Cq("q", (int)21434, (long)(0x535D8B8349C9049EL ^ l2));
            nArray[3] = (int)bd.Cq("q", (int)27639, (long)(0x113256CD7244BCD6L ^ l2));
            nArray[4] = (int)bd.Cq("q", (int)31764, (long)(0x6931B1AB201A2B3EL ^ l2));
            nArray[5] = (int)bd.Cq("q", (int)17625, (long)(0x62517A97E75B93F1L ^ l2));
            nArray[bd.Cq("q", (int)29404, (long)(0x7A2199F26C9D25F3L ^ l2))] = (int)bd.Cq("q", (int)31284, (long)(0x6AA9B501AD56AD11L ^ l2));
            cJ cJ2 = new cJ(mr.clS(nArray)).WE(bg2.CX().bag());
            cJ2.Vd(() -> bd.Cm(bg2));
            this.jyYNO = new v(cJ2, (az)this);
            this.iWGks.add(this.jyYNO);
            this.TUcNz = new bk(bg2.CX(), (az)this);
            this.iWGks.add(this.TUcNz);
            for (cB cB3 : bg2.CX().bwI()) {
                block8: {
                    ak<? extends cB> ak2 = jf.bAR(cB3, this);
                    try {
                        try {
                            if (n3 != 0) break block7;
                            if (ak2 == null) break block8;
                        }
                        catch (MatchException matchException) {
                            throw bd.Cn(matchException);
                        }
                        this.iWGks.add(ak2);
                    }
                    catch (MatchException matchException) {
                        throw bd.Cn(matchException);
                    }
                }
                if (n3 == 0) continue;
            }
            this.MqINl = true;
        }
    }

    static {
        Loader.doInit(bd.class);
        bd._720c23323a2914d66ffcad8e094f75ee();
    }

    @Override
    public native float dn();

    @Override
    public native void dl(double var1, double var3, mA var5);

    @Override
    public native boolean dm(int var1, int var2, int var3);

    private static native MatchException Cn(MatchException var0);

    public native float Cc();

    public native boolean Cf();

    private static native int Co(int var0, long var1);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void bV(lC var1);

    @Override
    public native boolean fC(double var1, double var3, double var5);

    public native bk BY();

    private static native void _720c23323a2914d66ffcad8e094f75ee();

    @Override
    public native boolean dB(double var1, double var3, mA var5, double var6, double var8);

    private native void BO(lC var1, float var2, float var3, float var4);

    @Override
    public native void fX(lC var1);

    @Override
    public native boolean eK(char var1);

    @Override
    public native boolean oi();

    @Override
    protected native boolean nZ();

    public native boolean Cb();

    public native bd Cg(boolean var1);

    public native bg BS();

    public native void BQ(cB var1);

    public native rk BU();

    public native boolean Ca();

    public native rk BV();

    public native bd Ci(float var1);

    public native bd Cj(float var1);

    private static native int Cp(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native void BP(float var1, float var2);

    private native void BR(lC var1, lf var2, float var3, float var4, float var5, mG var6);

    public native float Cd();

    public native List<ak<?>> BT();

    public native v BX();

    public native ah BZ();

    private static native CallSite Cq(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native bd Ch(boolean var1);

    public native bd Ck(cB var1);

    public native rk BW();

    public native bd Cl(boolean var1);

    private static native /* synthetic */ void Cm(bg var0);

    public native cB Ce();
}

