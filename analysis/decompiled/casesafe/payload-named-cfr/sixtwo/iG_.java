/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.texture.AbstractTexture
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import java.util.regex.Pattern;
import native.Loader;
import net.minecraft.client.texture.AbstractTexture;
import sixtwo.iS;
import sixtwo.lv;

public class iG {
    private final Pattern djCtR;
    private final Map<String, AbstractTexture> uZJpH;
    private final Set<String> oMbIM;
    private final Set<String> hQKFV;
    private static int mQdTb;
    private static long nDiFh;
    private static String[] ekZKT;
    private static String[] jFNdx;
    private static Map LxSWA;
    private static long zzOFR;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public iG() {
        long l2 = nDiFh ^ 0x4A88C3B7FA32L;
        int n2 = iG.bsu();
        this.djCtR = Pattern.compile((String)((Object)iG.bsz("j", (int)28395, (long)(0x74F3CB7603346B6BL ^ l2))));
        int n3 = n2;
        try {
            this.uZJpH = new ConcurrentHashMap<String, AbstractTexture>();
            this.oMbIM = ConcurrentHashMap.newKeySet();
            this.hQKFV = Set.of(iG.bsz("j", (int)14887, (long)(0x68738B9C4D343FA1L ^ l2)), iG.bsz("j", (int)20928, (long)(0x51C6581E21F2D443L ^ l2)), iG.bsz("j", (int)6435, (long)(0x60EF912535EE1CA4L ^ l2)), iG.bsz("j", (int)1034, (long)(0x7A03ABCED0CF818BL ^ l2)), iG.bsz("j", (int)1735, (long)(0x6B017F590DE78343L ^ l2)), iG.bsz("j", (int)14428, (long)(0x1F11545FB57C3DD2L ^ l2)), iG.bsz("j", (int)3688, (long)(0x15E2D3DD2A638BE7L ^ l2)), iG.bsz("j", (int)17383, (long)(0x227F791D3B4466BL ^ l2)));
            if (n3 == 0) {
                iS.bwK("LLCmE");
            }
        }
        catch (MatchException matchException) {
            throw iG.bsv(matchException);
        }
    }

    static {
        Loader.doInit(iG.class);
        iG._ae3cf7208a446e4a6ade47183b731e7c();
    }

    public native void bsm(String var1);

    private native /* synthetic */ void bsr(String var1, lv var2, Throwable var3);

    private native String bsq(String var1);

    private static native String bsx(int var0, long var1);

    private static native MatchException bsv(MatchException var0);

    public static native void bss(int var0);

    private static native Object bsy(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public static native int bst();

    private static native String bsw(byte[] var0);

    public static native int bsu();

    private static native CallSite bsz(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native AbstractTexture bsn(String var1);

    private native boolean bsp(String var1);

    public native AbstractTexture bso(String var1, AbstractTexture var2);

    private static native void _ae3cf7208a446e4a6ade47183b731e7c();
}

