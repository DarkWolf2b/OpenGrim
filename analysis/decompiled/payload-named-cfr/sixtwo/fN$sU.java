/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.player.PlayerSkinType
 *  net.minecraft.util.AssetInfo$TextureAsset
 */
package sixtwo;

import native.Loader;
import net.minecraft.entity.player.PlayerSkinType;
import net.minecraft.util.AssetInfo;

final class fN$sU
extends Record {
    private final int[] name;
    private final AssetInfo.TextureAsset texture;
    private final PlayerSkinType model;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private fN$sU(int[] nArray, AssetInfo.TextureAsset textureAsset, PlayerSkinType playerSkinType) {
        this.name = nArray;
        this.texture = textureAsset;
        this.model = playerSkinType;
    }

    static {
        Loader.doInit(fN$sU.class);
    }

    public native int[] name();

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    public native PlayerSkinType model();

    public native AssetInfo.TextureAsset texture();
}

