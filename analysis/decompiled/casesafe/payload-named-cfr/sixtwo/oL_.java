/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.LivingEntity
 */
package sixtwo;

import java.util.List;
import native.Loader;
import net.minecraft.entity.LivingEntity;
import sixtwo.iS;
import sixtwo.oG;
import sixtwo.oQ;

public class oL
extends oQ<oG> {
    private static boolean dbAtL;
    private static long WEaqM;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public oL() {
        block4: {
            boolean bl2;
            block6: {
                block5: {
                    long l2 = WEaqM ^ 0x2220EA2CE1E1L;
                    boolean bl3 = oL.cJe();
                    super(List.of(new oG()));
                    boolean bl4 = bl3;
                    try {
                        try {
                            if (iS.bwL() != null) break block4;
                            if (!bl4) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oL.cJf(matchException);
                        }
                        bl2 = false;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw oL.cJf(matchException);
                    }
                }
                bl2 = true;
            }
            oL.cJc(bl2);
        }
    }

    public oL(LivingEntity livingEntity) {
        long l2 = WEaqM ^ 0x174D7824122FL;
        boolean bl2 = oL.cJe();
        super(List.of(new oG(livingEntity)));
        boolean bl3 = bl2;
        try {
            if (bl3) {
                iS.bwK("ZPd06");
            }
        }
        catch (MatchException matchException) {
            throw oL.cJf(matchException);
        }
    }

    static {
        Loader.doInit(oL.class);
        oL._545c8ef846e38724f95196ed3a35f253();
    }

    public static native boolean cJd();

    public static native boolean cJe();

    private static native MatchException cJf(MatchException var0);

    public static native void cJc(boolean var0);

    private static native void _545c8ef846e38724f95196ed3a35f253();
}

