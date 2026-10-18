/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.ItemUsageContext
 *  net.minecraft.util.ActionResult
 */
package sixtwo;

import net.minecraft.item.ItemUsageContext;
import net.minecraft.util.ActionResult;
import sixtwo.hH;

public abstract class gW
extends hH {
    private ItemUsageContext QXNUv;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public gW(ItemUsageContext itemUsageContext) {
        this.QXNUv = itemUsageContext;
    }

    public ItemUsageContext bcm() {
        return this.QXNUv;
    }

    public static class tq
    extends gW {
        private ActionResult ZFhqn;
        private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

        public tq(ItemUsageContext itemUsageContext, ActionResult actionResult) {
            super(itemUsageContext);
            this.ZFhqn = actionResult;
        }

        public ActionResult dpr() {
            return this.ZFhqn;
        }
    }
}

