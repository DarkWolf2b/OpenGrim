/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.gl.GpuSampler
 *  net.minecraft.client.texture.AbstractTexture
 *  net.minecraft.client.texture.NativeImage
 *  net.minecraft.util.Identifier
 */
package sixtwo;

import java.awt.image.BufferedImage;
import java.io.IOException;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Arrays;
import java.util.Map;
import native.Loader;
import net.minecraft.client.gl.GpuSampler;
import net.minecraft.client.texture.AbstractTexture;
import net.minecraft.client.texture.NativeImage;
import net.minecraft.util.Identifier;
import sixtwo.iS;
import sixtwo.lt;

public final class lv
extends AbstractTexture {
    private final int WfpeI;
    private final int nTTvA;
    private static long yxpjw;
    private static String AUrwX;
    private static long[] VYoph;
    private static Integer[] xmMgG;
    private static Map PiNTh;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public lv(BufferedImage bufferedImage) {
        block4: {
            long l2 = yxpjw ^ 0xF7264CB7DDAL;
            this.WfpeI = bufferedImage.getWidth();
            this.nTTvA = bufferedImage.getHeight();
            NativeImage nativeImage = new NativeImage(this.WfpeI, this.nTTvA, false);
            iS[] iSArray = lt.cbc();
            int n2 = 0;
            while (n2 < this.nTTvA) {
                block5: {
                    if (iSArray != null) break block4;
                    for (int i2 = 0; i2 < this.WfpeI; ++i2) {
                        try {
                            nativeImage.setColorArgb(i2, n2, bufferedImage.getRGB(i2, n2));
                            if (iSArray != null) break block5;
                            if (iSArray == null) continue;
                        }
                        catch (IllegalStateException illegalStateException) {
                            throw lv.cbn(illegalStateException);
                        }
                        iS.bwK("zr74mc");
                        break;
                    }
                    ++n2;
                }
                if (iSArray == null) continue;
            }
            this.cbh(nativeImage);
        }
    }

    public lv(NativeImage nativeImage) {
        this.WfpeI = nativeImage.getWidth();
        this.nTTvA = nativeImage.getHeight();
        this.cbh(nativeImage);
    }

    public lv(byte[] byArray) {
        NativeImage nativeImage;
        long l2 = yxpjw ^ 0x4637C3F30A1EL;
        try {
            nativeImage = NativeImage.read((byte[])byArray);
        }
        catch (IOException iOException) {
            throw new IllegalStateException(AUrwX, iOException);
        }
        finally {
            Arrays.fill(byArray, (byte)0);
        }
        this.WfpeI = nativeImage.getWidth();
        this.nTTvA = nativeImage.getHeight();
        this.cbh(nativeImage);
    }

    static {
        Loader.doInit(lv.class);
        lv._6a9d7b9c57742586f19ef15f3c4cde57();
    }

    public native int cbl();

    private static native CallSite cbr(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String cbo(byte[] var0);

    private native void cbh(NativeImage var1);

    private static native IllegalStateException cbn(IllegalStateException var0);

    public native Identifier cbi();

    public native Identifier cbj(String var1);

    public native void cbk(GpuSampler var1);

    public native int cbm();

    private static native int cbp(int var0, long var1);

    private static native int cbq(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native void _6a9d7b9c57742586f19ef15f3c4cde57();
}

