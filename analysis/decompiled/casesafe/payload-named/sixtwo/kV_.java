/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.pipeline.RenderPipeline
 */
package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import java.lang.invoke.MethodHandles;
import java.util.Collections;
import java.util.IdentityHashMap;
import java.util.Map;
import sixtwo.gb;
import sixtwo.kR;
import sixtwo.lh;

public final class kV {
    private static final Map<RenderPipeline, lh> sirgS;
    private static final Map<RenderPipeline, RenderPipeline> JEqcI;
    private static final long WfwXb;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private kV() {
    }

    static {
        WfwXb = gb.aYR(7494737941102038453L, -6521411567110058702L, MethodHandles.lookup().lookupClass()).a(253947487802698L);
        sirgS = Collections.synchronizedMap(new IdentityHashMap());
        JEqcI = Collections.synchronizedMap(new IdentityHashMap());
    }

    public static void bWl(RenderPipeline renderPipeline, lh lh2) {
        block4: {
            long l2 = WfwXb ^ 0x4FA7302FEE83L;
            boolean bl2 = kR.bVy();
            try {
                Object object;
                try {
                    object = renderPipeline;
                    if (bl2 || object == null) break block4;
                }
                catch (MatchException matchException) {
                    throw kV.bWq(matchException);
                }
                object = sirgS.put(renderPipeline, lh2);
            }
            catch (MatchException matchException) {
                throw kV.bWq(matchException);
            }
        }
    }

    public static RenderPipeline bWp(RenderPipeline renderPipeline) {
        return JEqcI.getOrDefault(renderPipeline, renderPipeline);
    }

    public static lh bWn(RenderPipeline renderPipeline) {
        lh lh2;
        block6: {
            Object object;
            block4: {
                block5: {
                    long l2 = WfwXb ^ 0x3FC5B891A0B5L;
                    boolean bl2 = kR.bVx();
                    try {
                        try {
                            object = renderPipeline;
                            if (!bl2) break block4;
                            if (object != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw kV.bWq(matchException);
                        }
                        lh2 = null;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw kV.bWq(matchException);
                    }
                }
                object = sirgS.get(renderPipeline);
            }
            lh2 = (lh)((Object)object);
        }
        return lh2;
    }

    private static MatchException bWq(MatchException matchException) {
        return matchException;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static boolean bWo(RenderPipeline renderPipeline) {
        lh lh2;
        lh lh3;
        block6: {
            long l2 = WfwXb ^ 0x555C012E2F0AL;
            lh lh4 = kV.bWn(renderPipeline);
            boolean bl2 = kR.bVy();
            try {
                try {
                    lh3 = lh4;
                    lh2 = lh.GJHNe;
                    if (bl2) break block6;
                    if (lh3 == lh2) return true;
                }
                catch (MatchException matchException) {
                    throw kV.bWq(matchException);
                }
                lh3 = lh4;
                lh2 = lh.aApMr;
            }
            catch (MatchException matchException) {
                throw kV.bWq(matchException);
            }
        }
        try {
            if (lh3 != lh2) return false;
            return true;
        }
        catch (MatchException matchException) {
            throw kV.bWq(matchException);
        }
    }

    public static void bWm(RenderPipeline renderPipeline, RenderPipeline renderPipeline2) {
        block7: {
            RenderPipeline renderPipeline3;
            boolean bl2;
            block6: {
                long l2 = WfwXb ^ 0xCD40A0B20B2L;
                bl2 = kR.bVx();
                try {
                    renderPipeline3 = renderPipeline;
                    if (!bl2) break block6;
                    if (renderPipeline3 == null) break block7;
                }
                catch (MatchException matchException) {
                    throw kV.bWq(matchException);
                }
                renderPipeline3 = renderPipeline2;
            }
            try {
                try {
                    if (!bl2 || renderPipeline3 == null) break block7;
                }
                catch (MatchException matchException) {
                    throw kV.bWq(matchException);
                }
                renderPipeline3 = JEqcI.put(renderPipeline, renderPipeline2);
            }
            catch (MatchException matchException) {
                throw kV.bWq(matchException);
            }
        }
    }
}

