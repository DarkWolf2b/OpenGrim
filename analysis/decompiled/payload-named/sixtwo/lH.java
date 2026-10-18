/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.ArrayList;
import java.util.List;
import java.util.Objects;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.lI;
import sixtwo.lK;
import sixtwo.lN;

public final class lH {
    private final List<lI> TeJgs = new ArrayList<lI>();
    private static final long TMDwZ = gb.aYR(-4620712992161204533L, -2482462191155530377L, MethodHandles.lookup().lookupClass()).a(187499983405416L);
    private static final String htYOp;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = TMDwZ ^ 0x311B43358C50L;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                byte[] byArray3 = cipher.doFinal("3\u001ecn\u0098#yK".getBytes("ISO-8859-1"));
                htYOp = lH.cgr(byArray3).intern();
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    public lH cgm(lI lI2) {
        long l2 = TMDwZ ^ 0x49B5CD3E9C6DL;
        this.TeJgs.add(Objects.requireNonNull(lI2, htYOp));
        return this;
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Loose catch block
     */
    public void cgp() {
        block43: {
            boolean bl2;
            block45: {
                block44: {
                    boolean bl3;
                    block29: {
                        block40: {
                            lK lK2;
                            block39: {
                                long l2 = TMDwZ ^ 0x222F03A17E29L;
                                lK lK3 = null;
                                lN lN2 = lN.immediate();
                                bl3 = lN.b();
                                try {
                                    for (lI lI2 : this.TeJgs) {
                                        lI lI3;
                                        block37: {
                                            block38: {
                                                lK lK4;
                                                block32: {
                                                    block31: {
                                                        block33: {
                                                            block34: {
                                                                lK lK5;
                                                                lN lN3;
                                                                block35: {
                                                                    block36: {
                                                                        block48: {
                                                                            lI lI4;
                                                                            block30: {
                                                                                block46: {
                                                                                    if (bl3) break block29;
                                                                                    lI4 = lI2;
                                                                                    if (bl3) break block30;
                                                                                    break block46;
                                                                                    catch (MatchException matchException) {
                                                                                        throw lH.cgq(matchException);
                                                                                    }
                                                                                }
                                                                                try {
                                                                                    block47: {
                                                                                        if (!(lI4 instanceof lK)) break block31;
                                                                                        break block47;
                                                                                        catch (MatchException matchException) {
                                                                                            throw lH.cgq(matchException);
                                                                                        }
                                                                                    }
                                                                                    lI4 = lI2;
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw lH.cgq(matchException);
                                                                                }
                                                                            }
                                                                            lK4 = (lK)lI4;
                                                                            try {
                                                                                lI3 = lK4;
                                                                                if (bl3) break block32;
                                                                                if (!lI3.batchKey().batchable()) break block31;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw lH.cgq(matchException);
                                                                            }
                                                                            lN3 = lK4.batchKey();
                                                                            if (bl3) break block33;
                                                                            if (lN3.equals(lN2)) break block34;
                                                                            break block48;
                                                                            catch (MatchException matchException) {
                                                                                throw lH.cgq(matchException);
                                                                            }
                                                                        }
                                                                        try {
                                                                            block49: {
                                                                                lK5 = lK3;
                                                                                if (bl3) break block35;
                                                                                break block49;
                                                                                catch (MatchException matchException) {
                                                                                    throw lH.cgq(matchException);
                                                                                }
                                                                            }
                                                                            if (lK5 == null) break block36;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw lH.cgq(matchException);
                                                                        }
                                                                        lK lK6 = lK3;
                                                                        lK3 = null;
                                                                        lN2 = lN.immediate();
                                                                        lK6.endBatch();
                                                                    }
                                                                    lK4.beginBatch();
                                                                    lK5 = lK4;
                                                                }
                                                                lK3 = lK5;
                                                                lN2 = lN3;
                                                            }
                                                            lK4.renderIntoBatch();
                                                        }
                                                        if (!bl3) continue;
                                                    }
                                                    lI3 = lK3;
                                                }
                                                try {
                                                    if (bl3) break block37;
                                                    if (lI3 == null) break block38;
                                                }
                                                catch (MatchException matchException) {
                                                    throw lH.cgq(matchException);
                                                }
                                                lK4 = lK3;
                                                lK3 = null;
                                                lN2 = lN.immediate();
                                                lK4.endBatch();
                                            }
                                            lI3 = lI2;
                                        }
                                        lI3.execute();
                                        if (!bl3) continue;
                                    }
                                }
                                catch (Throwable throwable) {
                                    block41: {
                                        block42: {
                                            try {
                                                try {
                                                    if (bl3) break block41;
                                                    if (lK3 == null) break block42;
                                                }
                                                catch (MatchException matchException) {
                                                    throw lH.cgq(matchException);
                                                }
                                                lK3.endBatch();
                                            }
                                            catch (MatchException matchException) {
                                                throw lH.cgq(matchException);
                                            }
                                        }
                                        this.cgo();
                                    }
                                    throw throwable;
                                }
                                try {
                                    lK2 = lK3;
                                    if (bl3) break block39;
                                    if (lK2 == null) break block40;
                                }
                                catch (MatchException matchException) {
                                    throw lH.cgq(matchException);
                                }
                                lK2 = lK3;
                            }
                            lK2.endBatch();
                        }
                        this.cgo();
                    }
                    try {
                        try {
                            if (iS.bwL() != null) break block43;
                            if (!bl3) break block44;
                        }
                        catch (MatchException matchException) {
                            throw lH.cgq(matchException);
                        }
                        bl2 = false;
                        break block45;
                    }
                    catch (MatchException matchException) {
                        throw lH.cgq(matchException);
                    }
                }
                bl2 = true;
            }
            lN.b(bl2);
        }
    }

    public void cgo() {
        this.TeJgs.clear();
    }

    private static MatchException cgq(MatchException matchException) {
        return matchException;
    }

    public boolean cgn() {
        return this.TeJgs.isEmpty();
    }

    private static String cgr(byte[] byArray) {
        int n2 = 0;
        int n3 = byArray.length;
        char[] cArray = new char[n3];
        for (int i2 = 0; i2 < n3; ++i2) {
            char c2;
            int n4 = 0xFF & byArray[i2];
            if (n4 < 192) {
                cArray[n2++] = (char)n4;
                continue;
            }
            if (n4 < 224) {
                c2 = (char)((char)(n4 & 0x1F) << 6);
                n4 = byArray[++i2];
                c2 = (char)(c2 | (char)(n4 & 0x3F));
                cArray[n2++] = c2;
                continue;
            }
            if (i2 >= n3 - 2) continue;
            c2 = (char)((char)(n4 & 0xF) << 12);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F) << 6);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F));
            cArray[n2++] = c2;
        }
        return new String(cArray, 0, n2);
    }
}

