/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonObject
 */
package sixtwo;

import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import sixtwo.cJ;
import sixtwo.iS;
import sixtwo.id;
import sixtwo.ie;
import sixtwo.if;
import sixtwo.ig;
import sixtwo.rp;

public class ij
extends ig
implements rp {
    String FiCDY;
    String hXfMy;
    private static long fkfrj;
    private static String[] aLucX;
    private static String[] qdFFd;
    private static Map LajUB;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public native ij bke(String var1);

    private static native MatchException bkg(MatchException var0);

    public native ij bkf(String var1);

    private static native Object bkj(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native String bkd();

    private static native String bki(int var0, long var1);

    private static native String bkh(byte[] var0);

    private static native CallSite bkk(MethodHandles.Lookup var0, String var1, MethodType var2);

    public ij() {
    }

    public ij(String string, String string2, int[] nArray, ie ie2, if if_, id id2) {
        block4: {
            boolean bl;
            block6: {
                block5: {
                    long l = fkfrj ^ 0x594A0020D2DFL;
                    super(nArray, ie2, if_, id2);
                    this.FiCDY = string;
                    boolean bl2 = cJ.WH();
                    try {
                        try {
                            this.hXfMy = string2;
                            if (iS.bwL() != null) break block4;
                            if (!bl2) break block5;
                        }
                        catch (MatchException matchException) {
                            throw ij.bkg(matchException);
                        }
                        bl = false;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw ij.bkg(matchException);
                    }
                }
                bl = true;
            }
            cJ.WG(bl);
        }
    }

    static {
        Loader.doInit(ij.class);
        ij._f2b524f8e76a56962fb3b97ccefaac45();
    }

    @Override
    public native String bit();

    @Override
    public native void fromJson(JsonObject var1);

    @Override
    public native JsonObject toJson();

    @Override
    public native boolean biu();

    private static native void _f2b524f8e76a56962fb3b97ccefaac45();
}
