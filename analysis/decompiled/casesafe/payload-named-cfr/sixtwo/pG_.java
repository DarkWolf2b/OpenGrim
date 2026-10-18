/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonObject
 */
package sixtwo;

import com.google.gson.JsonObject;
import native.Loader;
import sixtwo.pF;
import sixtwo.pH;
import sixtwo.rp;

public class pG
implements rp {
    private pH AohCi = new pH();
    private pH sxRkB = new pH();
    private static long AvBoP;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public native pH cSA();

    public native pG cSC(pH var1);

    private static native MatchException cSD(MatchException var0);

    public native pH cSz();

    public native pG cSB(pH var1);

    public native pH cSy(pF var1);

    static {
        Loader.doInit(pG.class);
        pG._26254eee6c4c3b4667d695e46ba0af85();
    }

    @Override
    public native void fromJson(JsonObject var1);

    @Override
    public native JsonObject toJson();

    private static native void _26254eee6c4c3b4667d695e46ba0af85();
}

