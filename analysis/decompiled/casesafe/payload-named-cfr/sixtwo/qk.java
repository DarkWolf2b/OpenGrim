/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.ByteBuffer;
import java.util.function.Consumer;
import native.Loader;
import sixtwo.qm;
import sixtwo.qo;

public class qk
extends qm {
    private final RandomAccessFile KuraZ;
    private final Consumer<qo> jRIrU;
    private static long TItqy;
    private static String lzFXf;
    private static long PUMVH;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    qk(String string, Consumer<qo> consumer) throws IOException {
        long l2 = TItqy ^ 0x19FAF9229D82L;
        this.KuraZ = new RandomAccessFile(string, lzFXf);
        this.jRIrU = consumer;
        Thread thread = new Thread(this::cWW);
        thread.start();
    }

    static {
        Loader.doInit(qk.class);
        qk._33b1635d3e3b20f5ec6d5d0e17226f07();
    }

    @Override
    protected native void cWV(ByteBuffer var1);

    @Override
    public native void cWY();

    private native void cWW();

    private native void cWX(ByteBuffer var1) throws IOException;

    private static native String cXa(byte[] var0);

    private static native IOException cWZ(IOException var0);

    private static native void _33b1635d3e3b20f5ec6d5d0e17226f07();
}

