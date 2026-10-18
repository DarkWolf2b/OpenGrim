/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonElement
 *  net.minecraft.entity.player.PlayerEntity
 */
package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.MethodHandles;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import net.minecraft.entity.player.PlayerEntity;
import sixtwo.cB;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mr;
import sixtwo.rD;

public class cz
extends cB {
    private Set<Integer> vTMHw = new HashSet<Integer>();
    private static final long akFDW = gb.aYR(-9107030281486293025L, 2831443964350399896L, MethodHandles.lookup().lookupClass()).a(31398750213229L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cz(mr mr2) {
        super(mr2);
    }

    public cz(iS iS2, mr mr2) {
        this(mr2);
        this.Vg(iS2);
    }

    public cz UA(Integer n2) {
        cz cz2;
        block4: {
            block5: {
                long l2 = akFDW ^ 0x4C47D8703B43L;
                boolean bl2 = cB.Vt();
                try {
                    try {
                        cz2 = this;
                        if (!bl2) break block4;
                        if (!cz2.vTMHw.add(n2)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cz.UD(matchException);
                    }
                    this.Vk();
                }
                catch (MatchException matchException) {
                    throw cz.UD(matchException);
                }
            }
            cz2 = this;
        }
        return cz2;
    }

    public boolean Uy() {
        return this.vTMHw.contains(rD.dlmvG.player.getInventory().getSelectedSlot());
    }

    public cz UC(Set<Integer> hashSet) {
        cz cz2;
        block6: {
            HashSet<Integer> hashSet2;
            block7: {
                HashSet<Integer> hashSet3;
                long l2 = akFDW ^ 0x1B83393EAC8L;
                boolean bl2 = cB.Vt();
                try {
                    hashSet3 = hashSet == null ? new HashSet<Integer>() : hashSet;
                }
                catch (MatchException matchException) {
                    throw cz.UD(matchException);
                }
                hashSet2 = hashSet3;
                try {
                    try {
                        cz2 = this;
                        if (!bl2) break block6;
                        if (!Objects.equals(cz2.vTMHw, hashSet2)) break block7;
                    }
                    catch (MatchException matchException) {
                        throw cz.UD(matchException);
                    }
                    return this;
                }
                catch (MatchException matchException) {
                    throw cz.UD(matchException);
                }
            }
            this.vTMHw = hashSet2;
            this.Vk();
            cz2 = this;
        }
        return cz2;
    }

    public cz Uw(int ... nArray) {
        long l2 = akFDW ^ 0x3D5B5DFA7D3CL;
        HashSet<Integer> hashSet = new HashSet<Integer>();
        int[] nArray2 = nArray;
        int n2 = nArray2.length;
        boolean bl2 = cB.Vt();
        for (int i2 = 0; i2 < n2; ++i2) {
            int n3 = nArray2[i2];
            hashSet.add(n3);
            if (bl2) continue;
        }
        return this.UC(hashSet);
    }

    private static MatchException UD(MatchException matchException) {
        return matchException;
    }

    @Override
    public void SS(JsonElement jsonElement) {
        block4: {
            long l2 = akFDW ^ 0x36991C2321DL;
            HashSet<Integer> hashSet = new HashSet<Integer>();
            boolean bl2 = cB.Vu();
            for (JsonElement jsonElement2 : jsonElement.getAsJsonArray()) {
                try {
                    hashSet.add(jsonElement2.getAsInt());
                    if (!bl2) {
                        if (!bl2) continue;
                        break;
                    }
                    break block4;
                }
                catch (MatchException matchException) {
                    throw cz.UD(matchException);
                }
            }
            this.UC(hashSet);
        }
    }

    public boolean Uz(PlayerEntity playerEntity) {
        return this.vTMHw.contains(playerEntity.getInventory().getSelectedSlot());
    }

    public Set<Integer> Ux() {
        return this.vTMHw;
    }

    public cz UB(Integer n2) {
        cz cz2;
        block4: {
            block5: {
                long l2 = akFDW ^ 0x337A9A0ADED1L;
                boolean bl2 = cB.Vt();
                try {
                    try {
                        cz2 = this;
                        if (!bl2) break block4;
                        if (!cz2.vTMHw.remove(n2)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cz.UD(matchException);
                    }
                    this.Vk();
                }
                catch (MatchException matchException) {
                    throw cz.UD(matchException);
                }
            }
            cz2 = this;
        }
        return cz2;
    }

    @Override
    public void SR(Map<String, Object> map) {
        map.put(Arrays.toString(this.NwlSF), this.vTMHw);
    }
}

