/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.BlockItem
 *  net.minecraft.item.Item
 *  net.minecraft.item.ItemStack
 *  net.minecraft.util.hit.BlockHitResult
 */
package sixtwo;

import native.Loader;
import net.minecraft.item.BlockItem;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.util.hit.BlockHitResult;
import sixtwo.gH;
import sixtwo.gM;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.ol;

public class fi
extends gg {
    ol nMxfO;
    boolean JNPbj;
    private static long mrGdR;
    private static long PeXkt;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fi() {
        long l2 = mrGdR ^ 0x32554A801F7BL;
        super(gf.aZL((int)PeXkt, false, gh.xwjCw));
        this.nMxfO = new ol(this);
    }

    static {
        Loader.doInit(fi.class);
        fi._55a4974bb450ef2fd2bd306cedaa38f9();
    }

    private static native void _55a4974bb450ef2fd2bd306cedaa38f9();

    @hG
    public native void aJm(gM var1);

    @hG
    public native void aJn(gH.th var1);

    private native boolean aJs(ItemStack var1);

    private native boolean aJt(ItemStack var1, Item var2);

    private native boolean aJv(ItemStack var1, Item var2);

    private static native MatchException aJx(MatchException var0);

    private native boolean aJu(ItemStack var1, BlockItem var2, BlockHitResult var3);

    private native void aJw();

    private native boolean aJr(ItemStack var1);

    private native boolean aJq();

    private native void aJp();

    private native void aJo();

    @Override
    public native void YO();
}

