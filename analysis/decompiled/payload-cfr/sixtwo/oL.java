/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1309
 */
package sixtwo;

import java.util.List;
import native.Loader;
import net.minecraft.class_1309;
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
            boolean bl;
            block6: {
                block5: {
                    long l = WEaqM ^ 0x2220EA2CE1E1L;
                    boolean bl2 = oL.cJe();
                    super(List.of(new oG()));
                    boolean bl3 = bl2;
                    try {
                        try {
                            if (iS.bwL() != null) break block4;
                            if (!bl3) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oL.cJf(matchException);
                        }
                        bl = false;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw oL.cJf(matchException);
                    }
                }
                bl = true;
            }
            oL.cJc(bl);
        }
    }

    public oL(class_1309 class_13092) {
        long l = WEaqM ^ 0x174D7824122FL;
        boolean bl = oL.cJe();
        super(List.of(new oG(class_13092)));
        boolean bl2 = bl;
        try {
            if (bl2) {
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
