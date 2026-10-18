/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.network.packet.Packet
 *  net.minecraft.util.math.Box
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;
import java.util.concurrent.atomic.AtomicBoolean;
import native.Loader;
import net.minecraft.network.packet.Packet;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;
import sixtwo.cC;
import sixtwo.cD;
import sixtwo.cJ;
import sixtwo.gH;
import sixtwo.gL;
import sixtwo.gM;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.kr;
import sixtwo.ku;
import sixtwo.mr;

public class ey
extends gg {
    private final cJ sTmtd;
    private final cJ cQjjl;
    private final cC yIJjF;
    private final cJ GFFOu;
    private final cC mjbAe;
    private final cD nEXgW;
    private final kr qXoKw;
    private final Queue<Packet<?>> BeDJP;
    private final AtomicBoolean FTaWP;
    private Vec3d AOxxs;
    private Vec3d UMfxq;
    private Box kYSPP;
    private float OpYvN;
    private boolean TYnKu;
    private static long rLHZE;
    private static long[] MkRVk;
    private static Integer[] DjTne;
    private static Map SDMAX;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    @hG
    public native void ava(gL.tk var1);

    public ey() {
        long l2 = rLHZE ^ 0x2DDB563401ECL;
        super(gf.aZL((int)ey.avj("v", (int)7933, (long)(0x17D47130931513FCL ^ l2)), false, gh.xgeEn).aZS(false));
        int[] nArray = new int[ey.avj("v", (int)23781, (long)(0x637C2022415651CBL ^ l2))];
        nArray[0] = (int)ey.avj("v", (int)5213, (long)(0x662C3C59E460996FL ^ l2));
        nArray[1] = (int)ey.avj("v", (int)12933, (long)(0x14802BA123CB3F96L ^ l2));
        nArray[2] = (int)ey.avj("v", (int)28006, (long)(0x59D2742F1D3D606BL ^ l2));
        nArray[3] = (int)ey.avj("v", (int)24210, (long)(0xA40034D7DC953B6L ^ l2));
        nArray[4] = (int)ey.avj("v", (int)28058, (long)(0x3FBC2F76E4B9609DL ^ l2));
        nArray[5] = (int)ey.avj("v", (int)1927, (long)(0x3F5C4355D58A0AB0L ^ l2));
        nArray[ey.avj("v", (int)13771, (long)(0x6A17E30AA58BB8E0L ^ l2))] = (int)ey.avj("v", (int)3708, (long)(0xD66CE7A7B588349L ^ l2));
        nArray[ey.avj("v", (int)25650, (long)(0x690D86427328E918L ^ l2))] = (int)ey.avj("v", (int)12432, (long)(0x3462FA8D422A3D84L ^ l2));
        nArray[ey.avj("v", (int)15234, (long)(0x243BE975BA6EB680L ^ l2))] = (int)ey.avj("v", (int)3690, (long)(0x796A6F2BCEAA0370L ^ l2));
        nArray[ey.avj("v", (int)21597, (long)(0x6E827117D2335963L ^ l2))] = (int)ey.avj("v", (int)10826, (long)(0x6C97732EFD8DA753L ^ l2));
        nArray[ey.avj("v", (int)21233, (long)(0x3ACD75478E56DFDEL ^ l2))] = (int)ey.avj("v", (int)12432, (long)(0x3462FA8D422A3D84L ^ l2));
        nArray[ey.avj("v", (int)22511, (long)(0xB87C17B45745AC6L ^ l2))] = (int)ey.avj("v", (int)9779, (long)(0x5925D3496CFBAB07L ^ l2));
        nArray[ey.avj("v", (int)5052, (long)(0xB8254E25AA11EA1L ^ l2))] = (int)ey.avj("v", (int)3708, (long)(0xD66CE7A7B588349L ^ l2));
        nArray[ey.avj("v", (int)30870, (long)(0x7611DF171C95F59AL ^ l2))] = (int)ey.avj("v", (int)1927, (long)(0x3F5C4355D58A0AB0L ^ l2));
        nArray[ey.avj("v", (int)9502, (long)(0x602B939617F62836L ^ l2))] = (int)ey.avj("v", (int)3690, (long)(0x796A6F2BCEAA0370L ^ l2));
        nArray[ey.avj("v", (int)32298, (long)(0x589F0D112654F37DL ^ l2))] = (int)ey.avj("v", (int)27467, (long)(0x35361B07FFDE6669L ^ l2));
        nArray[ey.avj("v", (int)14593, (long)(0x223EEF0504383455L ^ l2))] = (int)ey.avj("v", (int)12933, (long)(0x14802BA123CB3F96L ^ l2));
        nArray[ey.avj("v", (int)31962, (long)(0x46D458C0DAA571C1L ^ l2))] = (int)ey.avj("v", (int)28707, (long)(0x2DBCCAB6CFBA7D13L ^ l2));
        nArray[ey.avj("v", (int)8961, (long)(0x75D0A2F4FDAD2E51L ^ l2))] = (int)ey.avj("v", (int)27257, (long)(0x1CBC2D5F58DD6743L ^ l2));
        this.sTmtd = new cJ(this, mr.clS(nArray)).WE(false);
        this.cQjjl = new cJ(this, mr.clS(new int[]{(int)ey.avj("v", (int)20081, (long)(0x5B24A73C50F1C37EL ^ l2)), (int)ey.avj("v", (int)31778, (long)(0x558EEE8EBB58F105L ^ l2)), (int)ey.avj("v", (int)1927, (long)(0x3F5C4355D58A0AB0L ^ l2)), (int)ey.avj("v", (int)28006, (long)(0x59D2742F1D3D606BL ^ l2)), (int)ey.avj("v", (int)3708, (long)(0xD66CE7A7B588349L ^ l2))})).WE(false);
        int[] nArray2 = new int[ey.avj("v", (int)30870, (long)(0x7611DF171C95F59AL ^ l2))];
        nArray2[0] = (int)ey.avj("v", (int)12938, (long)(0x4B0302B0F318BFB6L ^ l2));
        nArray2[1] = (int)ey.avj("v", (int)31778, (long)(0x558EEE8EBB58F105L ^ l2));
        nArray2[2] = (int)ey.avj("v", (int)1927, (long)(0x3F5C4355D58A0AB0L ^ l2));
        nArray2[3] = (int)ey.avj("v", (int)28006, (long)(0x59D2742F1D3D606BL ^ l2));
        nArray2[4] = (int)ey.avj("v", (int)3708, (long)(0xD66CE7A7B588349L ^ l2));
        nArray2[5] = (int)ey.avj("v", (int)12432, (long)(0x3462FA8D422A3D84L ^ l2));
        nArray2[ey.avj("v", (int)13771, (long)(0x6A17E30AA58BB8E0L ^ l2))] = (int)ey.avj("v", (int)12938, (long)(0x4B0302B0F318BFB6L ^ l2));
        nArray2[ey.avj("v", (int)25650, (long)(0x690D86427328E918L ^ l2))] = (int)ey.avj("v", (int)24210, (long)(0xA40034D7DC953B6L ^ l2));
        nArray2[ey.avj("v", (int)15234, (long)(0x243BE975BA6EB680L ^ l2))] = (int)ey.avj("v", (int)27467, (long)(0x35361B07FFDE6669L ^ l2));
        nArray2[ey.avj("v", (int)21597, (long)(0x6E827117D2335963L ^ l2))] = (int)ey.avj("v", (int)22627, (long)(0x1F54E0B97722D560L ^ l2));
        nArray2[ey.avj("v", (int)21233, (long)(0x3ACD75478E56DFDEL ^ l2))] = (int)ey.avj("v", (int)3708, (long)(0xD66CE7A7B588349L ^ l2));
        nArray2[ey.avj("v", (int)22511, (long)(0xB87C17B45745AC6L ^ l2))] = (int)ey.avj("v", (int)28707, (long)(0x2DBCCAB6CFBA7D13L ^ l2));
        nArray2[ey.avj("v", (int)5052, (long)(0xB8254E25AA11EA1L ^ l2))] = (int)ey.avj("v", (int)28006, (long)(0x59D2742F1D3D606BL ^ l2));
        this.yIJjF = new cC(this, mr.clS(nArray2)).Vy(1.0).Vw(1.0).Vx(1000.0).VA(17.0);
        int[] nArray3 = new int[ey.avj("v", (int)5052, (long)(0xB8254E25AA11EA1L ^ l2))];
        nArray3[0] = (int)ey.avj("v", (int)21874, (long)(0x6B648BE8D7BE5874L ^ l2));
        nArray3[1] = (int)ey.avj("v", (int)31778, (long)(0x558EEE8EBB58F105L ^ l2));
        nArray3[2] = (int)ey.avj("v", (int)28707, (long)(0x2DBCCAB6CFBA7D13L ^ l2));
        nArray3[3] = (int)ey.avj("v", (int)3690, (long)(0x796A6F2BCEAA0370L ^ l2));
        nArray3[4] = (int)ey.avj("v", (int)12432, (long)(0x3462FA8D422A3D84L ^ l2));
        nArray3[5] = (int)ey.avj("v", (int)5213, (long)(0x662C3C59E460996FL ^ l2));
        nArray3[ey.avj("v", (int)13771, (long)(0x6A17E30AA58BB8E0L ^ l2))] = (int)ey.avj("v", (int)12933, (long)(0x14802BA123CB3F96L ^ l2));
        nArray3[ey.avj("v", (int)25650, (long)(0x690D86427328E918L ^ l2))] = (int)ey.avj("v", (int)28006, (long)(0x59D2742F1D3D606BL ^ l2));
        nArray3[ey.avj("v", (int)15234, (long)(0x243BE975BA6EB680L ^ l2))] = (int)ey.avj("v", (int)24210, (long)(0xA40034D7DC953B6L ^ l2));
        nArray3[ey.avj("v", (int)21597, (long)(0x6E827117D2335963L ^ l2))] = (int)ey.avj("v", (int)28058, (long)(0x3FBC2F76E4B9609DL ^ l2));
        nArray3[ey.avj("v", (int)21233, (long)(0x3ACD75478E56DFDEL ^ l2))] = (int)ey.avj("v", (int)1927, (long)(0x3F5C4355D58A0AB0L ^ l2));
        nArray3[ey.avj("v", (int)22511, (long)(0xB87C17B45745AC6L ^ l2))] = (int)ey.avj("v", (int)3708, (long)(0xD66CE7A7B588349L ^ l2));
        this.GFFOu = new cJ(this, mr.clS(nArray3)).WE(false);
        int[] nArray4 = new int[ey.avj("v", (int)32298, (long)(0x589F0D112654F37DL ^ l2))];
        nArray4[0] = (int)ey.avj("v", (int)5213, (long)(0x662C3C59E460996FL ^ l2));
        nArray4[1] = (int)ey.avj("v", (int)12933, (long)(0x14802BA123CB3F96L ^ l2));
        nArray4[2] = (int)ey.avj("v", (int)28006, (long)(0x59D2742F1D3D606BL ^ l2));
        nArray4[3] = (int)ey.avj("v", (int)24210, (long)(0xA40034D7DC953B6L ^ l2));
        nArray4[4] = (int)ey.avj("v", (int)28058, (long)(0x3FBC2F76E4B9609DL ^ l2));
        nArray4[5] = (int)ey.avj("v", (int)1927, (long)(0x3F5C4355D58A0AB0L ^ l2));
        nArray4[ey.avj("v", (int)13771, (long)(0x6A17E30AA58BB8E0L ^ l2))] = (int)ey.avj("v", (int)3708, (long)(0xD66CE7A7B588349L ^ l2));
        nArray4[ey.avj("v", (int)25650, (long)(0x690D86427328E918L ^ l2))] = (int)ey.avj("v", (int)12432, (long)(0x3462FA8D422A3D84L ^ l2));
        nArray4[ey.avj("v", (int)15234, (long)(0x243BE975BA6EB680L ^ l2))] = (int)ey.avj("v", (int)12938, (long)(0x4B0302B0F318BFB6L ^ l2));
        nArray4[ey.avj("v", (int)21597, (long)(0x6E827117D2335963L ^ l2))] = (int)ey.avj("v", (int)24210, (long)(0xA40034D7DC953B6L ^ l2));
        nArray4[ey.avj("v", (int)21233, (long)(0x3ACD75478E56DFDEL ^ l2))] = (int)ey.avj("v", (int)27467, (long)(0x35361B07FFDE6669L ^ l2));
        nArray4[ey.avj("v", (int)22511, (long)(0xB87C17B45745AC6L ^ l2))] = (int)ey.avj("v", (int)27430, (long)(0x253A347084EA6637L ^ l2));
        nArray4[ey.avj("v", (int)5052, (long)(0xB8254E25AA11EA1L ^ l2))] = (int)ey.avj("v", (int)3708, (long)(0xD66CE7A7B588349L ^ l2));
        nArray4[ey.avj("v", (int)30870, (long)(0x7611DF171C95F59AL ^ l2))] = (int)ey.avj("v", (int)28707, (long)(0x2DBCCAB6CFBA7D13L ^ l2));
        nArray4[ey.avj("v", (int)9502, (long)(0x602B939617F62836L ^ l2))] = (int)ey.avj("v", (int)28006, (long)(0x59D2742F1D3D606BL ^ l2));
        this.mjbAe = new cC(this, mr.clS(nArray4)).Vy(1.0).Vw(1.0).Vx(1000.0).VA(17.0);
        int[] nArray5 = new int[ey.avj("v", (int)21233, (long)(0x3ACD75478E56DFDEL ^ l2))];
        nArray5[0] = (int)ey.avj("v", (int)3070, (long)(0x7ADC5C54CB9506F4L ^ l2));
        nArray5[1] = (int)ey.avj("v", (int)24210, (long)(0xA40034D7DC953B6L ^ l2));
        nArray5[2] = (int)ey.avj("v", (int)3256, (long)(0x7B30DB86A9FF01A4L ^ l2));
        nArray5[3] = (int)ey.avj("v", (int)27467, (long)(0x35361B07FFDE6669L ^ l2));
        nArray5[4] = (int)ey.avj("v", (int)3708, (long)(0xD66CE7A7B588349L ^ l2));
        nArray5[5] = (int)ey.avj("v", (int)1927, (long)(0x3F5C4355D58A0AB0L ^ l2));
        nArray5[ey.avj("v", (int)13771, (long)(0x6A17E30AA58BB8E0L ^ l2))] = (int)ey.avj("v", (int)12432, (long)(0x3462FA8D422A3D84L ^ l2));
        nArray5[ey.avj("v", (int)25650, (long)(0x690D86427328E918L ^ l2))] = (int)ey.avj("v", (int)10893, (long)(0x29D7A2906DAB27ACL ^ l2));
        nArray5[ey.avj("v", (int)15234, (long)(0x243BE975BA6EB680L ^ l2))] = (int)ey.avj("v", (int)3708, (long)(0xD66CE7A7B588349L ^ l2));
        nArray5[ey.avj("v", (int)21597, (long)(0x6E827117D2335963L ^ l2))] = (int)ey.avj("v", (int)27257, (long)(0x1CBC2D5F58DD6743L ^ l2));
        this.nEXgW = new cD(this, mr.clS(nArray5)).VO((int)ey.avj("v", (int)23083, (long)(0x70033393B9D2D722L ^ l2)));
        this.qXoKw = new kr(this, ku.qnXgu);
        this.BeDJP = new ConcurrentLinkedQueue();
        this.FTaWP = new AtomicBoolean(false);
        this.AOxxs = Vec3d.ZERO;
        this.UMfxq = Vec3d.ZERO;
        this.kYSPP = null;
        this.mjbAe.Vf(this.GFFOu::WF);
        this.yIJjF.Vf(this.cQjjl::WF);
    }

    static {
        Loader.doInit(ey.class);
        ey._ff214a0d86f74f9bd03d9354287cf7b9();
    }

    @Override
    public native void aaj();

    private static native MatchException avg(MatchException var0);

    @hG
    public native void auZ(gM var1);

    private native void ave();

    @hG
    public native void avd(go.sX var1);

    private static native int avi(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    @hG
    public native void avb(gL.tj var1);

    private native void avf(Packet<?> var1);

    @hG
    public native void avc(gH.th var1);

    private static native CallSite avj(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int avh(int var0, long var1);

    private static native void _ff214a0d86f74f9bd03d9354287cf7b9();

    @Override
    public native void YO();
}

