/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.opengl.GlStateManager
 *  com.mojang.blaze3d.systems.RenderSystem
 *  org.lwjgl.opengl.GL11C
 *  org.lwjgl.opengl.GL13C
 *  org.lwjgl.opengl.GL14C
 *  org.lwjgl.opengl.GL15
 *  org.lwjgl.opengl.GL15C
 *  org.lwjgl.opengl.GL20
 *  org.lwjgl.opengl.GL20C
 *  org.lwjgl.opengl.GL30
 *  org.lwjgl.opengl.GL30C
 *  org.lwjgl.opengl.GL33C
 */
package sixtwo;

import com.mojang.blaze3d.opengl.GlStateManager;
import com.mojang.blaze3d.systems.RenderSystem;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.nio.FloatBuffer;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import org.lwjgl.opengl.GL11C;
import org.lwjgl.opengl.GL13C;
import org.lwjgl.opengl.GL14C;
import org.lwjgl.opengl.GL15;
import org.lwjgl.opengl.GL15C;
import org.lwjgl.opengl.GL20;
import org.lwjgl.opengl.GL20C;
import org.lwjgl.opengl.GL30;
import org.lwjgl.opengl.GL30C;
import org.lwjgl.opengl.GL33C;
import sixtwo.gb;
import sixtwo.lR;

public final class lQ {
    public static final int wjyTu;
    public static final int GOYJU;
    public static final int MtKgJ;
    public static final int DZRYj;
    public static final int OvEXM;
    public static final int VaZaQ;
    public static final int iYfpb = 1;
    public static final int owoKc;
    private static boolean aMvFW;
    private static boolean nKuBJ;
    private static boolean fCEzP;
    private static boolean LIZvL;
    private static boolean VVTnq;
    private static int tevXB;
    private static int WPrfB;
    private static int jCLAR;
    private static int JCuUr;
    private static int VLrxD;
    private static int cQWic;
    private static int VeAij;
    private static int ejZTh;
    private static int bbfkk;
    private static int SIlve;
    private static int TcXqa;
    private static int ManrS;
    private static int AEnnS;
    private static int joTfj;
    private static final int[] FrYbs;
    private static int swnov;
    private static int jYHrQ;
    private static final long erOHr;
    private static final long[] UOEnR;
    private static final Integer[] HaCDI;
    private static final Map BwWNH;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                lQ.erOHr = gb.aYR(3456135055035395908L, 6732740744624808019L, MethodHandles.lookup().lookupClass()).a(150763448627319L);
                lQ.BwWNH = new HashMap<K, V>(13);
                var0 = lQ.erOHr ^ 110064258505761L;
                var2_1 = Cipher.getInstance("DES/CBC/NoPadding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var0 >>> 56);
                for (var3_2 = 1; var3_2 < 8; ++var3_2) {
                    v2 = v2;
                    v2[var3_2] = (byte)(var0 << var3_2 * 8 >>> 56);
                }
                var2_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var8_3 = new long[52];
                var5_4 = 0;
                var6_5 = "\u0097Hu\u0083\u00bb\u0018\u0087\u00e7\u001b\u00aeY(Bm\u00a8\"\u00a2\u00e3\u00d2\u00af\u0094\u0006\u008b\u00109\u0092TO\u00f4]i\u001csz\u0004p3\u0092\u00c3\u00efg\u00c0\u0086i\u00e1c\u00c8\u0010\u00c7j\u00f3\u00b1\u00f6\u00ac\u00a2\\\u0001\u00d6\u0099[\u000e\u00ed\u00f1\u00bd\u0014\u001a[\u00fcE\u0097\u0086\u00dd){\u008aA\u00df\u000e\u0088\u00c05V\u00bb\u00f3\u009b\u00fa,\u00bb\u00a4TMF\u00e2\u00bd+\u00e3\u00b5\u00f9H\u009aH\u00e5M0\u00ff\u00ff\u00ef\u008c0\tjgh\u00de\u0006\u00d9\u00e2x1\u00ee:{*|\u009b>\u000e'Z\u00fc\u0018\u0096\u00c6\u00e1\u000emO\u00a6d-\u00ac\u00a5\u0080\u00cb\u00d8\u00d7b\u00d4\u00a6\u0091\u00a3\u00de\u00b7\u008e\u009d\u00a1\u00be\u00cc\u00d5\u0011F\u0083vn\u0099\u0001\u000b\u00a8\u00d5_\u009a\u00f9)H\u00cby\u00e1\"Y\u00b1Z\u008bg\u00a7e \u0087\u00a9\u0000\u0081>=H_OP\u0003=\u0007T\u00b5\u0086\u00ac\u0002\u009f\u0085W\u00f3U\u00019V\u001c\u00b0\u00e6%5\u009f\u0085\u00a6\u008f\u00e2g-\u00f3\u00d9\u00cd\u00f36T\u00808\u00a9=Y\u00fd\u008f\u00e7\u00f6\u00a9\u00f2j\u0094*\u00e4\u00edS\u00b4y\u00c4\u0083\u00e1vWh\u00e7/r\u0097\u00e6\"\u00c3\u00fe\u000b\ro\u00aa\b\u00f5.\u001e\u0095\u00e79\u0089\u00dax\u00fd\u00cd\u0094M\u00d7\u0088\u00fe\u00e8\u00ab\u0014\b# (A\u00a4\u00c55\u00eb\u00eb\u0016M\u00e0\u0015\u0004AL\u008a^a\u0096\u009eP1\u00bf!\u00d7\u00ce\u0093\u00f1\u001a\u00bb|\u0084\u009a\u00ce\u00a4\u009d7\u00bf\u00b8_\u001a}\u000f\u00bd\u00a6:i\u0002\u00a6U;w)\u00adn\u00f6\tYx\u009ap\u009d\u00b0\u00a0atyRt\u0081\u00eb\u000174'\u008d\u00e5\u0013\u00a7r \u000f\u00e1\u00a2[\u00aab\bM?\u00b0\u00a5\u00e2\u00b8\u0088\u00fc\u008dd<\u00c8\u00db\u00d4\u009d\u00c4&\u00b0\u00e0\u00bd\u0098\u00fe'";
                var7_6 = "\u0097Hu\u0083\u00bb\u0018\u0087\u00e7\u001b\u00aeY(Bm\u00a8\"\u00a2\u00e3\u00d2\u00af\u0094\u0006\u008b\u00109\u0092TO\u00f4]i\u001csz\u0004p3\u0092\u00c3\u00efg\u00c0\u0086i\u00e1c\u00c8\u0010\u00c7j\u00f3\u00b1\u00f6\u00ac\u00a2\\\u0001\u00d6\u0099[\u000e\u00ed\u00f1\u00bd\u0014\u001a[\u00fcE\u0097\u0086\u00dd){\u008aA\u00df\u000e\u0088\u00c05V\u00bb\u00f3\u009b\u00fa,\u00bb\u00a4TMF\u00e2\u00bd+\u00e3\u00b5\u00f9H\u009aH\u00e5M0\u00ff\u00ff\u00ef\u008c0\tjgh\u00de\u0006\u00d9\u00e2x1\u00ee:{*|\u009b>\u000e'Z\u00fc\u0018\u0096\u00c6\u00e1\u000emO\u00a6d-\u00ac\u00a5\u0080\u00cb\u00d8\u00d7b\u00d4\u00a6\u0091\u00a3\u00de\u00b7\u008e\u009d\u00a1\u00be\u00cc\u00d5\u0011F\u0083vn\u0099\u0001\u000b\u00a8\u00d5_\u009a\u00f9)H\u00cby\u00e1\"Y\u00b1Z\u008bg\u00a7e \u0087\u00a9\u0000\u0081>=H_OP\u0003=\u0007T\u00b5\u0086\u00ac\u0002\u009f\u0085W\u00f3U\u00019V\u001c\u00b0\u00e6%5\u009f\u0085\u00a6\u008f\u00e2g-\u00f3\u00d9\u00cd\u00f36T\u00808\u00a9=Y\u00fd\u008f\u00e7\u00f6\u00a9\u00f2j\u0094*\u00e4\u00edS\u00b4y\u00c4\u0083\u00e1vWh\u00e7/r\u0097\u00e6\"\u00c3\u00fe\u000b\ro\u00aa\b\u00f5.\u001e\u0095\u00e79\u0089\u00dax\u00fd\u00cd\u0094M\u00d7\u0088\u00fe\u00e8\u00ab\u0014\b# (A\u00a4\u00c55\u00eb\u00eb\u0016M\u00e0\u0015\u0004AL\u008a^a\u0096\u009eP1\u00bf!\u00d7\u00ce\u0093\u00f1\u001a\u00bb|\u0084\u009a\u00ce\u00a4\u009d7\u00bf\u00b8_\u001a}\u000f\u00bd\u00a6:i\u0002\u00a6U;w)\u00adn\u00f6\tYx\u009ap\u009d\u00b0\u00a0atyRt\u0081\u00eb\u000174'\u008d\u00e5\u0013\u00a7r \u000f\u00e1\u00a2[\u00aab\bM?\u00b0\u00a5\u00e2\u00b8\u0088\u00fc\u008dd<\u00c8\u00db\u00d4\u009d\u00c4&\u00b0\u00e0\u00bd\u0098\u00fe'".length();
                var4_7 = 0;
                while (true) {
                    var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                    v3 = var8_3;
                    v4 = var5_4++;
                    v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                    v6 = -1;
                    break block8;
                    break;
                }
lbl26:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    var6_5 = "I\u00c9\u00a8\u00d7\u00e5F?\u0085\u00d8\u00acv\u009a\u0003[P9";
                    var7_6 = "I\u00c9\u00a8\u00d7\u00e5F?\u0085\u00d8\u00acv\u009a\u0003[P9".length();
                    var4_7 = 0;
                    while (true) {
                        var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                        v3 = var8_3;
                        v4 = var5_4++;
                        v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                        v6 = 0;
                        break block8;
                        break;
                    }
                    break;
                }
lbl39:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    break block9;
                    break;
                }
            }
            var10_9 = v5;
            var12_10 = var2_1.doFinal(new byte[]{(byte)(var10_9 >>> 56), (byte)(var10_9 >>> 48), (byte)(var10_9 >>> 40), (byte)(var10_9 >>> 32), (byte)(var10_9 >>> 24), (byte)(var10_9 >>> 16), (byte)(var10_9 >>> 8), (byte)var10_9});
            v7 = ((long)var12_10[0] & 255L) << 56 | ((long)var12_10[1] & 255L) << 48 | ((long)var12_10[2] & 255L) << 40 | ((long)var12_10[3] & 255L) << 32 | ((long)var12_10[4] & 255L) << 24 | ((long)var12_10[5] & 255L) << 16 | ((long)var12_10[6] & 255L) << 8 | (long)var12_10[7] & 255L;
            switch (v6) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl52:
                // 1 sources

                ** continue;
            }
        }
        lQ.UOEnR = var8_3;
        lQ.HaCDI = new Integer[52];
        lQ.wjyTu = (int)lQ.ciw("x", (int)27223, (long)(var0 ^ 46201714285338385L));
        lQ.owoKc = (int)lQ.ciw("x", (int)26265, (long)(var0 ^ 1112022353797338093L));
        lQ.DZRYj = (int)lQ.ciw("x", (int)23561, (long)(var0 ^ 477538044818712901L));
        lQ.MtKgJ = (int)lQ.ciw("x", (int)25692, (long)(var0 ^ 4604790024995524925L));
        lQ.GOYJU = (int)lQ.ciw("x", (int)1157, (long)(var0 ^ 3072176616936419790L));
        lQ.OvEXM = (int)lQ.ciw("x", (int)16048, (long)(var0 ^ 314852587288366032L));
        lQ.VaZaQ = (int)lQ.ciw("x", (int)31123, (long)(var0 ^ 6978143821226462417L));
        lQ.FrYbs = new int[4];
        lQ.swnov = -1;
        lQ.jYHrQ = -1;
    }

    public static void cis() {
        long l2 = erOHr ^ 0x157339003981L;
        GL11C.glClear((int)lQ.ciw("x", (int)13353, (long)(0x541DAEA7AB62E4C0L ^ l2)));
    }

    public static void cir(float f2, float f3, float f4, float f5) {
        GL11C.glClearColor((float)f2, (float)f3, (float)f4, (float)f5);
    }

    public static boolean cip(int n2, int n3, int n4) {
        boolean bl2;
        block4: {
            block5: {
                long l2 = erOHr ^ 0x6A411BDA6FD1L;
                GlStateManager.glAttachShader((int)n2, (int)n3);
                GlStateManager.glAttachShader((int)n2, (int)n4);
                String[] stringArray = lR.ciF();
                GlStateManager.glLinkProgram((int)n2);
                String[] stringArray2 = stringArray;
                try {
                    try {
                        bl2 = GlStateManager.glGetProgrami((int)n2, (int)lQ.ciw("x", (int)17839, (long)(0x425FC8D5DD78C327L ^ l2)));
                        if (stringArray2 == null) break block4;
                        if (bl2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw lQ.cit(matchException);
                    }
                    return false;
                }
                catch (MatchException matchException) {
                    throw lQ.cit(matchException);
                }
            }
            bl2 = true;
        }
        return bl2;
    }

    public static void chQ() {
        long l2 = erOHr ^ 0x466A0C69CBCBL;
        aMvFW = GL11C.glIsEnabled((int)lQ.ciw("x", (int)21468, (long)(0x56B916917822717EL ^ l2)));
        nKuBJ = GL11C.glIsEnabled((int)lQ.ciw("x", (int)19673, (long)(0x22E949D536B66E4DL ^ l2)));
        fCEzP = GL11C.glIsEnabled((int)lQ.ciw("x", (int)30943, (long)(0x7840DA1ED60B5A76L ^ l2)));
        LIZvL = GL11C.glIsEnabled((int)lQ.ciw("x", (int)16179, (long)(0x7277CB9263951DB7L ^ l2)));
        VVTnq = GL11C.glGetBoolean((int)lQ.ciw("x", (int)18272, (long)(0x130BEE03805065DBL ^ l2)));
        tevXB = GL11C.glGetInteger((int)lQ.ciw("x", (int)28336, (long)(0x11EC2C3822C0CC26L ^ l2)));
        WPrfB = GL11C.glGetInteger((int)lQ.ciw("x", (int)4522, (long)(0x2312D98FB48B3328L ^ l2)));
        jCLAR = GL11C.glGetInteger((int)lQ.ciw("x", (int)26988, (long)(0x5BF41C7A13D14BC7L ^ l2)));
        JCuUr = GL11C.glGetInteger((int)lQ.ciw("x", (int)25868, (long)(0x75ADFECB31AE4793L ^ l2)));
        VLrxD = GL11C.glGetInteger((int)lQ.ciw("x", (int)11767, (long)(0x5DD7C16087780F62L ^ l2)));
        cQWic = GL11C.glGetInteger((int)lQ.ciw("x", (int)8893, (long)(0x1473BF645C4B8007L ^ l2)));
        VeAij = GL11C.glGetInteger((int)lQ.ciw("x", (int)29523, (long)(0x1645C45A94A651D5L ^ l2)));
        ejZTh = GL11C.glGetInteger((int)lQ.ciw("x", (int)14472, (long)(0x52373EB04B591A19L ^ l2)));
        bbfkk = GL11C.glGetInteger((int)lQ.ciw("x", (int)8022, (long)(0x793714D8260D3DD9L ^ l2)));
        GL11C.glGetIntegerv((int)lQ.ciw("x", (int)19008, (long)(0x40AE356ABC2DE8C0L ^ l2)), (int[])FrYbs);
    }

    public static void chS() {
        long l2 = erOHr ^ 0x5515F2D43839L;
        SIlve = GL11C.glGetInteger((int)lQ.ciw("x", (int)1998, (long)(0x778C80C6E2B356A0L ^ l2)));
        GL13C.glActiveTexture((int)lQ.ciw("x", (int)24188, (long)(0x60F457EBC9868F15L ^ l2)));
        TcXqa = GL11C.glGetInteger((int)lQ.ciw("x", (int)13166, (long)(0x37012E0702A1E231L ^ l2)));
        AEnnS = GL11C.glGetInteger((int)lQ.ciw("x", (int)13401, (long)(0x34C74F8067BB652CL ^ l2)));
        GL13C.glActiveTexture((int)lQ.ciw("x", (int)139, (long)(0x710AB3DFFEA2D1FAL ^ l2)));
        ManrS = GL11C.glGetInteger((int)lQ.ciw("x", (int)10547, (long)(0xE5C49898B5F784FL ^ l2)));
        joTfj = GL11C.glGetInteger((int)lQ.ciw("x", (int)28788, (long)(0x8F04C8D09D4A10AL ^ l2)));
        GL13C.glActiveTexture((int)SIlve);
    }

    public static void chT() {
        long l2 = erOHr ^ 0x687E7B71F4B9L;
        GL33C.glBindSampler((int)0, (int)TcXqa);
        GL33C.glBindSampler((int)1, (int)ManrS);
        GL13C.glActiveTexture((int)lQ.ciw("x", (int)4593, (long)(0x7815908C36F40C10L ^ l2)));
        GL11C.glBindTexture((int)lQ.ciw("x", (int)10640, (long)(0x744107CA4E14346FL ^ l2)), (int)AEnnS);
        GL13C.glActiveTexture((int)lQ.ciw("x", (int)22059, (long)(0x1A15EAED724ECBC0L ^ l2)));
        GL11C.glBindTexture((int)lQ.ciw("x", (int)29138, (long)(0x4B3A13F6F88E6C21L ^ l2)), (int)joTfj);
        GL13C.glActiveTexture((int)SIlve);
    }

    public static void chO(int n2, int n3, int n4, int n5) {
        GL14C.glBlendFuncSeparate((int)n2, (int)n3, (int)n4, (int)n5);
    }

    public static void chC(int n2, int n3) {
        GL33C.glBindSampler((int)n2, (int)n3);
    }

    public static void chR() {
        long l2;
        block35: {
            Object object;
            block33: {
                String[] stringArray;
                block32: {
                    Object object2;
                    block30: {
                        block29: {
                            Object object3;
                            block27: {
                                block26: {
                                    Object object4;
                                    block24: {
                                        l2 = erOHr ^ 0x61812AF0798EL;
                                        stringArray = lR.ciF();
                                        try {
                                            block25: {
                                                try {
                                                    try {
                                                        object4 = aMvFW;
                                                        if (stringArray == null) break block24;
                                                        if (object4 == 0) break block25;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw lQ.cit(matchException);
                                                    }
                                                    GL11C.glEnable((int)lQ.ciw("x", (int)18535, (long)(0x626823D56535D888L ^ l2)));
                                                    if (stringArray != null) break block26;
                                                }
                                                catch (MatchException matchException) {
                                                    throw lQ.cit(matchException);
                                                }
                                            }
                                            object4 = lQ.ciw("x", (int)18535, (long)(0x626823D56535D888L ^ l2));
                                        }
                                        catch (MatchException matchException) {
                                            throw lQ.cit(matchException);
                                        }
                                    }
                                    GL11C.glDisable((int)object4);
                                }
                                try {
                                    block28: {
                                        try {
                                            try {
                                                object3 = nKuBJ;
                                                if (stringArray == null) break block27;
                                                if (object3 == 0) break block28;
                                            }
                                            catch (MatchException matchException) {
                                                throw lQ.cit(matchException);
                                            }
                                            GL11C.glEnable((int)lQ.ciw("x", (int)4478, (long)(0x49C23187BF7C819EL ^ l2)));
                                            if (stringArray != null) break block29;
                                        }
                                        catch (MatchException matchException) {
                                            throw lQ.cit(matchException);
                                        }
                                    }
                                    object3 = lQ.ciw("x", (int)4478, (long)(0x49C23187BF7C819EL ^ l2));
                                }
                                catch (MatchException matchException) {
                                    throw lQ.cit(matchException);
                                }
                            }
                            GL11C.glDisable((int)object3);
                        }
                        try {
                            block31: {
                                try {
                                    try {
                                        object2 = fCEzP;
                                        if (stringArray == null) break block30;
                                        if (object2 == 0) break block31;
                                    }
                                    catch (MatchException matchException) {
                                        throw lQ.cit(matchException);
                                    }
                                    GL11C.glEnable((int)lQ.ciw("x", (int)30943, (long)(0x7840FDF5F092E833L ^ l2)));
                                    if (stringArray != null) break block32;
                                }
                                catch (MatchException matchException) {
                                    throw lQ.cit(matchException);
                                }
                            }
                            object2 = lQ.ciw("x", (int)30943, (long)(0x7840FDF5F092E833L ^ l2));
                        }
                        catch (MatchException matchException) {
                            throw lQ.cit(matchException);
                        }
                    }
                    GL11C.glDisable((int)object2);
                }
                try {
                    block34: {
                        try {
                            try {
                                object = LIZvL;
                                if (stringArray == null) break block33;
                                if (object == 0) break block34;
                            }
                            catch (MatchException matchException) {
                                throw lQ.cit(matchException);
                            }
                            GL11C.glEnable((int)lQ.ciw("x", (int)23761, (long)(0x72BEB1C60E894C33L ^ l2)));
                            if (stringArray != null) break block35;
                        }
                        catch (MatchException matchException) {
                            throw lQ.cit(matchException);
                        }
                    }
                    object = lQ.ciw("x", (int)23761, (long)(0x72BEB1C60E894C33L ^ l2));
                }
                catch (MatchException matchException) {
                    throw lQ.cit(matchException);
                }
            }
            GL11C.glDisable((int)object);
        }
        GL14C.glBlendFuncSeparate((int)tevXB, (int)WPrfB, (int)jCLAR, (int)JCuUr);
        GL11C.glDepthFunc((int)VLrxD);
        GL11C.glDepthMask((boolean)VVTnq);
        GL20C.glUseProgram((int)cQWic);
        GL30C.glBindVertexArray((int)VeAij);
        GL30C.glBindFramebuffer((int)lQ.ciw("x", (int)29463, (long)(0x7B128C01BB0BE3DBL ^ l2)), (int)ejZTh);
        GL30C.glBindFramebuffer((int)lQ.ciw("x", (int)10168, (long)(0x21EAE27F81EB744L ^ l2)), (int)bbfkk);
        GL11C.glViewport((int)FrYbs[0], (int)FrYbs[1], (int)FrYbs[2], (int)FrYbs[3]);
    }

    public static void ciq(int n2) {
        GL20C.glUseProgram((int)n2);
    }

    public static void chK() {
        long l2 = erOHr ^ 0x730A712F3530L;
        GL11C.glEnable((int)lQ.ciw("x", (int)18535, (long)(0x6268315E3EEA9436L ^ l2)));
    }

    public static void chN() {
        long l2 = erOHr ^ 0x77119F6F549L;
        GL11C.glDisable((int)lQ.ciw("x", (int)30943, (long)(0x78409B05C39464F4L ^ l2)));
    }

    public static void chB(int n2, int n3) {
        long l2 = erOHr ^ 0x4E79F6283C0CL;
        GL13C.glActiveTexture((int)(lQ.ciw("x", (int)24188, (long)(0x60F44C87CD7A8B20L ^ l2)) + n2));
        GL11C.glBindTexture((int)lQ.ciw("x", (int)29138, (long)(0x4B3A35F175D7A494L ^ l2)), (int)n3);
    }

    public static void cib(int n2, int n3, int n4, boolean bl2, int n5, long l2) {
        GL20C.glVertexAttribPointer((int)n2, (int)n3, (int)n4, (boolean)bl2, (int)n5, (long)l2);
    }

    public static int cie(int n2, String string) {
        return GL20.glGetUniformLocation((int)n2, (CharSequence)string);
    }

    public static void cim(int n2) {
        GL20.glDeleteShader((int)n2);
    }

    public static void cid(int n2, int n3, int n4) {
        GL11C.glDrawArrays((int)n2, (int)n3, (int)n4);
    }

    public static void cig(int n2, float f2, float f3) {
        GL20C.glUniform2f((int)n2, (float)f2, (float)f3);
    }

    public static void cil(int n2) {
        GL20.glDeleteProgram((int)n2);
    }

    public static int cio(int n2, String string) {
        int n3;
        block4: {
            int n4;
            block5: {
                long l2 = erOHr ^ 0x7C90D8858587L;
                n4 = GlStateManager.glCreateShader((int)n2);
                GlStateManager.glShaderSource((int)n4, (String)string);
                String[] stringArray = lR.ciF();
                GlStateManager.glCompileShader((int)n4);
                String[] stringArray2 = stringArray;
                try {
                    try {
                        n3 = GlStateManager.glGetShaderi((int)n4, (int)lQ.ciw("x", (int)27086, (long)(0x6CB34D2ECFA68518L ^ l2)));
                        if (stringArray2 == null) break block4;
                        if (n3 != 0) break block5;
                    }
                    catch (MatchException matchException) {
                        throw lQ.cit(matchException);
                    }
                    return -1;
                }
                catch (MatchException matchException) {
                    throw lQ.cit(matchException);
                }
            }
            n3 = n4;
        }
        return n3;
    }

    public static void cik(int n2) {
        RenderSystem.assertOnRenderThread();
        GL30C.glDeleteVertexArrays((int)n2);
    }

    public static void cic(int n2) {
        GL20C.glEnableVertexAttribArray((int)n2);
    }

    public static int cin() {
        return GL20.glCreateProgram();
    }

    public static int chV() {
        return GL15.glGenBuffers();
    }

    public static void cih(int n2) {
        GlStateManager._glDeleteBuffers((int)n2);
    }

    public static void chY(int n2) {
        GL30C.glBindVertexArray((int)n2);
    }

    public static void chZ(int n2, int n3) {
        GL15C.glBindBuffer((int)n2, (int)n3);
    }

    public static void cia(int n2, FloatBuffer floatBuffer, int n3) {
        RenderSystem.assertOnRenderThread();
        GL15C.glBufferData((int)n2, (FloatBuffer)floatBuffer, (int)n3);
    }

    public static int chU() {
        return GL30.glGenVertexArrays();
    }

    public static void chA(int n2) {
        long l2 = erOHr ^ 0x7D81B8CBD2FCL;
        GL11C.glBindTexture((int)lQ.ciw("x", (int)29138, (long)(0x4B3A06093B344A64L ^ l2)), (int)n2);
    }

    public static void chE() {
        long l2 = erOHr ^ 0x52CC7BB0EE9FL;
        lQ.chD((int)lQ.ciw("x", (int)22187, (long)(0x1011CB3EBC30515BL ^ l2)), 0);
    }

    public static void chF(int n2, int n3, int n4, int n5, int n6) {
        GL30C.glFramebufferTexture2D((int)n2, (int)n3, (int)n4, (int)n5, (int)n6);
    }

    public static void chG(int n2, int n3, int n4, int n5) {
        GL11C.glViewport((int)n2, (int)n3, (int)n4, (int)n5);
    }

    private static CallSite ciw(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/lQ" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static void chD(int n2, int n3) {
        GL30C.glBindFramebuffer((int)n2, (int)n3);
    }

    private static MatchException cit(MatchException matchException) {
        return matchException;
    }

    public static void chH() {
        long l2 = erOHr ^ 0x413563E97AF0L;
        GL11C.glDisable((int)lQ.ciw("x", (int)23761, (long)(0x72BE917247904F4DL ^ l2)));
    }

    public static void chI(boolean bl2, boolean bl3, boolean bl4, boolean bl5) {
        GL11C.glColorMask((boolean)bl2, (boolean)bl3, (boolean)bl4, (boolean)bl5);
    }

    static boolean chz(int n2) {
        boolean bl2;
        block4: {
            block5: {
                long l2 = erOHr ^ 0x1FBA365C0419L;
                String[] stringArray = lR.ciF();
                try {
                    try {
                        bl2 = GL30C.glCheckFramebufferStatus((int)n2);
                        if (stringArray == null) break block4;
                        if (bl2 != lQ.ciw("x", (int)29622, (long)(0x561AFDBB1A289ECAL ^ l2))) break block5;
                    }
                    catch (MatchException matchException) {
                        throw lQ.cit(matchException);
                    }
                    bl2 = true;
                    break block4;
                }
                catch (MatchException matchException) {
                    throw lQ.cit(matchException);
                }
            }
            bl2 = false;
        }
        return bl2;
    }

    public static void chJ(boolean bl2) {
        GL11C.glDepthMask((boolean)bl2);
    }

    public static void chL() {
        long l2 = erOHr ^ 0x50E7B57E06FEL;
        GL11C.glDisable((int)lQ.ciw("x", (int)18535, (long)(0x626812B3FABBA7F8L ^ l2)));
    }

    public static void cij(int n2) {
        GlStateManager._deleteTexture((int)n2);
    }

    private static int ciu(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4E72;
        if (HaCDI[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = UOEnR[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])BwWNH.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    BwWNH.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/lQ", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            lQ.HaCDI[n3] = n4;
        }
        return HaCDI[n3];
    }

    private static int civ(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = lQ.ciu(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public static void chP(int n2, int n3, int n4, int n5) {
        int n6;
        long l2;
        block11: {
            int n7;
            block9: {
                String[] stringArray;
                block10: {
                    l2 = erOHr ^ 0x1C25B43F4612L;
                    stringArray = lR.ciF();
                    try {
                        try {
                            n6 = swnov;
                            n7 = -1;
                            if (stringArray == null) break block9;
                            if (n6 != n7) break block10;
                        }
                        catch (MatchException matchException) {
                            throw lQ.cit(matchException);
                        }
                        swnov = lQ.chW();
                    }
                    catch (MatchException matchException) {
                        throw lQ.cit(matchException);
                    }
                }
                try {
                    n6 = jYHrQ;
                    if (stringArray == null) break block11;
                    n7 = -1;
                }
                catch (MatchException matchException) {
                    throw lQ.cit(matchException);
                }
            }
            try {
                if (n6 == n7) {
                    jYHrQ = lQ.chW();
                }
            }
            catch (MatchException matchException) {
                throw lQ.cit(matchException);
            }
            n6 = GL11C.glGetInteger((int)lQ.ciw("x", (int)1608, (long)(0x2E79D07B43C1A90CL ^ l2)));
        }
        int n8 = n6;
        int n9 = GL11C.glGetInteger((int)lQ.ciw("x", (int)8022, (long)(0x79374E979E5BB000L ^ l2)));
        lQ.chD((int)lQ.ciw("x", (int)12977, (long)(0x19526D88DB2D1DC7L ^ l2)), swnov);
        lQ.chF((int)lQ.ciw("x", (int)12977, (long)(0x19526D88DB2D1DC7L ^ l2)), (int)lQ.ciw("x", (int)2514, (long)(0x45D5B4E88C37A683L ^ l2)), (int)lQ.ciw("x", (int)29138, (long)(0x4B3A67AD37C0DE8AL ^ l2)), n2, 0);
        lQ.chD((int)lQ.ciw("x", (int)17409, (long)(0x64F31ED7AAA86B5DL ^ l2)), jYHrQ);
        lQ.chF((int)lQ.ciw("x", (int)17409, (long)(0x64F31ED7AAA86B5DL ^ l2)), (int)lQ.ciw("x", (int)31950, (long)(0x29F704FDAD455380L ^ l2)), (int)lQ.ciw("x", (int)29138, (long)(0x4B3A67AD37C0DE8AL ^ l2)), n3, 0);
        GL30.glBlitFramebuffer((int)0, (int)0, (int)n4, (int)n5, (int)0, (int)0, (int)n4, (int)n5, (int)lQ.ciw("x", (int)10839, (long)(0xA08CB464BB851EL ^ l2)), (int)lQ.ciw("x", (int)32241, (long)(0xD331EC99642D290L ^ l2)));
        lQ.chD((int)lQ.ciw("x", (int)12977, (long)(0x19526D88DB2D1DC7L ^ l2)), n8);
        lQ.chD((int)lQ.ciw("x", (int)17409, (long)(0x64F31ED7AAA86B5DL ^ l2)), n9);
    }

    public static int chX() {
        long l2 = erOHr ^ 0x1E858E70ADBAL;
        return GL11C.glGetInteger((int)lQ.ciw("x", (int)9506, (long)(0x505F13DB899061CBL ^ l2)));
    }

    public static int chW() {
        return GL30.glGenFramebuffers();
    }

    public static void chM() {
        long l2 = erOHr ^ 0x50CD98B1C027L;
        GL11C.glEnable((int)lQ.ciw("x", (int)12554, (long)(0x23CCD9DE54BB1846L ^ l2)));
    }

    public static void cii(int n2) {
        GlStateManager._glDeleteFramebuffers((int)n2);
    }

    public static void cif(int n2, int n3) {
        GL20C.glUniform1i((int)n2, (int)n3);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(lQ.class, "civ", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

