/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.authlib.GameProfile
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.vertex.VertexFormat$class_5596
 *  mixin.accessors.WalkAnimationStateAccessor
 *  net.minecraft.class_10042
 *  net.minecraft.class_10055
 *  net.minecraft.class_1044
 *  net.minecraft.class_11890
 *  net.minecraft.class_1297
 *  net.minecraft.class_1657
 *  net.minecraft.class_1937
 *  net.minecraft.class_2596
 *  net.minecraft.class_2663
 *  net.minecraft.class_287
 *  net.minecraft.class_290
 *  net.minecraft.class_2960
 *  net.minecraft.class_3532
 *  net.minecraft.class_4587
 *  net.minecraft.class_4588
 *  net.minecraft.class_591
 *  net.minecraft.class_742
 *  net.minecraft.class_745
 *  net.minecraft.class_7833
 *  net.minecraft.class_922
 *  net.minecraft.class_9799
 *  net.minecraft.class_9801
 *  org.joml.Quaternionfc
 */
package sixtwo;

import com.mojang.authlib.GameProfile;
import com.mojang.blaze3d.systems.RenderPass;
import com.mojang.blaze3d.vertex.VertexFormat;
import java.lang.invoke.CallSite;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.function.Consumer;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import mixin.accessors.WalkAnimationStateAccessor;
import net.minecraft.class_10042;
import net.minecraft.class_10055;
import net.minecraft.class_1044;
import net.minecraft.class_11890;
import net.minecraft.class_1297;
import net.minecraft.class_1657;
import net.minecraft.class_1937;
import net.minecraft.class_2596;
import net.minecraft.class_2663;
import net.minecraft.class_287;
import net.minecraft.class_290;
import net.minecraft.class_2960;
import net.minecraft.class_3532;
import net.minecraft.class_4587;
import net.minecraft.class_4588;
import net.minecraft.class_591;
import net.minecraft.class_742;
import net.minecraft.class_745;
import net.minecraft.class_7833;
import net.minecraft.class_922;
import net.minecraft.class_9799;
import net.minecraft.class_9801;
import org.joml.Quaternionfc;
import sixtwo.cC;
import sixtwo.cG;
import sixtwo.cT$so;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.dh;
import sixtwo.gH;
import sixtwo.gL;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.kR;
import sixtwo.lF;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.rD;

public class cT
extends gg {
    private final ct IOXoW;
    private final cu tjQAr;
    private final cu SSPDb;
    private final cG cxjIy;
    private final cC CeLKq;
    private final cC LesoJ;
    private final CopyOnWriteArrayList<cT$so> iJyDI;
    private static final long AanCe;
    private static final String[] UiVsP;
    private static final String[] VapyU;
    private static final Map bpJNw;
    private static final long[] wyaXa;
    private static final Integer[] GsgQV;
    private static final Map PgAJk;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cT() {
        long l = AanCe ^ 0x6EF6E14716EFL;
        super(gf.aZL((int)cT.Zy("f", (int)7671, (long)(0x64CAC1B12DC9D84BL ^ l)), false, gh.nOCvV));
        this.IOXoW = new ct(this, mr.clS(new int[]{(int)cT.Zy("f", (int)11553, (long)(0x7FF4A25ACA766880L ^ l)), (int)cT.Zy("f", (int)30751, (long)(0x2A03CEE82534BDABL ^ l)), (int)cT.Zy("f", (int)13955, (long)(0x4B0FD507F176730FL ^ l)), (int)cT.Zy("f", (int)8379, (long)(0x34C4CF643B57E524L ^ l))}));
        int[] nArray = new int[cT.Zy("f", (int)17396, (long)(0x6235576150A0067EL ^ l))];
        nArray[0] = (int)cT.Zy("f", (int)25459, (long)(0x3E82AEB3ADC826E8L ^ l));
        nArray[1] = (int)cT.Zy("f", (int)28230, (long)(0x53D281C2086ABFDL ^ l));
        nArray[2] = (int)cT.Zy("f", (int)1695, (long)(0x249C1B81C649C312L ^ l));
        nArray[3] = (int)cT.Zy("f", (int)21855, (long)(0x3672EB2510FB10E5L ^ l));
        nArray[4] = (int)cT.Zy("f", (int)8710, (long)(0x38EDA1E0C8A56796L ^ l));
        nArray[5] = (int)cT.Zy("f", (int)9348, (long)(0x567E9121C9D9E11DL ^ l));
        this.tjQAr = new cu(this.IOXoW, mr.clS(nArray));
        int[] nArray2 = new int[cT.Zy("f", (int)19698, (long)(0x582250E23626094CL ^ l))];
        nArray2[0] = (int)cT.Zy("f", (int)20511, (long)(0xDCA16D71D519589L ^ l));
        nArray2[1] = (int)cT.Zy("f", (int)9348, (long)(0x567E9121C9D9E11DL ^ l));
        nArray2[2] = (int)cT.Zy("f", (int)6809, (long)(0x4E5035D39B21DF2BL ^ l));
        nArray2[3] = (int)cT.Zy("f", (int)30869, (long)(0x26516308E5BBD11L ^ l));
        nArray2[4] = (int)cT.Zy("f", (int)22700, (long)(0x4A1CCC1D7801D11L ^ l));
        nArray2[5] = (int)cT.Zy("f", (int)24266, (long)(0x74DA668410759B4FL ^ l));
        nArray2[cT.Zy("f", (int)7973, (long)(0x7D6DFAB7CFE3DA9CL ^ l))] = (int)cT.Zy("f", (int)9348, (long)(0x567E9121C9D9E11DL ^ l));
        nArray2[cT.Zy("f", (int)24065, (long)(0x2F63E97FC4399B90L ^ l))] = (int)cT.Zy("f", (int)12106, (long)(0x6CFD2B220DDFEAFDL ^ l));
        this.SSPDb = new cu(this.IOXoW, mr.clS(nArray2));
        this.cxjIy = new cG(this, mr.clS(new int[]{(int)cT.Zy("f", (int)1699, (long)(0x9EE84FDB4634331L ^ l)), (int)cT.Zy("f", (int)15745, (long)(0x5E2A2DDDE853F821L ^ l)), (int)cT.Zy("f", (int)24770, (long)(0x4A10DF1004D82540L ^ l)), (int)cT.Zy("f", (int)15745, (long)(0x5E2A2DDDE853F821L ^ l)), (int)cT.Zy("f", (int)15639, (long)(0x61E999B4F0ACF8B3L ^ l))})).Uf(rD.dlM().bjG().bis());
        int[] nArray3 = new int[cT.Zy("f", (int)23956, (long)(0x31CF37FF48CB1813L ^ l))];
        nArray3[0] = (int)cT.Zy("f", (int)24793, (long)(0x2F8C694BAF7CA57EL ^ l));
        nArray3[1] = (int)cT.Zy("f", (int)26305, (long)(0x797BA28EA102235FL ^ l));
        nArray3[2] = (int)cT.Zy("f", (int)9688, (long)(0x1CDF6757479FE06BL ^ l));
        nArray3[3] = (int)cT.Zy("f", (int)9348, (long)(0x567E9121C9D9E11DL ^ l));
        nArray3[4] = (int)cT.Zy("f", (int)26579, (long)(0x11288AB83D94A26BL ^ l));
        nArray3[5] = (int)cT.Zy("f", (int)24793, (long)(0x2F8C694BAF7CA57EL ^ l));
        nArray3[cT.Zy("f", (int)7973, (long)(0x7D6DFAB7CFE3DA9CL ^ l))] = (int)cT.Zy("f", (int)15745, (long)(0x5E2A2DDDE853F821L ^ l));
        nArray3[cT.Zy("f", (int)4341, (long)(0x883BFBDD8CA5576L ^ l))] = (int)cT.Zy("f", (int)1745, (long)(0x2B24107DBE18C359L ^ l));
        nArray3[cT.Zy("f", (int)9219, (long)(0x1E8B2A337199E183L ^ l))] = (int)cT.Zy("f", (int)21253, (long)(0x3D9907A5BC071692L ^ l));
        nArray3[cT.Zy("f", (int)30843, (long)(0xBB29058B747BDE7L ^ l))] = (int)cT.Zy("f", (int)26305, (long)(0x797BA28EA102235FL ^ l));
        nArray3[cT.Zy("f", (int)14940, (long)(0x5F1E78D7C4CA7FE9L ^ l))] = (int)cT.Zy("f", (int)28508, (long)(0x1C38527E00272AEDL ^ l));
        nArray3[cT.Zy("f", (int)165, (long)(0x5E65D58B86F0C500L ^ l))] = (int)cT.Zy("f", (int)19773, (long)(0x10D3C56F1E9588BBL ^ l));
        nArray3[cT.Zy("f", (int)22052, (long)(0x4060905A4EE939BL ^ l))] = (int)cT.Zy("f", (int)3042, (long)(0x3C2AC8568F5E4E78L ^ l));
        nArray3[cT.Zy("f", (int)10906, (long)(0x15D058D886B6F09L ^ l))] = (int)cT.Zy("f", (int)3042, (long)(0x3C2AC8568F5E4E78L ^ l));
        nArray3[cT.Zy("f", (int)26855, (long)(0x163952A49353AD69L ^ l))] = (int)cT.Zy("f", (int)9348, (long)(0x567E9121C9D9E11DL ^ l));
        nArray3[cT.Zy("f", (int)16329, (long)(0x65081A5B72777A51L ^ l))] = (int)cT.Zy("f", (int)411, (long)(0x7FA1A9AE77E3442BL ^ l));
        nArray3[cT.Zy("f", (int)1508, (long)(0x3BCF7519659EC071L ^ l))] = (int)cT.Zy("f", (int)15639, (long)(0x61E999B4F0ACF8B3L ^ l));
        this.CeLKq = new cC(this, mr.clS(nArray3)).Vy(1.0).Vw(1.0).Vx(10.0).VA(3.0).Vz((String)((Object)cT.Zv("o", (int)31067, (long)(0x390E55A742B28974L ^ l))));
        int[] nArray4 = new int[cT.Zy("f", (int)13865, (long)(0x2A191A010D2773A2L ^ l))];
        nArray4[0] = (int)cT.Zy("f", (int)99, (long)(0x3C5EBAE06B08C5ECL ^ l));
        nArray4[1] = (int)cT.Zy("f", (int)24770, (long)(0x4A10DF1004D82540L ^ l));
        nArray4[2] = (int)cT.Zy("f", (int)14196, (long)(0x739CB7E8770372E0L ^ l));
        nArray4[3] = (int)cT.Zy("f", (int)1745, (long)(0x2B24107DBE18C359L ^ l));
        nArray4[4] = (int)cT.Zy("f", (int)18369, (long)(0x104AB5A61978025CL ^ l));
        nArray4[5] = (int)cT.Zy("f", (int)3042, (long)(0x3C2AC8568F5E4E78L ^ l));
        nArray4[cT.Zy("f", (int)7973, (long)(0x7D6DFAB7CFE3DA9CL ^ l))] = (int)cT.Zy("f", (int)9348, (long)(0x567E9121C9D9E11DL ^ l));
        nArray4[cT.Zy("f", (int)4341, (long)(0x883BFBDD8CA5576L ^ l))] = (int)cT.Zy("f", (int)9348, (long)(0x567E9121C9D9E11DL ^ l));
        nArray4[cT.Zy("f", (int)9219, (long)(0x1E8B2A337199E183L ^ l))] = (int)cT.Zy("f", (int)12106, (long)(0x6CFD2B220DDFEAFDL ^ l));
        this.LesoJ = new cC(this, mr.clS(nArray4)).Vy(0.01).Vw(-2.0).Vx(2.0).VA(0.4);
        this.iJyDI = new CopyOnWriteArrayList();
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    cT.AanCe = gb.aYR(-223167312884541134L, 15059470583241982L, MethodHandles.lookup().lookupClass()).a(168970528046976L);
                    cT.bpJNw = new HashMap<K, V>(13);
                    var11 = cT.AanCe ^ 74823685195229L;
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
                    var20_3 = new String[2];
                    var18_4 = 0;
                    var17_5 = "\u009f\u00e2I}\u00b7\u00b8@\u0018\n\u00da\u009ehP}y2\u0094\u00d2*(\u00ef\u0011\u007fN\u0010\u00ddb\u0019\u000f>\u00ce\u0088\u00e8\u008f\u008b~\u009b\u00ff\u00ff<^";
                    var19_6 = "\u009f\u00e2I}\u00b7\u00b8@\u0018\n\u00da\u009ehP}y2\u0094\u00d2*(\u00ef\u0011\u007fN\u0010\u00ddb\u0019\u000f>\u00ce\u0088\u00e8\u008f\u008b~\u009b\u00ff\u00ff<^".length();
                    var16_7 = 24;
                    var15_8 = -1;
lbl20:
                    // 2 sources

                    while (true) {
                        continue;
                        break;
                    }
lbl22:
                    // 1 sources

                    while (true) {
                        var20_3[var18_4++] = cT.Zs(var21_9).intern();
                        if ((var15_8 += var16_7) < var19_6) {
                            var16_7 = var17_5.charAt(var15_8);
                            ** continue;
                        }
                        break block12;
                        break;
                    }
                    v3 = ++var15_8;
                    var21_9 = var13_1.doFinal(var17_5.substring(v3, v3 + var16_7).getBytes("ISO-8859-1"));
                    ** while (true)
                }
                cT.UiVsP = var20_3;
                cT.VapyU = new String[2];
                cT.PgAJk = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v4 = SecretKeyFactory.getInstance("DES");
                v5 = new byte[8];
                v6 = v5;
                v5[0] = (byte)(var11 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v6 = v6;
                    v6[var1_11] = (byte)(var11 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v4.generateSecret(new DESKeySpec(v6)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[54];
                var3_13 = 0;
                var4_14 = "4\u00e2 \u001b6\u00014\u0084\u00c4k\u0019fR\u0003(\u0090j\u009e\u0084\u008d\u001d\u00d9\u00e5\u0001\u00c5\u0017\u00fc\u00b1\u0006\u00cb.\u00ba\u00bb\u009c\u001f\u00e4\u00bd\b\u00b9\u00fcVG9.\u00abT+\u00df\ny\u009a\u00db\u007f\u00ec\u00a4\u0098\u00e7\u001a\u00d4\u00a4\u0080\u00a6\u00d1,\u0090\u00ab\u00a4)\u0097\u00ae\u00c7\u00f2\u0093G\u0001\u00cam\u00d7.\u00ac=;\u00e4\u00af\u00d6\u00b8(kG\u009aIb2\u00fb\u00a9}2K\u00cd*j/\u00f2yN,\u00c6\u00bd^\u00eeJ\u00b3\u00c0\u008f\u001cx\u009f,\u00a6\u00102\u00b1\tt\u001e\u001b\u00f9aI\u0085\u00e5:\u0000\u00c5C\u00dcnZ\u00d9\u0091\u00f6\u00c6\u007f\u00df\u00c8\u0080{H\u00f90\u0096\b\u00f8mVw\n\u00d0\u00f6\u00ecd\u00c2\u00e2\u0091\u00acy\u00ca\u0001\u00b34a\u00c1\u0013\u0098\u00f9\u00c3&\u008bi\u00b3`\u00e5\u00ae\u0007\u00f0^\u00d6\u00b6\u0099B\u0016\u00b4\u00f6\u00b6\u00ceE\u008aJ3NL\u00b9\u00e2\u0003{\u0019o\b/\u0015\rB\u00f3\u00d7nt6\u00c2\u00c9\f\u001em\u0099}\u00a5\u00c5\u00e5\b'\u0085\u00f7\u00cb\u008e\u00fa\u00ee9\u00d5=6\u0018\u00ea\r\u00dd\u0002e:\u00ea\u00f1W\u00a2.\u0012\u00b7\u00db\u001e\t\u00ef\u00c9E\u008c\u0096\u0007\u00b3\u0092_}\u00ab<c\u00aaP+\u00e3.\u00b0\u00de\u0004\u00dd\u00da\u00af\u00c78\u0099\u00d9>\u000e$6\b\u009c#\u00d3\u00f3&\fJ\u009f\u0012\r\u00ce\u00d3\u00f1\u0014\u0019\u00df\u00c4\u00f8\u00e6\r}s8\u00e5[I\u0094\u00a0#)w\u00af\u0013\u0006C\u0083N~\u00d9\u0013-,'\u001a+\u000f3/\u0014\u00aaw\t0]\u00fa\t2\u00fe\u0086\u00a7`\u00cdS>T\u000e\u008c\u0086x\u00f0\u009e\u0006kL9\u00adn\u0087l\u009cF\u00b8\u00f3\u00b8\u0088p\u0010z|\u00a4\u00ab\u008d\u00cd\u0083\u00d34\u00e1.\u00f4k\u00bb\u0098/\u00f0\u00bek\u0081]\\\u00eam\u00d9\u00a5'5\u00c6%Q\u00dftT_\u00ea\u00fc\u00bez\u0001";
                var5_15 = "4\u00e2 \u001b6\u00014\u0084\u00c4k\u0019fR\u0003(\u0090j\u009e\u0084\u008d\u001d\u00d9\u00e5\u0001\u00c5\u0017\u00fc\u00b1\u0006\u00cb.\u00ba\u00bb\u009c\u001f\u00e4\u00bd\b\u00b9\u00fcVG9.\u00abT+\u00df\ny\u009a\u00db\u007f\u00ec\u00a4\u0098\u00e7\u001a\u00d4\u00a4\u0080\u00a6\u00d1,\u0090\u00ab\u00a4)\u0097\u00ae\u00c7\u00f2\u0093G\u0001\u00cam\u00d7.\u00ac=;\u00e4\u00af\u00d6\u00b8(kG\u009aIb2\u00fb\u00a9}2K\u00cd*j/\u00f2yN,\u00c6\u00bd^\u00eeJ\u00b3\u00c0\u008f\u001cx\u009f,\u00a6\u00102\u00b1\tt\u001e\u001b\u00f9aI\u0085\u00e5:\u0000\u00c5C\u00dcnZ\u00d9\u0091\u00f6\u00c6\u007f\u00df\u00c8\u0080{H\u00f90\u0096\b\u00f8mVw\n\u00d0\u00f6\u00ecd\u00c2\u00e2\u0091\u00acy\u00ca\u0001\u00b34a\u00c1\u0013\u0098\u00f9\u00c3&\u008bi\u00b3`\u00e5\u00ae\u0007\u00f0^\u00d6\u00b6\u0099B\u0016\u00b4\u00f6\u00b6\u00ceE\u008aJ3NL\u00b9\u00e2\u0003{\u0019o\b/\u0015\rB\u00f3\u00d7nt6\u00c2\u00c9\f\u001em\u0099}\u00a5\u00c5\u00e5\b'\u0085\u00f7\u00cb\u008e\u00fa\u00ee9\u00d5=6\u0018\u00ea\r\u00dd\u0002e:\u00ea\u00f1W\u00a2.\u0012\u00b7\u00db\u001e\t\u00ef\u00c9E\u008c\u0096\u0007\u00b3\u0092_}\u00ab<c\u00aaP+\u00e3.\u00b0\u00de\u0004\u00dd\u00da\u00af\u00c78\u0099\u00d9>\u000e$6\b\u009c#\u00d3\u00f3&\fJ\u009f\u0012\r\u00ce\u00d3\u00f1\u0014\u0019\u00df\u00c4\u00f8\u00e6\r}s8\u00e5[I\u0094\u00a0#)w\u00af\u0013\u0006C\u0083N~\u00d9\u0013-,'\u001a+\u000f3/\u0014\u00aaw\t0]\u00fa\t2\u00fe\u0086\u00a7`\u00cdS>T\u000e\u008c\u0086x\u00f0\u009e\u0006kL9\u00adn\u0087l\u009cF\u00b8\u00f3\u00b8\u0088p\u0010z|\u00a4\u00ab\u008d\u00cd\u0083\u00d34\u00e1.\u00f4k\u00bb\u0098/\u00f0\u00bek\u0081]\\\u00eam\u00d9\u00a5'5\u00c6%Q\u00dftT_\u00ea\u00fc\u00bez\u0001".length();
                var2_16 = 0;
                while (true) {
                    var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                    v7 = var6_12;
                    v8 = var3_13++;
                    v9 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                    v10 = -1;
                    break block13;
                    break;
                }
lbl58:
                // 1 sources

                while (true) {
                    v7[v8] = v11;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "\u00e4\u00f4\u009d\u00d0\u00b0\u00aba\u00aef\u00d0y6A\u00d1\u00fcs";
                    var5_15 = "\u00e4\u00f4\u009d\u00d0\u00b0\u00aba\u00aef\u00d0y6A\u00d1\u00fcs".length();
                    var2_16 = 0;
                    while (true) {
                        var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                        v7 = var6_12;
                        v8 = var3_13++;
                        v9 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                        v10 = 0;
                        break block13;
                        break;
                    }
                    break;
                }
lbl71:
                // 1 sources

                while (true) {
                    v7[v8] = v11;
                    if (var2_16 < var5_15) ** continue;
                    break block14;
                    break;
                }
            }
            var8_18 = v9;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            v11 = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
            switch (v10) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl84:
                // 1 sources

                ** continue;
            }
        }
        cT.wyaXa = var6_12;
        cT.GsgQV = new Integer[54];
    }

    private static String Zs(byte[] byArray) {
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

    /*
     * Unable to fully structure code
     */
    private void Zl(class_4587 var1_1, class_742 var2_2, class_591 var3_3, class_2960 var4_4, float var5_5, float var6_6) {
        block44: {
            block46: {
                block39: {
                    var7_7 = cT.AanCe ^ 93325792430213L;
                    var3_3.field_3482.field_3665 = true;
                    var3_3.field_3479.field_3665 = true;
                    var3_3.field_3484.field_3665 = true;
                    var3_3.field_3486.field_3665 = true;
                    var3_3.field_3483.field_3665 = true;
                    v0 = dh.afl();
                    var3_3.field_3394.field_3665 = true;
                    var10_8 = var2_2.method_73189().method_1020(rD.dlmvG.field_1773.method_19418().method_71156());
                    var2_2.method_33574(var2_2.method_73189().method_1031(0.0, this.LesoJ.VI() / 50.0, 0.0));
                    var2_2.field_6014 = var2_2.method_23317();
                    var2_2.field_6036 = var2_2.method_23318();
                    var2_2.field_5969 = var2_2.method_23321();
                    var2_2.field_6220 = var2_2.field_6283;
                    var2_2.field_6259 = var2_2.field_6241;
                    var2_2.field_5982 = var2_2.method_36454();
                    var9_9 = v0;
                    var2_2.field_6004 = var2_2.method_36455();
                    var1_1.method_22903();
                    var1_1.method_22904(var10_8.field_1352, var10_8.field_1351, var10_8.field_1350);
                    var11_10 = class_3532.method_16439((float)var6_6, (float)var2_2.field_6220, (float)var2_2.field_6283);
                    var1_1.method_22907((Quaternionfc)class_7833.field_40716.rotationDegrees(180.0f - var11_10));
                    this.Zm(var1_1);
                    var12_11 = rD.dlmvG.method_1561().method_74405(var2_2);
                    var13_12 = new class_10055();
                    var12_11.method_62604((class_11890)var2_2, var13_12, var6_6);
                    var14_13 = (WalkAnimationStateAccessor)var2_2.field_42108;
                    var13_12.field_53451 = var2_2.field_42108.method_48566();
                    var13_12.field_53450 = var14_13.getPosition();
                    var3_3.method_62110(var13_12);
                    var15_14 = mG.cnQ(this.cxjIy.Wh()).cob(var5_5);
                    var16_15 = var15_14.con();
                    var17_16 = class_922.method_23622((class_10042)var13_12, (float)0.0f);
                    if (!this.IOXoW.SQ(1)) break block46;
                    var18_17 = rD.dlmvG.method_1531().method_4619(var4_4);
                    var19_18 = new class_9799(class_290.field_1585.getVertexSize() * cT.Zy("f", (int)18015, (long)(7927451159427276179L ^ var7_7)));
                    try {
                        block38: {
                            block36: {
                                var20_20 = new class_287(var19_18, VertexFormat.class_5596.field_27382, class_290.field_1585);
                                var3_3.method_60879(var1_1, (class_4588)var20_20, (int)cT.Zy("f", (int)12751, (long)(6631827471017585188L ^ var7_7)), var17_16);
                                var21_23 = var20_20.method_60794();
                                try {
                                    block37: {
                                        v1 = var21_23;
                                        if (var9_9 != null) break block36;
                                        try {
                                            block47: {
                                                if (v1 == null) break block37;
                                                break block47;
                                                catch (Throwable v2) {
                                                    throw cT.Zr(v2);
                                                }
                                            }
                                            lF.cfD(kR.NElVn, var21_23, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, Zo(net.minecraft.class_1044 com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)((class_1044)var18_17));
                                        }
                                        catch (Throwable v3) {
                                            throw cT.Zr(v3);
                                        }
                                    }
                                    v1 = var21_23;
                                }
                                catch (Throwable var22_26) {
                                    block40: {
                                        try {
                                            v4 = var21_23;
                                            if (var9_9 == null) {
                                                if (v4 == null) break block40;
                                            }
                                            ** GOTO lbl68
                                        }
                                        catch (Throwable v5) {
                                            throw cT.Zr(v5);
                                        }
                                        try {
                                            v4 = var21_23;
lbl68:
                                            // 2 sources

                                            v4.close();
                                        }
                                        catch (Throwable var23_28) {
                                            var22_26.addSuppressed(var23_28);
                                        }
                                    }
                                    throw var22_26;
                                }
                            }
                            try {
                                if (var9_9 != null) break block38;
                                if (v1 == null) break block39;
                            }
                            catch (Throwable v6) {
                                throw cT.Zr(v6);
                            }
                            v1 = var21_23;
                        }
                        v1.close();
                    }
                    finally {
                        var19_18.close();
                    }
                }
                if (var9_9 == null) break block44;
            }
            var18_17 = new class_9799(class_290.field_1592.getVertexSize() * cT.Zy("f", (int)2303, (long)(2830415235329397532L ^ var7_7)));
            try {
                block43: {
                    block41: {
                        var19_18 = new class_287((class_9799)var18_17, VertexFormat.class_5596.field_27382, class_290.field_1592);
                        var3_3.method_60879(var1_1, (class_4588)var19_18, (int)cT.Zy("f", (int)14940, (long)(6853989076366369155L ^ var7_7)), var17_16);
                        var20_20 = var19_18.method_60794();
                        try {
                            block42: {
                                v7 = var20_20;
                                if (var9_9 != null) break block41;
                                try {
                                    block48: {
                                        if (v7 == null) break block42;
                                        break block48;
                                        catch (Throwable v8) {
                                            throw cT.Zr(v8);
                                        }
                                    }
                                    lF.cfD(kR.vTohM, (class_9801)var20_20, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, Zn(com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)());
                                }
                                catch (Throwable v9) {
                                    throw cT.Zr(v9);
                                }
                            }
                            v7 = var20_20;
                        }
                        catch (Throwable var21_25) {
                            block45: {
                                try {
                                    v10 = var20_20;
                                    if (var9_9 == null) {
                                        if (v10 == null) break block45;
                                    }
                                    ** GOTO lbl123
                                }
                                catch (Throwable v11) {
                                    throw cT.Zr(v11);
                                }
                                try {
                                    v10 = var20_20;
lbl123:
                                    // 2 sources

                                    v10.close();
                                }
                                catch (Throwable var22_27) {
                                    var21_25.addSuppressed(var22_27);
                                }
                            }
                            throw var21_25;
                        }
                    }
                    try {
                        if (var9_9 != null) break block43;
                        if (v7 == null) break block44;
                    }
                    catch (Throwable v12) {
                        throw cT.Zr(v12);
                    }
                    v7 = var20_20;
                }
                v7.close();
            }
            finally {
                var18_17.close();
            }
        }
        var1_1.method_22909();
    }

    private static CallSite Zy(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cT" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static CallSite Zv(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cT" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private void Zm(class_4587 class_45872) {
        class_45872.method_22905(-1.0f, -1.0f, 1.0f);
        class_45872.method_22905(1.6f, 1.8f, 1.6f);
        class_45872.method_46416(0.0f, -1.501f, 0.0f);
    }

    private static Throwable Zr(Throwable throwable) {
        return throwable;
    }

    private static int Zw(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x2191;
        if (GsgQV[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = wyaXa[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])PgAJk.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    PgAJk.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cT", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cT.GsgQV[n2] = n3;
        }
        return GsgQV[n2];
    }

    private static /* synthetic */ void Zn(RenderPass renderPass) {
    }

    private static Object Zu(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = cT.Zt(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static /* synthetic */ void Zo(class_1044 class_10442, RenderPass renderPass) {
        long l = AanCe ^ 0xA0CE5C9797BL;
        renderPass.bindTexture((String)((Object)cT.Zv("o", (int)15467, (long)(0x3B8AC2E9534DA3D1L ^ l))), class_10442.method_71659(), class_10442.method_75484());
    }

    private static String Zt(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x142A;
        if (VapyU[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])bpJNw.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    bpJNw.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cT", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = UiVsP[n2].getBytes("ISO-8859-1");
            cT.VapyU[n2] = cT.Zs(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return VapyU[n2];
    }

    @hG
    public void Zj(go.sX sX2) {
        long l = AanCe ^ 0x77CC48A31A54L;
        try {
            if (!this.bab()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw cT.Zr(matchException);
        }
        class_4587 class_45872 = sX2.bbh();
        float f = sX2.bbi();
        this.iJyDI.forEach(cT$so -> this.Zl(class_45872, cT$so.VwpaT, cT$so.ugYAv, cT$so.UvTDM, cT$so.dnx(), f));
    }

    @hG
    public void Zi(gH.th th2) {
        cT cT2;
        block4: {
            block5: {
                long l = AanCe ^ 0x4D9FFB04477AL;
                iS[] iSArray = dh.afl();
                try {
                    try {
                        cT2 = this;
                        if (iSArray != null) break block4;
                        if (cT2.bab()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cT.Zr(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw cT.Zr(matchException);
                }
            }
            cT2 = this;
        }
        cT2.iJyDI.forEach(cT$so -> cT$so.dnw(this.iJyDI));
    }

    @hG
    public void Zk(gL.tk tk2) {
        block16: {
            class_1297 class_12972;
            block18: {
                class_2663 class_26632;
                iS[] iSArray;
                block17: {
                    class_2596<?> class_25962;
                    long l;
                    block15: {
                        l = AanCe ^ 0x2FB6FEDE836EL;
                        iSArray = dh.afl();
                        try {
                            if (!this.bab()) {
                                return;
                            }
                        }
                        catch (MatchException matchException) {
                            throw cT.Zr(matchException);
                        }
                        class_2596<?> class_25963 = tk2.bcf();
                        try {
                            try {
                                class_25962 = class_25963;
                                if (iSArray != null) break block15;
                                if (!(class_25962 instanceof class_2663)) break block16;
                            }
                            catch (MatchException matchException) {
                                throw cT.Zr(matchException);
                            }
                            class_25962 = class_25963;
                        }
                        catch (MatchException matchException) {
                            throw cT.Zr(matchException);
                        }
                    }
                    class_2663 class_26633 = (class_2663)class_25962;
                    try {
                        try {
                            class_26632 = class_26633;
                            if (iSArray != null) break block17;
                            if (class_26632.method_11470() != cT.Zy("f", (int)30938, (long)(0xC505E92B136A8EDL ^ l))) break block16;
                        }
                        catch (MatchException matchException) {
                            throw cT.Zr(matchException);
                        }
                        class_26632 = class_26633;
                    }
                    catch (MatchException matchException) {
                        throw cT.Zr(matchException);
                    }
                }
                class_1297 class_12973 = class_26632.method_11469((class_1937)rD.dlmvG.field_1687);
                try {
                    try {
                        class_12972 = class_12973;
                        if (iSArray != null) break block18;
                        if (!(class_12972 instanceof class_1657)) break block16;
                    }
                    catch (MatchException matchException) {
                        throw cT.Zr(matchException);
                    }
                    class_12972 = class_12973;
                }
                catch (MatchException matchException) {
                    throw cT.Zr(matchException);
                }
            }
            class_1657 class_16572 = (class_1657)class_12972;
            class_745 class_7452 = new class_745(rD.dlmvG.field_1687, new GameProfile(class_16572.method_5667(), class_16572.method_5477().getString()));
            class_7452.method_5719((class_1297)class_16572);
            class_7452.field_6283 = class_16572.field_6283;
            class_7452.field_6241 = class_16572.field_6241;
            class_7452.field_6220 = class_7452.field_6283;
            class_7452.field_6259 = class_7452.field_6241;
            class_7452.method_5660(class_16572.method_5715());
            WalkAnimationStateAccessor walkAnimationStateAccessor = (WalkAnimationStateAccessor)class_16572.field_42108;
            WalkAnimationStateAccessor walkAnimationStateAccessor2 = (WalkAnimationStateAccessor)class_7452.field_42108;
            class_7452.field_42108.method_48567(class_16572.field_42108.method_48566());
            walkAnimationStateAccessor2.setPosition(walkAnimationStateAccessor.getPosition());
            this.iJyDI.add(new cT$so(this, (class_742)class_7452, class_7452.method_52814().comp_1626().comp_3627()));
        }
    }

    private static int Zx(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = cT.Zw(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cT.class, "Zx", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(cT.class, "Zu", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
