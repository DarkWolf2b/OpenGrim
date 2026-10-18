/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.ItemStack
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.item.ItemStack;
import sixtwo.gb;
import sixtwo.pA;

public record pB$vz(ItemStack stack, String label) {
    private static final long a = gb.aYR(6989389040712857272L, -8873593874275429605L, MethodHandles.lookup().lookupClass()).a(158348626770598L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public pB$vz {
        String string2;
        block2: {
            block3: {
                long l2 = a ^ 0x2E80AFAD303L;
                boolean bl2 = pA.cRP();
                boolean bl3 = bl2;
                try {
                    string2 = string;
                    if (bl3) break block2;
                    if (string2 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw pB$vz.a(matchException);
                }
                string2 = "";
                break block2;
            }
            string2 = string;
        }
        string = string2;
    }

    private static MatchException a(MatchException matchException) {
        return matchException;
    }
}

