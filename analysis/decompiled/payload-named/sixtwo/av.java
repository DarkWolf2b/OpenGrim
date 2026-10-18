/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.gui.Click
 *  net.minecraft.client.gui.DrawContext
 *  net.minecraft.client.gui.screen.Screen
 *  net.minecraft.client.input.CharInput
 *  net.minecraft.client.input.KeyInput
 *  net.minecraft.client.option.KeyBinding
 *  net.minecraft.text.Text
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.Vec2f
 *  org.jspecify.annotations.NonNull
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.gui.Click;
import net.minecraft.client.gui.DrawContext;
import net.minecraft.client.gui.screen.Screen;
import net.minecraft.client.input.CharInput;
import net.minecraft.client.input.KeyInput;
import net.minecraft.client.option.KeyBinding;
import net.minecraft.text.Text;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec2f;
import org.jspecify.annotations.NonNull;
import sixtwo.ad;
import sixtwo.az;
import sixtwo.cs;
import sixtwo.gb;
import sixtwo.iX;
import sixtwo.kk;
import sixtwo.lC;
import sixtwo.mA;
import sixtwo.rD;
import sixtwo.rk;
import sixtwo.rm;
import sixtwo.rr;

public abstract class av
extends Screen
implements cs {
    protected final rk Weytw;
    protected boolean VWsmm;
    private static boolean LSCIa;
    private static final long oVYdO;
    private static final long myUnc;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    protected av() {
        long l2 = oVYdO ^ 0x1B5D73AB471DL;
        super((Text)Text.empty());
        this.Weytw = new rk((int)myUnc);
        this.VWsmm = true;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        oVYdO = gb.aYR(5327485615965762991L, -6615214864910727710L, MethodHandles.lookup().lookupClass()).a(37594205416973L);
        long l2 = oVYdO ^ 0x7B5CA3A0E4D4L;
        av.sk(false);
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l3 = -3729010028508391083L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                myUnc = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    public static boolean sl() {
        return LSCIa;
    }

    protected abstract Vec2f n();

    public static boolean sm() {
        boolean bl2 = av.sl();
        try {
            if (!bl2) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw av.sn(matchException);
        }
        return false;
    }

    public abstract void m(lC var1);

    protected void si() {
        String string;
        block5: {
            long l2 = oVYdO ^ 0x6ABD0C35883L;
            string = az.tE();
            try {
                try {
                    if (ad.rmmkh == null && !rD.dme().ddY()) break block5;
                }
                catch (MatchException matchException) {
                    throw av.sn(matchException);
                }
                return;
            }
            catch (MatchException matchException) {
                throw av.sn(matchException);
            }
        }
        for (KeyBinding keyBinding : iX.HpSlL) {
            keyBinding.setPressed(rr.diW(keyBinding.getDefaultKey().getCode()));
            if (string != null) continue;
        }
    }

    public rk sj() {
        return this.Weytw;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    protected double sh() {
        double d2;
        double d3;
        double d4;
        block18: {
            Vec2f vec2f;
            Vec2f vec2f2;
            String string;
            block17: {
                float f2;
                block16: {
                    Vec2f vec2f3;
                    block15: {
                        long l2 = oVYdO ^ 0x538F088B9D98L;
                        d4 = 2.0;
                        string = az.tE();
                        vec2f2 = this.n();
                        try {
                            vec2f3 = vec2f2;
                            if (string == null) break block15;
                            if (vec2f3 == null) return d4;
                        }
                        catch (MatchException matchException) {
                            throw av.sn(matchException);
                        }
                        vec2f3 = vec2f2;
                    }
                    try {
                        try {
                            try {
                                float f3 = vec2f3.x - 0.0f;
                                f2 = f3 == 0.0f ? 0 : (f3 < 0.0f ? -1 : 1);
                                if (string == null) break block16;
                                if (f2 <= 0) return d4;
                            }
                            catch (MatchException matchException) {
                                throw av.sn(matchException);
                            }
                            vec2f = vec2f2;
                            if (string == null) break block17;
                        }
                        catch (MatchException matchException) {
                            throw av.sn(matchException);
                        }
                        float f4 = vec2f.y - 0.0f;
                        f2 = f4 == 0.0f ? 0 : (f4 < 0.0f ? -1 : 1);
                    }
                    catch (MatchException matchException) {
                        throw av.sn(matchException);
                    }
                }
                try {
                    if (f2 <= 0) {
                        return d4;
                    }
                }
                catch (MatchException matchException) {
                    throw av.sn(matchException);
                }
                vec2f = rm.dip();
            }
            Vec2f vec2f4 = vec2f;
            double d5 = vec2f4.x / vec2f2.x;
            double d6 = vec2f4.y / vec2f2.y;
            d3 = Math.min(d5, d6);
            try {
                try {
                    d2 = d3;
                    if (string == null) return d2;
                    if (Double.isFinite(d2)) break block18;
                    return d4;
                }
                catch (MatchException matchException) {
                    throw av.sn(matchException);
                }
            }
            catch (MatchException matchException) {
                throw av.sn(matchException);
            }
        }
        d2 = MathHelper.clamp((double)d3, (double)0.5, (double)d4);
        return d2;
    }

    public boolean closing() {
        return this.VWsmm;
    }

    private static MatchException sn(MatchException matchException) {
        return matchException;
    }

    public float sf() {
        return 0.5f + 0.5f * this.Weytw.dhj();
    }

    public static void sk(boolean bl2) {
        LSCIa = bl2;
    }

    protected void sg() {
        kk.bPH();
    }

    public final boolean mouseScrolled(double mouseX, double mouseY, double horizontalAmount, double verticalAmount) {
        boolean bl2;
        block4: {
            block5: {
                long l2 = oVYdO ^ 0x18471DD50F81L;
                Vec2f vec2f = rm.dis();
                String string = az.tE();
                try {
                    try {
                        bl2 = this.onMouseScrolled(vec2f.x, vec2f.y, verticalAmount);
                        if (string == null) break block4;
                        if (!bl2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw av.sn(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw av.sn(matchException);
                }
            }
            bl2 = super.mouseScrolled(mouseX, mouseY, horizontalAmount, verticalAmount);
        }
        return bl2;
    }

    public final boolean mouseReleased(Click click) {
        boolean bl2;
        block4: {
            block5: {
                long l2 = oVYdO ^ 0x2BD621F900FBL;
                mA mA2 = mA.cmN(click.button());
                String string = az.tE();
                Vec2f vec2f = rm.dis();
                try {
                    try {
                        bl2 = this.onMouseReleased(vec2f.x, vec2f.y, mA2);
                        if (string == null) break block4;
                        if (!bl2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw av.sn(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw av.sn(matchException);
                }
            }
            bl2 = super.mouseReleased(click);
        }
        return bl2;
    }

    public final boolean mouseDragged(Click click, double offsetX, double offsetY) {
        boolean bl2;
        block4: {
            block5: {
                long l2 = oVYdO ^ 0x38DC6776A938L;
                mA mA2 = mA.cmN(click.button());
                String string = az.tE();
                Vec2f vec2f = rm.dis();
                try {
                    try {
                        bl2 = this.onMouseDragged(vec2f.x, vec2f.y, mA2, offsetX, offsetY);
                        if (string == null) break block4;
                        if (!bl2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw av.sn(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw av.sn(matchException);
                }
            }
            bl2 = super.mouseDragged(click, offsetX, offsetY);
        }
        return bl2;
    }

    public final boolean charTyped(CharInput input) {
        boolean bl2;
        block4: {
            block5: {
                long l2 = oVYdO ^ 0x1D128A4B1161L;
                String string = az.tE();
                try {
                    try {
                        bl2 = this.onCharTyped((char)input.codepoint());
                        if (string == null) break block4;
                        if (!bl2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw av.sn(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw av.sn(matchException);
                }
            }
            bl2 = super.charTyped(input);
        }
        return bl2;
    }

    public final boolean mouseClicked(Click click, boolean doubled) {
        boolean bl2;
        block4: {
            block5: {
                long l2 = oVYdO ^ 0x1B16028A05F3L;
                mA mA2 = mA.cmN(click.button());
                Vec2f vec2f = rm.dis();
                String string = az.tE();
                try {
                    try {
                        bl2 = this.onMouseClicked(vec2f.x, vec2f.y, mA2);
                        if (string == null) break block4;
                        if (!bl2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw av.sn(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw av.sn(matchException);
                }
            }
            bl2 = super.mouseClicked(click, doubled);
        }
        return bl2;
    }

    public void renderBackground(DrawContext context, int mouseX, int mouseY, float deltaTicks) {
        block5: {
            av av2;
            block4: {
                long l2 = oVYdO ^ 0x362932BE2BA3L;
                String string = az.tE();
                try {
                    try {
                        av2 = this;
                        if (string == null) break block4;
                        if (av2.client.world != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw av.sn(matchException);
                    }
                    av2 = this;
                }
                catch (MatchException matchException) {
                    throw av.sn(matchException);
                }
            }
            av2.renderPanoramaBackground(context, deltaTicks);
        }
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     */
    public final void render(@NonNull DrawContext context, int mouseX, int mouseY, float deltaTicks) {
        rm.dil(this.sh());
        Vec2f vec2f = rm.dis();
        lC lC2 = lC.ccP(context, vec2f.x, vec2f.y, deltaTicks);
        try {
            this.m(lC2);
        }
        finally {
            lC2.ccR();
            rm.dim();
        }
    }

    public final boolean keyPressed(KeyInput input) {
        boolean bl2;
        block4: {
            block5: {
                long l2 = oVYdO ^ 0x3B9AE85EEC96L;
                String string = az.tE();
                try {
                    try {
                        bl2 = this.onKeyPressed(input.key(), input.scancode(), input.modifiers());
                        if (string == null) break block4;
                        if (!bl2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw av.sn(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw av.sn(matchException);
                }
            }
            bl2 = super.keyPressed(input);
        }
        return bl2;
    }

    public boolean shouldPause() {
        return false;
    }
}

