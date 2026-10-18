/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonElement
 */
package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.MethodHandles;
import java.util.Arrays;
import java.util.Map;
import sixtwo.cB;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mr;

public class cJ
extends cB {
    private boolean LIkdP = false;
    private static boolean bLjCM;
    private static final long hpdui;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cJ(mr mr2) {
        super(mr2);
    }

    public cJ(iS iS2, mr mr2) {
        this(mr2);
        this.Vg(iS2);
    }

    static {
        hpdui = gb.aYR(-6547464087807471634L, 1371317141899777693L, MethodHandles.lookup().lookupClass()).a(166795554959631L);
        if (!cJ.WI()) {
            cJ.WG(true);
        }
    }

    private static MatchException WJ(MatchException matchException) {
        return matchException;
    }

    @Override
    public void SS(JsonElement jsonElement) {
        this.WE(jsonElement.getAsBoolean());
    }

    @Override
    public void SR(Map<String, Object> map) {
        map.put(Arrays.toString(this.NwlSF), this.LIkdP);
    }

    public boolean WF() {
        return this.LIkdP;
    }

    public static boolean WH() {
        return bLjCM;
    }

    public cJ WD() {
        boolean bl;
        block2: {
            block3: {
                long l = hpdui ^ 0x3C1F0C23707DL;
                boolean bl2 = cB.Vt();
                try {
                    cJ cJ2 = this;
                    bl = this.LIkdP;
                    if (!bl2) break block2;
                    if (bl) break block3;
                }
                catch (MatchException matchException) {
                    throw cJ.WJ(matchException);
                }
                bl = true;
                break block2;
            }
            bl = false;
        }
        cJ2.LIkdP = bl;
        this.Vk();
        return this;
    }

    public static void WG(boolean bl) {
        bLjCM = bl;
    }

    public static boolean WI() {
        boolean bl = cJ.WH();
        try {
            if (!bl) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw cJ.WJ(matchException);
        }
        return false;
    }

    public cJ WE(boolean bl) {
        cJ cJ2;
        block4: {
            block5: {
                long l = hpdui ^ 0x4EE06A0D22D9L;
                boolean bl2 = cB.Vu();
                try {
                    try {
                        cJ2 = this;
                        if (bl2) break block4;
                        if (cJ2.LIkdP != bl) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cJ.WJ(matchException);
                    }
                    return this;
                }
                catch (MatchException matchException) {
                    throw cJ.WJ(matchException);
                }
            }
            this.LIkdP = bl;
            this.Vk();
            cJ2 = this;
        }
        return cJ2;
    }
}
