/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.MinecraftClient
 *  net.minecraft.client.texture.AbstractTexture
 */
package sixtwo;

import java.util.concurrent.CompletableFuture;
import java.util.concurrent.CompletionStage;
import java.util.concurrent.atomic.AtomicReference;
import java.util.function.Supplier;
import native.Loader;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.texture.AbstractTexture;
import sixtwo.cq;
import sixtwo.fo;
import sixtwo.ge;
import sixtwo.iB;
import sixtwo.iG;
import sixtwo.iQ;
import sixtwo.ia;
import sixtwo.ii;
import sixtwo.iq;
import sixtwo.iu;
import sixtwo.iv;
import sixtwo.jL;
import sixtwo.lv;
import sixtwo.nY;
import sixtwo.nZ;
import sixtwo.oa;
import sixtwo.pI;
import sixtwo.qF;
import sixtwo.qG;
import sixtwo.qH;
import sixtwo.qI;
import sixtwo.qJ;
import sixtwo.qK;
import sixtwo.qL;
import sixtwo.qM;
import sixtwo.qN;
import sixtwo.qO;
import sixtwo.qP;
import sixtwo.qQ;
import sixtwo.qR;
import sixtwo.qS;

public final class rD {
    public static MinecraftClient dlmvG;
    static rD ckleu;
    private final AtomicReference<CompletableFuture<Void>> esvJP = new AtomicReference();
    private AbstractTexture ponOV;
    private jL JPfAx;
    private ge dIwNo;
    private cq Krytu;
    private ia ymZXb;
    private qF EzLxl;
    private qG gCddb;
    private pI YaUxu;
    private iv NkOrm;
    private ii HAhie;
    private iQ nTDxJ;
    private iB TFKhB;
    private iG nsAeF;
    private iq UgciD;
    private qP JzJeP;
    private qL aLVRu;
    private qR yYpAe;
    private qJ LQlXr;
    private qN rNQhQ;
    private qM ZMMDH;
    private qQ tfojL;
    private qI QOBpa;
    private qS OQqWJ;
    private qH rtAXF;
    private qO MQyGh;
    private qK kuvoG;
    private oa MIrKO;
    private nY jQBjc;
    private nZ hTzMw;
    private static int[] dLmYF;
    private static long wueCa;
    private static String JSVca;
    private static long IzDvT;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(rD.class);
        rD._2c446001dd787cb011ca4363782d7f45();
    }

    public static native qK dmh();

    public static native int[] dmw();

    private static native String dmy(byte[] var0);

    private native CompletableFuture<Void> dlC(int var1, Supplier<CompletableFuture<Void>> var2);

    public static rD dmn() {
        return ckleu;
    }

    public static native pI dlS();

    public static native qN dma();

    public static native qM dmb();

    public native CompletableFuture<Void> dlz(String var1);

    public static native nZ dmk();

    public static qO dmg() {
        return rD.dmn().MQyGh;
    }

    private native /* synthetic */ Void dmq(int var1, Throwable var2);

    private native /* synthetic */ void dmt(String var1);

    public static native iQ dlN();

    public static native ia dlL();

    private native /* synthetic */ CompletionStage dmp(iu var1);

    private native /* synthetic */ CompletionStage dmu(Void var1);

    public static qH dmf() {
        return rD.dmn().rtAXF;
    }

    private native void dlE();

    public static native jL dlQ();

    private native CompletableFuture<Void> dlF();

    public static native qR dlY();

    public static native qI dmd();

    public static native iv dlV();

    public static qF dlR() {
        return rD.dmn().EzLxl;
    }

    public static native AbstractTexture dmm();

    private native /* synthetic */ CompletionStage dms(Void var1);

    public static native void dmv(int[] var0);

    public static native iB dlO();

    public static ii dlM() {
        return rD.dmn().HAhie;
    }

    public static qG dlT() {
        return rD.dmn().gCddb;
    }

    public static qQ dmc() {
        return rD.dmn().tfojL;
    }

    private native CompletableFuture<Void> dlA();

    private native CompletableFuture<Void> dlB();

    private native void dlG();

    public static cq dlK() {
        return rD.dmn().Krytu;
    }

    public static native iG dlP();

    private native void dlD(String var1);

    private native Throwable dlI(Throwable var1);

    public static native qP dlW();

    public static nY dmj() {
        return rD.dmn().jQBjc;
    }

    public static native iq dlU();

    public static fo dml() {
        return rD.dmn().dIwNo.aZv();
    }

    private static native /* synthetic */ void dmo(lv var0);

    private native /* synthetic */ void dmr(CompletableFuture var1, Void var2, Throwable var3);

    private native Throwable dlH(int var1, Throwable var2);

    public static native qS dme();

    public static qJ dlZ() {
        return rD.dmn().LQlXr;
    }

    private static native Throwable dmx(Throwable var0);

    public static qL dlX() {
        return rD.dmn().aLVRu;
    }

    public static oa dmi() {
        return rD.dmn().MIrKO;
    }

    private static native void _2c446001dd787cb011ca4363782d7f45();

    public static ge dlJ() {
        return rD.dmn().dIwNo;
    }
}

