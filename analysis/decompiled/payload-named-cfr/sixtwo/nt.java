/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.ItemStack
 */
package sixtwo;

import native.Loader;
import net.minecraft.item.ItemStack;
import sixtwo.nf;

public class nt {
    private final ItemStack fpdvS;
    private final int BbhGG;
    private final long qWmge;
    private final nf IkJfu;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public nt(ItemStack itemStack, int n2, long l2, nf nf2) {
        this.fpdvS = itemStack;
        this.BbhGG = n2;
        this.qWmge = l2;
        this.IkJfu = nf2;
    }

    static {
        Loader.doInit(nt.class);
    }

    public native ItemStack cvM();

    public native long cvO();

    public native int cvN();

    public native nf cvP();
}

