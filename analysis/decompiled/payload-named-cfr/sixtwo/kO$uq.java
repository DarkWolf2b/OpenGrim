/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.pipeline.RenderPipeline$Snippet
 *  com.mojang.blaze3d.vertex.VertexFormat
 *  com.mojang.blaze3d.vertex.VertexFormat$DrawMode
 *  net.minecraft.client.gl.UniformType
 */
package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.vertex.VertexFormat;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.gl.UniformType;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jN;
import sixtwo.kO;
import sixtwo.kQ;

public final class kO$uq {
    private final String IfTav;
    private VertexFormat mrfud;
    private VertexFormat.DrawMode bmQDp;
    private String SqHTg;
    private String UxEjn;
    private jN scPFe;
    private final List<String> JfGsn = new ArrayList<String>();
    private final Map<String, UniformType> rGVcy = new LinkedHashMap<String, UniformType>();
    private RenderPipeline.Snippet[] EEbpA = new RenderPipeline.Snippet[0];
    private static final long XMJxo = gb.aYR(288277173973697703L, 8081578049949149732L, MethodHandles.lookup().lookupClass()).a(116530153942921L);
    private static final String[] OkSKq;
    private static final String[] DSiHK;
    private static final Map gIgvL;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private kO$uq(String string) {
        this.IfTav = string;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        gIgvL = new HashMap(13);
        long l2 = XMJxo ^ 0x638AE4036D76L;
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
        String string = "-\u00b3&\u0094q\u00bb\u00f1\u0002/\u00ba\u00a3\fx?\u0012\u00a2  \u0098\u0088\u009aO8(\u00b07\u007f\"r'? h@\u009f9\u0004\u008e}y\u00e0\u00ed;\u00e9S,J\u0014}";
        int n3 = "-\u00b3&\u0094q\u00bb\u00f1\u0002/\u00ba\u00a3\fx?\u0012\u00a2  \u0098\u0088\u009aO8(\u00b07\u007f\"r'? h@\u009f9\u0004\u008e}y\u00e0\u00ed;\u00e9S,J\u0014}".length();
        int n4 = 16;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = kO$uq.dug(byArray3).intern();
            if ((n5 += n4) >= n3) {
                OkSKq = stringArray;
                DSiHK = new String[2];
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public kO$uq dud(RenderPipeline.Snippet ... snippetArray) {
        this.EEbpA = snippetArray;
        return this;
    }

    private static CallSite duj(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kO$uq" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public kO$uq dtX(VertexFormat vertexFormat, VertexFormat.DrawMode drawMode) {
        this.mrfud = vertexFormat;
        this.bmQDp = drawMode;
        return this;
    }

    public kO$uq dtY(String string) {
        this.SqHTg = string;
        return this;
    }

    public kO due() {
        kO kO2;
        long l2 = XMJxo ^ 0xFF4C70B6E73L;
        Objects.requireNonNull(this.mrfud, (String)((Object)kO$uq.duj("j", (int)2924, (long)(0x260430752F4F400CL ^ l2))));
        int n2 = kQ.bVo();
        Objects.requireNonNull(this.bmQDp, (String)((Object)kO$uq.duj("j", (int)17332, (long)(0x73B2F11B0F5708D5L ^ l2))));
        int n3 = n2;
        try {
            kO2 = new kO(this);
            if (n3 == 0) {
                iS.bwK("eKbrmb");
            }
        }
        catch (MatchException matchException) {
            throw kO$uq.duf(matchException);
        }
        return kO2;
    }

    public kO$uq dua(jN jN2) {
        this.scPFe = jN2;
        return this;
    }

    public kO$uq dub(String string) {
        this.JfGsn.add(string);
        return this;
    }

    public kO$uq dtZ(String string) {
        this.UxEjn = string;
        return this;
    }

    private static String duh(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x7AFB;
        if (DSiHK[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])gIgvL.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    gIgvL.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kO$uq", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = OkSKq[n3].getBytes("ISO-8859-1");
            kO$uq.DSiHK[n3] = kO$uq.dug(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return DSiHK[n3];
    }

    public kO$uq duc(String string, UniformType uniformType) {
        this.rGVcy.put(string, uniformType);
        return this;
    }

    private static MatchException duf(MatchException matchException) {
        return matchException;
    }

    private static String dug(byte[] byArray) {
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

    private static Object dui(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = kO$uq.duh(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kO$uq.class, "dui", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

