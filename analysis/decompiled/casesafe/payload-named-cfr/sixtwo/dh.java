/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.platform.DepthTestFunction
 *  net.minecraft.network.packet.Packet
 *  net.minecraft.network.packet.s2c.common.DisconnectS2CPacket
 *  net.minecraft.network.packet.s2c.play.GameStateChangeS2CPacket
 *  net.minecraft.network.packet.s2c.play.GameStateChangeS2CPacket$Reason
 *  net.minecraft.network.packet.s2c.play.WorldTimeUpdateS2CPacket
 *  net.minecraft.util.math.Box
 *  net.minecraft.world.World
 *  org.joml.Quaternionf
 *  org.joml.Quaternionfc
 */
package sixtwo;

import com.mojang.blaze3d.platform.DepthTestFunction;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.time.LocalTime;
import java.time.ZoneId;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.network.packet.Packet;
import net.minecraft.network.packet.s2c.common.DisconnectS2CPacket;
import net.minecraft.network.packet.s2c.play.GameStateChangeS2CPacket;
import net.minecraft.network.packet.s2c.play.WorldTimeUpdateS2CPacket;
import net.minecraft.util.math.Box;
import net.minecraft.world.World;
import org.joml.Quaternionf;
import org.joml.Quaternionfc;
import sixtwo.cA;
import sixtwo.cC;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.dh$sy;
import sixtwo.dh$sz;
import sixtwo.gH;
import sixtwo.gL;
import sixtwo.gM;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jI;
import sixtwo.kC;
import sixtwo.kG;
import sixtwo.kH;
import sixtwo.kS;
import sixtwo.lG;
import sixtwo.mG;
import sixtwo.mZ;
import sixtwo.mr;
import sixtwo.ob;
import sixtwo.rD;

public class dh
extends gg
implements lG {
    private final cJ mfkLN;
    private final ct jabvB;
    private final cu GBNpt;
    private final cu CqmWf;
    private final cG GGEeK;
    private final cJ yFtsJ;
    private final ct qpOXm;
    private final cu BoBPt;
    private final cu aZAwH;
    private final ct JQMui;
    private final cu ZpFTL;
    private final cu YJtQI;
    private final cu LqvcY;
    private final cu sZhib;
    private final cu GUxQz;
    private final cu NTDZv;
    private final cu wVJGm;
    private final cC WEVIb;
    private final cJ YdEwv;
    private final ct pJzyP;
    private final cu fqmSC;
    private final cu eQLga;
    private final cu erIOP;
    private final cu HvDcw;
    private final ct tOEQJ;
    private final cu vkaUD;
    private final cu vNlIZ;
    private final cu uxQGU;
    private final cG UipTW;
    private final cA MbiQi;
    private final cJ VkfWt;
    private final dh$sy xPMvL;
    private final Box UEYnO;
    private final List<dh$sz> ZlHFA;
    private final kS XRoTS;
    private static iS[] Bzwgh;
    private static final long lbjfT;
    private static final String[] GyoEr;
    private static final String[] RhGgX;
    private static final Map VsJnk;
    private static final long[] orrPG;
    private static final Integer[] venjr;
    private static final Map qyhit;
    private static final long[] ecoWj;
    private static final Long[] knyDH;
    private static final Map ZlHiy;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dh() {
        long l2 = lbjfT ^ 0xDDB8012C661L;
        super(gf.aZL((int)dh.aft("z", (int)22860, (long)(0x1A327D49A9A0BB72L ^ l2)), false, gh.nOCvV));
        int[] nArray = new int[dh.aft("z", (int)31923, (long)(0x3C6BD551318F1EEBL ^ l2))];
        nArray[0] = (int)dh.aft("z", (int)18478, (long)(0x100BE5E8AE11AA57L ^ l2));
        nArray[1] = (int)dh.aft("z", (int)23039, (long)(0xDF5F125B1803BABL ^ l2));
        nArray[2] = (int)dh.aft("z", (int)29944, (long)(0x55A5B0677D7D16CEL ^ l2));
        nArray[3] = (int)dh.aft("z", (int)4962, (long)(0xA6C395DC8D8F159L ^ l2));
        nArray[4] = (int)dh.aft("z", (int)21355, (long)(0x68CFE0CFBF96B123L ^ l2));
        nArray[5] = (int)dh.aft("z", (int)1215, (long)(0x16B1FBF3801BE6DCL ^ l2));
        nArray[dh.aft("z", (int)30838, (long)(0x5E98C11C9D3D1A04L ^ l2))] = (int)dh.aft("z", (int)2153, (long)(0x9B9EBB20B91EA0FL ^ l2));
        nArray[dh.aft("z", (int)8036, (long)(0x6A1D3447DC5E7D06L ^ l2))] = (int)dh.aft("z", (int)9792, (long)(0x1613BCD5ED904412L ^ l2));
        nArray[dh.aft("z", (int)12333, (long)(0x230B26DA24E0525DL ^ l2))] = (int)dh.aft("z", (int)29301, (long)(0x636FDF8D882A105CL ^ l2));
        this.mfkLN = new cJ(this, mr.clS(nArray)).WE(false);
        int[] nArray2 = new int[dh.aft("z", (int)3294, (long)(0x3D22ADBB3D116EF5L ^ l2))];
        nArray2[0] = (int)dh.aft("z", (int)25279, (long)(0x6A211EA2E72900C9L ^ l2));
        nArray2[1] = (int)dh.aft("z", (int)6090, (long)(0x2551134DC275F58EL ^ l2));
        nArray2[2] = (int)dh.aft("z", (int)20743, (long)(0x2BA62CE23AC4B35CL ^ l2));
        nArray2[3] = (int)dh.aft("z", (int)9330, (long)(0xC1171115B52C65FL ^ l2));
        nArray2[4] = (int)dh.aft("z", (int)24462, (long)(0x197C73FFAE2DBDF0L ^ l2));
        nArray2[5] = (int)dh.aft("z", (int)2569, (long)(0x43918BB272496866L ^ l2));
        nArray2[dh.aft("z", (int)28145, (long)(0x11891106A9200F9FL ^ l2))] = (int)dh.aft("z", (int)12157, (long)(0x2BC8DCCC375DCD00L ^ l2));
        nArray2[dh.aft("z", (int)18176, (long)(0x7C57E4A08EE12561L ^ l2))] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        nArray2[dh.aft("z", (int)5807, (long)(0x76998D69AAE37497L ^ l2))] = (int)dh.aft("z", (int)22468, (long)(0x6C471CC1E8BB35F8L ^ l2));
        nArray2[dh.aft("z", (int)22970, (long)(0x7338696EEAB3BB87L ^ l2))] = (int)dh.aft("z", (int)16569, (long)(0x6F7EE8315655A28AL ^ l2));
        nArray2[dh.aft("z", (int)12056, (long)(0x3D44CD8D26804D27L ^ l2))] = (int)dh.aft("z", (int)29181, (long)(0x45D2A64E7FD093C4L ^ l2));
        nArray2[dh.aft("z", (int)7607, (long)(0x1A47A3128B9B7FF4L ^ l2))] = (int)dh.aft("z", (int)24850, (long)(0x35E5AEBFE71E033EL ^ l2));
        nArray2[dh.aft("z", (int)30510, (long)(0x37F032403C2B9543L ^ l2))] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        this.jabvB = new ct(this, mr.clS(nArray2));
        int[] nArray3 = new int[dh.aft("z", (int)22970, (long)(0x7338696EEAB3BB87L ^ l2))];
        nArray3[0] = (int)dh.aft("z", (int)23262, (long)(0x1679D7D2142D38B7L ^ l2));
        nArray3[1] = (int)dh.aft("z", (int)20743, (long)(0x2BA62CE23AC4B35CL ^ l2));
        nArray3[2] = (int)dh.aft("z", (int)24462, (long)(0x197C73FFAE2DBDF0L ^ l2));
        nArray3[3] = (int)dh.aft("z", (int)6090, (long)(0x2551134DC275F58EL ^ l2));
        nArray3[4] = (int)dh.aft("z", (int)2902, (long)(0x7A3B4050D9D76916L ^ l2));
        nArray3[5] = (int)dh.aft("z", (int)28656, (long)(0x59A68D0665048DAEL ^ l2));
        nArray3[dh.aft("z", (int)28145, (long)(0x11891106A9200F9FL ^ l2))] = (int)dh.aft("z", (int)12157, (long)(0x2BC8DCCC375DCD00L ^ l2));
        nArray3[dh.aft("z", (int)18176, (long)(0x7C57E4A08EE12561L ^ l2))] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        nArray3[dh.aft("z", (int)5807, (long)(0x76998D69AAE37497L ^ l2))] = (int)dh.aft("z", (int)14653, (long)(0x4B972E64D1585B0AL ^ l2));
        this.GBNpt = new cu(this.jabvB, mr.clS(nArray3));
        this.CqmWf = new cu(this.jabvB, mr.clS(new int[]{(int)dh.aft("z", (int)16008, (long)(0x4E170BEC2D1ADCC2L ^ l2)), (int)dh.aft("z", (int)26562, (long)(0x1CF52BB51BB285EDL ^ l2)), (int)dh.aft("z", (int)15208, (long)(0x6404D53D03CAD927L ^ l2)), (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2)), (int)dh.aft("z", (int)14653, (long)(0x4B972E64D1585B0AL ^ l2))}));
        int[] nArray4 = new int[dh.aft("z", (int)1447, (long)(0x5FE4D325ADBA67E0L ^ l2))];
        nArray4[0] = (int)dh.aft("z", (int)25279, (long)(0x6A211EA2E72900C9L ^ l2));
        nArray4[1] = (int)dh.aft("z", (int)6090, (long)(0x2551134DC275F58EL ^ l2));
        nArray4[2] = (int)dh.aft("z", (int)20743, (long)(0x2BA62CE23AC4B35CL ^ l2));
        nArray4[3] = (int)dh.aft("z", (int)9330, (long)(0xC1171115B52C65FL ^ l2));
        nArray4[4] = (int)dh.aft("z", (int)24462, (long)(0x197C73FFAE2DBDF0L ^ l2));
        nArray4[5] = (int)dh.aft("z", (int)2569, (long)(0x43918BB272496866L ^ l2));
        nArray4[dh.aft("z", (int)28145, (long)(0x11891106A9200F9FL ^ l2))] = (int)dh.aft("z", (int)12157, (long)(0x2BC8DCCC375DCD00L ^ l2));
        nArray4[dh.aft("z", (int)18176, (long)(0x7C57E4A08EE12561L ^ l2))] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        nArray4[dh.aft("z", (int)5807, (long)(0x76998D69AAE37497L ^ l2))] = (int)dh.aft("z", (int)14653, (long)(0x4B972E64D1585B0AL ^ l2));
        nArray4[dh.aft("z", (int)22970, (long)(0x7338696EEAB3BB87L ^ l2))] = (int)dh.aft("z", (int)7355, (long)(0x1D036D095976FE95L ^ l2));
        nArray4[dh.aft("z", (int)11633, (long)(0x5F69527488914F33L ^ l2))] = (int)dh.aft("z", (int)7401, (long)(0x108E3AFF2F37EBCL ^ l2));
        nArray4[dh.aft("z", (int)1667, (long)(0xAAD1EB3D166E4B9L ^ l2))] = (int)dh.aft("z", (int)4547, (long)(0x5A8933C7179EF388L ^ l2));
        nArray4[dh.aft("z", (int)28168, (long)(0x263E8C7E113E8C6CL ^ l2))] = (int)dh.aft("z", (int)12157, (long)(0x2BC8DCCC375DCD00L ^ l2));
        nArray4[dh.aft("z", (int)21911, (long)(0x3634CF0E550D37F0L ^ l2))] = (int)dh.aft("z", (int)824, (long)(0x75393C0F956CE14CL ^ l2));
        nArray4[dh.aft("z", (int)16948, (long)(0x359BB4A707D6A043L ^ l2))] = (int)dh.aft("z", (int)20743, (long)(0x2BA62CE23AC4B35CL ^ l2));
        this.GGEeK = new cG(this, mr.clS(nArray4)).Uf(rD.dlM().bjG().bis());
        int[] nArray5 = new int[dh.aft("z", (int)1667, (long)(0xAAD1EB3D166E4B9L ^ l2))];
        nArray5[0] = (int)dh.aft("z", (int)7401, (long)(0x108E3AFF2F37EBCL ^ l2));
        nArray5[1] = (int)dh.aft("z", (int)16470, (long)(0x3004428E64EF220AL ^ l2));
        nArray5[2] = (int)dh.aft("z", (int)6090, (long)(0x2551134DC275F58EL ^ l2));
        nArray5[3] = (int)dh.aft("z", (int)22330, (long)(0x253454DCAEBB350EL ^ l2));
        nArray5[4] = (int)dh.aft("z", (int)1150, (long)(0x4A083BE1A65E664EL ^ l2));
        nArray5[5] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        nArray5[dh.aft("z", (int)28145, (long)(0x11891106A9200F9FL ^ l2))] = (int)dh.aft("z", (int)7355, (long)(0x1D036D095976FE95L ^ l2));
        nArray5[dh.aft("z", (int)18176, (long)(0x7C57E4A08EE12561L ^ l2))] = (int)dh.aft("z", (int)23262, (long)(0x1679D7D2142D38B7L ^ l2));
        nArray5[dh.aft("z", (int)5807, (long)(0x76998D69AAE37497L ^ l2))] = (int)dh.aft("z", (int)24462, (long)(0x197C73FFAE2DBDF0L ^ l2));
        nArray5[dh.aft("z", (int)22970, (long)(0x7338696EEAB3BB87L ^ l2))] = (int)dh.aft("z", (int)16973, (long)(0x7A01E1948B69A078L ^ l2));
        nArray5[dh.aft("z", (int)11633, (long)(0x5F69527488914F33L ^ l2))] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        this.yFtsJ = new cJ(this, mr.clS(nArray5)).WE(true);
        int[] nArray6 = new int[dh.aft("z", (int)22970, (long)(0x7338696EEAB3BB87L ^ l2))];
        nArray6[0] = (int)dh.aft("z", (int)23262, (long)(0x1679D7D2142D38B7L ^ l2));
        nArray6[1] = (int)dh.aft("z", (int)24462, (long)(0x197C73FFAE2DBDF0L ^ l2));
        nArray6[2] = (int)dh.aft("z", (int)4061, (long)(0x3D2543992D8DEDB5L ^ l2));
        nArray6[3] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        nArray6[4] = (int)dh.aft("z", (int)7355, (long)(0x1D036D095976FE95L ^ l2));
        nArray6[5] = (int)dh.aft("z", (int)30432, (long)(0x5479AD8F4A3014B1L ^ l2));
        nArray6[dh.aft("z", (int)28145, (long)(0x11891106A9200F9FL ^ l2))] = (int)dh.aft("z", (int)824, (long)(0x75393C0F956CE14CL ^ l2));
        nArray6[dh.aft("z", (int)18176, (long)(0x7C57E4A08EE12561L ^ l2))] = (int)dh.aft("z", (int)30417, (long)(0x5B6E4ECB86E794BBL ^ l2));
        nArray6[dh.aft("z", (int)5807, (long)(0x76998D69AAE37497L ^ l2))] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        this.qpOXm = new ct(this, mr.clS(nArray6));
        int[] nArray7 = new int[dh.aft("z", (int)18176, (long)(0x7C57E4A08EE12561L ^ l2))];
        nArray7[0] = (int)dh.aft("z", (int)25279, (long)(0x6A211EA2E72900C9L ^ l2));
        nArray7[1] = (int)dh.aft("z", (int)20743, (long)(0x2BA62CE23AC4B35CL ^ l2));
        nArray7[2] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        nArray7[3] = (int)dh.aft("z", (int)14653, (long)(0x4B972E64D1585B0AL ^ l2));
        nArray7[4] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        nArray7[5] = (int)dh.aft("z", (int)9330, (long)(0xC1171115B52C65FL ^ l2));
        nArray7[dh.aft("z", (int)28145, (long)(0x11891106A9200F9FL ^ l2))] = (int)dh.aft("z", (int)14653, (long)(0x4B972E64D1585B0AL ^ l2));
        this.BoBPt = new cu(this.qpOXm, mr.clS(nArray7));
        int[] nArray8 = new int[dh.aft("z", (int)28145, (long)(0x11891106A9200F9FL ^ l2))];
        nArray8[0] = (int)dh.aft("z", (int)7401, (long)(0x108E3AFF2F37EBCL ^ l2));
        nArray8[1] = (int)dh.aft("z", (int)1829, (long)(0x192DB93E0254657CL ^ l2));
        nArray8[2] = (int)dh.aft("z", (int)14653, (long)(0x4B972E64D1585B0AL ^ l2));
        nArray8[3] = (int)dh.aft("z", (int)9330, (long)(0xC1171115B52C65FL ^ l2));
        nArray8[4] = (int)dh.aft("z", (int)824, (long)(0x75393C0F956CE14CL ^ l2));
        nArray8[5] = (int)dh.aft("z", (int)4061, (long)(0x3D2543992D8DEDB5L ^ l2));
        this.aZAwH = new cu(this.qpOXm, mr.clS(nArray8));
        this.JQMui = new ct(this, mr.clS(new int[]{(int)dh.aft("z", (int)23262, (long)(0x1679D7D2142D38B7L ^ l2)), (int)dh.aft("z", (int)24462, (long)(0x197C73FFAE2DBDF0L ^ l2)), (int)dh.aft("z", (int)4061, (long)(0x3D2543992D8DEDB5L ^ l2)), (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2))}));
        this.ZpFTL = new cu(this.JQMui, mr.clS(new int[]{(int)dh.aft("z", (int)29730, (long)(0x46D41CC5FD8C1672L ^ l2)), (int)dh.aft("z", (int)6090, (long)(0x2551134DC275F58EL ^ l2)), (int)dh.aft("z", (int)30439, (long)(0x27C918FA96CF948BL ^ l2)), (int)dh.aft("z", (int)22330, (long)(0x253454DCAEBB350EL ^ l2))}));
        int[] nArray9 = new int[dh.aft("z", (int)18176, (long)(0x7C57E4A08EE12561L ^ l2))];
        nArray9[0] = (int)dh.aft("z", (int)23675, (long)(0x6A9F3E235925BE26L ^ l2));
        nArray9[1] = (int)dh.aft("z", (int)824, (long)(0x75393C0F956CE14CL ^ l2));
        nArray9[2] = (int)dh.aft("z", (int)20743, (long)(0x2BA62CE23AC4B35CL ^ l2));
        nArray9[3] = (int)dh.aft("z", (int)22330, (long)(0x253454DCAEBB350EL ^ l2));
        nArray9[4] = (int)dh.aft("z", (int)24462, (long)(0x197C73FFAE2DBDF0L ^ l2));
        nArray9[5] = (int)dh.aft("z", (int)22330, (long)(0x253454DCAEBB350EL ^ l2));
        nArray9[dh.aft("z", (int)28145, (long)(0x11891106A9200F9FL ^ l2))] = (int)dh.aft("z", (int)1150, (long)(0x4A083BE1A65E664EL ^ l2));
        this.YJtQI = new cu(this.JQMui, mr.clS(nArray9));
        this.LqvcY = new cu(this.JQMui, mr.clS(new int[]{(int)dh.aft("z", (int)3876, (long)(0x66D6C4BEE6E26D58L ^ l2)), (int)dh.aft("z", (int)6090, (long)(0x2551134DC275F58EL ^ l2)), (int)dh.aft("z", (int)21997, (long)(0x66969D7834B537BEL ^ l2))}));
        int[] nArray10 = new int[dh.aft("z", (int)18176, (long)(0x7C57E4A08EE12561L ^ l2))];
        nArray10[0] = (int)dh.aft("z", (int)13477, (long)(0x3F06246907E2D6E8L ^ l2));
        nArray10[1] = (int)dh.aft("z", (int)12246, (long)(0x1632B88A18CD4DA9L ^ l2));
        nArray10[2] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        nArray10[3] = (int)dh.aft("z", (int)22330, (long)(0x253454DCAEBB350EL ^ l2));
        nArray10[4] = (int)dh.aft("z", (int)24462, (long)(0x197C73FFAE2DBDF0L ^ l2));
        nArray10[5] = (int)dh.aft("z", (int)22330, (long)(0x253454DCAEBB350EL ^ l2));
        nArray10[dh.aft("z", (int)28145, (long)(0x11891106A9200F9FL ^ l2))] = (int)dh.aft("z", (int)1150, (long)(0x4A083BE1A65E664EL ^ l2));
        this.sZhib = new cu(this.JQMui, mr.clS(nArray10));
        int[] nArray11 = new int[dh.aft("z", (int)28145, (long)(0x11891106A9200F9FL ^ l2))];
        nArray11[0] = (int)dh.aft("z", (int)27831, (long)(0x40F21A2897048ED7L ^ l2));
        nArray11[1] = (int)dh.aft("z", (int)1829, (long)(0x192DB93E0254657CL ^ l2));
        nArray11[2] = (int)dh.aft("z", (int)22330, (long)(0x253454DCAEBB350EL ^ l2));
        nArray11[3] = (int)dh.aft("z", (int)14653, (long)(0x4B972E64D1585B0AL ^ l2));
        nArray11[4] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        nArray11[5] = (int)dh.aft("z", (int)9330, (long)(0xC1171115B52C65FL ^ l2));
        this.GUxQz = new cu(this.JQMui, mr.clS(nArray11));
        this.NTDZv = new cu(this.JQMui, mr.clS(new int[]{(int)dh.aft("z", (int)30613, (long)(0x7DF8ADB30CB315D4L ^ l2)), (int)dh.aft("z", (int)24462, (long)(0x197C73FFAE2DBDF0L ^ l2)), (int)dh.aft("z", (int)1150, (long)(0x4A083BE1A65E664EL ^ l2)), (int)dh.aft("z", (int)2067, (long)(0x7AA0EB0A0626A76L ^ l2)), (int)dh.aft("z", (int)9330, (long)(0xC1171115B52C65FL ^ l2))}));
        int[] nArray12 = new int[dh.aft("z", (int)22970, (long)(0x7338696EEAB3BB87L ^ l2))];
        nArray12[0] = (int)dh.aft("z", (int)3730, (long)(0x79107D4A1A5BECE7L ^ l2));
        nArray12[1] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        nArray12[2] = (int)dh.aft("z", (int)6090, (long)(0x2551134DC275F58EL ^ l2));
        nArray12[3] = (int)dh.aft("z", (int)12157, (long)(0x2BC8DCCC375DCD00L ^ l2));
        nArray12[4] = (int)dh.aft("z", (int)7355, (long)(0x1D036D095976FE95L ^ l2));
        nArray12[5] = (int)dh.aft("z", (int)23262, (long)(0x1679D7D2142D38B7L ^ l2));
        nArray12[dh.aft("z", (int)28145, (long)(0x11891106A9200F9FL ^ l2))] = (int)dh.aft("z", (int)24462, (long)(0x197C73FFAE2DBDF0L ^ l2));
        nArray12[dh.aft("z", (int)18176, (long)(0x7C57E4A08EE12561L ^ l2))] = (int)dh.aft("z", (int)4061, (long)(0x3D2543992D8DEDB5L ^ l2));
        nArray12[dh.aft("z", (int)5807, (long)(0x76998D69AAE37497L ^ l2))] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        this.wVJGm = new cu(this.JQMui, mr.clS(nArray12));
        int[] nArray13 = new int[dh.aft("z", (int)11633, (long)(0x5F69527488914F33L ^ l2))];
        nArray13[0] = (int)dh.aft("z", (int)23262, (long)(0x1679D7D2142D38B7L ^ l2));
        nArray13[1] = (int)dh.aft("z", (int)24462, (long)(0x197C73FFAE2DBDF0L ^ l2));
        nArray13[2] = (int)dh.aft("z", (int)4061, (long)(0x3D2543992D8DEDB5L ^ l2));
        nArray13[3] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        nArray13[4] = (int)dh.aft("z", (int)7355, (long)(0x1D036D095976FE95L ^ l2));
        nArray13[5] = (int)dh.aft("z", (int)30034, (long)(0x72D61AAF0414972AL ^ l2));
        nArray13[dh.aft("z", (int)28145, (long)(0x11891106A9200F9FL ^ l2))] = (int)dh.aft("z", (int)6090, (long)(0x2551134DC275F58EL ^ l2));
        nArray13[dh.aft("z", (int)18176, (long)(0x7C57E4A08EE12561L ^ l2))] = (int)dh.aft("z", (int)12157, (long)(0x2BC8DCCC375DCD00L ^ l2));
        nArray13[dh.aft("z", (int)5807, (long)(0x76998D69AAE37497L ^ l2))] = (int)dh.aft("z", (int)1829, (long)(0x192DB93E0254657CL ^ l2));
        nArray13[dh.aft("z", (int)22970, (long)(0x7338696EEAB3BB87L ^ l2))] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        this.WEVIb = new cC(this, mr.clS(nArray13)).Vy(100.0).Vw(0.0).Vx(24000.0).VA(0.0).Vz((String)((Object)dh.afq("m", (int)905, (long)(0x63129920CC2AB6B9L ^ l2))));
        int[] nArray14 = new int[dh.aft("z", (int)2709, (long)(0x36C279A2532068FEL ^ l2))];
        nArray14[0] = (int)dh.aft("z", (int)7401, (long)(0x108E3AFF2F37EBCL ^ l2));
        nArray14[1] = (int)dh.aft("z", (int)2067, (long)(0x7AA0EB0A0626A76L ^ l2));
        nArray14[2] = (int)dh.aft("z", (int)6090, (long)(0x2551134DC275F58EL ^ l2));
        nArray14[3] = (int)dh.aft("z", (int)22330, (long)(0x253454DCAEBB350EL ^ l2));
        nArray14[4] = (int)dh.aft("z", (int)1150, (long)(0x4A083BE1A65E664EL ^ l2));
        nArray14[5] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        nArray14[dh.aft("z", (int)28145, (long)(0x11891106A9200F9FL ^ l2))] = (int)dh.aft("z", (int)7355, (long)(0x1D036D095976FE95L ^ l2));
        nArray14[dh.aft("z", (int)18176, (long)(0x7C57E4A08EE12561L ^ l2))] = (int)dh.aft("z", (int)10814, (long)(0x23776A6983E1480CL ^ l2));
        nArray14[dh.aft("z", (int)5807, (long)(0x76998D69AAE37497L ^ l2))] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        nArray14[dh.aft("z", (int)22970, (long)(0x7338696EEAB3BB87L ^ l2))] = (int)dh.aft("z", (int)6090, (long)(0x2551134DC275F58EL ^ l2));
        nArray14[dh.aft("z", (int)11633, (long)(0x5F69527488914F33L ^ l2))] = (int)dh.aft("z", (int)9330, (long)(0xC1171115B52C65FL ^ l2));
        nArray14[dh.aft("z", (int)1667, (long)(0xAAD1EB3D166E4B9L ^ l2))] = (int)dh.aft("z", (int)2067, (long)(0x7AA0EB0A0626A76L ^ l2));
        nArray14[dh.aft("z", (int)28168, (long)(0x263E8C7E113E8C6CL ^ l2))] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        nArray14[dh.aft("z", (int)21911, (long)(0x3634CF0E550D37F0L ^ l2))] = (int)dh.aft("z", (int)20743, (long)(0x2BA62CE23AC4B35CL ^ l2));
        this.YdEwv = new cJ(this, mr.clS(nArray14)).WE(true);
        int[] nArray15 = new int[dh.aft("z", (int)18176, (long)(0x7C57E4A08EE12561L ^ l2))];
        nArray15[0] = (int)dh.aft("z", (int)30614, (long)(0xC7FE34C4E8095BEL ^ l2));
        nArray15[1] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        nArray15[2] = (int)dh.aft("z", (int)6090, (long)(0x2551134DC275F58EL ^ l2));
        nArray15[3] = (int)dh.aft("z", (int)9330, (long)(0xC1171115B52C65FL ^ l2));
        nArray15[4] = (int)dh.aft("z", (int)2067, (long)(0x7AA0EB0A0626A76L ^ l2));
        nArray15[5] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        nArray15[dh.aft("z", (int)28145, (long)(0x11891106A9200F9FL ^ l2))] = (int)dh.aft("z", (int)20743, (long)(0x2BA62CE23AC4B35CL ^ l2));
        this.pJzyP = new ct(this, mr.clS(nArray15));
        this.fqmSC = new cu(this.pJzyP, mr.clS(new int[]{(int)dh.aft("z", (int)7401, (long)(0x108E3AFF2F37EBCL ^ l2)), (int)dh.aft("z", (int)12157, (long)(0x2BC8DCCC375DCD00L ^ l2)), (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2)), (int)dh.aft("z", (int)6090, (long)(0x2551134DC275F58EL ^ l2)), (int)dh.aft("z", (int)20743, (long)(0x2BA62CE23AC4B35CL ^ l2))}));
        this.eQLga = new cu(this.pJzyP, mr.clS(new int[]{(int)dh.aft("z", (int)16511, (long)(0x5A09F44E78BFA20EL ^ l2)), (int)dh.aft("z", (int)6090, (long)(0x2551134DC275F58EL ^ l2)), (int)dh.aft("z", (int)24462, (long)(0x197C73FFAE2DBDF0L ^ l2)), (int)dh.aft("z", (int)22330, (long)(0x253454DCAEBB350EL ^ l2))}));
        int[] nArray16 = new int[dh.aft("z", (int)18176, (long)(0x7C57E4A08EE12561L ^ l2))];
        nArray16[0] = (int)dh.aft("z", (int)23262, (long)(0x1679D7D2142D38B7L ^ l2));
        nArray16[1] = (int)dh.aft("z", (int)2067, (long)(0x7AA0EB0A0626A76L ^ l2));
        nArray16[2] = (int)dh.aft("z", (int)1829, (long)(0x192DB93E0254657CL ^ l2));
        nArray16[3] = (int)dh.aft("z", (int)22330, (long)(0x253454DCAEBB350EL ^ l2));
        nArray16[4] = (int)dh.aft("z", (int)30417, (long)(0x5B6E4ECB86E794BBL ^ l2));
        nArray16[5] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        nArray16[dh.aft("z", (int)28145, (long)(0x11891106A9200F9FL ^ l2))] = (int)dh.aft("z", (int)20743, (long)(0x2BA62CE23AC4B35CL ^ l2));
        this.erIOP = new cu(this.pJzyP, mr.clS(nArray16));
        this.HvDcw = new cu(this.pJzyP, mr.clS(new int[]{(int)dh.aft("z", (int)13901, (long)(0x3D8F93038527D401L ^ l2)), (int)dh.aft("z", (int)22330, (long)(0x253454DCAEBB350EL ^ l2)), (int)dh.aft("z", (int)824, (long)(0x75393C0F956CE14CL ^ l2)), (int)dh.aft("z", (int)1107, (long)(0x49673FA38C596605L ^ l2))}));
        this.tOEQJ = new ct(this, mr.clS(new int[]{(int)dh.aft("z", (int)8036, (long)(0x5C5E743308F7D22L ^ l2)), (int)dh.aft("z", (int)824, (long)(0x75393C0F956CE14CL ^ l2)), (int)dh.aft("z", (int)1150, (long)(0x4A083BE1A65E664EL ^ l2))}));
        this.vkaUD = new cu(this.tOEQJ, mr.clS(new int[]{(int)dh.aft("z", (int)6702, (long)(0x6FF42880AEA9781FL ^ l2)), (int)dh.aft("z", (int)824, (long)(0x75393C0F956CE14CL ^ l2)), (int)dh.aft("z", (int)22330, (long)(0x253454DCAEBB350EL ^ l2)), (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2))}));
        this.vNlIZ = new cu(this.tOEQJ, mr.clS(new int[]{(int)dh.aft("z", (int)7401, (long)(0x108E3AFF2F37EBCL ^ l2)), (int)dh.aft("z", (int)12157, (long)(0x2BC8DCCC375DCD00L ^ l2)), (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2)), (int)dh.aft("z", (int)6090, (long)(0x2551134DC275F58EL ^ l2)), (int)dh.aft("z", (int)20743, (long)(0x2BA62CE23AC4B35CL ^ l2))}));
        int[] nArray17 = new int[dh.aft("z", (int)5807, (long)(0x76998D69AAE37497L ^ l2))];
        nArray17[0] = (int)dh.aft("z", (int)2576, (long)(0x6D247B2C79486863L ^ l2));
        nArray17[1] = (int)dh.aft("z", (int)19277, (long)(0x49439E7AF4F5A903L ^ l2));
        nArray17[2] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        nArray17[3] = (int)dh.aft("z", (int)20743, (long)(0x2BA62CE23AC4B35CL ^ l2));
        nArray17[4] = (int)dh.aft("z", (int)20743, (long)(0x2BA62CE23AC4B35CL ^ l2));
        nArray17[5] = (int)dh.aft("z", (int)24462, (long)(0x197C73FFAE2DBDF0L ^ l2));
        nArray17[dh.aft("z", (int)28145, (long)(0x11891106A9200F9FL ^ l2))] = (int)dh.aft("z", (int)30417, (long)(0x5B6E4ECB86E794BBL ^ l2));
        nArray17[dh.aft("z", (int)18176, (long)(0x7C57E4A08EE12561L ^ l2))] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        this.uxQGU = new cu(this.tOEQJ, mr.clS(nArray17)).SY();
        int[] nArray18 = new int[dh.aft("z", (int)22970, (long)(0x7338696EEAB3BB87L ^ l2))];
        nArray18[0] = (int)dh.aft("z", (int)28522, (long)(0x14AC43CBE7878D2FL ^ l2));
        nArray18[1] = (int)dh.aft("z", (int)824, (long)(0x75393C0F956CE14CL ^ l2));
        nArray18[2] = (int)dh.aft("z", (int)1150, (long)(0x4A083BE1A65E664EL ^ l2));
        nArray18[3] = (int)dh.aft("z", (int)7355, (long)(0x1D036D095976FE95L ^ l2));
        nArray18[4] = (int)dh.aft("z", (int)7401, (long)(0x108E3AFF2F37EBCL ^ l2));
        nArray18[5] = (int)dh.aft("z", (int)824, (long)(0x75393C0F956CE14CL ^ l2));
        nArray18[dh.aft("z", (int)28145, (long)(0x11891106A9200F9FL ^ l2))] = (int)dh.aft("z", (int)12157, (long)(0x2BC8DCCC375DCD00L ^ l2));
        nArray18[dh.aft("z", (int)18176, (long)(0x7C57E4A08EE12561L ^ l2))] = (int)dh.aft("z", (int)824, (long)(0x75393C0F956CE14CL ^ l2));
        nArray18[dh.aft("z", (int)5807, (long)(0x76998D69AAE37497L ^ l2))] = (int)dh.aft("z", (int)20743, (long)(0x2BA62CE23AC4B35CL ^ l2));
        this.UipTW = new cG(this, mr.clS(nArray18)).Uf(rD.dlM().bjG().bis());
        int[] nArray19 = new int[dh.aft("z", (int)22970, (long)(0x7338696EEAB3BB87L ^ l2))];
        nArray19[0] = (int)dh.aft("z", (int)28522, (long)(0x14AC43CBE7878D2FL ^ l2));
        nArray19[1] = (int)dh.aft("z", (int)824, (long)(0x75393C0F956CE14CL ^ l2));
        nArray19[2] = (int)dh.aft("z", (int)1150, (long)(0x4A083BE1A65E664EL ^ l2));
        nArray19[3] = (int)dh.aft("z", (int)7355, (long)(0x1D036D095976FE95L ^ l2));
        nArray19[4] = (int)dh.aft("z", (int)16511, (long)(0x5A09F44E78BFA20EL ^ l2));
        nArray19[5] = (int)dh.aft("z", (int)6090, (long)(0x2551134DC275F58EL ^ l2));
        nArray19[dh.aft("z", (int)28145, (long)(0x11891106A9200F9FL ^ l2))] = (int)dh.aft("z", (int)22330, (long)(0x253454DCAEBB350EL ^ l2));
        nArray19[dh.aft("z", (int)18176, (long)(0x7C57E4A08EE12561L ^ l2))] = (int)dh.aft("z", (int)1150, (long)(0x4A083BE1A65E664EL ^ l2));
        nArray19[dh.aft("z", (int)5807, (long)(0x76998D69AAE37497L ^ l2))] = (int)dh.aft("z", (int)23514, (long)(0x4565F1A5CDBB3980L ^ l2));
        this.MbiQi = new cA(this, mr.clS(nArray19)).UG(1.0).UE(0.0).UF(256.0).UI(64.0, 128.0).UH((String)((Object)dh.afq("m", (int)8194, (long)(0x13F3E44E76C1530L ^ l2))));
        int[] nArray20 = new int[dh.aft("z", (int)21911, (long)(0x3634CF0E550D37F0L ^ l2))];
        nArray20[0] = (int)dh.aft("z", (int)13901, (long)(0x3D8F93038527D401L ^ l2));
        nArray20[1] = (int)dh.aft("z", (int)21997, (long)(0x66969D7834B537BEL ^ l2));
        nArray20[2] = (int)dh.aft("z", (int)22330, (long)(0x253454DCAEBB350EL ^ l2));
        nArray20[3] = (int)dh.aft("z", (int)2569, (long)(0x43918BB272496866L ^ l2));
        nArray20[4] = (int)dh.aft("z", (int)7355, (long)(0x1D036D095976FE95L ^ l2));
        nArray20[5] = (int)dh.aft("z", (int)30614, (long)(0xC7FE34C4E8095BEL ^ l2));
        nArray20[dh.aft("z", (int)28145, (long)(0x11891106A9200F9FL ^ l2))] = (int)dh.aft("z", (int)24462, (long)(0x197C73FFAE2DBDF0L ^ l2));
        nArray20[dh.aft("z", (int)18176, (long)(0x7C57E4A08EE12561L ^ l2))] = (int)dh.aft("z", (int)9330, (long)(0xC1171115B52C65FL ^ l2));
        nArray20[dh.aft("z", (int)5807, (long)(0x76998D69AAE37497L ^ l2))] = (int)dh.aft("z", (int)2067, (long)(0x7AA0EB0A0626A76L ^ l2));
        nArray20[dh.aft("z", (int)22970, (long)(0x7338696EEAB3BB87L ^ l2))] = (int)dh.aft("z", (int)7355, (long)(0x1D036D095976FE95L ^ l2));
        nArray20[dh.aft("z", (int)11633, (long)(0x5F69527488914F33L ^ l2))] = (int)dh.aft("z", (int)13901, (long)(0x3D8F93038527D401L ^ l2));
        nArray20[dh.aft("z", (int)1667, (long)(0xAAD1EB3D166E4B9L ^ l2))] = (int)dh.aft("z", (int)6042, (long)(0x71B8E99CBBB575E1L ^ l2));
        nArray20[dh.aft("z", (int)28168, (long)(0x263E8C7E113E8C6CL ^ l2))] = (int)dh.aft("z", (int)21997, (long)(0x66969D7834B537BEL ^ l2));
        this.VkfWt = new cJ(this, mr.clS(nArray20)).WE(true);
        this.UEYnO = new Box(-0.5, -0.5, -0.5, 0.5, 0.5, 0.5);
        this.ZlHFA = new ArrayList<dh$sz>();
        this.XRoTS = XSRvt.defaultState().bVG(DepthTestFunction.LEQUAL_DEPTH_TEST).bVH(false);
        this.jabvB.Vf(this.mfkLN::WF);
        this.GGEeK.Vf(this.mfkLN::WF);
        this.qpOXm.Vf(this.yFtsJ::WF);
        this.JQMui.Vf(() -> {
            boolean bl2;
            block8: {
                block7: {
                    iS[] iSArray;
                    block6: {
                        long l2 = lbjfT ^ 0x7458DCE93AFCL;
                        iSArray = dh.afl();
                        try {
                            try {
                                bl2 = this.yFtsJ.WF();
                                if (iSArray != null) break block6;
                                if (!bl2) break block7;
                            }
                            catch (MatchException matchException) {
                                throw dh.afm(matchException);
                            }
                            bl2 = this.qpOXm.SQ(0);
                        }
                        catch (MatchException matchException) {
                            throw dh.afm(matchException);
                        }
                    }
                    try {
                        if (iSArray != null) break block8;
                        if (!bl2) break block7;
                    }
                    catch (MatchException matchException) {
                        throw dh.afm(matchException);
                    }
                    bl2 = true;
                    break block8;
                }
                bl2 = false;
            }
            return bl2;
        });
        this.WEVIb.Vf(() -> {
            boolean bl2;
            block8: {
                block7: {
                    iS[] iSArray;
                    block6: {
                        long l2 = lbjfT ^ 0xF8113FB3253L;
                        iSArray = dh.afl();
                        try {
                            try {
                                bl2 = this.yFtsJ.WF();
                                if (iSArray != null) break block6;
                                if (!bl2) break block7;
                            }
                            catch (MatchException matchException) {
                                throw dh.afm(matchException);
                            }
                            bl2 = this.qpOXm.SQ(1);
                        }
                        catch (MatchException matchException) {
                            throw dh.afm(matchException);
                        }
                    }
                    try {
                        if (iSArray != null) break block8;
                        if (!bl2) break block7;
                    }
                    catch (MatchException matchException) {
                        throw dh.afm(matchException);
                    }
                    bl2 = true;
                    break block8;
                }
                bl2 = false;
            }
            return bl2;
        });
        this.pJzyP.Vf(this.YdEwv::WF);
        this.UipTW.Vf(() -> this.tOEQJ.SQ(2));
        this.MbiQi.Vf(() -> this.tOEQJ.SQ(2));
        this.VkfWt.Vf(() -> this.tOEQJ.SQ(2));
        this.xPMvL = new dh$sy();
    }

    /*
     * Unable to fully structure code
     */
    static {
        block24: {
            block23: {
                block22: {
                    block21: {
                        block20: {
                            dh.lbjfT = gb.aYR(-6990819512291693519L, -5866111898942359079L, MethodHandles.lookup().lookupClass()).a(186571776899723L);
                            dh.VsJnk = new HashMap<K, V>(13);
                            var22 = dh.lbjfT ^ 136658407006073L;
                            dh.afk(null);
                            var24_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                            v0 = SecretKeyFactory.getInstance("DES");
                            v1 = new byte[8];
                            v2 = v1;
                            v1[0] = (byte)(var22 >>> 56);
                            for (var25_2 = 1; var25_2 < 8; ++var25_2) {
                                v2 = v2;
                                v2[var25_2] = (byte)(var22 << var25_2 * 8 >>> 56);
                            }
                            var24_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                            var31_3 = new String[3];
                            var29_4 = 0;
                            var28_5 = "\tc\u0087\u00b1\u00d9\u0093\u00daE\u0092\u00d0\u0090\u00fa[\u00c6j\u00e2\u0010\u00c2\u00b9\u00ec\u0097\u00e2\u00fd,\u00b6\u0084V\u00c7#I\b\u00e4S\u00102\u00af\u0093\u00ea\u00af3\u00fb\u0004\u00e8\u00a9\u001e\u00e9\u00f4\u0095\u00da\u008a";
                            var30_6 = "\tc\u0087\u00b1\u00d9\u0093\u00daE\u0092\u00d0\u0090\u00fa[\u00c6j\u00e2\u0010\u00c2\u00b9\u00ec\u0097\u00e2\u00fd,\u00b6\u0084V\u00c7#I\b\u00e4S\u00102\u00af\u0093\u00ea\u00af3\u00fb\u0004\u00e8\u00a9\u001e\u00e9\u00f4\u0095\u00da\u008a".length();
                            var27_7 = 16;
                            var26_8 = -1;
lbl21:
                            // 2 sources

                            while (true) {
                                continue;
                                break;
                            }
lbl23:
                            // 1 sources

                            while (true) {
                                var31_3[var29_4++] = dh.afn(var32_9).intern();
                                if ((var26_8 += var27_7) < var30_6) {
                                    var27_7 = var28_5.charAt(var26_8);
                                    ** continue;
                                }
                                break block20;
                                break;
                            }
                            v3 = ++var26_8;
                            var32_9 = var24_1.doFinal(var28_5.substring(v3, v3 + var27_7).getBytes("ISO-8859-1"));
                            ** while (true)
                        }
                        dh.GyoEr = var31_3;
                        dh.RhGgX = new String[3];
                        dh.qyhit = new HashMap<K, V>(13);
                        var11_10 = Cipher.getInstance("DES/CBC/NoPadding");
                        v4 = SecretKeyFactory.getInstance("DES");
                        v5 = new byte[8];
                        v6 = v5;
                        v5[0] = (byte)(var22 >>> 56);
                        for (var12_11 = 1; var12_11 < 8; ++var12_11) {
                            v6 = v6;
                            v6[var12_11] = (byte)(var22 << var12_11 * 8 >>> 56);
                        }
                        var11_10.init(2, (Key)v4.generateSecret(new DESKeySpec(v6)), new IvParameterSpec(new byte[8]));
                        var17_12 = new long[87];
                        var14_13 = 0;
                        var15_14 = "\u00e8\u00f9/b\u00b6{\u0094 \u00ef\u00d8#\u00b2\u00af\u00d0(e\u00b4\u0086k\u00c8\u0012\u0096\u00a1\n\u0019S!\u0082\u00b3\u00cf\u00c4\u00e6.H\u00f0\u009f\\\u008e\u0093\u00cb\u0010\u00a0\u009eE\u0005\u00c9e\u00c5\u00c5\u00d1p\u00dc\u00b9v[kt\u00bf\u00fa\u0098\u00b4%&r\b\u00aa\u0004`\u00f4\u00b4\u0010\u00c2\u00fd\u0019\u00c0\u008f\u00adH>|X\u00fc\u001b)\u0099\u0084`\u00ab\u000bW\u00b9F\u009eOa\u00f9\u00e8\u00c0\u00e7\u0097&\u00a0\u00c5#\u00e9\u00ca\u00f0S\u00c4\nz9\u00a1r|\u0003#\u00d7\u00d0\u0015\u0002\u00cb\u00c5\\I\u0081?\u0081\u001d\u00ee'\u008c\u00c3z\u00856\u00fd;\u007fYh\u001e\u0088%Y\u00a7N\u00ce\u00e5\u0081\u00f5\u00e5\u00a3\u0014\u00b6\u00c8xK{\u00ae%S\u0091\u00dd\u00d3\u00c1\u000f\u00ae\u00aa\u00d9K8\u0087\u00ab6uh\u0085\u00dct/\u00dbN\u0097\u00eccg\u00c3S\u008a\u00dd\u00ea\u0081%\u0085\u0006~p\u0086\u0092P\u0090\u00c1\u00c7(\u0017w\u0092\u0018ba\u0014#8\u008a\u00a1X\u0089\u00a8:\u00c9\u0019\u0093:=\u008f\r\u00a9\u0007\u00baP\u00fc\u008bMt\u00a6v\u00de\u00ef\u007f\u0002\u0005O\u0092\u00d0K~\u00cf\u00d2\u00d0\u009a\u0088rm\u00acR\u00f8>\u00f9J\u00b8*\u0085\r)\u0080\u008f\u00ae\u008b\u00cf\u00d8\u00d2\u00df\u0012\u0003\u0095_6k\u00b1\u00c5\u007f0\u00db\u00c8\u00d3\u0085>\u00f373^\f\u00cc\u00f8\u000b(T\u00a2\u00f5\u00eb\u00c6a\u00c6\u00b5\u00b6\\Z0q\u009d\u00eb[Uz\u00b9\u00e7\u00f8{\u00d9\u0095\u0001\u0080\u000b\u00d8\u00b1\u00c9\u00ba\u00cb\u00afP\u00b9\u00fev\u000f\u0083\u00fb>\u00bdcj\t\u00ad`L\u00c9t\u001d1\u009cCp\u00f1\u001f\u00d7\u008e\u00c1)\u0089\u00de\u00b7q\r\u0016\u00fd9\u00e08\u0098\u00f4iei\u001c\u00840TB\u00b8\u00db\u00c2&Ad\u00a0\u00c6[\u00cc\u00cd\u0019R\u00a9\u00af\u0010!\t\u009c\f\u008b\u008f\u00cd\u007f\u00baI\u00d2f\u0088TY\u00b8\u00de5\u00ad\u0016\u00f03Xd\u00afz\u000f\u00a7RG\u00c4HD\u0096G\u00d1\u00b7\u0090\u00d3g_\u00f7\u009ab\u0086\u00b8\u00b2\u00b4\u00a0\u00a3\u001f\u00bd\\\u001d~\u00eb\u0012L\u0007z\u00b5\u009b\b4\u00b4m\u0092*\u00c3\u00f6^Xg\u00fd\u00ba\u00a3S\u00ce2iR<k\u00dal}7\u00caG\u00de\u0017\u00e9!\u00d5)z\u00ba\u0096\u000e\u0081\u00a8~\u00b4`u\u00b9\u00e1O'\u00eaB*\u00c2o\u0088\u001b\u00e6\u00f0\u00f7\u00b9Mw\u0093KB\u00b1\u00fc\u00e5Y\u00f7\u00fc\u00d2\u00a8\u00c7\u00c2Jb\u00d7\f\u0092$ob\u00876\u0013F:x\\\u00f79\u00ff\u00a8\u00ee\r\u0006D\u00d2\u00aa\u00c5vD\u00a1\u0081\u00fd'J\u00f7J\u0007\u0088\t\u0017\u00fd4\u00a3\u00ef&~\u00a0\u0089\u00c9J\u0014\u00cbY\u00aex\u00f3\u00c8\u00be\u00b6\u0097\u00e1 \u00eb\u00c1cy\"r\u00d8\u0017\u001d\u0091,\u0089\u00e7d\u008b\u00f3Db\u0001v\u00e0\u00c7\u0012!\bzJ\u00a4?\u000f\u0084=\u00bb\u001e\u00ae|\u00f6\u00c9\u00d8;\u00dbl?\u0085\u00a8z\u001a\u00f3\u00cbG\"\u00df\u00c5x\u00ef\u00b0p\u00a9+>=\u00de\u009eC\u00a4\u00d8\u0015\u0001\u0092\u00de\u00ff\u00fe7TY\u00eb?\u00a2\u00a2\u00f9\u00de\u00b9\u00df\u00c9tA\u0081\u0007\u00a5e";
                        var16_15 = "\u00e8\u00f9/b\u00b6{\u0094 \u00ef\u00d8#\u00b2\u00af\u00d0(e\u00b4\u0086k\u00c8\u0012\u0096\u00a1\n\u0019S!\u0082\u00b3\u00cf\u00c4\u00e6.H\u00f0\u009f\\\u008e\u0093\u00cb\u0010\u00a0\u009eE\u0005\u00c9e\u00c5\u00c5\u00d1p\u00dc\u00b9v[kt\u00bf\u00fa\u0098\u00b4%&r\b\u00aa\u0004`\u00f4\u00b4\u0010\u00c2\u00fd\u0019\u00c0\u008f\u00adH>|X\u00fc\u001b)\u0099\u0084`\u00ab\u000bW\u00b9F\u009eOa\u00f9\u00e8\u00c0\u00e7\u0097&\u00a0\u00c5#\u00e9\u00ca\u00f0S\u00c4\nz9\u00a1r|\u0003#\u00d7\u00d0\u0015\u0002\u00cb\u00c5\\I\u0081?\u0081\u001d\u00ee'\u008c\u00c3z\u00856\u00fd;\u007fYh\u001e\u0088%Y\u00a7N\u00ce\u00e5\u0081\u00f5\u00e5\u00a3\u0014\u00b6\u00c8xK{\u00ae%S\u0091\u00dd\u00d3\u00c1\u000f\u00ae\u00aa\u00d9K8\u0087\u00ab6uh\u0085\u00dct/\u00dbN\u0097\u00eccg\u00c3S\u008a\u00dd\u00ea\u0081%\u0085\u0006~p\u0086\u0092P\u0090\u00c1\u00c7(\u0017w\u0092\u0018ba\u0014#8\u008a\u00a1X\u0089\u00a8:\u00c9\u0019\u0093:=\u008f\r\u00a9\u0007\u00baP\u00fc\u008bMt\u00a6v\u00de\u00ef\u007f\u0002\u0005O\u0092\u00d0K~\u00cf\u00d2\u00d0\u009a\u0088rm\u00acR\u00f8>\u00f9J\u00b8*\u0085\r)\u0080\u008f\u00ae\u008b\u00cf\u00d8\u00d2\u00df\u0012\u0003\u0095_6k\u00b1\u00c5\u007f0\u00db\u00c8\u00d3\u0085>\u00f373^\f\u00cc\u00f8\u000b(T\u00a2\u00f5\u00eb\u00c6a\u00c6\u00b5\u00b6\\Z0q\u009d\u00eb[Uz\u00b9\u00e7\u00f8{\u00d9\u0095\u0001\u0080\u000b\u00d8\u00b1\u00c9\u00ba\u00cb\u00afP\u00b9\u00fev\u000f\u0083\u00fb>\u00bdcj\t\u00ad`L\u00c9t\u001d1\u009cCp\u00f1\u001f\u00d7\u008e\u00c1)\u0089\u00de\u00b7q\r\u0016\u00fd9\u00e08\u0098\u00f4iei\u001c\u00840TB\u00b8\u00db\u00c2&Ad\u00a0\u00c6[\u00cc\u00cd\u0019R\u00a9\u00af\u0010!\t\u009c\f\u008b\u008f\u00cd\u007f\u00baI\u00d2f\u0088TY\u00b8\u00de5\u00ad\u0016\u00f03Xd\u00afz\u000f\u00a7RG\u00c4HD\u0096G\u00d1\u00b7\u0090\u00d3g_\u00f7\u009ab\u0086\u00b8\u00b2\u00b4\u00a0\u00a3\u001f\u00bd\\\u001d~\u00eb\u0012L\u0007z\u00b5\u009b\b4\u00b4m\u0092*\u00c3\u00f6^Xg\u00fd\u00ba\u00a3S\u00ce2iR<k\u00dal}7\u00caG\u00de\u0017\u00e9!\u00d5)z\u00ba\u0096\u000e\u0081\u00a8~\u00b4`u\u00b9\u00e1O'\u00eaB*\u00c2o\u0088\u001b\u00e6\u00f0\u00f7\u00b9Mw\u0093KB\u00b1\u00fc\u00e5Y\u00f7\u00fc\u00d2\u00a8\u00c7\u00c2Jb\u00d7\f\u0092$ob\u00876\u0013F:x\\\u00f79\u00ff\u00a8\u00ee\r\u0006D\u00d2\u00aa\u00c5vD\u00a1\u0081\u00fd'J\u00f7J\u0007\u0088\t\u0017\u00fd4\u00a3\u00ef&~\u00a0\u0089\u00c9J\u0014\u00cbY\u00aex\u00f3\u00c8\u00be\u00b6\u0097\u00e1 \u00eb\u00c1cy\"r\u00d8\u0017\u001d\u0091,\u0089\u00e7d\u008b\u00f3Db\u0001v\u00e0\u00c7\u0012!\bzJ\u00a4?\u000f\u0084=\u00bb\u001e\u00ae|\u00f6\u00c9\u00d8;\u00dbl?\u0085\u00a8z\u001a\u00f3\u00cbG\"\u00df\u00c5x\u00ef\u00b0p\u00a9+>=\u00de\u009eC\u00a4\u00d8\u0015\u0001\u0092\u00de\u00ff\u00fe7TY\u00eb?\u00a2\u00a2\u00f9\u00de\u00b9\u00df\u00c9tA\u0081\u0007\u00a5e".length();
                        var13_16 = 0;
                        while (true) {
                            var18_17 = var15_14.substring(var13_16, var13_16 += 8).getBytes("ISO-8859-1");
                            v7 = var17_12;
                            v8 = var14_13++;
                            v9 = ((long)var18_17[0] & 255L) << 56 | ((long)var18_17[1] & 255L) << 48 | ((long)var18_17[2] & 255L) << 40 | ((long)var18_17[3] & 255L) << 32 | ((long)var18_17[4] & 255L) << 24 | ((long)var18_17[5] & 255L) << 16 | ((long)var18_17[6] & 255L) << 8 | (long)var18_17[7] & 255L;
                            v10 = -1;
                            break block21;
                            break;
                        }
lbl59:
                        // 1 sources

                        while (true) {
                            v7[v8] = v11;
                            if (var13_16 < var16_15) ** continue;
                            var15_14 = "\u0019onK\u00d0\u00e8#\u0012\u00e9\"\u00b1\u00cbO\u00aa\u0099K";
                            var16_15 = "\u0019onK\u00d0\u00e8#\u0012\u00e9\"\u00b1\u00cbO\u00aa\u0099K".length();
                            var13_16 = 0;
                            while (true) {
                                var18_17 = var15_14.substring(var13_16, var13_16 += 8).getBytes("ISO-8859-1");
                                v7 = var17_12;
                                v8 = var14_13++;
                                v9 = ((long)var18_17[0] & 255L) << 56 | ((long)var18_17[1] & 255L) << 48 | ((long)var18_17[2] & 255L) << 40 | ((long)var18_17[3] & 255L) << 32 | ((long)var18_17[4] & 255L) << 24 | ((long)var18_17[5] & 255L) << 16 | ((long)var18_17[6] & 255L) << 8 | (long)var18_17[7] & 255L;
                                v10 = 0;
                                break block21;
                                break;
                            }
                            break;
                        }
lbl72:
                        // 1 sources

                        while (true) {
                            v7[v8] = v11;
                            if (var13_16 < var16_15) ** continue;
                            break block22;
                            break;
                        }
                    }
                    var19_18 = v9;
                    var21_19 = var11_10.doFinal(new byte[]{(byte)(var19_18 >>> 56), (byte)(var19_18 >>> 48), (byte)(var19_18 >>> 40), (byte)(var19_18 >>> 32), (byte)(var19_18 >>> 24), (byte)(var19_18 >>> 16), (byte)(var19_18 >>> 8), (byte)var19_18});
                    v11 = ((long)var21_19[0] & 255L) << 56 | ((long)var21_19[1] & 255L) << 48 | ((long)var21_19[2] & 255L) << 40 | ((long)var21_19[3] & 255L) << 32 | ((long)var21_19[4] & 255L) << 24 | ((long)var21_19[5] & 255L) << 16 | ((long)var21_19[6] & 255L) << 8 | (long)var21_19[7] & 255L;
                    switch (v10) {
                        default: {
                            ** continue;
                        }
                        ** case 0:
lbl85:
                        // 1 sources

                        ** continue;
                    }
                }
                dh.orrPG = var17_12;
                dh.venjr = new Integer[87];
                dh.ZlHiy = new HashMap<K, V>(13);
                var0_20 = Cipher.getInstance("DES/CBC/NoPadding");
                v12 = SecretKeyFactory.getInstance("DES");
                v13 = new byte[8];
                v14 = v13;
                v13[0] = (byte)(var22 >>> 56);
                for (var1_21 = 1; var1_21 < 8; ++var1_21) {
                    v14 = v14;
                    v14[var1_21] = (byte)(var22 << var1_21 * 8 >>> 56);
                }
                var0_20.init(2, (Key)v12.generateSecret(new DESKeySpec(v14)), new IvParameterSpec(new byte[8]));
                var6_22 = new long[9];
                var3_23 = 0;
                var4_24 = "\u00f4l\u0012p\u0007\u009cN\u00d6\u0016\u00ce\u00ca\u00e0\u00b6fd\u0014\u001d<\u00ef}\u00d7\u00d9aL\t\u00e2\u0011\u00ecw\u00e7\u00a9n\u00efw+\u00c97\u00ef\u00cd(\u00854\u00fb]O/D\u00c8%\u00c3A\u0093F\u00c2\u00b1l";
                var5_25 = "\u00f4l\u0012p\u0007\u009cN\u00d6\u0016\u00ce\u00ca\u00e0\u00b6fd\u0014\u001d<\u00ef}\u00d7\u00d9aL\t\u00e2\u0011\u00ecw\u00e7\u00a9n\u00efw+\u00c97\u00ef\u00cd(\u00854\u00fb]O/D\u00c8%\u00c3A\u0093F\u00c2\u00b1l".length();
                var2_26 = 0;
                while (true) {
                    var7_27 = var4_24.substring(var2_26, var2_26 += 8).getBytes("ISO-8859-1");
                    v15 = var6_22;
                    v16 = var3_23++;
                    v17 = ((long)var7_27[0] & 255L) << 56 | ((long)var7_27[1] & 255L) << 48 | ((long)var7_27[2] & 255L) << 40 | ((long)var7_27[3] & 255L) << 32 | ((long)var7_27[4] & 255L) << 24 | ((long)var7_27[5] & 255L) << 16 | ((long)var7_27[6] & 255L) << 8 | (long)var7_27[7] & 255L;
                    v18 = -1;
                    break block23;
                    break;
                }
lbl112:
                // 1 sources

                while (true) {
                    v15[v16] = v19;
                    if (var2_26 < var5_25) ** continue;
                    var4_24 = "#\u001b\u00e0M\u00de\u00be\u00de7\u00c9i\u00e4\u0010\u00da\u0080\u00c1_";
                    var5_25 = "#\u001b\u00e0M\u00de\u00be\u00de7\u00c9i\u00e4\u0010\u00da\u0080\u00c1_".length();
                    var2_26 = 0;
                    while (true) {
                        var7_27 = var4_24.substring(var2_26, var2_26 += 8).getBytes("ISO-8859-1");
                        v15 = var6_22;
                        v16 = var3_23++;
                        v17 = ((long)var7_27[0] & 255L) << 56 | ((long)var7_27[1] & 255L) << 48 | ((long)var7_27[2] & 255L) << 40 | ((long)var7_27[3] & 255L) << 32 | ((long)var7_27[4] & 255L) << 24 | ((long)var7_27[5] & 255L) << 16 | ((long)var7_27[6] & 255L) << 8 | (long)var7_27[7] & 255L;
                        v18 = 0;
                        break block23;
                        break;
                    }
                    break;
                }
lbl125:
                // 1 sources

                while (true) {
                    v15[v16] = v19;
                    if (var2_26 < var5_25) ** continue;
                    break block24;
                    break;
                }
            }
            var8_28 = v17;
            var10_29 = var0_20.doFinal(new byte[]{(byte)(var8_28 >>> 56), (byte)(var8_28 >>> 48), (byte)(var8_28 >>> 40), (byte)(var8_28 >>> 32), (byte)(var8_28 >>> 24), (byte)(var8_28 >>> 16), (byte)(var8_28 >>> 8), (byte)var8_28});
            v19 = ((long)var10_29[0] & 255L) << 56 | ((long)var10_29[1] & 255L) << 48 | ((long)var10_29[2] & 255L) << 40 | ((long)var10_29[3] & 255L) << 32 | ((long)var10_29[4] & 255L) << 24 | ((long)var10_29[5] & 255L) << 16 | ((long)var10_29[6] & 255L) << 8 | (long)var10_29[7] & 255L;
            switch (v18) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl138:
                // 1 sources

                ** continue;
            }
        }
        dh.ecoWj = var6_22;
        dh.knyDH = new Long[9];
    }

    @hG
    public void aes(gL.tk tk2) {
        boolean bl2;
        block36: {
            Packet<?> packet;
            block37: {
                iS[] iSArray;
                block28: {
                    block29: {
                        GameStateChangeS2CPacket.Reason reason;
                        GameStateChangeS2CPacket.Reason reason2;
                        GameStateChangeS2CPacket gameStateChangeS2CPacket;
                        block34: {
                            GameStateChangeS2CPacket.Reason reason3;
                            block35: {
                                block32: {
                                    block33: {
                                        block30: {
                                            block31: {
                                                long l2 = lbjfT ^ 0x3BF384A810D5L;
                                                packet = tk2.bcf();
                                                iSArray = dh.afl();
                                                try {
                                                    bl2 = packet instanceof GameStateChangeS2CPacket;
                                                    if (iSArray != null) break block28;
                                                    if (!bl2) break block29;
                                                }
                                                catch (MatchException matchException) {
                                                    throw dh.afm(matchException);
                                                }
                                                gameStateChangeS2CPacket = (GameStateChangeS2CPacket)packet;
                                                reason3 = gameStateChangeS2CPacket.getReason();
                                                try {
                                                    try {
                                                        reason2 = reason3;
                                                        reason = GameStateChangeS2CPacket.RAIN_STARTED;
                                                        if (iSArray != null) break block30;
                                                        if (reason2 != reason) break block31;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw dh.afm(matchException);
                                                    }
                                                    this.xPMvL.dov(1.0f);
                                                    tk2.bdX(true);
                                                }
                                                catch (MatchException matchException) {
                                                    throw dh.afm(matchException);
                                                }
                                            }
                                            reason2 = reason3;
                                            reason = GameStateChangeS2CPacket.RAIN_STOPPED;
                                        }
                                        try {
                                            try {
                                                if (iSArray != null) break block32;
                                                if (reason2 != reason) break block33;
                                            }
                                            catch (MatchException matchException) {
                                                throw dh.afm(matchException);
                                            }
                                            this.xPMvL.dov(0.0f);
                                            tk2.bdX(true);
                                        }
                                        catch (MatchException matchException) {
                                            throw dh.afm(matchException);
                                        }
                                    }
                                    reason2 = reason3;
                                    reason = GameStateChangeS2CPacket.RAIN_GRADIENT_CHANGED;
                                }
                                try {
                                    try {
                                        if (iSArray != null) break block34;
                                        if (reason2 != reason) break block35;
                                    }
                                    catch (MatchException matchException) {
                                        throw dh.afm(matchException);
                                    }
                                    this.xPMvL.dov(gameStateChangeS2CPacket.getValue());
                                    tk2.bdX(true);
                                }
                                catch (MatchException matchException) {
                                    throw dh.afm(matchException);
                                }
                            }
                            reason2 = reason3;
                            reason = GameStateChangeS2CPacket.THUNDER_GRADIENT_CHANGED;
                        }
                        try {
                            if (reason2 == reason) {
                                this.xPMvL.dow(gameStateChangeS2CPacket.getValue());
                                tk2.bdX(true);
                            }
                        }
                        catch (MatchException matchException) {
                            throw dh.afm(matchException);
                        }
                        return;
                    }
                    bl2 = packet instanceof WorldTimeUpdateS2CPacket;
                }
                try {
                    try {
                        try {
                            try {
                                if (iSArray != null) break block36;
                                if (!bl2) break block37;
                            }
                            catch (MatchException matchException) {
                                throw dh.afm(matchException);
                            }
                            bl2 = this.yFtsJ.WF();
                            if (iSArray != null) break block36;
                        }
                        catch (MatchException matchException) {
                            throw dh.afm(matchException);
                        }
                        if (!bl2) break block37;
                    }
                    catch (MatchException matchException) {
                        throw dh.afm(matchException);
                    }
                    tk2.bdX(true);
                }
                catch (MatchException matchException) {
                    throw dh.afm(matchException);
                }
            }
            bl2 = packet instanceof DisconnectS2CPacket;
        }
        try {
            if (bl2) {
                this.xPMvL.dox();
            }
        }
        catch (MatchException matchException) {
            throw dh.afm(matchException);
        }
    }

    public cu aeU() {
        return this.vkaUD;
    }

    public cJ aev() {
        return this.mfkLN;
    }

    public cu aeC() {
        return this.BoBPt;
    }

    public ct aeE() {
        return this.JQMui;
    }

    public cG aez() {
        return this.GGEeK;
    }

    public cu aeG() {
        return this.YJtQI;
    }

    public cu aeK() {
        return this.NTDZv;
    }

    public cJ aeN() {
        return this.YdEwv;
    }

    public cu aeI() {
        return this.sZhib;
    }

    public cu aeP() {
        return this.fqmSC;
    }

    public cu aey() {
        return this.CqmWf;
    }

    public cu aeL() {
        return this.wVJGm;
    }

    public cu aeS() {
        return this.HvDcw;
    }

    public cu aeD() {
        return this.aZAwH;
    }

    public cJ aeZ() {
        return this.VkfWt;
    }

    public dh$sy afa() {
        return this.xPMvL;
    }

    public Box afb() {
        return this.UEYnO;
    }

    public ct aeO() {
        return this.pJzyP;
    }

    private static String afn(byte[] byArray) {
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

    private static String afo(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x717;
        if (RhGgX[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])VsJnk.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    VsJnk.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dh", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = GyoEr[n3].getBytes("ISO-8859-1");
            dh.RhGgX[n3] = dh.afn(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return RhGgX[n3];
    }

    private static int afr(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5058;
        if (venjr[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = orrPG[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])qyhit.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    qyhit.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dh", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dh.venjr[n3] = n4;
        }
        return venjr[n3];
    }

    private static int afs(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = dh.afr(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static long afv(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        long l3 = dh.afu(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Long.TYPE, l3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return l3;
    }

    public cJ aeA() {
        return this.yFtsJ;
    }

    public List<dh$sz> afc() {
        return this.ZlHFA;
    }

    private long aeu(ZoneId zoneId) {
        long l2;
        block2: {
            long l3;
            block3: {
                long l4 = lbjfT ^ 0x5B842AAAFD3FL;
                LocalTime localTime = LocalTime.now(zoneId);
                int n2 = localTime.getHour() * dh.aft("z", (int)16020, (long)(0x6B396C33CC4C679DL ^ l4)) + localTime.getMinute();
                iS[] iSArray = dh.afl();
                l3 = Math.round((double)n2 / 1440.0 * 24000.0) + dh.afw("c", (int)25634, (long)(0x6A35CF2EF8FA6885L ^ l4));
                l3 %= dh.afw("c", (int)2212, (long)(0x2B5A7205BC240401L ^ l4));
                try {
                    l2 = l3;
                    if (iSArray != null) break block2;
                    if (l2 >= 0L) break block3;
                }
                catch (MatchException matchException) {
                    throw dh.afm(matchException);
                }
                l3 += dh.afw("c", (int)15426, (long)(0x2A9DC717E5E630E0L ^ l4));
            }
            l2 = l3;
        }
        return l2;
    }

    public ct aeB() {
        return this.qpOXm;
    }

    public cu aeJ() {
        return this.GUxQz;
    }

    public cu aeQ() {
        return this.eQLga;
    }

    public cu aeW() {
        return this.uxQGU;
    }

    public ct aew() {
        return this.jabvB;
    }

    public cu aex() {
        return this.GBNpt;
    }

    public cA aeY() {
        return this.MbiQi;
    }

    public cu aeR() {
        return this.erIOP;
    }

    private static long afu(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5DF;
        if (knyDH[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = ecoWj[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])ZlHiy.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    ZlHiy.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dh", exception);
            }
            long l5 = ((long)byArray[0] & 0xFFL) << 56 | ((long)byArray[1] & 0xFFL) << 48 | ((long)byArray[2] & 0xFFL) << 40 | ((long)byArray[3] & 0xFFL) << 32 | ((long)byArray[4] & 0xFFL) << 24 | ((long)byArray[5] & 0xFFL) << 16 | ((long)byArray[6] & 0xFFL) << 8 | (long)byArray[7] & 0xFFL;
            dh.knyDH[n3] = l5;
        }
        return knyDH[n3];
    }

    public cu aeH() {
        return this.LqvcY;
    }

    public cC aeM() {
        return this.WEVIb;
    }

    private static CallSite afw(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dh" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public cu aeF() {
        return this.ZpFTL;
    }

    public kS afd() {
        return this.XRoTS;
    }

    public cG aeX() {
        return this.UipTW;
    }

    private static Object afp(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = dh.afo(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public cu aeV() {
        return this.vNlIZ;
    }

    private static MatchException afm(MatchException matchException) {
        return matchException;
    }

    /*
     * Exception decompiling
     */
    public long aet() {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 4[SWITCH]
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

    private static CallSite aft(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dh" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static CallSite afq(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_2().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dh" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static iS[] afl() {
        return Bzwgh;
    }

    @hG
    public void aep(gM gM2) {
        this.xPMvL.dox();
        this.ZlHFA.clear();
    }

    /*
     * Exception decompiling
     */
    @hG
    public void aeq(gH.th var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Extractable last case doesn't follow previous, and can't clone.
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.op3rewriters.SwitchReplacer.examineSwitchContiguity(SwitchReplacer.java:611)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.op3rewriters.SwitchReplacer.replaceRawSwitches(SwitchReplacer.java:94)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisInner(CodeAnalyser.java:517)
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

    private static /* synthetic */ boolean afe(dh$sz dh$sz) {
        float f2;
        block8: {
            block7: {
                iS[] iSArray;
                block6: {
                    long l2 = lbjfT ^ 0x3DDA6937D3EDL;
                    iSArray = dh.afl();
                    try {
                        try {
                            float f3 = dh$sz.JiVPB.dhj() - 0.0f;
                            f2 = f3 == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
                            if (iSArray != null) break block6;
                            if (f2 != false) break block7;
                        }
                        catch (MatchException matchException) {
                            throw dh.afm(matchException);
                        }
                        f2 = (float)dh$sz.WWClU;
                    }
                    catch (MatchException matchException) {
                        throw dh.afm(matchException);
                    }
                }
                try {
                    if (iSArray != null) break block8;
                    if (f2 == false) break block7;
                }
                catch (MatchException matchException) {
                    throw dh.afm(matchException);
                }
                f2 = 1.0f;
                break block8;
            }
            f2 = 0.0f;
        }
        return (boolean)f2;
    }

    public ct aeT() {
        return this.tOEQJ;
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Could not resolve type clashes
     * Unable to fully structure code
     */
    @hG
    public void aer(go.sX var1_1) {
        block62: {
            block56: {
                block54: {
                    block53: {
                        block52: {
                            var2_2 = dh.lbjfT ^ 84681778288592L;
                            var4_3 = dh.afl();
                            try {
                                if (!this.mfkLN.WF()) {
                                    return;
                                }
                            }
                            catch (MatchException v0) {
                                throw dh.afm(v0);
                            }
                            var5_4 = var1_1.bbh();
                            var6_5 = var1_1.bbi();
                            var7_6 = rD.dlmvG.gameRenderer.getCamera();
                            var8_7 = mG.cnQ(this.GGEeK.Wh());
                            dh.XSRvt.startBatch(ob.cBv((String)dh.afq("m", (int)3717, (long)(1906307777125132807L ^ var2_2))), this.XRoTS);
                            try {
                                for (Object var10_9 : this.ZlHFA) {
                                    var11_10 = var10_9.JiVPB.dhj();
                                    var12_12 = mZ.csk(var10_9.AbOcV, var10_9.vxPfu, var6_5);
                                    var13_14 = 4.0f * var10_9.uTzzU;
                                    try {
                                        var5_4.push();
                                        jI.bIs(var5_4, var12_12);
                                        var5_4.multiply((Quaternionfc)var7_6.getRotation());
                                        dh.XSRvt.bUH(kG.bTv(var5_4, -var13_14 / 2.0f, -var13_14 / 2.0f, 0.0, var13_14, var13_14).dtF(var8_7.coa(255.0f * var11_10 * 0.4f)).dtG());
                                        var5_4.pop();
                                        if (var4_3 == null) {
                                            if (var4_3 == null) continue;
                                            break;
                                        }
                                        break block52;
                                    }
                                    catch (MatchException v1) {
                                        throw dh.afm(v1);
                                    }
                                }
                                dh.XSRvt.endBatch();
                            }
                            catch (Throwable var14_16) {
                                dh.XSRvt.endBatch();
                                throw var14_16;
                            }
                        }
                        try {
                            v2 = this.GBNpt.SZ() != false ? dh.xQDww.defaultState() : dh.MMuss.defaultState();
                        }
                        catch (MatchException v3) {
                            throw dh.afm(v3);
                        }
                        var9_8 = v2.bVG(DepthTestFunction.LEQUAL_DEPTH_TEST).bVH(false);
                        if (var4_3 != null) break block53;
                        try {
                            block65: {
                                if (!this.GBNpt.SZ()) ** GOTO lbl57
                                break block65;
                                catch (MatchException v4) {
                                    throw dh.afm(v4);
                                }
                            }
                            dh.xQDww.startBatch(var9_8);
                        }
                        catch (MatchException v5) {
                            throw dh.afm(v5);
                        }
                    }
                    try {
                        if (var4_3 == null) break block54;
lbl57:
                        // 2 sources

                        dh.MMuss.startBatch(var9_8);
                    }
                    catch (MatchException v6) {
                        throw dh.afm(v6);
                    }
                }
                try {
                    for (dh$sz var11_11 : this.ZlHFA) {
                        block61: {
                            block60: {
                                block58: {
                                    block59: {
                                        block55: {
                                            block57: {
                                                block68: {
                                                    block67: {
                                                        block66: {
                                                            v7 = var11_11;
                                                            if (var4_3 != null) break block55;
                                                            v8 = v7.WWClU;
                                                            if (var4_3 != null) break block56;
                                                            break block66;
                                                            catch (MatchException v9) {
                                                                throw dh.afm(v9);
                                                            }
                                                        }
                                                        if (v8) break block57;
                                                        break block67;
                                                        catch (MatchException v10) {
                                                            throw dh.afm(v10);
                                                        }
                                                    }
                                                    v7 = var11_11;
                                                    if (var4_3 != null) break block55;
                                                    break block68;
                                                    catch (MatchException v11) {
                                                        throw dh.afm(v11);
                                                    }
                                                }
                                                try {
                                                    block69: {
                                                        if (!v7.jYAnc.cpC(var11_11.JoZky)) break block57;
                                                        break block69;
                                                        catch (MatchException v12) {
                                                            throw dh.afm(v12);
                                                        }
                                                    }
                                                    var11_11.WWClU = true;
                                                }
                                                catch (MatchException v13) {
                                                    throw dh.afm(v13);
                                                }
                                            }
                                            v7 = var11_11;
                                        }
                                        try {
                                            v14 = v7.JiVPB;
                                            v15 = var11_11.WWClU;
                                            if (var4_3 != null) break block58;
                                            if (v15) break block59;
                                        }
                                        catch (MatchException v16) {
                                            throw dh.afm(v16);
                                        }
                                        v15 = true;
                                        break block58;
                                    }
                                    v15 = false;
                                }
                                v14.dhc(v15);
                                var12_13 = var11_11.JiVPB.dhj();
                                var13_15 = mZ.csk(var11_11.AbOcV, var11_11.vxPfu, var6_5);
                                var14_17 = mZ.csk(var11_11.zgdiH, var11_11.euQyK, var6_5);
                                var5_4.push();
                                jI.bIs(var5_4, var13_15);
                                var5_4.multiply((Quaternionfc)new Quaternionf().rotationXYZ((float)var14_17.x, (float)var14_17.y, (float)var14_17.z));
                                var5_4.scale(var11_11.uTzzU, var11_11.uTzzU, var11_11.uTzzU);
                                if (var4_3 != null) break block60;
                                try {
                                    block70: {
                                        if (!this.GBNpt.SZ()) ** GOTO lbl136
                                        break block70;
                                        catch (MatchException v17) {
                                            throw dh.afm(v17);
                                        }
                                    }
                                    dh.xQDww.bTS(kC.bSK(var5_4, this.UEYnO, false, true).dsG(var8_7.coa(255.0f * var12_13 * 0.4f)).dsI(var8_7.coa(205.0f * var12_13)).dsL());
                                }
                                catch (MatchException v18) {
                                    throw dh.afm(v18);
                                }
                            }
                            try {
                                if (var4_3 == null) break block61;
lbl136:
                                // 2 sources

                                dh.MMuss.bUS(kH.bTJ(var5_4, this.UEYnO, false, true).dtN(var8_7.coa(255.0f * var12_13 * 0.4f)).dtP(var8_7.coa(205.0f * var12_13)).dtS());
                            }
                            catch (MatchException v19) {
                                throw dh.afm(v19);
                            }
                        }
                        var5_4.pop();
                        if (var4_3 == null) continue;
                    }
                    v8 = this.GBNpt.SZ();
                }
                catch (Throwable var15_18) {
                    block64: {
                        block63: {
                            try {
                                try {
                                    if (var4_3 != null) break block63;
                                    if (this.GBNpt.SZ()) {
                                    }
                                    ** GOTO lbl160
                                }
                                catch (MatchException v20) {
                                    throw dh.afm(v20);
                                }
                                dh.xQDww.endBatch();
                            }
                            catch (MatchException v21) {
                                throw dh.afm(v21);
                            }
                        }
                        try {
                            if (var4_3 == null) break block64;
lbl160:
                            // 2 sources

                            dh.MMuss.endBatch();
                        }
                        catch (MatchException v22) {
                            throw dh.afm(v22);
                        }
                    }
                    throw var15_18;
                }
            }
            if (!v8) ** GOTO lbl175
            try {
                block71: {
                    dh.xQDww.endBatch();
                    if (var4_3 == null) break block62;
                    break block71;
                    catch (MatchException v23) {
                        throw dh.afm(v23);
                    }
                }
                dh.MMuss.endBatch();
            }
            catch (MatchException v24) {
                throw dh.afm(v24);
            }
        }
    }

    public static void afk(iS[] iSArray) {
        Bzwgh = iSArray;
    }

    @Override
    public void YO() {
        block4: {
            block5: {
                long l2 = lbjfT ^ 0x5BCC0AF6A482L;
                iS[] iSArray = dh.afl();
                super.YO();
                iS[] iSArray2 = iSArray;
                try {
                    try {
                        if (iSArray2 != null) break block4;
                        if (rD.dlmvG.world == null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw dh.afm(matchException);
                    }
                    this.xPMvL.doy((World)rD.dlmvG.world);
                }
                catch (MatchException matchException) {
                    throw dh.afm(matchException);
                }
            }
            this.xPMvL.dox();
            this.ZlHFA.clear();
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dh.class, "afv", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)J", null));
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
            return MethodHandles.lookup().findStatic(dh.class, "afs", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_2() {
        try {
            return MethodHandles.lookup().findStatic(dh.class, "afp", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

