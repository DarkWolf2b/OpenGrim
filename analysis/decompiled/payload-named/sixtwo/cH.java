/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonElement
 *  com.google.gson.JsonObject
 */
package sixtwo;

import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import sixtwo.cB;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mr;

public class cH
extends cB {
    private final List<cB> sdWIG = new ArrayList<cB>();
    private static final long ZdDfg = gb.aYR(-2240991886133654468L, 2263670644429913216L, MethodHandles.lookup().lookupClass()).a(173865963928684L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cH(mr mr2) {
        super(mr2);
    }

    public cH(iS iS2, mr mr2) {
        this(mr2);
        this.Vg(iS2);
    }

    private static Exception Ww(Exception exception) {
        return exception;
    }

    public cH Wu(cB ... cBArray) {
        this.sdWIG.addAll(List.of(cBArray));
        return this;
    }

    public List<cB> Wv() {
        return this.sdWIG;
    }

    /*
     * Loose catch block
     */
    @Override
    public void SS(JsonElement jsonElement) {
        JsonElement jsonElement2;
        boolean bl2;
        block9: {
            block10: {
                long l2 = ZdDfg ^ 0x22FD5813A742L;
                bl2 = cB.Vu();
                jsonElement2 = jsonElement;
                if (bl2) break block9;
                try {
                    block12: {
                        if (jsonElement2.isJsonObject()) break block10;
                        break block12;
                        catch (Exception exception) {
                            throw cH.Ww(exception);
                        }
                    }
                    return;
                }
                catch (Exception exception) {
                    throw cH.Ww(exception);
                }
            }
            jsonElement2 = jsonElement;
        }
        JsonObject jsonObject = jsonElement2.getAsJsonObject();
        for (cB cB2 : this.sdWIG) {
            block11: {
                String string = Arrays.toString(cB2.Vm());
                try {
                    if (bl2 || !jsonObject.has(string)) break block11;
                }
                catch (Exception exception) {
                    throw cH.Ww(exception);
                }
                try {
                    cB2.SS(jsonObject.get(string));
                }
                catch (Exception exception) {
                    // empty catch block
                }
            }
            if (!bl2) continue;
        }
    }

    @Override
    public void SR(Map<String, Object> map) {
        block4: {
            long l2 = ZdDfg ^ 0x7184D2713AEEL;
            HashMap<String, Object> hashMap = new HashMap<String, Object>();
            boolean bl2 = cB.Vu();
            for (cB cB2 : this.sdWIG) {
                try {
                    cB2.SR(hashMap);
                    if (!bl2) {
                        if (!bl2) continue;
                        break;
                    }
                    break block4;
                }
                catch (MatchException matchException) {
                    throw cH.Ww(matchException);
                }
            }
            map.put(Arrays.toString(this.NwlSF), hashMap);
        }
    }
}

