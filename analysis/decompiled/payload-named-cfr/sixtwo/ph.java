/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.gb;

public final class ph
extends Enum<ph> {
    public static final /* enum */ ph pvrFV;
    public static final /* enum */ ph izpdM;
    public static final /* enum */ ph iXNlP;
    private static final /* synthetic */ ph[] oueKl;
    private static boolean CSSXR;
    private static final long CSIsH;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        CSIsH = gb.aYR(5961235257073571500L, -7285154396015252657L, MethodHandles.lookup().lookupClass()).a(16588453934257L);
        long l2 = CSIsH ^ 0x63694A6C09B1L;
        if (!ph.cNp()) {
            ph.cNn(true);
        }
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
        String[] stringArray = new String[3];
        int n2 = 0;
        String string = "\u0096\u00e3N\"\u0088\u00f6p\u00cc\u00d8\u0018\u0097\u0006\u00ba\u008by32#\u00c4/\u00df\u0017\u00bb\u00c1\bJ\u0095H3\u00b4\u001f\u00a4.\u0018\u0096\u00e3N\"\u0088\u00f6p\u00cc\u00f6Q\\e\u00cb_$a}%\u00d9\u00cf\u00aa\u00e5[\u00fb";
        int n3 = "\u0096\u00e3N\"\u0088\u00f6p\u00cc\u00d8\u0018\u0097\u0006\u00ba\u008by32#\u00c4/\u00df\u0017\u00bb\u00c1\bJ\u0095H3\u00b4\u001f\u00a4.\u0018\u0096\u00e3N\"\u0088\u00f6p\u00cc\u00f6Q\\e\u00cb_$a}%\u00d9\u00cf\u00aa\u00e5[\u00fb".length();
        int n4 = 24;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = ph.cNr(byArray3).intern();
            if ((n5 += n4) >= n3) {
                pvrFV = new ph();
                izpdM = new ph();
                iXNlP = new ph();
                oueKl = ph.cNm();
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static ph[] values() {
        return (ph[])oueKl.clone();
    }

    public static ph valueOf(String string) {
        return Enum.valueOf(ph.class, string);
    }

    public static boolean cNo() {
        return CSSXR;
    }

    public static boolean cNp() {
        boolean bl2 = ph.cNo();
        try {
            if (!bl2) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw ph.cNq(matchException);
        }
        return false;
    }

    public static void cNn(boolean bl2) {
        CSSXR = bl2;
    }

    private static String cNr(byte[] byArray) {
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

    private static /* synthetic */ ph[] cNm() {
        return new ph[]{pvrFV, izpdM, iXNlP};
    }

    private static MatchException cNq(MatchException matchException) {
        return matchException;
    }

    /*
     * Exception decompiling
     */
    public static ph cNl(int var0) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 1[SWITCH]
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.processEndingBlocks(Op04StructuredStatement.java:435)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.buildNestedBlocks(Op04StructuredStatement.java:484)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op03SimpleStatement.createInitialStructuredBlock(Op03SimpleStatement.java:736)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisInner(CodeAnalyser.java:850)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisOrWrapFail(CodeAnalyser.java:278)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysis(CodeAnalyser.java:201)
         *     at org.benf.cfr.reader.entities.attributes.AttributeCode.analyse(AttributeCode.java:94)
         *     at org.benf.cfr.reader.entities.Method.analyse(Method.java:531)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseMid(ClassFile.java:1055)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseTop(ClassFile.java:942)
         *     at org.benf.cfr.reader.Driver.doJarVersionTypes(Driver.java:257)
         *     at org.benf.cfr.reader.Driver.doJar(Driver.java:139)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:76)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }
}

