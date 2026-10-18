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
        boolean bl2;
        block2: {
            block3: {
                long l2 = hpdui ^ 0x3C1F0C23707DL;
                boolean bl3 = cB.Vt();
                try {
                    cJ cJ2 = this;
                    bl2 = this.LIkdP;
                    if (!bl3) break block2;
                    if (bl2) break block3;
                }
                catch (MatchException matchException) {
                    throw cJ.WJ(matchException);
                }
                bl2 = true;
                break block2;
            }
            bl2 = false;
        }
        cJ2.LIkdP = bl2;
        this.Vk();
        return this;
    }

    public static void WG(boolean bl2) {
        bLjCM = bl2;
    }

    public static boolean WI() {
        boolean bl2 = cJ.WH();
        try {
            if (!bl2) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw cJ.WJ(matchException);
        }
        return false;
    }

    public cJ WE(boolean bl2) {
        cJ cJ2;
        block4: {
            block5: {
                long l2 = hpdui ^ 0x4EE06A0D22D9L;
                boolean bl3 = cB.Vu();
                try {
                    try {
                        cJ2 = this;
                        if (bl3) break block4;
                        if (cJ2.LIkdP != bl2) break block5;
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
            this.LIkdP = bl2;
            this.Vk();
            cJ2 = this;
        }
        return cJ2;
    }
}

