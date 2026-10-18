/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.MathHelper
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.util.math.MathHelper;
import sixtwo.gb;
import sixtwo.kt;
import sixtwo.kv;
import sixtwo.mG;

public class kw {
    private boolean aWESC;
    private boolean KKmjC;
    private float DDOla = 1.0f;
    private float gQrYP = 0.75f;
    private float ShWuN = 0.0f;
    private float TJUdw = 0.0f;
    private mG NbShj = mG.hoGuU;
    private kv sGRHh = kv.CiCMa;
    private float iXIAG = 0.75f;
    private static final long EJufu = gb.aYR(6278266694011406635L, 1906504147671339946L, MethodHandles.lookup().lookupClass()).a(62711754600401L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public kw bRL() {
        return kw.bRK().bRM(this);
    }

    public kw bRP(mG mG2, kv kv2, float f2) {
        this.NbShj = mG2;
        this.sGRHh = kv2;
        this.iXIAG = MathHelper.clamp((float)f2, (float)0.0f, (float)1.0f);
        return this;
    }

    public static kw bRK() {
        return new kw();
    }

    public boolean bRQ() {
        return this.aWESC;
    }

    public mG bRW() {
        return this.NbShj;
    }

    public float bRY() {
        return this.iXIAG;
    }

    public kv bRX() {
        return this.sGRHh;
    }

    public kw bRM(kw kw2) {
        kw kw3;
        block4: {
            block5: {
                long l2 = EJufu ^ 0x3691A5BD757BL;
                boolean bl2 = kt.bRw();
                try {
                    try {
                        kw3 = kw2;
                        if (bl2) break block4;
                        if (kw3 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw kw.bRZ(matchException);
                    }
                    return this;
                }
                catch (MatchException matchException) {
                    throw kw.bRZ(matchException);
                }
            }
            this.aWESC = kw2.aWESC;
            this.KKmjC = kw2.KKmjC;
            this.DDOla = kw2.DDOla;
            this.gQrYP = kw2.gQrYP;
            this.ShWuN = kw2.ShWuN;
            this.TJUdw = kw2.TJUdw;
            this.NbShj = kw2.NbShj;
            this.sGRHh = kw2.sGRHh;
            this.iXIAG = kw2.iXIAG;
            kw3 = this;
        }
        return kw3;
    }

    private static MatchException bRZ(MatchException matchException) {
        return matchException;
    }

    public float bRU() {
        return this.ShWuN;
    }

    public kw bRN(boolean bl2) {
        this.aWESC = bl2;
        return this;
    }

    public boolean bRR() {
        return this.KKmjC;
    }

    public float bRS() {
        return this.DDOla;
    }

    public float bRT() {
        return this.gQrYP;
    }

    public float bRV() {
        return this.TJUdw;
    }

    public kw bRO(float f2, float f3, float f4, float f5) {
        this.KKmjC = true;
        this.DDOla = MathHelper.clamp((float)f2, (float)0.0f, (float)1.0f);
        this.gQrYP = MathHelper.clamp((float)f3, (float)0.0f, (float)1.0f);
        this.ShWuN = MathHelper.clamp((float)f4, (float)0.0f, (float)1.0f);
        this.TJUdw = Math.max(f5, 0.0f);
        return this;
    }
}

