/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.List;
import native.Loader;
import sixtwo.hJ;
import sixtwo.hK;

class hL$tz
implements hK {
    final hK ussFH;
    final List CLLeY;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * WARNING - Possible parameter corruption
     * WARNING - void declaration
     */
    hL$tz() {
        void var3_-1;
        void var2_-1;
        this.ussFH = var2_-1;
        this.CLLeY = var3_-1;
    }

    static {
        Loader.doInit(hL$tz.class);
    }

    @Override
    public native hJ validate(String var1);

    @Override
    public native List<String> suggestions(String var1);

    private static native boolean dpu(String var0, String var1);
}

