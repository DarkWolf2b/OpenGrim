/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.List;
import native.Loader;
import sixtwo.hJ;
import sixtwo.hK;

class hU$tD
implements hK {
    final List XkoLj;
    private static long Ktmcl;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * WARNING - Possible parameter corruption
     * WARNING - void declaration
     */
    hU$tD() {
        void var2_-1;
        this.XkoLj = var2_-1;
    }

    static {
        Loader.doInit(hU$tD.class);
        hU$tD._50787977f06a1d9c59bf65fd93e67ec0();
    }

    @Override
    public native hJ validate(String var1);

    @Override
    public native List<String> suggestions(String var1);

    private static native MatchException dpH(MatchException var0);

    private static native boolean dpG(String var0, String var1);

    private static native void _50787977f06a1d9c59bf65fd93e67ec0();
}

