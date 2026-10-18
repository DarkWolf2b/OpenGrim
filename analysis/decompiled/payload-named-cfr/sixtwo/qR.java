/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.decoration.EndCrystalEntity
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.HashMap;
import java.util.Map;
import net.minecraft.entity.Entity;
import net.minecraft.entity.decoration.EndCrystalEntity;
import sixtwo.gb;
import sixtwo.hF;
import sixtwo.hG;
import sixtwo.hp;
import sixtwo.hw;
import sixtwo.qL;

public class qR {
    private final Map<Entity, Boolean> EDYHm = new HashMap<Entity, Boolean>();
    private static final long AfTAF = gb.aYR(7585163979685280713L, -922062843457004028L, MethodHandles.lookup().lookupClass()).a(101520123846384L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qR() {
        hF.bdI(this);
    }

    public boolean ddR(Entity entity) {
        return this.EDYHm.containsKey(entity);
    }

    private static MatchException ddS(MatchException matchException) {
        return matchException;
    }

    @hG
    public void ddQ(hp hp2) {
        block9: {
            Entity entity;
            boolean bl2;
            block8: {
                long l2 = AfTAF ^ 0x2EF161B2FEC4L;
                Entity entity2 = hp2.bcX();
                bl2 = qL.dcc();
                try {
                    try {
                        entity = entity2;
                        if (bl2) break block8;
                        if (!(entity instanceof EndCrystalEntity)) break block9;
                    }
                    catch (MatchException matchException) {
                        throw qR.ddS(matchException);
                    }
                    entity = entity2;
                }
                catch (MatchException matchException) {
                    throw qR.ddS(matchException);
                }
            }
            EndCrystalEntity endCrystalEntity = (EndCrystalEntity)entity;
            try {
                Object object;
                try {
                    object = this;
                    if (bl2 || !((qR)object).ddR((Entity)endCrystalEntity)) break block9;
                }
                catch (MatchException matchException) {
                    throw qR.ddS(matchException);
                }
                object = this.EDYHm.remove(endCrystalEntity);
            }
            catch (MatchException matchException) {
                throw qR.ddS(matchException);
            }
        }
    }

    @hG
    public void ddP(hw.tw tw2) {
        block5: {
            Entity entity;
            block4: {
                long l2 = AfTAF ^ 0x8ADE9EAA18BL;
                Entity entity2 = tw2.bdm();
                boolean bl2 = qL.dcb();
                try {
                    try {
                        entity = entity2;
                        if (!bl2) break block4;
                        if (!(entity instanceof EndCrystalEntity)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw qR.ddS(matchException);
                    }
                    entity = entity2;
                }
                catch (MatchException matchException) {
                    throw qR.ddS(matchException);
                }
            }
            EndCrystalEntity endCrystalEntity = (EndCrystalEntity)entity;
            this.EDYHm.put((Entity)endCrystalEntity, true);
        }
    }
}

