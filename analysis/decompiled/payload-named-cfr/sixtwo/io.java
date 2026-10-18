/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonObject
 *  net.minecraft.util.math.Vec2f
 */
package sixtwo;

import com.google.gson.JsonObject;
import native.Loader;
import net.minecraft.util.math.Vec2f;
import sixtwo.rp;

public class io
implements rp {
    private float rXqlY;
    private float GeupB;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public io() {
    }

    public io(float f2, float f3) {
        this.rXqlY = f2;
        this.GeupB = f3;
    }

    static {
        Loader.doInit(io.class);
    }

    @Override
    public native void fromJson(JsonObject var1);

    @Override
    public native JsonObject toJson();

    public native float blz();

    public native io blB(float var1);

    public native io blx();

    public native float bly();

    public native io blA(float var1);

    public native Vec2f blw();
}

