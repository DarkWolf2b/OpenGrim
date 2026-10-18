/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.render.entity.model.PlayerEntityModel
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.client.render.entity.model.PlayerEntityModel;
import sixtwo.bB;
import sixtwo.gb;
import sixtwo.pX;
import sixtwo.pY;

record bC$si(pY emote) implements pX
{
    private static final long a = gb.aYR(1815704216569069388L, -7975721906260477380L, MethodHandles.lookup().lookupClass()).a(62026947645471L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    @Override
    public void apply(PlayerEntityModel playerEntityModel) {
        pY pY2;
        block2: {
            block3: {
                long l2 = a ^ 0x1A6DBEB4D848L;
                int[] nArray = bB.b();
                try {
                    pY2 = this.emote;
                    if (nArray != null) break block2;
                    if (pY2 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw bC$si.a(matchException);
                }
                return;
            }
            pY2 = this.emote;
        }
        pY2.applyPreviewKeyframe(playerEntityModel);
    }

    private static MatchException a(MatchException matchException) {
        return matchException;
    }

    @Override
    public boolean finished() {
        return false;
    }
}

