/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.List;
import native.Loader;
import sixtwo.hM;
import sixtwo.hW;
import sixtwo.hZ;

final class hY$tE
extends Record
implements hZ {
    private final List<String> names;
    private final String description;
    private final List<hM<?>> parameters;
    private final List<hZ> subcommands;
    private final boolean executable;
    private final hW handler;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    @Override
    public native boolean executable();

    private hY$tE(List<String> list, String string, List<hM<?>> list2, List<hZ> list3, boolean bl2, hW hW2) {
        this.names = list;
        this.description = string;
        this.parameters = list2;
        this.subcommands = list3;
        this.executable = bl2;
        this.handler = hW2;
    }

    static {
        Loader.doInit(hY$tE.class);
    }

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    @Override
    public native hW handler();

    @Override
    public native List<hM<?>> parameters();

    @Override
    public native List<String> names();

    @Override
    public native String description();

    @Override
    public native List<hZ> subcommands();
}

