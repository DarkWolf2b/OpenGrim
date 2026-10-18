/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import sixtwo.gb;

public record ld(float topLeft, float topRight, float bottomLeft, float bottomRight) {
    public static final ld NONE;
    public static final ld M;
    private static String a;
    private static final long b;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        b = gb.aYR(-1669595612824727443L, 5278967684341544382L, MethodHandles.lookup().lookupClass()).a(34424182403630L);
        NONE = new ld(0.0f, 0.0f, 0.0f, 0.0f);
        ld.b("CAKTX");
        M = ld.all(6.0f);
    }

    public static ld bottom(float f2, float f3) {
        return new ld(0.0f, 0.0f, f2, f3);
    }

    public static ld bottom(ld ld2, ld ld3) {
        return new ld(0.0f, 0.0f, ld2.bottomLeft, ld3.bottomRight);
    }

    public float value() {
        return this.topLeft;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    @Override
    public boolean equals(Object object) {
        int n2;
        String string;
        block27: {
            ld ld2;
            block26: {
                block25: {
                    Object object2;
                    block23: {
                        block24: {
                            long l2 = b ^ 0x70CB14C310A0L;
                            string = ld.b();
                            try {
                                try {
                                    object2 = this;
                                    if (string == null) break block23;
                                    if (object2 != object) break block24;
                                    return true;
                                }
                                catch (MatchException matchException) {
                                    throw ld.a(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw ld.a(matchException);
                            }
                        }
                        object2 = object;
                    }
                    try {
                        boolean bl2 = object2 instanceof ld;
                        if (string == null) return bl2;
                        if (!bl2) return false;
                    }
                    catch (MatchException matchException) {
                        throw ld.a(matchException);
                    }
                    ld2 = (ld)object;
                    try {
                        if (string == null) {
                            return false;
                        }
                    }
                    catch (MatchException matchException) {
                        throw ld.a(matchException);
                    }
                    try {
                        try {
                            n2 = Float.compare(this.topLeft, ld2.topLeft);
                            if (string == null) break block25;
                            if (n2 != 0) return 0 != 0;
                        }
                        catch (MatchException matchException) {
                            throw ld.a(matchException);
                        }
                        n2 = Float.compare(this.topRight, ld2.topRight);
                    }
                    catch (MatchException matchException) {
                        throw ld.a(matchException);
                    }
                }
                try {
                    try {
                        if (string == null) break block26;
                        if (n2 != 0) return 0 != 0;
                    }
                    catch (MatchException matchException) {
                        throw ld.a(matchException);
                    }
                    n2 = Float.compare(this.bottomLeft, ld2.bottomLeft);
                }
                catch (MatchException matchException) {
                    throw ld.a(matchException);
                }
            }
            try {
                try {
                    if (string == null) break block27;
                    if (n2 != 0) return 0 != 0;
                }
                catch (MatchException matchException) {
                    throw ld.a(matchException);
                }
                n2 = Float.compare(this.bottomRight, ld2.bottomRight);
            }
            catch (MatchException matchException) {
                throw ld.a(matchException);
            }
        }
        try {
            if (string == null) return n2 != 0;
            if (n2 != 0) return 0 != 0;
            return 1 != 0;
        }
        catch (MatchException matchException) {
            throw ld.a(matchException);
        }
    }

    public ld inflate(float f2) {
        return new ld(this.topLeft + f2, this.topRight + f2, this.bottomLeft + f2, this.bottomRight + f2);
    }

    public static ld of(ld ld2, ld ld3, ld ld4, ld ld5) {
        return new ld(ld2.topLeft, ld3.topRight, ld4.bottomLeft, ld5.bottomRight);
    }

    public static ld of(ld ld2) {
        return new ld(ld2.topLeft, ld2.topRight, ld2.bottomLeft, ld2.bottomRight);
    }

    public static void b(String string) {
        a = string;
    }

    public static String b() {
        return a;
    }

    private static MatchException a(MatchException matchException) {
        return matchException;
    }

    public static ld top(float f2, float f3) {
        return new ld(f2, f3, 0.0f, 0.0f);
    }

    public static ld left(float f2, float f3) {
        return new ld(f2, 0.0f, f3, 0.0f);
    }

    public static ld left(ld ld2, ld ld3) {
        return new ld(ld2.topLeft, 0.0f, ld3.bottomLeft, 0.0f);
    }

    public static ld right(ld ld2, ld ld3) {
        return new ld(0.0f, ld2.topRight, 0.0f, ld3.bottomRight);
    }

    public static ld right(ld ld2) {
        return new ld(0.0f, ld2.topRight, 0.0f, ld2.bottomRight);
    }

    public static ld right(float f2, float f3) {
        return new ld(0.0f, f2, 0.0f, f3);
    }

    public static ld all(float f2) {
        return new ld(f2, f2, f2, f2);
    }

    public static ld onlyBottomRight(float f2) {
        return new ld(0.0f, 0.0f, 0.0f, f2);
    }

    public static ld onlyBottomLeft(float f2) {
        return new ld(0.0f, 0.0f, f2, 0.0f);
    }

    public static ld onlyTopLeft(float f2) {
        return new ld(f2, 0.0f, 0.0f, 0.0f);
    }

    public static ld onlyTopRight(float f2) {
        return new ld(0.0f, f2, 0.0f, 0.0f);
    }
}

