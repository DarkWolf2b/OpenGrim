/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.ItemStack
 *  net.minecraft.screen.ScreenHandler
 *  net.minecraft.screen.slot.Slot
 */
package sixtwo;

import native.Loader;
import net.minecraft.item.ItemStack;
import net.minecraft.screen.ScreenHandler;
import net.minecraft.screen.slot.Slot;

public class nx {
    private final ItemStack ztQJa;
    private final Slot kczfr;
    private static boolean CXbgM;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public nx(ItemStack itemStack, Slot slot) {
        this.ztQJa = itemStack;
        this.kczfr = slot;
    }

    static {
        Loader.doInit(nx.class);
        nx._ce40ab237cd53083838624c7660999c5();
    }

    public native Slot cwg();

    public static native boolean cwi();

    public static native void cwh(boolean var0);

    public static native boolean cwj();

    private static native MatchException cwk(MatchException var0);

    public native void cwe(ScreenHandler var1);

    public native ItemStack cwf();

    private static native void _ce40ab237cd53083838624c7660999c5();
}

