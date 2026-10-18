/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.pipeline.RenderPipeline
 *  com.mojang.blaze3d.systems.RenderSystem
 *  com.mojang.blaze3d.textures.GpuTexture
 *  mixin.accessors.MinecraftAccessor
 *  net.minecraft.class_276
 *  net.minecraft.class_408
 *  net.minecraft.class_437
 */
package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.systems.RenderSystem;
import com.mojang.blaze3d.textures.GpuTexture;
import java.lang.invoke.CallSite;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import mixin.accessors.MinecraftAccessor;
import net.minecraft.class_276;
import net.minecraft.class_408;
import net.minecraft.class_437;
import sixtwo.av;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jL;
import sixtwo.jm;
import sixtwo.jn;
import sixtwo.jp;
import sixtwo.kR;
import sixtwo.kV;
import sixtwo.kn;
import sixtwo.lO;
import sixtwo.lP;
import sixtwo.lQ;
import sixtwo.lT;
import sixtwo.lt;
import sixtwo.lu;
import sixtwo.rD;
import sixtwo.rt;

public final class jo {
    private static final jo fYlIq;
    private static final ThreadLocal<jn> wEOIE;
    private static final ThreadLocal<class_276> hdKgo;
    private volatile boolean ifpCk;
    private volatile boolean WZYbo;
    private jp vUdoJ;
    private jp VZxOZ;
    private jp wnqWl;
    private jp nBoiY;
    private jp eFXCP;
    private jp rQpiC;
    private lO ErHsl;
    private lP mauej;
    private static final long SuwYq;
    private static final String[] Jdstx;
    private static final String[] NlbpS;
    private static final Map DoEeQ;
    private static final long[] YKowF;
    private static final Integer[] yOISF;
    private static final Map oVZWQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public static class_276 bEh() {
        class_276 class_2762;
        block2: {
            block3: {
                long l = SuwYq ^ 0x3D37640E4175L;
                class_276 class_2763 = hdKgo.get();
                iS[] iSArray = jm.bDZ();
                try {
                    class_2762 = class_2763;
                    if (iSArray == null) break block2;
                    if (class_2762 == null) break block3;
                }
                catch (IllegalStateException illegalStateException) {
                    throw jo.bFb(illegalStateException);
                }
                class_2762 = class_2763;
                break block2;
            }
            class_2762 = rD.dlmvG.method_1522();
        }
        return class_2762;
    }

    public static class_276 bEk() {
        return fYlIq.bEH(jo.fYlIq.vUdoJ);
    }

    public static class_276 bEi() {
        jp jp2;
        long l = SuwYq ^ 0x39A1CED26880L;
        jn jn2 = wEOIE.get();
        try {
            jp2 = jn2 == null ? null : fYlIq.bEE(jn2);
        }
        catch (IllegalStateException illegalStateException) {
            throw jo.bFb(illegalStateException);
        }
        return jp2;
    }

    public static class_276 bEl() {
        return fYlIq.bEH(jo.fYlIq.wnqWl);
    }

    public static class_276 bEj() {
        jp jp2;
        long l = SuwYq ^ 0x376BF4C4B541L;
        jn jn2 = wEOIE.get();
        try {
            jp2 = jn2 == null ? null : fYlIq.bEF(jn2);
        }
        catch (IllegalStateException illegalStateException) {
            throw jo.bFb(illegalStateException);
        }
        return jp2;
    }

    /*
     * Unable to fully structure code
     */
    private void bEw() {
        block8: {
            block9: {
                var1_1 = jo.SuwYq ^ 88083106209449L;
                var3_2 = jm.bDZ();
                try {
                    v0 = this.ifpCk;
                    if (var3_2 == null) break block8;
                    if (v0) break block9;
                }
                catch (Throwable v1) {
                    throw jo.bFb(v1);
                }
                return;
            }
            try {
                this.bEA();
                v2 = this;
                if (var3_2 != null) {
                    v0 = v2.bER();
                }
                ** GOTO lbl32
            }
            catch (Throwable v3) {
                throw jo.bFb(v3);
            }
        }
        if (!v0) {
            return;
        }
        try {
            this.bEB();
            this.bEM(this.vUdoJ);
            this.bEM(this.wnqWl);
            this.bEM(this.eFXCP);
            this.bEM(this.VZxOZ);
            this.bEM(this.nBoiY);
            v2 = this;
lbl32:
            // 2 sources

            v2.bEM(this.rQpiC);
        }
        catch (Throwable var4_3) {
            // empty catch block
        }
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private void bEU(int n, int n2) {
        lP lP2;
        block14: {
            block15: {
                iS[] iSArray;
                block13: {
                    jo jo2;
                    block12: {
                        long l = SuwYq ^ 0x139A4B7CA612L;
                        iSArray = jm.bDZ();
                        try {
                            try {
                                jo2 = this;
                                if (iSArray == null) break block12;
                                if (!jo2.ifpCk) return;
                            }
                            catch (IllegalStateException illegalStateException) {
                                throw jo.bFb(illegalStateException);
                            }
                            jo2 = this;
                        }
                        catch (IllegalStateException illegalStateException) {
                            throw jo.bFb(illegalStateException);
                        }
                    }
                    try {
                        try {
                            lP2 = jo2.mauej;
                            if (iSArray == null) break block13;
                            if (lP2 == null) return;
                        }
                        catch (IllegalStateException illegalStateException) {
                            throw jo.bFb(illegalStateException);
                        }
                        lP2 = this.mauej;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                }
                try {
                    try {
                        if (iSArray == null) break block14;
                        if (lP2.cgW()) break block15;
                        return;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                }
                catch (IllegalStateException illegalStateException) {
                    throw jo.bFb(illegalStateException);
                }
            }
            lP2 = this.mauej;
        }
        lP2.chf(n, n2);
    }

    private void bEC() {
        block5: {
            block4: {
                long l = SuwYq ^ 0x52099B899D83L;
                iS[] iSArray = jm.bDZ();
                try {
                    jo jo2;
                    try {
                        jo2 = this;
                        if (iSArray == null) break block4;
                        if (jo2.ErHsl != null) break block5;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                    jo2 = this;
                }
                catch (IllegalStateException illegalStateException) {
                    throw jo.bFb(illegalStateException);
                }
            }
            jo2.ErHsl = new lO();
        }
    }

    private void bEN(jp jp2) {
        long l = SuwYq ^ 0x1C79FF8BB57FL;
        this.bEP(jp2, 1, (int)jo.bFi("x", (int)26637, (long)(0x690B34108E039B1EL ^ l)), 1, (int)jo.bFi("x", (int)5820, (long)(0x140FF7B8FF7AE5AEL ^ l)));
    }

    private void bEB() {
        block53: {
            jp jp2;
            block51: {
                iS[] iSArray;
                long l;
                block50: {
                    jp jp3;
                    block48: {
                        block47: {
                            jp jp4;
                            block45: {
                                block44: {
                                    jp jp5;
                                    block42: {
                                        block41: {
                                            jp jp6;
                                            block39: {
                                                block38: {
                                                    jp jp7;
                                                    block36: {
                                                        l = SuwYq ^ 0x38501FC5F242L;
                                                        iSArray = jm.bDZ();
                                                        try {
                                                            block37: {
                                                                try {
                                                                    try {
                                                                        jp7 = this.vUdoJ;
                                                                        if (iSArray == null) break block36;
                                                                        if (jp7 != null) break block37;
                                                                    }
                                                                    catch (IllegalStateException illegalStateException) {
                                                                        throw jo.bFb(illegalStateException);
                                                                    }
                                                                    this.vUdoJ = new jp((String)((Object)jo.bFf("l", (int)15228, (long)(0x72AFADE1A840AADFL ^ l))), true);
                                                                    if (iSArray != null) break block38;
                                                                }
                                                                catch (IllegalStateException illegalStateException) {
                                                                    throw jo.bFb(illegalStateException);
                                                                }
                                                            }
                                                            jp7 = this.vUdoJ;
                                                        }
                                                        catch (IllegalStateException illegalStateException) {
                                                            throw jo.bFb(illegalStateException);
                                                        }
                                                    }
                                                    jp7.bFj();
                                                }
                                                try {
                                                    block40: {
                                                        try {
                                                            try {
                                                                jp6 = this.wnqWl;
                                                                if (iSArray == null) break block39;
                                                                if (jp6 != null) break block40;
                                                            }
                                                            catch (IllegalStateException illegalStateException) {
                                                                throw jo.bFb(illegalStateException);
                                                            }
                                                            this.wnqWl = new jp((String)((Object)jo.bFf("l", (int)13908, (long)(0x1CB0BF5B312E27F8L ^ l))), true);
                                                            if (iSArray != null) break block41;
                                                        }
                                                        catch (IllegalStateException illegalStateException) {
                                                            throw jo.bFb(illegalStateException);
                                                        }
                                                    }
                                                    jp6 = this.wnqWl;
                                                }
                                                catch (IllegalStateException illegalStateException) {
                                                    throw jo.bFb(illegalStateException);
                                                }
                                            }
                                            jp6.bFj();
                                        }
                                        try {
                                            block43: {
                                                try {
                                                    try {
                                                        jp5 = this.eFXCP;
                                                        if (iSArray == null) break block42;
                                                        if (jp5 != null) break block43;
                                                    }
                                                    catch (IllegalStateException illegalStateException) {
                                                        throw jo.bFb(illegalStateException);
                                                    }
                                                    this.eFXCP = new jp((String)((Object)jo.bFf("l", (int)7621, (long)(0x335980C2163E0C63L ^ l))), false);
                                                    if (iSArray != null) break block44;
                                                }
                                                catch (IllegalStateException illegalStateException) {
                                                    throw jo.bFb(illegalStateException);
                                                }
                                            }
                                            jp5 = this.eFXCP;
                                        }
                                        catch (IllegalStateException illegalStateException) {
                                            throw jo.bFb(illegalStateException);
                                        }
                                    }
                                    jp5.bFj();
                                }
                                try {
                                    block46: {
                                        try {
                                            try {
                                                jp4 = this.VZxOZ;
                                                if (iSArray == null) break block45;
                                                if (jp4 != null) break block46;
                                            }
                                            catch (IllegalStateException illegalStateException) {
                                                throw jo.bFb(illegalStateException);
                                            }
                                            this.VZxOZ = new jp((String)((Object)jo.bFf("l", (int)27053, (long)(0x49C4E79922E6F80AL ^ l))), false);
                                            if (iSArray != null) break block47;
                                        }
                                        catch (IllegalStateException illegalStateException) {
                                            throw jo.bFb(illegalStateException);
                                        }
                                    }
                                    jp4 = this.VZxOZ;
                                }
                                catch (IllegalStateException illegalStateException) {
                                    throw jo.bFb(illegalStateException);
                                }
                            }
                            jp4.bFj();
                        }
                        try {
                            block49: {
                                try {
                                    try {
                                        jp3 = this.nBoiY;
                                        if (iSArray == null) break block48;
                                        if (jp3 != null) break block49;
                                    }
                                    catch (IllegalStateException illegalStateException) {
                                        throw jo.bFb(illegalStateException);
                                    }
                                    this.nBoiY = new jp((String)((Object)jo.bFf("l", (int)15246, (long)(0x1A67CF09E6DC2A2EL ^ l))), false);
                                    if (iSArray != null) break block50;
                                }
                                catch (IllegalStateException illegalStateException) {
                                    throw jo.bFb(illegalStateException);
                                }
                            }
                            jp3 = this.nBoiY;
                        }
                        catch (IllegalStateException illegalStateException) {
                            throw jo.bFb(illegalStateException);
                        }
                    }
                    jp3.bFj();
                }
                try {
                    block52: {
                        try {
                            try {
                                jp2 = this.rQpiC;
                                if (iSArray == null) break block51;
                                if (jp2 != null) break block52;
                            }
                            catch (IllegalStateException illegalStateException) {
                                throw jo.bFb(illegalStateException);
                            }
                            this.rQpiC = new jp((String)((Object)jo.bFf("l", (int)11727, (long)(0x5E2EF3B7B3F93C6DL ^ l))), false);
                            if (iSArray != null) break block53;
                        }
                        catch (IllegalStateException illegalStateException) {
                            throw jo.bFb(illegalStateException);
                        }
                    }
                    jp2 = this.rQpiC;
                }
                catch (IllegalStateException illegalStateException) {
                    throw jo.bFb(illegalStateException);
                }
            }
            jp2.bFj();
        }
    }

    private static Throwable bFb(Throwable throwable) {
        return throwable;
    }

    private jp bEF(jn jn2) {
        jp jp2;
        long l = SuwYq ^ 0x4325199166DCL;
        try {
            jp2 = jn2 == jn.pWlAK ? this.wnqWl : this.nBoiY;
        }
        catch (IllegalStateException illegalStateException) {
            throw jo.bFb(illegalStateException);
        }
        return jp2;
    }

    public static boolean bEg() {
        boolean bl;
        block4: {
            block5: {
                long l = SuwYq ^ 0x607F2EF2D2E6L;
                iS[] iSArray = jm.bDZ();
                try {
                    try {
                        bl = rt.djy();
                        if (iSArray == null) break block4;
                        if (!bl) break block5;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                    return false;
                }
                catch (IllegalStateException illegalStateException) {
                    throw jo.bFb(illegalStateException);
                }
            }
            bl = true;
        }
        return bl;
    }

    private boolean bES() {
        boolean bl;
        block17: {
            block15: {
                iS[] iSArray;
                block16: {
                    class_437 class_4372;
                    block14: {
                        block13: {
                            boolean bl2;
                            block12: {
                                long l = SuwYq ^ 0x1E3994377D97L;
                                iSArray = jm.bDZ();
                                try {
                                    bl2 = this.ifpCk;
                                    if (iSArray == null) break block12;
                                    if (bl2) break block13;
                                }
                                catch (IllegalStateException illegalStateException) {
                                    throw jo.bFb(illegalStateException);
                                }
                                bl2 = false;
                            }
                            return bl2;
                        }
                        try {
                            try {
                                class_4372 = rD.dlmvG.field_1755;
                                if (iSArray == null) break block14;
                                if (class_4372 == null) break block15;
                            }
                            catch (IllegalStateException illegalStateException) {
                                throw jo.bFb(illegalStateException);
                            }
                            class_4372 = rD.dlmvG.field_1755;
                        }
                        catch (IllegalStateException illegalStateException) {
                            throw jo.bFb(illegalStateException);
                        }
                    }
                    try {
                        try {
                            bl = class_4372 instanceof av;
                            if (iSArray == null) break block16;
                            if (bl) break block15;
                        }
                        catch (IllegalStateException illegalStateException) {
                            throw jo.bFb(illegalStateException);
                        }
                        bl = rD.dlmvG.field_1755 instanceof class_408;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                }
                try {
                    if (iSArray == null) break block17;
                    if (bl) break block15;
                }
                catch (IllegalStateException illegalStateException) {
                    throw jo.bFb(illegalStateException);
                }
                bl = true;
                break block17;
            }
            bl = false;
        }
        return bl;
    }

    private static CallSite bFf(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jo" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private class_276 bEI(RenderPipeline renderPipeline, class_276 class_2762) {
        jp jp2;
        jp jp3;
        jp jp4;
        jn jn2;
        block24: {
            iS[] iSArray;
            block22: {
                boolean bl;
                block21: {
                    long l = SuwYq ^ 0x3BAEE59846D1L;
                    jn2 = wEOIE.get();
                    iSArray = jm.bDZ();
                    try {
                        try {
                            try {
                                if (jn2 == null) return class_2762;
                                bl = this.bER();
                                if (iSArray == null) break block21;
                            }
                            catch (IllegalStateException illegalStateException) {
                                throw jo.bFb(illegalStateException);
                            }
                            if (!bl) return class_2762;
                        }
                        catch (IllegalStateException illegalStateException) {
                            throw jo.bFb(illegalStateException);
                        }
                        bl = kV.bWo(renderPipeline);
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                }
                try {
                    if (!bl) {
                        return class_2762;
                    }
                }
                catch (IllegalStateException illegalStateException) {
                    throw jo.bFb(illegalStateException);
                }
                jp4 = this.bEE(jn2);
                try {
                    class_276 class_2763;
                    try {
                        class_2763 = class_2762;
                        if (iSArray == null) return class_2763;
                        if (class_2763 == jp4) break block22;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                    class_2763 = class_2762;
                    return class_2763;
                }
                catch (IllegalStateException illegalStateException) {
                    throw jo.bFb(illegalStateException);
                }
            }
            jp3 = this.bEF(jn2);
            try {
                jp jp5;
                block23: {
                    try {
                        try {
                            try {
                                jp5 = jp3;
                                if (iSArray == null) return jp5;
                                if (jp5 == null) break block23;
                            }
                            catch (IllegalStateException illegalStateException) {
                                throw jo.bFb(illegalStateException);
                            }
                            jp2 = jp3;
                            if (iSArray == null) return jp2;
                        }
                        catch (IllegalStateException illegalStateException) {
                            throw jo.bFb(illegalStateException);
                        }
                        if (jp2.method_30277() != null) break block24;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                }
                jp5 = class_2762;
                return jp5;
            }
            catch (IllegalStateException illegalStateException) {
                throw jo.bFb(illegalStateException);
            }
        }
        this.bEJ(jn2, jp4, jp3);
        jp3.LHtaR = true;
        jp2 = jp3;
        return jp2;
    }

    private jp bEG(jn jn2) {
        jp jp2;
        long l = SuwYq ^ 0x4E1B6A1D9CD3L;
        try {
            jp2 = jn2 == jn.pWlAK ? this.eFXCP : this.rQpiC;
        }
        catch (IllegalStateException illegalStateException) {
            throw jo.bFb(illegalStateException);
        }
        return jp2;
    }

    /*
     * Unable to fully structure code
     */
    private void bEz() {
        block7: {
            var1_1 = jo.SuwYq ^ 33196289229748L;
            v0 = jm.bDZ();
            this.bEC();
            var3_2 = v0;
            v1 = this;
            if (var3_2 == null) ** GOTO lbl25
            try {
                block9: {
                    if (v1.ErHsl != null) break block7;
                    break block9;
                    catch (Throwable v2) {
                        throw jo.bFb(v2);
                    }
                }
                return;
            }
            catch (Throwable v3) {
                throw jo.bFb(v3);
            }
        }
        try {
            lQ.chQ();
            lQ.chS();
            this.bEN(this.vUdoJ);
            this.bEO(this.wnqWl, this.eFXCP);
            this.bEN(this.VZxOZ);
            v1 = this;
lbl25:
            // 2 sources

            v1.bEO(this.nBoiY, this.rQpiC);
        }
        finally {
            lQ.chT();
            lQ.chR();
        }
    }

    private boolean bER() {
        boolean bl;
        block13: {
            block11: {
                lP lP2;
                iS[] iSArray;
                block12: {
                    jo jo2;
                    block10: {
                        long l = SuwYq ^ 0x69908BF852D1L;
                        iSArray = jm.bDZ();
                        try {
                            try {
                                jo2 = this;
                                if (iSArray == null) break block10;
                                if (!jo2.ifpCk) break block11;
                            }
                            catch (IllegalStateException illegalStateException) {
                                throw jo.bFb(illegalStateException);
                            }
                            jo2 = this;
                        }
                        catch (IllegalStateException illegalStateException) {
                            throw jo.bFb(illegalStateException);
                        }
                    }
                    try {
                        try {
                            lP2 = jo2.mauej;
                            if (iSArray == null) break block12;
                            if (lP2 == null) break block11;
                        }
                        catch (IllegalStateException illegalStateException) {
                            throw jo.bFb(illegalStateException);
                        }
                        lP2 = this.mauej;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                }
                try {
                    bl = lP2.cgW();
                    if (iSArray == null) break block13;
                    if (!bl) break block11;
                }
                catch (IllegalStateException illegalStateException) {
                    throw jo.bFb(illegalStateException);
                }
                bl = true;
                break block13;
            }
            bl = false;
        }
        return bl;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private void bEK(class_276 class_2762, jp jp2) {
        int n;
        int n2;
        int n3;
        block17: {
            jp jp3;
            iS[] iSArray;
            block15: {
                block16: {
                    block14: {
                        class_276 class_2763;
                        block13: {
                            long l = SuwYq ^ 0x20BA6C29CACCL;
                            iSArray = jm.bDZ();
                            try {
                                class_2763 = class_2762;
                                if (iSArray == null) break block13;
                                if (class_2763 == null) return;
                            }
                            catch (IllegalStateException illegalStateException) {
                                throw jo.bFb(illegalStateException);
                            }
                            class_2763 = class_2762;
                        }
                        try {
                            try {
                                if (class_2763.method_30277() == null) return;
                                jp3 = jp2;
                                if (iSArray == null) break block14;
                            }
                            catch (IllegalStateException illegalStateException) {
                                throw jo.bFb(illegalStateException);
                            }
                            if (jp3 == null) return;
                        }
                        catch (IllegalStateException illegalStateException) {
                            throw jo.bFb(illegalStateException);
                        }
                        jp3 = jp2;
                    }
                    try {
                        try {
                            if (iSArray == null) break block15;
                            if (jp3.method_30277() != null) break block16;
                            return;
                        }
                        catch (IllegalStateException illegalStateException) {
                            throw jo.bFb(illegalStateException);
                        }
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                }
                jp3 = class_2762;
            }
            n3 = Math.min(((class_276)jp3).field_1482, jp2.field_1482);
            n2 = Math.min(class_2762.field_1481, jp2.field_1481);
            try {
                n = n3;
                if (iSArray == null) break block17;
                if (n <= 0) return;
            }
            catch (IllegalStateException illegalStateException) {
                throw jo.bFb(illegalStateException);
            }
            n = n2;
        }
        if (n <= 0) {
            return;
        }
        lu.cbf(class_2762.method_30277(), jp2.method_30277(), 0, 0, 0, 0, 0, n3, n2);
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private void bEL(class_276 class_2762, jp jp2) {
        block15: {
            jp jp3;
            block14: {
                class_276 class_2763;
                iS[] iSArray;
                block13: {
                    long l = SuwYq ^ 0x7C0604711A48L;
                    iSArray = jm.bDZ();
                    try {
                        class_2763 = class_2762;
                        if (iSArray == null) break block13;
                        if (class_2763 == null) return;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                    class_2763 = class_2762;
                }
                try {
                    try {
                        if (class_2763.method_30277() == null) return;
                        jp3 = jp2;
                        if (iSArray == null) break block14;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                    if (jp3 == null) return;
                }
                catch (IllegalStateException illegalStateException) {
                    throw jo.bFb(illegalStateException);
                }
                jp3 = jp2;
            }
            try {
                if (jp3.method_30277() == null) {
                    return;
                }
            }
            catch (IllegalStateException illegalStateException) {
                throw jo.bFb(illegalStateException);
            }
            try {
                try {
                    if (kR.cSPla != null && jL.TruIk != null) break block15;
                    return;
                }
                catch (IllegalStateException illegalStateException) {
                    throw jo.bFb(illegalStateException);
                }
            }
            catch (IllegalStateException illegalStateException) {
                throw jo.bFb(illegalStateException);
            }
        }
        kn.bQq(kR.cSPla, (class_276)jp2, renderPass -> {
            long l = SuwYq ^ 0x7551D9276827L;
            renderPass.bindTexture((String)((Object)jo.bFf("l", (int)26408, (long)(0x38773BAE874BECE8L ^ l))), class_2762.method_71639(), lt.caX());
            jL.TruIk.bJl();
        });
    }

    private synchronized void bEu(boolean bl) {
        block11: {
            jo jo2;
            block10: {
                boolean bl2;
                block8: {
                    iS[] iSArray;
                    block9: {
                        long l = SuwYq ^ 0xEEDF1417A63L;
                        iSArray = jm.bDZ();
                        try {
                            try {
                                bl2 = this.ifpCk;
                                if (iSArray == null) break block8;
                                if (bl2 != bl) break block9;
                            }
                            catch (IllegalStateException illegalStateException) {
                                throw jo.bFb(illegalStateException);
                            }
                            return;
                        }
                        catch (IllegalStateException illegalStateException) {
                            throw jo.bFb(illegalStateException);
                        }
                    }
                    try {
                        jo2 = this;
                        if (iSArray == null) break block10;
                        jo2.ifpCk = bl;
                        bl2 = bl;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                }
                if (bl2) break block11;
                jo2 = this;
            }
            jo2.bEv();
        }
    }

    public static boolean bEf() {
        boolean bl;
        long l = SuwYq ^ 0x2CCCEC9A1D44L;
        try {
            bl = wEOIE.get() != null;
        }
        catch (IllegalStateException illegalStateException) {
            throw jo.bFb(illegalStateException);
        }
        return bl;
    }

    /*
     * Unable to fully structure code
     */
    private void bEV() {
        block10: {
            var1_1 = jo.SuwYq ^ 22255617507723L;
            var3_2 = jm.bDZ();
            try {
                block9: {
                    if (var3_2 == null) break block9;
                    try {
                        block11: {
                            if (!RenderSystem.isOnRenderThread()) ** GOTO lbl19
                            break block11;
                            catch (Throwable v0) {
                                throw jo.bFb(v0);
                            }
                        }
                        this.bEW();
                    }
                    catch (Throwable v1) {
                        throw jo.bFb(v1);
                    }
                }
                try {
                    if (var3_2 != null) break block10;
lbl19:
                    // 2 sources

                    RenderSystem.queueFencedTask((Runnable)(Runnable)LambdaMetafactory.metafactory(null, null, null, ()V, bEW(), ()V)((jo)this));
                }
                catch (Throwable v2) {
                    throw jo.bFb(v2);
                }
            }
            catch (Throwable var4_3) {
                // empty catch block
            }
        }
    }

    private void bEA() {
        block11: {
            jo jo2;
            lP lP2;
            block9: {
                iS[] iSArray;
                block10: {
                    long l = SuwYq ^ 0x263139094FA7L;
                    iSArray = jm.bDZ();
                    try {
                        try {
                            lP2 = this.mauej;
                            if (iSArray == null) break block9;
                            if (lP2 != null) break block10;
                        }
                        catch (IllegalStateException illegalStateException) {
                            throw jo.bFb(illegalStateException);
                        }
                        this.mauej = new lP();
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                }
                try {
                    jo2 = this;
                    if (iSArray == null) break block11;
                    lP2 = jo2.mauej;
                }
                catch (IllegalStateException illegalStateException) {
                    throw jo.bFb(illegalStateException);
                }
            }
            try {
                if (!lP2.cgW()) {
                    this.mauej.cgX();
                }
            }
            catch (IllegalStateException illegalStateException) {
                throw jo.bFb(illegalStateException);
            }
            jo2 = this;
        }
        jo2.WZYbo = this.mauej.cgW();
    }

    public static boolean bEd() {
        return jo.fYlIq.ifpCk;
    }

    private jp bEE(jn jn2) {
        jp jp2;
        long l = SuwYq ^ 0x469C12B82B92L;
        try {
            jp2 = jn2 == jn.pWlAK ? this.vUdoJ : this.VZxOZ;
        }
        catch (IllegalStateException illegalStateException) {
            throw jo.bFb(illegalStateException);
        }
        return jp2;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private class_276 bEH(jp jp2) {
        jp jp3;
        block14: {
            iS[] iSArray;
            block13: {
                block12: {
                    long l = SuwYq ^ 0x1E4082FDC85L;
                    iSArray = jm.bDZ();
                    try {
                        try {
                            if (!this.ifpCk) return null;
                            jp3 = jp2;
                            if (iSArray == null) break block12;
                        }
                        catch (IllegalStateException illegalStateException) {
                            throw jo.bFb(illegalStateException);
                        }
                        if (jp3 == null) return null;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                    jp3 = jp2;
                }
                try {
                    try {
                        if (iSArray == null) break block13;
                        if (!jp3.LHtaR) return null;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                    jp3 = jp2;
                }
                catch (IllegalStateException illegalStateException) {
                    throw jo.bFb(illegalStateException);
                }
            }
            try {
                try {
                    if (iSArray == null) return jp3;
                    if (jp3.method_30277() != null) break block14;
                    return null;
                }
                catch (IllegalStateException illegalStateException) {
                    throw jo.bFb(illegalStateException);
                }
            }
            catch (IllegalStateException illegalStateException) {
                throw jo.bFb(illegalStateException);
            }
        }
        jp3 = jp2;
        return jp3;
    }

    /*
     * Unable to fully structure code
     */
    private void bEx() {
        block12: {
            var1_1 = jo.SuwYq ^ 126333645477197L;
            var3_2 = jm.bDZ();
            try {
                v0 = this.ifpCk;
                if (var3_2 != null) {
                    if (v0) break block12;
                }
                ** GOTO lbl15
            }
            catch (Throwable v1) {
                throw jo.bFb(v1);
            }
            return;
        }
        try {
            block17: {
                block15: {
                    block16: {
                        block13: {
                            block14: {
                                v0 = this.bES();
lbl15:
                                // 2 sources

                                try {
                                    if (var3_2 == null) break block13;
                                    if (!v0) break block14;
                                }
                                catch (Throwable v2) {
                                    throw jo.bFb(v2);
                                }
                                this.bET();
                                return;
                            }
                            this.bEA();
                            v0 = this.bER();
                        }
                        try {
                            if (var3_2 == null) break block15;
                            if (v0) break block16;
                        }
                        catch (Throwable v3) {
                            throw jo.bFb(v3);
                        }
                        return;
                    }
                    try {
                        this.bEB();
                        v4 = this.mauej;
                        if (var3_2 == null) break block17;
                        v0 = v4.cgY();
                    }
                    catch (Throwable v5) {
                        throw jo.bFb(v5);
                    }
                }
                if (!v0) {
                    return;
                }
                v4 = this.mauej;
            }
            v4.cgZ((Runnable)LambdaMetafactory.metafactory(null, null, null, ()V, bEz(), ()V)((jo)this));
        }
        catch (Throwable var4_3) {
            // empty catch block
        }
    }

    private void bEO(jp jp2, jp jp3) {
        long l = SuwYq ^ 0x15713613FDC3L;
        this.bEQ(jp2, jp3, 1, (int)jo.bFi("x", (int)5820, (long)(0x140FFEB036E2AD12L ^ l)), 1, (int)jo.bFi("x", (int)5820, (long)(0x140FFEB036E2AD12L ^ l)), 1);
    }

    private void bEJ(jn jn2, jp jp2, jp jp3) {
        block16: {
            class_276 class_2762;
            jp jp4;
            block17: {
                GpuTexture gpuTexture;
                iS[] iSArray;
                block14: {
                    block15: {
                        block13: {
                            jp jp5;
                            block12: {
                                jp jp6;
                                block10: {
                                    block11: {
                                        long l = SuwYq ^ 0x4DEB5E554F33L;
                                        iSArray = jm.bDZ();
                                        try {
                                            try {
                                                jp6 = jp3;
                                                if (iSArray == null) break block10;
                                                if (!jp6.LHtaR) break block11;
                                            }
                                            catch (IllegalStateException illegalStateException) {
                                                throw jo.bFb(illegalStateException);
                                            }
                                            return;
                                        }
                                        catch (IllegalStateException illegalStateException) {
                                            throw jo.bFb(illegalStateException);
                                        }
                                    }
                                    jp6 = this.bEG(jn2);
                                }
                                jp4 = jp6;
                                try {
                                    jp5 = jp4;
                                    if (iSArray == null) break block12;
                                    if (jp5 == null) break block13;
                                }
                                catch (IllegalStateException illegalStateException) {
                                    throw jo.bFb(illegalStateException);
                                }
                                jp5 = jp4;
                            }
                            try {
                                gpuTexture = jp5.method_30277();
                                if (iSArray == null) break block14;
                                if (gpuTexture != null) break block15;
                            }
                            catch (IllegalStateException illegalStateException) {
                                throw jo.bFb(illegalStateException);
                            }
                        }
                        return;
                    }
                    gpuTexture = hdKgo.get();
                }
                class_2762 = (class_276)gpuTexture;
                try {
                    if (iSArray == null) break block16;
                    if (class_2762 != null) break block17;
                }
                catch (IllegalStateException illegalStateException) {
                    throw jo.bFb(illegalStateException);
                }
                class_2762 = rD.dlmvG.method_1522();
            }
            this.bEK(class_2762, jp4);
            this.bEL((class_276)jp2, jp4);
            this.bEK((class_276)jp4, jp3);
            jp4.LHtaR = true;
        }
    }

    public static void bEn() {
        fYlIq.bEx();
    }

    public static void bEc(boolean bl) {
        fYlIq.bEu(bl);
    }

    public static void bEo(int n, int n2) {
        fYlIq.bEU(n, n2);
    }

    public static boolean bEe() {
        return jo.fYlIq.WZYbo;
    }

    public static void bEm() {
        fYlIq.bEw();
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Unable to fully structure code
     */
    private void bEy(jn var1_1, Runnable var2_2) {
        block42: {
            block38: {
                block37: {
                    block35: {
                        block36: {
                            var3_3 = jo.SuwYq ^ 56718861567490L;
                            var5_4 = jm.bDZ();
                            try {
                                v0 = this.bES();
                                if (var5_4 == null) break block35;
                                if (!v0) break block36;
                            }
                            catch (Throwable v1) {
                                throw jo.bFb(v1);
                            }
                            return;
                        }
                        try {
                            v2 = this;
                            if (var5_4 == null) break block37;
                            v0 = v2.bER();
                        }
                        catch (Throwable v3) {
                            throw jo.bFb(v3);
                        }
                    }
                    try {
                        if (v0) {
                            v2 = jo.wEOIE.get();
                        }
                        ** GOTO lbl30
                    }
                    catch (Throwable v4) {
                        throw jo.bFb(v4);
                    }
                }
                try {
                    if (v2 == null) break block38;
lbl30:
                    // 2 sources

                    var2_2.run();
                    return;
                }
                catch (Throwable v5) {
                    throw jo.bFb(v5);
                }
            }
            try {
                block43: {
                    block48: {
                        block47: {
                            block40: {
                                block41: {
                                    block39: {
                                        this.bEB();
                                        var6_5 = this.bEE(var1_1);
                                        var7_6 = this.bEF(var1_1);
                                        try {
                                            v6 = var6_5;
                                            if (var5_4 == null) break block39;
                                            if (v6 != null) {
                                            }
                                            ** GOTO lbl56
                                        }
                                        catch (Throwable v7) {
                                            throw jo.bFb(v7);
                                        }
                                        v6 = var6_5;
                                    }
                                    if (var5_4 == null) break block40;
                                    try {
                                        block46: {
                                            if (v6.method_30277() != null) break block41;
                                            break block46;
                                            catch (Throwable v8) {
                                                throw jo.bFb(v8);
                                            }
                                        }
                                        throw new IllegalStateException((String)jo.bFf("l", (int)30160, (long)(5546403830681210941L ^ var3_3)) + String.valueOf((Object)var1_1));
                                    }
                                    catch (Throwable v9) {
                                        throw jo.bFb(v9);
                                    }
                                }
                                v6 = rD.dlmvG.method_1522();
                            }
                            var8_7 = v6;
                            if (var5_4 == null) break block42;
                            if (var1_1 != jn.pWlAK) break block43;
                            break block47;
                            catch (Throwable v10) {
                                throw jo.bFb(v10);
                            }
                        }
                        this.bED((class_276)var8_7, var6_5);
                        if (var5_4 == null) break block42;
                        break block48;
                        catch (Throwable v11) {
                            throw jo.bFb(v11);
                        }
                    }
                    try {
                        block49: {
                            if (var7_6 == null) break block43;
                            break block49;
                            catch (Throwable v12) {
                                throw jo.bFb(v12);
                            }
                        }
                        this.bED((class_276)var8_7, var7_6);
                    }
                    catch (Throwable v13) {
                        throw jo.bFb(v13);
                    }
                }
                jo.hdKgo.set((class_276)var8_7);
                jo.wEOIE.set(var1_1);
                ((MinecraftAccessor)rD.dlmvG).setMainRenderTarget((class_276)var6_5);
            }
            catch (Throwable var9_8) {
                jo.hdKgo.remove();
                jo.wEOIE.remove();
                var2_2.run();
                return;
            }
        }
        try {
            var2_2.run();
        }
        finally {
            try {
                ((MinecraftAccessor)rD.dlmvG).setMainRenderTarget((class_276)var8_7);
                var6_5.LHtaR = true;
            }
            finally {
                jo.hdKgo.remove();
                jo.wEOIE.remove();
            }
        }
    }

    private synchronized void bEv() {
        this.WZYbo = false;
        this.bEV();
    }

    private void bEM(jp jp2) {
        block7: {
            jp jp3;
            block8: {
                iS[] iSArray;
                block6: {
                    long l = SuwYq ^ 0x11357256C622L;
                    iSArray = jm.bDZ();
                    try {
                        jp3 = jp2;
                        if (iSArray == null) break block6;
                        if (jp3 == null) break block7;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                    jp3 = jp2;
                }
                try {
                    try {
                        if (iSArray == null) break block8;
                        if (!jp3.LHtaR) break block7;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                    jp3 = jp2;
                }
                catch (IllegalStateException illegalStateException) {
                    throw jo.bFb(illegalStateException);
                }
            }
            jp3.bFk();
        }
    }

    private void bET() {
        block5: {
            lP lP2;
            block4: {
                long l = SuwYq ^ 0x79C16F9C27A1L;
                iS[] iSArray = jm.bDZ();
                try {
                    try {
                        lP2 = this.mauej;
                        if (iSArray == null) break block4;
                        if (lP2 == null) break block5;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                    lP2 = this.mauej;
                }
                catch (IllegalStateException illegalStateException) {
                    throw jo.bFb(illegalStateException);
                }
            }
            lP2.chl();
        }
    }

    private void bED(class_276 class_2762, jp jp2) {
        block4: {
            block5: {
                long l = SuwYq ^ 0x19B43FF3DC4EL;
                int n = jp2.bFm();
                iS[] iSArray = jm.bDZ();
                try {
                    try {
                        if (iSArray == null) break block4;
                        if (n != -1) break block5;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                    return;
                }
                catch (IllegalStateException illegalStateException) {
                    throw jo.bFb(illegalStateException);
                }
            }
            lT.ciQ().copyDepthTexture(class_2762.method_30278(), jp2.method_30278(), jp2.field_1482, jp2.field_1481);
        }
    }

    private static CallSite bFi(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jo" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Unable to fully structure code
     */
    private void bEW() {
        var1_1 = jo.SuwYq ^ 52931515430443L;
        var3_2 = jm.bDZ();
        try {
            block14: {
                block13: {
                    block12: {
                        block15: {
                            v0 = this;
                            if (var3_2 == null) break block12;
                            if (v0.mauej == null) ** GOTO lbl19
                            break block15;
                            catch (Throwable v1) {
                                throw jo.bFb(v1);
                            }
                        }
                        try {
                            block16: {
                                this.mauej.cha((Runnable)LambdaMetafactory.metafactory(null, null, null, ()V, bEZ(), ()V)((jo)this));
                                if (var3_2 != null) break block13;
                                break block16;
                                catch (Throwable v2) {
                                    throw jo.bFb(v2);
                                }
                            }
                            v0 = this;
                        }
                        catch (Throwable v3) {
                            throw jo.bFb(v3);
                        }
                    }
                    if (var3_2 == null) break block14;
                    try {
                        block17: {
                            if (v0.ErHsl == null) break block13;
                            break block17;
                            catch (Throwable v4) {
                                throw jo.bFb(v4);
                            }
                        }
                        this.ErHsl.cgK();
                        this.ErHsl = null;
                    }
                    catch (Throwable v5) {
                        throw jo.bFb(v5);
                    }
                }
                this.mauej = null;
                v0 = this;
            }
            v0.WZYbo = false;
        }
        catch (Throwable var4_3) {
            this.mauej = null;
            this.WZYbo = false;
        }
        this.bEX();
    }

    /*
     * Unable to fully structure code
     */
    private void bEY(jp var1_1) {
        block5: {
            var2_2 = jo.SuwYq ^ 58633630577549L;
            var4_3 = jm.bDZ();
            try {
                v0 = var1_1;
                if (var4_3 != null) {
                    if (v0 != null) break block5;
                }
                ** GOTO lbl15
            }
            catch (Throwable v1) {
                throw jo.bFb(v1);
            }
            return;
        }
        try {
            v0 = var1_1;
lbl15:
            // 2 sources

            v0.method_1238();
        }
        catch (Throwable var5_4) {
            // empty catch block
        }
    }

    private /* synthetic */ void bEZ() {
        block5: {
            lO lO2;
            block4: {
                long l = SuwYq ^ 0x5D131C63FC96L;
                iS[] iSArray = jm.bDZ();
                try {
                    try {
                        lO2 = this.ErHsl;
                        if (iSArray == null) break block4;
                        if (lO2 == null) break block5;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                    lO2 = this.ErHsl;
                }
                catch (IllegalStateException illegalStateException) {
                    throw jo.bFb(illegalStateException);
                }
            }
            lO2.cgK();
            this.ErHsl = null;
        }
    }

    private static Object bFe(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = jo.bFd(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static int bFg(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x1007;
        if (yOISF[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = YKowF[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])oVZWQ.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    oVZWQ.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jo", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            jo.yOISF[n2] = n3;
        }
        return yOISF[n2];
    }

    private void bEP(jp jp2, int n, int n2, int n3, int n4) {
        this.bEQ(jp2, null, n, n2, n3, n4, 0);
    }

    private void bEX() {
        this.bEY(this.vUdoJ);
        this.bEY(this.wnqWl);
        this.bEY(this.eFXCP);
        this.bEY(this.VZxOZ);
        this.bEY(this.nBoiY);
        this.bEY(this.rQpiC);
        this.vUdoJ = null;
        this.wnqWl = null;
        this.eFXCP = null;
        this.VZxOZ = null;
        this.nBoiY = null;
        this.rQpiC = null;
    }

    private static String bFc(byte[] byArray) {
        int n = 0;
        int n2 = byArray.length;
        char[] cArray = new char[n2];
        for (int i = 0; i < n2; ++i) {
            char c;
            int n3 = 0xFF & byArray[i];
            if (n3 < 192) {
                cArray[n++] = (char)n3;
                continue;
            }
            if (n3 < 224) {
                c = (char)((char)(n3 & 0x1F) << 6);
                n3 = byArray[++i];
                c = (char)(c | (char)(n3 & 0x3F));
                cArray[n++] = c;
                continue;
            }
            if (i >= n2 - 2) continue;
            c = (char)((char)(n3 & 0xF) << 12);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F) << 6);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F));
            cArray[n++] = c;
        }
        return new String(cArray, 0, n);
    }

    private static String bFd(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x358D;
        if (NlbpS[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])DoEeQ.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    DoEeQ.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jo", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = Jdstx[n2].getBytes("ISO-8859-1");
            jo.NlbpS[n2] = jo.bFc(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return NlbpS[n2];
    }

    private static int bFh(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = jo.bFg(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private void bEQ(jp jp2, jp jp3, int n, int n2, int n3, int n4, int n5) {
        int n6;
        int n7;
        block42: {
            block43: {
                int n8;
                iS[] iSArray;
                long l;
                block37: {
                    block41: {
                        int n9;
                        block38: {
                            block39: {
                                block40: {
                                    int n10;
                                    block46: {
                                        block36: {
                                            jp jp4;
                                            block35: {
                                                block34: {
                                                    block45: {
                                                        block32: {
                                                            int n11;
                                                            block33: {
                                                                int n12;
                                                                block44: {
                                                                    block31: {
                                                                        jp jp5;
                                                                        block30: {
                                                                            l = SuwYq ^ 0x503031D17CE1L;
                                                                            iSArray = jm.bDZ();
                                                                            try {
                                                                                jp5 = jp2;
                                                                                if (iSArray == null) break block30;
                                                                                if (jp5 == null) break block31;
                                                                            }
                                                                            catch (IllegalStateException illegalStateException) {
                                                                                throw jo.bFb(illegalStateException);
                                                                            }
                                                                            jp5 = jp2;
                                                                        }
                                                                        n12 = jp5.bFl();
                                                                        break block44;
                                                                    }
                                                                    n12 = -1;
                                                                }
                                                                n9 = n12;
                                                                try {
                                                                    try {
                                                                        try {
                                                                            try {
                                                                                if (jp2 == null) break block32;
                                                                                n11 = n9;
                                                                                if (iSArray == null) break block33;
                                                                            }
                                                                            catch (IllegalStateException illegalStateException) {
                                                                                throw jo.bFb(illegalStateException);
                                                                            }
                                                                            if (n11 == -1) break block32;
                                                                        }
                                                                        catch (IllegalStateException illegalStateException) {
                                                                            throw jo.bFb(illegalStateException);
                                                                        }
                                                                        jp4 = jp2;
                                                                        if (iSArray == null) break block34;
                                                                    }
                                                                    catch (IllegalStateException illegalStateException) {
                                                                        throw jo.bFb(illegalStateException);
                                                                    }
                                                                    n11 = jp4.LHtaR ? 1 : 0;
                                                                }
                                                                catch (IllegalStateException illegalStateException) {
                                                                    throw jo.bFb(illegalStateException);
                                                                }
                                                            }
                                                            if (n11 != 0) break block45;
                                                        }
                                                        return;
                                                    }
                                                    jp4 = jp3;
                                                }
                                                try {
                                                    if (iSArray == null) break block35;
                                                    if (jp4 == null) break block36;
                                                }
                                                catch (IllegalStateException illegalStateException) {
                                                    throw jo.bFb(illegalStateException);
                                                }
                                                jp4 = jp3;
                                            }
                                            n10 = jp4.bFl();
                                            break block46;
                                        }
                                        n10 = -1;
                                    }
                                    n8 = n10;
                                    try {
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        n7 = n5;
                                                        n6 = 1;
                                                        if (iSArray == null) break block37;
                                                        if (n7 != n6) break block38;
                                                    }
                                                    catch (IllegalStateException illegalStateException) {
                                                        throw jo.bFb(illegalStateException);
                                                    }
                                                    if (jp3 == null) break block39;
                                                }
                                                catch (IllegalStateException illegalStateException) {
                                                    throw jo.bFb(illegalStateException);
                                                }
                                                n7 = n8;
                                                if (iSArray == null) break block40;
                                            }
                                            catch (IllegalStateException illegalStateException) {
                                                throw jo.bFb(illegalStateException);
                                            }
                                            if (n7 == -1) break block39;
                                        }
                                        catch (IllegalStateException illegalStateException) {
                                            throw jo.bFb(illegalStateException);
                                        }
                                        n7 = jp3.LHtaR ? 1 : 0;
                                    }
                                    catch (IllegalStateException illegalStateException) {
                                        throw jo.bFb(illegalStateException);
                                    }
                                }
                                try {
                                    if (iSArray == null) break block41;
                                    if (n7 != 0) break block38;
                                }
                                catch (IllegalStateException illegalStateException) {
                                    throw jo.bFb(illegalStateException);
                                }
                            }
                            return;
                        }
                        lQ.chK();
                        lQ.chO(n, n2, n3, n4);
                        lQ.chN();
                        this.ErHsl.cgG();
                        lQ.chC(0, 0);
                        this.ErHsl.cgJ(n5);
                        this.ErHsl.cgI((String)((Object)jo.bFf("l", (int)26632, (long)(0x42BB34270C4FF70AL ^ l))), n9, 0);
                        n7 = n5;
                    }
                    n6 = 1;
                }
                try {
                    try {
                        if (iSArray == null) break block42;
                        if (n7 != n6) break block43;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw jo.bFb(illegalStateException);
                    }
                    lQ.chC(1, 0);
                    this.ErHsl.cgI((String)((Object)jo.bFf("l", (int)24011, (long)(0x31FD8CD2DB3C42CCL ^ l))), n8, 1);
                }
                catch (IllegalStateException illegalStateException) {
                    throw jo.bFb(illegalStateException);
                }
            }
            this.ErHsl.cgH();
            lQ.chB(1, 0);
            n7 = 0;
            n6 = 0;
        }
        lQ.chB(n7, n6);
        lQ.ciq(0);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block16: {
            block15: {
                block14: {
                    block13: {
                        jo.SuwYq = gb.aYR(-36095552564910604L, -9047621285772579722L, MethodHandles.lookup().lookupClass()).a(165376727831294L);
                        jo.DoEeQ = new HashMap<K, V>(13);
                        var11 = jo.SuwYq ^ 1861293023303L;
                        var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var11 >>> 56);
                        for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                            v2 = v2;
                            v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                        }
                        var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                        var20_3 = new String[10];
                        var18_4 = 0;
                        var17_5 = "\u00a6\u00c0S\u00d8\u0095\u00a2\u00a1Bn\n\n\u00b4O\u0098-\u001e2\u00947\u001e\t\u00f7\u00a9\u00e6\u00a8\u0012\u00f1\u00fc\u00e0_\u001e\u0095 \u007fnG\u00fd\u009f\u009f\u008fl\f\u00b67\u00fe\u00cc\u00c6\u00a6\u00a0\u00ad\u00a6\u00ea/^\u0086\u00f6\u0093\u00d0\u00a3\t\f\u00ce\t\u00cb\u0098\u00100\u00b5o\u00ecx\u009aS\u00ec;\u0007\u008e\u000bQw\u00dc\u00e3(\u009e\u0086\u00b8\u00faH-M\u00e1\u008c\u00f4G\u00b5NhPFm\u00eb\tv\u00f57\u0004\u00dc\u0099\u00e4i\u00bb.\u007f\u00ac\u0084\u008c\u00ef\u00c4+\u000f\u00e8\u0084\" \u00a4@\u00eb\u00abg^)\u00e1Q\u009b\u0086\u0081\u0083F;Q\u00baB\u00c8\u0086\u008eI71,\u00e5\u00e4\u00a6\u00d3\t\u00b6\u00b1 #\u000b-V#,\u0016eh\u001b\u00f8\u00bd\u00c5U\u0081\u0004\u001e\"4'\u0016\u0092\u009f\u0015\u009e\u00f5AY<\u00f7\u00db\u0096\u0010\u001c\u009e\u00df\u0004\u00f6\u00dck\u0018\u00f5\u0089\u00c9\u0003=\u001b\u00c0\u009b(\u0002\u00f9o&\r\u0089\u00d8\u000b\u00da\u0093\u00d6\u00a2\u00bbm=\u00c5\u008c\u00a5\u0097\u0085`\u00e1L\u00e7\u0095\u00de\u001c\u00c0\u00acRp\u00f7\u00bf\u00f2\u00f8\u00ecm\u009a\u001a\u00fd";
                        var19_6 = "\u00a6\u00c0S\u00d8\u0095\u00a2\u00a1Bn\n\n\u00b4O\u0098-\u001e2\u00947\u001e\t\u00f7\u00a9\u00e6\u00a8\u0012\u00f1\u00fc\u00e0_\u001e\u0095 \u007fnG\u00fd\u009f\u009f\u008fl\f\u00b67\u00fe\u00cc\u00c6\u00a6\u00a0\u00ad\u00a6\u00ea/^\u0086\u00f6\u0093\u00d0\u00a3\t\f\u00ce\t\u00cb\u0098\u00100\u00b5o\u00ecx\u009aS\u00ec;\u0007\u008e\u000bQw\u00dc\u00e3(\u009e\u0086\u00b8\u00faH-M\u00e1\u008c\u00f4G\u00b5NhPFm\u00eb\tv\u00f57\u0004\u00dc\u0099\u00e4i\u00bb.\u007f\u00ac\u0084\u008c\u00ef\u00c4+\u000f\u00e8\u0084\" \u00a4@\u00eb\u00abg^)\u00e1Q\u009b\u0086\u0081\u0083F;Q\u00baB\u00c8\u0086\u008eI71,\u00e5\u00e4\u00a6\u00d3\t\u00b6\u00b1 #\u000b-V#,\u0016eh\u001b\u00f8\u00bd\u00c5U\u0081\u0004\u001e\"4'\u0016\u0092\u009f\u0015\u009e\u00f5AY<\u00f7\u00db\u0096\u0010\u001c\u009e\u00df\u0004\u00f6\u00dck\u0018\u00f5\u0089\u00c9\u0003=\u001b\u00c0\u009b(\u0002\u00f9o&\r\u0089\u00d8\u000b\u00da\u0093\u00d6\u00a2\u00bbm=\u00c5\u008c\u00a5\u0097\u0085`\u00e1L\u00e7\u0095\u00de\u001c\u00c0\u00acRp\u00f7\u00bf\u00f2\u00f8\u00ecm\u009a\u001a\u00fd".length();
                        var16_7 = 32;
                        var15_8 = -1;
lbl20:
                        // 2 sources

                        while (true) {
                            v3 = ++var15_8;
                            v4 = var17_5.substring(v3, v3 + var16_7);
                            v5 = -1;
                            break block13;
                            break;
                        }
lbl25:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = jo.bFc(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            var17_5 = "mbZ\u00fd\u00c5F3\u0092$\u009f\u001f\u00e7\u0085\u00e4\u008cIM\u00a0\u00ad\u00ed\u001e\u00102\u000bm\tA\u0089\u00f7\u00ef@\u00aa\u0098\u00ce<\u00d8\u0099@\u0019.\u00ba\u00de\u00f8-g\u0019R\u00fc\u0018\u00bf=:K\u0084\b\u007f\u0094Jp\u00bb\u00a5\u00836\u00ee\u00e7\u00d8\u00be\u00a7q)7U\u001b";
                            var19_6 = "mbZ\u00fd\u00c5F3\u0092$\u009f\u001f\u00e7\u0085\u00e4\u008cIM\u00a0\u00ad\u00ed\u001e\u00102\u000bm\tA\u0089\u00f7\u00ef@\u00aa\u0098\u00ce<\u00d8\u0099@\u0019.\u00ba\u00de\u00f8-g\u0019R\u00fc\u0018\u00bf=:K\u0084\b\u007f\u0094Jp\u00bb\u00a5\u00836\u00ee\u00e7\u00d8\u00be\u00a7q)7U\u001b".length();
                            var16_7 = 48;
                            var15_8 = -1;
lbl34:
                            // 2 sources

                            while (true) {
                                v6 = ++var15_8;
                                v4 = var17_5.substring(v6, v6 + var16_7);
                                v5 = 0;
                                break block13;
                                break;
                            }
                            break;
                        }
lbl39:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = jo.bFc(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            break block14;
                            break;
                        }
                    }
                    var21_9 = var13_1.doFinal(v4.getBytes("ISO-8859-1"));
                    switch (v5) {
                        default: {
                            ** continue;
                        }
                        ** case 0:
lbl51:
                        // 1 sources

                        ** continue;
                    }
                }
                jo.Jdstx = var20_3;
                jo.NlbpS = new String[10];
                jo.oVZWQ = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v7 = SecretKeyFactory.getInstance("DES");
                v8 = new byte[8];
                v9 = v8;
                v8[0] = (byte)(var11 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v9 = v9;
                    v9[var1_11] = (byte)(var11 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[2];
                var3_13 = 0;
                var4_14 = "&\u00c8\u00e8+\u0087\u00f4\u001d\n\u0086d\u00ee\u0002\u00f3\u0017,\u00b8";
                var5_15 = "&\u00c8\u00e8+\u0087\u00f4\u001d\n\u0086d\u00ee\u0002\u00f3\u0017,\u00b8".length();
                var2_16 = 0;
                while (true) {
                    break block15;
                    break;
                }
lbl73:
                // 1 sources

                while (true) {
                    var6_12[v10] = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
                    if (var2_16 < var5_15) ** continue;
                    break block16;
                    break;
                }
            }
            var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
            v10 = var3_13++;
            var8_18 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            ** while (true)
        }
        jo.YKowF = var6_12;
        jo.yOISF = new Integer[2];
        jo.fYlIq = new jo();
        jo.wEOIE = new ThreadLocal<T>();
        jo.hdKgo = new ThreadLocal<T>();
    }

    public static void bEt(Runnable runnable) {
        fYlIq.bEy(jn.pWlAK, runnable);
    }

    public static void bEs(Runnable runnable) {
        fYlIq.bEy(jn.bxePp, runnable);
    }

    public static class_276 bEp(RenderPipeline renderPipeline) {
        return fYlIq.bEI(renderPipeline, rD.dlmvG.method_1522());
    }

    public static class_276 bEq(RenderPipeline renderPipeline, class_276 class_2762) {
        return fYlIq.bEI(renderPipeline, class_2762);
    }

    public static RenderPipeline bEr(RenderPipeline renderPipeline) {
        RenderPipeline renderPipeline2;
        long l = SuwYq ^ 0x41C5E84FF17FL;
        try {
            renderPipeline2 = jo.bEf() ? kV.bWp(renderPipeline) : renderPipeline;
        }
        catch (IllegalStateException illegalStateException) {
            throw jo.bFb(illegalStateException);
        }
        return renderPipeline2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(jo.class, "bFe", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_1() {
        try {
            return MethodHandles.lookup().findStatic(jo.class, "bFh", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
