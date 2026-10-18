/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.Box
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;
import sixtwo.cC;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.cK;
import sixtwo.dh;
import sixtwo.gH;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jJ;
import sixtwo.jc;
import sixtwo.kF;
import sixtwo.kH;
import sixtwo.lG;
import sixtwo.mr;
import sixtwo.rD;
import sixtwo.rl;

public class dd
extends gg
implements lG {
    private final cK MKdlw;
    private final cC pYKFd;
    private final cG KhQrs;
    private final cG zdHIt;
    private final cJ jUhNc;
    private final cJ IfTUx;
    private final cC JkVNw;
    private final rl rNrBp;
    private static final long OBqTT;
    private static final String vRYIv;
    private static final long[] XpzLl;
    private static final Integer[] OykDi;
    private static final Map bJBvO;
    private static final long SSCLk;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dd() {
        long l2 = OBqTT ^ 0x36135807A3C3L;
        super(gf.aZL((int)dd.acp("s", (int)21616, (long)(0x68023AC865179F9AL ^ l2)), false, gh.nOCvV));
        int[] nArray = new int[dd.acp("s", (int)11800, (long)(0x4797E548BC2EE5F7L ^ l2))];
        nArray[0] = (int)dd.acp("s", (int)31387, (long)(0x3479219257D9B15AL ^ l2));
        nArray[1] = (int)dd.acp("s", (int)6365, (long)(0xCAB802CB9795336L ^ l2));
        nArray[2] = (int)dd.acp("s", (int)31080, (long)(0x60E1BA54BBCD328EL ^ l2));
        nArray[3] = (int)dd.acp("s", (int)24247, (long)(0x4EF901C262171560L ^ l2));
        nArray[4] = (int)dd.acp("s", (int)12672, (long)(0x42935F2D17377A75L ^ l2));
        nArray[5] = (int)dd.acp("s", (int)13862, (long)(0x42D8BFE95DA97DD9L ^ l2));
        nArray[dd.acp("s", (int)23624, (long)(0x3A134F391EDF17A5L ^ l2))] = (int)dd.acp("s", (int)6235, (long)(0x35D537C10DDA5384L ^ l2));
        nArray[dd.acp("s", (int)23676, (long)(0x6D33DCBDA3B0978BL ^ l2))] = (int)dd.acp("s", (int)22972, (long)(0x6D3CE7AF6CAC9274L ^ l2));
        nArray[dd.acp("s", (int)12562, (long)(0x13C8772C71DC7AEEL ^ l2))] = (int)dd.acp("s", (int)26358, (long)(0x203748D0DDE62D14L ^ l2));
        nArray[dd.acp("s", (int)40, (long)(0x419289C0DDD54BD0L ^ l2))] = (int)dd.acp("s", (int)25475, (long)(0x21D95EA3DB852871L ^ l2));
        nArray[dd.acp("s", (int)8568, (long)(0x58718BA6B06EEA9CL ^ l2))] = (int)dd.acp("s", (int)25687, (long)(0xDEF9C7F99502F9AL ^ l2));
        nArray[dd.acp("s", (int)12198, (long)(0x384FAE38FF00E475L ^ l2))] = (int)dd.acp("s", (int)23615, (long)(0x292BD3288AEE17CCL ^ l2));
        nArray[dd.acp("s", (int)6001, (long)(0x24320FAF323EDCB5L ^ l2))] = (int)dd.acp("s", (int)29516, (long)(0x6671FFE523B3B8A4L ^ l2));
        nArray[dd.acp("s", (int)14632, (long)(0x42631C3F5A7972F2L ^ l2))] = (int)dd.acp("s", (int)8527, (long)(0x1A5A3DB1A3C7EA94L ^ l2));
        nArray[dd.acp("s", (int)29902, (long)(0x1D9612629452BF13L ^ l2))] = (int)dd.acp("s", (int)29439, (long)(0x30D6E2862C49393FL ^ l2));
        nArray[dd.acp("s", (int)19114, (long)(0x46C242FC800F0143L ^ l2))] = (int)dd.acp("s", (int)2361, (long)(0x707F98E00847C2C2L ^ l2));
        nArray[dd.acp("s", (int)19214, (long)(0x4AD73590B26B00C9L ^ l2))] = (int)dd.acp("s", (int)17244, (long)(0x4E58AD4E55DD08BDL ^ l2));
        nArray[dd.acp("s", (int)24387, (long)(0x3A016A911EF2949DL ^ l2))] = (int)dd.acp("s", (int)11909, (long)(0x14FAD00C7D16E554L ^ l2));
        nArray[dd.acp("s", (int)14422, (long)(0x5FFD82EC6C2EF3B1L ^ l2))] = (int)dd.acp("s", (int)458, (long)(0x28C3762697F84A3AL ^ l2));
        this.MKdlw = new cK(this, mr.clS(nArray)).WM(jc.GjreY);
        this.pYKFd = new cC(this, mr.clS(new int[]{(int)dd.acp("s", (int)14027, (long)(0x5052C8AA82767D04L ^ l2)), (int)dd.acp("s", (int)15107, (long)(0x57E82BCEAE1DF0CAL ^ l2)), (int)dd.acp("s", (int)21058, (long)(0x70E21AD629BB9988L ^ l2)), (int)dd.acp("s", (int)17244, (long)(0x4E58AD4E55DD08BDL ^ l2)), (int)dd.acp("s", (int)25047, (long)(0x6E698D2CE532A34L ^ l2))})).Vy(1.0).Vw(1.0).Vx(128.0).VA(100.0).Vz(vRYIv);
        int[] nArray2 = new int[dd.acp("s", (int)3250, (long)(0x3254A9A237E0475CL ^ l2))];
        nArray2[0] = (int)dd.acp("s", (int)5017, (long)(0x56C6134501355879L ^ l2));
        nArray2[1] = (int)dd.acp("s", (int)31500, (long)(0x6A5F7A14D02330D5L ^ l2));
        nArray2[2] = (int)dd.acp("s", (int)6253, (long)(0x258745A1FF3FD3B1L ^ l2));
        nArray2[3] = (int)dd.acp("s", (int)29439, (long)(0x30D6E2862C49393FL ^ l2));
        nArray2[4] = (int)dd.acp("s", (int)2361, (long)(0x707F98E00847C2C2L ^ l2));
        nArray2[5] = (int)dd.acp("s", (int)2520, (long)(0x14D61ADC2548C23DL ^ l2));
        nArray2[dd.acp("s", (int)24714, (long)(0x25BCE79619D6AB49L ^ l2))] = (int)dd.acp("s", (int)9112, (long)(0x5A8428DC2B3CE853L ^ l2));
        nArray2[dd.acp("s", (int)8814, (long)(0x60F7F81A032A69ACL ^ l2))] = (int)dd.acp("s", (int)25475, (long)(0x21D95EA3DB852871L ^ l2));
        nArray2[dd.acp("s", (int)15793, (long)(0x215B13F0EDDCF648L ^ l2))] = (int)dd.acp("s", (int)6215, (long)(0x6FC54F48B2605382L ^ l2));
        nArray2[dd.acp("s", (int)5335, (long)(0x5497C10ED235F26L ^ l2))] = (int)dd.acp("s", (int)26358, (long)(0x203748D0DDE62D14L ^ l2));
        nArray2[dd.acp("s", (int)11652, (long)(0xBE2947A0079E67EL ^ l2))] = (int)dd.acp("s", (int)29439, (long)(0x30D6E2862C49393FL ^ l2));
        nArray2[dd.acp("s", (int)26779, (long)(0x1027492CBDF4236DL ^ l2))] = (int)dd.acp("s", (int)26358, (long)(0x203748D0DDE62D14L ^ l2));
        nArray2[dd.acp("s", (int)29371, (long)(0x29FAC56C4783957L ^ l2))] = (int)dd.acp("s", (int)8757, (long)(0x6CAA66BBCB1EE9EDL ^ l2));
        this.KhQrs = new cG(this, mr.clS(nArray2)).Uf(rD.dlM().bjG().bis());
        int[] nArray3 = new int[dd.acp("s", (int)11652, (long)(0xBE2947A0079E67EL ^ l2))];
        nArray3[0] = (int)dd.acp("s", (int)7809, (long)(0x6BEC0333B14CD57FL ^ l2));
        nArray3[1] = (int)dd.acp("s", (int)2361, (long)(0x707F98E00847C2C2L ^ l2));
        nArray3[2] = (int)dd.acp("s", (int)29439, (long)(0x30D6E2862C49393FL ^ l2));
        nArray3[3] = (int)dd.acp("s", (int)29439, (long)(0x30D6E2862C49393FL ^ l2));
        nArray3[4] = (int)dd.acp("s", (int)25475, (long)(0x21D95EA3DB852871L ^ l2));
        nArray3[5] = (int)dd.acp("s", (int)21201, (long)(0x4F6078DE4FA2991DL ^ l2));
        nArray3[dd.acp("s", (int)24714, (long)(0x25BCE79619D6AB49L ^ l2))] = (int)dd.acp("s", (int)26358, (long)(0x203748D0DDE62D14L ^ l2));
        nArray3[dd.acp("s", (int)8814, (long)(0x60F7F81A032A69ACL ^ l2))] = (int)dd.acp("s", (int)29439, (long)(0x30D6E2862C49393FL ^ l2));
        nArray3[dd.acp("s", (int)15793, (long)(0x215B13F0EDDCF648L ^ l2))] = (int)dd.acp("s", (int)26358, (long)(0x203748D0DDE62D14L ^ l2));
        nArray3[dd.acp("s", (int)5335, (long)(0x5497C10ED235F26L ^ l2))] = (int)dd.acp("s", (int)6948, (long)(0x7F1959E1F5FAD0F0L ^ l2));
        this.zdHIt = new cG(this, mr.clS(nArray3)).Uf(rD.dlM().bjG().bis().cob(0.5f));
        int[] nArray4 = new int[dd.acp("s", (int)24714, (long)(0x25BCE79619D6AB49L ^ l2))];
        nArray4[0] = (int)dd.acp("s", (int)29426, (long)(0x2D1FAE04E10BB922L ^ l2));
        nArray4[1] = (int)dd.acp("s", (int)2361, (long)(0x707F98E00847C2C2L ^ l2));
        nArray4[2] = (int)dd.acp("s", (int)29439, (long)(0x30D6E2862C49393FL ^ l2));
        nArray4[3] = (int)dd.acp("s", (int)29439, (long)(0x30D6E2862C49393FL ^ l2));
        nArray4[4] = (int)dd.acp("s", (int)9112, (long)(0x5A8428DC2B3CE853L ^ l2));
        nArray4[5] = (int)dd.acp("s", (int)21241, (long)(0x23C7BC0EA658193FL ^ l2));
        this.jUhNc = new cJ(this, mr.clS(nArray4)).WE(false);
        int[] nArray5 = new int[dd.acp("s", (int)8814, (long)(0x60F7F81A032A69ACL ^ l2))];
        nArray5[0] = (int)dd.acp("s", (int)12988, (long)(0x7A2D76C889FD7941L ^ l2));
        nArray5[1] = (int)dd.acp("s", (int)6948, (long)(0x7F1959E1F5FAD0F0L ^ l2));
        nArray5[2] = (int)dd.acp("s", (int)11064, (long)(0x76E073A0FF4C60EAL ^ l2));
        nArray5[3] = (int)dd.acp("s", (int)27213, (long)(0x38B8B02DC81A1B9L ^ l2));
        nArray5[4] = (int)dd.acp("s", (int)9112, (long)(0x5A8428DC2B3CE853L ^ l2));
        nArray5[5] = (int)dd.acp("s", (int)6948, (long)(0x7F1959E1F5FAD0F0L ^ l2));
        nArray5[dd.acp("s", (int)24714, (long)(0x25BCE79619D6AB49L ^ l2))] = (int)dd.acp("s", (int)4982, (long)(0x50DC55C110B0D8A3L ^ l2));
        this.IfTUx = new cJ(this, mr.clS(nArray5)).WE(false);
        int[] nArray6 = new int[dd.acp("s", (int)3250, (long)(0x3254A9A237E0475CL ^ l2))];
        nArray6[0] = (int)dd.acp("s", (int)12988, (long)(0x7A2D76C889FD7941L ^ l2));
        nArray6[1] = (int)dd.acp("s", (int)6948, (long)(0x7F1959E1F5FAD0F0L ^ l2));
        nArray6[2] = (int)dd.acp("s", (int)11064, (long)(0x76E073A0FF4C60EAL ^ l2));
        nArray6[3] = (int)dd.acp("s", (int)27213, (long)(0x38B8B02DC81A1B9L ^ l2));
        nArray6[4] = (int)dd.acp("s", (int)9112, (long)(0x5A8428DC2B3CE853L ^ l2));
        nArray6[5] = (int)dd.acp("s", (int)6948, (long)(0x7F1959E1F5FAD0F0L ^ l2));
        nArray6[dd.acp("s", (int)24714, (long)(0x25BCE79619D6AB49L ^ l2))] = (int)dd.acp("s", (int)4982, (long)(0x50DC55C110B0D8A3L ^ l2));
        nArray6[dd.acp("s", (int)8814, (long)(0x60F7F81A032A69ACL ^ l2))] = (int)dd.acp("s", (int)25475, (long)(0x21D95EA3DB852871L ^ l2));
        nArray6[dd.acp("s", (int)15793, (long)(0x215B13F0EDDCF648L ^ l2))] = (int)dd.acp("s", (int)10231, (long)(0x32B6E530EC1FEC39L ^ l2));
        nArray6[dd.acp("s", (int)5335, (long)(0x5497C10ED235F26L ^ l2))] = (int)dd.acp("s", (int)2361, (long)(0x707F98E00847C2C2L ^ l2));
        nArray6[dd.acp("s", (int)11652, (long)(0xBE2947A0079E67EL ^ l2))] = (int)dd.acp("s", (int)12215, (long)(0x456C4D5AD5A86461L ^ l2));
        nArray6[dd.acp("s", (int)26779, (long)(0x1027492CBDF4236DL ^ l2))] = (int)dd.acp("s", (int)6253, (long)(0x258745A1FF3FD3B1L ^ l2));
        nArray6[dd.acp("s", (int)29371, (long)(0x29FAC56C4783957L ^ l2))] = (int)dd.acp("s", (int)11909, (long)(0x14FAD00C7D16E554L ^ l2));
        this.JkVNw = new cC(this, mr.clS(nArray6)).Vy(0.1).Vw(1.0).Vx(3.0).VA(1.0);
        this.rNrBp = new rl();
        this.JkVNw.Vf(this.IfTUx::WF);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block15: {
            block13: {
                block12: {
                    block14: {
                        dd.OBqTT = gb.aYR(2968925495041184559L, -7969743510681426525L, MethodHandles.lookup().lookupClass()).a(170475967692167L);
                        var16 = dd.OBqTT ^ 45652545398424L;
                        var18_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var16 >>> 56);
                        for (var19_2 = 1; var19_2 < 8; ++var19_2) {
                            v2 = v2;
                            v2[var19_2] = (byte)(var16 << var19_2 * 8 >>> 56);
                        }
                        break block14;
lbl13:
                        // 1 sources

                        while (true) {
                            continue;
                            break;
                        }
                    }
                    var18_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                    var20_3 = var18_1.doFinal("\u0088\u0087\u001e,YNk\u009a".getBytes("ISO-8859-1"));
                    ** while (true)
                    dd.vRYIv = dd.acm(var20_3).intern();
                    dd.bJBvO = new HashMap<K, V>(13);
                    var5_4 = Cipher.getInstance("DES/CBC/NoPadding");
                    v3 = SecretKeyFactory.getInstance("DES");
                    v4 = new byte[8];
                    v5 = v4;
                    v4[0] = (byte)(var16 >>> 56);
                    for (var6_5 = 1; var6_5 < 8; ++var6_5) {
                        v5 = v5;
                        v5[var6_5] = (byte)(var16 << var6_5 * 8 >>> 56);
                    }
                    var5_4.init(2, (Key)v3.generateSecret(new DESKeySpec(v5)), new IvParameterSpec(new byte[8]));
                    var11_6 = new long[64];
                    var8_7 = 0;
                    var9_8 = "\u00d8\u008b\u0088\u001b\u00e0\u00ad\u009b\u00c0\u00fc\u00a0\u00f4!\u0014\u00e7@F\u00a8\u00f6]6\u007f\u0002\u008e\u00d9\u008e\u0005\u00f5\u00e3\u00f3\u00a4Si\u008e\u00d2r2D\u00af9\nE\t\u00fd\u007f\u00aa\u0012\b I\u00ea\u0016\u0093\u0085{\u00825\u00a7\u0006\u009e>\u00bay\u00da\u00c85l9\u001cG\u00b1`\u00f9\u00b2\u00ddw\u0080@\u00caW\u00b2\u0007\u0012\u0083\u00bas\u00b4\u00ed\u00ae\u008d\u00dcI\u00a5b\u008e\u00ba4\u00d2K\u0083\u00ed\u00f2\u0082\u001f\u00ac\u00967\u00fd~RL\u000e\u001drM\u0080\u00e3\u00fd\u00cf3\u00c5\u008d(\u0081Xv\u0084\u008c\u00ab\u00c5 \u00d0\u000e\u00caVRl.Y\u000f\u009b\u00df\u008c\u0090\u00ce\u00df\u00cc\u001a\u00f4\u00c4\u00c2\u00fd\u0093\u00c5\u00a7\u00c9i\u00a5N\u0007~!\u00f7\u00fb\u001d8\u00e1w\u00ef\u00c1oY\u00ebx\u00e8\u00d02~\u00a5O\u00d7\u00ea\u00b5\u0098%\u0088\u00a7\u00ba\u00b9\u00ae\u00a8B\u00a9\u00a2\u00a2\u00fdl\u001b0\u0019\u00c8\u0004\t?`.\u00d8\u0012\u00ed3\u00e9\u00c7\u0007\u0085\fJ}q\u00986>io\u00b5J\u00d8ESq\u00b0\u00f2f!\u00ea\u00cd\u001d\u00ce\u00cak^M>\u00c2_\u0001\"[v\u0096\u0080\u0003FkD\u0015S\u008ds\u00e4\u00d31\u00bc_\u00e23l5\u00db\u00b1\u007f\u0083\u0005j\u0011W\u0089\r\u00ed\u00cc\u00ddNG9\u00f2\u0088\u0084\u00e7\u000eR\u00fc\u008d{\u00ab\u00ef\u00dd\u00b9+\f\u0096\u00bb\f\u00cc\u0001\u00f1\u009e\u00f7\u0016'\u0083\u00aeb\u008bFL\u00102Y\u0099\t\u00a9\u0017E\u00c5]}\u00ad\u008d\u001f\u00ec\u00cf\u00dd\u0015\u0098r\u00c4\u00d3{\u00a2\u0095A\u0003\u008d)(\u009fPL`\u00d8\u00c5|j\u00cc2\u0013\u0081\u00d8\u0013%N\u00a0\u00ec\u00e7|\u00f0k\t\u00dc\u00fc\u009e\u00c3\u00a5r\u0085s\u0000C\u00cdH\u00dd\u00f0`[\u00b5\u00a7\u00ed\u0092\u00951\u00fd\u00be\u00c3\u00b8\u00cc\u00ecC\u00f3\u0004\u008c^XQ|\u00f5\u0014S\u00cc\u008d\u00f4\u0097\"\u00b4\u00fc\u001d\u0017\u0094\u00c2\u00e0\u00e0e*p\u00bfp\u00ba\u00fe\u00ff4D>W\u0089\u00f1\r%\u00af\u00aa\u00e5\u001c\u00f6\u000f\u008eW{\u00c9\u00bce\u00c7q\u00d8\u00cd\u00b8\u00ec%\u00ac\u00c5\u00eb\u00b1e\u00a8\u00fa\u00c2\u00fa\u0086a\u00eb\u0084\u009cL\u0012\u00aa%#<\u0090hF\u00b1X\u001e\u0088h\u00b4\u00f4O\u00a0\u00ed\u00ee\u00ab\u00fe\u0001V\u00e1\u00963\u008b\u00b1";
                    var10_9 = "\u00d8\u008b\u0088\u001b\u00e0\u00ad\u009b\u00c0\u00fc\u00a0\u00f4!\u0014\u00e7@F\u00a8\u00f6]6\u007f\u0002\u008e\u00d9\u008e\u0005\u00f5\u00e3\u00f3\u00a4Si\u008e\u00d2r2D\u00af9\nE\t\u00fd\u007f\u00aa\u0012\b I\u00ea\u0016\u0093\u0085{\u00825\u00a7\u0006\u009e>\u00bay\u00da\u00c85l9\u001cG\u00b1`\u00f9\u00b2\u00ddw\u0080@\u00caW\u00b2\u0007\u0012\u0083\u00bas\u00b4\u00ed\u00ae\u008d\u00dcI\u00a5b\u008e\u00ba4\u00d2K\u0083\u00ed\u00f2\u0082\u001f\u00ac\u00967\u00fd~RL\u000e\u001drM\u0080\u00e3\u00fd\u00cf3\u00c5\u008d(\u0081Xv\u0084\u008c\u00ab\u00c5 \u00d0\u000e\u00caVRl.Y\u000f\u009b\u00df\u008c\u0090\u00ce\u00df\u00cc\u001a\u00f4\u00c4\u00c2\u00fd\u0093\u00c5\u00a7\u00c9i\u00a5N\u0007~!\u00f7\u00fb\u001d8\u00e1w\u00ef\u00c1oY\u00ebx\u00e8\u00d02~\u00a5O\u00d7\u00ea\u00b5\u0098%\u0088\u00a7\u00ba\u00b9\u00ae\u00a8B\u00a9\u00a2\u00a2\u00fdl\u001b0\u0019\u00c8\u0004\t?`.\u00d8\u0012\u00ed3\u00e9\u00c7\u0007\u0085\fJ}q\u00986>io\u00b5J\u00d8ESq\u00b0\u00f2f!\u00ea\u00cd\u001d\u00ce\u00cak^M>\u00c2_\u0001\"[v\u0096\u0080\u0003FkD\u0015S\u008ds\u00e4\u00d31\u00bc_\u00e23l5\u00db\u00b1\u007f\u0083\u0005j\u0011W\u0089\r\u00ed\u00cc\u00ddNG9\u00f2\u0088\u0084\u00e7\u000eR\u00fc\u008d{\u00ab\u00ef\u00dd\u00b9+\f\u0096\u00bb\f\u00cc\u0001\u00f1\u009e\u00f7\u0016'\u0083\u00aeb\u008bFL\u00102Y\u0099\t\u00a9\u0017E\u00c5]}\u00ad\u008d\u001f\u00ec\u00cf\u00dd\u0015\u0098r\u00c4\u00d3{\u00a2\u0095A\u0003\u008d)(\u009fPL`\u00d8\u00c5|j\u00cc2\u0013\u0081\u00d8\u0013%N\u00a0\u00ec\u00e7|\u00f0k\t\u00dc\u00fc\u009e\u00c3\u00a5r\u0085s\u0000C\u00cdH\u00dd\u00f0`[\u00b5\u00a7\u00ed\u0092\u00951\u00fd\u00be\u00c3\u00b8\u00cc\u00ecC\u00f3\u0004\u008c^XQ|\u00f5\u0014S\u00cc\u008d\u00f4\u0097\"\u00b4\u00fc\u001d\u0017\u0094\u00c2\u00e0\u00e0e*p\u00bfp\u00ba\u00fe\u00ff4D>W\u0089\u00f1\r%\u00af\u00aa\u00e5\u001c\u00f6\u000f\u008eW{\u00c9\u00bce\u00c7q\u00d8\u00cd\u00b8\u00ec%\u00ac\u00c5\u00eb\u00b1e\u00a8\u00fa\u00c2\u00fa\u0086a\u00eb\u0084\u009cL\u0012\u00aa%#<\u0090hF\u00b1X\u001e\u0088h\u00b4\u00f4O\u00a0\u00ed\u00ee\u00ab\u00fe\u0001V\u00e1\u00963\u008b\u00b1".length();
                    var7_10 = 0;
                    while (true) {
                        var12_11 = var9_8.substring(var7_10, var7_10 += 8).getBytes("ISO-8859-1");
                        v6 = var11_6;
                        v7 = var8_7++;
                        v8 = ((long)var12_11[0] & 255L) << 56 | ((long)var12_11[1] & 255L) << 48 | ((long)var12_11[2] & 255L) << 40 | ((long)var12_11[3] & 255L) << 32 | ((long)var12_11[4] & 255L) << 24 | ((long)var12_11[5] & 255L) << 16 | ((long)var12_11[6] & 255L) << 8 | (long)var12_11[7] & 255L;
                        v9 = -1;
                        break block12;
                        break;
                    }
lbl44:
                    // 1 sources

                    while (true) {
                        v6[v7] = v10;
                        if (var7_10 < var10_9) ** continue;
                        var9_8 = "T\u00a6i&-\u0013\u00ba1_B\u009aZ\u00d6\u00fd\b\u008f";
                        var10_9 = "T\u00a6i&-\u0013\u00ba1_B\u009aZ\u00d6\u00fd\b\u008f".length();
                        var7_10 = 0;
                        while (true) {
                            var12_11 = var9_8.substring(var7_10, var7_10 += 8).getBytes("ISO-8859-1");
                            v6 = var11_6;
                            v7 = var8_7++;
                            v8 = ((long)var12_11[0] & 255L) << 56 | ((long)var12_11[1] & 255L) << 48 | ((long)var12_11[2] & 255L) << 40 | ((long)var12_11[3] & 255L) << 32 | ((long)var12_11[4] & 255L) << 24 | ((long)var12_11[5] & 255L) << 16 | ((long)var12_11[6] & 255L) << 8 | (long)var12_11[7] & 255L;
                            v9 = 0;
                            break block12;
                            break;
                        }
                        break;
                    }
lbl57:
                    // 1 sources

                    while (true) {
                        v6[v7] = v10;
                        if (var7_10 < var10_9) ** continue;
                        break block13;
                        break;
                    }
                }
                var13_12 = v8;
                var15_13 = var5_4.doFinal(new byte[]{(byte)(var13_12 >>> 56), (byte)(var13_12 >>> 48), (byte)(var13_12 >>> 40), (byte)(var13_12 >>> 32), (byte)(var13_12 >>> 24), (byte)(var13_12 >>> 16), (byte)(var13_12 >>> 8), (byte)var13_12});
                v10 = ((long)var15_13[0] & 255L) << 56 | ((long)var15_13[1] & 255L) << 48 | ((long)var15_13[2] & 255L) << 40 | ((long)var15_13[3] & 255L) << 32 | ((long)var15_13[4] & 255L) << 24 | ((long)var15_13[5] & 255L) << 16 | ((long)var15_13[6] & 255L) << 8 | (long)var15_13[7] & 255L;
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
            dd.XpzLl = var11_6;
            dd.OykDi = new Integer[64];
            var0_14 = Cipher.getInstance("DES/CBC/NoPadding");
            v11 = SecretKeyFactory.getInstance("DES");
            v12 = new byte[8];
            v13 = v12;
            v12[0] = (byte)(var16 >>> 56);
            for (var1_15 = 1; var1_15 < 8; ++var1_15) {
                v13 = v13;
                v13[var1_15] = (byte)(var16 << var1_15 * 8 >>> 56);
            }
            break block15;
lbl84:
            // 1 sources

            while (true) {
                continue;
                break;
            }
        }
        var0_14.init(2, (Key)v11.generateSecret(new DESKeySpec(v13)), new IvParameterSpec(new byte[8]));
        var2_16 = -2983841993349134973L;
        var4_17 = var0_14.doFinal(new byte[]{(byte)(var2_16 >>> 56), (byte)(var2_16 >>> 48), (byte)(var2_16 >>> 40), (byte)(var2_16 >>> 32), (byte)(var2_16 >>> 24), (byte)(var2_16 >>> 16), (byte)(var2_16 >>> 8), (byte)var2_16});
        ** while (true)
        dd.SSCLk = ((long)var4_17[0] & 255L) << 56 | ((long)var4_17[1] & 255L) << 48 | ((long)var4_17[2] & 255L) << 40 | ((long)var4_17[3] & 255L) << 32 | ((long)var4_17[4] & 255L) << 24 | ((long)var4_17[5] & 255L) << 16 | ((long)var4_17[6] & 255L) << 8 | (long)var4_17[7] & 255L;
    }

    private static MatchException acl(MatchException matchException) {
        return matchException;
    }

    private static int acn(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x6431;
        if (OykDi[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = XpzLl[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])bJBvO.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    bJBvO.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dd", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dd.OykDi[n3] = n4;
        }
        return OykDi[n3];
    }

    @Override
    public void aaj() {
        super.aaj();
        this.rNrBp.dhF();
    }

    private static String acm(byte[] byArray) {
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

    private static CallSite acp(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dd" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    @hG
    public void aci(gH.th th2) {
        long l2 = OBqTT ^ 0xC67FA547A85L;
        this.rNrBp.dhJ(SSCLk, this.pYKFd.VC(), blockState -> this.MKdlw.WW(blockState.getBlock().asItem()));
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Loose catch block
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    @hG
    public void acj(go.sX sX2) {
        Vec3d vec3d;
        float f2;
        List<BlockPos> list;
        iS[] iSArray;
        block27: {
            block28: {
                boolean bl2;
                block25: {
                    block23: {
                        long l2 = OBqTT ^ 0x21F854598975L;
                        iSArray = dh.afl();
                        if (!this.bab()) return;
                        try {
                            if (rD.dlmvG.getCameraEntity() != null) break block23;
                            return;
                            catch (MatchException matchException) {
                                throw dd.acl(matchException);
                            }
                        }
                        catch (MatchException matchException) {
                            throw dd.acl(matchException);
                        }
                    }
                    list = this.rNrBp.dhB();
                    Vec3d vec3d2 = rD.dlmvG.gameRenderer.getCamera().getCameraPos().negate();
                    MMuss.startBatch();
                    try {
                        for (BlockPos blockPos : list) {
                            block24: {
                                block26: {
                                    block29: {
                                        if (iSArray != null) break block24;
                                        bl2 = jJ.bIA(blockPos.toCenterPos());
                                        if (iSArray != null) break block25;
                                        break block29;
                                        catch (MatchException matchException) {
                                            throw dd.acl(matchException);
                                        }
                                    }
                                    try {
                                        block30: {
                                            if (bl2) break block26;
                                            break block30;
                                            catch (MatchException matchException) {
                                                throw dd.acl(matchException);
                                            }
                                        }
                                        if (iSArray == null) continue;
                                    }
                                    catch (MatchException matchException) {
                                        throw dd.acl(matchException);
                                    }
                                }
                                MMuss.bUS(kH.bTJ(sX2.bbh(), new Box(blockPos).offset(vec3d2), this.jUhNc.WF(), false).dtN(this.KhQrs.Wf()).dtO(this.zdHIt.Wf()).dtS());
                            }
                            if (iSArray == null) continue;
                        }
                        MMuss.endBatch();
                    }
                    catch (Throwable throwable) {
                        MMuss.endBatch();
                        throw throwable;
                    }
                    bl2 = this.IfTUx.WF();
                }
                if (!bl2) {
                    return;
                }
                Vec3d vec3d3 = rD.dlmvG.getCameraEntity().getLerpedPos(sX2.bbi());
                float f3 = rD.dlmvG.getCameraEntity().getEyeHeight(rD.dlmvG.getCameraEntity().getPose());
                boolean bl3 = rD.dlmvG.options.getPerspective().isFirstPerson();
                f2 = this.JkVNw.VB();
                float f4 = (float)(-Math.toRadians(rD.dlmvG.getCameraEntity().getPitch()));
                float f5 = (float)(-Math.toRadians(rD.dlmvG.getCameraEntity().getYaw()));
                vec3d = new Vec3d(0.0, 0.0, 75.0).rotateX(f4).rotateY(f5).add(vec3d3.add(0.0, (double)f3, 0.0));
                try {
                    if (iSArray != null) break block27;
                    if (bl3) break block28;
                }
                catch (MatchException matchException) {
                    throw dd.acl(matchException);
                }
                vec3d = vec3d3.add(0.0, (double)f3, 0.0);
            }
            dJxyG.startBatch();
        }
        try {
            for (BlockPos blockPos : list) {
                try {
                    dJxyG.bUv(kF.bTn(sX2.bbh(), vec3d, blockPos.toCenterPos(), this.KhQrs.Wf()).dts(f2).dtt());
                    if (iSArray != null) return;
                    if (iSArray == null) continue;
                    return;
                }
                catch (MatchException matchException) {
                    throw dd.acl(matchException);
                    return;
                }
            }
        }
        finally {
            dJxyG.endBatch();
        }
    }

    private static int aco(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = dd.acn(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dd.class, "aco", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

