/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.Items
 *  net.minecraft.util.Hand
 *  net.minecraft.util.hit.HitResult
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.item.Items;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.HitResult;
import sixtwo.cF;
import sixtwo.cK;
import sixtwo.gO;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.jc;
import sixtwo.jg$tJ;
import sixtwo.mr;

public class dP
extends gg {
    private final cF jOKrR;
    private final cK bMPfs;
    private HitResult KhkCT;
    private static long xCesR;
    private static long[] kOBSI;
    private static Integer[] pSJuP;
    private static Map RwFEW;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _dbdd37ae9e60b3e40dfe5790eb5fd042();

    public dP() {
        long l2 = xCesR ^ 0x503E0A8DBEFDL;
        super(gf.aZL((int)dP.aoX("l", (int)18260, (long)(0x7AC40ADC888CA764L ^ l2)), false, gh.qBzlZ));
        int[] nArray = new int[dP.aoX("l", (int)370, (long)(0x599BEFD50320616AL ^ l2))];
        nArray[0] = (int)dP.aoX("l", (int)5913, (long)(0x35142631EB24F739L ^ l2));
        nArray[1] = (int)dP.aoX("l", (int)22539, (long)(0x135C3321554F3822L ^ l2));
        nArray[2] = (int)dP.aoX("l", (int)23829, (long)(0x5FA87331A056BD3DL ^ l2));
        nArray[3] = (int)dP.aoX("l", (int)22140, (long)(0x2AA87C8DC476B65DL ^ l2));
        nArray[4] = (int)dP.aoX("l", (int)12945, (long)(0x4138EA415106D2A9L ^ l2));
        nArray[5] = (int)dP.aoX("l", (int)18000, (long)(0x2C6FE0EE3F13A674L ^ l2));
        nArray[dP.aoX("l", (int)20256, (long)(0x51C560A340E82F14L ^ l2))] = (int)dP.aoX("l", (int)15821, (long)(0x1F51DA72EA955DE0L ^ l2));
        nArray[dP.aoX("l", (int)32108, (long)(0x35C154C7BC3F9D5FL ^ l2))] = (int)dP.aoX("l", (int)10013, (long)(0x64B6F6B3BC104736L ^ l2));
        this.jOKrR = new cF(this, mr.clS(nArray)).VS(jg$tJ.OCdZM);
        int[] nArray2 = new int[dP.aoX("l", (int)481, (long)(0x659A2C394AEBE1C2L ^ l2))];
        nArray2[0] = (int)dP.aoX("l", (int)15825, (long)(0x229806F062CDDEAL ^ l2));
        nArray2[1] = (int)dP.aoX("l", (int)22011, (long)(0xE3CDEEB949435DDL ^ l2));
        nArray2[2] = (int)dP.aoX("l", (int)18028, (long)(0x1021CB31DF5A2643L ^ l2));
        nArray2[3] = (int)dP.aoX("l", (int)7215, (long)(0x7F36C69050237C10L ^ l2));
        nArray2[4] = (int)dP.aoX("l", (int)7195, (long)(0x52C08CA3C212FC25L ^ l2));
        nArray2[5] = (int)dP.aoX("l", (int)28977, (long)(0x12599A3B8C5A1113L ^ l2));
        nArray2[dP.aoX("l", (int)16898, (long)(0x79F954215079A237L ^ l2))] = (int)dP.aoX("l", (int)157, (long)(0x1A6ED3AD7394E0A7L ^ l2));
        nArray2[dP.aoX("l", (int)21774, (long)(0x5CD9D862DDFFB517L ^ l2))] = (int)dP.aoX("l", (int)694, (long)(0x1879EDE102BAE287L ^ l2));
        nArray2[dP.aoX("l", (int)17533, (long)(0x2B7611846654A44FL ^ l2))] = (int)dP.aoX("l", (int)20029, (long)(0x48E1967E51EA2E0AL ^ l2));
        nArray2[dP.aoX("l", (int)16024, (long)(0x6E329039DB57DEA1L ^ l2))] = (int)dP.aoX("l", (int)18028, (long)(0x1021CB31DF5A2643L ^ l2));
        nArray2[dP.aoX("l", (int)32487, (long)(0x2605F54C5E2D1ECDL ^ l2))] = (int)dP.aoX("l", (int)28991, (long)(0x55EBFB9BB6731111L ^ l2));
        nArray2[dP.aoX("l", (int)16996, (long)(0x523CD1D130C1A248L ^ l2))] = (int)dP.aoX("l", (int)620, (long)(0x19364A7DB4D6249L ^ l2));
        nArray2[dP.aoX("l", (int)1065, (long)(0x3FDDEC861205E415L ^ l2))] = (int)dP.aoX("l", (int)13188, (long)(0x41458017C56D3B2L ^ l2));
        nArray2[dP.aoX("l", (int)28024, (long)(0x450481B74E668D45L ^ l2))] = (int)dP.aoX("l", (int)7438, (long)(0x48A84BE7FBEE7D29L ^ l2));
        this.bMPfs = new cK(this, mr.clS(nArray2)).WM(jc.GjreY).WN(Items.COBWEB);
    }

    static {
        Loader.doInit(dP.class);
        dP._dbdd37ae9e60b3e40dfe5790eb5fd042();
    }

    @hG
    public native void aoR(gO.tm var1);

    @hG
    public native void aoS(gO.tn var1);

    private static native MatchException aoU(MatchException var0);

    private native Hand aoT();

    private static native CallSite aoX(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int aoV(int var0, long var1);

    private static native int aoW(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    @Override
    public native void YO();
}

