/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.pipeline.RenderPipeline
 *  net.minecraft.class_2960
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
import net.minecraft.class_2960;
import sixtwo.gb;
import sixtwo.jN;
import sixtwo.kR;

public final class kT {
    public static final class_2960 dmDCF;
    public static final class_2960 wNJTB;
    private static final Map<Object, jN> MsfCa;
    private static final Map<RenderPipeline, jN> XspFr;
    private static final long kpeZC;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        kpeZC = gb.aYR(1494750730265887428L, -5285847214512154865L, MethodHandles.lookup().lookupClass()).a(60054614921373L);
        long l = kpeZC ^ 0x40FBF06401A2L;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        for (int i = 1; i < 8; ++i) {
            byArray2 = byArray2;
            byArray2[i] = (byte)(l << i * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        String[] stringArray = new String[2];
        int n = 0;
        String string = "\u000ek\u00b8\u00ca\u001c\u00baj\u00f1\u00ce[\u00e2\u0018\u00fc\u00e8\u00954?\u0099\u0004\u00826K\u00caj\u0010\u000ek\u00b8\u00ca\u001c\u00baj\u00f1\u001fT\u00fe[\u001a\u00aaSj";
        int n2 = "\u000ek\u00b8\u00ca\u001c\u00baj\u00f1\u00ce[\u00e2\u0018\u00fc\u00e8\u00954?\u0099\u0004\u00826K\u00caj\u0010\u000ek\u00b8\u00ca\u001c\u00baj\u00f1\u001fT\u00fe[\u001a\u00aaSj".length();
        int n3 = 24;
        int n4 = -1;
        while (true) {
            int n5 = ++n4;
            byte[] byArray3 = cipher.doFinal(string.substring(n5, n5 + n3).getBytes("ISO-8859-1"));
            stringArray[n++] = kT.bVW(byArray3).intern();
            if ((n4 += n3) >= n2) {
                dmDCF = class_2960.method_60654((String)stringArray[1]);
                wNJTB = class_2960.method_60654((String)stringArray[0]);
                MsfCa = Collections.synchronizedMap(new WeakHashMap());
                XspFr = Collections.synchronizedMap(new WeakHashMap());
                return;
            }
            n3 = string.charAt(n4);
        }
    }

    public static jN bVR(Object object) {
        return MsfCa.get(object);
    }

    public static void bVS(Object object, jN jN2) {
        block4: {
            jN jN3;
            block5: {
                long l = kpeZC ^ 0x51274FD1E10BL;
                boolean bl = kR.bVy();
                try {
                    try {
                        jN3 = jN2;
                        if (bl) break block4;
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

    public static void bVU(RenderPipeline renderPipeline, jN jN2) {
        block4: {
            jN jN3;
            block5: {
                long l = kpeZC ^ 0x3D75CC9DDC91L;
                boolean bl = kR.bVy();
                try {
                    try {
                        jN3 = jN2;
                        if (bl) break block4;
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
