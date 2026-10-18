/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.Identifier
 */
package sixtwo;

import net.minecraft.util.Identifier;

public abstract class qw {
    private String vLYsI;
    private static String kGPNf;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qw(String string) {
        this.vLYsI = string;
    }

    static {
        if (qw.cZd() != null) {
            qw.cZc("XQmCG");
        }
    }

    public abstract Identifier cZa();

    public static String cZd() {
        return kGPNf;
    }

    public static void cZc(String string) {
        kGPNf = string;
    }

    public String cZb() {
        return this.vLYsI;
    }
}

