/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  oshi.PlatformEnum
 */
import oshi.PlatformEnum;

class p {
    static final int[] K = new int[PlatformEnum.values().length];

    static {
        try {
            p.K[PlatformEnum.WINDOWS.ordinal()] = 1;
        }
        catch (NoSuchFieldError noSuchFieldError) {
            // empty catch block
        }
        try {
            p.K[PlatformEnum.MACOS.ordinal()] = 2;
        }
        catch (NoSuchFieldError noSuchFieldError) {
            // empty catch block
        }
        try {
            p.K[PlatformEnum.LINUX.ordinal()] = 3;
        }
        catch (NoSuchFieldError noSuchFieldError) {
            // empty catch block
        }
    }
}

