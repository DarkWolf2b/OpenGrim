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
        long l2 = moIkZ ^ 0x17E6F811B103L;
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
        int n2;
        int n3;
        block5: {
            long l2 = moIkZ ^ 0x76451EC4E465L;
            n3 = jsonElement.getAsInt();
            iS[] iSArray = ct.SW();
            try {
                n2 = n3;
                if (iSArray == null) break block5;
                if (n2 < 0) return;
            }
            catch (MatchException matchException) {
                throw ct.SX(matchException);
            }
            n2 = n3;
        }
        try {
            if (n2 >= this.kwiHL.size()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw ct.SX(matchException);
        }
        this.SN(n3);
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
        int n2;
        block4: {
            block5: {
                long l2 = moIkZ ^ 0x3016DB78E54EL;
                iS[] iSArray = ct.SW();
                try {
                    try {
                        n2 = this.kErPl;
                        if (iSArray == null) break block4;
                        if (n2 != this.kwiHL.indexOf(cu2)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ct.SX(matchException);
                    }
                    n2 = 1;
                    break block4;
                }
                catch (MatchException matchException) {
                    throw ct.SX(matchException);
                }
            }
            n2 = 0;
        }
        return n2 != 0;
    }

    public List<cu> SU() {
        return this.kwiHL;
    }

    public void SN(int n2) {
        ct ct2;
        block4: {
            block5: {
                long l2 = moIkZ ^ 0x2CA2B809E166L;
                iS[] iSArray = ct.SW();
                try {
                    try {
                        ct2 = this;
                        if (iSArray == null) break block4;
                        if (ct2.kErPl != n2) break block5;
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
            this.kErPl = n2;
            ct2 = this;
        }
        ct2.Vk();
    }

    public boolean SQ(int n2) {
        boolean bl2;
        block4: {
            block5: {
                long l2 = moIkZ ^ 0x3D343AB6EDD4L;
                iS[] iSArray = ct.SW();
                try {
                    try {
                        bl2 = this.kErPl;
                        if (iSArray == null) break block4;
                        if (bl2 != n2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ct.SX(matchException);
                    }
                    bl2 = true;
                    break block4;
                }
                catch (MatchException matchException) {
                    throw ct.SX(matchException);
                }
            }
            bl2 = false;
        }
        return bl2;
    }

    public ct SO(int n2) {
        this.SN(n2);
        return this;
    }
}

