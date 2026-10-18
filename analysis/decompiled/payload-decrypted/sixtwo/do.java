/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.gui.screen.Screen
 *  net.minecraft.client.gui.screen.ingame.HandledScreen
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.util.math.Vec2f
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
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.function.Predicate;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.gui.screen.Screen;
import net.minecraft.client.gui.screen.ingame.HandledScreen;
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.util.math.Vec2f;
import net.minecraft.util.math.Vec3d;
import sixtwo.cC;
import sixtwo.cF;
import sixtwo.cG;
import sixtwo.dh;
import sixtwo.do$sG;
import sixtwo.gH;
import sixtwo.gJ;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gk;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jg$tJ;
import sixtwo.jk;
import sixtwo.lC;
import sixtwo.lG;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.ob;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;
import sixtwo.rm;

public class do
extends gg
implements lG {
    private final cF LHfSj;
    private final cC ylItw;
    private final cC UCwZL;
    private final cG HnmDa;
    private final cG OTssl;
    private final List<do$sG> Gfvqi;
    private float YXgYB;
    private final rk lgSYH;
    private static final long LNOpt;
    private static final String eLTLf;
    private static final long[] kSkhp;
    private static final Integer[] YQLde;
    private static final Map GjXic;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public do() {
        long l2 = LNOpt ^ 0x2D57D4D21ECAL;
        super(gf.aZL((int)88, false, gh.nOCvV));
        int[] nArray = new int[8];
        nArray[0] = (int)69;
        nArray[1] = (int)110;
        nArray[2] = (int)116;
        nArray[3] = (int)105;
        nArray[4] = (int)116;
        nArray[5] = (int)105;
        nArray[6] = (int)101;
        nArray[7] = (int)115;
        this.LHfSj = new cF(this, mr.clS(nArray)).VS(jg$tJ.OCdZM);
        this.ylItw = new cC(this, mr.clS(new int[]{(int)83, (int)105, (int)122, (int)101})).Vy(0.1).Vw(1.0).Vx(10.0).VA(3.0);
        int[] nArray2 = new int[6];
        nArray2[0] = (int)82;
        nArray2[1] = (int)97;
        nArray2[2] = (int)100;
        nArray2[3] = (int)105;
        nArray2[4] = (int)117;
        nArray2[5] = (int)115;
        this.UCwZL = new cC(this, mr.clS(nArray2)).Vy(0.5).Vw(20.0).Vx(100.0).VA(50.0);
        this.HnmDa = new cG(this, mr.clS(new int[]{(int)67, (int)111, (int)108, (int)111, (int)114})).Uf(rD.dlM().bjG().bis());
        int[] nArray3 = new int[12];
        nArray3[0] = (int)70;
        nArray3[1] = (int)114;
        nArray3[2] = (int)105;
        nArray3[3] = (int)101;
        nArray3[4] = (int)110;
        nArray3[5] = (int)100;
        nArray3[6] = (int)32;
        nArray3[7] = (int)67;
        nArray3[8] = (int)111;
        nArray3[9] = (int)108;
        nArray3[10] = (int)111;
        nArray3[11] = (int)114;
        this.OTssl = new cG(this, mr.clS(nArray3)).Uf(jk.jEkxo);
        this.Gfvqi = new ArrayList<do$sG>();
        this.lgSYH = new rk((int)400).dhs(rj.XzDkv);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                block12: {
                    do.LNOpt = gb.aYR(-6227257557269339647L, 3723473440923874246L, MethodHandles.lookup().lookupClass()).a(268850252280759L);
                    var11 = do.LNOpt ^ 98232728530769L;
                    var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var11 >>> 56);
                    for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                        v2 = v2;
                        v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                    }
                    break block12;
lbl13:
                    // 1 sources

                    while (true) {
                        continue;
                        break;
                    }
                }
                var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var15_3 = var13_1.doFinal("V.\u008a\u00f2D&X\u00c0".getBytes("ISO-8859-1"));
                ** while (true)
                do.eLTLf = do.ahn(var15_3).intern();
                do.GjXic = new HashMap<K, V>(13);
                var0_4 = Cipher.getInstance("DES/CBC/NoPadding");
                v3 = SecretKeyFactory.getInstance("DES");
                v4 = new byte[8];
                v5 = v4;
                v4[0] = (byte)(var11 >>> 56);
                for (var1_5 = 1; var1_5 < 8; ++var1_5) {
                    v5 = v5;
                    v5[var1_5] = (byte)(var11 << var1_5 * 8 >>> 56);
                }
                var0_4.init(2, (Key)v3.generateSecret(new DESKeySpec(v5)), new IvParameterSpec(new byte[8]));
                var6_6 = new long[42];
                var3_7 = 0;
                var4_8 = "]\fsl\u0092g\u0084\u00cc\u009b\u009f\u0082O\u00f8+t\u00d3\u00a0B\u0095\u00de\u0004j\u00ec\u00a3E\u00fe<lG'\u00b1l\u00ec\u0092^c\u00a5\u00f5\u00f2\u0084U*[\f\u00ea\u00d1m\u00e0\u0098\u00eb\u00a7\u00f0\u0088\u0084\u00a2M\u00a0`\u009e[+b\u0019\u00e9\u00ec\u00ef\u00bc_\u00e2\u00d7\u00b5\u00e9k\fj\u00e3ki?:\u000b\u00a8\u0089\u0099_\u00b5\u0098\u00ba%\u00abD\u0090\u00df\u00b0M$\u00baY\u0082\u0006\u00a8>\u0015x\u00fcoE1\u0087\u00a2\u00fe*\u00ee\u00ea\u00a9\u00ed\u00dap\u00ad\u00d1Z9[\u00e4EC\u00c4\u0084L5\u00b5\u0005\u00da\u00d4!\u00fe.Qkr#\u008f\u008a/\u00c4\u00a8$a\u0002\u008a\u00b4\u00c3\u00b0\u00c3\u0089\u008c\u00f4l7\u00f8p\u00e3\u001d\u0005\u008c\u001f\u00b0\u00e3V\u00a2\u00ee\u009b\u00cap\u00e8B\u00bf\u0084\t\u00cc\u00f2\u00e7?\u009a*y\u00cc\u0097\u0080J\u0001\u00fd\u00daw\u00c0\u0011\u00efP$o\u00eck\u00ee\u0095mQ\u0019\u0095b\u00a9~\u00ef\u00d2\u00c3\u00ce1\u00bcF-B\b\u00cf\u00f7\u0015\u00b4\u00fd\b\u0015\u00ec\u00d16\u0014\u00bd\u009f1e\u00fe\u00b0\u0080s\u00b2\u00fd$\u0083\r\u00e9AH\u00eb\u00fc\u0015\u00b8xGv\u00e0\"V\temY\u00fc\u00ec\r/\u00a2P%.\u00f4\u00a7S\u0090\u00a30\u00ad\u00e6\u00a8mW\u00cdv>Bt^\u0010V\u00c1\u00a4\u00a8\\\u00a4W\u00db\u0099e\u00bc\u008a5\u00da\u0084\u008bi9\u0004\u00dc?O\u00d7;\u00bev\u00c9\u00a7\u00a1\u00fc01";
                var5_9 = "]\fsl\u0092g\u0084\u00cc\u009b\u009f\u0082O\u00f8+t\u00d3\u00a0B\u0095\u00de\u0004j\u00ec\u00a3E\u00fe<lG'\u00b1l\u00ec\u0092^c\u00a5\u00f5\u00f2\u0084U*[\f\u00ea\u00d1m\u00e0\u0098\u00eb\u00a7\u00f0\u0088\u0084\u00a2M\u00a0`\u009e[+b\u0019\u00e9\u00ec\u00ef\u00bc_\u00e2\u00d7\u00b5\u00e9k\fj\u00e3ki?:\u000b\u00a8\u0089\u0099_\u00b5\u0098\u00ba%\u00abD\u0090\u00df\u00b0M$\u00baY\u0082\u0006\u00a8>\u0015x\u00fcoE1\u0087\u00a2\u00fe*\u00ee\u00ea\u00a9\u00ed\u00dap\u00ad\u00d1Z9[\u00e4EC\u00c4\u0084L5\u00b5\u0005\u00da\u00d4!\u00fe.Qkr#\u008f\u008a/\u00c4\u00a8$a\u0002\u008a\u00b4\u00c3\u00b0\u00c3\u0089\u008c\u00f4l7\u00f8p\u00e3\u001d\u0005\u008c\u001f\u00b0\u00e3V\u00a2\u00ee\u009b\u00cap\u00e8B\u00bf\u0084\t\u00cc\u00f2\u00e7?\u009a*y\u00cc\u0097\u0080J\u0001\u00fd\u00daw\u00c0\u0011\u00efP$o\u00eck\u00ee\u0095mQ\u0019\u0095b\u00a9~\u00ef\u00d2\u00c3\u00ce1\u00bcF-B\b\u00cf\u00f7\u0015\u00b4\u00fd\b\u0015\u00ec\u00d16\u0014\u00bd\u009f1e\u00fe\u00b0\u0080s\u00b2\u00fd$\u0083\r\u00e9AH\u00eb\u00fc\u0015\u00b8xGv\u00e0\"V\temY\u00fc\u00ec\r/\u00a2P%.\u00f4\u00a7S\u0090\u00a30\u00ad\u00e6\u00a8mW\u00cdv>Bt^\u0010V\u00c1\u00a4\u00a8\\\u00a4W\u00db\u0099e\u00bc\u008a5\u00da\u0084\u008bi9\u0004\u00dc?O\u00d7;\u00bev\u00c9\u00a7\u00a1\u00fc01".length();
                var2_10 = 0;
                while (true) {
                    var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                    v6 = var6_6;
                    v7 = var3_7++;
                    v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                    v9 = -1;
                    break block10;
                    break;
                }
lbl44:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    var4_8 = "\u0014\u00fa\u00b2f\u00d9\u00eb\u0084\u00da:\u0097\u001bS*\u00e5\u00e1P";
                    var5_9 = "\u0014\u00fa\u00b2f\u00d9\u00eb\u0084\u00da:\u0097\u001bS*\u00e5\u00e1P".length();
                    var2_10 = 0;
                    while (true) {
                        var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                        v6 = var6_6;
                        v7 = var3_7++;
                        v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                        v9 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl57:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    break block11;
                    break;
                }
            }
            var8_12 = v8;
            var10_13 = var0_4.doFinal(new byte[]{(byte)(var8_12 >>> 56), (byte)(var8_12 >>> 48), (byte)(var8_12 >>> 40), (byte)(var8_12 >>> 32), (byte)(var8_12 >>> 24), (byte)(var8_12 >>> 16), (byte)(var8_12 >>> 8), (byte)var8_12});
            v10 = ((long)var10_13[0] & 255L) << 56 | ((long)var10_13[1] & 255L) << 48 | ((long)var10_13[2] & 255L) << 40 | ((long)var10_13[3] & 255L) << 32 | ((long)var10_13[4] & 255L) << 24 | ((long)var10_13[5] & 255L) << 16 | ((long)var10_13[6] & 255L) << 8 | (long)var10_13[7] & 255L;
            switch (v9) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl70:
                // 1 sources

                ** continue;
            }
        }
        do.kSkhp = var6_6;
        do.YQLde = new Integer[42];
    }

    private static /* synthetic */ boolean ahl(Entity entity, do$sG do$sG) {
        boolean bl2;
        long l2 = LNOpt ^ 0x688FAA09E1CFL;
        try {
            bl2 = do$sG.ZaYMC == entity;
        }
        catch (MatchException matchException) {
            throw do.ahm(matchException);
        }
        return bl2;
    }

    private static CallSite ahq(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/do" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String ahn(byte[] byArray) {
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

    private static MatchException ahm(MatchException matchException) {
        return matchException;
    }

    private static int ahp(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = do.aho(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    @hG
    public void ahj(gk gk2) {
        block16: {
            long l2 = LNOpt ^ 0x232EC8DF6A7EL;
            iS[] iSArray = dh.afl();
            try {
                if (!this.bab()) {
                    return;
                }
            }
            catch (MatchException matchException) {
                throw do.ahm(matchException);
            }
            lC lC2 = gk2.baT();
            Vec2f vec2f = rm.diq();
            float f2 = vec2f.x / 2.0f;
            float f3 = vec2f.y / 2.0f;
            float f4 = lC2.cfh();
            float f5 = this.ylItw.VB();
            float f6 = this.UCwZL.VB();
            float f7 = this.lgSYH.dhd(this.YXgYB);
            Iterator<do$sG> iterator = this.Gfvqi.iterator();
            XSRvt.startBatch(ob.cBv(eLTLf));
            while (iterator.hasNext()) {
                mG mG2;
                do$sG do$sG;
                block17: {
                    block18: {
                        boolean bl2;
                        block19: {
                            PlayerEntity playerEntity;
                            block20: {
                                do$sG = iterator.next();
                                mG2 = this.HnmDa.Wf();
                                Entity entity = do$sG.ZaYMC;
                                try {
                                    try {
                                        if (iSArray != null) break block16;
                                        if (iSArray != null) break block17;
                                    }
                                    catch (MatchException matchException) {
                                        throw do.ahm(matchException);
                                    }
                                    if (!(entity instanceof PlayerEntity)) break block18;
                                }
                                catch (MatchException matchException) {
                                    throw do.ahm(matchException);
                                }
                                playerEntity = (PlayerEntity)entity;
                                try {
                                    try {
                                        bl2 = rD.dml().aLp(playerEntity);
                                        if (iSArray != null) break block19;
                                        if (!bl2) break block20;
                                    }
                                    catch (MatchException matchException) {
                                        throw do.ahm(matchException);
                                    }
                                    if (iSArray == null) continue;
                                }
                                catch (MatchException matchException) {
                                    throw do.ahm(matchException);
                                }
                            }
                            bl2 = rD.dmc().ddy(playerEntity);
                        }
                        if (bl2) {
                            mG2 = this.OTssl.Wf();
                        }
                    }
                    lC2.ceV();
                }
                float f8 = this.ahk(do$sG.ZaYMC, f4) - rD.dlmvG.player.getYaw();
                lC2.cfb(f2, f3, f8);
                float f9 = f5 * 5.0f;
                float f10 = f3 - f6 - f7;
                try {
                    do$sG.doM(lC2, f2, f10, f9, mG2);
                    lC2.ceW();
                    if (do$sG.doN()) {
                        iterator.remove();
                    }
                }
                catch (MatchException matchException) {
                    throw do.ahm(matchException);
                }
                if (iSArray == null) continue;
            }
            XSRvt.endBatch();
        }
    }

    @hG
    public void ahi(gJ gJ2) {
        block8: {
            block6: {
                long l2 = LNOpt ^ 0x682FF6E46D15L;
                Screen screen = gJ2.bcd();
                iS[] iSArray = dh.afl();
                boolean bl2 = screen instanceof HandledScreen;
                try {
                    block7: {
                        try {
                            try {
                                if (iSArray != null) break block6;
                                if (!bl2) break block7;
                            }
                            catch (MatchException matchException) {
                                throw do.ahm(matchException);
                            }
                            this.YXgYB = (float)(do.ahq("c", (int)15311, (long)(0x606CB860DF2EE1E4L ^ l2)) + (Integer)rD.dlmvG.options.getGuiScale().getValue() * do.ahq("c", (int)3999, (long)(0x581E85607D12D5B6L ^ l2)));
                            this.lgSYH.dhs(rj.XzDkv);
                            if (iSArray == null) break block8;
                        }
                        catch (MatchException matchException) {
                            throw do.ahm(matchException);
                        }
                    }
                    this.YXgYB = 0.0f;
                }
                catch (MatchException matchException) {
                    throw do.ahm(matchException);
                }
            }
            this.lgSYH.dhs(rj.AYqck);
        }
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    @hG
    public void ahh(gH.th var1_1) {
        var2_2 = do.LNOpt ^ 66215545365277L;
        var4_3 = dh.afl();
        try {
            if (!this.bab()) {
                return;
            }
        }
        catch (MatchException v0) {
            throw do.ahm(v0);
        }
        var5_4 = new HashSet<Entity>();
        var6_5 = rD.dlmvG.world.getEntities().iterator();
        while (var6_5.hasNext()) {
            block37: {
                block38: {
                    block35: {
                        block36: {
                            block34: {
                                var7_6 /* !! */  = (Entity)var6_5.next();
                                try {
                                    try {
                                        v1 /* !! */  = var7_6 /* !! */ ;
                                        if (var4_3 == null) {
                                            if (v1 /* !! */  != rD.dlmvG.player) break block34;
                                        }
                                        ** GOTO lbl97
                                    }
                                    catch (MatchException v2) {
                                        throw do.ahm(v2);
                                    }
                                    if (var4_3 == null) continue;
                                }
                                catch (MatchException v3) {
                                    throw do.ahm(v3);
                                }
                            }
                            try {
                                try {
                                    v4 = this.LHfSj.VX(var7_6 /* !! */ );
                                    if (var4_3 != null) break block35;
                                    if (v4) break block36;
                                }
                                catch (MatchException v5) {
                                    throw do.ahm(v5);
                                }
                                if (var4_3 == null) continue;
                            }
                            catch (MatchException v6) {
                                throw do.ahm(v6);
                            }
                        }
                        v4 = var7_6 /* !! */  instanceof PlayerEntity;
                    }
                    try {
                        if (var4_3 != null) break block37;
                        if (!v4) break block38;
                    }
                    catch (MatchException v7) {
                        throw do.ahm(v7);
                    }
                    var8_7 = (PlayerEntity)var7_6 /* !! */ ;
                    try {
                        try {
                            v4 = rD.dml().aLp(var8_7);
                            if (var4_3 != null) break block37;
                            if (!v4) break block38;
                        }
                        catch (MatchException v8) {
                            throw do.ahm(v8);
                        }
                        if (var4_3 == null) continue;
                    }
                    catch (MatchException v9) {
                        throw do.ahm(v9);
                    }
                }
                v4 = var5_4.add(var7_6 /* !! */ );
            }
            if (var4_3 == null) continue;
        }
        var6_5 = var5_4.iterator();
        while (var6_5.hasNext()) {
            block39: {
                var7_6 /* !! */  = (Entity)var6_5.next();
                try {
                    try {
                        try {
                            v10 = this.Gfvqi.stream().noneMatch((Predicate<do$sG>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)Z, ahl(net.minecraft.entity.Entity sixtwo.do$sG ), (Lsixtwo/do$sG;)Z)((Entity)var7_6 /* !! */ ));
                            if (var4_3 == null) {
                                if (var4_3 != null) break block39;
                            }
                            ** GOTO lbl91
                        }
                        catch (MatchException v11) {
                            throw do.ahm(v11);
                        }
                        if (!v10) break block39;
                    }
                    catch (MatchException v12) {
                        throw do.ahm(v12);
                    }
                    this.Gfvqi.add(new do$sG(var7_6 /* !! */ ));
                }
                catch (MatchException v13) {
                    throw do.ahm(v13);
                }
            }
            if (var4_3 == null) continue;
        }
        var6_5 = this.Gfvqi.iterator();
        do {
            block40: {
                v10 = var6_5.hasNext();
lbl91:
                // 2 sources

                try {
                    if (!v10) break;
                    v1 /* !! */  = var6_5.next();
                }
                catch (MatchException v14) {
                    throw do.ahm(v14);
                }
lbl97:
                // 2 sources

                var7_6 /* !! */  = (do$sG)v1 /* !! */ ;
                try {
                    try {
                        if (var4_3 != null) break block40;
                        if (var5_4.contains(var7_6 /* !! */ .ZaYMC)) continue;
                    }
                    catch (MatchException v15) {
                        throw do.ahm(v15);
                    }
                    var7_6 /* !! */ .hkzUL = true;
                }
                catch (MatchException v16) {
                    throw do.ahm(v16);
                }
            }
            var7_6 /* !! */ .zzzOY.dhs(rj.AYqck);
        } while (var4_3 == null);
    }

    private static int aho(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x13E1;
        if (YQLde[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = kSkhp[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])GjXic.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    GjXic.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/do", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            do.YQLde[n3] = n4;
        }
        return YQLde[n3];
    }

    private float ahk(Entity entity, float f2) {
        Vec3d vec3d = rD.dlmvG.player.getLerpedPos(f2);
        Vec3d vec3d2 = entity.getLerpedPos(f2);
        double d2 = vec3d2.x - vec3d.x;
        double d3 = vec3d2.z - vec3d.z;
        return (float)(-(Math.atan2(d2, d3) * 57.29577951308232));
    }

    @Override
    public void YO() {
        super.YO();
        this.Gfvqi.clear();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(do.class, "ahp", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

