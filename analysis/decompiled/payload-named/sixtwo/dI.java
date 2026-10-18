/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.Block
 *  net.minecraft.block.BlockState
 *  net.minecraft.block.CropBlock
 *  net.minecraft.client.network.SequencedPacketCreator
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.Entity
 *  net.minecraft.network.packet.Packet
 *  net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket
 *  net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket$Action
 *  net.minecraft.util.Hand
 *  net.minecraft.util.hit.BlockHitResult
 *  net.minecraft.util.hit.HitResult$Type
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.Direction
 *  net.minecraft.util.math.Position
 *  net.minecraft.util.math.Vec3d
 *  net.minecraft.util.math.Vec3i
 *  net.minecraft.world.RaycastContext
 *  net.minecraft.world.RaycastContext$FluidHandling
 *  net.minecraft.world.RaycastContext$ShapeType
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.block.Block;
import net.minecraft.block.BlockState;
import net.minecraft.block.CropBlock;
import net.minecraft.client.network.SequencedPacketCreator;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.network.packet.Packet;
import net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Position;
import net.minecraft.util.math.Vec3d;
import net.minecraft.util.math.Vec3i;
import net.minecraft.world.RaycastContext;
import sixtwo.cC;
import sixtwo.cD;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.cK;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.ee;
import sixtwo.gA;
import sixtwo.gH;
import sixtwo.gV;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.gv;
import sixtwo.hG;
import sixtwo.iW;
import sixtwo.ja;
import sixtwo.jc;
import sixtwo.jd;
import sixtwo.jg;
import sixtwo.lA;
import sixtwo.mB;
import sixtwo.mT;
import sixtwo.mr;
import sixtwo.mw;
import sixtwo.oo;
import sixtwo.ou;
import sixtwo.ox;
import sixtwo.qL;
import sixtwo.rD;

public class dI
extends gg
implements lA {
    private final cK fEoGq;
    private final cC mHbSn;
    private final cC wLMcW;
    private final ct OEGRT;
    private final cu JsQul;
    private final cu ndzRO;
    private final cu DmJAW;
    private final cD mbblx;
    private final ct SIzNY;
    private final cu iMYFd;
    private final cu nKDKe;
    private final cu cuKBK;
    private final cv OgoNY;
    private final cw RxRpl;
    private final cw QxImU;
    private final cw vbcIH;
    private final cw eBhEo;
    private final cJ uhsFy;
    private final cG fkIYK;
    private final cG kNGru;
    private final cJ YdLcc;
    private final cJ xbrHm;
    private final mT uqcOW;
    private Block jpzPS;
    private mB OXKNB;
    private static final long DAhjX;
    private static final String[] FKuPi;
    private static final String[] FxFSf;
    private static final Map YQIig;
    private static final long[] pVcUL;
    private static final Integer[] juWqB;
    private static final Map IUvfm;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dI() {
        long l2 = DAhjX ^ 0x76994E50C289L;
        super(gf.aZL((int)dI.amw("n", (int)12325, (long)(0x470B4BB4AFEFB97L ^ l2)), false, gh.qBzlZ));
        int[] nArray = new int[dI.amw("n", (int)22641, (long)(0x21BAEB40FE9B13C4L ^ l2))];
        nArray[0] = (int)dI.amw("n", (int)27665, (long)(0xD8A993DEE8B27BCL ^ l2));
        nArray[1] = (int)dI.amw("n", (int)24396, (long)(0x40683FE56A9314D6L ^ l2));
        nArray[2] = (int)dI.amw("n", (int)13664, (long)(0x1B05AF7E25117EB3L ^ l2));
        nArray[3] = (int)dI.amw("n", (int)30308, (long)(0x54DA603DD9EFBDC1L ^ l2));
        nArray[4] = (int)dI.amw("n", (int)24342, (long)(0x7EE15B1DDCD514AFL ^ l2));
        nArray[5] = (int)dI.amw("n", (int)9783, (long)(0x24B534A377126DF9L ^ l2));
        this.fEoGq = new cK(this, mr.clS(nArray)).WM(jc.GjreY);
        this.mHbSn = new cC(this, mr.clS(new int[]{(int)dI.amw("n", (int)23147, (long)(0xB13183208C111DDL ^ l2)), (int)dI.amw("n", (int)18973, (long)(0x4737594EAEF801A2L ^ l2)), (int)dI.amw("n", (int)862, (long)(0x1EBAA596DC44C8D2L ^ l2)), (int)dI.amw("n", (int)9134, (long)(0x1022A5290087E82EL ^ l2)), (int)dI.amw("n", (int)12349, (long)(0x22E9D595D8AE7BF7L ^ l2))})).Vy(0.1).Vw(2.0).Vx(6.0).VA(4.5).Vz((String)((Object)dI.amt("q", (int)21506, (long)(0x2AD75EAB25FEA36FL ^ l2))));
        this.wLMcW = new cC(this, mr.clS(new int[]{(int)dI.amw("n", (int)23260, (long)(0x7497C4ECB45E114BL ^ l2)), (int)dI.amw("n", (int)27873, (long)(0x35833AD9168A765L ^ l2)), (int)dI.amw("n", (int)1549, (long)(0x611AAA51056E4DA7L ^ l2)), (int)dI.amw("n", (int)21823, (long)(0x22E0A0043C551EFDL ^ l2)), (int)dI.amw("n", (int)7415, (long)(0xA08F72AE3865749L ^ l2))})).Vy(1.0).Vw(0.0).Vx(20.0).VA(0.0).Vz((String)((Object)dI.amt("q", (int)23233, (long)(0x70EA6704B80AADADL ^ l2))));
        int[] nArray2 = new int[dI.amw("n", (int)27970, (long)(0x5986FCF9C7F52690L ^ l2))];
        nArray2[0] = (int)dI.amw("n", (int)27308, (long)(0x48801211DE03A103L ^ l2));
        nArray2[1] = (int)dI.amw("n", (int)1549, (long)(0x611AAA51056E4DA7L ^ l2));
        nArray2[2] = (int)dI.amw("n", (int)361, (long)(0x1C617725D8424ACDL ^ l2));
        nArray2[3] = (int)dI.amw("n", (int)20239, (long)(0x71D35D9312DD0486L ^ l2));
        nArray2[4] = (int)dI.amw("n", (int)17528, (long)(0x9FDCECB5F7E0FE1L ^ l2));
        nArray2[5] = (int)dI.amw("n", (int)24632, (long)(0x8559BD3F8A62BA3L ^ l2));
        nArray2[dI.amw("n", (int)6670, (long)(0x577BB5A5140E51DEL ^ l2))] = (int)dI.amw("n", (int)30458, (long)(0x2DFFC9C6D4EA3D41L ^ l2));
        nArray2[dI.amw("n", (int)10702, (long)(0xD95E61FF857E25BL ^ l2))] = (int)dI.amw("n", (int)361, (long)(0x1C617725D8424ACDL ^ l2));
        nArray2[dI.amw("n", (int)13054, (long)(0x8705EC90BFAF958L ^ l2))] = (int)dI.amw("n", (int)28955, (long)(0x5410929DA0AD3A99L ^ l2));
        nArray2[dI.amw("n", (int)16219, (long)(0x4816F027828A74C7L ^ l2))] = (int)dI.amw("n", (int)32016, (long)(0x2925E1B90CF436B9L ^ l2));
        nArray2[dI.amw("n", (int)3806, (long)(0xB3F89CFFE374516L ^ l2))] = (int)dI.amw("n", (int)8883, (long)(0x7297C34CB7E8E93CL ^ l2));
        nArray2[dI.amw("n", (int)16888, (long)(0x509130B1F95F0A37L ^ l2))] = (int)dI.amw("n", (int)28064, (long)(0x22378DB0FCE62621L ^ l2));
        nArray2[dI.amw("n", (int)6407, (long)(0x3CC2B75DEFE9D2C6L ^ l2))] = (int)dI.amw("n", (int)27873, (long)(0x35833AD9168A765L ^ l2));
        this.OEGRT = new ct(this, mr.clS(nArray2));
        int[] nArray3 = new int[dI.amw("n", (int)19828, (long)(0x118D37BCC87786E4L ^ l2))];
        nArray3[0] = (int)dI.amw("n", (int)17898, (long)(0x165DAE020840E2CL ^ l2));
        nArray3[1] = (int)dI.amw("n", (int)2797, (long)(0x237E8BBE9328C139L ^ l2));
        nArray3[2] = (int)dI.amw("n", (int)361, (long)(0x1C617725D8424ACDL ^ l2));
        nArray3[3] = (int)dI.amw("n", (int)30802, (long)(0x539DBEB42FE433CDL ^ l2));
        nArray3[4] = (int)dI.amw("n", (int)28955, (long)(0x5410929DA0AD3A99L ^ l2));
        nArray3[5] = (int)dI.amw("n", (int)24076, (long)(0x1F3B0ADBE71A15C7L ^ l2));
        nArray3[dI.amw("n", (int)6670, (long)(0x577BB5A5140E51DEL ^ l2))] = (int)dI.amw("n", (int)30335, (long)(0x57FDBA813FBDBFL ^ l2));
        nArray3[dI.amw("n", (int)9174, (long)(0x6CE7EE5D97A76812L ^ l2))] = (int)dI.amw("n", (int)27188, (long)(0xF93788FF030A197L ^ l2));
        nArray3[dI.amw("n", (int)10524, (long)(0x2289A24ECA3462D5L ^ l2))] = (int)dI.amw("n", (int)12317, (long)(0x73B6DFA1B5E27B97L ^ l2));
        this.JsQul = new cu(this.OEGRT, mr.clS(nArray3));
        int[] nArray4 = new int[dI.amw("n", (int)10524, (long)(0x2289A24ECA3462D5L ^ l2))];
        nArray4[0] = (int)dI.amw("n", (int)13143, (long)(0x182C111ED324F8C1L ^ l2));
        nArray4[1] = (int)dI.amw("n", (int)27873, (long)(0x35833AD9168A765L ^ l2));
        nArray4[2] = (int)dI.amw("n", (int)1549, (long)(0x611AAA51056E4DA7L ^ l2));
        nArray4[3] = (int)dI.amw("n", (int)27873, (long)(0x35833AD9168A765L ^ l2));
        nArray4[4] = (int)dI.amw("n", (int)20239, (long)(0x71D35D9312DD0486L ^ l2));
        nArray4[5] = (int)dI.amw("n", (int)28173, (long)(0x3FD2233606BDA5A1L ^ l2));
        nArray4[dI.amw("n", (int)6670, (long)(0x577BB5A5140E51DEL ^ l2))] = (int)dI.amw("n", (int)27873, (long)(0x35833AD9168A765L ^ l2));
        nArray4[dI.amw("n", (int)9174, (long)(0x6CE7EE5D97A76812L ^ l2))] = (int)dI.amw("n", (int)25163, (long)(0xADB21E1686C29C5L ^ l2));
        this.ndzRO = new cu(this.OEGRT, mr.clS(nArray4));
        this.DmJAW = new cu(this.OEGRT, mr.clS(new int[]{(int)dI.amw("n", (int)31925, (long)(0x36FD0A9A28FB3704L ^ l2)), (int)dI.amw("n", (int)1549, (long)(0x611AAA51056E4DA7L ^ l2)), (int)dI.amw("n", (int)1549, (long)(0x611AAA51056E4DA7L ^ l2))}));
        int[] nArray5 = new int[dI.amw("n", (int)2452, (long)(0x632379BF880B4224L ^ l2))];
        nArray5[0] = (int)dI.amw("n", (int)13974, (long)(0x4A2B99BCF6DEFD38L ^ l2));
        nArray5[1] = (int)dI.amw("n", (int)27873, (long)(0x35833AD9168A765L ^ l2));
        nArray5[2] = (int)dI.amw("n", (int)1549, (long)(0x611AAA51056E4DA7L ^ l2));
        nArray5[3] = (int)dI.amw("n", (int)27873, (long)(0x35833AD9168A765L ^ l2));
        nArray5[4] = (int)dI.amw("n", (int)20239, (long)(0x71D35D9312DD0486L ^ l2));
        nArray5[5] = (int)dI.amw("n", (int)28173, (long)(0x3FD2233606BDA5A1L ^ l2));
        nArray5[dI.amw("n", (int)6670, (long)(0x577BB5A5140E51DEL ^ l2))] = (int)dI.amw("n", (int)30335, (long)(0x57FDBA813FBDBFL ^ l2));
        nArray5[dI.amw("n", (int)9174, (long)(0x6CE7EE5D97A76812L ^ l2))] = (int)dI.amw("n", (int)361, (long)(0x1C617725D8424ACDL ^ l2));
        nArray5[dI.amw("n", (int)10524, (long)(0x2289A24ECA3462D5L ^ l2))] = (int)dI.amw("n", (int)28064, (long)(0x22378DB0FCE62621L ^ l2));
        nArray5[dI.amw("n", (int)19828, (long)(0x118D37BCC87786E4L ^ l2))] = (int)dI.amw("n", (int)28955, (long)(0x5410929DA0AD3A99L ^ l2));
        nArray5[dI.amw("n", (int)17606, (long)(0x424682B8C510F54L ^ l2))] = (int)dI.amw("n", (int)12984, (long)(0x1C7504A154EBF929L ^ l2));
        nArray5[dI.amw("n", (int)2343, (long)(0x659790603D5542AAL ^ l2))] = (int)dI.amw("n", (int)27873, (long)(0x35833AD9168A765L ^ l2));
        nArray5[dI.amw("n", (int)13301, (long)(0x141CCD46B175F849L ^ l2))] = (int)dI.amw("n", (int)26874, (long)(0x2BAA9D1A5415A371L ^ l2));
        this.mbblx = new cD(this, mr.clS(nArray5)).VO((int)dI.amw("n", (int)26228, (long)(0x3B270D17A7D02DB1L ^ l2)));
        int[] nArray6 = new int[dI.amw("n", (int)13301, (long)(0x141CCD46B175F849L ^ l2))];
        nArray6[0] = (int)dI.amw("n", (int)17233, (long)(0x74F78C9E2D700896L ^ l2));
        nArray6[1] = (int)dI.amw("n", (int)30335, (long)(0x57FDBA813FBDBFL ^ l2));
        nArray6[2] = (int)dI.amw("n", (int)28064, (long)(0x22378DB0FCE62621L ^ l2));
        nArray6[3] = (int)dI.amw("n", (int)30335, (long)(0x57FDBA813FBDBFL ^ l2));
        nArray6[4] = (int)dI.amw("n", (int)28064, (long)(0x22378DB0FCE62621L ^ l2));
        nArray6[5] = (int)dI.amw("n", (int)13214, (long)(0x1C76844C24437806L ^ l2));
        nArray6[dI.amw("n", (int)6670, (long)(0x577BB5A5140E51DEL ^ l2))] = (int)dI.amw("n", (int)28955, (long)(0x5410929DA0AD3A99L ^ l2));
        nArray6[dI.amw("n", (int)9174, (long)(0x6CE7EE5D97A76812L ^ l2))] = (int)dI.amw("n", (int)13974, (long)(0x4A2B99BCF6DEFD38L ^ l2));
        nArray6[dI.amw("n", (int)10524, (long)(0x2289A24ECA3462D5L ^ l2))] = (int)dI.amw("n", (int)23186, (long)(0x2EE0F9BDB4921139L ^ l2));
        nArray6[dI.amw("n", (int)19828, (long)(0x118D37BCC87786E4L ^ l2))] = (int)dI.amw("n", (int)27873, (long)(0x35833AD9168A765L ^ l2));
        nArray6[dI.amw("n", (int)17606, (long)(0x424682B8C510F54L ^ l2))] = (int)dI.amw("n", (int)27873, (long)(0x35833AD9168A765L ^ l2));
        nArray6[dI.amw("n", (int)2343, (long)(0x659790603D5542AAL ^ l2))] = (int)dI.amw("n", (int)27440, (long)(0x6170855041B120AEL ^ l2));
        this.SIzNY = new ct(this, mr.clS(nArray6));
        int[] nArray7 = new int[dI.amw("n", (int)6670, (long)(0x577BB5A5140E51DEL ^ l2))];
        nArray7[0] = (int)dI.amw("n", (int)15731, (long)(0x5817B2A68AF9F6CBL ^ l2));
        nArray7[1] = (int)dI.amw("n", (int)361, (long)(0x1C617725D8424ACDL ^ l2));
        nArray7[2] = (int)dI.amw("n", (int)29585, (long)(0x64FF1439F91DB80CL ^ l2));
        nArray7[3] = (int)dI.amw("n", (int)22455, (long)(0x80C40961F61C17L ^ l2));
        nArray7[4] = (int)dI.amw("n", (int)21823, (long)(0x22E0A0043C551EFDL ^ l2));
        nArray7[5] = (int)dI.amw("n", (int)1549, (long)(0x611AAA51056E4DA7L ^ l2));
        this.iMYFd = new cu(this.SIzNY, mr.clS(nArray7));
        int[] nArray8 = new int[dI.amw("n", (int)6670, (long)(0x577BB5A5140E51DEL ^ l2))];
        nArray8[0] = (int)dI.amw("n", (int)23971, (long)(0x61AF32FA6DD9602L ^ l2));
        nArray8[1] = (int)dI.amw("n", (int)21823, (long)(0x22E0A0043C551EFDL ^ l2));
        nArray8[2] = (int)dI.amw("n", (int)27188, (long)(0xF93788FF030A197L ^ l2));
        nArray8[3] = (int)dI.amw("n", (int)28173, (long)(0x3FD2233606BDA5A1L ^ l2));
        nArray8[4] = (int)dI.amw("n", (int)27873, (long)(0x35833AD9168A765L ^ l2));
        nArray8[5] = (int)dI.amw("n", (int)29585, (long)(0x64FF1439F91DB80CL ^ l2));
        this.nKDKe = new cu(this.SIzNY, mr.clS(nArray8));
        int[] nArray9 = new int[dI.amw("n", (int)9174, (long)(0x6CE7EE5D97A76812L ^ l2))];
        nArray9[0] = (int)dI.amw("n", (int)23971, (long)(0x61AF32FA6DD9602L ^ l2));
        nArray9[1] = (int)dI.amw("n", (int)21823, (long)(0x22E0A0043C551EFDL ^ l2));
        nArray9[2] = (int)dI.amw("n", (int)27188, (long)(0xF93788FF030A197L ^ l2));
        nArray9[3] = (int)dI.amw("n", (int)28173, (long)(0x3FD2233606BDA5A1L ^ l2));
        nArray9[4] = (int)dI.amw("n", (int)27873, (long)(0x35833AD9168A765L ^ l2));
        nArray9[5] = (int)dI.amw("n", (int)27188, (long)(0xF93788FF030A197L ^ l2));
        nArray9[dI.amw("n", (int)6670, (long)(0x577BB5A5140E51DEL ^ l2))] = (int)dI.amw("n", (int)28173, (long)(0x3FD2233606BDA5A1L ^ l2));
        this.cuKBK = new cu(this.SIzNY, mr.clS(nArray9));
        int[] nArray10 = new int[dI.amw("n", (int)9174, (long)(0x6CE7EE5D97A76812L ^ l2))];
        nArray10[0] = (int)dI.amw("n", (int)32714, (long)(0x33F0BCCD86E346DL ^ l2));
        nArray10[1] = (int)dI.amw("n", (int)13885, (long)(0x401D862732F5FDECL ^ l2));
        nArray10[2] = (int)dI.amw("n", (int)28173, (long)(0x3FD2233606BDA5A1L ^ l2));
        nArray10[3] = (int)dI.amw("n", (int)30335, (long)(0x57FDBA813FBDBFL ^ l2));
        nArray10[4] = (int)dI.amw("n", (int)361, (long)(0x1C617725D8424ACDL ^ l2));
        nArray10[5] = (int)dI.amw("n", (int)28064, (long)(0x22378DB0FCE62621L ^ l2));
        nArray10[dI.amw("n", (int)6670, (long)(0x577BB5A5140E51DEL ^ l2))] = (int)dI.amw("n", (int)27188, (long)(0xF93788FF030A197L ^ l2));
        this.OgoNY = new cv(this, mr.clS(nArray10));
        int[] nArray11 = new int[dI.amw("n", (int)2452, (long)(0x632379BF880B4224L ^ l2))];
        nArray11[0] = (int)dI.amw("n", (int)9085, (long)(0x51687F9F16CB68CEL ^ l2));
        nArray11[1] = (int)dI.amw("n", (int)11421, (long)(0x527B4E0640DFE709L ^ l2));
        nArray11[2] = (int)dI.amw("n", (int)29585, (long)(0x64FF1439F91DB80CL ^ l2));
        nArray11[3] = (int)dI.amw("n", (int)361, (long)(0x1C617725D8424ACDL ^ l2));
        nArray11[4] = (int)dI.amw("n", (int)2487, (long)(0x40DBFEF1D7144200L ^ l2));
        nArray11[5] = (int)dI.amw("n", (int)13214, (long)(0x1C76844C24437806L ^ l2));
        nArray11[dI.amw("n", (int)6670, (long)(0x577BB5A5140E51DEL ^ l2))] = (int)dI.amw("n", (int)9095, (long)(0x260ADBFFC179E833L ^ l2));
        nArray11[dI.amw("n", (int)9174, (long)(0x6CE7EE5D97A76812L ^ l2))] = (int)dI.amw("n", (int)28955, (long)(0x5410929DA0AD3A99L ^ l2));
        nArray11[dI.amw("n", (int)10524, (long)(0x2289A24ECA3462D5L ^ l2))] = (int)dI.amw("n", (int)17972, (long)(0x6514D637B58C8DB3L ^ l2));
        nArray11[dI.amw("n", (int)19828, (long)(0x118D37BCC87786E4L ^ l2))] = (int)dI.amw("n", (int)21823, (long)(0x22E0A0043C551EFDL ^ l2));
        nArray11[dI.amw("n", (int)17606, (long)(0x424682B8C510F54L ^ l2))] = (int)dI.amw("n", (int)1549, (long)(0x611AAA51056E4DA7L ^ l2));
        nArray11[dI.amw("n", (int)2343, (long)(0x659790603D5542AAL ^ l2))] = (int)dI.amw("n", (int)1549, (long)(0x611AAA51056E4DA7L ^ l2));
        nArray11[dI.amw("n", (int)13301, (long)(0x141CCD46B175F849L ^ l2))] = (int)dI.amw("n", (int)27188, (long)(0xF93788FF030A197L ^ l2));
        this.RxRpl = new cw(this.OgoNY, mr.clS(nArray11));
        int[] nArray12 = new int[dI.amw("n", (int)19828, (long)(0x118D37BCC87786E4L ^ l2))];
        nArray12[0] = (int)dI.amw("n", (int)17233, (long)(0x74F78C9E2D700896L ^ l2));
        nArray12[1] = (int)dI.amw("n", (int)30335, (long)(0x57FDBA813FBDBFL ^ l2));
        nArray12[2] = (int)dI.amw("n", (int)28064, (long)(0x22378DB0FCE62621L ^ l2));
        nArray12[3] = (int)dI.amw("n", (int)27873, (long)(0x35833AD9168A765L ^ l2));
        nArray12[4] = (int)dI.amw("n", (int)28955, (long)(0x5410929DA0AD3A99L ^ l2));
        nArray12[5] = (int)dI.amw("n", (int)23971, (long)(0x61AF32FA6DD9602L ^ l2));
        nArray12[dI.amw("n", (int)6670, (long)(0x577BB5A5140E51DEL ^ l2))] = (int)dI.amw("n", (int)1549, (long)(0x611AAA51056E4DA7L ^ l2));
        nArray12[dI.amw("n", (int)9174, (long)(0x6CE7EE5D97A76812L ^ l2))] = (int)dI.amw("n", (int)21823, (long)(0x22E0A0043C551EFDL ^ l2));
        nArray12[dI.amw("n", (int)10524, (long)(0x2289A24ECA3462D5L ^ l2))] = (int)dI.amw("n", (int)28173, (long)(0x3FD2233606BDA5A1L ^ l2));
        this.QxImU = new cw(this.OgoNY, mr.clS(nArray12));
        int[] nArray13 = new int[dI.amw("n", (int)17606, (long)(0x424682B8C510F54L ^ l2))];
        nArray13[0] = (int)dI.amw("n", (int)28339, (long)(0x38E1C5373771A509L ^ l2));
        nArray13[1] = (int)dI.amw("n", (int)26694, (long)(0x464AE2C68C45A3FBL ^ l2));
        nArray13[2] = (int)dI.amw("n", (int)361, (long)(0x1C617725D8424ACDL ^ l2));
        nArray13[3] = (int)dI.amw("n", (int)30335, (long)(0x57FDBA813FBDBFL ^ l2));
        nArray13[4] = (int)dI.amw("n", (int)27440, (long)(0x6170855041B120AEL ^ l2));
        nArray13[5] = (int)dI.amw("n", (int)28955, (long)(0x5410929DA0AD3A99L ^ l2));
        nArray13[dI.amw("n", (int)6670, (long)(0x577BB5A5140E51DEL ^ l2))] = (int)dI.amw("n", (int)5417, (long)(0x5DF2626CE600DEACL ^ l2));
        nArray13[dI.amw("n", (int)9174, (long)(0x6CE7EE5D97A76812L ^ l2))] = (int)dI.amw("n", (int)21823, (long)(0x22E0A0043C551EFDL ^ l2));
        nArray13[dI.amw("n", (int)10524, (long)(0x2289A24ECA3462D5L ^ l2))] = (int)dI.amw("n", (int)21926, (long)(0x6A124E86C6B61E0EL ^ l2));
        nArray13[dI.amw("n", (int)19828, (long)(0x118D37BCC87786E4L ^ l2))] = (int)dI.amw("n", (int)21823, (long)(0x22E0A0043C551EFDL ^ l2));
        this.vbcIH = new cw(this.OgoNY, mr.clS(nArray13));
        int[] nArray14 = new int[dI.amw("n", (int)2452, (long)(0x632379BF880B4224L ^ l2))];
        nArray14[0] = (int)dI.amw("n", (int)29709, (long)(0x18D83C577112BF8BL ^ l2));
        nArray14[1] = (int)dI.amw("n", (int)9095, (long)(0x260ADBFFC179E833L ^ l2));
        nArray14[2] = (int)dI.amw("n", (int)27873, (long)(0x35833AD9168A765L ^ l2));
        nArray14[3] = (int)dI.amw("n", (int)20239, (long)(0x71D35D9312DD0486L ^ l2));
        nArray14[4] = (int)dI.amw("n", (int)17528, (long)(0x9FDCECB5F7E0FE1L ^ l2));
        nArray14[5] = (int)dI.amw("n", (int)28955, (long)(0x5410929DA0AD3A99L ^ l2));
        nArray14[dI.amw("n", (int)6670, (long)(0x577BB5A5140E51DEL ^ l2))] = (int)dI.amw("n", (int)25118, (long)(0x2A6205E32482A98DL ^ l2));
        nArray14[dI.amw("n", (int)9174, (long)(0x6CE7EE5D97A76812L ^ l2))] = (int)dI.amw("n", (int)21823, (long)(0x22E0A0043C551EFDL ^ l2));
        nArray14[dI.amw("n", (int)10524, (long)(0x2289A24ECA3462D5L ^ l2))] = (int)dI.amw("n", (int)26874, (long)(0x2BAA9D1A5415A371L ^ l2));
        nArray14[dI.amw("n", (int)19828, (long)(0x118D37BCC87786E4L ^ l2))] = (int)dI.amw("n", (int)20239, (long)(0x71D35D9312DD0486L ^ l2));
        nArray14[dI.amw("n", (int)17606, (long)(0x424682B8C510F54L ^ l2))] = (int)dI.amw("n", (int)21823, (long)(0x22E0A0043C551EFDL ^ l2));
        nArray14[dI.amw("n", (int)2343, (long)(0x659790603D5542AAL ^ l2))] = (int)dI.amw("n", (int)27188, (long)(0xF93788FF030A197L ^ l2));
        nArray14[dI.amw("n", (int)13301, (long)(0x141CCD46B175F849L ^ l2))] = (int)dI.amw("n", (int)28173, (long)(0x3FD2233606BDA5A1L ^ l2));
        this.eBhEo = new cw(this.OgoNY, mr.clS(nArray14)).Tz();
        int[] nArray15 = new int[dI.amw("n", (int)13301, (long)(0x141CCD46B175F849L ^ l2))];
        nArray15[0] = (int)dI.amw("n", (int)25118, (long)(0x2A6205E32482A98DL ^ l2));
        nArray15[1] = (int)dI.amw("n", (int)27873, (long)(0x35833AD9168A765L ^ l2));
        nArray15[2] = (int)dI.amw("n", (int)28064, (long)(0x22378DB0FCE62621L ^ l2));
        nArray15[3] = (int)dI.amw("n", (int)27440, (long)(0x6170855041B120AEL ^ l2));
        nArray15[4] = (int)dI.amw("n", (int)27873, (long)(0x35833AD9168A765L ^ l2));
        nArray15[5] = (int)dI.amw("n", (int)29585, (long)(0x64FF1439F91DB80CL ^ l2));
        nArray15[dI.amw("n", (int)6670, (long)(0x577BB5A5140E51DEL ^ l2))] = (int)dI.amw("n", (int)28955, (long)(0x5410929DA0AD3A99L ^ l2));
        nArray15[dI.amw("n", (int)9174, (long)(0x6CE7EE5D97A76812L ^ l2))] = (int)dI.amw("n", (int)27308, (long)(0x48801211DE03A103L ^ l2));
        nArray15[dI.amw("n", (int)10524, (long)(0x2289A24ECA3462D5L ^ l2))] = (int)dI.amw("n", (int)1549, (long)(0x611AAA51056E4DA7L ^ l2));
        nArray15[dI.amw("n", (int)19828, (long)(0x118D37BCC87786E4L ^ l2))] = (int)dI.amw("n", (int)361, (long)(0x1C617725D8424ACDL ^ l2));
        nArray15[dI.amw("n", (int)17606, (long)(0x424682B8C510F54L ^ l2))] = (int)dI.amw("n", (int)20239, (long)(0x71D35D9312DD0486L ^ l2));
        nArray15[dI.amw("n", (int)2343, (long)(0x659790603D5542AAL ^ l2))] = (int)dI.amw("n", (int)17528, (long)(0x9FDCECB5F7E0FE1L ^ l2));
        this.uhsFy = new cJ(this, mr.clS(nArray15)).WE(false);
        int[] nArray16 = new int[dI.amw("n", (int)2452, (long)(0x632379BF880B4224L ^ l2))];
        nArray16[0] = (int)dI.amw("n", (int)23212, (long)(0xA16789D0E20112FL ^ l2));
        nArray16[1] = (int)dI.amw("n", (int)19264, (long)(0x4172FDE68AC800E2L ^ l2));
        nArray16[2] = (int)dI.amw("n", (int)28173, (long)(0x3FD2233606BDA5A1L ^ l2));
        nArray16[3] = (int)dI.amw("n", (int)1549, (long)(0x611AAA51056E4DA7L ^ l2));
        nArray16[4] = (int)dI.amw("n", (int)30335, (long)(0x57FDBA813FBDBFL ^ l2));
        nArray16[5] = (int)dI.amw("n", (int)28064, (long)(0x22378DB0FCE62621L ^ l2));
        nArray16[dI.amw("n", (int)6670, (long)(0x577BB5A5140E51DEL ^ l2))] = (int)dI.amw("n", (int)27873, (long)(0x35833AD9168A765L ^ l2));
        nArray16[dI.amw("n", (int)9174, (long)(0x6CE7EE5D97A76812L ^ l2))] = (int)dI.amw("n", (int)28955, (long)(0x5410929DA0AD3A99L ^ l2));
        nArray16[dI.amw("n", (int)10524, (long)(0x2289A24ECA3462D5L ^ l2))] = (int)dI.amw("n", (int)1878, (long)(0x53BE6B92A6FDCC95L ^ l2));
        nArray16[dI.amw("n", (int)19828, (long)(0x118D37BCC87786E4L ^ l2))] = (int)dI.amw("n", (int)361, (long)(0x1C617725D8424ACDL ^ l2));
        nArray16[dI.amw("n", (int)17606, (long)(0x424682B8C510F54L ^ l2))] = (int)dI.amw("n", (int)1549, (long)(0x611AAA51056E4DA7L ^ l2));
        nArray16[dI.amw("n", (int)2343, (long)(0x659790603D5542AAL ^ l2))] = (int)dI.amw("n", (int)361, (long)(0x1C617725D8424ACDL ^ l2));
        nArray16[dI.amw("n", (int)13301, (long)(0x141CCD46B175F849L ^ l2))] = (int)dI.amw("n", (int)29585, (long)(0x64FF1439F91DB80CL ^ l2));
        this.fkIYK = new cG(this, mr.clS(nArray16)).Uf(rD.dlM().bjG().bis()).Uh(false);
        int[] nArray17 = new int[dI.amw("n", (int)17606, (long)(0x424682B8C510F54L ^ l2))];
        nArray17[0] = (int)dI.amw("n", (int)23971, (long)(0x61AF32FA6DD9602L ^ l2));
        nArray17[1] = (int)dI.amw("n", (int)30335, (long)(0x57FDBA813FBDBFL ^ l2));
        nArray17[2] = (int)dI.amw("n", (int)1549, (long)(0x611AAA51056E4DA7L ^ l2));
        nArray17[3] = (int)dI.amw("n", (int)1549, (long)(0x611AAA51056E4DA7L ^ l2));
        nArray17[4] = (int)dI.amw("n", (int)28955, (long)(0x5410929DA0AD3A99L ^ l2));
        nArray17[5] = (int)dI.amw("n", (int)1878, (long)(0x53BE6B92A6FDCC95L ^ l2));
        nArray17[dI.amw("n", (int)6670, (long)(0x577BB5A5140E51DEL ^ l2))] = (int)dI.amw("n", (int)361, (long)(0x1C617725D8424ACDL ^ l2));
        nArray17[dI.amw("n", (int)9174, (long)(0x6CE7EE5D97A76812L ^ l2))] = (int)dI.amw("n", (int)1549, (long)(0x611AAA51056E4DA7L ^ l2));
        nArray17[dI.amw("n", (int)10524, (long)(0x2289A24ECA3462D5L ^ l2))] = (int)dI.amw("n", (int)361, (long)(0x1C617725D8424ACDL ^ l2));
        nArray17[dI.amw("n", (int)19828, (long)(0x118D37BCC87786E4L ^ l2))] = (int)dI.amw("n", (int)29585, (long)(0x64FF1439F91DB80CL ^ l2));
        this.kNGru = new cG(this, mr.clS(nArray17)).Uf(rD.dlM().bjG().bis().cob(0.5f)).Uh(false);
        int[] nArray18 = new int[dI.amw("n", (int)6670, (long)(0x577BB5A5140E51DEL ^ l2))];
        nArray18[0] = (int)dI.amw("n", (int)23971, (long)(0x61AF32FA6DD9602L ^ l2));
        nArray18[1] = (int)dI.amw("n", (int)30335, (long)(0x57FDBA813FBDBFL ^ l2));
        nArray18[2] = (int)dI.amw("n", (int)1549, (long)(0x611AAA51056E4DA7L ^ l2));
        nArray18[3] = (int)dI.amw("n", (int)1549, (long)(0x611AAA51056E4DA7L ^ l2));
        nArray18[4] = (int)dI.amw("n", (int)27873, (long)(0x35833AD9168A765L ^ l2));
        nArray18[5] = (int)dI.amw("n", (int)27440, (long)(0x6170855041B120AEL ^ l2));
        this.YdLcc = new cJ(this, mr.clS(nArray18)).WE(false);
        int[] nArray19 = new int[dI.amw("n", (int)15809, (long)(0x58F7A726840C760DL ^ l2))];
        nArray19[0] = (int)dI.amw("n", (int)17233, (long)(0x74F78C9E2D700896L ^ l2));
        nArray19[1] = (int)dI.amw("n", (int)30335, (long)(0x57FDBA813FBDBFL ^ l2));
        nArray19[2] = (int)dI.amw("n", (int)28064, (long)(0x22378DB0FCE62621L ^ l2));
        nArray19[3] = (int)dI.amw("n", (int)27873, (long)(0x35833AD9168A765L ^ l2));
        nArray19[4] = (int)dI.amw("n", (int)28955, (long)(0x5410929DA0AD3A99L ^ l2));
        nArray19[5] = (int)dI.amw("n", (int)27918, (long)(0x203B78613A91A6C3L ^ l2));
        nArray19[dI.amw("n", (int)6670, (long)(0x577BB5A5140E51DEL ^ l2))] = (int)dI.amw("n", (int)28064, (long)(0x22378DB0FCE62621L ^ l2));
        nArray19[dI.amw("n", (int)9174, (long)(0x6CE7EE5D97A76812L ^ l2))] = (int)dI.amw("n", (int)28955, (long)(0x5410929DA0AD3A99L ^ l2));
        nArray19[dI.amw("n", (int)10524, (long)(0x2289A24ECA3462D5L ^ l2))] = (int)dI.amw("n", (int)13974, (long)(0x4A2B99BCF6DEFD38L ^ l2));
        nArray19[dI.amw("n", (int)19828, (long)(0x118D37BCC87786E4L ^ l2))] = (int)dI.amw("n", (int)20239, (long)(0x71D35D9312DD0486L ^ l2));
        nArray19[dI.amw("n", (int)17606, (long)(0x424682B8C510F54L ^ l2))] = (int)dI.amw("n", (int)29585, (long)(0x64FF1439F91DB80CL ^ l2));
        nArray19[dI.amw("n", (int)2343, (long)(0x659790603D5542AAL ^ l2))] = (int)dI.amw("n", (int)27873, (long)(0x35833AD9168A765L ^ l2));
        nArray19[dI.amw("n", (int)13301, (long)(0x141CCD46B175F849L ^ l2))] = (int)dI.amw("n", (int)27873, (long)(0x35833AD9168A765L ^ l2));
        nArray19[dI.amw("n", (int)2452, (long)(0x632379BF880B4224L ^ l2))] = (int)dI.amw("n", (int)28064, (long)(0x22378DB0FCE62621L ^ l2));
        nArray19[dI.amw("n", (int)11803, (long)(0x5DA3E05FC35EE593L ^ l2))] = (int)dI.amw("n", (int)27188, (long)(0xF93788FF030A197L ^ l2));
        this.xbrHm = new cJ(this, mr.clS(nArray19)).WE(false);
        this.uqcOW = mT.cpz();
        this.mbblx.Vf(() -> this.OEGRT.SQ(1));
        this.fkIYK.Vf(this.uhsFy::WF);
        this.kNGru.Vf(this.uhsFy::WF);
        this.YdLcc.Vf(this.uhsFy::WF);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    dI.DAhjX = gb.aYR(-6271476997966633287L, 9013532982248213399L, MethodHandles.lookup().lookupClass()).a(46553429223862L);
                    dI.YQIig = new HashMap<K, V>(13);
                    var11 = dI.DAhjX ^ 64061354542769L;
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
                    var17_5 = "\u00c1\u00f1\u0098\u00d2\u0011P\u00a42\u001d\u0011&|3\u0081W\u00da\u0010-\u0016M\u00e1\u00ad\u00fc\u00aaC8\u00cffz\n\u00d0\u00d1s";
                    var19_6 = "\u00c1\u00f1\u0098\u00d2\u0011P\u00a42\u001d\u0011&|3\u0081W\u00da\u0010-\u0016M\u00e1\u00ad\u00fc\u00aaC8\u00cffz\n\u00d0\u00d1s".length();
                    var16_7 = 16;
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
                        var20_3[var18_4++] = dI.amq(var21_9).intern();
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
                dI.FKuPi = var20_3;
                dI.FxFSf = new String[2];
                dI.IUvfm = new HashMap<K, V>(13);
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
                var6_12 = new long[85];
                var3_13 = 0;
                var4_14 = "\u00e4\u001e\u00c1*\u00bb\u00cc\u00d9QJ\u0082\u00a9/SE3+z\u0013\u00bb\u00e8\u0019kO\u00ea\u00ff\u000f]m\rs\u00fa\u00de!B\u00fc\u00cbk\u00a0\u009b\u001bu\u00d1\u00e8\u000f?:@N\n\u00a5\u00ce\u00a11x1%=\u00fc\u00f4\\\u00bb/\u000f\u00dd\u00c7\u00e33\u0003o\u00fd\r\u00131P\u00d4\u001c\u008c\u00fd\u0010\u00ed\u00b8\u0014r\u00bbq\"\u0004d\t\u0007F\u00a5\u00b7Ie\u00fd@o\t.\u00c9T\u0013\u0011\u009a\u0017\u0085m\u00c7\u0002G5_\u00d5\u0092\u00804\u001d\u00e5\rH\u00ca\u001e\u001aO\u0088Ih\u00a8\u00c4\u00e3f\u001dy$\u00e9?w\u009b\u00a3l\u007f\u00b5\u0015M\u00ed\u0081c\u0081\u0019\u00dd\u00bc\u00a1$\u0088\u00b3\u0087\u0085\u00e4\u0096\u00bab\u00e7j\u00e9\u00e4`\u00cf\u00f9)\u0088\u009a(?\u0092\u0002\u00bd\u00cbx\u008a\u00e6]\u008b\u0004\u0001\u009d|\u00bf\u00d0\u00a4\u0094\u001a\u00d6\u00ab\u0013\u00dcF\u008d\u0010\u0084\u008d\u00cfk\u0080\n1\u00b1Be\u000f\u00f1\u0018\u00d1Q\u00d90\u0094\u001eb\u0010\u00fe>\u00f6N\u00cbZ\u0090\u00e1\u009eZ\u00fa\u00f9\u00d9R\u0014\u009e\u00ae\u00b5\u00c4,\u0015\u00fe\b\u00c3@l\u00d1\u0082\u0083=\u008bBf_\u00a0`L\u0011\u00da9|\u0089o\u00c6\u00d7\u00c1 \u00ba\u00c3&\u00fb\u0096\u0001\f\u00d6\u0080/A\u00d4(\u00cdf\u00b3\u000e\u008e\u001fw\u00c3$\u00f7G\u0092\u0091\u00bf\u007f\\\u00b4\u00cc\u00d1\u00bc\u007f#\u00163QB\u00b5{\u0094m\u00b1\\\u0091\u00b9-\u00e6\u00b4\u0001\u00f1\u001c?\u00a7Q\u00ec+evl^s\f`\u00a6\u00cd\u001a\u0094\u00caE\u00c22\r\u00c1\u008e\u00d2\u00ce^\u00d3\u00e6\u00aeB\u008f\u00e2@\u00a9e\u007f\u00fap\u001a8\u00d0\u00bb\u009a\u00ce.\u001f\u00e2\u00c15\u009f\u00edh\u00b9\u00ca\u001f\u00afRf\u00aa\u00e4\u0005\u00c9B\u0004\u00d3bW\u008eqI\u00a6J\r\u00c4\u00a9,g`\u00a1g\u00ef\u00f0\u00af\u0087\u00c7\u0098$\u00ed\u00f7 \u0085vO\u00e80\u00a3\u00d5&S`\u00a5\u00b2\u00bc\u00b4\u00f3\u00ed\u00b2t\u00c6\u00e4\u00bcw}\u00beih\u008e\u00cc-\u00c2\u0093\u000f\u00fd\u00ce\u0010\u00cb\u00da\u0007hI\u00ef\u00e2\u0082\u0010\u0016\u0085\u00e5\u0016\b\u0092\u00f6\u00cb>\u0097\u00ce\u00d2\u0006<\u0006\u00cd\u009eqvUB\u00afcP(\u00f8\u00ed\u0005\u00b0\u0095\u0093\u0019H\u00db\u00b7\u0010\u00ee\u0015F\u00cf\u00be\u00e6F\u008c\u001d\u0089He\u008cP\u00deTd\u001fQox\u001e\u009d\u00d5h\u0090Y\u000f, /\t\u009e\u00df\u00eca\u00c5-\u00bd\u00ee\u00a3\u00ee\u0090\u0082\u00d8\u0087RP~o?u\u00cf\u0000\u00a2E\u00b3\u0096\u00ab\u00f9\u0005\u0091\u00c4\n\u0019`S\u00c0s\u001dC\"\u00edL\u00d4\u00c4.\u009b5\u00a10\u009b\u0010o\u00a8\u00c0F\u00b1\u0015\u000ezX\u00a7\u00b4R8\u00e2M\u00b4\u0016\u00b2\u0000j'\u00f9\u00eb1\u00cc\u00e0\r\u00c1\u00ae A\u00be\u00d1\u0017\u00ae`yK\u0098\u00ae\u007f\u00fbC$n\u00ab\u00c3w\u0087\u008d\u00a6d\u00ce 8\\w\u00a9\u00ac@\u0095\u0000\u001c:\u0082:\u00c7\b\u001e\u0010\u00c2\u00ba?g`\u001d\u00dcm\u00dd\b\u00c5\u00cd\u00a1\u0002\u0096\u0012ry9\u00feq";
                var5_15 = "\u00e4\u001e\u00c1*\u00bb\u00cc\u00d9QJ\u0082\u00a9/SE3+z\u0013\u00bb\u00e8\u0019kO\u00ea\u00ff\u000f]m\rs\u00fa\u00de!B\u00fc\u00cbk\u00a0\u009b\u001bu\u00d1\u00e8\u000f?:@N\n\u00a5\u00ce\u00a11x1%=\u00fc\u00f4\\\u00bb/\u000f\u00dd\u00c7\u00e33\u0003o\u00fd\r\u00131P\u00d4\u001c\u008c\u00fd\u0010\u00ed\u00b8\u0014r\u00bbq\"\u0004d\t\u0007F\u00a5\u00b7Ie\u00fd@o\t.\u00c9T\u0013\u0011\u009a\u0017\u0085m\u00c7\u0002G5_\u00d5\u0092\u00804\u001d\u00e5\rH\u00ca\u001e\u001aO\u0088Ih\u00a8\u00c4\u00e3f\u001dy$\u00e9?w\u009b\u00a3l\u007f\u00b5\u0015M\u00ed\u0081c\u0081\u0019\u00dd\u00bc\u00a1$\u0088\u00b3\u0087\u0085\u00e4\u0096\u00bab\u00e7j\u00e9\u00e4`\u00cf\u00f9)\u0088\u009a(?\u0092\u0002\u00bd\u00cbx\u008a\u00e6]\u008b\u0004\u0001\u009d|\u00bf\u00d0\u00a4\u0094\u001a\u00d6\u00ab\u0013\u00dcF\u008d\u0010\u0084\u008d\u00cfk\u0080\n1\u00b1Be\u000f\u00f1\u0018\u00d1Q\u00d90\u0094\u001eb\u0010\u00fe>\u00f6N\u00cbZ\u0090\u00e1\u009eZ\u00fa\u00f9\u00d9R\u0014\u009e\u00ae\u00b5\u00c4,\u0015\u00fe\b\u00c3@l\u00d1\u0082\u0083=\u008bBf_\u00a0`L\u0011\u00da9|\u0089o\u00c6\u00d7\u00c1 \u00ba\u00c3&\u00fb\u0096\u0001\f\u00d6\u0080/A\u00d4(\u00cdf\u00b3\u000e\u008e\u001fw\u00c3$\u00f7G\u0092\u0091\u00bf\u007f\\\u00b4\u00cc\u00d1\u00bc\u007f#\u00163QB\u00b5{\u0094m\u00b1\\\u0091\u00b9-\u00e6\u00b4\u0001\u00f1\u001c?\u00a7Q\u00ec+evl^s\f`\u00a6\u00cd\u001a\u0094\u00caE\u00c22\r\u00c1\u008e\u00d2\u00ce^\u00d3\u00e6\u00aeB\u008f\u00e2@\u00a9e\u007f\u00fap\u001a8\u00d0\u00bb\u009a\u00ce.\u001f\u00e2\u00c15\u009f\u00edh\u00b9\u00ca\u001f\u00afRf\u00aa\u00e4\u0005\u00c9B\u0004\u00d3bW\u008eqI\u00a6J\r\u00c4\u00a9,g`\u00a1g\u00ef\u00f0\u00af\u0087\u00c7\u0098$\u00ed\u00f7 \u0085vO\u00e80\u00a3\u00d5&S`\u00a5\u00b2\u00bc\u00b4\u00f3\u00ed\u00b2t\u00c6\u00e4\u00bcw}\u00beih\u008e\u00cc-\u00c2\u0093\u000f\u00fd\u00ce\u0010\u00cb\u00da\u0007hI\u00ef\u00e2\u0082\u0010\u0016\u0085\u00e5\u0016\b\u0092\u00f6\u00cb>\u0097\u00ce\u00d2\u0006<\u0006\u00cd\u009eqvUB\u00afcP(\u00f8\u00ed\u0005\u00b0\u0095\u0093\u0019H\u00db\u00b7\u0010\u00ee\u0015F\u00cf\u00be\u00e6F\u008c\u001d\u0089He\u008cP\u00deTd\u001fQox\u001e\u009d\u00d5h\u0090Y\u000f, /\t\u009e\u00df\u00eca\u00c5-\u00bd\u00ee\u00a3\u00ee\u0090\u0082\u00d8\u0087RP~o?u\u00cf\u0000\u00a2E\u00b3\u0096\u00ab\u00f9\u0005\u0091\u00c4\n\u0019`S\u00c0s\u001dC\"\u00edL\u00d4\u00c4.\u009b5\u00a10\u009b\u0010o\u00a8\u00c0F\u00b1\u0015\u000ezX\u00a7\u00b4R8\u00e2M\u00b4\u0016\u00b2\u0000j'\u00f9\u00eb1\u00cc\u00e0\r\u00c1\u00ae A\u00be\u00d1\u0017\u00ae`yK\u0098\u00ae\u007f\u00fbC$n\u00ab\u00c3w\u0087\u008d\u00a6d\u00ce 8\\w\u00a9\u00ac@\u0095\u0000\u001c:\u0082:\u00c7\b\u001e\u0010\u00c2\u00ba?g`\u001d\u00dcm\u00dd\b\u00c5\u00cd\u00a1\u0002\u0096\u0012ry9\u00feq".length();
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
                    var4_14 = "\u00c2\f\u009f\u00b3\u008a\u00e8`\u00cd\u0013\u00c9r\u00d8\u0003\u00e9\u00a0[";
                    var5_15 = "\u00c2\f\u009f\u00b3\u008a\u00e8`\u00cd\u0013\u00c9r\u00d8\u0003\u00e9\u00a0[".length();
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
        dI.pVcUL = var6_12;
        dI.juWqB = new Integer[85];
    }

    private static String amq(byte[] byArray) {
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

    public cJ ami() {
        return this.YdLcc;
    }

    private static Exception amp(Exception exception) {
        return exception;
    }

    public cw ame() {
        return this.eBhEo;
    }

    public mB amm() {
        return this.OXKNB;
    }

    @hG
    public void alE(gv gv2) {
        block21: {
            block20: {
                dI dI2;
                mB mB2;
                block18: {
                    int[] nArray;
                    block19: {
                        dI dI3;
                        block16: {
                            block17: {
                                boolean bl2;
                                block14: {
                                    block15: {
                                        long l2 = DAhjX ^ 0x88ABF40A4F7L;
                                        nArray = ee.arS();
                                        try {
                                            bl2 = this.bab();
                                            if (nArray != null) break block14;
                                            if (bl2) break block15;
                                        }
                                        catch (MatchException matchException) {
                                            throw dI.amp(matchException);
                                        }
                                        return;
                                    }
                                    try {
                                        dI3 = this;
                                        if (nArray != null) break block16;
                                        bl2 = dI3.xbrHm.WF();
                                    }
                                    catch (MatchException matchException) {
                                        throw dI.amp(matchException);
                                    }
                                }
                                try {
                                    try {
                                        if (bl2 || rD.dlmvG.currentScreen == null) break block17;
                                    }
                                    catch (MatchException matchException) {
                                        throw dI.amp(matchException);
                                    }
                                    return;
                                }
                                catch (MatchException matchException) {
                                    throw dI.amp(matchException);
                                }
                            }
                            dI3 = this;
                        }
                        try {
                            mB2 = dI3.OXKNB;
                            if (nArray != null) break block18;
                            if (mB2 != null) break block19;
                        }
                        catch (MatchException matchException) {
                            throw dI.amp(matchException);
                        }
                        return;
                    }
                    try {
                        dI2 = this;
                        if (nArray != null) break block20;
                        mB2 = dI2.OXKNB;
                    }
                    catch (MatchException matchException) {
                        throw dI.amp(matchException);
                    }
                }
                try {
                    if (jg.bBG(mB2.cnc(), this.mHbSn.VB())) break block21;
                    dI2 = this;
                }
                catch (MatchException matchException) {
                    throw dI.amp(matchException);
                }
            }
            dI2.OXKNB = null;
            return;
        }
        qL qL2 = rD.dlX();
        ou ou2 = new ou(new oo(), false, true, true, 3, true);
        Vec3d vec3d = this.OXKNB.cnc();
        qL2.dbI(vec3d, ou2, mw.uWTdl, this);
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    private void alK() {
        var1_1 = dI.DAhjX ^ 23080425493797L;
        var4_2 = this.mHbSn.VC();
        var5_3 = BlockPos.iterateOutwards((BlockPos)new BlockPos((Vec3i)BlockPos.ofFloored((Position)rD.dlmvG.player.getEntityPos()).up()), (int)var4_2, (int)var4_2, (int)var4_2);
        var6_4 = var5_3.iterator();
        var3_5 = ee.arS();
        while (var6_4.hasNext()) {
            v0 /* !! */  = var6_4.next();
            block11: while (true) {
                var7_6 = (BlockPos)v0 /* !! */ ;
                v1 = var7_6.equals((Object)this.OXKNB.cnb());
                if (var3_5 == null) {
                    try {
                        if (!v1) break;
                        v1 = this.RxRpl.TC();
                    }
                    catch (MatchException v2) {
                        throw dI.amp(v2);
                    }
                }
                if (!v1) ** GOTO lbl23
                var8_7 = ox.cHc(new RaycastContext(rD.dlmvG.player.getEyePos(), var7_6.toCenterPos(), RaycastContext.ShapeType.COLLIDER, RaycastContext.FluidHandling.NONE, (Entity)rD.dlmvG.player), var7_6);
                try {
                    this.OXKNB.cna(var8_7.getSide());
                    if (var3_5 == null) break;
lbl23:
                    // 2 sources

                    v3 = 0.0f;
                }
                catch (MatchException v4) {
                    throw dI.amp(v4);
                }
                block12: while (true) {
                    var8_8 = v3;
                    while (var8_8 <= 1.0f) {
                        block17: {
                            v3 = 0.0f;
                            if (var3_5 != null) continue block12;
                            for (var9_9 = v984649; var9_9 <= 1.0f; var9_9 += 0.2f) {
                                v5 = 0.0f;
                                if (var3_5 != null) break block17;
                                var10_10 = v5;
                                while (var10_10 <= 1.0f) {
                                    block18: {
                                        block19: {
                                            var11_11 = new Vec3d((double)((float)var7_6.getX() + var8_8), (double)((float)var7_6.getY() + var9_9), (double)((float)var7_6.getZ() + var10_10));
                                            var12_12 = rD.dlmvG.world.raycast(new RaycastContext(rD.dlmvG.player.getEyePos(), var11_11, RaycastContext.ShapeType.OUTLINE, RaycastContext.FluidHandling.NONE, (Entity)rD.dlmvG.player));
                                            try {
                                                if (var3_5 != null) break block18;
                                                v0 /* !! */  = var12_12.getType();
                                                if (var3_5 != null) continue block11;
                                            }
                                            catch (MatchException v6) {
                                                throw dI.amp(v6);
                                            }
                                            try {
                                                try {
                                                    if (v0 /* !! */  != HitResult.Type.BLOCK || !var12_12.getBlockPos().equals((Object)var7_6)) break block19;
                                                }
                                                catch (MatchException v7) {
                                                    throw dI.amp(v7);
                                                }
                                                this.OXKNB.cna(var12_12.getSide());
                                            }
                                            catch (MatchException v8) {
                                                throw dI.amp(v8);
                                            }
                                        }
                                        var10_10 += 0.2f;
                                    }
                                    if (var3_5 == null) continue;
                                }
                                if (var3_5 == null) continue;
                            }
                            v5 = var8_8 = var8_8 + 0.2f;
                        }
                        if (var3_5 == null) continue;
                    }
                    break block11;
                    break;
                }
                break;
            }
            if (var3_5 == null) continue;
        }
    }

    private void alM() {
        dI dI2;
        block18: {
            block19: {
                boolean bl2;
                int[] nArray;
                block16: {
                    block17: {
                        block14: {
                            block15: {
                                long l2 = DAhjX ^ 0x27CCD3642C63L;
                                nArray = ee.arS();
                                try {
                                    bl2 = this.uqcOW.cpD(this.wLMcW.VC());
                                    if (nArray != null) break block14;
                                    if (bl2) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw dI.amp(matchException);
                                }
                                return;
                            }
                            bl2 = rD.dlmvG.world.getBlockState(this.OXKNB.cnb()).isAir();
                        }
                        try {
                            try {
                                if (nArray != null) break block16;
                                if (!bl2) break block17;
                            }
                            catch (MatchException matchException) {
                                throw dI.amp(matchException);
                            }
                            this.OXKNB = this.alJ();
                            return;
                        }
                        catch (MatchException matchException) {
                            throw dI.amp(matchException);
                        }
                    }
                    try {
                        dI2 = this;
                        if (nArray != null) break block18;
                        bl2 = dI2.eBhEo.TC();
                    }
                    catch (MatchException matchException) {
                        throw dI.amp(matchException);
                    }
                }
                try {
                    try {
                        try {
                            if (!bl2) break block19;
                            dI2 = this;
                            if (nArray != null) break block18;
                        }
                        catch (MatchException matchException) {
                            throw dI.amp(matchException);
                        }
                        if (ox.cHa(dI2.OXKNB.cnb(), this.mHbSn.VB())) break block19;
                    }
                    catch (MatchException matchException) {
                        throw dI.amp(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw dI.amp(matchException);
                }
            }
            this.alK();
            dI2 = this;
        }
        dI2.alN();
    }

    /*
     * Unable to fully structure code
     */
    @hG
    public void alH(gA var1_1) {
        block27: {
            block26: {
                block24: {
                    block25: {
                        block22: {
                            block23: {
                                block20: {
                                    block21: {
                                        block18: {
                                            block19: {
                                                var2_2 = dI.DAhjX ^ 62527130822349L;
                                                var4_3 = ee.arS();
                                                try {
                                                    v0 = this.bab();
                                                    if (var4_3 != null) break block18;
                                                    if (v0 != 0) break block19;
                                                }
                                                catch (MatchException v1) {
                                                    throw dI.amp(v1);
                                                }
                                                return;
                                            }
                                            v0 = var1_1.bbQ();
                                        }
                                        try {
                                            try {
                                                if (var4_3 != null) break block20;
                                                if (v0 == 1) break block21;
                                            }
                                            catch (MatchException v2) {
                                                throw dI.amp(v2);
                                            }
                                            return;
                                        }
                                        catch (MatchException v3) {
                                            throw dI.amp(v3);
                                        }
                                    }
                                    v0 = (int)this.OEGRT.SQ(1);
                                }
                                try {
                                    if (var4_3 != null) break block22;
                                    if (v0 != 0) break block23;
                                }
                                catch (MatchException v4) {
                                    throw dI.amp(v4);
                                }
                                return;
                            }
                            v0 = var1_1.bbP();
                        }
                        if (v0 != this.mbblx.VP()) break block27;
                        var5_4 = rD.dlmvG.crosshairTarget;
                        try {
                            v5 = var5_4;
                            if (var4_3 != null) break block24;
                            if (v5 != null) break block25;
                        }
                        catch (MatchException v6) {
                            throw dI.amp(v6);
                        }
                        return;
                    }
                    v5 = var5_4;
                }
                try {
                    try {
                        if (var4_3 != null) break block26;
                        if (v5.getType() == HitResult.Type.BLOCK) {
                        }
                        ** GOTO lbl68
                    }
                    catch (MatchException v7) {
                        throw dI.amp(v7);
                    }
                    v5 = var5_4;
                }
                catch (MatchException v8) {
                    throw dI.amp(v8);
                }
            }
            var6_5 = (BlockHitResult)v5;
            try {
                this.jpzPS = rD.dlmvG.world.getBlockState(var6_5.getBlockPos()).getBlock();
                this.OXKNB = this.alJ();
                if (var4_3 == null) break block27;
lbl68:
                // 2 sources

                this.jpzPS = null;
            }
            catch (MatchException v9) {
                throw dI.amp(v9);
            }
        }
    }

    public ct alR() {
        return this.OEGRT;
    }

    public cC alP() {
        return this.mHbSn;
    }

    public cu alT() {
        return this.ndzRO;
    }

    public cD alV() {
        return this.mbblx;
    }

    public cw amb() {
        return this.RxRpl;
    }

    public cu alZ() {
        return this.cuKBK;
    }

    private static /* synthetic */ Packet amn(BlockPos blockPos, int n2) {
        return new PlayerActionC2SPacket(PlayerActionC2SPacket.Action.START_DESTROY_BLOCK, blockPos, Direction.UP, n2);
    }

    public cu alU() {
        return this.DmJAW;
    }

    public cv ama() {
        return this.OgoNY;
    }

    private void alN() {
        rD.dlmvG.interactionManager.updateBlockBreakingProgress(this.OXKNB.cnb(), this.OXKNB.cnd());
        rD.dlmvG.player.swingHand(Hand.MAIN_HAND);
    }

    public cu alS() {
        return this.JsQul;
    }

    private mB alJ() {
        long l2 = DAhjX ^ 0x6919D8FD3103L;
        int n2 = this.mHbSn.VC();
        Iterable iterable = BlockPos.iterateOutwards((BlockPos)new BlockPos((Vec3i)BlockPos.ofFloored((Position)rD.dlmvG.player.getEntityPos()).up()), (int)n2, (int)n2, (int)n2);
        Iterator iterator = iterable.iterator();
        int[] nArray = ee.arS();
        block32: while (iterator.hasNext()) {
            Object object = iterator.next();
            block33: while (true) {
                float f2;
                int n3;
                BlockPos blockPos;
                block44: {
                    block42: {
                        BlockState blockState;
                        block43: {
                            block41: {
                                block39: {
                                    block40: {
                                        blockPos = (BlockPos)object;
                                        blockState = rD.dlmvG.world.getBlockState(blockPos);
                                        n3 = blockState.isAir();
                                        if (nArray == null) {
                                            try {
                                                if (n3 != 0 && nArray == null) continue block32;
                                            }
                                            catch (MatchException matchException) {
                                                throw dI.amp(matchException);
                                            }
                                            n3 = this.QxImU.TC();
                                        }
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        if (nArray != null) break block39;
                                                        if (n3 == 0) break block40;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw dI.amp(matchException);
                                                    }
                                                    double d2 = (double)blockPos.getY() - rD.dlmvG.player.getY();
                                                    n3 = d2 == 0.0 ? 0 : (d2 < 0.0 ? -1 : 1);
                                                    if (nArray != null) break block39;
                                                }
                                                catch (MatchException matchException) {
                                                    throw dI.amp(matchException);
                                                }
                                                if (n3 >= 0) break block40;
                                            }
                                            catch (MatchException matchException) {
                                                throw dI.amp(matchException);
                                            }
                                            if (nArray == null) continue block32;
                                        }
                                        catch (MatchException matchException) {
                                            throw dI.amp(matchException);
                                        }
                                    }
                                    n3 = jg.bBG(blockPos.toCenterPos(), this.mHbSn.VB());
                                }
                                try {
                                    try {
                                        if (nArray != null) break block41;
                                        if (n3 == 0) break;
                                    }
                                    catch (MatchException matchException) {
                                        throw dI.amp(matchException);
                                    }
                                    n3 = this.vbcIH.TC();
                                }
                                catch (MatchException matchException) {
                                    throw dI.amp(matchException);
                                }
                            }
                            try {
                                try {
                                    try {
                                        try {
                                            if (nArray != null) break block42;
                                            if (n3 == 0) break block43;
                                        }
                                        catch (MatchException matchException) {
                                            throw dI.amp(matchException);
                                        }
                                        n3 = ja.byI(blockPos) ? 1 : 0;
                                        if (nArray != null) break block42;
                                    }
                                    catch (MatchException matchException) {
                                        throw dI.amp(matchException);
                                    }
                                    if (n3 == 0) break block43;
                                }
                                catch (MatchException matchException) {
                                    throw dI.amp(matchException);
                                }
                                if (nArray == null) continue block32;
                            }
                            catch (MatchException matchException) {
                                throw dI.amp(matchException);
                            }
                        }
                        n3 = this.alL(blockState) ? 1 : 0;
                    }
                    try {
                        try {
                            if (nArray != null) break block44;
                            if (n3 == 0) break;
                        }
                        catch (MatchException matchException) {
                            throw dI.amp(matchException);
                        }
                        n3 = this.RxRpl.TC() ? 1 : 0;
                    }
                    catch (MatchException matchException) {
                        throw dI.amp(matchException);
                    }
                }
                if (n3 != 0) {
                    BlockHitResult blockHitResult = ox.cHc(new RaycastContext(rD.dlmvG.player.getEyePos(), blockPos.toCenterPos(), RaycastContext.ShapeType.COLLIDER, RaycastContext.FluidHandling.NONE, (Entity)rD.dlmvG.player), blockPos);
                    return new mB(blockPos, blockHitResult.getPos(), blockHitResult.getSide());
                }
                float f3 = f2 = 0.0f;
                while (f2 <= 1.0f) {
                    block45: {
                        float f4;
                        f3 = 0.0f;
                        if (nArray != null) continue;
                        for (float f5 = v987534; f5 <= 1.0f; f5 += 0.2f) {
                            f4 = 0.0f;
                            if (nArray != null) break block45;
                            float f6 = f4;
                            while (f6 <= 1.0f) {
                                block46: {
                                    block47: {
                                        Vec3d vec3d = new Vec3d((double)((float)blockPos.getX() + f2), (double)((float)blockPos.getY() + f5), (double)((float)blockPos.getZ() + f6));
                                        BlockHitResult blockHitResult = rD.dlmvG.world.raycast(new RaycastContext(rD.dlmvG.player.getEyePos(), vec3d, RaycastContext.ShapeType.OUTLINE, RaycastContext.FluidHandling.NONE, (Entity)rD.dlmvG.player));
                                        try {
                                            if (nArray != null) break block46;
                                            object = blockHitResult.getType();
                                            if (nArray != null) continue block33;
                                        }
                                        catch (MatchException matchException) {
                                            throw dI.amp(matchException);
                                        }
                                        try {
                                            try {
                                                if (object != HitResult.Type.BLOCK || !blockHitResult.getBlockPos().equals((Object)blockPos)) break block47;
                                            }
                                            catch (MatchException matchException) {
                                                throw dI.amp(matchException);
                                            }
                                            return new mB(blockPos, vec3d, blockHitResult.getSide());
                                        }
                                        catch (MatchException matchException) {
                                            throw dI.amp(matchException);
                                        }
                                    }
                                    f6 += 0.2f;
                                }
                                if (nArray == null) continue;
                            }
                            if (nArray == null) continue;
                        }
                        f4 = f2 = f2 + 0.2f;
                    }
                    if (nArray == null) continue;
                }
                break;
            }
            if (nArray == null) continue;
        }
        return null;
    }

    public cK alO() {
        return this.fEoGq;
    }

    public cu alX() {
        return this.iMYFd;
    }

    public cw amc() {
        return this.QxImU;
    }

    @hG
    public void alI(go.sX sX2) {
        block21: {
            dI dI2;
            block20: {
                boolean bl2;
                block18: {
                    int[] nArray;
                    block19: {
                        dI dI3;
                        block16: {
                            block17: {
                                block14: {
                                    block15: {
                                        long l2 = DAhjX ^ 0x45DED3DC5541L;
                                        nArray = ee.arS();
                                        try {
                                            try {
                                                dI3 = this;
                                                if (nArray != null) break block14;
                                                if (dI3.bab()) break block15;
                                            }
                                            catch (MatchException matchException) {
                                                throw dI.amp(matchException);
                                            }
                                            return;
                                        }
                                        catch (MatchException matchException) {
                                            throw dI.amp(matchException);
                                        }
                                    }
                                    dI3 = this;
                                }
                                try {
                                    try {
                                        if (nArray != null) break block16;
                                        if (dI3.OXKNB != null) break block17;
                                    }
                                    catch (MatchException matchException) {
                                        throw dI.amp(matchException);
                                    }
                                    return;
                                }
                                catch (MatchException matchException) {
                                    throw dI.amp(matchException);
                                }
                            }
                            dI3 = this;
                        }
                        try {
                            bl2 = dI3.uhsFy.WF();
                            if (nArray != null) break block18;
                            if (!bl2) break block19;
                        }
                        catch (MatchException matchException) {
                            throw dI.amp(matchException);
                        }
                        MatrixStack matrixStack = sX2.bbh();
                        iW.bxp(matrixStack, this.OXKNB.cnb(), this.fkIYK.Wf(), this.kNGru.Wf(), this.YdLcc.WF());
                    }
                    try {
                        dI2 = this;
                        if (nArray != null) break block20;
                        bl2 = dI2.SIzNY.SQ(1);
                    }
                    catch (MatchException matchException) {
                        throw dI.amp(matchException);
                    }
                }
                if (!bl2) break block21;
                dI2 = this;
            }
            dI2.alM();
        }
    }

    public ct alW() {
        return this.SIzNY;
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    @hG
    public void alF(gH.th var1_1) {
        block53: {
            block54: {
                block52: {
                    block63: {
                        block50: {
                            block51: {
                                block48: {
                                    block49: {
                                        block46: {
                                            block47: {
                                                var2_2 = dI.DAhjX ^ 43212978329941L;
                                                var4_3 = ee.arS();
                                                try {
                                                    v0 = this.bab();
                                                    if (var4_3 != null) break block46;
                                                    if (v0) break block47;
                                                }
                                                catch (Exception v1) {
                                                    throw dI.amp(v1);
                                                }
                                                return;
                                            }
                                            try {
                                                v2 = this;
                                                if (var4_3 != null) break block48;
                                                v0 = v2.xbrHm.WF();
                                            }
                                            catch (Exception v3) {
                                                throw dI.amp(v3);
                                            }
                                        }
                                        if (v0) break block49;
                                        try {
                                            block61: {
                                                if (rD.dlmvG.currentScreen == null) break block49;
                                                break block61;
                                                catch (Exception v4) {
                                                    throw dI.amp(v4);
                                                }
                                            }
                                            return;
                                        }
                                        catch (Exception v5) {
                                            throw dI.amp(v5);
                                        }
                                    }
                                    v2 = this;
                                }
                                if (var4_3 != null) break block50;
                                try {
                                    block62: {
                                        if (v2.OXKNB != null) break block51;
                                        break block62;
                                        catch (Exception v6) {
                                            throw dI.amp(v6);
                                        }
                                    }
                                    this.OXKNB = this.alJ();
                                    return;
                                }
                                catch (Exception v7) {
                                    throw dI.amp(v7);
                                }
                            }
                            v2 = this;
                        }
                        v8 = v2.SIzNY.SQ(0);
                        if (var4_3 != null) break block52;
                        if (v8 == 0) ** GOTO lbl64
                        break block63;
                        catch (Exception v9) {
                            throw dI.amp(v9);
                        }
                    }
                    try {
                        block64: {
                            this.alM();
                            if (var4_3 == null) break block53;
                            break block64;
                            catch (Exception v10) {
                                throw dI.amp(v10);
                            }
                        }
                        v8 = this.SIzNY.SQ(2);
                    }
                    catch (Exception v11) {
                        throw dI.amp(v11);
                    }
                }
                if (var4_3 != null) break block54;
                try {
                    block65: {
                        if (v8 == 0) break block53;
                        break block65;
                        catch (Exception v12) {
                            throw dI.amp(v12);
                        }
                    }
                    v8 = this.mHbSn.VC();
                }
                catch (Exception v13) {
                    throw dI.amp(v13);
                }
            }
            var5_4 = v8;
            var6_5 = BlockPos.iterateOutwards((BlockPos)new BlockPos((Vec3i)BlockPos.ofFloored((Position)rD.dlmvG.player.getEntityPos()).up()), (int)var5_4, (int)var5_4, (int)var5_4);
            for (BlockPos var8_7 : var6_5) {
                block60: {
                    block59: {
                        block58: {
                            block57: {
                                block55: {
                                    block56: {
                                        block67: {
                                            block66: {
                                                v14 = this.QxImU.TC();
                                                if (var4_3 != null) break block55;
                                                if (v14 == 0) break block56;
                                                break block66;
                                                catch (Exception v15) {
                                                    throw dI.amp(v15);
                                                }
                                            }
                                            cfr_temp_0 = (double)var8_7.getY() - rD.dlmvG.player.getY();
                                            v14 = cfr_temp_0 == 0.0 ? 0 : (cfr_temp_0 < 0.0 ? -1 : 1);
                                            if (var4_3 != null) break block55;
                                            break block67;
                                            catch (Exception v16) {
                                                throw dI.amp(v16);
                                            }
                                        }
                                        try {
                                            block68: {
                                                if (v14 >= 0) break block56;
                                                break block68;
                                                catch (Exception v17) {
                                                    throw dI.amp(v17);
                                                }
                                            }
                                            if (var4_3 == null) continue;
                                        }
                                        catch (Exception v18) {
                                            throw dI.amp(v18);
                                        }
                                    }
                                    v14 = this.vbcIH.TC();
                                }
                                if (var4_3 != null) break block57;
                                try {
                                    block69: {
                                        if (v14 == 0) break block58;
                                        break block69;
                                        catch (Exception v19) {
                                            throw dI.amp(v19);
                                        }
                                    }
                                    v14 = ja.byI(var8_7);
                                }
                                catch (Exception v20) {
                                    throw dI.amp(v20);
                                }
                            }
                            try {
                                if (v14 != 0 && var4_3 == null) continue;
                            }
                            catch (Exception v21) {
                                throw dI.amp(v21);
                            }
                        }
                        var9_8 = rD.dlmvG.world.getBlockState(var8_7);
                        v22 = jg.bBG(var8_7.toCenterPos(), this.mHbSn.VB());
                        if (var4_3 != null) break block59;
                        try {
                            block70: {
                                if (!v22) break block60;
                                break block70;
                                catch (Exception v23) {
                                    throw dI.amp(v23);
                                }
                            }
                            v22 = this.alL(var9_8);
                        }
                        catch (Exception v24) {
                            throw dI.amp(v24);
                        }
                    }
                    try {
                        if (var4_3 == null) {
                            if (!v22) break block60;
                        }
                        ** GOTO lbl160
                    }
                    catch (Exception v25) {
                        throw dI.amp(v25);
                    }
                    try {
                        jd.bAo((SequencedPacketCreator)LambdaMetafactory.metafactory(null, null, null, (I)Lnet/minecraft/network/packet/Packet;, amn(net.minecraft.util.math.BlockPos int ), (I)Lnet/minecraft/network/packet/Packet;)((BlockPos)var8_7));
                        v22 = rD.dlmvG.interactionManager.breakBlock(var8_7);
lbl160:
                        // 2 sources

                        rD.dlmvG.player.swingHand(Hand.MAIN_HAND);
                    }
                    catch (Exception var10_9) {
                        // empty catch block
                    }
                }
                if (var4_3 == null) continue;
            }
        }
    }

    @hG
    public void alG(gV gV2) {
        block19: {
            boolean bl2;
            block18: {
                dI dI2;
                int[] nArray;
                block17: {
                    boolean bl3;
                    block15: {
                        block16: {
                            long l2 = DAhjX ^ 0x78E30ED842F2L;
                            nArray = ee.arS();
                            try {
                                bl3 = this.bab();
                                if (nArray != null) break block15;
                                if (bl3) break block16;
                            }
                            catch (MatchException matchException) {
                                throw dI.amp(matchException);
                            }
                            return;
                        }
                        try {
                            dI2 = this;
                            if (nArray != null) break block17;
                            bl3 = dI2.SIzNY.SQ(2);
                        }
                        catch (MatchException matchException) {
                            throw dI.amp(matchException);
                        }
                    }
                    if (bl3) {
                        return;
                    }
                    dI2 = this;
                }
                try {
                    if (dI2.OXKNB == null) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw dI.amp(matchException);
                }
                BlockState blockState = gV2.bcl();
                BlockPos blockPos = gV2.bck();
                try {
                    try {
                        bl2 = blockPos.equals((Object)this.OXKNB.cnb());
                        if (nArray != null) break block18;
                        if (!bl2) break block19;
                    }
                    catch (MatchException matchException) {
                        throw dI.amp(matchException);
                    }
                    bl2 = blockState.isAir();
                }
                catch (MatchException matchException) {
                    throw dI.amp(matchException);
                }
            }
            try {
                if (bl2) {
                    this.OXKNB = null;
                    this.uqcOW.cpB();
                    this.OXKNB = this.alJ();
                }
            }
            catch (MatchException matchException) {
                throw dI.amp(matchException);
            }
        }
    }

    private static CallSite amw(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dI" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public cu alY() {
        return this.nKDKe;
    }

    public cw amd() {
        return this.vbcIH;
    }

    private static CallSite amt(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dI" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public cC alQ() {
        return this.wLMcW;
    }

    public cJ amf() {
        return this.uhsFy;
    }

    private boolean alL(BlockState blockState) {
        int n2;
        block26: {
            block27: {
                boolean bl2;
                block29: {
                    block28: {
                        Block block;
                        int[] nArray;
                        block24: {
                            block25: {
                                block22: {
                                    block23: {
                                        BlockState blockState2;
                                        block20: {
                                            block21: {
                                                long l2 = DAhjX ^ 0x4F9841EB249CL;
                                                nArray = ee.arS();
                                                try {
                                                    try {
                                                        blockState2 = blockState;
                                                        if (nArray != null) break block20;
                                                        if (blockState2.getFluidState().isEmpty()) break block21;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw dI.amp(matchException);
                                                    }
                                                    return false;
                                                }
                                                catch (MatchException matchException) {
                                                    throw dI.amp(matchException);
                                                }
                                            }
                                            blockState2 = blockState;
                                        }
                                        block = blockState2.getBlock();
                                        try {
                                            n2 = block instanceof CropBlock;
                                            if (nArray != null) break block22;
                                            if (n2 == 0) break block23;
                                        }
                                        catch (MatchException matchException) {
                                            throw dI.amp(matchException);
                                        }
                                        CropBlock cropBlock = (CropBlock)block;
                                        int n3 = cropBlock.getMaxAge();
                                        try {
                                            try {
                                                n2 = cropBlock.getAge(blockState);
                                                if (nArray != null) break block22;
                                                if (n2 >= n3) break block23;
                                            }
                                            catch (MatchException matchException) {
                                                throw dI.amp(matchException);
                                            }
                                            return false;
                                        }
                                        catch (MatchException matchException) {
                                            throw dI.amp(matchException);
                                        }
                                    }
                                    n2 = this.OEGRT.SQ(0);
                                }
                                try {
                                    try {
                                        if (nArray != null) break block24;
                                        if (n2 == 0) break block25;
                                    }
                                    catch (MatchException matchException) {
                                        throw dI.amp(matchException);
                                    }
                                    return this.fEoGq.WY(block);
                                }
                                catch (MatchException matchException) {
                                    throw dI.amp(matchException);
                                }
                            }
                            n2 = this.OEGRT.SQ(1);
                        }
                        try {
                            try {
                                try {
                                    if (nArray != null) break block26;
                                    if (n2 == 0) break block27;
                                }
                                catch (MatchException matchException) {
                                    throw dI.amp(matchException);
                                }
                                if (block != this.jpzPS) break block28;
                            }
                            catch (MatchException matchException) {
                                throw dI.amp(matchException);
                            }
                            bl2 = true;
                            break block29;
                        }
                        catch (MatchException matchException) {
                            throw dI.amp(matchException);
                        }
                    }
                    bl2 = false;
                }
                return bl2;
            }
            n2 = 1;
        }
        return n2 != 0;
    }

    public cG amg() {
        return this.fkIYK;
    }

    public cG amh() {
        return this.kNGru;
    }

    public cJ amj() {
        return this.xbrHm;
    }

    public mT amk() {
        return this.uqcOW;
    }

    public Block aml() {
        return this.jpzPS;
    }

    private static String amr(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x35B8;
        if (FxFSf[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])YQIig.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    YQIig.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dI", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = FKuPi[n3].getBytes("ISO-8859-1");
            dI.FxFSf[n3] = dI.amq(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return FxFSf[n3];
    }

    private static int amv(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = dI.amu(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static Object ams(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = dI.amr(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static int amu(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x955;
        if (juWqB[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = pVcUL[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])IUvfm.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    IUvfm.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dI", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dI.juWqB[n3] = n4;
        }
        return juWqB[n3];
    }

    @Override
    public void YO() {
        super.YO();
        this.jpzPS = null;
        this.OXKNB = null;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dI.class, "amv", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(dI.class, "ams", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

