/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.texture.AbstractTexture
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.EntityType
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.function.Consumer;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.texture.AbstractTexture;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EntityType;
import net.minecraft.entity.LivingEntity;
import net.minecraft.util.math.Vec3d;
import sixtwo.cC;
import sixtwo.cF;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.cy;
import sixtwo.dh;
import sixtwo.fr;
import sixtwo.gH;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jJ;
import sixtwo.jd;
import sixtwo.jg$tJ;
import sixtwo.kA;
import sixtwo.kz;
import sixtwo.lv;
import sixtwo.mT;
import sixtwo.mr;
import sixtwo.ob;
import sixtwo.oe;
import sixtwo.rD;

public class dw
extends gg {
    private final cF ZIRir;
    private final cJ DVJWE;
    private final cC RPJuT;
    private final cC zqiDq;
    private final cG xeAup;
    private final ct OrinU;
    private final cu CkUcI;
    private final cu ZTyjv;
    private final cy DRApN;
    private final ct JxSnN;
    private final cu GLHXM;
    private final cu eSXTX;
    private final cJ CIvYl;
    private final mT WHKNh;
    private AbstractTexture pjPhF;
    private String GViCt;
    private static final long gqfIk;
    private static final String[] xFYqD;
    private static final String[] jzQfA;
    private static final Map vAoCj;
    private static final long[] GENnk;
    private static final Integer[] ezWXb;
    private static final Map gFGcY;
    private static final long[] FjxvB;
    private static final Long[] mkXFq;
    private static final Map VJtHn;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dw() {
        long l2 = gqfIk ^ 0x53E9E517B798L;
        super(gf.aZL((int)dw.ajg("s", (int)14257, (long)(0x183E75685F934E9DL ^ l2)), false, gh.nOCvV));
        int[] nArray = new int[dw.ajg("s", (int)17480, (long)(0x44769162DD44BD71L ^ l2))];
        nArray[0] = (int)dw.ajg("s", (int)8994, (long)(0x4B517CCA93335A1CL ^ l2));
        nArray[1] = (int)dw.ajg("s", (int)19644, (long)(0x5ED67DEB1C453583L ^ l2));
        nArray[2] = (int)dw.ajg("s", (int)13297, (long)(0x3A70A12EFF544A9AL ^ l2));
        nArray[3] = (int)dw.ajg("s", (int)29421, (long)(0x198576EE29EC0BDAL ^ l2));
        nArray[4] = (int)dw.ajg("s", (int)17369, (long)(0x4A1C92B9C06BAE1L ^ l2));
        nArray[5] = (int)dw.ajg("s", (int)24115, (long)(0x51CECEBC98BA272EL ^ l2));
        nArray[dw.ajg("s", (int)28741, (long)(0x7338284DE7AF0960L ^ l2))] = (int)dw.ajg("s", (int)12180, (long)(0x4B8925C9B1D45692L ^ l2));
        nArray[dw.ajg("s", (int)23068, (long)(0x20A0904E370D232DL ^ l2))] = (int)dw.ajg("s", (int)23098, (long)(0x2BABAEE57EA72309L ^ l2));
        this.ZIRir = new cF(this, mr.clS(nArray)).VS(jg$tJ.OCdZM).VT(EntityType.ITEM);
        int[] nArray2 = new int[dw.ajg("s", (int)3395, (long)(0x40A3E8D35FB27443L ^ l2))];
        nArray2[0] = (int)dw.ajg("s", (int)26161, (long)(0x585A0252B8B11F1BL ^ l2));
        nArray2[1] = (int)dw.ajg("s", (int)15801, (long)(0x3C800A2463E5C4B3L ^ l2));
        nArray2[2] = (int)dw.ajg("s", (int)24115, (long)(0x51CECEBC98BA272EL ^ l2));
        nArray2[3] = (int)dw.ajg("s", (int)5117, (long)(0x2F0B29CB6D73EAE2L ^ l2));
        nArray2[4] = (int)dw.ajg("s", (int)24270, (long)(0x409D180D028AA7EFL ^ l2));
        nArray2[5] = (int)dw.ajg("s", (int)17369, (long)(0x4A1C92B9C06BAE1L ^ l2));
        nArray2[dw.ajg("s", (int)7661, (long)(0x619A691BC9B164D6L ^ l2))] = (int)dw.ajg("s", (int)30117, (long)(0x4F27F6EFB8198C86L ^ l2));
        nArray2[dw.ajg("s", (int)19759, (long)(0x58DCD9250CCC340BL ^ l2))] = (int)dw.ajg("s", (int)25486, (long)(0x7A018168D60F1A92L ^ l2));
        this.DVJWE = new cJ(this, mr.clS(nArray2)).WE(true);
        int[] nArray3 = new int[dw.ajg("s", (int)11813, (long)(0x18DD48D8DCE65717L ^ l2))];
        nArray3[0] = (int)dw.ajg("s", (int)16811, (long)(0x3B4E3864459638A4L ^ l2));
        nArray3[1] = (int)dw.ajg("s", (int)24115, (long)(0x51CECEBC98BA272EL ^ l2));
        nArray3[2] = (int)dw.ajg("s", (int)10276, (long)(0x269830C853E8D114L ^ l2));
        nArray3[3] = (int)dw.ajg("s", (int)11674, (long)(0x7C325CA65D62D4B3L ^ l2));
        nArray3[4] = (int)dw.ajg("s", (int)4687, (long)(0x34B3B7D22FD76B54L ^ l2));
        nArray3[5] = (int)dw.ajg("s", (int)30117, (long)(0x4F27F6EFB8198C86L ^ l2));
        nArray3[dw.ajg("s", (int)7661, (long)(0x619A691BC9B164D6L ^ l2))] = (int)dw.ajg("s", (int)24913, (long)(0x4BF44DA0E37C9873L ^ l2));
        nArray3[dw.ajg("s", (int)19759, (long)(0x58DCD9250CCC340BL ^ l2))] = (int)dw.ajg("s", (int)19939, (long)(0xF0A8C5E2FFDB4F5L ^ l2));
        nArray3[dw.ajg("s", (int)3395, (long)(0x40A3E8D35FB27443L ^ l2))] = (int)dw.ajg("s", (int)3519, (long)(0x5B426ABDB3B6748BL ^ l2));
        nArray3[dw.ajg("s", (int)2919, (long)(0x354F829D8808F20DL ^ l2))] = (int)dw.ajg("s", (int)21071, (long)(0x6ACF67E6C4CBAB4AL ^ l2));
        nArray3[dw.ajg("s", (int)36, (long)(0x61A2537EA7647931L ^ l2))] = (int)dw.ajg("s", (int)9306, (long)(0x5D487293DFF35D7AL ^ l2));
        nArray3[dw.ajg("s", (int)23629, (long)(0x17891421D636A54FL ^ l2))] = (int)dw.ajg("s", (int)30117, (long)(0x4F27F6EFB8198C86L ^ l2));
        this.RPJuT = new cC(this, mr.clS(nArray3)).Vy(0.1).Vw(0.5).Vx(5.0).VA(1.0);
        this.zqiDq = new cC(this, mr.clS(new int[]{(int)dw.ajg("s", (int)23067, (long)(0xBFCE65CC2B1A334L ^ l2)), (int)dw.ajg("s", (int)18452, (long)(0xA73A449DC783133L ^ l2)), (int)dw.ajg("s", (int)30117, (long)(0x4F27F6EFB8198C86L ^ l2)), (int)dw.ajg("s", (int)30117, (long)(0x4F27F6EFB8198C86L ^ l2)), (int)dw.ajg("s", (int)25621, (long)(0x792399AD506F1D0FL ^ l2))})).Vy(1.0).Vw(10.0).Vx(40.0).VA(20.0);
        this.xeAup = new cG(this, mr.clS(new int[]{(int)dw.ajg("s", (int)29605, (long)(0x273F9BC23CA50AABL ^ l2)), (int)dw.ajg("s", (int)23295, (long)(0x406A3C9F70E23FCL ^ l2)), (int)dw.ajg("s", (int)9306, (long)(0x5D487293DFF35D7AL ^ l2)), (int)dw.ajg("s", (int)23200, (long)(0x1AA76EBC6398A38DL ^ l2)), (int)dw.ajg("s", (int)20022, (long)(0x5B051797D97DB726L ^ l2))})).Uf(rD.dlM().bjG().bis());
        int[] nArray4 = new int[dw.ajg("s", (int)10236, (long)(0x40E7D89E3566DEF5L ^ l2))];
        nArray4[0] = (int)dw.ajg("s", (int)29605, (long)(0x273F9BC23CA50AABL ^ l2));
        nArray4[1] = (int)dw.ajg("s", (int)24115, (long)(0x51CECEBC98BA272EL ^ l2));
        nArray4[2] = (int)dw.ajg("s", (int)20022, (long)(0x5B051797D97DB726L ^ l2));
        nArray4[3] = (int)dw.ajg("s", (int)3519, (long)(0x5B426ABDB3B6748BL ^ l2));
        nArray4[4] = (int)dw.ajg("s", (int)9306, (long)(0x5D487293DFF35D7AL ^ l2));
        nArray4[5] = (int)dw.ajg("s", (int)30117, (long)(0x4F27F6EFB8198C86L ^ l2));
        nArray4[dw.ajg("s", (int)7661, (long)(0x619A691BC9B164D6L ^ l2))] = (int)dw.ajg("s", (int)14430, (long)(0x2824649B02994170L ^ l2));
        nArray4[dw.ajg("s", (int)19759, (long)(0x58DCD9250CCC340BL ^ l2))] = (int)dw.ajg("s", (int)26836, (long)(0x1BAB5DBF8BE991B9L ^ l2));
        nArray4[dw.ajg("s", (int)3395, (long)(0x40A3E8D35FB27443L ^ l2))] = (int)dw.ajg("s", (int)30117, (long)(0x4F27F6EFB8198C86L ^ l2));
        nArray4[dw.ajg("s", (int)5982, (long)(0x3A29B3580FE7EE36L ^ l2))] = (int)dw.ajg("s", (int)16406, (long)(0xE269B667D05B90FL ^ l2));
        nArray4[dw.ajg("s", (int)3044, (long)(0x74FE229EE007F2ECL ^ l2))] = (int)dw.ajg("s", (int)17369, (long)(0x4A1C92B9C06BAE1L ^ l2));
        nArray4[dw.ajg("s", (int)2330, (long)(0x7D44C407A8A1F00EL ^ l2))] = (int)dw.ajg("s", (int)5950, (long)(0x415A340D935A6E0BL ^ l2));
        nArray4[dw.ajg("s", (int)23109, (long)(0x6046F844B5F6A35DL ^ l2))] = (int)dw.ajg("s", (int)20022, (long)(0x5B051797D97DB726L ^ l2));
        nArray4[dw.ajg("s", (int)5685, (long)(0x5C220993528EEF22L ^ l2))] = (int)dw.ajg("s", (int)30117, (long)(0x4F27F6EFB8198C86L ^ l2));
        this.OrinU = new ct(this, mr.clS(nArray4));
        int[] nArray5 = new int[dw.ajg("s", (int)19759, (long)(0x58DCD9250CCC340BL ^ l2))];
        nArray5[0] = (int)dw.ajg("s", (int)16560, (long)(0x6BF6316EA1C8B9A3L ^ l2));
        nArray5[1] = (int)dw.ajg("s", (int)30117, (long)(0x4F27F6EFB8198C86L ^ l2));
        nArray5[2] = (int)dw.ajg("s", (int)16019, (long)(0x6CA9721FC84C7B5L ^ l2));
        nArray5[3] = (int)dw.ajg("s", (int)21071, (long)(0x6ACF67E6C4CBAB4AL ^ l2));
        nArray5[4] = (int)dw.ajg("s", (int)19897, (long)(0x16DFBA0858BE3491L ^ l2));
        nArray5[5] = (int)dw.ajg("s", (int)9306, (long)(0x5D487293DFF35D7AL ^ l2));
        nArray5[dw.ajg("s", (int)7661, (long)(0x619A691BC9B164D6L ^ l2))] = (int)dw.ajg("s", (int)17369, (long)(0x4A1C92B9C06BAE1L ^ l2));
        this.CkUcI = new cu(this.OrinU, mr.clS(nArray5));
        int[] nArray6 = new int[dw.ajg("s", (int)7661, (long)(0x619A691BC9B164D6L ^ l2))];
        nArray6[0] = (int)dw.ajg("s", (int)29605, (long)(0x273F9BC23CA50AABL ^ l2));
        nArray6[1] = (int)dw.ajg("s", (int)19897, (long)(0x16DFBA0858BE3491L ^ l2));
        nArray6[2] = (int)dw.ajg("s", (int)8482, (long)(0x155D1070C2575826L ^ l2));
        nArray6[3] = (int)dw.ajg("s", (int)17369, (long)(0x4A1C92B9C06BAE1L ^ l2));
        nArray6[4] = (int)dw.ajg("s", (int)23200, (long)(0x1AA76EBC6398A38DL ^ l2));
        nArray6[5] = (int)dw.ajg("s", (int)27438, (long)(0x42AA39E14A879214L ^ l2));
        this.ZTyjv = new cu(this.OrinU, mr.clS(nArray6));
        int[] nArray7 = new int[dw.ajg("s", (int)2330, (long)(0x7D44C407A8A1F00EL ^ l2))];
        nArray7[0] = (int)dw.ajg("s", (int)26836, (long)(0x1BAB5DBF8BE991B9L ^ l2));
        nArray7[1] = (int)dw.ajg("s", (int)30117, (long)(0x4F27F6EFB8198C86L ^ l2));
        nArray7[2] = (int)dw.ajg("s", (int)18942, (long)(0x783CCBA4957330F3L ^ l2));
        nArray7[3] = (int)dw.ajg("s", (int)17369, (long)(0x4A1C92B9C06BAE1L ^ l2));
        nArray7[4] = (int)dw.ajg("s", (int)19897, (long)(0x16DFBA0858BE3491L ^ l2));
        nArray7[5] = (int)dw.ajg("s", (int)20022, (long)(0x5B051797D97DB726L ^ l2));
        nArray7[dw.ajg("s", (int)7661, (long)(0x619A691BC9B164D6L ^ l2))] = (int)dw.ajg("s", (int)30117, (long)(0x4F27F6EFB8198C86L ^ l2));
        nArray7[dw.ajg("s", (int)19759, (long)(0x58DCD9250CCC340BL ^ l2))] = (int)dw.ajg("s", (int)14430, (long)(0x2824649B02994170L ^ l2));
        nArray7[dw.ajg("s", (int)3395, (long)(0x40A3E8D35FB27443L ^ l2))] = (int)dw.ajg("s", (int)11475, (long)(0x1EC589A4B07155CDL ^ l2));
        nArray7[dw.ajg("s", (int)5982, (long)(0x3A29B3580FE7EE36L ^ l2))] = (int)dw.ajg("s", (int)31675, (long)(0x5351A2704B5D82B7L ^ l2));
        nArray7[dw.ajg("s", (int)3044, (long)(0x74FE229EE007F2ECL ^ l2))] = (int)dw.ajg("s", (int)30636, (long)(0x254B60A4D4868EA7L ^ l2));
        this.DRApN = new cy(this, mr.clS(nArray7)).Un((int)dw.ajg("s", (int)2489, (long)(0x69E0307F3BC0F0BEL ^ l2))).Up("");
        int[] nArray8 = new int[dw.ajg("s", (int)23109, (long)(0x6046F844B5F6A35DL ^ l2))];
        nArray8[0] = (int)dw.ajg("s", (int)29605, (long)(0x273F9BC23CA50AABL ^ l2));
        nArray8[1] = (int)dw.ajg("s", (int)24115, (long)(0x51CECEBC98BA272EL ^ l2));
        nArray8[2] = (int)dw.ajg("s", (int)20022, (long)(0x5B051797D97DB726L ^ l2));
        nArray8[3] = (int)dw.ajg("s", (int)3519, (long)(0x5B426ABDB3B6748BL ^ l2));
        nArray8[4] = (int)dw.ajg("s", (int)9306, (long)(0x5D487293DFF35D7AL ^ l2));
        nArray8[5] = (int)dw.ajg("s", (int)30117, (long)(0x4F27F6EFB8198C86L ^ l2));
        nArray8[dw.ajg("s", (int)7661, (long)(0x619A691BC9B164D6L ^ l2))] = (int)dw.ajg("s", (int)14430, (long)(0x2824649B02994170L ^ l2));
        nArray8[dw.ajg("s", (int)19759, (long)(0x58DCD9250CCC340BL ^ l2))] = (int)dw.ajg("s", (int)23067, (long)(0xBFCE65CC2B1A334L ^ l2));
        nArray8[dw.ajg("s", (int)3395, (long)(0x40A3E8D35FB27443L ^ l2))] = (int)dw.ajg("s", (int)17369, (long)(0x4A1C92B9C06BAE1L ^ l2));
        nArray8[dw.ajg("s", (int)5982, (long)(0x3A29B3580FE7EE36L ^ l2))] = (int)dw.ajg("s", (int)15291, (long)(0x390F936231AE4286L ^ l2));
        nArray8[dw.ajg("s", (int)3044, (long)(0x74FE229EE007F2ECL ^ l2))] = (int)dw.ajg("s", (int)9306, (long)(0x5D487293DFF35D7AL ^ l2));
        nArray8[dw.ajg("s", (int)2330, (long)(0x7D44C407A8A1F00EL ^ l2))] = (int)dw.ajg("s", (int)30117, (long)(0x4F27F6EFB8198C86L ^ l2));
        this.JxSnN = new ct(this, mr.clS(nArray8)).SO(1);
        int[] nArray9 = new int[dw.ajg("s", (int)3395, (long)(0x40A3E8D35FB27443L ^ l2))];
        nArray9[0] = (int)dw.ajg("s", (int)26836, (long)(0x1BAB5DBF8BE991B9L ^ l2));
        nArray9[1] = (int)dw.ajg("s", (int)30117, (long)(0x4F27F6EFB8198C86L ^ l2));
        nArray9[2] = (int)dw.ajg("s", (int)18942, (long)(0x783CCBA4957330F3L ^ l2));
        nArray9[3] = (int)dw.ajg("s", (int)17369, (long)(0x4A1C92B9C06BAE1L ^ l2));
        nArray9[4] = (int)dw.ajg("s", (int)19897, (long)(0x16DFBA0858BE3491L ^ l2));
        nArray9[5] = (int)dw.ajg("s", (int)20022, (long)(0x5B051797D97DB726L ^ l2));
        nArray9[dw.ajg("s", (int)7661, (long)(0x619A691BC9B164D6L ^ l2))] = (int)dw.ajg("s", (int)30117, (long)(0x4F27F6EFB8198C86L ^ l2));
        nArray9[dw.ajg("s", (int)19759, (long)(0x58DCD9250CCC340BL ^ l2))] = (int)dw.ajg("s", (int)25621, (long)(0x792399AD506F1D0FL ^ l2));
        this.GLHXM = new cu(this.JxSnN, mr.clS(nArray9));
        this.eSXTX = new cu(this.JxSnN, mr.clS(new int[]{(int)dw.ajg("s", (int)23067, (long)(0xBFCE65CC2B1A334L ^ l2)), (int)dw.ajg("s", (int)23200, (long)(0x1AA76EBC6398A38DL ^ l2)), (int)dw.ajg("s", (int)9306, (long)(0x5D487293DFF35D7AL ^ l2)), (int)dw.ajg("s", (int)24115, (long)(0x51CECEBC98BA272EL ^ l2)), (int)dw.ajg("s", (int)25621, (long)(0x792399AD506F1D0FL ^ l2))}));
        int[] nArray10 = new int[dw.ajg("s", (int)8205, (long)(0x4BB220843574590CL ^ l2))];
        nArray10[0] = (int)dw.ajg("s", (int)13586, (long)(0x2F9C558347ADCC39L ^ l2));
        nArray10[1] = (int)dw.ajg("s", (int)15801, (long)(0x3C800A2463E5C4B3L ^ l2));
        nArray10[2] = (int)dw.ajg("s", (int)9306, (long)(0x5D487293DFF35D7AL ^ l2));
        nArray10[3] = (int)dw.ajg("s", (int)15297, (long)(0x135D3BF84BA042A8L ^ l2));
        nArray10[4] = (int)dw.ajg("s", (int)14430, (long)(0x2824649B02994170L ^ l2));
        nArray10[5] = (int)dw.ajg("s", (int)20793, (long)(0x39C27135949BA80FL ^ l2));
        nArray10[dw.ajg("s", (int)7661, (long)(0x619A691BC9B164D6L ^ l2))] = (int)dw.ajg("s", (int)23200, (long)(0x1AA76EBC6398A38DL ^ l2));
        nArray10[dw.ajg("s", (int)19759, (long)(0x58DCD9250CCC340BL ^ l2))] = (int)dw.ajg("s", (int)20022, (long)(0x5B051797D97DB726L ^ l2));
        nArray10[dw.ajg("s", (int)3395, (long)(0x40A3E8D35FB27443L ^ l2))] = (int)dw.ajg("s", (int)14430, (long)(0x2824649B02994170L ^ l2));
        nArray10[dw.ajg("s", (int)5982, (long)(0x3A29B3580FE7EE36L ^ l2))] = (int)dw.ajg("s", (int)26836, (long)(0x1BAB5DBF8BE991B9L ^ l2));
        nArray10[dw.ajg("s", (int)3044, (long)(0x74FE229EE007F2ECL ^ l2))] = (int)dw.ajg("s", (int)21071, (long)(0x6ACF67E6C4CBAB4AL ^ l2));
        nArray10[dw.ajg("s", (int)2330, (long)(0x7D44C407A8A1F00EL ^ l2))] = (int)dw.ajg("s", (int)20022, (long)(0x5B051797D97DB726L ^ l2));
        nArray10[dw.ajg("s", (int)23109, (long)(0x6046F844B5F6A35DL ^ l2))] = (int)dw.ajg("s", (int)11537, (long)(0x520DFB011465D403L ^ l2));
        nArray10[dw.ajg("s", (int)28240, (long)(0x5AE80EA24D33976CL ^ l2))] = (int)dw.ajg("s", (int)30117, (long)(0x4F27F6EFB8198C86L ^ l2));
        nArray10[dw.ajg("s", (int)10961, (long)(0x2B5AE820908953C0L ^ l2))] = (int)dw.ajg("s", (int)17369, (long)(0x4A1C92B9C06BAE1L ^ l2));
        this.CIvYl = new cJ(this, mr.clS(nArray10)).WE(false);
        this.WHKNh = mT.cpA();
        this.GViCt = "";
    }

    /*
     * Unable to fully structure code
     */
    static {
        block19: {
            block18: {
                block17: {
                    block16: {
                        block15: {
                            dw.gqfIk = gb.aYR(2033088185607127675L, 2682329882007313000L, MethodHandles.lookup().lookupClass()).a(98852061267588L);
                            dw.vAoCj = new HashMap<K, V>(13);
                            var22 = dw.gqfIk ^ 117424999850624L;
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
                            var31_3 = new String[2];
                            var29_4 = 0;
                            var28_5 = "\u00d0\u0096x4a\u00ff\u008a\u0086\u00b28\u0086\u00d7-2\u00d7r\u0010\u00bc\u00acw\u00e5x\u0006\u00e3\u0018K\u00b0i\u00e6m\u00c7Q\u00e0";
                            var30_6 = "\u00d0\u0096x4a\u00ff\u008a\u0086\u00b28\u0086\u00d7-2\u00d7r\u0010\u00bc\u00acw\u00e5x\u0006\u00e3\u0018K\u00b0i\u00e6m\u00c7Q\u00e0".length();
                            var27_7 = 16;
                            var26_8 = -1;
lbl20:
                            // 2 sources

                            while (true) {
                                continue;
                                break;
                            }
lbl22:
                            // 1 sources

                            while (true) {
                                var31_3[var29_4++] = dw.aja(var32_9).intern();
                                if ((var26_8 += var27_7) < var30_6) {
                                    var27_7 = var28_5.charAt(var26_8);
                                    ** continue;
                                }
                                break block15;
                                break;
                            }
                            v3 = ++var26_8;
                            var32_9 = var24_1.doFinal(var28_5.substring(v3, v3 + var27_7).getBytes("ISO-8859-1"));
                            ** while (true)
                        }
                        dw.xFYqD = var31_3;
                        dw.jzQfA = new String[2];
                        dw.gFGcY = new HashMap<K, V>(13);
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
                        var17_12 = new long[69];
                        var14_13 = 0;
                        var15_14 = "\u00e6%\u00db\u001a\u00cd\u00adzT\u000f(\u00f7\u00d0\u00ef\u00c0,\u0083\u00ae\u00cf%\u000b5\u00a5Y\u00c8zk8 \u001c\u00d5\u00c0\u0085\u00a0\u00fc4\u0013\u00f2=\u0098{\u00c3\u008c0\u0004\u001cJ_\u000b\u00acp\u00179/uH]\u0084\u00f9\u00d0\u009e\u00b7\u0011\u00fe4\u00cb\u0081\u00a1\u008c\u00c4Tj\u0091T\u00ba\u00aa\u00b7QI\u00f6\u00d4(\u00ed\u0001\u00f4/\u009e\u0089k\u00a3\u00e2\u00a8[;\u00b4\u00a6\u00d9\u00ee\u00c9\u0011\u00e6Y\u00ecV\u00dc\u00e1\u0011\u0005\u00c5\u001b:\u00a9r\u00c3\u00a9\u00cc\u00d1t\u00c5\u0086\u00ba\u00b0D\u00b4\u00a4\u00d2\u00bbM\u00faVhZ\u0095r\u0017\u0082\u00fc\u0086:\u00e7\u00d4Pi(\u00c3_>\u00b7\u00ce\u009aE\u008b\u00e6\u00a7\u00c6Q\u0012'\u0085\u001d\u00e7\u0000\u00ef\u009a\u00aa\u008e\u00b5\u00b1 \u00b3\u00a4<x\u00d1\bTh\u00aa\u00c9{\u0086\u0012R6\u00d2F\u00f4\u00baH\u0097\u0011\u00b6\"\u00e1+J\u000fp\b\u00ce\u00ad<y.\u00b3p\u00e9y\u0015FN\u00a4\u008e.\u009e\u00a0\u00a7\u00e0\u0088zd\u00d4^\u00814\u00b1\u00f3?\f\u00ff\\ht\u00b7\u00efn\u00d7\u00cb\u00a0T\u00d7V\u009e\u00a0\u00a3\u009c\u00a7(\u00b8\u00aah\u00b6\u008f\u00e0P\u00c7~|-\u00d1\u00c1z\u00b9\u00a1\u008b\ba\u00e4-\u00ce\u00dcU7>\u00be)\u00f1\u00ca\u009e\u0082\u00cc$\u00c9H\u00f1\u00ed\u0006pB\u00ab=k\u00f3aQ<\u00bcW?\u00855\u00e2\u00a4|d\\G\u0013M\u00db\u008bS+\u0005\u0086\u0007\u00f1\u008eT\u00f5o\u00d3\u008f\u00be\u00bb\u00d7D\u00f4\u008d\u00e0\u00853\u008c\u0088&D\u001b\u00f5\u0087\u0090\u00beV\u0095\f\u0003\u00ad\u00aa\u0002\u00b5J+\f\u0017Y\u00f5dm^\u0085\u00b8\u00a8\u0001c\u0097\u00fasX\u00a8\u00e4\u00bf\u00d8\u0007\u00eb\u00c7E\u0081`Sa\u00018\u0004{\u009f/\u00aa.\u00a4\u00f2\u0003\u00f0\u008d\u00d7F\u00dc\"\u001f\u00d8x\u0094\u00c1\u00f7u\u0002\u00b5k\u00d8Tp\u00fe+\u00a2\u00c91\bGY'\f3\u0002=\nc\u001b\u000f\rX/E\u008c\u00ca\u00d0\u00d7\u0085\u00d6\u0098\u00aa2\u000f\u00f0Qjh\"\u00e4a*V \u00d9h\u00bb\u0096\u00d3\u00f9[\u00bd%\u00f7 \u00c5?\u00f1\u0096\u00f0<|\u0084\u00d9\u00d6G\u00c0\u0093\u00ed\u00e4FviM\u00c7\u0007R\u00e8\u001bL\u0093\u00d7\u00ee\u0091r[?\u00eag\u00e0.|\u00ecf\u0091\u00b8\u00ff<\u001d\u00ecl\u00032\u00afS)[VZ\u00cd\u00d2\u00c4\u00ed\u00e0.b8x\u00eb\u0083x\rj\u00e2\u00c76\u0095\u0014\u00c0\bE";
                        var16_15 = "\u00e6%\u00db\u001a\u00cd\u00adzT\u000f(\u00f7\u00d0\u00ef\u00c0,\u0083\u00ae\u00cf%\u000b5\u00a5Y\u00c8zk8 \u001c\u00d5\u00c0\u0085\u00a0\u00fc4\u0013\u00f2=\u0098{\u00c3\u008c0\u0004\u001cJ_\u000b\u00acp\u00179/uH]\u0084\u00f9\u00d0\u009e\u00b7\u0011\u00fe4\u00cb\u0081\u00a1\u008c\u00c4Tj\u0091T\u00ba\u00aa\u00b7QI\u00f6\u00d4(\u00ed\u0001\u00f4/\u009e\u0089k\u00a3\u00e2\u00a8[;\u00b4\u00a6\u00d9\u00ee\u00c9\u0011\u00e6Y\u00ecV\u00dc\u00e1\u0011\u0005\u00c5\u001b:\u00a9r\u00c3\u00a9\u00cc\u00d1t\u00c5\u0086\u00ba\u00b0D\u00b4\u00a4\u00d2\u00bbM\u00faVhZ\u0095r\u0017\u0082\u00fc\u0086:\u00e7\u00d4Pi(\u00c3_>\u00b7\u00ce\u009aE\u008b\u00e6\u00a7\u00c6Q\u0012'\u0085\u001d\u00e7\u0000\u00ef\u009a\u00aa\u008e\u00b5\u00b1 \u00b3\u00a4<x\u00d1\bTh\u00aa\u00c9{\u0086\u0012R6\u00d2F\u00f4\u00baH\u0097\u0011\u00b6\"\u00e1+J\u000fp\b\u00ce\u00ad<y.\u00b3p\u00e9y\u0015FN\u00a4\u008e.\u009e\u00a0\u00a7\u00e0\u0088zd\u00d4^\u00814\u00b1\u00f3?\f\u00ff\\ht\u00b7\u00efn\u00d7\u00cb\u00a0T\u00d7V\u009e\u00a0\u00a3\u009c\u00a7(\u00b8\u00aah\u00b6\u008f\u00e0P\u00c7~|-\u00d1\u00c1z\u00b9\u00a1\u008b\ba\u00e4-\u00ce\u00dcU7>\u00be)\u00f1\u00ca\u009e\u0082\u00cc$\u00c9H\u00f1\u00ed\u0006pB\u00ab=k\u00f3aQ<\u00bcW?\u00855\u00e2\u00a4|d\\G\u0013M\u00db\u008bS+\u0005\u0086\u0007\u00f1\u008eT\u00f5o\u00d3\u008f\u00be\u00bb\u00d7D\u00f4\u008d\u00e0\u00853\u008c\u0088&D\u001b\u00f5\u0087\u0090\u00beV\u0095\f\u0003\u00ad\u00aa\u0002\u00b5J+\f\u0017Y\u00f5dm^\u0085\u00b8\u00a8\u0001c\u0097\u00fasX\u00a8\u00e4\u00bf\u00d8\u0007\u00eb\u00c7E\u0081`Sa\u00018\u0004{\u009f/\u00aa.\u00a4\u00f2\u0003\u00f0\u008d\u00d7F\u00dc\"\u001f\u00d8x\u0094\u00c1\u00f7u\u0002\u00b5k\u00d8Tp\u00fe+\u00a2\u00c91\bGY'\f3\u0002=\nc\u001b\u000f\rX/E\u008c\u00ca\u00d0\u00d7\u0085\u00d6\u0098\u00aa2\u000f\u00f0Qjh\"\u00e4a*V \u00d9h\u00bb\u0096\u00d3\u00f9[\u00bd%\u00f7 \u00c5?\u00f1\u0096\u00f0<|\u0084\u00d9\u00d6G\u00c0\u0093\u00ed\u00e4FviM\u00c7\u0007R\u00e8\u001bL\u0093\u00d7\u00ee\u0091r[?\u00eag\u00e0.|\u00ecf\u0091\u00b8\u00ff<\u001d\u00ecl\u00032\u00afS)[VZ\u00cd\u00d2\u00c4\u00ed\u00e0.b8x\u00eb\u0083x\rj\u00e2\u00c76\u0095\u0014\u00c0\bE".length();
                        var13_16 = 0;
                        while (true) {
                            var18_17 = var15_14.substring(var13_16, var13_16 += 8).getBytes("ISO-8859-1");
                            v7 = var17_12;
                            v8 = var14_13++;
                            v9 = ((long)var18_17[0] & 255L) << 56 | ((long)var18_17[1] & 255L) << 48 | ((long)var18_17[2] & 255L) << 40 | ((long)var18_17[3] & 255L) << 32 | ((long)var18_17[4] & 255L) << 24 | ((long)var18_17[5] & 255L) << 16 | ((long)var18_17[6] & 255L) << 8 | (long)var18_17[7] & 255L;
                            v10 = -1;
                            break block16;
                            break;
                        }
lbl58:
                        // 1 sources

                        while (true) {
                            v7[v8] = v11;
                            if (var13_16 < var16_15) ** continue;
                            var15_14 = "\u00edB\u00b8\u000f>\u00bcl\u00ed\u0095\u007f\u00b0\u00ed7a\u00c3\u00b5";
                            var16_15 = "\u00edB\u00b8\u000f>\u00bcl\u00ed\u0095\u007f\u00b0\u00ed7a\u00c3\u00b5".length();
                            var13_16 = 0;
                            while (true) {
                                var18_17 = var15_14.substring(var13_16, var13_16 += 8).getBytes("ISO-8859-1");
                                v7 = var17_12;
                                v8 = var14_13++;
                                v9 = ((long)var18_17[0] & 255L) << 56 | ((long)var18_17[1] & 255L) << 48 | ((long)var18_17[2] & 255L) << 40 | ((long)var18_17[3] & 255L) << 32 | ((long)var18_17[4] & 255L) << 24 | ((long)var18_17[5] & 255L) << 16 | ((long)var18_17[6] & 255L) << 8 | (long)var18_17[7] & 255L;
                                v10 = 0;
                                break block16;
                                break;
                            }
                            break;
                        }
lbl71:
                        // 1 sources

                        while (true) {
                            v7[v8] = v11;
                            if (var13_16 < var16_15) ** continue;
                            break block17;
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
lbl84:
                        // 1 sources

                        ** continue;
                    }
                }
                dw.GENnk = var17_12;
                dw.ezWXb = new Integer[69];
                dw.VJtHn = new HashMap<K, V>(13);
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
                var6_22 = new long[2];
                var3_23 = 0;
                var4_24 = "\u009c\u0081\u00a5p\u00efH\u00b34\u00ccG\u0089\u00f9\u00b9\u00ac\u00b7#";
                var5_25 = "\u009c\u0081\u00a5p\u00efH\u00b34\u00ccG\u0089\u00f9\u00b9\u00ac\u00b7#".length();
                var2_26 = 0;
                while (true) {
                    break block18;
                    break;
                }
lbl106:
                // 1 sources

                while (true) {
                    var6_22[v15] = ((long)var10_29[0] & 255L) << 56 | ((long)var10_29[1] & 255L) << 48 | ((long)var10_29[2] & 255L) << 40 | ((long)var10_29[3] & 255L) << 32 | ((long)var10_29[4] & 255L) << 24 | ((long)var10_29[5] & 255L) << 16 | ((long)var10_29[6] & 255L) << 8 | (long)var10_29[7] & 255L;
                    if (var2_26 < var5_25) ** continue;
                    break block19;
                    break;
                }
            }
            var7_27 = var4_24.substring(var2_26, var2_26 += 8).getBytes("ISO-8859-1");
            v15 = var3_23++;
            var8_28 = ((long)var7_27[0] & 255L) << 56 | ((long)var7_27[1] & 255L) << 48 | ((long)var7_27[2] & 255L) << 40 | ((long)var7_27[3] & 255L) << 32 | ((long)var7_27[4] & 255L) << 24 | ((long)var7_27[5] & 255L) << 16 | ((long)var7_27[6] & 255L) << 8 | (long)var7_27[7] & 255L;
            var10_29 = var0_20.doFinal(new byte[]{(byte)(var8_28 >>> 56), (byte)(var8_28 >>> 48), (byte)(var8_28 >>> 40), (byte)(var8_28 >>> 32), (byte)(var8_28 >>> 24), (byte)(var8_28 >>> 16), (byte)(var8_28 >>> 8), (byte)var8_28});
            ** while (true)
        }
        dw.FjxvB = var6_22;
        dw.mkXFq = new Long[2];
    }

    private List<Entity> aiV() {
        ArrayList<Entity> arrayList;
        block21: {
            iS[] iSArray;
            block20: {
                long l2 = gqfIk ^ 0x5CEAB168EBEEL;
                arrayList = new ArrayList<Entity>();
                iSArray = dh.afl();
                fr fr2 = rD.dlJ().aZx(fr.class);
                if (!this.CIvYl.WF()) break block20;
                LivingEntity livingEntity = fr2.aOQ();
                try {
                    if (livingEntity != null) {
                        arrayList.add((Entity)livingEntity);
                    }
                }
                catch (MatchException matchException) {
                    throw dw.aiZ(matchException);
                }
                if (iSArray == null) break block21;
            }
            for (Entity entity : rD.dlmvG.world.getEntities()) {
                block18: {
                    boolean bl2;
                    block19: {
                        block16: {
                            block17: {
                                Entity entity2;
                                block15: {
                                    try {
                                        entity2 = entity;
                                        if (iSArray != null) break block15;
                                        if (entity2 == rD.dlmvG.player) continue;
                                    }
                                    catch (MatchException matchException) {
                                        throw dw.aiZ(matchException);
                                    }
                                    entity2 = entity;
                                }
                                try {
                                    try {
                                        bl2 = jJ.bIB(entity2);
                                        if (iSArray != null) break block16;
                                        if (bl2) break block17;
                                    }
                                    catch (MatchException matchException) {
                                        throw dw.aiZ(matchException);
                                    }
                                    if (iSArray == null) continue;
                                }
                                catch (MatchException matchException) {
                                    throw dw.aiZ(matchException);
                                }
                            }
                            bl2 = this.ZIRir.VX(entity);
                        }
                        try {
                            try {
                                if (iSArray != null) break block18;
                                if (bl2) break block19;
                            }
                            catch (MatchException matchException) {
                                throw dw.aiZ(matchException);
                            }
                            if (iSArray == null) continue;
                        }
                        catch (MatchException matchException) {
                            throw dw.aiZ(matchException);
                        }
                    }
                    bl2 = arrayList.add(entity);
                }
                if (iSArray == null) continue;
            }
        }
        return arrayList;
    }

    private static Object ajc(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = dw.ajb(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static int ajf(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = dw.aje(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static String ajb(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5F12;
        if (jzQfA[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])vAoCj.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    vAoCj.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dw", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = xFYqD[n3].getBytes("ISO-8859-1");
            dw.jzQfA[n3] = dw.aja(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return jzQfA[n3];
    }

    private static int aje(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x1BB5;
        if (ezWXb[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = GENnk[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])gFGcY.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    gFGcY.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dw", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dw.ezWXb[n3] = n4;
        }
        return ezWXb[n3];
    }

    /*
     * Unable to fully structure code
     */
    @hG
    public void aiT(gH.th var1_1) {
        block35: {
            block38: {
                block37: {
                    block36: {
                        block33: {
                            block34: {
                                block31: {
                                    block32: {
                                        block29: {
                                            block30: {
                                                var2_2 = dw.gqfIk ^ 89305688834828L;
                                                var4_3 = dh.afl();
                                                try {
                                                    v0 = this.bab();
                                                    if (var4_3 != null) break block29;
                                                    if (v0) break block30;
                                                }
                                                catch (MatchException v1) {
                                                    throw dw.aiZ(v1);
                                                }
                                                return;
                                            }
                                            v0 = this.JxSnN.SQ(1);
                                        }
                                        try {
                                            try {
                                                if (var4_3 != null) break block31;
                                                if (!v0) break block32;
                                            }
                                            catch (MatchException v2) {
                                                throw dw.aiZ(v2);
                                            }
                                            kA.bSs(this.zqiDq.VB() / 100.0f);
                                            return;
                                        }
                                        catch (MatchException v3) {
                                            throw dw.aiZ(v3);
                                        }
                                    }
                                    v0 = this.OrinU.SQ(0);
                                }
                                try {
                                    try {
                                        try {
                                            try {
                                                if (var4_3 != null) break block33;
                                                if (v0) {
                                                }
                                                ** GOTO lbl57
                                            }
                                            catch (MatchException v4) {
                                                throw dw.aiZ(v4);
                                            }
                                            v5 = this.WHKNh;
                                            if (var4_3 != null) break block34;
                                        }
                                        catch (MatchException v6) {
                                            throw dw.aiZ(v6);
                                        }
                                        if (!v5.cpC((long)dw.ajj("j", (int)25394, (long)(7009976904502001650L ^ var2_2)))) break block35;
                                    }
                                    catch (MatchException v7) {
                                        throw dw.aiZ(v7);
                                    }
                                    this.pjPhF = ob.cBv((String)dw.ajd("j", (int)32507, (long)(2023217945813678048L ^ var2_2)));
                                    v5 = this.WHKNh;
                                }
                                catch (MatchException v8) {
                                    throw dw.aiZ(v8);
                                }
                            }
                            try {
                                try {
                                    v5.cpB();
                                    if (var4_3 == null) break block35;
lbl57:
                                    // 2 sources

                                    v9 = this;
                                    if (var4_3 != null) break block36;
                                }
                                catch (MatchException v10) {
                                    throw dw.aiZ(v10);
                                }
                                v0 = v9.WHKNh.cpC((long)dw.ajj("j", (int)23465, (long)(5099736661602371432L ^ var2_2)));
                            }
                            catch (MatchException v11) {
                                throw dw.aiZ(v11);
                            }
                        }
                        if (!v0) break block35;
                        v9 = this;
                    }
                    var5_4 = v9.DRApN.Us();
                    try {
                        try {
                            try {
                                v12 = jd.bAm(var5_4);
                                if (var4_3 != null) break block37;
                                if (v12) {
                                }
                                ** GOTO lbl98
                            }
                            catch (MatchException v13) {
                                throw dw.aiZ(v13);
                            }
                            v14 = var5_4;
                            if (var4_3 != null) break block38;
                        }
                        catch (MatchException v15) {
                            throw dw.aiZ(v15);
                        }
                        v12 = v14.equals(this.GViCt);
                    }
                    catch (MatchException v16) {
                        throw dw.aiZ(v16);
                    }
                }
                if (v12) ** GOTO lbl98
                v14 = var5_4;
            }
            try {
                oe.cCd(v14).thenAccept((Consumer)(Consumer<lv>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, aiY(java.lang.String sixtwo.lv ), (Lsixtwo/lv;)V)((dw)this, (String)var5_4));
                if (var4_3 == null) break block35;
lbl98:
                // 3 sources

                this.WHKNh.cpB();
            }
            catch (MatchException v17) {
                throw dw.aiZ(v17);
            }
        }
    }

    /*
     * Unable to fully structure code
     */
    @hG
    public void aiU(go.sX var1_1) {
        block25: {
            block26: {
                block23: {
                    block24: {
                        block21: {
                            block22: {
                                var2_2 = dw.gqfIk ^ 5496859251344L;
                                var4_3 = dh.afl();
                                try {
                                    v0 = this.bab();
                                    if (var4_3 != null) break block21;
                                    if (v0) break block22;
                                }
                                catch (MatchException v1) {
                                    throw dw.aiZ(v1);
                                }
                                return;
                            }
                            v0 = this.JxSnN.SQ(0);
                        }
                        var5_4 = v0;
                        try {
                            try {
                                try {
                                    if (!var5_4) break block23;
                                    v2 = this;
                                    if (var4_3 != null) break block24;
                                }
                                catch (MatchException v3) {
                                    throw dw.aiZ(v3);
                                }
                                if (v2.pjPhF != null) break block23;
                            }
                            catch (MatchException v4) {
                                throw dw.aiZ(v4);
                            }
                            v2 = this;
                        }
                        catch (MatchException v5) {
                            throw dw.aiZ(v5);
                        }
                    }
                    v2.pjPhF = ob.cBv((String)dw.ajd("j", (int)7901, (long)(683697414791120475L ^ var2_2)));
                    return;
                }
                var6_5 = var1_1.bbh();
                var7_6 = var1_1.bbi();
                var8_7 = this.RPJuT.VB();
                var9_8 = this.zqiDq.VC() * dw.ajg("s", (int)25621, (long)(8729047806992414727L ^ var2_2));
                var10_9 = this.aiV();
                try {
                    try {
                        v6 = var10_9;
                        if (var4_3 != null) break block25;
                        if (!v6.isEmpty()) break block26;
                    }
                    catch (MatchException v7) {
                        throw dw.aiZ(v7);
                    }
                    return;
                }
                catch (MatchException v8) {
                    throw dw.aiZ(v8);
                }
            }
            v6 = var10_9;
        }
        for (Entity var12_11 : v6) {
            block28: {
                block27: {
                    try {
                        try {
                            if (var4_3 != null) break block27;
                            if (var5_4) {
                            }
                            ** GOTO lbl71
                        }
                        catch (MatchException v9) {
                            throw dw.aiZ(v9);
                        }
                        this.aiX(var12_11, var6_5, var7_6, var8_7, var9_8);
                    }
                    catch (MatchException v10) {
                        throw dw.aiZ(v10);
                    }
                }
                try {
                    if (var4_3 == null) break block28;
lbl71:
                    // 2 sources

                    this.aiW(var12_11, var6_5, var7_6, var8_7);
                }
                catch (MatchException v11) {
                    throw dw.aiZ(v11);
                }
            }
            if (var4_3 == null) continue;
        }
    }

    private void aiX(Entity entity, MatrixStack matrixStack, float f2, float f3, int n2) {
        block2: {
            Vec3d vec3d;
            block3: {
                long l2 = gqfIk ^ 0x29C355FC295EL;
                vec3d = entity.getLerpedPos(f2);
                double d2 = System.currentTimeMillis() % (long)n2;
                iS[] iSArray = dh.afl();
                double d3 = Math.sin(d2 / (double)n2 * Math.PI) * (double)entity.getHeight();
                try {
                    if (iSArray != null) break block2;
                    if (!this.DVJWE.WF()) break block3;
                }
                catch (MatchException matchException) {
                    throw dw.aiZ(matchException);
                }
                vec3d = vec3d.add(0.0, d3, 0.0);
            }
            kz.bSh(vec3d, matrixStack, f3, this.xeAup.Wh(), this.pjPhF);
        }
    }

    private static String aja(byte[] byArray) {
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

    private static long ajh(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0xAC9;
        if (mkXFq[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = FjxvB[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])VJtHn.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    VJtHn.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dw", exception);
            }
            long l5 = ((long)byArray[0] & 0xFFL) << 56 | ((long)byArray[1] & 0xFFL) << 48 | ((long)byArray[2] & 0xFFL) << 40 | ((long)byArray[3] & 0xFFL) << 32 | ((long)byArray[4] & 0xFFL) << 24 | ((long)byArray[5] & 0xFFL) << 16 | ((long)byArray[6] & 0xFFL) << 8 | (long)byArray[7] & 0xFFL;
            dw.mkXFq[n3] = l5;
        }
        return mkXFq[n3];
    }

    private void aiW(Entity entity, MatrixStack matrixStack, float f2, float f3) {
        kz.bSi(matrixStack, entity, this.xeAup.Wh(), f3, f2);
    }

    private static long aji(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        long l3 = dw.ajh(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Long.TYPE, l3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return l3;
    }

    private static CallSite ajj(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dw" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private /* synthetic */ void aiY(String string, lv lv2) {
        this.pjPhF = lv2;
        this.GViCt = string;
        this.WHKNh.cpB();
    }

    private static CallSite ajg(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dw" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException aiZ(MatchException matchException) {
        return matchException;
    }

    private static CallSite ajd(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_2().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dw" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dw.class, "aji", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)J", null));
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
            return MethodHandles.lookup().findStatic(dw.class, "ajf", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(dw.class, "ajc", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

