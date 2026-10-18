/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.network.packet.Packet
 */
package sixtwo;

import native.Loader;
import net.minecraft.network.packet.Packet;
import sixtwo.fg;
import sixtwo.fp;
import sixtwo.gG;
import sixtwo.hF;
import sixtwo.hG;

public class fp$sQ {
    final fp mEqah;
    private static long rAQCM;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native boolean doZ(Packet var0);

    private static native void dpa(Packet var0);

    private static native MatchException dpb(MatchException var0);

    @hG
    public void doY(gG gG2) {
        block24: {
            block25: {
                fp fp2;
                boolean bl2;
                block23: {
                    int[] nArray;
                    block22: {
                        fp fp3;
                        block20: {
                            boolean bl3;
                            block18: {
                                block19: {
                                    long l2 = rAQCM ^ 0x5AAB0FC49D9AL;
                                    nArray = fg.aIW();
                                    try {
                                        try {
                                            bl3 = fp.aMu(this.mEqah);
                                            if (nArray != null) break block18;
                                            if (bl3) break block19;
                                        }
                                        catch (MatchException matchException) {
                                            throw fp$sQ.dpb(matchException);
                                        }
                                        this.mEqah.aLP(true, true, true);
                                        return;
                                    }
                                    catch (MatchException matchException) {
                                        throw fp$sQ.dpb(matchException);
                                    }
                                }
                                try {
                                    fp3 = this.mEqah;
                                    if (nArray != null) break block20;
                                    bl3 = fp3.aLS();
                                }
                                catch (MatchException matchException) {
                                    throw fp$sQ.dpb(matchException);
                                }
                            }
                            try {
                                block21: {
                                    try {
                                        if (!bl3) break block21;
                                        this.mEqah.aLN(false);
                                        if (nArray == null) break block22;
                                    }
                                    catch (MatchException matchException) {
                                        throw fp$sQ.dpb(matchException);
                                    }
                                }
                                fp3 = this.mEqah;
                            }
                            catch (MatchException matchException) {
                                throw fp$sQ.dpb(matchException);
                            }
                        }
                        fp3.aLP(true, false, true);
                    }
                    try {
                        try {
                            try {
                                this.mEqah.cDqQL.removeIf(fp$sQ::doZ);
                                bl2 = this.mEqah.cDqQL.isEmpty();
                                if (nArray != null) break block23;
                                if (!bl2) break block24;
                            }
                            catch (MatchException matchException) {
                                throw fp$sQ.dpb(matchException);
                            }
                            fp2 = this.mEqah;
                            if (nArray != null) break block25;
                        }
                        catch (MatchException matchException) {
                            throw fp$sQ.dpb(matchException);
                        }
                        bl2 = fp2.UlcPe.isEmpty();
                    }
                    catch (MatchException matchException) {
                        throw fp$sQ.dpb(matchException);
                    }
                }
                try {
                    if (!bl2) break block24;
                    this.mEqah.heFtE = this.mEqah.yNflG.UN().intValue();
                    fp2 = this.mEqah;
                }
                catch (MatchException matchException) {
                    throw fp$sQ.dpb(matchException);
                }
            }
            fp2.fNonW = this.mEqah.AJNZt.UN().intValue();
        }
    }

    public fp$sQ(fp fp2) {
        this.mEqah = fp2;
        hF.bdI(this);
    }

    static {
        Loader.doInit(fp$sQ.class);
        fp$sQ._2db8ec2939b94b3ea880a84b6606dbb5();
    }

    private static native void _2db8ec2939b94b3ea880a84b6606dbb5();
}

