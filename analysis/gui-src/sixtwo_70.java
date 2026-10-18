/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonElement
 */
package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.MethodHandles;
import java.util.Map;
import sixtwo.cB;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mr;

public class cI
extends cB {
    private Runnable sAiGw = () -> {};
    private static final long CGjNX = gb.aYR(5579284435811150568L, -1393473000424632907L, MethodHandles.lookup().lookupClass()).a(260687920679028L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cI(mr mr2) {
        super(mr2);
    }

    public cI(iS iS2, mr mr2) {
        this(mr2);
        this.Vg(iS2);
    }

    @Override
    public void SS(JsonElement jsonElement) {
    }

    @Override
    public void SR(Map<String, Object> map) {
    }

    public cI Wx(Runnable runnable) {
        Runnable runnable2;
        block2: {
            block3: {
                long l2 = CGjNX ^ 0x21ADDC3DD7ADL;
                boolean bl2 = cB.Vt();
                try {
                    cI cI2 = this;
                    runnable2 = runnable;
                    if (!bl2) break block2;
                    if (runnable2 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw cI.WC(matchException);
                }
                runnable2 = () -> {};
                break block2;
            }
            runnable2 = runnable;
        }
        cI2.sAiGw = runnable2;
        return this;
    }

    private static MatchException WC(MatchException matchException) {
        return matchException;
    }

    public Runnable Wy() {
        return this.sAiGw;
    }
}

