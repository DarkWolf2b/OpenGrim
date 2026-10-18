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
import java.util.Arrays;
import java.util.Map;
import sixtwo.cB;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mr;
import sixtwo.pG;
import sixtwo.rD;

public class cE
extends cB {
    private static final long ZvRsv = gb.aYR(-7229280345741605547L, 3343296497802533714L, MethodHandles.lookup().lookupClass()).a(265290631921713L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cE(mr mr2) {
        super(mr2);
    }

    public cE(iS iS2, mr mr2) {
        this(mr2);
        this.Vg(iS2);
    }

    @Override
    public void SS(JsonElement jsonElement) {
        long l2 = ZvRsv ^ 0xBEDD13E45E1L;
        try {
            if (!jsonElement.isJsonObject()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw cE.VR(matchException);
        }
        try {
            if (rD.dlS() == null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw cE.VR(matchException);
        }
        pG pG2 = new pG();
        pG2.fromJson(jsonElement.getAsJsonObject());
        rD.dlS().cSS(pG2);
        this.Vk();
    }

    @Override
    public void SR(Map<String, Object> map) {
        JsonObject jsonObject = rD.dlS().cSQ().toJson();
        map.put(Arrays.toString(this.NwlSF), jsonObject);
    }

    private static MatchException VR(MatchException matchException) {
        return matchException;
    }
}

