/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.equipment.EquipmentType
 */
package sixtwo;

import native.Loader;
import net.minecraft.item.equipment.EquipmentType;

final class fv$sS
extends Record {
    private final int armorIndex;
    private final EquipmentType armorType;
    private final int sourceSlot;
    private final boolean currentArmorEmpty;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private fv$sS(int n2, EquipmentType equipmentType, int n3, boolean bl2) {
        this.armorIndex = n2;
        this.armorType = equipmentType;
        this.sourceSlot = n3;
        this.currentArmorEmpty = bl2;
    }

    static {
        Loader.doInit(fv$sS.class);
    }

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    public native int sourceSlot();

    public native int armorIndex();

    public native EquipmentType armorType();

    public native boolean currentArmorEmpty();
}

