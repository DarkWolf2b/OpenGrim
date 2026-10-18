/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 */
package sixtwo;

import net.minecraft.entity.Entity;
import sixtwo.hH;
import sixtwo.oX;

public abstract class hw
extends hH {
    private Entity XMyDA;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public hw(Entity entity) {
        this.XMyDA = entity;
    }

    public Entity bdm() {
        return this.XMyDA;
    }

    public static class tw
    extends hw {
        private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

        public tw(Entity entity) {
            super(entity);
        }
    }

    public static class tv
    extends hw {
        private boolean VibZH = oX.cLK();
        private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

        public tv(Entity entity) {
            super(entity);
        }

        public boolean dps() {
            return this.VibZH;
        }

        public void dpt() {
            this.VibZH = true;
        }
    }
}

