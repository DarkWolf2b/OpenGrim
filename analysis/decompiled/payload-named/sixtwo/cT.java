/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.authlib.GameProfile
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.vertex.VertexFormat$DrawMode
 *  mixin.accessors.WalkAnimationStateAccessor
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.client.network.OtherClientPlayerEntity
 *  net.minecraft.client.render.BufferBuilder
 *  net.minecraft.client.render.BuiltBuffer
 *  net.minecraft.client.render.VertexConsumer
 *  net.minecraft.client.render.VertexFormats
 *  net.minecraft.client.render.entity.LivingEntityRenderer
 *  net.minecraft.client.render.entity.model.PlayerEntityModel
 *  net.minecraft.client.render.entity.state.LivingEntityRenderState
 *  net.minecraft.client.render.entity.state.PlayerEntityRenderState
 *  net.minecraft.client.texture.AbstractTexture
 *  net.minecraft.client.util.BufferAllocator
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.PlayerLikeEntity
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.network.packet.Packet
 *  net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket
 *  net.minecraft.util.Identifier
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.RotationAxis
 *  net.minecraft.world.World
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
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.network.OtherClientPlayerEntity;
import net.minecraft.client.render.BufferBuilder;
import net.minecraft.client.render.BuiltBuffer;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexFormats;
import net.minecraft.client.render.entity.LivingEntityRenderer;
import net.minecraft.client.render.entity.model.PlayerEntityModel;
import net.minecraft.client.render.entity.state.LivingEntityRenderState;
import net.minecraft.client.render.entity.state.PlayerEntityRenderState;
import net.minecraft.client.texture.AbstractTexture;
import net.minecraft.client.util.BufferAllocator;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.PlayerLikeEntity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.network.packet.Packet;
import net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket;
import net.minecraft.util.Identifier;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.RotationAxis;
import net.minecraft.world.World;
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
        long l2 = AanCe ^ 0x6EF6E14716EFL;
        super(gf.aZL((int)cT.Zy("f", (int)7671, (long)(0x64CAC1B12DC9D84BL ^ l2)), false, gh.nOCvV));
        this.IOXoW = new ct(this, mr.clS(new int[]{(int)cT.Zy("f", (int)11553, (long)(0x7FF4A25ACA766880L ^ l2)), (int)cT.Zy("f", (int)30751, (long)(0x2A03CEE82534BDABL ^ l2)), (int)cT.Zy("f", (int)13955, (long)(0x4B0FD507F176730FL ^ l2)), (int)cT.Zy("f", (int)8379, (long)(0x34C4CF643B57E524L ^ l2))}));
        int[] nArray = new int[cT.Zy("f", (int)17396, (long)(0x6235576150A0067EL ^ l2))];
        nArray[0] = (int)cT.Zy("f", (int)25459, (long)(0x3E82AEB3ADC826E8L ^ l2));
        nArray[1] = (int)cT.Zy("f", (int)28230, (long)(0x53D281C2086ABFDL ^ l2));
        nArray[2] = (int)cT.Zy("f", (int)1695, (long)(0x249C1B81C649C312L ^ l2));
        nArray[3] = (int)cT.Zy("f", (int)21855, (long)(0x3672EB2510FB10E5L ^ l2));
        nArray[4] = (int)cT.Zy("f", (int)8710, (long)(0x38EDA1E0C8A56796L ^ l2));
        nArray[5] = (int)cT.Zy("f", (int)9348, (long)(0x567E9121C9D9E11DL ^ l2));
        this.tjQAr = new cu(this.IOXoW, mr.clS(nArray));
        int[] nArray2 = new int[cT.Zy("f", (int)19698, (long)(0x582250E23626094CL ^ l2))];
        nArray2[0] = (int)cT.Zy("f", (int)20511, (long)(0xDCA16D71D519589L ^ l2));
        nArray2[1] = (int)cT.Zy("f", (int)9348, (long)(0x567E9121C9D9E11DL ^ l2));
        nArray2[2] = (int)cT.Zy("f", (int)6809, (long)(0x4E5035D39B21DF2BL ^ l2));
        nArray2[3] = (int)cT.Zy("f", (int)30869, (long)(0x26516308E5BBD11L ^ l2));
        nArray2[4] = (int)cT.Zy("f", (int)22700, (long)(0x4A1CCC1D7801D11L ^ l2));
        nArray2[5] = (int)cT.Zy("f", (int)24266, (long)(0x74DA668410759B4FL ^ l2));
        nArray2[cT.Zy("f", (int)7973, (long)(0x7D6DFAB7CFE3DA9CL ^ l2))] = (int)cT.Zy("f", (int)9348, (long)(0x567E9121C9D9E11DL ^ l2));
        nArray2[cT.Zy("f", (int)24065, (long)(0x2F63E97FC4399B90L ^ l2))] = (int)cT.Zy("f", (int)12106, (long)(0x6CFD2B220DDFEAFDL ^ l2));
        this.SSPDb = new cu(this.IOXoW, mr.clS(nArray2));
        this.cxjIy = new cG(this, mr.clS(new int[]{(int)cT.Zy("f", (int)1699, (long)(0x9EE84FDB4634331L ^ l2)), (int)cT.Zy("f", (int)15745, (long)(0x5E2A2DDDE853F821L ^ l2)), (int)cT.Zy("f", (int)24770, (long)(0x4A10DF1004D82540L ^ l2)), (int)cT.Zy("f", (int)15745, (long)(0x5E2A2DDDE853F821L ^ l2)), (int)cT.Zy("f", (int)15639, (long)(0x61E999B4F0ACF8B3L ^ l2))})).Uf(rD.dlM().bjG().bis());
        int[] nArray3 = new int[cT.Zy("f", (int)23956, (long)(0x31CF37FF48CB1813L ^ l2))];
        nArray3[0] = (int)cT.Zy("f", (int)24793, (long)(0x2F8C694BAF7CA57EL ^ l2));
        nArray3[1] = (int)cT.Zy("f", (int)26305, (long)(0x797BA28EA102235FL ^ l2));
        nArray3[2] = (int)cT.Zy("f", (int)9688, (long)(0x1CDF6757479FE06BL ^ l2));
        nArray3[3] = (int)cT.Zy("f", (int)9348, (long)(0x567E9121C9D9E11DL ^ l2));
        nArray3[4] = (int)cT.Zy("f", (int)26579, (long)(0x11288AB83D94A26BL ^ l2));
        nArray3[5] = (int)cT.Zy("f", (int)24793, (long)(0x2F8C694BAF7CA57EL ^ l2));
        nArray3[cT.Zy("f", (int)7973, (long)(0x7D6DFAB7CFE3DA9CL ^ l2))] = (int)cT.Zy("f", (int)15745, (long)(0x5E2A2DDDE853F821L ^ l2));
        nArray3[cT.Zy("f", (int)4341, (long)(0x883BFBDD8CA5576L ^ l2))] = (int)cT.Zy("f", (int)1745, (long)(0x2B24107DBE18C359L ^ l2));
        nArray3[cT.Zy("f", (int)9219, (long)(0x1E8B2A337199E183L ^ l2))] = (int)cT.Zy("f", (int)21253, (long)(0x3D9907A5BC071692L ^ l2));
        nArray3[cT.Zy("f", (int)30843, (long)(0xBB29058B747BDE7L ^ l2))] = (int)cT.Zy("f", (int)26305, (long)(0x797BA28EA102235FL ^ l2));
        nArray3[cT.Zy("f", (int)14940, (long)(0x5F1E78D7C4CA7FE9L ^ l2))] = (int)cT.Zy("f", (int)28508, (long)(0x1C38527E00272AEDL ^ l2));
        nArray3[cT.Zy("f", (int)165, (long)(0x5E65D58B86F0C500L ^ l2))] = (int)cT.Zy("f", (int)19773, (long)(0x10D3C56F1E9588BBL ^ l2));
        nArray3[cT.Zy("f", (int)22052, (long)(0x4060905A4EE939BL ^ l2))] = (int)cT.Zy("f", (int)3042, (long)(0x3C2AC8568F5E4E78L ^ l2));
        nArray3[cT.Zy("f", (int)10906, (long)(0x15D058D886B6F09L ^ l2))] = (int)cT.Zy("f", (int)3042, (long)(0x3C2AC8568F5E4E78L ^ l2));
        nArray3[cT.Zy("f", (int)26855, (long)(0x163952A49353AD69L ^ l2))] = (int)cT.Zy("f", (int)9348, (long)(0x567E9121C9D9E11DL ^ l2));
        nArray3[cT.Zy("f", (int)16329, (long)(0x65081A5B72777A51L ^ l2))] = (int)cT.Zy("f", (int)411, (long)(0x7FA1A9AE77E3442BL ^ l2));
        nArray3[cT.Zy("f", (int)1508, (long)(0x3BCF7519659EC071L ^ l2))] = (int)cT.Zy("f", (int)15639, (long)(0x61E999B4F0ACF8B3L ^ l2));
        this.CeLKq = new cC(this, mr.clS(nArray3)).Vy(1.0).Vw(1.0).Vx(10.0).VA(3.0).Vz((String)((Object)cT.Zv("o", (int)31067, (long)(0x390E55A742B28974L ^ l2))));
        int[] nArray4 = new int[cT.Zy("f", (int)13865, (long)(0x2A191A010D2773A2L ^ l2))];
        nArray4[0] = (int)cT.Zy("f", (int)99, (long)(0x3C5EBAE06B08C5ECL ^ l2));
        nArray4[1] = (int)cT.Zy("f", (int)24770, (long)(0x4A10DF1004D82540L ^ l2));
        nArray4[2] = (int)cT.Zy("f", (int)14196, (long)(0x739CB7E8770372E0L ^ l2));
        nArray4[3] = (int)cT.Zy("f", (int)1745, (long)(0x2B24107DBE18C359L ^ l2));
        nArray4[4] = (int)cT.Zy("f", (int)18369, (long)(0x104AB5A61978025CL ^ l2));
        nArray4[5] = (int)cT.Zy("f", (int)3042, (long)(0x3C2AC8568F5E4E78L ^ l2));
        nArray4[cT.Zy("f", (int)7973, (long)(0x7D6DFAB7CFE3DA9CL ^ l2))] = (int)cT.Zy("f", (int)9348, (long)(0x567E9121C9D9E11DL ^ l2));
        nArray4[cT.Zy("f", (int)4341, (long)(0x883BFBDD8CA5576L ^ l2))] = (int)cT.Zy("f", (int)9348, (long)(0x567E9121C9D9E11DL ^ l2));
        nArray4[cT.Zy("f", (int)9219, (long)(0x1E8B2A337199E183L ^ l2))] = (int)cT.Zy("f", (int)12106, (long)(0x6CFD2B220DDFEAFDL ^ l2));
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

    /*
     * Unable to fully structure code
     */
    private void Zl(MatrixStack var1_1, AbstractClientPlayerEntity var2_2, PlayerEntityModel var3_3, Identifier var4_4, float var5_5, float var6_6) {
        block44: {
            block46: {
                block39: {
                    var7_7 = cT.AanCe ^ 93325792430213L;
                    var3_3.leftPants.visible = true;
                    var3_3.rightPants.visible = true;
                    var3_3.leftSleeve.visible = true;
                    var3_3.rightSleeve.visible = true;
                    var3_3.jacket.visible = true;
                    v0 = dh.afl();
                    var3_3.hat.visible = true;
                    var10_8 = var2_2.getEntityPos().subtract(rD.dlmvG.gameRenderer.getCamera().getCameraPos());
                    var2_2.setPosition(var2_2.getEntityPos().add(0.0, this.LesoJ.VI() / 50.0, 0.0));
                    var2_2.lastX = var2_2.getX();
                    var2_2.lastY = var2_2.getY();
                    var2_2.lastZ = var2_2.getZ();
                    var2_2.lastBodyYaw = var2_2.bodyYaw;
                    var2_2.lastHeadYaw = var2_2.headYaw;
                    var2_2.lastYaw = var2_2.getYaw();
                    var9_9 = v0;
                    var2_2.lastPitch = var2_2.getPitch();
                    var1_1.push();
                    var1_1.translate(var10_8.x, var10_8.y, var10_8.z);
                    var11_10 = MathHelper.lerp((float)var6_6, (float)var2_2.lastBodyYaw, (float)var2_2.bodyYaw);
                    var1_1.multiply((Quaternionfc)RotationAxis.POSITIVE_Y.rotationDegrees(180.0f - var11_10));
                    this.Zm(var1_1);
                    var12_11 = rD.dlmvG.getEntityRenderDispatcher().getPlayerRenderer(var2_2);
                    var13_12 = new PlayerEntityRenderState();
                    var12_11.updateRenderState((PlayerLikeEntity)var2_2, var13_12, var6_6);
                    var14_13 = (WalkAnimationStateAccessor)var2_2.limbAnimator;
                    var13_12.limbSwingAmplitude = var2_2.limbAnimator.getSpeed();
                    var13_12.limbSwingAnimationProgress = var14_13.getPosition();
                    var3_3.setAngles(var13_12);
                    var15_14 = mG.cnQ(this.cxjIy.Wh()).cob(var5_5);
                    var16_15 = var15_14.con();
                    var17_16 = LivingEntityRenderer.getOverlay((LivingEntityRenderState)var13_12, (float)0.0f);
                    if (!this.IOXoW.SQ(1)) break block46;
                    var18_17 = rD.dlmvG.getTextureManager().getTexture(var4_4);
                    var19_18 = new BufferAllocator(VertexFormats.POSITION_TEXTURE.getVertexSize() * cT.Zy("f", (int)18015, (long)(7927451159427276179L ^ var7_7)));
                    try {
                        block38: {
                            block36: {
                                var20_20 = new BufferBuilder(var19_18, VertexFormat.DrawMode.QUADS, VertexFormats.POSITION_TEXTURE);
                                var3_3.render(var1_1, (VertexConsumer)var20_20, (int)cT.Zy("f", (int)12751, (long)(6631827471017585188L ^ var7_7)), var17_16);
                                var21_23 = var20_20.endNullable();
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
                                            lF.cfD(kR.NElVn, var21_23, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, Zo(net.minecraft.client.texture.AbstractTexture com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)((AbstractTexture)var18_17));
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
            var18_17 = new BufferAllocator(VertexFormats.POSITION.getVertexSize() * cT.Zy("f", (int)2303, (long)(2830415235329397532L ^ var7_7)));
            try {
                block43: {
                    block41: {
                        var19_18 = new BufferBuilder((BufferAllocator)var18_17, VertexFormat.DrawMode.QUADS, VertexFormats.POSITION);
                        var3_3.render(var1_1, (VertexConsumer)var19_18, (int)cT.Zy("f", (int)14940, (long)(6853989076366369155L ^ var7_7)), var17_16);
                        var20_20 = var19_18.endNullable();
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
                                    lF.cfD(kR.vTohM, (BuiltBuffer)var20_20, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, Zn(com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)());
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
        var1_1.pop();
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

    private void Zm(MatrixStack matrixStack) {
        matrixStack.scale(-1.0f, -1.0f, 1.0f);
        matrixStack.scale(1.6f, 1.8f, 1.6f);
        matrixStack.translate(0.0f, -1.501f, 0.0f);
    }

    private static Throwable Zr(Throwable throwable) {
        return throwable;
    }

    private static int Zw(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x2191;
        if (GsgQV[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = wyaXa[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])PgAJk.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    PgAJk.put(l4, objectArray);
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
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cT.GsgQV[n3] = n4;
        }
        return GsgQV[n3];
    }

    private static /* synthetic */ void Zn(RenderPass renderPass) {
    }

    private static Object Zu(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = cT.Zt(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static /* synthetic */ void Zo(AbstractTexture abstractTexture, RenderPass renderPass) {
        long l2 = AanCe ^ 0xA0CE5C9797BL;
        renderPass.bindTexture((String)((Object)cT.Zv("o", (int)15467, (long)(0x3B8AC2E9534DA3D1L ^ l2))), abstractTexture.getGlTextureView(), abstractTexture.getSampler());
    }

    private static String Zt(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x142A;
        if (VapyU[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])bpJNw.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    bpJNw.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cT", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = UiVsP[n3].getBytes("ISO-8859-1");
            cT.VapyU[n3] = cT.Zs(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return VapyU[n3];
    }

    @hG
    public void Zj(go.sX sX2) {
        long l2 = AanCe ^ 0x77CC48A31A54L;
        try {
            if (!this.bab()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw cT.Zr(matchException);
        }
        MatrixStack matrixStack = sX2.bbh();
        float f2 = sX2.bbi();
        this.iJyDI.forEach(cT$so -> this.Zl(matrixStack, cT$so.VwpaT, cT$so.ugYAv, cT$so.UvTDM, cT$so.dnx(), f2));
    }

    @hG
    public void Zi(gH.th th2) {
        cT cT2;
        block4: {
            block5: {
                long l2 = AanCe ^ 0x4D9FFB04477AL;
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
            Entity entity;
            block18: {
                EntityStatusS2CPacket entityStatusS2CPacket;
                iS[] iSArray;
                block17: {
                    Packet<?> packet;
                    long l2;
                    block15: {
                        l2 = AanCe ^ 0x2FB6FEDE836EL;
                        iSArray = dh.afl();
                        try {
                            if (!this.bab()) {
                                return;
                            }
                        }
                        catch (MatchException matchException) {
                            throw cT.Zr(matchException);
                        }
                        Packet<?> packet2 = tk2.bcf();
                        try {
                            try {
                                packet = packet2;
                                if (iSArray != null) break block15;
                                if (!(packet instanceof EntityStatusS2CPacket)) break block16;
                            }
                            catch (MatchException matchException) {
                                throw cT.Zr(matchException);
                            }
                            packet = packet2;
                        }
                        catch (MatchException matchException) {
                            throw cT.Zr(matchException);
                        }
                    }
                    EntityStatusS2CPacket entityStatusS2CPacket2 = (EntityStatusS2CPacket)packet;
                    try {
                        try {
                            entityStatusS2CPacket = entityStatusS2CPacket2;
                            if (iSArray != null) break block17;
                            if (entityStatusS2CPacket.getStatus() != cT.Zy("f", (int)30938, (long)(0xC505E92B136A8EDL ^ l2))) break block16;
                        }
                        catch (MatchException matchException) {
                            throw cT.Zr(matchException);
                        }
                        entityStatusS2CPacket = entityStatusS2CPacket2;
                    }
                    catch (MatchException matchException) {
                        throw cT.Zr(matchException);
                    }
                }
                Entity entity2 = entityStatusS2CPacket.getEntity((World)rD.dlmvG.world);
                try {
                    try {
                        entity = entity2;
                        if (iSArray != null) break block18;
                        if (!(entity instanceof PlayerEntity)) break block16;
                    }
                    catch (MatchException matchException) {
                        throw cT.Zr(matchException);
                    }
                    entity = entity2;
                }
                catch (MatchException matchException) {
                    throw cT.Zr(matchException);
                }
            }
            PlayerEntity playerEntity = (PlayerEntity)entity;
            OtherClientPlayerEntity otherClientPlayerEntity = new OtherClientPlayerEntity(rD.dlmvG.world, new GameProfile(playerEntity.getUuid(), playerEntity.getName().getString()));
            otherClientPlayerEntity.copyPositionAndRotation((Entity)playerEntity);
            otherClientPlayerEntity.bodyYaw = playerEntity.bodyYaw;
            otherClientPlayerEntity.headYaw = playerEntity.headYaw;
            otherClientPlayerEntity.lastBodyYaw = otherClientPlayerEntity.bodyYaw;
            otherClientPlayerEntity.lastHeadYaw = otherClientPlayerEntity.headYaw;
            otherClientPlayerEntity.setSneaking(playerEntity.isSneaking());
            WalkAnimationStateAccessor walkAnimationStateAccessor = (WalkAnimationStateAccessor)playerEntity.limbAnimator;
            WalkAnimationStateAccessor walkAnimationStateAccessor2 = (WalkAnimationStateAccessor)otherClientPlayerEntity.limbAnimator;
            otherClientPlayerEntity.limbAnimator.setSpeed(playerEntity.limbAnimator.getSpeed());
            walkAnimationStateAccessor2.setPosition(walkAnimationStateAccessor.getPosition());
            this.iJyDI.add(new cT$so(this, (AbstractClientPlayerEntity)otherClientPlayerEntity, otherClientPlayerEntity.getSkin().body().texturePath()));
        }
    }

    private static int Zx(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cT.Zw(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
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

