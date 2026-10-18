/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.consume.UseAction
 */
package sixtwo;

import net.minecraft.item.consume.UseAction;

class cX$st {
    static final int[] uFllB = new int[UseAction.values().length];
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        try {
            cX$st.uFllB[UseAction.EAT.ordinal()] = 1;
        }
        catch (NoSuchFieldError noSuchFieldError) {
            // empty catch block
        }
        try {
            cX$st.uFllB[UseAction.DRINK.ordinal()] = 2;
        }
        catch (NoSuchFieldError noSuchFieldError) {
            // empty catch block
        }
    }
}

