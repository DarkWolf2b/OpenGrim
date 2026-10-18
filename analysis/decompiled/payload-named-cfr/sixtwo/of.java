/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.LivingEntity
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.Comparator;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.entity.Entity;
import net.minecraft.entity.LivingEntity;
import sixtwo.ct;
import sixtwo.gb;
import sixtwo.rD;

public final class of
extends Enum<of> {
    public static final /* enum */ of OGxYa;
    public static final /* enum */ of ahXwo;
    public static final /* enum */ of FraBu;
    private final Comparator<? super LivingEntity> hzeYm;
    private static final /* synthetic */ of[] HGcXf;
    private static String[] wgtAX;
    private static final long hyOKc;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private of(Comparator<? super LivingEntity> comparator) {
        this.hzeYm = comparator;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        hyOKc = gb.aYR(7170161539386005253L, -3942045384269620819L, MethodHandles.lookup().lookupClass()).a(86355900667434L);
        long l2 = hyOKc ^ 0x59C17310799BL;
        if (of.cCL() == null) {
            of.cCK(new String[1]);
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
        String string = "\u009b\u00cf\u0091\u00a7&\u00d1n\u009aoq\u00e9\u008e\u00e8-\u0003\u00d9\b\u0019,\u0080\u00be\u0011\u00c9\u008a\u00a9\b)\u00d8u\u00c4\u0013\u00dd\n\u00ed";
        int n3 = "\u009b\u00cf\u0091\u00a7&\u00d1n\u009aoq\u00e9\u008e\u00e8-\u0003\u00d9\b\u0019,\u0080\u00be\u0011\u00c9\u008a\u00a9\b)\u00d8u\u00c4\u0013\u00dd\n\u00ed".length();
        int n4 = 16;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = of.cCN(byArray3).intern();
            if ((n5 += n4) >= n3) {
                OGxYa = new of((livingEntity, livingEntity2) -> 0);
                ahXwo = new of(Comparator.comparingDouble(livingEntity -> livingEntity.distanceTo((Entity)rD.dlmvG.player)));
                FraBu = new of(Comparator.comparingDouble(LivingEntity::getHealth));
                HGcXf = of.cCJ();
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static of[] values() {
        return (of[])HGcXf.clone();
    }

    public static of valueOf(String string) {
        return Enum.valueOf(of.class, string);
    }

    public static String[] cCL() {
        return wgtAX;
    }

    /*
     * Exception decompiling
     */
    public static of cCF(ct var0) {
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

    public static void cCK(String[] stringArray) {
        wgtAX = stringArray;
    }

    public Comparator<? super LivingEntity> cCG() {
        return this.hzeYm;
    }

    private static String cCN(byte[] byArray) {
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

    private static MatchException cCM(MatchException matchException) {
        return matchException;
    }

    private static /* synthetic */ of[] cCJ() {
        return new of[]{OGxYa, ahXwo, FraBu};
    }
}

