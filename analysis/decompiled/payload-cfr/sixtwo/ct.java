/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonElement
 */
package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Map;
import sixtwo.cB;
import sixtwo.cu;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mr;

public class ct
extends cB {
    private final List<cu> kwiHL;
    private int kErPl;
    private static iS[] qAFpE;
    private static final long moIkZ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public int ST() {
        return this.kErPl;
    }

    public ct(mr mr2) {
        long l = moIkZ ^ 0x17E6F811B103L;
        iS[] iSArray = ct.SW();
        super(mr2);
        iS[] iSArray2 = iSArray;
        try {
            this.kwiHL = new ArrayList<cu>();
            this.kErPl = 0;
            if (iS.bwL() == null) {
                ct.SV(new iS[3]);
            }
        }
        catch (MatchException matchException) {
            throw ct.SX(matchException);
        }
    }

    public ct(iS iS2, mr mr2) {
        this(mr2);
        this.Vg(iS2);
    }

    static {
        moIkZ = gb.aYR(7043047839429379363L, -5324473541524081038L, MethodHandles.lookup().lookupClass()).a(52170070807811L);
        if (ct.SW() == null) {
            ct.SV(new iS[2]);
        }
    }

    public static iS[] SW() {
        return qAFpE;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    @Override
    public void SS(JsonElement jsonElement) {
        int n;
        int n2;
        block5: {
            long l = moIkZ ^ 0x76451EC4E465L;
            n2 = jsonElement.getAsInt();
            iS[] iSArray = ct.SW();
            try {
                n = n2;
                if (iSArray == null) break block5;
                if (n < 0) return;
            }
            catch (MatchException matchException) {
                throw ct.SX(matchException);
            }
            n = n2;
        }
        try {
            if (n >= this.kwiHL.size()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw ct.SX(matchException);
        }
        this.SN(n2);
    }

    @Override
    public void SR(Map<String, Object> map) {
        map.put(Arrays.toString(this.NwlSF), this.kErPl);
    }

    public static void SV(iS[] iSArray) {
        qAFpE = iSArray;
    }

    private static MatchException SX(MatchException matchException) {
        return matchException;
    }

    public cu SL() {
        return this.kwiHL.get(this.kErPl);
    }

    public int[] SM() {
        return this.kwiHL.get(this.kErPl).Tb();
    }

    public boolean SP(cu cu2) {
        int n;
        block4: {
            block5: {
                long l = moIkZ ^ 0x3016DB78E54EL;
                iS[] iSArray = ct.SW();
                try {
                    try {
                        n = this.kErPl;
                        if (iSArray == null) break block4;
                        if (n != this.kwiHL.indexOf(cu2)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ct.SX(matchException);
                    }
                    n = 1;
                    break block4;
                }
                catch (MatchException matchException) {
                    throw ct.SX(matchException);
                }
            }
            n = 0;
        }
        return n != 0;
    }

    public List<cu> SU() {
        return this.kwiHL;
    }

    public void SN(int n) {
        ct ct2;
        block4: {
            block5: {
                long l = moIkZ ^ 0x2CA2B809E166L;
                iS[] iSArray = ct.SW();
                try {
                    try {
                        ct2 = this;
                        if (iSArray == null) break block4;
                        if (ct2.kErPl != n) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ct.SX(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw ct.SX(matchException);
                }
            }
            this.kErPl = n;
            ct2 = this;
        }
        ct2.Vk();
    }

    public boolean SQ(int n) {
        boolean bl;
        block4: {
            block5: {
                long l = moIkZ ^ 0x3D343AB6EDD4L;
                iS[] iSArray = ct.SW();
                try {
                    try {
                        bl = this.kErPl;
                        if (iSArray == null) break block4;
                        if (bl != n) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ct.SX(matchException);
                    }
                    bl = true;
                    break block4;
                }
                catch (MatchException matchException) {
                    throw ct.SX(matchException);
                }
            }
            bl = false;
        }
        return bl;
    }

    public ct SO(int n) {
        this.SN(n);
        return this;
    }
}
