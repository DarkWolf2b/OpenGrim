/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonElement
 *  com.google.gson.JsonObject
 *  net.minecraft.item.ItemStack
 */
package sixtwo;

import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.item.ItemStack;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.nc;
import sixtwo.nd;
import sixtwo.ne;
import sixtwo.ng;
import sixtwo.ny;
import sixtwo.rp;

public class nf
implements rp {
    private transient boolean lhkSE = true;
    private String BDwrc;
    private nc RVkIg;
    private nd DUmbm;
    private List<nd> SkOYI = new ArrayList<nd>();
    private ne HJcWp;
    private List<ng> CrfVL = new ArrayList<ng>();
    private long KTPlM;
    private long oeMul;
    private transient boolean vRKRG;
    private static int fUtsn;
    private static final long swToy;
    private static final String[] QVzDB;
    private static final String[] DFnfj;
    private static final Map CIsYm;
    private static final long[] yZmOu;
    private static final Integer[] ktNLe;
    private static final Map tdXcS;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        nf.swToy = gb.aYR(6230878624443814068L, -7722965818960441323L, MethodHandles.lookup().lookupClass()).a(149748787231919L);
                        nf.CIsYm = new HashMap<K, V>(13);
                        nf.cun(12);
                        var11 = nf.swToy ^ 74343483594231L;
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
                        var20_3 = new String[26];
                        var18_4 = 0;
                        var17_5 = "\u007f\u00d0\u0085\u00b5\u00a3A\u00d0\u00fc[\u00e2t\u00a6\u007fLX\u0016\u00b8\\d\u0080\u0016\u00e4 v\u007f\u00e1\u001d\u00d9X\u00e7V\u00c6\u0089w\u00bf\u0093\u001b\u00d8\t(\u0018r\u00b5\u00c1\u00daT\u0005a\u00d1\u00a8\u0097\u0006n>\u00fcN\u00dc\u0092\u00a6\u00bfW\u00cd\u00cf\u00be\u0083\u0018-)~\u0081\u00b4\u0005\u0018*\u001a\u0087\u008d\u00ab;kR=\u00f84`\u0091\u00c1\u00db\u00a7e\u0010\u009c\u00bb\u0089\u00a7zX\u00ea\u00de\u00ff^\u009e\u0089\u001e\u00a7f\u00c5\u0018@\u0004\u00ef\u00fc=8\u000e\u008e\u00cc\u008f[(\u00c90\u00e0\u0019\u00b8\u000bQ\u00d2~,\u009c\u00e4\u0010\u001b\u00c1\u00ad\u00b5\n\u000e\u00d2\u000b\u00d6{\u00d6\u00bc\u009c,\u00a2\u0001\u0018~\u00ee\u00fa\u00e8\u00ab\u0080t\u00cf5\u00f5\u0002?\u00ad\u00c8H7\u00d5\u00c9?\u00ec&\u00ab\u009d\u00f1\u0018:\u00ed\u00a2\u008c*\u00dc\u00e8A:2E\u0083\u00fe\u00f3\u00db@\u00aa1\u00cd\u00d7j\u00d4N\u00be t,X\u0085\b\u0010\u00e8\u00be\u00ea6\u00874}W\b\u00eeC\u007f\nE(\u00dd|\u00d8'\u00e2\t\u00a7d\u008b\u001d7 \u00df\u0096\u00a3r\u00d5r?\u00dc;t\u0001\u00af?%\u0017\u000f\u00abL`\u00d0)\u00c7\u00bd\u00c9b\n\u0087M\u00d7\u0007d\u00a1(\u00f7\u00d9\u00b9\u00dd\u00e9\u008b\u00d6\u001b[R\u009f\u009e\u0017#bSWn\u00e4\u001b\u00bc\u00b6\u00d6\u00b6\u00c3\u0017<Y\u00a9\u001c\u0085\u00b1\u00b8\u009c\u001ag\u00cd\u0091)G\u0018\u0013x\u00da\u00d8#\u0004\u00d8\u00edH\u00e5S\u009a\u0013\u00dc\u00fd\u008a}\u000f\u00de\u00e0\u0090q\u009f\u00b2 \u0090\u008b\u00ffc\u0016\u0098\u00c4?\u0018\u00d1d\u008d\u0012@\u0012j\u00f8\u00aa\u00c6A\u00ac\u0097d\u00fe*\u00db-k\u008a\u0080\u00b0\u008b(\u009c\u00f1\u00c5\u0016J<[\u009a\u0014\u0010\u00c2\u000bG\u0089\u00a62iW&\u00fa\u000f\u00f5\u0081\u0098\u00b3\u00fd\u00c9\u00fd\u00cf\u00c7\u00ff\u00b1\u00b3\u009e=\u0012x>y\u00fc \u00efV\u0083\u008b\u009f\u001d\u00ab\u00bc\u00ff\u00e9u\u008fC-\u0019\u0005\\_8\u00ddS\u007f^-*\u00faK\u00c3\u0016\u00a06\u001e \u0000kJ\u0015W\u0095\u00c0=\u000b\u0084\u00ab,.\u00c0\u0087\u00a04\u00d9Qw~\u009e\r\u00a3.\u00e6@\u00c2\u0014\u00b6\u00c1\u00d68\u0000\u008d<l\u00df5PP%\u0096G\u001be\u00bf\u0097\u00b9\u00b7\u00d0m\u00af\u00f9+Skb\u00d9\u0010x\u00a2+T\u0010\u00c3v\u00fc\u00ce\u00bfvt\u00ce\u00c7\u0091\u00ccv\u000b\u00c2\u0016:o\u00a2VxL\u00f6B\u00a6\u0018\u00ae\u0096T\u00f4\u00c2\u00ed\u00eaZ\u001a\u009e\u0004\u0081W\u00b0\u0004\u00deH\u00fd\u00e5i$v\\u\u0018$\u00f6Gx\u0087\u00dc\u00cdhY\u0010\u0016H\u0088\u00f7]\u00f0\u0002->\nG\u009f\u00b0\n \u00e2R\u008c\u00beR\u00fbW\u009d<I\u00b3\u000f\u0098\fI\u009a\u00ea\u00c8c\u00ab\u00cf\u00d2([\u00ac\u00b0[\u00a5\u0086\u009bH\u00e2 B\u00deb^\u00df\u00e3\u0084t\u00b4\u0095\u00ecG\u00d8\u00f4\u00eaPkLK4w\u00b3k\u00f7\u00ef\u0017\u00bd\u00f9i\u00baQ\u00b2(C\u00ef#j\u00de\u0006'KQ\u008c\u00ce\u00c8W\u00da\u00ae\u00e3\u00ed\u0016\u00f8\u009d\u0083\u009d\u001c\u00beG\u00f73#$\u00bc\u008e\u00b2y\u00ec*[h\u00a6tW(\u0016P\u009ba^L(<\u00fc\u00a1\u00f8\u00b3\u0013~/\u00b4\u00c9^\u0014\u00c7\u00b7\u000b#\u00f3}\u00dec\u00cfS\u0004\u0091\u00cd\u008e\u0000-?(_\u00c5\u009b \u00ad\u009a\u00a6\u001d\u00daV\u00bd\u0096,G\u00a5\u00874cA\r,\u00fa\u00d66<\u00f4\u00ad\\y\u0087(SBt\u00e1\u00d6";
                        var19_6 = "\u007f\u00d0\u0085\u00b5\u00a3A\u00d0\u00fc[\u00e2t\u00a6\u007fLX\u0016\u00b8\\d\u0080\u0016\u00e4 v\u007f\u00e1\u001d\u00d9X\u00e7V\u00c6\u0089w\u00bf\u0093\u001b\u00d8\t(\u0018r\u00b5\u00c1\u00daT\u0005a\u00d1\u00a8\u0097\u0006n>\u00fcN\u00dc\u0092\u00a6\u00bfW\u00cd\u00cf\u00be\u0083\u0018-)~\u0081\u00b4\u0005\u0018*\u001a\u0087\u008d\u00ab;kR=\u00f84`\u0091\u00c1\u00db\u00a7e\u0010\u009c\u00bb\u0089\u00a7zX\u00ea\u00de\u00ff^\u009e\u0089\u001e\u00a7f\u00c5\u0018@\u0004\u00ef\u00fc=8\u000e\u008e\u00cc\u008f[(\u00c90\u00e0\u0019\u00b8\u000bQ\u00d2~,\u009c\u00e4\u0010\u001b\u00c1\u00ad\u00b5\n\u000e\u00d2\u000b\u00d6{\u00d6\u00bc\u009c,\u00a2\u0001\u0018~\u00ee\u00fa\u00e8\u00ab\u0080t\u00cf5\u00f5\u0002?\u00ad\u00c8H7\u00d5\u00c9?\u00ec&\u00ab\u009d\u00f1\u0018:\u00ed\u00a2\u008c*\u00dc\u00e8A:2E\u0083\u00fe\u00f3\u00db@\u00aa1\u00cd\u00d7j\u00d4N\u00be t,X\u0085\b\u0010\u00e8\u00be\u00ea6\u00874}W\b\u00eeC\u007f\nE(\u00dd|\u00d8'\u00e2\t\u00a7d\u008b\u001d7 \u00df\u0096\u00a3r\u00d5r?\u00dc;t\u0001\u00af?%\u0017\u000f\u00abL`\u00d0)\u00c7\u00bd\u00c9b\n\u0087M\u00d7\u0007d\u00a1(\u00f7\u00d9\u00b9\u00dd\u00e9\u008b\u00d6\u001b[R\u009f\u009e\u0017#bSWn\u00e4\u001b\u00bc\u00b6\u00d6\u00b6\u00c3\u0017<Y\u00a9\u001c\u0085\u00b1\u00b8\u009c\u001ag\u00cd\u0091)G\u0018\u0013x\u00da\u00d8#\u0004\u00d8\u00edH\u00e5S\u009a\u0013\u00dc\u00fd\u008a}\u000f\u00de\u00e0\u0090q\u009f\u00b2 \u0090\u008b\u00ffc\u0016\u0098\u00c4?\u0018\u00d1d\u008d\u0012@\u0012j\u00f8\u00aa\u00c6A\u00ac\u0097d\u00fe*\u00db-k\u008a\u0080\u00b0\u008b(\u009c\u00f1\u00c5\u0016J<[\u009a\u0014\u0010\u00c2\u000bG\u0089\u00a62iW&\u00fa\u000f\u00f5\u0081\u0098\u00b3\u00fd\u00c9\u00fd\u00cf\u00c7\u00ff\u00b1\u00b3\u009e=\u0012x>y\u00fc \u00efV\u0083\u008b\u009f\u001d\u00ab\u00bc\u00ff\u00e9u\u008fC-\u0019\u0005\\_8\u00ddS\u007f^-*\u00faK\u00c3\u0016\u00a06\u001e \u0000kJ\u0015W\u0095\u00c0=\u000b\u0084\u00ab,.\u00c0\u0087\u00a04\u00d9Qw~\u009e\r\u00a3.\u00e6@\u00c2\u0014\u00b6\u00c1\u00d68\u0000\u008d<l\u00df5PP%\u0096G\u001be\u00bf\u0097\u00b9\u00b7\u00d0m\u00af\u00f9+Skb\u00d9\u0010x\u00a2+T\u0010\u00c3v\u00fc\u00ce\u00bfvt\u00ce\u00c7\u0091\u00ccv\u000b\u00c2\u0016:o\u00a2VxL\u00f6B\u00a6\u0018\u00ae\u0096T\u00f4\u00c2\u00ed\u00eaZ\u001a\u009e\u0004\u0081W\u00b0\u0004\u00deH\u00fd\u00e5i$v\\u\u0018$\u00f6Gx\u0087\u00dc\u00cdhY\u0010\u0016H\u0088\u00f7]\u00f0\u0002->\nG\u009f\u00b0\n \u00e2R\u008c\u00beR\u00fbW\u009d<I\u00b3\u000f\u0098\fI\u009a\u00ea\u00c8c\u00ab\u00cf\u00d2([\u00ac\u00b0[\u00a5\u0086\u009bH\u00e2 B\u00deb^\u00df\u00e3\u0084t\u00b4\u0095\u00ecG\u00d8\u00f4\u00eaPkLK4w\u00b3k\u00f7\u00ef\u0017\u00bd\u00f9i\u00baQ\u00b2(C\u00ef#j\u00de\u0006'KQ\u008c\u00ce\u00c8W\u00da\u00ae\u00e3\u00ed\u0016\u00f8\u009d\u0083\u009d\u001c\u00beG\u00f73#$\u00bc\u008e\u00b2y\u00ec*[h\u00a6tW(\u0016P\u009ba^L(<\u00fc\u00a1\u00f8\u00b3\u0013~/\u00b4\u00c9^\u0014\u00c7\u00b7\u000b#\u00f3}\u00dec\u00cfS\u0004\u0091\u00cd\u008e\u0000-?(_\u00c5\u009b \u00ad\u009a\u00a6\u001d\u00daV\u00bd\u0096,G\u00a5\u00874cA\r,\u00fa\u00d66<\u00f4\u00ad\\y\u0087(SBt\u00e1\u00d6".length();
                        var16_7 = 40;
                        var15_8 = -1;
lbl21:
                        // 2 sources

                        while (true) {
                            v3 = ++var15_8;
                            v4 = var17_5.substring(v3, v3 + var16_7);
                            v5 = -1;
                            break block18;
                            break;
                        }
lbl26:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = nf.cur(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            var17_5 = "\u0016F\u00dc\u00c5\u00ab\u009eE?\r\u00b3\u00b1\u0001\u00e0\u00df\u00c9\u00e3\u0096\u008a\u0084=\u00fe)\u00daJ\u001f\u00bbFv5#(3P\u00b8\u009e\u00b0U\u00cf\u0007\u009f\u0018\u0081-|\u00c5\bgJe\u00ae[q\u00de\u00fcl\u00e2\u00d7\u008aEaos\u00c1Rg";
                            var19_6 = "\u0016F\u00dc\u00c5\u00ab\u009eE?\r\u00b3\u00b1\u0001\u00e0\u00df\u00c9\u00e3\u0096\u008a\u0084=\u00fe)\u00daJ\u001f\u00bbFv5#(3P\u00b8\u009e\u00b0U\u00cf\u0007\u009f\u0018\u0081-|\u00c5\bgJe\u00ae[q\u00de\u00fcl\u00e2\u00d7\u008aEaos\u00c1Rg".length();
                            var16_7 = 40;
                            var15_8 = -1;
lbl35:
                            // 2 sources

                            while (true) {
                                v6 = ++var15_8;
                                v4 = var17_5.substring(v6, v6 + var16_7);
                                v5 = 0;
                                break block18;
                                break;
                            }
                            break;
                        }
lbl40:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = nf.cur(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            break block19;
                            break;
                        }
                    }
                    var21_9 = var13_1.doFinal(v4.getBytes("ISO-8859-1"));
                    switch (v5) {
                        default: {
                            ** continue;
                        }
                        ** case 0:
lbl52:
                        // 1 sources

                        ** continue;
                    }
                }
                nf.QVzDB = var20_3;
                nf.DFnfj = new String[26];
                nf.tdXcS = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v7 = SecretKeyFactory.getInstance("DES");
                v8 = new byte[8];
                v9 = v8;
                v8[0] = (byte)(var11 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v9 = v9;
                    v9[var1_11] = (byte)(var11 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[8];
                var3_13 = 0;
                var4_14 = "l\u009b\u0081\u00cb\u00e78\u00ad\u00cd\u00b5_\u00c0\u00cc\u00e2\u00ac\u00ed\u00e5 h\u0083\u00d9\u00f6\u001199\u0095\u00bf\u00f4\u001da*h}\u00acD\u00bd\u00ed\u001dN\u0096\u00a6W\u00e1l\u00f2C?\"Z";
                var5_15 = "l\u009b\u0081\u00cb\u00e78\u00ad\u00cd\u00b5_\u00c0\u00cc\u00e2\u00ac\u00ed\u00e5 h\u0083\u00d9\u00f6\u001199\u0095\u00bf\u00f4\u001da*h}\u00acD\u00bd\u00ed\u001dN\u0096\u00a6W\u00e1l\u00f2C?\"Z".length();
                var2_16 = 0;
                while (true) {
                    var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                    v10 = var6_12;
                    v11 = var3_13++;
                    v12 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                    v13 = -1;
                    break block20;
                    break;
                }
lbl79:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "F\u00a3\no\u00a9(\u00baLl^G!\u00c2B\u0001\u00a9";
                    var5_15 = "F\u00a3\no\u00a9(\u00baLl^G!\u00c2B\u0001\u00a9".length();
                    var2_16 = 0;
                    while (true) {
                        var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                        v10 = var6_12;
                        v11 = var3_13++;
                        v12 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                        v13 = 0;
                        break block20;
                        break;
                    }
                    break;
                }
lbl92:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    break block21;
                    break;
                }
            }
            var8_18 = v12;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            v14 = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
            switch (v13) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl105:
                // 1 sources

                ** continue;
            }
        }
        nf.yZmOu = var6_12;
        nf.ktNLe = new Integer[8];
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public boolean equals(Object object) {
        List<ng> list;
        List<ng> list2;
        int n2;
        block95: {
            List<ng> list3;
            block96: {
                nf nf2;
                block94: {
                    ne ne2;
                    ne ne3;
                    block92: {
                        ne ne4;
                        block93: {
                            block91: {
                                List<nd> list4;
                                List<nd> list5;
                                block89: {
                                    List<nd> list6;
                                    block90: {
                                        block88: {
                                            nd nd2;
                                            nd nd3;
                                            block86: {
                                                nd nd4;
                                                block87: {
                                                    block85: {
                                                        nc nc2;
                                                        nc nc3;
                                                        block83: {
                                                            nc nc4;
                                                            block84: {
                                                                block82: {
                                                                    String string;
                                                                    String string2;
                                                                    block80: {
                                                                        String string3;
                                                                        block81: {
                                                                            nf nf3;
                                                                            block79: {
                                                                                boolean bl2;
                                                                                block77: {
                                                                                    block78: {
                                                                                        block75: {
                                                                                            block76: {
                                                                                                Object object2;
                                                                                                block73: {
                                                                                                    block74: {
                                                                                                        block71: {
                                                                                                            block72: {
                                                                                                                long l2 = swToy ^ 0x1144BDDD6EB7L;
                                                                                                                n2 = nf.cuo();
                                                                                                                try {
                                                                                                                    try {
                                                                                                                        object2 = object;
                                                                                                                        if (n2 == 0) break block71;
                                                                                                                        if (object2 != this) break block72;
                                                                                                                        return true;
                                                                                                                    }
                                                                                                                    catch (MatchException matchException) {
                                                                                                                        throw nf.cuq(matchException);
                                                                                                                    }
                                                                                                                }
                                                                                                                catch (MatchException matchException) {
                                                                                                                    throw nf.cuq(matchException);
                                                                                                                }
                                                                                                            }
                                                                                                            object2 = object;
                                                                                                        }
                                                                                                        try {
                                                                                                            try {
                                                                                                                if (n2 == 0) break block73;
                                                                                                                if (object2 instanceof nf) break block74;
                                                                                                                return false;
                                                                                                            }
                                                                                                            catch (MatchException matchException) {
                                                                                                                throw nf.cuq(matchException);
                                                                                                            }
                                                                                                        }
                                                                                                        catch (MatchException matchException) {
                                                                                                            throw nf.cuq(matchException);
                                                                                                        }
                                                                                                    }
                                                                                                    object2 = object;
                                                                                                }
                                                                                                nf2 = (nf)object2;
                                                                                                try {
                                                                                                    try {
                                                                                                        bl2 = nf2.cum(this);
                                                                                                        if (n2 == 0) break block75;
                                                                                                        if (bl2) break block76;
                                                                                                        return false;
                                                                                                    }
                                                                                                    catch (MatchException matchException) {
                                                                                                        throw nf.cuq(matchException);
                                                                                                    }
                                                                                                }
                                                                                                catch (MatchException matchException) {
                                                                                                    throw nf.cuq(matchException);
                                                                                                }
                                                                                            }
                                                                                            long l3 = this.ctZ() - nf2.ctZ();
                                                                                            bl2 = l3 == 0L ? 0 : (l3 < 0L ? -1 : 1);
                                                                                        }
                                                                                        try {
                                                                                            try {
                                                                                                if (n2 == 0) break block77;
                                                                                                if (!bl2) break block78;
                                                                                                return false;
                                                                                            }
                                                                                            catch (MatchException matchException) {
                                                                                                throw nf.cuq(matchException);
                                                                                            }
                                                                                        }
                                                                                        catch (MatchException matchException) {
                                                                                            throw nf.cuq(matchException);
                                                                                        }
                                                                                    }
                                                                                    try {
                                                                                        nf3 = this;
                                                                                        if (n2 == 0) break block79;
                                                                                        long l4 = nf3.cua() - nf2.cua();
                                                                                        bl2 = l4 == 0L ? 0 : (l4 < 0L ? -1 : 1);
                                                                                    }
                                                                                    catch (MatchException matchException) {
                                                                                        throw nf.cuq(matchException);
                                                                                    }
                                                                                }
                                                                                try {
                                                                                    if (bl2) {
                                                                                        return false;
                                                                                    }
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw nf.cuq(matchException);
                                                                                }
                                                                                nf3 = this;
                                                                            }
                                                                            string3 = nf3.ctT();
                                                                            string2 = nf2.ctT();
                                                                            try {
                                                                                try {
                                                                                    try {
                                                                                        string = string3;
                                                                                        if (n2 == 0) break block80;
                                                                                        if (string != null) break block81;
                                                                                    }
                                                                                    catch (MatchException matchException) {
                                                                                        throw nf.cuq(matchException);
                                                                                    }
                                                                                    if (string2 == null) break block82;
                                                                                    return false;
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw nf.cuq(matchException);
                                                                                }
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw nf.cuq(matchException);
                                                                            }
                                                                        }
                                                                        string = string3;
                                                                    }
                                                                    try {
                                                                        boolean bl3 = string.equals(string2);
                                                                        if (n2 == 0) return bl3;
                                                                        if (bl3) break block82;
                                                                        return false;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw nf.cuq(matchException);
                                                                    }
                                                                }
                                                                nc4 = this.ctU();
                                                                nc3 = nf2.ctU();
                                                                try {
                                                                    try {
                                                                        try {
                                                                            nc2 = nc4;
                                                                            if (n2 == 0) break block83;
                                                                            if (nc2 != null) break block84;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw nf.cuq(matchException);
                                                                        }
                                                                        if (nc3 == null) break block85;
                                                                        return false;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw nf.cuq(matchException);
                                                                    }
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw nf.cuq(matchException);
                                                                }
                                                            }
                                                            nc2 = nc4;
                                                        }
                                                        try {
                                                            boolean bl4 = ((Object)nc2).equals(nc3);
                                                            if (n2 == 0) return bl4;
                                                            if (bl4) break block85;
                                                            return false;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw nf.cuq(matchException);
                                                        }
                                                    }
                                                    nd4 = this.ctV();
                                                    nd3 = nf2.ctV();
                                                    try {
                                                        try {
                                                            try {
                                                                nd2 = nd4;
                                                                if (n2 == 0) break block86;
                                                                if (nd2 != null) break block87;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw nf.cuq(matchException);
                                                            }
                                                            if (nd3 == null) break block88;
                                                            return false;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw nf.cuq(matchException);
                                                        }
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw nf.cuq(matchException);
                                                    }
                                                }
                                                nd2 = nd4;
                                            }
                                            try {
                                                boolean bl5 = ((Object)nd2).equals(nd3);
                                                if (n2 == 0) return bl5;
                                                if (bl5) break block88;
                                                return false;
                                            }
                                            catch (MatchException matchException) {
                                                throw nf.cuq(matchException);
                                            }
                                        }
                                        list6 = this.ctW();
                                        list5 = nf2.ctW();
                                        try {
                                            try {
                                                try {
                                                    list4 = list6;
                                                    if (n2 == 0) break block89;
                                                    if (list4 != null) break block90;
                                                }
                                                catch (MatchException matchException) {
                                                    throw nf.cuq(matchException);
                                                }
                                                if (list5 == null) break block91;
                                                return false;
                                            }
                                            catch (MatchException matchException) {
                                                throw nf.cuq(matchException);
                                            }
                                        }
                                        catch (MatchException matchException) {
                                            throw nf.cuq(matchException);
                                        }
                                    }
                                    list4 = list6;
                                }
                                try {
                                    boolean bl6 = ((Object)list4).equals(list5);
                                    if (n2 == 0) return bl6;
                                    if (bl6) break block91;
                                    return false;
                                }
                                catch (MatchException matchException) {
                                    throw nf.cuq(matchException);
                                }
                            }
                            ne4 = this.ctX();
                            ne3 = nf2.ctX();
                            try {
                                try {
                                    try {
                                        ne2 = ne4;
                                        if (n2 == 0) break block92;
                                        if (ne2 != null) break block93;
                                    }
                                    catch (MatchException matchException) {
                                        throw nf.cuq(matchException);
                                    }
                                    if (ne3 == null) break block94;
                                    return false;
                                }
                                catch (MatchException matchException) {
                                    throw nf.cuq(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw nf.cuq(matchException);
                            }
                        }
                        ne2 = ne4;
                    }
                    try {
                        boolean bl7 = ((Object)ne2).equals(ne3);
                        if (n2 == 0) return bl7;
                        if (bl7) break block94;
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw nf.cuq(matchException);
                    }
                }
                list3 = this.ctY();
                list2 = nf2.ctY();
                try {
                    try {
                        try {
                            list = list3;
                            if (n2 == 0) break block95;
                            if (list != null) break block96;
                        }
                        catch (MatchException matchException) {
                            throw nf.cuq(matchException);
                        }
                        if (list2 == null) return true;
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw nf.cuq(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw nf.cuq(matchException);
                }
            }
            list = list3;
        }
        try {
            try {
                boolean bl8 = ((Object)list).equals(list2);
                if (n2 == 0) return bl8;
                if (bl8) return true;
                return false;
            }
            catch (MatchException matchException) {
                throw nf.cuq(matchException);
            }
        }
        catch (MatchException matchException) {
            throw nf.cuq(matchException);
        }
    }

    public String toString() {
        long l2 = swToy ^ 0x103C95005F41L;
        boolean bl2 = this.cub();
        long l3 = this.cua();
        long l4 = this.ctZ();
        String string = String.valueOf(this.ctY());
        String string2 = String.valueOf(this.ctX());
        String string3 = String.valueOf(this.ctW());
        String string4 = String.valueOf(this.ctV());
        String string5 = String.valueOf(this.ctU());
        String string6 = this.ctT();
        boolean bl3 = this.ctS();
        return (String)((Object)nf.cuu("q", (int)6228, (long)(0x11AFD3727124102L ^ l2))) + bl3 + (String)((Object)nf.cuu("q", (int)21972, (long)(0x381E6530E8450C80L ^ l2))) + string6 + (String)((Object)nf.cuu("q", (int)8008, (long)(0x160072E09954C60EL ^ l2))) + string5 + (String)((Object)nf.cuu("q", (int)29730, (long)(0x2F98D6C5C0BB2D73L ^ l2))) + string4 + (String)((Object)nf.cuu("q", (int)10531, (long)(0x4F85E4F1076C706AL ^ l2))) + string3 + (String)((Object)nf.cuu("q", (int)21170, (long)(0x474567AF1B030BEAL ^ l2))) + string2 + (String)((Object)nf.cuu("q", (int)17718, (long)(0x50DCE442D2709C64L ^ l2))) + string + (String)((Object)nf.cuu("q", (int)13809, (long)(0x6AA555DD5D3EECBAL ^ l2))) + l4 + (String)((Object)nf.cuu("q", (int)13141, (long)(0x60210E0E2366A19L ^ l2))) + l3 + (String)((Object)nf.cuu("q", (int)10448, (long)(0x3B58971B326F719FL ^ l2))) + bl2 + ")";
    }

    public int hashCode() {
        int n2;
        Object object;
        int n3;
        int n4;
        int n5;
        block44: {
            List<ng> list;
            block42: {
                List<ng> list2;
                block43: {
                    Object object2;
                    int n6;
                    long l2;
                    block41: {
                        ne ne2;
                        block39: {
                            ne ne3;
                            block40: {
                                Object object3;
                                int n7;
                                block38: {
                                    List<nd> list3;
                                    block36: {
                                        List<nd> list4;
                                        block37: {
                                            Object object4;
                                            int n8;
                                            block35: {
                                                nd nd2;
                                                block33: {
                                                    nd nd3;
                                                    block34: {
                                                        Object object5;
                                                        int n9;
                                                        block32: {
                                                            nc nc2;
                                                            block30: {
                                                                nc nc3;
                                                                block31: {
                                                                    Object object6;
                                                                    int n10;
                                                                    block29: {
                                                                        String string;
                                                                        block27: {
                                                                            String string2;
                                                                            block28: {
                                                                                l2 = swToy ^ 0x5FE417568164L;
                                                                                CallSite callSite = nf.cux("p", (int)6130, (long)(0x7DB2D6846F3C2B8L ^ l2));
                                                                                n5 = 1;
                                                                                long l3 = this.ctZ();
                                                                                n5 = n5 * nf.cux("p", (int)6238, (long)(0x6A18C44615BBCD17L ^ l2)) + (int)(l3 >>> nf.cux("p", (int)18755, (long)(0x5F35D3C384F09C0BL ^ l2)) ^ l3);
                                                                                n4 = nf.cup();
                                                                                long l4 = this.cua();
                                                                                n5 = n5 * nf.cux("p", (int)6238, (long)(0x6A18C44615BBCD17L ^ l2)) + (int)(l4 >>> nf.cux("p", (int)7855, (long)(0x3509943A3D24BE0L ^ l2)) ^ l4);
                                                                                string2 = this.ctT();
                                                                                try {
                                                                                    try {
                                                                                        n10 = n5 * nf.cux("p", (int)6238, (long)(0x6A18C44615BBCD17L ^ l2));
                                                                                        string = string2;
                                                                                        if (n4 != 0) break block27;
                                                                                        if (string != null) break block28;
                                                                                    }
                                                                                    catch (MatchException matchException) {
                                                                                        throw nf.cuq(matchException);
                                                                                    }
                                                                                    object6 = nf.cux("p", (int)10299, (long)(0x66CAF67E014B7D77L ^ l2));
                                                                                    break block29;
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw nf.cuq(matchException);
                                                                                }
                                                                            }
                                                                            string = string2;
                                                                        }
                                                                        object6 = string.hashCode();
                                                                    }
                                                                    n5 = n10 + object6;
                                                                    nc3 = this.ctU();
                                                                    try {
                                                                        try {
                                                                            n9 = n5 * nf.cux("p", (int)6238, (long)(0x6A18C44615BBCD17L ^ l2));
                                                                            nc2 = nc3;
                                                                            if (n4 != 0) break block30;
                                                                            if (nc2 != null) break block31;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw nf.cuq(matchException);
                                                                        }
                                                                        object5 = nf.cux("p", (int)2500, (long)(0x26954C8AC8415C8AL ^ l2));
                                                                        break block32;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw nf.cuq(matchException);
                                                                    }
                                                                }
                                                                nc2 = nc3;
                                                            }
                                                            object5 = ((Object)nc2).hashCode();
                                                        }
                                                        n5 = n9 + object5;
                                                        nd3 = this.ctV();
                                                        try {
                                                            try {
                                                                n8 = n5 * nf.cux("p", (int)6238, (long)(0x6A18C44615BBCD17L ^ l2));
                                                                nd2 = nd3;
                                                                if (n4 != 0) break block33;
                                                                if (nd2 != null) break block34;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw nf.cuq(matchException);
                                                            }
                                                            object4 = nf.cux("p", (int)2500, (long)(0x26954C8AC8415C8AL ^ l2));
                                                            break block35;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw nf.cuq(matchException);
                                                        }
                                                    }
                                                    nd2 = nd3;
                                                }
                                                object4 = ((Object)nd2).hashCode();
                                            }
                                            n5 = n8 + object4;
                                            list4 = this.ctW();
                                            try {
                                                try {
                                                    n7 = n5 * nf.cux("p", (int)6238, (long)(0x6A18C44615BBCD17L ^ l2));
                                                    list3 = list4;
                                                    if (n4 != 0) break block36;
                                                    if (list3 != null) break block37;
                                                }
                                                catch (MatchException matchException) {
                                                    throw nf.cuq(matchException);
                                                }
                                                object3 = nf.cux("p", (int)2500, (long)(0x26954C8AC8415C8AL ^ l2));
                                                break block38;
                                            }
                                            catch (MatchException matchException) {
                                                throw nf.cuq(matchException);
                                            }
                                        }
                                        list3 = list4;
                                    }
                                    object3 = ((Object)list3).hashCode();
                                }
                                n5 = n7 + object3;
                                ne3 = this.ctX();
                                try {
                                    try {
                                        n6 = n5 * nf.cux("p", (int)6238, (long)(0x6A18C44615BBCD17L ^ l2));
                                        ne2 = ne3;
                                        if (n4 != 0) break block39;
                                        if (ne2 != null) break block40;
                                    }
                                    catch (MatchException matchException) {
                                        throw nf.cuq(matchException);
                                    }
                                    object2 = nf.cux("p", (int)2500, (long)(0x26954C8AC8415C8AL ^ l2));
                                    break block41;
                                }
                                catch (MatchException matchException) {
                                    throw nf.cuq(matchException);
                                }
                            }
                            ne2 = ne3;
                        }
                        object2 = ((Object)ne2).hashCode();
                    }
                    n5 = n6 + object2;
                    list2 = this.ctY();
                    try {
                        try {
                            n3 = n5 * nf.cux("p", (int)6238, (long)(0x6A18C44615BBCD17L ^ l2));
                            list = list2;
                            if (n4 != 0) break block42;
                            if (list != null) break block43;
                        }
                        catch (MatchException matchException) {
                            throw nf.cuq(matchException);
                        }
                        object = nf.cux("p", (int)2500, (long)(0x26954C8AC8415C8AL ^ l2));
                        break block44;
                    }
                    catch (MatchException matchException) {
                        throw nf.cuq(matchException);
                    }
                }
                list = list2;
            }
            object = ((Object)list).hashCode();
        }
        n5 = n3 + object;
        try {
            n2 = n5;
            if (n4 != 0) {
                iS.bwK("SHxqIc");
            }
        }
        catch (MatchException matchException) {
            throw nf.cuq(matchException);
        }
        return n2;
    }

    private static String cur(byte[] byArray) {
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

    @Override
    public void fromJson(JsonObject jsonObject) {
        long l2;
        int n2;
        block18: {
            Long l3;
            block16: {
                Long l4;
                block17: {
                    long l5;
                    long l6;
                    block15: {
                        Long l7;
                        block13: {
                            Long l8;
                            block14: {
                                ArrayList arrayList;
                                l6 = swToy ^ 0x24B8C87268DL;
                                this.BDwrc = this.readString(jsonObject, (String)((Object)nf.cuu("q", (int)25153, (long)(0x401DFBD9F651C2D1L ^ l6))));
                                this.RVkIg = this.readObject(jsonObject, (String)((Object)nf.cuu("q", (int)20553, (long)(0x200AB85D2154F0DEL ^ l6))), nc::new);
                                this.DUmbm = this.readObject(jsonObject, (String)((Object)nf.cuu("q", (int)18796, (long)(0x498F4574AF16E9EEL ^ l6))), nd::new);
                                this.SkOYI = this.readList(jsonObject, (String)((Object)nf.cuu("q", (int)15399, (long)(0x79A2969B9CDB1CACL ^ l6))), nd::new);
                                this.HJcWp = this.readObject(jsonObject, (String)((Object)nf.cuu("q", (int)31348, (long)(0x3DC95D77E9B5AE1L ^ l6))), ne::new);
                                ArrayList arrayList2 = this.readList(jsonObject, (String)((Object)nf.cuu("q", (int)19779, (long)(0x20E3C813CA6F6DC5L ^ l6))), ng::new);
                                n2 = nf.cup();
                                try {
                                    nf nf2 = this;
                                    arrayList = arrayList2 == null ? new ArrayList() : arrayList2;
                                }
                                catch (MatchException matchException) {
                                    throw nf.cuq(matchException);
                                }
                                nf2.CrfVL = arrayList;
                                l8 = this.readLong(jsonObject, (String)((Object)nf.cuu("q", (int)15043, (long)(0x4C91682DE3139A5CL ^ l6))));
                                try {
                                    try {
                                        nf nf3 = this;
                                        l7 = l8;
                                        if (n2 != 0) break block13;
                                        if (l7 != null) break block14;
                                    }
                                    catch (MatchException matchException) {
                                        throw nf.cuq(matchException);
                                    }
                                    l5 = 0L;
                                    break block15;
                                }
                                catch (MatchException matchException) {
                                    throw nf.cuq(matchException);
                                }
                            }
                            l7 = l8;
                        }
                        l5 = l7;
                    }
                    nf3.KTPlM = l5;
                    l4 = this.readLong(jsonObject, (String)((Object)nf.cuu("q", (int)31808, (long)(0x7047EEB2E2B2DCC1L ^ l6))));
                    try {
                        try {
                            nf nf4 = this;
                            l3 = l4;
                            if (n2 != 0) break block16;
                            if (l3 != null) break block17;
                        }
                        catch (MatchException matchException) {
                            throw nf.cuq(matchException);
                        }
                        l2 = 0L;
                        break block18;
                    }
                    catch (MatchException matchException) {
                        throw nf.cuq(matchException);
                    }
                }
                l3 = l4;
            }
            l2 = l3;
        }
        try {
            nf4.oeMul = l2;
            this.lhkSE = true;
            this.vRKRG = false;
            if (iS.bwL() == null) {
                nf.cun(++n2);
            }
        }
        catch (MatchException matchException) {
            throw nf.cuq(matchException);
        }
    }

    @Override
    public JsonObject toJson() {
        nf nf2;
        JsonObject jsonObject;
        long l2;
        block31: {
            block32: {
                int n2;
                block29: {
                    block30: {
                        block27: {
                            block28: {
                                block25: {
                                    block26: {
                                        block23: {
                                            block24: {
                                                l2 = swToy ^ 0x1C40C8C7D806L;
                                                jsonObject = new JsonObject();
                                                n2 = nf.cup();
                                                try {
                                                    try {
                                                        nf2 = this;
                                                        if (n2 != 0) break block23;
                                                        if (nf2.BDwrc == null) break block24;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw nf.cuq(matchException);
                                                    }
                                                    jsonObject.addProperty((String)((Object)nf.cuu("q", (int)17697, (long)(0xCF800CF85881B3CL ^ l2))), this.BDwrc);
                                                }
                                                catch (MatchException matchException) {
                                                    throw nf.cuq(matchException);
                                                }
                                            }
                                            nf2 = this;
                                        }
                                        try {
                                            try {
                                                if (n2 != 0) break block25;
                                                if (nf2.RVkIg == null) break block26;
                                            }
                                            catch (MatchException matchException) {
                                                throw nf.cuq(matchException);
                                            }
                                            jsonObject.add((String)((Object)nf.cuu("q", (int)1985, (long)(0x4F0CFFB125DF59DBL ^ l2))), (JsonElement)this.RVkIg.toJson());
                                        }
                                        catch (MatchException matchException) {
                                            throw nf.cuq(matchException);
                                        }
                                    }
                                    nf2 = this;
                                }
                                try {
                                    try {
                                        if (n2 != 0) break block27;
                                        if (nf2.DUmbm == null) break block28;
                                    }
                                    catch (MatchException matchException) {
                                        throw nf.cuq(matchException);
                                    }
                                    jsonObject.add((String)((Object)nf.cuu("q", (int)4213, (long)(0x4A64E00961D44E7AL ^ l2))), (JsonElement)this.DUmbm.toJson());
                                }
                                catch (MatchException matchException) {
                                    throw nf.cuq(matchException);
                                }
                            }
                            nf2 = this;
                        }
                        try {
                            try {
                                if (n2 != 0) break block29;
                                if (nf2.SkOYI == null) break block30;
                            }
                            catch (MatchException matchException) {
                                throw nf.cuq(matchException);
                            }
                            jsonObject.add((String)((Object)nf.cuu("q", (int)24198, (long)(0x65AA4EA972B50094L ^ l2))), (JsonElement)this.writeList(this.SkOYI));
                        }
                        catch (MatchException matchException) {
                            throw nf.cuq(matchException);
                        }
                    }
                    nf2 = this;
                }
                try {
                    try {
                        if (n2 != 0) break block31;
                        if (nf2.HJcWp == null) break block32;
                    }
                    catch (MatchException matchException) {
                        throw nf.cuq(matchException);
                    }
                    jsonObject.add((String)((Object)nf.cuu("q", (int)22623, (long)(0x69DBF54B26FE8646L ^ l2))), (JsonElement)this.HJcWp.toJson());
                }
                catch (MatchException matchException) {
                    throw nf.cuq(matchException);
                }
            }
            nf2 = this;
        }
        try {
            if (nf2.CrfVL != null) {
                jsonObject.add((String)((Object)nf.cuu("q", (int)19613, (long)(0x6600E7A6B26C1285L ^ l2))), (JsonElement)this.writeList(this.CrfVL));
            }
        }
        catch (MatchException matchException) {
            throw nf.cuq(matchException);
        }
        jsonObject.addProperty((String)((Object)nf.cuu("q", (int)11990, (long)(0x7149690A3844F0C1L ^ l2))), (Number)this.KTPlM);
        jsonObject.addProperty((String)((Object)nf.cuu("q", (int)31102, (long)(0x49B15333E8FEA76EL ^ l2))), (Number)this.oeMul);
        return jsonObject;
    }

    public static int cuo() {
        return fUtsn;
    }

    public static int cup() {
        int n2 = nf.cuo();
        try {
            if (n2 == 0) {
                return 18;
            }
        }
        catch (MatchException matchException) {
            throw nf.cuq(matchException);
        }
        return 0;
    }

    public boolean ctI(int n2) {
        boolean bl2;
        block14: {
            boolean bl3;
            block15: {
                boolean bl4;
                int n3;
                block12: {
                    block13: {
                        long l2 = swToy ^ 0x7758970621D3L;
                        n3 = nf.cup();
                        try {
                            try {
                                bl4 = this.ctG();
                                if (n3 != 0) break block12;
                                if (bl4) break block13;
                            }
                            catch (MatchException matchException) {
                                throw nf.cuq(matchException);
                            }
                            return false;
                        }
                        catch (MatchException matchException) {
                            throw nf.cuq(matchException);
                        }
                    }
                    bl4 = this.HJcWp.cts(n2);
                }
                bl3 = bl4;
                try {
                    try {
                        try {
                            try {
                                bl2 = bl3;
                                if (n3 != 0) break block14;
                                if (!bl2) break block15;
                            }
                            catch (MatchException matchException) {
                                throw nf.cuq(matchException);
                            }
                            bl2 = this.lhkSE;
                            if (n3 != 0) break block14;
                        }
                        catch (MatchException matchException) {
                            throw nf.cuq(matchException);
                        }
                        if (!bl2) break block15;
                    }
                    catch (MatchException matchException) {
                        throw nf.cuq(matchException);
                    }
                    this.lhkSE = false;
                    this.vRKRG = true;
                }
                catch (MatchException matchException) {
                    throw nf.cuq(matchException);
                }
            }
            bl2 = bl3;
        }
        return bl2;
    }

    private boolean ctP() {
        int n2;
        block18: {
            block15: {
                block19: {
                    nd nd2;
                    int n3;
                    block16: {
                        block14: {
                            long l2 = swToy ^ 0x20966DEAB2C5L;
                            n3 = nf.cuo();
                            try {
                                try {
                                    nd2 = this.DUmbm;
                                    if (n3 == 0) break block14;
                                    if (nd2 == null) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw nf.cuq(matchException);
                                }
                                nd2 = this.DUmbm;
                            }
                            catch (MatchException matchException) {
                                throw nf.cuq(matchException);
                            }
                        }
                        try {
                            block17: {
                                try {
                                    try {
                                        try {
                                            if (n3 == 0) break block16;
                                            if (nd2.csZ() == null) break block17;
                                        }
                                        catch (MatchException matchException) {
                                            throw nf.cuq(matchException);
                                        }
                                        n2 = this.DUmbm.csZ().isBlank() ? 1 : 0;
                                        if (n3 == 0) break block18;
                                    }
                                    catch (MatchException matchException) {
                                        throw nf.cuq(matchException);
                                    }
                                    if (n2 == 0) break block19;
                                }
                                catch (MatchException matchException) {
                                    throw nf.cuq(matchException);
                                }
                            }
                            nd2 = this.DUmbm;
                        }
                        catch (MatchException matchException) {
                            throw nf.cuq(matchException);
                        }
                    }
                    try {
                        n2 = nd2.ctb();
                        if (n3 == 0) break block18;
                        if (n2 <= 0) break block15;
                    }
                    catch (MatchException matchException) {
                        throw nf.cuq(matchException);
                    }
                }
                n2 = 1;
                break block18;
            }
            n2 = 0;
        }
        return n2 != 0;
    }

    public static void cun(int n2) {
        fUtsn = n2;
    }

    private static MatchException cuq(MatchException matchException) {
        return matchException;
    }

    public ne ctX() {
        return this.HJcWp;
    }

    public long cua() {
        return this.oeMul;
    }

    private static CallSite cux(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/nf" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static CallSite cuu(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/nf" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public boolean ctL(ItemStack itemStack) {
        boolean bl2;
        block48: {
            nf nf2;
            int n2;
            block47: {
                boolean bl3;
                block46: {
                    block44: {
                        block45: {
                            block42: {
                                block43: {
                                    block40: {
                                        block41: {
                                            block38: {
                                                block39: {
                                                    long l2 = swToy ^ 0x33F739266785L;
                                                    n2 = nf.cup();
                                                    try {
                                                        try {
                                                            nf2 = this;
                                                            if (n2 != 0) break block38;
                                                            if (nf2.oeMul > 0L) break block39;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw nf.cuq(matchException);
                                                        }
                                                        return false;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw nf.cuq(matchException);
                                                    }
                                                }
                                                nf2 = this;
                                            }
                                            try {
                                                try {
                                                    try {
                                                        try {
                                                            if (n2 != 0) break block40;
                                                            if (nf2.BDwrc == null) break block41;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw nf.cuq(matchException);
                                                        }
                                                        nf2 = this;
                                                        if (n2 != 0) break block40;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw nf.cuq(matchException);
                                                    }
                                                    if (nf2.BDwrc.equals(itemStack.getItem().getTranslationKey())) break block41;
                                                }
                                                catch (MatchException matchException) {
                                                    throw nf.cuq(matchException);
                                                }
                                                return false;
                                            }
                                            catch (MatchException matchException) {
                                                throw nf.cuq(matchException);
                                            }
                                        }
                                        nf2 = this;
                                    }
                                    try {
                                        try {
                                            try {
                                                try {
                                                    if (n2 != 0) break block42;
                                                    if (nf2.RVkIg == null) break block43;
                                                }
                                                catch (MatchException matchException) {
                                                    throw nf.cuq(matchException);
                                                }
                                                nf2 = this;
                                                if (n2 != 0) break block42;
                                            }
                                            catch (MatchException matchException) {
                                                throw nf.cuq(matchException);
                                            }
                                            if (nf2.RVkIg.matches(itemStack)) break block43;
                                        }
                                        catch (MatchException matchException) {
                                            throw nf.cuq(matchException);
                                        }
                                        return false;
                                    }
                                    catch (MatchException matchException) {
                                        throw nf.cuq(matchException);
                                    }
                                }
                                nf2 = this;
                            }
                            try {
                                try {
                                    try {
                                        try {
                                            if (n2 != 0) break block44;
                                            if (nf2.DUmbm == null) break block45;
                                        }
                                        catch (MatchException matchException) {
                                            throw nf.cuq(matchException);
                                        }
                                        bl3 = this.DUmbm.matches(itemStack);
                                        if (n2 != 0) break block46;
                                    }
                                    catch (MatchException matchException) {
                                        throw nf.cuq(matchException);
                                    }
                                    if (bl3) break block45;
                                }
                                catch (MatchException matchException) {
                                    throw nf.cuq(matchException);
                                }
                                return false;
                            }
                            catch (MatchException matchException) {
                                throw nf.cuq(matchException);
                            }
                        }
                        nf2 = this;
                    }
                    try {
                        if (n2 != 0) break block47;
                        bl3 = nf2.ctN(itemStack);
                    }
                    catch (MatchException matchException) {
                        throw nf.cuq(matchException);
                    }
                }
                try {
                    if (!bl3) {
                        return false;
                    }
                }
                catch (MatchException matchException) {
                    throw nf.cuq(matchException);
                }
                nf2 = this;
            }
            for (ng ng2 : nf2.CrfVL) {
                block50: {
                    boolean bl4;
                    block49: {
                        try {
                            try {
                                bl2 = ng2.matches(itemStack);
                                if (n2 != 0) break block48;
                                if (n2 != 0) break block49;
                            }
                            catch (MatchException matchException) {
                                throw nf.cuq(matchException);
                            }
                            if (bl2) break block50;
                        }
                        catch (MatchException matchException) {
                            throw nf.cuq(matchException);
                        }
                        bl4 = false;
                    }
                    return bl4;
                }
                if (n2 == 0) continue;
            }
            bl2 = true;
        }
        return bl2;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private int ctQ() {
        int n2;
        int n3;
        block19: {
            block20: {
                List<ng> list;
                block18: {
                    long l2 = swToy ^ 0x4AA7CC287925L;
                    n3 = nf.cup();
                    try {
                        try {
                            list = this.CrfVL;
                            if (n3 != 0) break block18;
                            if (list == null) return 0;
                        }
                        catch (MatchException matchException) {
                            throw nf.cuq(matchException);
                        }
                        list = this.CrfVL;
                    }
                    catch (MatchException matchException) {
                        throw nf.cuq(matchException);
                    }
                }
                try {
                    try {
                        n2 = list.isEmpty();
                        if (n3 != 0) break block19;
                        if (n2 == 0) break block20;
                        return 0;
                    }
                    catch (MatchException matchException) {
                        throw nf.cuq(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw nf.cuq(matchException);
                }
            }
            n2 = 0;
        }
        int n4 = n2;
        for (ng ng2 : this.CrfVL) {
            block24: {
                String string;
                block23: {
                    ng ng3;
                    block21: {
                        block22: {
                            try {
                                try {
                                    ng3 = ng2;
                                    if (n3 != 0) break block21;
                                    if (ng3 != null) break block22;
                                }
                                catch (MatchException matchException) {
                                    throw nf.cuq(matchException);
                                }
                                if (n3 == 0) continue;
                            }
                            catch (MatchException matchException) {
                                throw nf.cuq(matchException);
                            }
                        }
                        ng3 = ng2;
                    }
                    String string2 = ng3.cuA();
                    try {
                        string = string2;
                        if (n3 != 0) break block23;
                        if (string == null) break block24;
                    }
                    catch (MatchException matchException) {
                        throw nf.cuq(matchException);
                    }
                    string = string2;
                }
                try {
                    if (!string.isBlank()) {
                        ++n4;
                    }
                }
                catch (MatchException matchException) {
                    throw nf.cuq(matchException);
                }
            }
            if (n3 == 0) continue;
        }
        return n4;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private int ctR() {
        int n2;
        int n3;
        block19: {
            block20: {
                List<nd> list;
                block18: {
                    long l2 = swToy ^ 0x6632B4E65892L;
                    n3 = nf.cup();
                    try {
                        try {
                            list = this.SkOYI;
                            if (n3 != 0) break block18;
                            if (list == null) return 0;
                        }
                        catch (MatchException matchException) {
                            throw nf.cuq(matchException);
                        }
                        list = this.SkOYI;
                    }
                    catch (MatchException matchException) {
                        throw nf.cuq(matchException);
                    }
                }
                try {
                    try {
                        n2 = list.isEmpty();
                        if (n3 != 0) break block19;
                        if (n2 == 0) break block20;
                        return 0;
                    }
                    catch (MatchException matchException) {
                        throw nf.cuq(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw nf.cuq(matchException);
                }
            }
            n2 = 0;
        }
        int n4 = n2;
        for (nd nd2 : this.SkOYI) {
            block24: {
                String string;
                block23: {
                    nd nd3;
                    block21: {
                        block22: {
                            try {
                                try {
                                    nd3 = nd2;
                                    if (n3 != 0) break block21;
                                    if (nd3 != null) break block22;
                                }
                                catch (MatchException matchException) {
                                    throw nf.cuq(matchException);
                                }
                                if (n3 == 0) continue;
                            }
                            catch (MatchException matchException) {
                                throw nf.cuq(matchException);
                            }
                        }
                        nd3 = nd2;
                    }
                    String string2 = nd3.csZ();
                    try {
                        string = string2;
                        if (n3 != 0) break block23;
                        if (string == null) break block24;
                    }
                    catch (MatchException matchException) {
                        throw nf.cuq(matchException);
                    }
                    string = string2;
                }
                try {
                    if (!string.isBlank()) {
                        ++n4;
                    }
                }
                catch (MatchException matchException) {
                    throw nf.cuq(matchException);
                }
            }
            if (n3 == 0) continue;
        }
        return n4;
    }

    public boolean ctH() {
        boolean bl2;
        block6: {
            block8: {
                block7: {
                    long l2 = swToy ^ 0x64F14951F584L;
                    int n2 = nf.cup();
                    try {
                        try {
                            try {
                                bl2 = this.ctG();
                                if (n2 != 0) break block6;
                                if (!bl2) break block7;
                            }
                            catch (MatchException matchException) {
                                throw nf.cuq(matchException);
                            }
                            bl2 = this.HJcWp.ctr();
                            if (n2 != 0) break block6;
                        }
                        catch (MatchException matchException) {
                            throw nf.cuq(matchException);
                        }
                        if (bl2) break block8;
                    }
                    catch (MatchException matchException) {
                        throw nf.cuq(matchException);
                    }
                }
                bl2 = true;
                break block6;
            }
            bl2 = false;
        }
        return bl2;
    }

    public nc ctU() {
        return this.RVkIg;
    }

    public nd ctV() {
        return this.DUmbm;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private boolean ctN(ItemStack itemStack) {
        List<nd> list;
        int n2;
        block22: {
            block23: {
                block21: {
                    long l2 = swToy ^ 0x66ED3F339A93L;
                    n2 = nf.cup();
                    try {
                        try {
                            list = this.SkOYI;
                            if (n2 != 0) break block21;
                            if (list == null) return true;
                        }
                        catch (MatchException matchException) {
                            throw nf.cuq(matchException);
                        }
                        list = this.SkOYI;
                    }
                    catch (MatchException matchException) {
                        throw nf.cuq(matchException);
                    }
                }
                try {
                    try {
                        if (n2 != 0) break block22;
                        if (!list.isEmpty()) break block23;
                        return true;
                    }
                    catch (MatchException matchException) {
                        throw nf.cuq(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw nf.cuq(matchException);
                }
            }
            list = this.SkOYI;
        }
        Iterator<nd> iterator = list.iterator();
        while (iterator.hasNext()) {
            block29: {
                boolean bl2;
                block27: {
                    nd nd2;
                    block28: {
                        String string;
                        block26: {
                            nd nd3;
                            block24: {
                                block25: {
                                    nd2 = iterator.next();
                                    try {
                                        try {
                                            nd3 = nd2;
                                            if (n2 != 0) break block24;
                                            if (nd3 != null) break block25;
                                        }
                                        catch (MatchException matchException) {
                                            throw nf.cuq(matchException);
                                        }
                                        if (n2 == 0) continue;
                                    }
                                    catch (MatchException matchException) {
                                        throw nf.cuq(matchException);
                                    }
                                }
                                nd3 = nd2;
                            }
                            String string2 = nd3.csZ();
                            try {
                                string = string2;
                                if (n2 != 0) break block26;
                                if (string == null) continue;
                            }
                            catch (MatchException matchException) {
                                throw nf.cuq(matchException);
                            }
                            string = string2;
                        }
                        try {
                            try {
                                bl2 = string.isBlank();
                                if (n2 != 0) break block27;
                                if (!bl2) break block28;
                            }
                            catch (MatchException matchException) {
                                throw nf.cuq(matchException);
                            }
                            if (n2 == 0) continue;
                        }
                        catch (MatchException matchException) {
                            throw nf.cuq(matchException);
                        }
                    }
                    bl2 = nd2.matches(itemStack);
                }
                try {
                    if (n2 != 0) return bl2;
                    if (!bl2) break block29;
                    return false;
                }
                catch (MatchException matchException) {
                    throw nf.cuq(matchException);
                }
            }
            if (n2 != 0) return true;
        }
        return true;
    }

    public int ctM() {
        int n2;
        block15: {
            long l2;
            block16: {
                int n3;
                block13: {
                    block14: {
                        block12: {
                            nf nf2;
                            block10: {
                                block11: {
                                    l2 = swToy ^ 0x38470C202E8L;
                                    int n4 = 0;
                                    n3 = nf.cup();
                                    try {
                                        try {
                                            try {
                                                nf2 = this;
                                                if (n3 != 0) break block10;
                                                if (nf2.BDwrc == null) break block11;
                                            }
                                            catch (MatchException matchException) {
                                                throw nf.cuq(matchException);
                                            }
                                            n2 = this.BDwrc.isBlank();
                                            if (n3 != 0) break block12;
                                        }
                                        catch (MatchException matchException) {
                                            throw nf.cuq(matchException);
                                        }
                                        if (n2 != 0) break block11;
                                    }
                                    catch (MatchException matchException) {
                                        throw nf.cuq(matchException);
                                    }
                                    n4 += 100;
                                }
                                nf2 = this;
                            }
                            n2 = nf2.ctO();
                        }
                        try {
                            if (n3 != 0) break block13;
                            if (n2 == 0) break block14;
                        }
                        catch (MatchException matchException) {
                            throw nf.cuq(matchException);
                        }
                        n4 += 250;
                    }
                    n2 = this.ctP();
                }
                try {
                    if (n3 != 0) break block15;
                    if (n2 == 0) break block16;
                }
                catch (MatchException matchException) {
                    throw nf.cuq(matchException);
                }
                n4 += 1000;
            }
            n4 += this.ctQ() * nf.cux("p", (int)4576, (long)(0x236DE23A6C19C721L ^ l2));
            n2 = n4 += this.ctR() * nf.cux("p", (int)3078, (long)(0x60C06EB78F06DAC1L ^ l2));
        }
        return n2;
    }

    public List<nd> ctW() {
        return this.SkOYI;
    }

    public long ctZ() {
        return this.KTPlM;
    }

    public boolean ctG() {
        boolean bl2;
        block8: {
            block7: {
                ne ne2;
                int n2;
                block6: {
                    long l2 = swToy ^ 0x7D3B2C2EE572L;
                    n2 = nf.cup();
                    try {
                        try {
                            ne2 = this.HJcWp;
                            if (n2 != 0) break block6;
                            if (ne2 == null) break block7;
                        }
                        catch (MatchException matchException) {
                            throw nf.cuq(matchException);
                        }
                        ne2 = this.HJcWp;
                    }
                    catch (MatchException matchException) {
                        throw nf.cuq(matchException);
                    }
                }
                try {
                    bl2 = ne2.cto();
                    if (n2 != 0) break block8;
                    if (!bl2) break block7;
                }
                catch (MatchException matchException) {
                    throw nf.cuq(matchException);
                }
                bl2 = true;
                break block8;
            }
            bl2 = false;
        }
        return bl2;
    }

    public void ctJ() {
        block11: {
            block10: {
                nf nf2;
                int n2;
                block8: {
                    block9: {
                        long l2 = swToy ^ 0x57CD2ABCB651L;
                        n2 = nf.cuo();
                        try {
                            try {
                                nf2 = this;
                                if (n2 == 0) break block8;
                                if (nf2.HJcWp == null) break block9;
                            }
                            catch (MatchException matchException) {
                                throw nf.cuq(matchException);
                            }
                            this.HJcWp.ctp();
                        }
                        catch (MatchException matchException) {
                            throw nf.cuq(matchException);
                        }
                    }
                    nf2 = this;
                }
                try {
                    try {
                        if (n2 == 0) break block10;
                        if (!nf2.vRKRG) break block11;
                    }
                    catch (MatchException matchException) {
                        throw nf.cuq(matchException);
                    }
                    this.lhkSE = true;
                    nf2 = this;
                }
                catch (MatchException matchException) {
                    throw nf.cuq(matchException);
                }
            }
            nf2.vRKRG = false;
        }
    }

    private boolean ctO() {
        boolean bl2;
        block13: {
            block11: {
                String string;
                int n2;
                block12: {
                    nc nc2;
                    block10: {
                        long l2 = swToy ^ 0x2712E4578E93L;
                        n2 = nf.cuo();
                        try {
                            try {
                                nc2 = this.RVkIg;
                                if (n2 == 0) break block10;
                                if (nc2 == null) break block11;
                            }
                            catch (MatchException matchException) {
                                throw nf.cuq(matchException);
                            }
                            nc2 = this.RVkIg;
                        }
                        catch (MatchException matchException) {
                            throw nf.cuq(matchException);
                        }
                    }
                    try {
                        try {
                            string = nc2.csI();
                            if (n2 == 0) break block12;
                            if (string == null) break block11;
                        }
                        catch (MatchException matchException) {
                            throw nf.cuq(matchException);
                        }
                        string = this.RVkIg.csI();
                    }
                    catch (MatchException matchException) {
                        throw nf.cuq(matchException);
                    }
                }
                try {
                    bl2 = string.isBlank();
                    if (n2 == 0) break block13;
                    if (bl2) break block11;
                }
                catch (MatchException matchException) {
                    throw nf.cuq(matchException);
                }
                bl2 = true;
                break block13;
            }
            bl2 = false;
        }
        return bl2;
    }

    public boolean cub() {
        return this.vRKRG;
    }

    public void cuc(boolean bl2) {
        this.lhkSE = bl2;
    }

    public boolean ctK(ny ny2) {
        boolean bl2;
        block57: {
            nf nf2;
            ItemStack itemStack;
            int n2;
            block56: {
                boolean bl3;
                block55: {
                    block53: {
                        block54: {
                            block51: {
                                block52: {
                                    block50: {
                                        long l2;
                                        block49: {
                                            int n3;
                                            block48: {
                                                block47: {
                                                    String string;
                                                    block46: {
                                                        block45: {
                                                            boolean bl4;
                                                            block44: {
                                                                block42: {
                                                                    block43: {
                                                                        long l3 = swToy ^ 0x6FA8C2D758EBL;
                                                                        n2 = nf.cuo();
                                                                        try {
                                                                            try {
                                                                                bl4 = this.ctH();
                                                                                if (n2 == 0) break block42;
                                                                                if (bl4) break block43;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw nf.cuq(matchException);
                                                                            }
                                                                            return false;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw nf.cuq(matchException);
                                                                        }
                                                                    }
                                                                    long l3 = this.KTPlM - 0L;
                                                                    bl4 = l3 == 0L ? 0 : (l3 < 0L ? -1 : 1);
                                                                }
                                                                try {
                                                                    if (n2 == 0) break block44;
                                                                    if (bl4 > false) break block45;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw nf.cuq(matchException);
                                                                }
                                                                bl4 = false;
                                                            }
                                                            return bl4;
                                                        }
                                                        itemStack = ny2.cwf();
                                                        try {
                                                            try {
                                                                string = this.BDwrc;
                                                                if (n2 == 0) break block46;
                                                                if (string == null) break block47;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw nf.cuq(matchException);
                                                            }
                                                            string = this.BDwrc;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw nf.cuq(matchException);
                                                        }
                                                    }
                                                    try {
                                                        try {
                                                            n3 = string.equals(itemStack.getItem().getTranslationKey()) ? 1 : 0;
                                                            if (n2 == 0) break block48;
                                                            if (n3 != 0) break block47;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw nf.cuq(matchException);
                                                        }
                                                        return false;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw nf.cuq(matchException);
                                                    }
                                                }
                                                n3 = ny2.cwf().getCount();
                                            }
                                            int n4 = n3;
                                            try {
                                                long l2 = ny2.cwl() - this.KTPlM * (long)n4;
                                                l2 = l2 == 0L ? 0 : (l2 < 0L ? -1 : 1);
                                                if (n2 == 0) break block49;
                                                if (l2 <= 0) break block50;
                                            }
                                            catch (MatchException matchException) {
                                                throw nf.cuq(matchException);
                                            }
                                            l2 = 0;
                                        }
                                        return (boolean)l2;
                                    }
                                    try {
                                        try {
                                            try {
                                                try {
                                                    nf2 = this;
                                                    if (n2 == 0) break block51;
                                                    if (nf2.RVkIg == null) break block52;
                                                }
                                                catch (MatchException matchException) {
                                                    throw nf.cuq(matchException);
                                                }
                                                nf2 = this;
                                                if (n2 == 0) break block51;
                                            }
                                            catch (MatchException matchException) {
                                                throw nf.cuq(matchException);
                                            }
                                            if (nf2.RVkIg.matches(itemStack)) break block52;
                                        }
                                        catch (MatchException matchException) {
                                            throw nf.cuq(matchException);
                                        }
                                        return false;
                                    }
                                    catch (MatchException matchException) {
                                        throw nf.cuq(matchException);
                                    }
                                }
                                nf2 = this;
                            }
                            try {
                                try {
                                    try {
                                        try {
                                            if (n2 == 0) break block53;
                                            if (nf2.DUmbm == null) break block54;
                                        }
                                        catch (MatchException matchException) {
                                            throw nf.cuq(matchException);
                                        }
                                        bl3 = this.DUmbm.matches(itemStack);
                                        if (n2 == 0) break block55;
                                    }
                                    catch (MatchException matchException) {
                                        throw nf.cuq(matchException);
                                    }
                                    if (bl3) break block54;
                                }
                                catch (MatchException matchException) {
                                    throw nf.cuq(matchException);
                                }
                                return false;
                            }
                            catch (MatchException matchException) {
                                throw nf.cuq(matchException);
                            }
                        }
                        nf2 = this;
                    }
                    try {
                        if (n2 == 0) break block56;
                        bl3 = nf2.ctN(itemStack);
                    }
                    catch (MatchException matchException) {
                        throw nf.cuq(matchException);
                    }
                }
                try {
                    if (!bl3) {
                        return false;
                    }
                }
                catch (MatchException matchException) {
                    throw nf.cuq(matchException);
                }
                nf2 = this;
            }
            for (ng ng2 : nf2.CrfVL) {
                block59: {
                    boolean bl5;
                    block58: {
                        try {
                            try {
                                bl2 = ng2.matches(itemStack);
                                if (n2 == 0) break block57;
                                if (n2 == 0) break block58;
                            }
                            catch (MatchException matchException) {
                                throw nf.cuq(matchException);
                            }
                            if (bl2) break block59;
                        }
                        catch (MatchException matchException) {
                            throw nf.cuq(matchException);
                        }
                        bl5 = false;
                    }
                    return bl5;
                }
                if (n2 != 0) continue;
            }
            bl2 = true;
        }
        return bl2;
    }

    public void cuf(nd nd2) {
        this.DUmbm = nd2;
    }

    public void cug(List<nd> list) {
        this.SkOYI = list;
    }

    private static String cus(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4DB0;
        if (DFnfj[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])CIsYm.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    CIsYm.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/nf", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = QVzDB[n3].getBytes("ISO-8859-1");
            nf.DFnfj[n3] = nf.cur(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return DFnfj[n3];
    }

    public void cul(boolean bl2) {
        this.vRKRG = bl2;
    }

    public void cuk(long l2) {
        this.oeMul = l2;
    }

    private static int cuv(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x1F85;
        if (ktNLe[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = yZmOu[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])tdXcS.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    tdXcS.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/nf", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            nf.ktNLe[n3] = n4;
        }
        return ktNLe[n3];
    }

    public void cuh(ne ne2) {
        this.HJcWp = ne2;
    }

    public void cui(List<ng> list) {
        this.CrfVL = list;
    }

    private static Object cut(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = nf.cus(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    protected boolean cum(Object object) {
        return object instanceof nf;
    }

    public void cuj(long l2) {
        this.KTPlM = l2;
    }

    private static int cuw(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = nf.cuv(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public boolean ctS() {
        return this.lhkSE;
    }

    public void cud(String string) {
        this.BDwrc = string;
    }

    public void cue(nc nc2) {
        this.RVkIg = nc2;
    }

    public List<ng> ctY() {
        return this.CrfVL;
    }

    public String ctT() {
        return this.BDwrc;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(nf.class, "cuw", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(nf.class, "cut", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

