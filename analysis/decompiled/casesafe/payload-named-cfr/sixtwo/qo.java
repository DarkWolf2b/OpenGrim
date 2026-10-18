/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonObject
 */
package sixtwo;

import com.google.gson.JsonObject;
import native.Loader;
import sixtwo.qp;

public final class qo
extends Record {
    private final qp opcode;
    private final JsonObject data;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qo(qp qp2, JsonObject jsonObject) {
        this.opcode = qp2;
        this.data = jsonObject;
    }

    static {
        Loader.doInit(qo.class);
    }

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    public native JsonObject data();

    public native qp opcode();
}

