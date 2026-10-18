/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_12079$class_12081
 *  net.minecraft.class_2960
 *  net.minecraft.class_742
 *  net.minecraft.class_8685
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.List;
import java.util.Map;
import native.Loader;
import net.minecraft.class_12079;
import net.minecraft.class_2960;
import net.minecraft.class_742;
import net.minecraft.class_8685;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.cy;
import sixtwo.fN$sU;
import sixtwo.fX;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.iS;
import sixtwo.mr;

public class fN
extends gg {
    private final cv TclUV;
    private final cw bHviN;
    private final cw pWupw;
    private final ct xuNWw;
    private final cu DPswU;
    private final cu YESwS;
    private final ct NYWkc;
    private final ct BMcCi;
    private final ct iWgvu;
    private final cu lprwR;
    private final cu smvRE;
    private final cy TCPvX;
    private final cy mzdNu;
    private volatile class_12079.class_12081 SseFa;
    private volatile String WHhIl;
    private volatile String jUZJy;
    private volatile class_12079.class_12081 zvkmn;
    private volatile String mRecC;
    private volatile String HNAeJ;
    static List<fN$sU> VJZzZ;
    private static long slYDs;
    private static String[] fkfoW;
    private static String[] kICrL;
    private static Map rWjLP;
    private static long[] gHArN;
    private static Integer[] OrJyf;
    private static Map kSOIw;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fN() {
        block3: {
            long l = slYDs ^ 0x15CD18E3F068L;
            super(gf.aZL((int)fN.aWi("y", (int)6520, (long)(0x35FFCF2D00626189L ^ l)), false, gh.KfAlY));
            int[] nArray = new int[fN.aWi("y", (int)29891, (long)(0x65E4680E84C08C64L ^ l))];
            nArray[0] = (int)fN.aWi("y", (int)19458, (long)(0x39FD566ED61234C2L ^ l));
            nArray[1] = (int)fN.aWi("y", (int)20028, (long)(0x5391D213F71CB6D0L ^ l));
            nArray[2] = (int)fN.aWi("y", (int)10572, (long)(0x30F9E5B1025351B5L ^ l));
            nArray[3] = (int)fN.aWi("y", (int)30413, (long)(0x3995FFA0C21E0E6EL ^ l));
            nArray[4] = (int)fN.aWi("y", (int)32523, (long)(0x44B2E74373D087E4L ^ l));
            nArray[5] = (int)fN.aWi("y", (int)3753, (long)(0x72EA2A57EFCAF66AL ^ l));
            nArray[fN.aWi("y", (int)23588, (long)(0x65C7E95F5F5124DBL ^ l))] = (int)fN.aWi("y", (int)30413, (long)(0x3995FFA0C21E0E6EL ^ l));
            this.TclUV = new cv(this, mr.clS(nArray));
            int[] nArray2 = new int[fN.aWi("y", (int)16073, (long)(0x3B35550F65C2C61DL ^ l))];
            nArray2[0] = (int)fN.aWi("y", (int)7950, (long)(0xE7C2FCF6EDE7B1L ^ l));
            nArray2[1] = (int)fN.aWi("y", (int)29510, (long)(0x6891879DB8998B84L ^ l));
            nArray2[2] = (int)fN.aWi("y", (int)634, (long)(0x153A84F55497FA88L ^ l));
            nArray2[3] = (int)fN.aWi("y", (int)28321, (long)(0x1A050D243F619674L ^ l));
            nArray2[4] = (int)fN.aWi("y", (int)8467, (long)(0x5C7883BB1E959CEL ^ l));
            nArray2[5] = (int)fN.aWi("y", (int)29118, (long)(0x266445B1F3FC0970L ^ l));
            nArray2[fN.aWi("y", (int)3390, (long)(0x7035BCB8081FF5D0L ^ l))] = (int)fN.aWi("y", (int)2517, (long)(0x627A68555C78F123L ^ l));
            nArray2[fN.aWi("y", (int)10608, (long)(0x5FB3F6F0553C51AFL ^ l))] = (int)fN.aWi("y", (int)744, (long)(0x6DCA4717DBF97A23L ^ l));
            this.bHviN = new cw(this.TclUV, mr.clS(nArray2)).Tz();
            int[] nArray3 = new int[fN.aWi("y", (int)18299, (long)(0x2437CBEAFDBCBFBDL ^ l))];
            nArray3[0] = (int)fN.aWi("y", (int)16989, (long)(0x17FD27D7D340BAF7L ^ l));
            nArray3[1] = (int)fN.aWi("y", (int)30413, (long)(0x3995FFA0C21E0E6EL ^ l));
            nArray3[2] = (int)fN.aWi("y", (int)7361, (long)(0xD3FF7E28378E431L ^ l));
            nArray3[3] = (int)fN.aWi("y", (int)32523, (long)(0x44B2E74373D087E4L ^ l));
            nArray3[4] = (int)fN.aWi("y", (int)4475, (long)(0x8BD5462F656E9DAL ^ l));
            nArray3[5] = (int)fN.aWi("y", (int)29897, (long)(0x4FFFACCCAB568C29L ^ l));
            nArray3[fN.aWi("y", (int)3390, (long)(0x7035BCB8081FF5D0L ^ l))] = (int)fN.aWi("y", (int)4445, (long)(0x447F7BDD0F5EE98EL ^ l));
            nArray3[fN.aWi("y", (int)10608, (long)(0x5FB3F6F0553C51AFL ^ l))] = (int)fN.aWi("y", (int)15082, (long)(0x49046913231B423DL ^ l));
            nArray3[fN.aWi("y", (int)20073, (long)(0x71132BDEDA1BB6A0L ^ l))] = (int)fN.aWi("y", (int)11231, (long)(0x30BF93D2FC935367L ^ l));
            nArray3[fN.aWi("y", (int)10888, (long)(0x588FFC9C5AC25270L ^ l))] = (int)fN.aWi("y", (int)19801, (long)(0x32F3B0FA029135F9L ^ l));
            nArray3[fN.aWi("y", (int)6301, (long)(0x48A35F976B7C6036L ^ l))] = (int)fN.aWi("y", (int)32523, (long)(0x44B2E74373D087E4L ^ l));
            nArray3[fN.aWi("y", (int)27753, (long)(0x47C2B6C0419614A8L ^ l))] = (int)fN.aWi("y", (int)4475, (long)(0x8BD5462F656E9DAL ^ l));
            nArray3[fN.aWi("y", (int)3960, (long)(0x5BDB1C20A87B7782L ^ l))] = (int)fN.aWi("y", (int)23406, (long)(0x340CDD6F8BDC23C6L ^ l));
            this.pWupw = new cw(this.TclUV, mr.clS(nArray3)).Tz();
            int[] nArray4 = new int[fN.aWi("y", (int)13320, (long)(0x15618CEFD2D2CCD2L ^ l))];
            nArray4[0] = (int)fN.aWi("y", (int)16989, (long)(0x17FD27D7D340BAF7L ^ l));
            nArray4[1] = (int)fN.aWi("y", (int)20415, (long)(0x79FA30BA98393752L ^ l));
            nArray4[2] = (int)fN.aWi("y", (int)744, (long)(0x6DCA4717DBF97A23L ^ l));
            nArray4[3] = (int)fN.aWi("y", (int)29897, (long)(0x4FFFACCCAB568C29L ^ l));
            nArray4[4] = (int)fN.aWi("y", (int)8467, (long)(0x5C7883BB1E959CEL ^ l));
            nArray4[5] = (int)fN.aWi("y", (int)32652, (long)(0x477C62E548338767L ^ l));
            nArray4[fN.aWi("y", (int)3390, (long)(0x7035BCB8081FF5D0L ^ l))] = (int)fN.aWi("y", (int)17722, (long)(0x1D2C9C8603233DEBL ^ l));
            nArray4[fN.aWi("y", (int)10608, (long)(0x5FB3F6F0553C51AFL ^ l))] = (int)fN.aWi("y", (int)744, (long)(0x6DCA4717DBF97A23L ^ l));
            nArray4[fN.aWi("y", (int)20073, (long)(0x71132BDEDA1BB6A0L ^ l))] = (int)fN.aWi("y", (int)29897, (long)(0x4FFFACCCAB568C29L ^ l));
            nArray4[fN.aWi("y", (int)10575, (long)(0x45BA5A5F6F1351BCL ^ l))] = (int)fN.aWi("y", (int)8467, (long)(0x5C7883BB1E959CEL ^ l));
            nArray4[fN.aWi("y", (int)24536, (long)(0x9978761917BA739L ^ l))] = (int)fN.aWi("y", (int)6421, (long)(0x44609F47AD55E1C7L ^ l));
            nArray4[fN.aWi("y", (int)25035, (long)(0x45B3BAEB2C459906L ^ l))] = (int)fN.aWi("y", (int)3561, (long)(0x1B2E7D3E30DBF555L ^ l));
            nArray4[fN.aWi("y", (int)29735, (long)(0x85E767D17958C9EL ^ l))] = (int)fN.aWi("y", (int)4475, (long)(0x8BD5462F656E9DAL ^ l));
            nArray4[fN.aWi("y", (int)1244, (long)(0x389F83CF1308FC19L ^ l))] = (int)fN.aWi("y", (int)10136, (long)(0x4C94615734D05F43L ^ l));
            nArray4[fN.aWi("y", (int)13044, (long)(0x4C9A7A493D374A24L ^ l))] = (int)fN.aWi("y", (int)32523, (long)(0x44B2E74373D087E4L ^ l));
            this.xuNWw = new ct(this, mr.clS(nArray4));
            int[] nArray5 = new int[fN.aWi("y", (int)20073, (long)(0x71132BDEDA1BB6A0L ^ l))];
            nArray5[0] = (int)fN.aWi("y", (int)4542, (long)(0x12CAD8DCD5A56949L ^ l));
            nArray5[1] = (int)fN.aWi("y", (int)32523, (long)(0x44B2E74373D087E4L ^ l));
            nArray5[2] = (int)fN.aWi("y", (int)29727, (long)(0x4B009E596A9A0CB0L ^ l));
            nArray5[3] = (int)fN.aWi("y", (int)7153, (long)(0x3FAAF68582E6630AL ^ l));
            nArray5[4] = (int)fN.aWi("y", (int)23584, (long)(0x69FD0EAAA1D9A4FEL ^ l));
            nArray5[5] = (int)fN.aWi("y", (int)15082, (long)(0x49046913231B423DL ^ l));
            nArray5[fN.aWi("y", (int)3390, (long)(0x7035BCB8081FF5D0L ^ l))] = (int)fN.aWi("y", (int)30413, (long)(0x3995FFA0C21E0E6EL ^ l));
            nArray5[fN.aWi("y", (int)10608, (long)(0x5FB3F6F0553C51AFL ^ l))] = (int)fN.aWi("y", (int)32351, (long)(0x4FE6B3F5EDF78687L ^ l));
            this.DPswU = new cu(this.xuNWw, mr.clS(nArray5)).SY();
            int[] nArray6 = new int[fN.aWi("y", (int)3390, (long)(0x7035BCB8081FF5D0L ^ l))];
            nArray6[0] = (int)fN.aWi("y", (int)17902, (long)(0x7AD95AEE54E73D53L ^ l));
            nArray6[1] = (int)fN.aWi("y", (int)23584, (long)(0x69FD0EAAA1D9A4FEL ^ l));
            nArray6[2] = (int)fN.aWi("y", (int)32351, (long)(0x4FE6B3F5EDF78687L ^ l));
            nArray6[3] = (int)fN.aWi("y", (int)30413, (long)(0x3995FFA0C21E0E6EL ^ l));
            nArray6[4] = (int)fN.aWi("y", (int)6421, (long)(0x44609F47AD55E1C7L ^ l));
            nArray6[5] = (int)fN.aWi("y", (int)14346, (long)(0x5134C8B37B3940CDL ^ l));
            this.YESwS = new cu(this.xuNWw, mr.clS(nArray6));
            int[] nArray7 = new int[fN.aWi("y", (int)15166, (long)(0x654BB0D47D4743F1L ^ l))];
            nArray7[0] = (int)fN.aWi("y", (int)16989, (long)(0x17FD27D7D340BAF7L ^ l));
            nArray7[1] = (int)fN.aWi("y", (int)20415, (long)(0x79FA30BA98393752L ^ l));
            nArray7[2] = (int)fN.aWi("y", (int)744, (long)(0x6DCA4717DBF97A23L ^ l));
            nArray7[3] = (int)fN.aWi("y", (int)29897, (long)(0x4FFFACCCAB568C29L ^ l));
            nArray7[4] = (int)fN.aWi("y", (int)26618, (long)(0xD90BD82893E9F54L ^ l));
            nArray7[5] = (int)fN.aWi("y", (int)32523, (long)(0x44B2E74373D087E4L ^ l));
            nArray7[fN.aWi("y", (int)3390, (long)(0x7035BCB8081FF5D0L ^ l))] = (int)fN.aWi("y", (int)9445, (long)(0x1786D39004655C11L ^ l));
            nArray7[fN.aWi("y", (int)10608, (long)(0x5FB3F6F0553C51AFL ^ l))] = (int)fN.aWi("y", (int)7153, (long)(0x3FAAF68582E6630AL ^ l));
            nArray7[fN.aWi("y", (int)20073, (long)(0x71132BDEDA1BB6A0L ^ l))] = (int)fN.aWi("y", (int)23584, (long)(0x69FD0EAAA1D9A4FEL ^ l));
            nArray7[fN.aWi("y", (int)10575, (long)(0x45BA5A5F6F1351BCL ^ l))] = (int)fN.aWi("y", (int)15082, (long)(0x49046913231B423DL ^ l));
            nArray7[fN.aWi("y", (int)24536, (long)(0x9978761917BA739L ^ l))] = (int)fN.aWi("y", (int)30413, (long)(0x3995FFA0C21E0E6EL ^ l));
            nArray7[fN.aWi("y", (int)25035, (long)(0x45B3BAEB2C459906L ^ l))] = (int)fN.aWi("y", (int)29897, (long)(0x4FFFACCCAB568C29L ^ l));
            nArray7[fN.aWi("y", (int)29735, (long)(0x85E767D17958C9EL ^ l))] = (int)fN.aWi("y", (int)8467, (long)(0x5C7883BB1E959CEL ^ l));
            nArray7[fN.aWi("y", (int)1244, (long)(0x389F83CF1308FC19L ^ l))] = (int)fN.aWi("y", (int)32652, (long)(0x477C62E548338767L ^ l));
            nArray7[fN.aWi("y", (int)392, (long)(0x7A90A13321ACF96EL ^ l))] = (int)fN.aWi("y", (int)17722, (long)(0x1D2C9C8603233DEBL ^ l));
            nArray7[fN.aWi("y", (int)10506, (long)(0x5DD23082942D51EFL ^ l))] = (int)fN.aWi("y", (int)744, (long)(0x6DCA4717DBF97A23L ^ l));
            this.NYWkc = new ct(this, mr.clS(nArray7));
            int[] nArray8 = new int[fN.aWi("y", (int)11489, (long)(0x7DDF9EBD549C5437L ^ l))];
            nArray8[0] = (int)fN.aWi("y", (int)16989, (long)(0x17FD27D7D340BAF7L ^ l));
            nArray8[1] = (int)fN.aWi("y", (int)30413, (long)(0x3995FFA0C21E0E6EL ^ l));
            nArray8[2] = (int)fN.aWi("y", (int)12997, (long)(0x352C76524A39CA22L ^ l));
            nArray8[3] = (int)fN.aWi("y", (int)32523, (long)(0x44B2E74373D087E4L ^ l));
            nArray8[4] = (int)fN.aWi("y", (int)4475, (long)(0x8BD5462F656E9DAL ^ l));
            nArray8[5] = (int)fN.aWi("y", (int)29897, (long)(0x4FFFACCCAB568C29L ^ l));
            nArray8[fN.aWi("y", (int)3390, (long)(0x7035BCB8081FF5D0L ^ l))] = (int)fN.aWi("y", (int)4445, (long)(0x447F7BDD0F5EE98EL ^ l));
            nArray8[fN.aWi("y", (int)10608, (long)(0x5FB3F6F0553C51AFL ^ l))] = (int)fN.aWi("y", (int)15082, (long)(0x49046913231B423DL ^ l));
            nArray8[fN.aWi("y", (int)20073, (long)(0x71132BDEDA1BB6A0L ^ l))] = (int)fN.aWi("y", (int)7153, (long)(0x3FAAF68582E6630AL ^ l));
            nArray8[fN.aWi("y", (int)10575, (long)(0x45BA5A5F6F1351BCL ^ l))] = (int)fN.aWi("y", (int)13311, (long)(0x261C285B3188CB1DL ^ l));
            nArray8[fN.aWi("y", (int)24536, (long)(0x9978761917BA739L ^ l))] = (int)fN.aWi("y", (int)32523, (long)(0x44B2E74373D087E4L ^ l));
            nArray8[fN.aWi("y", (int)25035, (long)(0x45B3BAEB2C459906L ^ l))] = (int)fN.aWi("y", (int)4475, (long)(0x8BD5462F656E9DAL ^ l));
            nArray8[fN.aWi("y", (int)29735, (long)(0x85E767D17958C9EL ^ l))] = (int)fN.aWi("y", (int)32351, (long)(0x4FE6B3F5EDF78687L ^ l));
            nArray8[fN.aWi("y", (int)1244, (long)(0x389F83CF1308FC19L ^ l))] = (int)fN.aWi("y", (int)29897, (long)(0x4FFFACCCAB568C29L ^ l));
            nArray8[fN.aWi("y", (int)392, (long)(0x7A90A13321ACF96EL ^ l))] = (int)fN.aWi("y", (int)8467, (long)(0x5C7883BB1E959CEL ^ l));
            nArray8[fN.aWi("y", (int)10506, (long)(0x5DD23082942D51EFL ^ l))] = (int)fN.aWi("y", (int)32652, (long)(0x477C62E548338767L ^ l));
            nArray8[fN.aWi("y", (int)26912, (long)(0x7EC7E66CFF281186L ^ l))] = (int)fN.aWi("y", (int)17722, (long)(0x1D2C9C8603233DEBL ^ l));
            nArray8[fN.aWi("y", (int)16799, (long)(0x2CF5056584F9B936L ^ l))] = (int)fN.aWi("y", (int)744, (long)(0x6DCA4717DBF97A23L ^ l));
            this.BMcCi = new ct(this, mr.clS(nArray8));
            int[] nArray9 = new int[fN.aWi("y", (int)4609, (long)(0x31B134974EBF6AADL ^ l))];
            nArray9[0] = (int)fN.aWi("y", (int)16989, (long)(0x17FD27D7D340BAF7L ^ l));
            nArray9[1] = (int)fN.aWi("y", (int)30413, (long)(0x3995FFA0C21E0E6EL ^ l));
            nArray9[2] = (int)fN.aWi("y", (int)12997, (long)(0x352C76524A39CA22L ^ l));
            nArray9[3] = (int)fN.aWi("y", (int)32523, (long)(0x44B2E74373D087E4L ^ l));
            nArray9[4] = (int)fN.aWi("y", (int)4475, (long)(0x8BD5462F656E9DAL ^ l));
            nArray9[5] = (int)fN.aWi("y", (int)29897, (long)(0x4FFFACCCAB568C29L ^ l));
            nArray9[fN.aWi("y", (int)3390, (long)(0x7035BCB8081FF5D0L ^ l))] = (int)fN.aWi("y", (int)8467, (long)(0x5C7883BB1E959CEL ^ l));
            nArray9[fN.aWi("y", (int)10608, (long)(0x5FB3F6F0553C51AFL ^ l))] = (int)fN.aWi("y", (int)32652, (long)(0x477C62E548338767L ^ l));
            nArray9[fN.aWi("y", (int)20073, (long)(0x71132BDEDA1BB6A0L ^ l))] = (int)fN.aWi("y", (int)17722, (long)(0x1D2C9C8603233DEBL ^ l));
            nArray9[fN.aWi("y", (int)10575, (long)(0x45BA5A5F6F1351BCL ^ l))] = (int)fN.aWi("y", (int)744, (long)(0x6DCA4717DBF97A23L ^ l));
            nArray9[fN.aWi("y", (int)24536, (long)(0x9978761917BA739L ^ l))] = (int)fN.aWi("y", (int)29897, (long)(0x4FFFACCCAB568C29L ^ l));
            nArray9[fN.aWi("y", (int)25035, (long)(0x45B3BAEB2C459906L ^ l))] = (int)fN.aWi("y", (int)8467, (long)(0x5C7883BB1E959CEL ^ l));
            nArray9[fN.aWi("y", (int)29735, (long)(0x85E767D17958C9EL ^ l))] = (int)fN.aWi("y", (int)6421, (long)(0x44609F47AD55E1C7L ^ l));
            nArray9[fN.aWi("y", (int)1244, (long)(0x389F83CF1308FC19L ^ l))] = (int)fN.aWi("y", (int)23584, (long)(0x69FD0EAAA1D9A4FEL ^ l));
            nArray9[fN.aWi("y", (int)392, (long)(0x7A90A13321ACF96EL ^ l))] = (int)fN.aWi("y", (int)4475, (long)(0x8BD5462F656E9DAL ^ l));
            nArray9[fN.aWi("y", (int)10506, (long)(0x5DD23082942D51EFL ^ l))] = (int)fN.aWi("y", (int)10136, (long)(0x4C94615734D05F43L ^ l));
            nArray9[fN.aWi("y", (int)26912, (long)(0x7EC7E66CFF281186L ^ l))] = (int)fN.aWi("y", (int)32523, (long)(0x44B2E74373D087E4L ^ l));
            this.iWgvu = new ct(this, mr.clS(nArray9));
            int[] nArray10 = new int[fN.aWi("y", (int)20073, (long)(0x71132BDEDA1BB6A0L ^ l))];
            nArray10[0] = (int)fN.aWi("y", (int)26618, (long)(0xD90BD82893E9F54L ^ l));
            nArray10[1] = (int)fN.aWi("y", (int)32523, (long)(0x44B2E74373D087E4L ^ l));
            nArray10[2] = (int)fN.aWi("y", (int)9445, (long)(0x1786D39004655C11L ^ l));
            nArray10[3] = (int)fN.aWi("y", (int)7153, (long)(0x3FAAF68582E6630AL ^ l));
            nArray10[4] = (int)fN.aWi("y", (int)23584, (long)(0x69FD0EAAA1D9A4FEL ^ l));
            nArray10[5] = (int)fN.aWi("y", (int)15082, (long)(0x49046913231B423DL ^ l));
            nArray10[fN.aWi("y", (int)3390, (long)(0x7035BCB8081FF5D0L ^ l))] = (int)fN.aWi("y", (int)30413, (long)(0x3995FFA0C21E0E6EL ^ l));
            nArray10[fN.aWi("y", (int)10608, (long)(0x5FB3F6F0553C51AFL ^ l))] = (int)fN.aWi("y", (int)32351, (long)(0x4FE6B3F5EDF78687L ^ l));
            this.lprwR = new cu(this.iWgvu, mr.clS(nArray10)).SY();
            int[] nArray11 = new int[fN.aWi("y", (int)3390, (long)(0x7035BCB8081FF5D0L ^ l))];
            nArray11[0] = (int)fN.aWi("y", (int)23522, (long)(0x22E0CD599E89230AL ^ l));
            nArray11[1] = (int)fN.aWi("y", (int)23584, (long)(0x69FD0EAAA1D9A4FEL ^ l));
            nArray11[2] = (int)fN.aWi("y", (int)32351, (long)(0x4FE6B3F5EDF78687L ^ l));
            nArray11[3] = (int)fN.aWi("y", (int)30413, (long)(0x3995FFA0C21E0E6EL ^ l));
            nArray11[4] = (int)fN.aWi("y", (int)6421, (long)(0x44609F47AD55E1C7L ^ l));
            nArray11[5] = (int)fN.aWi("y", (int)16019, (long)(0x34772D4332FFC637L ^ l));
            this.smvRE = new cu(this.iWgvu, mr.clS(nArray11));
            int[] nArray12 = new int[fN.aWi("y", (int)25035, (long)(0x45B3BAEB2C459906L ^ l))];
            nArray12[0] = (int)fN.aWi("y", (int)28150, (long)(0x74BF612C18BE9515L ^ l));
            nArray12[1] = (int)fN.aWi("y", (int)32523, (long)(0x44B2E74373D087E4L ^ l));
            nArray12[2] = (int)fN.aWi("y", (int)24157, (long)(0x5B76DE500850A6A3L ^ l));
            nArray12[3] = (int)fN.aWi("y", (int)30413, (long)(0x3995FFA0C21E0E6EL ^ l));
            nArray12[4] = (int)fN.aWi("y", (int)23584, (long)(0x69FD0EAAA1D9A4FEL ^ l));
            nArray12[5] = (int)fN.aWi("y", (int)4475, (long)(0x8BD5462F656E9DAL ^ l));
            nArray12[fN.aWi("y", (int)3390, (long)(0x7035BCB8081FF5D0L ^ l))] = (int)fN.aWi("y", (int)32523, (long)(0x44B2E74373D087E4L ^ l));
            nArray12[fN.aWi("y", (int)10608, (long)(0x5FB3F6F0553C51AFL ^ l))] = (int)fN.aWi("y", (int)29897, (long)(0x4FFFACCCAB568C29L ^ l));
            nArray12[fN.aWi("y", (int)20073, (long)(0x71132BDEDA1BB6A0L ^ l))] = (int)fN.aWi("y", (int)28566, (long)(0x3F4CD1618472973BL ^ l));
            nArray12[fN.aWi("y", (int)10575, (long)(0x45BA5A5F6F1351BCL ^ l))] = (int)fN.aWi("y", (int)30942, (long)(0x67590080DB57802BL ^ l));
            nArray12[fN.aWi("y", (int)24536, (long)(0x9978761917BA739L ^ l))] = (int)fN.aWi("y", (int)29420, (long)(0x24E8EDDF27BB8A24L ^ l));
            this.TCPvX = new cy(this, mr.clS(nArray12)).Un((int)fN.aWi("y", (int)32606, (long)(0x73A2EA27916607A2L ^ l))).Up("");
            int[] nArray13 = new int[fN.aWi("y", (int)4609, (long)(0x31B134974EBF6AADL ^ l))];
            nArray13[0] = (int)fN.aWi("y", (int)16989, (long)(0x17FD27D7D340BAF7L ^ l));
            nArray13[1] = (int)fN.aWi("y", (int)30413, (long)(0x3995FFA0C21E0E6EL ^ l));
            nArray13[2] = (int)fN.aWi("y", (int)12997, (long)(0x352C76524A39CA22L ^ l));
            nArray13[3] = (int)fN.aWi("y", (int)32523, (long)(0x44B2E74373D087E4L ^ l));
            nArray13[4] = (int)fN.aWi("y", (int)4475, (long)(0x8BD5462F656E9DAL ^ l));
            nArray13[5] = (int)fN.aWi("y", (int)29897, (long)(0x4FFFACCCAB568C29L ^ l));
            nArray13[fN.aWi("y", (int)3390, (long)(0x7035BCB8081FF5D0L ^ l))] = (int)fN.aWi("y", (int)6649, (long)(0x66269A765041613DL ^ l));
            nArray13[fN.aWi("y", (int)10608, (long)(0x5FB3F6F0553C51AFL ^ l))] = (int)fN.aWi("y", (int)32523, (long)(0x44B2E74373D087E4L ^ l));
            nArray13[fN.aWi("y", (int)20073, (long)(0x71132BDEDA1BB6A0L ^ l))] = (int)fN.aWi("y", (int)24157, (long)(0x5B76DE500850A6A3L ^ l));
            nArray13[fN.aWi("y", (int)10575, (long)(0x45BA5A5F6F1351BCL ^ l))] = (int)fN.aWi("y", (int)30413, (long)(0x3995FFA0C21E0E6EL ^ l));
            nArray13[fN.aWi("y", (int)24536, (long)(0x9978761917BA739L ^ l))] = (int)fN.aWi("y", (int)23584, (long)(0x69FD0EAAA1D9A4FEL ^ l));
            nArray13[fN.aWi("y", (int)25035, (long)(0x45B3BAEB2C459906L ^ l))] = (int)fN.aWi("y", (int)4475, (long)(0x8BD5462F656E9DAL ^ l));
            nArray13[fN.aWi("y", (int)29735, (long)(0x85E767D17958C9EL ^ l))] = (int)fN.aWi("y", (int)32523, (long)(0x44B2E74373D087E4L ^ l));
            nArray13[fN.aWi("y", (int)1244, (long)(0x389F83CF1308FC19L ^ l))] = (int)fN.aWi("y", (int)29897, (long)(0x4FFFACCCAB568C29L ^ l));
            nArray13[fN.aWi("y", (int)392, (long)(0x7A90A13321ACF96EL ^ l))] = (int)fN.aWi("y", (int)10157, (long)(0x65825964FE85F50L ^ l));
            nArray13[fN.aWi("y", (int)10506, (long)(0x5DD23082942D51EFL ^ l))] = (int)fN.aWi("y", (int)28007, (long)(0x3F1C4E6750BD1583L ^ l));
            nArray13[fN.aWi("y", (int)26912, (long)(0x7EC7E66CFF281186L ^ l))] = (int)fN.aWi("y", (int)1871, (long)(0x72D8E243F0727FF1L ^ l));
            this.mzdNu = new cy(this, mr.clS(nArray13)).Un((int)fN.aWi("y", (int)22333, (long)(0x37F80858164E2FD7L ^ l))).Up("");
            this.WHhIl = "";
            this.jUZJy = "";
            this.mRecC = "";
            this.HNAeJ = "";
            int[] nArray14 = fX.aYu();
            for (fN$sU fN$sU : VJZzZ) {
                try {
                    new cu(this.NYWkc, mr.clS(fN$sU.name()));
                    new cu(this.BMcCi, mr.clS(fN$sU.name()));
                    if (nArray14 == null) break block3;
                    if (nArray14 != null) continue;
                }
                catch (MatchException matchException) {
                    throw fN.aWb(matchException);
                }
                iS.bwK("cuBkD");
                break;
            }
            this.xuNWw.Vf(this.bHviN::TC);
            this.NYWkc.Vf(this::aWa);
            this.iWgvu.Vf(this.pWupw::TC);
            this.BMcCi.Vf(this::aVZ);
            this.TCPvX.Vf(this::aVY);
            this.mzdNu.Vf(this::aVX);
        }
    }

    static {
        Loader.doInit(fN.class);
        fN._3ed70766cc926e506f6b5ec3780a9f8d();
    }

    private native /* synthetic */ Boolean aVY();

    private native /* synthetic */ Boolean aVX();

    private native fN$sU aVy(ct var1);

    private native class_12079.class_12081 aVz();

    private native class_12079.class_12081 aVA();

    private native class_8685 aVx(class_8685 var1, class_742 var2);

    private static native CallSite aWi(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native MatchException aWb(MatchException var0);

    private native /* synthetic */ Boolean aWa();

    private native /* synthetic */ Boolean aVZ();

    public native cu aVM();

    public native cv aVC();

    private static native Object aWe(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native class_12079.class_12081 aVS();

    private static native String aWc(byte[] var0);

    public native cy aVN();

    public native cu aVG();

    public native cu aVH();

    public native ct aVI();

    public native cw aVD();

    public native String aVR();

    public native cy aVO();

    private native String aVB(String var1);

    private native /* synthetic */ void aVV(String var1, class_2960 var2);

    public native ct aVF();

    public native String aVT();

    public native class_12079.class_12081 aVP();

    private static native CallSite aWf(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native String aVQ();

    private static native int aWh(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native cu aVL();

    private static native String aWd(int var0, long var1);

    private native /* synthetic */ void aVW(String var1, class_2960 var2);

    public native String aVU();

    public native ct aVK();

    public native cw aVE();

    private static native int aWg(int var0, long var1);

    public native ct aVJ();

    public native class_8685 aVw(class_742 var1, class_8685 var2);

    private static native void _3ed70766cc926e506f6b5ec3780a9f8d();
}
