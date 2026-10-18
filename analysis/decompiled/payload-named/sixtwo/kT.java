/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.pipeline.RenderPipeline
 *  net.minecraft.util.Identifier
 */
package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.Collections;
import java.util.Map;
import java.util.WeakHashMap;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.util.Identifier;
import sixtwo.gb;
import sixtwo.jN;
import sixtwo.kR;

public final class kT {
    public static final Identifier dmDCF;
    public static final Identifier wNJTB;
    private static final Map<Object, jN> MsfCa;
    private static final Map<RenderPipeline, jN> XspFr;
    private static final long kpeZC;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        kpeZC = gb.aYR(1494750730265887428L, -5285847214512154865L, MethodHandles.lookup().lookupClass()).a(60054614921373L);
        long l2 = kpeZC ^ 0x40FBF06401A2L;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        for (int i2 = 1; i2 < 8; ++i2) {
            byArray2 = byArray2;
            byArray2[i2] = (byte)(l2 << i2 * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        String[] stringArray = new String[2];
        int n2 = 0;
        String string = "\u000ek\u00b8\u00ca\u001c\u00baj\u00f1\u00ce[\u00e2\u0018\u00fc\u00e8\u00954?\u0099\u0004\u00826K\u00caj\u0010\u000ek\u00b8\u00ca\u001c\u00baj\u00f1\u001fT\u00fe[\u001a\u00aaSj";
        int n3 = "\u000ek\u00b8\u00ca\u001c\u00baj\u00f1\u00ce[\u00e2\u0018\u00fc\u00e8\u00954?\u0099\u0004\u00826K\u00caj\u0010\u000ek\u00b8\u00ca\u001c\u00baj\u00f1\u001fT\u00fe[\u001a\u00aaSj".length();
        int n4 = 24;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = kT.bVW(byArray3).intern();
            if ((n5 += n4) >= n3) {
                dmDCF = Identifier.of((String)stringArray[1]);
                wNJTB = Identifier.of((String)stringArray[0]);
                MsfCa = Collections.synchronizedMap(new WeakHashMap());
                XspFr = Collections.synchronizedMap(new WeakHashMap());
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static jN bVR(Object object) {
        return MsfCa.get(object);
    }

    public static void bVS(Object object, jN jN2) {
        block4: {
            jN jN3;
            block5: {
                long l2 = kpeZC ^ 0x51274FD1E10BL;
                boolean bl2 = kR.bVy();
                try {
                    try {
                        jN3 = jN2;
                        if (bl2) break block4;
                        if (jN3 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw kT.bVV(matchException);
                    }
                    MsfCa.remove(object);
                    return;
                }
                catch (MatchException matchException) {
                    throw kT.bVV(matchException);
                }
            }
            jN3 = MsfCa.put(object, jN2);
        }
    }

    private static String bVW(byte[] byArray) {
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

    public static void bVU(RenderPipeline renderPipeline, jN jN2) {
        block4: {
            jN jN3;
            block5: {
                long l2 = kpeZC ^ 0x3D75CC9DDC91L;
                boolean bl2 = kR.bVy();
                try {
                    try {
                        jN3 = jN2;
                        if (bl2) break block4;
                        if (jN3 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw kT.bVV(matchException);
                    }
                    XspFr.remove(renderPipeline);
                    return;
                }
                catch (MatchException matchException) {
                    throw kT.bVV(matchException);
                }
            }
            jN3 = XspFr.put(renderPipeline, jN2);
        }
    }

    private static MatchException bVV(MatchException matchException) {
        return matchException;
    }

    public static jN bVT(RenderPipeline renderPipeline) {
        return XspFr.get(renderPipeline);
    }
}

