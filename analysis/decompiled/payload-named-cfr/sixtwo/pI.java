/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.Gson
 *  com.google.gson.JsonObject
 */
package sixtwo;

import com.google.gson.Gson;
import com.google.gson.JsonObject;
import java.util.EnumMap;
import java.util.List;
import java.util.Map;
import native.Loader;
import sixtwo.pF;
import sixtwo.pG;
import sixtwo.pH;
import sixtwo.pI$vA;
import sixtwo.pM;
import sixtwo.py;

public class pI {
    private static Gson jlIME;
    private final Map<pF, pI$vA> qUptW;
    private static long ZQFxo;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public pI() {
        long l2 = ZQFxo ^ 0x41EB441AE644L;
        String[] stringArray = pM.cTD();
        String[] stringArray2 = stringArray;
        this.qUptW = new EnumMap<pF, pI$vA>(pF.class);
        for (pF pF2 : pF.values()) {
            this.qUptW.put(pF2, new pI$vA(this.cTa(), 1.0f, false));
            if (stringArray2 != null) continue;
        }
    }

    static {
        Loader.doInit(pI.class);
        pI._ff166165805cc4a571338e1f7d1e91e5();
    }

    private native void cTc(py var1, JsonObject var2);

    private native pI$vA cTd(pF var1);

    public native Map<pF, pI$vA> cTe();

    private static native Exception cTf(Exception var0);

    private native List<py> cTa();

    public native void cSW(pF var1, boolean var2);

    public native void cSX(pF var1, float var2);

    public native float cSV(pF var1);

    private native JsonObject cTb(py var1);

    public native pH cSR(pF var1);

    public native boolean cSU(pF var1);

    private native float cSZ(pF var1);

    public native void cST(pF var1, pH var2);

    private native void cSY(pF var1, float var2);

    public native List<py> cSP(pF var1);

    public native pG cSQ();

    public native void cSS(pG var1);

    private static native void _ff166165805cc4a571338e1f7d1e91e5();
}

