/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.ItemStack
 *  net.minecraft.util.ActionResult
 *  net.minecraft.util.Hand
 */
package sixtwo;

import net.minecraft.item.ItemStack;
import net.minecraft.util.ActionResult;
import net.minecraft.util.Hand;
import sixtwo.hH;

public abstract class gO
extends hH {
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public static class tl
    extends gO {
        private ItemStack ATjwR;
        private Hand cgsEJ;
        private ActionResult OkpCy;
        private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

        public tl(ItemStack itemStack, Hand hand, ActionResult actionResult) {
            this.ATjwR = itemStack;
            this.cgsEJ = hand;
            this.OkpCy = actionResult;
        }

        public Hand dpp() {
            return this.cgsEJ;
        }

        public ItemStack dpo() {
            return this.ATjwR;
        }

        public ActionResult dpq() {
            return this.OkpCy;
        }
    }

    public static class tn
    extends gO {
        private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;
    }

    public static class tm
    extends gO {
        private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;
    }
}

