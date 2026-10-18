/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.rm;

public final class ru {
    private static final Map<Character, Character> cxxgt;
    private static final Map<Character, Character> sRJBt;
    private static final Map<Character, Character> VkWRj;
    private static final long JJddW;
    private static final long[] UzssG;
    private static final Integer[] TwbYR;
    private static final Map edNag;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    static {
        block13: {
            block12: {
                ru.JJddW = gb.aYR(6858533336557237871L, -3491188305010024190L, MethodHandles.lookup().lookupClass()).a(21138919510032L);
                var11 = ru.JJddW ^ 32211457875616L;
                ru.edNag = new HashMap<K, V>(13);
                var0_1 = Cipher.getInstance("DES/CBC/NoPadding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var11 >>> 56);
                for (var1_2 = 1; var1_2 < 8; ++var1_2) {
                    v2 = v2;
                    v2[var1_2] = (byte)(var11 << var1_2 * 8 >>> 56);
                }
                var0_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var6_3 = new long[149];
                var3_4 = 0;
                var4_5 = "\u00de\u008f\u00a7\u0085\u00ae`N\u00b9h<\u001d\u00ff\u00bas\u009e\u00a6\u0019Pu\u0006\u000b\u0002\u0095h1\u0096c#\u00c9\f,\u00dd\u0017\u0081\u009c}\u00e5\u00e5\u00b2\u00f7\u00c8\u0012-u\u007fD\u0004g\u0018y\\I\u0092\u000fm\u00e1zH9\u00a7r2\u0098Ry*\u0080G\u000b\u00f0/g]\u00c8[\u00db\u00b4\u0006\u009f\u00d1\u00d3G\u00c9\u00e4$\u00ba\u00fd\"\u00fe\u00f9U#$\u00850\u00fb\u00d4J4\u00d2\u00a1\u00a1\u00dew\u00e7P@\u009b\u00e3\u00b5\u00bf\u00947\u0085\u0083\r6\u00ce\u00c8\u008cRq\u00a0\u00f9N\u00f8\u0007\u00ccn&\u0086\u007fm\u00a3\u00f9\bn\u00d3F\u00c4\u0090\u00b31\u00e4\u00ffrE\u009bX\u00f2rq\u00baDRY\u000f\u001c\u00da\u0012\u001b\u00b7\u00fa;\u00fe\u00b1E\u00a2_\u00b8BL\u00b6\u00ca\u0091\u0088\u00cfI\u00eeMJ\r\u0098\u0095\u00f9g%\u00e1\u00b8R\u00be\u00aa}\u001e\u00e6v\u001b\u009b\u00e7\u00ba\u00d8\u008d\u0085+\u00de\u00de\u008c\u00de\u001c\u00b9\u00d5u\u00fe\u00aeN\u00fe:c.\u00e5\u00cb~\u00f7\u00a9E^\u0005\u008bM\u00b4\u00cbl\u0090\u00e1Y\fEG\u00f7\u00d9\u0086`\u00fa\u009cT\u00ec\u00cb\u00dd\u00fc\u00feg\b\u001e\u00b8\u00bb\ry\u00a1\u00a6\u00b5\b\u0001!\u00b5My'\u00e0t\u00f9r\u00a7\u00cdS\u00d0\u0080\u00f1uT_\u00da\u00d2\u0083\u00cf_\u00b9\u00a0\u000f\u00f5\u0014\nw}\f@\t\u00f6\u00c4\u00953?\u00f6\u00c8\u00c7\u00a6\u00ea\u00ca\u00c0q\u0011e\u00cdz.\u0014\u00eb\u0012\u00c2_\u00c8\u00c4}6\u00b0\u00db\u00e2\u001d\u00b2\u00b6nVT\u000b?\u00eb\u00fd\u00c4\u00c0\u0089\u000f\u0094\u00bd\u00b3\u00e4`\u0083\u0014\u00ae\u001eJ\u0016\u00a8;ZuC\u0011\u00ed\u00c5\u0090\t$y\f\u0090\u0090\u008b\u0088S\u00a1\u00b6s09k\u0081>!\u000e\u00d4[^\u00db`!\u000fMcs7\u009e\u00d1s%\u0083s \u00e7\u00da\u008cD\u00e3\t\u00ddEb\u00fc\fM\u00de.R;?\u00a4\u00bd\u00e8<\u0006\u00ebh\u0098\u00dd<%B\u0014<\u00f4l\u001b\u001e\u00ea\u0096E\u00d6\u0016a\u001e\u00c6'q+}5\u00f9$h/\u0094f\u009b\u00b1{\r\u00a6\u00b8\u0012\u00cdB\u00d0{w\u0014Jy\u00c2S\u00e4\u00e1&\u00ba\u00aa\u00bf\u00f2\u0099\u001f\u0001\u001cE\u0007.\u00f2\u00a7m\u00dbY=l1\u00f0\u00b4`\u00c9\u00ef\u00d7\u0084\u00b4\u0013\u00bc\u00ac\u00ec\u00ceF\u00fc\u0082I\u0088Y\u00cdBO\u008d\u00d2t\u00d4\u00d0]\r,guD\u00b5\u008e\u00cf\u00f8\u00b6R\u0080t}\u00d7\n\u008a\u001f\u00b0\u0097k#\"\u0092uU]w\u00b8\u0098\u00dd\u000eqk?\u00e9E\u00dbX\u00af\u00f7\u0005\u00b6\u008d\u00ad1\u00adD\\\u001f\u000b\u00bd;\u00b511\u0016\u0086\u00bbf\u00fb\u00f0\u00ef\u00f2\u00a6\u009f\u00d1p\u00db\u00c1\u00d3\u00fe\u00d9\r\u00be\u00b8\u00b3\u0092x\u00a4\u00ab\u008e\u001fd\u00c28\u000496\u00a1<\u00b9V\u0014H9\u008aU\u00c4\u00f4\u00ff\u0093\u00e8O\u009b\u009a\u0082|\u00e2\u0092\u008c\u00d3\u0006S4\u00d1\u0003V\u0019\u008f\t\u0015-\u00df\u00ae\u00d0\u001f\u008a\u0083\u00ca\u009d\u001a\r)\u00ed\u0098\u00da\u00a4\u00dc\u00cfG\u0006\u00b3\u00ae\u00dc\u00a2\u0014\u0002\u0091<\u0090\u0006\u0083\u008a\u00d5z\u00e9G\u0006#m^)ui\u00b2c}\u00ba\u000f\u0096>d\f\u00de\u00fc\u009f\u001f\u00bb\u00a0e\u00cc\u00e1\u00be9Q\u00d3\u0000\u00d7S\u0085\u00af\u00f6}#\u001dk\u0088\u00f8\u00ad\"\u00cd\u008e-Y\u00aa\u00d75@\u00fc=\u0013\u00c3\u00bdZff\u00c9\u00a8\u00f2\u0007\u001b\u00c9[\u0016z\u00e4O\u008a*\u00db\u0087\u00d9\u00a8 \u00c2\u00fc\u009b\u009aT\u00f8\u00f1\u00b5X\u00cfw\u00a5\u0016L\u001b\u00f6\rc}Rvo\u00eaX:\u00af-\u008e\u00e0\u009c*\u00ff\u0090eA5/\u007f\u00f5\u00ff[k\u009az_\u00c1\u001cJc\u0014>\u0088\u00a4\u00fbj\u00b6\u00f9\u00ef\u008f\u00b6\u0019\u0099'sU\u00c6\u00d3\\\u00a5\u00b5\u00f8H\u0010\u00d3\u00c8/\u0094\u00c3\u0001y=\u0016My\u00da?\u00c1\u00bf\u00e5\u00e34\u00a1\u00d9{\u008e\u00fa\u00e2\u0086@\u00be\u00a9\u009e\u00f5\u00d0\u008b\u00da\u001b\u0083ccwn\u00ac\u00ea\u009b\u001f\u0094\u00der\u00de\u0091_}\u00ad)\u00d8\u00bcbe'\u0007)Y\\\u00db\u00a6\u00f0)\u00d5\u00e4{\u00e3~\u000bw\u00e6wd\u007fp\u00bfb\u0000\u00ee\u00fa\u00c7W\u00f8#\u00bb\u00e4\u00ee\u0088\u00e9\u00db\u0000\u00f1\u00ed\u007f$^\u008a[e\u008aT\u00fe\u000f\u00b2O\u00ac\u00f0\u00d9\u008b\u00dc\u00b6\u00ea\u0013\u009c\u0018\u0003\u001e\u00c4\\V:\u00b7\u0014\u00acS\u009e\u001d\u00ad\u00f5/\u009938L\u00f1\u00b7\u00b3\u00b7\u00a5\u0099\u00d2\u00ebS\u00d1\u0099\r]\u00e2\u0000^\u00b30\u0002\u00b6\u000f\u00cb5\u00adTR\u00df\u001d\u00939Z\u00bc\u0094]\u0013x\u0093\u00f2\u008f\u00bd\u00b3\f\u0018\u00cc\u00ddYXXN\u0006\u00ab3\u0091r\u00ea-\u00a2R\u00e16\u00c9c\u00e6\u0003a\u0002O\u007f\u00a8 \u00dc\u00f9\u00fcN\u00a0{\u00d3\u00a2\u00b8\u0083\u0017(\u00ed/o\u00ed\u0006\u00f26u,\u00e2\u0012{S\u00ec\u0096m\u00fd7U\u00ce\u00ab\u00e0m\u00f8\u0019\u00e7\u00e6\u00c0\u00c2i\u00aa^\u0011@\u008c\u009f(5\u00d3\u009f]\u00fa\u008a\n\u00b9P\u000f\u00c6\u00fc\u00ee\u00a5n\u00d8\u00fd\u00e4x\u00ab\u00fd\u00b9(\u00d7\u00ad\u00ad\u0082\u00f0\u00a7\f\u00deV]\u00d5$\u00e36\u00fb\u00afX\r\u0090\u00bc\u00f4\u0086\u00d6\u000e\u00064FA\rw\u008e+\u00a4\u00a0\u008f\u00dd\u00857Y\u00c5}\u009b\u0013T\u0083\u0017\u00ce\u001e\u0004\u0010\\\u00b6\u009b\u0096\u00a7\u00e7!\u0080\u0000\u0001;\u00b8\u0012\u009b\u0004\u009cM\u0080\u00b7\u00f0\u00fd\u00a4";
                var5_6 = "\u00de\u008f\u00a7\u0085\u00ae`N\u00b9h<\u001d\u00ff\u00bas\u009e\u00a6\u0019Pu\u0006\u000b\u0002\u0095h1\u0096c#\u00c9\f,\u00dd\u0017\u0081\u009c}\u00e5\u00e5\u00b2\u00f7\u00c8\u0012-u\u007fD\u0004g\u0018y\\I\u0092\u000fm\u00e1zH9\u00a7r2\u0098Ry*\u0080G\u000b\u00f0/g]\u00c8[\u00db\u00b4\u0006\u009f\u00d1\u00d3G\u00c9\u00e4$\u00ba\u00fd\"\u00fe\u00f9U#$\u00850\u00fb\u00d4J4\u00d2\u00a1\u00a1\u00dew\u00e7P@\u009b\u00e3\u00b5\u00bf\u00947\u0085\u0083\r6\u00ce\u00c8\u008cRq\u00a0\u00f9N\u00f8\u0007\u00ccn&\u0086\u007fm\u00a3\u00f9\bn\u00d3F\u00c4\u0090\u00b31\u00e4\u00ffrE\u009bX\u00f2rq\u00baDRY\u000f\u001c\u00da\u0012\u001b\u00b7\u00fa;\u00fe\u00b1E\u00a2_\u00b8BL\u00b6\u00ca\u0091\u0088\u00cfI\u00eeMJ\r\u0098\u0095\u00f9g%\u00e1\u00b8R\u00be\u00aa}\u001e\u00e6v\u001b\u009b\u00e7\u00ba\u00d8\u008d\u0085+\u00de\u00de\u008c\u00de\u001c\u00b9\u00d5u\u00fe\u00aeN\u00fe:c.\u00e5\u00cb~\u00f7\u00a9E^\u0005\u008bM\u00b4\u00cbl\u0090\u00e1Y\fEG\u00f7\u00d9\u0086`\u00fa\u009cT\u00ec\u00cb\u00dd\u00fc\u00feg\b\u001e\u00b8\u00bb\ry\u00a1\u00a6\u00b5\b\u0001!\u00b5My'\u00e0t\u00f9r\u00a7\u00cdS\u00d0\u0080\u00f1uT_\u00da\u00d2\u0083\u00cf_\u00b9\u00a0\u000f\u00f5\u0014\nw}\f@\t\u00f6\u00c4\u00953?\u00f6\u00c8\u00c7\u00a6\u00ea\u00ca\u00c0q\u0011e\u00cdz.\u0014\u00eb\u0012\u00c2_\u00c8\u00c4}6\u00b0\u00db\u00e2\u001d\u00b2\u00b6nVT\u000b?\u00eb\u00fd\u00c4\u00c0\u0089\u000f\u0094\u00bd\u00b3\u00e4`\u0083\u0014\u00ae\u001eJ\u0016\u00a8;ZuC\u0011\u00ed\u00c5\u0090\t$y\f\u0090\u0090\u008b\u0088S\u00a1\u00b6s09k\u0081>!\u000e\u00d4[^\u00db`!\u000fMcs7\u009e\u00d1s%\u0083s \u00e7\u00da\u008cD\u00e3\t\u00ddEb\u00fc\fM\u00de.R;?\u00a4\u00bd\u00e8<\u0006\u00ebh\u0098\u00dd<%B\u0014<\u00f4l\u001b\u001e\u00ea\u0096E\u00d6\u0016a\u001e\u00c6'q+}5\u00f9$h/\u0094f\u009b\u00b1{\r\u00a6\u00b8\u0012\u00cdB\u00d0{w\u0014Jy\u00c2S\u00e4\u00e1&\u00ba\u00aa\u00bf\u00f2\u0099\u001f\u0001\u001cE\u0007.\u00f2\u00a7m\u00dbY=l1\u00f0\u00b4`\u00c9\u00ef\u00d7\u0084\u00b4\u0013\u00bc\u00ac\u00ec\u00ceF\u00fc\u0082I\u0088Y\u00cdBO\u008d\u00d2t\u00d4\u00d0]\r,guD\u00b5\u008e\u00cf\u00f8\u00b6R\u0080t}\u00d7\n\u008a\u001f\u00b0\u0097k#\"\u0092uU]w\u00b8\u0098\u00dd\u000eqk?\u00e9E\u00dbX\u00af\u00f7\u0005\u00b6\u008d\u00ad1\u00adD\\\u001f\u000b\u00bd;\u00b511\u0016\u0086\u00bbf\u00fb\u00f0\u00ef\u00f2\u00a6\u009f\u00d1p\u00db\u00c1\u00d3\u00fe\u00d9\r\u00be\u00b8\u00b3\u0092x\u00a4\u00ab\u008e\u001fd\u00c28\u000496\u00a1<\u00b9V\u0014H9\u008aU\u00c4\u00f4\u00ff\u0093\u00e8O\u009b\u009a\u0082|\u00e2\u0092\u008c\u00d3\u0006S4\u00d1\u0003V\u0019\u008f\t\u0015-\u00df\u00ae\u00d0\u001f\u008a\u0083\u00ca\u009d\u001a\r)\u00ed\u0098\u00da\u00a4\u00dc\u00cfG\u0006\u00b3\u00ae\u00dc\u00a2\u0014\u0002\u0091<\u0090\u0006\u0083\u008a\u00d5z\u00e9G\u0006#m^)ui\u00b2c}\u00ba\u000f\u0096>d\f\u00de\u00fc\u009f\u001f\u00bb\u00a0e\u00cc\u00e1\u00be9Q\u00d3\u0000\u00d7S\u0085\u00af\u00f6}#\u001dk\u0088\u00f8\u00ad\"\u00cd\u008e-Y\u00aa\u00d75@\u00fc=\u0013\u00c3\u00bdZff\u00c9\u00a8\u00f2\u0007\u001b\u00c9[\u0016z\u00e4O\u008a*\u00db\u0087\u00d9\u00a8 \u00c2\u00fc\u009b\u009aT\u00f8\u00f1\u00b5X\u00cfw\u00a5\u0016L\u001b\u00f6\rc}Rvo\u00eaX:\u00af-\u008e\u00e0\u009c*\u00ff\u0090eA5/\u007f\u00f5\u00ff[k\u009az_\u00c1\u001cJc\u0014>\u0088\u00a4\u00fbj\u00b6\u00f9\u00ef\u008f\u00b6\u0019\u0099'sU\u00c6\u00d3\\\u00a5\u00b5\u00f8H\u0010\u00d3\u00c8/\u0094\u00c3\u0001y=\u0016My\u00da?\u00c1\u00bf\u00e5\u00e34\u00a1\u00d9{\u008e\u00fa\u00e2\u0086@\u00be\u00a9\u009e\u00f5\u00d0\u008b\u00da\u001b\u0083ccwn\u00ac\u00ea\u009b\u001f\u0094\u00der\u00de\u0091_}\u00ad)\u00d8\u00bcbe'\u0007)Y\\\u00db\u00a6\u00f0)\u00d5\u00e4{\u00e3~\u000bw\u00e6wd\u007fp\u00bfb\u0000\u00ee\u00fa\u00c7W\u00f8#\u00bb\u00e4\u00ee\u0088\u00e9\u00db\u0000\u00f1\u00ed\u007f$^\u008a[e\u008aT\u00fe\u000f\u00b2O\u00ac\u00f0\u00d9\u008b\u00dc\u00b6\u00ea\u0013\u009c\u0018\u0003\u001e\u00c4\\V:\u00b7\u0014\u00acS\u009e\u001d\u00ad\u00f5/\u009938L\u00f1\u00b7\u00b3\u00b7\u00a5\u0099\u00d2\u00ebS\u00d1\u0099\r]\u00e2\u0000^\u00b30\u0002\u00b6\u000f\u00cb5\u00adTR\u00df\u001d\u00939Z\u00bc\u0094]\u0013x\u0093\u00f2\u008f\u00bd\u00b3\f\u0018\u00cc\u00ddYXXN\u0006\u00ab3\u0091r\u00ea-\u00a2R\u00e16\u00c9c\u00e6\u0003a\u0002O\u007f\u00a8 \u00dc\u00f9\u00fcN\u00a0{\u00d3\u00a2\u00b8\u0083\u0017(\u00ed/o\u00ed\u0006\u00f26u,\u00e2\u0012{S\u00ec\u0096m\u00fd7U\u00ce\u00ab\u00e0m\u00f8\u0019\u00e7\u00e6\u00c0\u00c2i\u00aa^\u0011@\u008c\u009f(5\u00d3\u009f]\u00fa\u008a\n\u00b9P\u000f\u00c6\u00fc\u00ee\u00a5n\u00d8\u00fd\u00e4x\u00ab\u00fd\u00b9(\u00d7\u00ad\u00ad\u0082\u00f0\u00a7\f\u00deV]\u00d5$\u00e36\u00fb\u00afX\r\u0090\u00bc\u00f4\u0086\u00d6\u000e\u00064FA\rw\u008e+\u00a4\u00a0\u008f\u00dd\u00857Y\u00c5}\u009b\u0013T\u0083\u0017\u00ce\u001e\u0004\u0010\\\u00b6\u009b\u0096\u00a7\u00e7!\u0080\u0000\u0001;\u00b8\u0012\u009b\u0004\u009cM\u0080\u00b7\u00f0\u00fd\u00a4".length();
                var2_7 = 0;
                while (true) {
                    var7_8 = var4_5.substring(var2_7, var2_7 += 8).getBytes("ISO-8859-1");
                    v3 = var6_3;
                    v4 = var3_4++;
                    v5 = ((long)var7_8[0] & 255L) << 56 | ((long)var7_8[1] & 255L) << 48 | ((long)var7_8[2] & 255L) << 40 | ((long)var7_8[3] & 255L) << 32 | ((long)var7_8[4] & 255L) << 24 | ((long)var7_8[5] & 255L) << 16 | ((long)var7_8[6] & 255L) << 8 | (long)var7_8[7] & 255L;
                    v6 = -1;
                    break block12;
                    break;
                }
lbl26:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var2_7 < var5_6) ** continue;
                    var4_5 = "\u007fP\u0006\u0000\u00911\u0088\u00da\u00cf\u0083g\u0093\u0004\u00b4\u00c6\u009a";
                    var5_6 = "\u007fP\u0006\u0000\u00911\u0088\u00da\u00cf\u0083g\u0093\u0004\u00b4\u00c6\u009a".length();
                    var2_7 = 0;
                    while (true) {
                        var7_8 = var4_5.substring(var2_7, var2_7 += 8).getBytes("ISO-8859-1");
                        v3 = var6_3;
                        v4 = var3_4++;
                        v5 = ((long)var7_8[0] & 255L) << 56 | ((long)var7_8[1] & 255L) << 48 | ((long)var7_8[2] & 255L) << 40 | ((long)var7_8[3] & 255L) << 32 | ((long)var7_8[4] & 255L) << 24 | ((long)var7_8[5] & 255L) << 16 | ((long)var7_8[6] & 255L) << 8 | (long)var7_8[7] & 255L;
                        v6 = 0;
                        break block12;
                        break;
                    }
                    break;
                }
lbl39:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var2_7 < var5_6) ** continue;
                    break block13;
                    break;
                }
            }
            var8_9 = v5;
            var10_10 = var0_1.doFinal(new byte[]{(byte)(var8_9 >>> 56), (byte)(var8_9 >>> 48), (byte)(var8_9 >>> 40), (byte)(var8_9 >>> 32), (byte)(var8_9 >>> 24), (byte)(var8_9 >>> 16), (byte)(var8_9 >>> 8), (byte)var8_9});
            v7 = ((long)var10_10[0] & 255L) << 56 | ((long)var10_10[1] & 255L) << 48 | ((long)var10_10[2] & 255L) << 40 | ((long)var10_10[3] & 255L) << 32 | ((long)var10_10[4] & 255L) << 24 | ((long)var10_10[5] & 255L) << 16 | ((long)var10_10[6] & 255L) << 8 | (long)var10_10[7] & 255L;
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
        ru.UzssG = var6_3;
        ru.TwbYR = new Integer[149];
        ru.cxxgt = new HashMap<Character, Character>();
        ru.sRJBt = new HashMap<Character, Character>();
        ru.VkWRj = new HashMap<Character, Character>();
        v8 = new Map.Entry[ru.djO("e", (int)15401, (long)(8787217822199415189L ^ var11))];
        v8[0] = Map.entry(Character.valueOf((char)ru.djO("e", (int)13336, (long)(2974774229054360051L ^ var11))), Character.valueOf((char)ru.djO("e", (int)3313, (long)(8815335064999571764L ^ var11))));
        v8[1] = Map.entry(Character.valueOf((char)ru.djO("e", (int)22803, (long)(1198724050758951952L ^ var11))), Character.valueOf((char)ru.djO("e", (int)13060, (long)(5783756970301918869L ^ var11))));
        v8[2] = Map.entry(Character.valueOf((char)ru.djO("e", (int)15709, (long)(1424927075383902442L ^ var11))), Character.valueOf((char)ru.djO("e", (int)32075, (long)(5652469432612339908L ^ var11))));
        v8[3] = Map.entry(Character.valueOf((char)ru.djO("e", (int)14717, (long)(7391172544529007803L ^ var11))), Character.valueOf((char)ru.djO("e", (int)22085, (long)(6397116108465597439L ^ var11))));
        v8[4] = Map.entry(Character.valueOf((char)ru.djO("e", (int)1659, (long)(3103822350937963512L ^ var11))), Character.valueOf((char)ru.djO("e", (int)9402, (long)(7168364097939315005L ^ var11))));
        v8[5] = Map.entry(Character.valueOf((char)ru.djO("e", (int)31097, (long)(5980334053038867679L ^ var11))), Character.valueOf((char)ru.djO("e", (int)32383, (long)(6497926836047627166L ^ var11))));
        v8[ru.djO("e", (int)772, (long)(3248473137231380154L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)14779, (long)(6031841993442624625L ^ var11))), Character.valueOf((char)ru.djO("e", (int)32309, (long)(7542654488850842585L ^ var11))));
        v8[ru.djO("e", (int)17275, (long)(8021100854844522215L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)30580, (long)(6486142702113934000L ^ var11))), Character.valueOf((char)ru.djO("e", (int)14227, (long)(4140910711943498317L ^ var11))));
        v8[ru.djO("e", (int)8016, (long)(4680533194481574529L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)20876, (long)(3475946279822978075L ^ var11))), Character.valueOf((char)ru.djO("e", (int)31957, (long)(3655613600116392255L ^ var11))));
        v8[ru.djO("e", (int)54, (long)(5898910066042387946L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)6726, (long)(2729694440838080441L ^ var11))), Character.valueOf((char)ru.djO("e", (int)20480, (long)(6736626898184498651L ^ var11))));
        v8[ru.djO("e", (int)6009, (long)(3116504057056504527L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)8116, (long)(1765744495416975956L ^ var11))), Character.valueOf((char)ru.djO("e", (int)32440, (long)(936604488918450970L ^ var11))));
        v8[ru.djO("e", (int)29254, (long)(2628643837892710356L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)17888, (long)(1942786804838463564L ^ var11))), Character.valueOf((char)ru.djO("e", (int)6836, (long)(4680374548782032829L ^ var11))));
        v8[ru.djO("e", (int)27718, (long)(1770459982348439966L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)30403, (long)(3591968102576769862L ^ var11))), Character.valueOf((char)ru.djO("e", (int)8114, (long)(8712358679073333808L ^ var11))));
        v8[ru.djO("e", (int)2728, (long)(3126685452874790690L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)6522, (long)(8774473606169896062L ^ var11))), Character.valueOf((char)ru.djO("e", (int)21770, (long)(1665428508031740130L ^ var11))));
        v8[ru.djO("e", (int)19382, (long)(1285716671348668024L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)22271, (long)(3600156611780864894L ^ var11))), Character.valueOf((char)ru.djO("e", (int)11198, (long)(5436001243959039612L ^ var11))));
        v8[ru.djO("e", (int)29508, (long)(63851144467205847L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)32221, (long)(2514367491904552967L ^ var11))), Character.valueOf((char)ru.djO("e", (int)17467, (long)(2767355026434718173L ^ var11))));
        v8[ru.djO("e", (int)18136, (long)(4486344910669249491L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)23954, (long)(4631667077389607066L ^ var11))), Character.valueOf((char)ru.djO("e", (int)31968, (long)(8301695966436081971L ^ var11))));
        v8[ru.djO("e", (int)24115, (long)(5470343539219686297L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)1343, (long)(4923063137933080815L ^ var11))), Character.valueOf((char)ru.djO("e", (int)3292, (long)(1930983586847240653L ^ var11))));
        v8[ru.djO("e", (int)4751, (long)(5861388607843807078L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)8269, (long)(1347420888594455956L ^ var11))), Character.valueOf((char)ru.djO("e", (int)22947, (long)(6586940143443797051L ^ var11))));
        v8[ru.djO("e", (int)13220, (long)(8891794073290706460L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)23945, (long)(5309597300418502782L ^ var11))), Character.valueOf((char)ru.djO("e", (int)279, (long)(9185283706974616705L ^ var11))));
        v8[ru.djO("e", (int)3555, (long)(39542263392579627L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)8988, (long)(1496231153608695550L ^ var11))), Character.valueOf((char)ru.djO("e", (int)18016, (long)(6598581896018852863L ^ var11))));
        v8[ru.djO("e", (int)28920, (long)(899040023384247806L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)21515, (long)(987318924867201444L ^ var11))), Character.valueOf((char)ru.djO("e", (int)16185, (long)(3192179252341342777L ^ var11))));
        v8[ru.djO("e", (int)18883, (long)(512412501913498832L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)5178, (long)(2012223345769818511L ^ var11))), Character.valueOf((char)ru.djO("e", (int)15036, (long)(849790342247941967L ^ var11))));
        v8[ru.djO("e", (int)4944, (long)(5675162084431113792L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)495, (long)(6831991615745309794L ^ var11))), Character.valueOf((char)ru.djO("e", (int)3963, (long)(4137610375367373547L ^ var11))));
        v8[ru.djO("e", (int)22011, (long)(6283446233008531536L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)8519, (long)(7444895989465554064L ^ var11))), Character.valueOf((char)ru.djO("e", (int)30060, (long)(9117201738171238636L ^ var11))));
        var13_11 = Map.ofEntries(v8);
        v9 = new Map.Entry[ru.djO("e", (int)19559, (long)(8696388145146786266L ^ var11))];
        v9[0] = Map.entry(Character.valueOf((char)ru.djO("e", (int)5814, (long)(5456911264110455732L ^ var11))), Character.valueOf((char)ru.djO("e", (int)23590, (long)(5741515655751983395L ^ var11))));
        v9[1] = Map.entry(Character.valueOf((char)ru.djO("e", (int)25696, (long)(5746650703444236663L ^ var11))), Character.valueOf((char)ru.djO("e", (int)27750, (long)(1657089131670295016L ^ var11))));
        v9[2] = Map.entry(Character.valueOf((char)ru.djO("e", (int)275, (long)(7297577145859325180L ^ var11))), Character.valueOf((char)ru.djO("e", (int)3043, (long)(9083442218981438993L ^ var11))));
        v9[3] = Map.entry(Character.valueOf((char)ru.djO("e", (int)26349, (long)(8550614676620565267L ^ var11))), Character.valueOf((char)ru.djO("e", (int)19371, (long)(1207663916223559173L ^ var11))));
        v9[4] = Map.entry(Character.valueOf((char)ru.djO("e", (int)9851, (long)(213195177716358068L ^ var11))), Character.valueOf((char)ru.djO("e", (int)2024, (long)(7017164777785113318L ^ var11))));
        v9[5] = Map.entry(Character.valueOf((char)ru.djO("e", (int)23057, (long)(8063739840613935066L ^ var11))), Character.valueOf((char)ru.djO("e", (int)5733, (long)(8285608608241429460L ^ var11))));
        v9[ru.djO("e", (int)15474, (long)(6786035574985458131L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)19242, (long)(4868647052103218923L ^ var11))), Character.valueOf((char)ru.djO("e", (int)26758, (long)(6102690700603938149L ^ var11))));
        v9[ru.djO("e", (int)24994, (long)(8479873341899201704L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)15413, (long)(9207709958004212114L ^ var11))), Character.valueOf((char)ru.djO("e", (int)22994, (long)(6997317101112255527L ^ var11))));
        v9[ru.djO("e", (int)1435, (long)(3175018180042962946L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)28625, (long)(5687581494221656583L ^ var11))), Character.valueOf((char)ru.djO("e", (int)5212, (long)(3333486348189149679L ^ var11))));
        v9[ru.djO("e", (int)28225, (long)(6152969907299832712L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)28525, (long)(4421276600970236524L ^ var11))), Character.valueOf((char)ru.djO("e", (int)30145, (long)(2573671341701220450L ^ var11))));
        v9[ru.djO("e", (int)251, (long)(6270329958351650175L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)20629, (long)(1061934881796582709L ^ var11))), Character.valueOf((char)ru.djO("e", (int)17600, (long)(5213119293815814439L ^ var11))));
        v9[ru.djO("e", (int)674, (long)(5543233331362807640L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)7226, (long)(4596960375262781827L ^ var11))), Character.valueOf((char)ru.djO("e", (int)21908, (long)(3568969384902551656L ^ var11))));
        v9[ru.djO("e", (int)24252, (long)(7377976552958845736L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)21606, (long)(7471958431079688545L ^ var11))), Character.valueOf((char)ru.djO("e", (int)3700, (long)(4423905441070232450L ^ var11))));
        v9[ru.djO("e", (int)18894, (long)(3072487401754653715L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)4451, (long)(8495417113176583379L ^ var11))), Character.valueOf((char)ru.djO("e", (int)25965, (long)(2525136103789320402L ^ var11))));
        v9[ru.djO("e", (int)29519, (long)(3821394843118653072L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)2095, (long)(4402809347574511011L ^ var11))), Character.valueOf((char)ru.djO("e", (int)29071, (long)(8198336222187637866L ^ var11))));
        v9[ru.djO("e", (int)10473, (long)(8042917968285078808L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)24053, (long)(5363111898531454989L ^ var11))), Character.valueOf((char)ru.djO("e", (int)8383, (long)(9010677573309472178L ^ var11))));
        v9[ru.djO("e", (int)30840, (long)(8326018212825187811L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)25606, (long)(2119534334813624754L ^ var11))), Character.valueOf((char)ru.djO("e", (int)15457, (long)(3937807015736803693L ^ var11))));
        v9[ru.djO("e", (int)6767, (long)(6538583182371235770L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)9541, (long)(3219031786542667850L ^ var11))), Character.valueOf((char)ru.djO("e", (int)30946, (long)(4623273418527360271L ^ var11))));
        v9[ru.djO("e", (int)15242, (long)(1734782655832491633L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)32765, (long)(2396973879494427161L ^ var11))), Character.valueOf((char)ru.djO("e", (int)20613, (long)(1524633665119251836L ^ var11))));
        v9[ru.djO("e", (int)1740, (long)(3357886259029818180L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)32711, (long)(7650911285246804586L ^ var11))), Character.valueOf((char)ru.djO("e", (int)14576, (long)(1730147520273843566L ^ var11))));
        v9[ru.djO("e", (int)7780, (long)(8200528972635349929L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)990, (long)(1551125943465819756L ^ var11))), Character.valueOf((char)ru.djO("e", (int)1978, (long)(1782295842178775623L ^ var11))));
        v9[ru.djO("e", (int)29279, (long)(1453117743870857116L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)21169, (long)(792539195065855800L ^ var11))), Character.valueOf((char)ru.djO("e", (int)29942, (long)(6576598062229571965L ^ var11))));
        v9[ru.djO("e", (int)22354, (long)(8461487903927331540L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)8489, (long)(7542027059804413166L ^ var11))), Character.valueOf((char)ru.djO("e", (int)1453, (long)(3959072386679683165L ^ var11))));
        v9[ru.djO("e", (int)29047, (long)(3060599659852680379L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)21381, (long)(41042552929742487L ^ var11))), Character.valueOf((char)ru.djO("e", (int)8109, (long)(364410725153022468L ^ var11))));
        v9[ru.djO("e", (int)392, (long)(7590490718551456870L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)17478, (long)(2702630594769648018L ^ var11))), Character.valueOf((char)ru.djO("e", (int)383, (long)(5776657959090502847L ^ var11))));
        v9[ru.djO("e", (int)28898, (long)(7754464490963258743L ^ var11))] = Map.entry(Character.valueOf((char)ru.djO("e", (int)13540, (long)(1789294792998488446L ^ var11))), Character.valueOf((char)ru.djO("e", (int)28639, (long)(790511414342472258L ^ var11))));
        var14_12 = Map.ofEntries(v9);
        for (Map.Entry<K, V> var16_15 : var13_11.entrySet()) {
            ru.sRJBt.put((Character)var16_15.getKey(), (Character)var16_15.getValue());
            ru.cxxgt.put((Character)var16_15.getValue(), (Character)var16_15.getKey());
            ru.VkWRj.putAll(var14_12);
        }
        for (var15_14 /* !! */  = ru.djO("e", (int)9554, (long)(8902895932662782202L ^ var11)); var15_14 /* !! */  <= ru.djO("e", (int)20684, (long)(2740112972112489832L ^ var11)); var15_14 /* !! */  = (CallSite)((char)(var15_14 /* !! */  + true))) {
            var16_16 = Character.toUpperCase((char)var15_14 /* !! */ );
            var17_17 = ru.cxxgt.get(Character.valueOf(var16_16));
            try {
                if (var17_17 == null) continue;
                ru.cxxgt.put(Character.valueOf((char)var15_14 /* !! */ ), var17_17);
                continue;
            }
            catch (MatchException v10) {
                throw ru.djL(v10);
            }
        }
    }

    public static String djG(String string) {
        StringBuilder stringBuilder;
        block23: {
            StringBuilder stringBuilder2;
            char c2;
            iS[] iSArray;
            block22: {
                block21: {
                    String string2;
                    block19: {
                        long l2 = JJddW ^ 0x3D476B5D7L;
                        iSArray = rm.div();
                        try {
                            block20: {
                                try {
                                    try {
                                        try {
                                            string2 = string;
                                            if (iSArray == null) break block19;
                                            if (string2 == null) break block20;
                                        }
                                        catch (MatchException matchException) {
                                            throw ru.djL(matchException);
                                        }
                                        string2 = string;
                                        if (iSArray == null) break block19;
                                    }
                                    catch (MatchException matchException) {
                                        throw ru.djL(matchException);
                                    }
                                    if (!string2.isEmpty()) break block21;
                                }
                                catch (MatchException matchException) {
                                    throw ru.djL(matchException);
                                }
                            }
                            string2 = string;
                        }
                        catch (MatchException matchException) {
                            throw ru.djL(matchException);
                        }
                    }
                    return string2;
                }
                StringBuilder stringBuilder3 = new StringBuilder(string.length());
                for (int i2 = 0; i2 < string.length(); ++i2) {
                    c2 = string.charAt(i2);
                    c2 = sRJBt.getOrDefault(Character.valueOf(c2), Character.valueOf(c2)).charValue();
                    try {
                        stringBuilder2 = stringBuilder3.append(c2);
                        if (iSArray != null) {
                            if (iSArray != null) continue;
                            break;
                        }
                        break block22;
                    }
                    catch (MatchException matchException) {
                        throw ru.djL(matchException);
                    }
                }
                stringBuilder2 = stringBuilder3;
            }
            String string3 = stringBuilder2.toString();
            c2 = ru.djI(string3) ? '\u0001' : '\u0000';
            try {
                if (c2 == '\u0000') {
                    return string3;
                }
            }
            catch (MatchException matchException) {
                throw ru.djL(matchException);
            }
            StringBuilder stringBuilder4 = new StringBuilder(string3.length());
            for (int i3 = 0; i3 < string3.length(); ++i3) {
                char c3 = string3.charAt(i3);
                c3 = VkWRj.getOrDefault(Character.valueOf(c3), Character.valueOf(c3)).charValue();
                try {
                    stringBuilder = stringBuilder4.append(c3);
                    if (iSArray != null) {
                        if (iSArray != null) continue;
                        break;
                    }
                    break block23;
                }
                catch (MatchException matchException) {
                    throw ru.djL(matchException);
                }
            }
            stringBuilder = stringBuilder4;
        }
        return stringBuilder.toString();
    }

    public static String djF(String string) {
        StringBuilder stringBuilder;
        block15: {
            iS[] iSArray;
            block14: {
                String string2;
                block12: {
                    long l2 = JJddW ^ 0xEB4B95D6DC8L;
                    iSArray = rm.div();
                    try {
                        block13: {
                            try {
                                try {
                                    try {
                                        string2 = string;
                                        if (iSArray == null) break block12;
                                        if (string2 == null) break block13;
                                    }
                                    catch (MatchException matchException) {
                                        throw ru.djL(matchException);
                                    }
                                    string2 = string;
                                    if (iSArray == null) break block12;
                                }
                                catch (MatchException matchException) {
                                    throw ru.djL(matchException);
                                }
                                if (!string2.isEmpty()) break block14;
                            }
                            catch (MatchException matchException) {
                                throw ru.djL(matchException);
                            }
                        }
                        string2 = string;
                    }
                    catch (MatchException matchException) {
                        throw ru.djL(matchException);
                    }
                }
                return string2;
            }
            StringBuilder stringBuilder2 = new StringBuilder(string.length());
            for (int i2 = 0; i2 < string.length(); ++i2) {
                char c2 = string.charAt(i2);
                try {
                    stringBuilder = stringBuilder2.append(cxxgt.getOrDefault(Character.valueOf(c2), Character.valueOf(c2)));
                    if (iSArray != null) {
                        if (iSArray != null) continue;
                        break;
                    }
                    break block15;
                }
                catch (MatchException matchException) {
                    throw ru.djL(matchException);
                }
            }
            stringBuilder = stringBuilder2;
        }
        return stringBuilder.toString();
    }

    private static MatchException djL(MatchException matchException) {
        return matchException;
    }

    private static boolean djI(String string) {
        char n2;
        block16: {
            block17: {
                iS[] iSArray;
                int n3;
                block13: {
                    long l2 = JJddW ^ 0x18E0BA9D9B98L;
                    char n4 = '\u0000';
                    n3 = 0;
                    iSArray = rm.div();
                    for (int i2 = 0; i2 < string.length(); ++i2) {
                        boolean bl2;
                        block14: {
                            char c2 = string.charAt(i2);
                            try {
                                block15: {
                                    try {
                                        try {
                                            try {
                                                n2 = ru.djJ(c2);
                                                if (iSArray == null) break block13;
                                                if (iSArray == null) break block14;
                                            }
                                            catch (MatchException matchException) {
                                                throw ru.djL(matchException);
                                            }
                                            if (n2 == '\u0000') break block15;
                                        }
                                        catch (MatchException matchException) {
                                            throw ru.djL(matchException);
                                        }
                                        ++n4;
                                        if (iSArray != null) continue;
                                    }
                                    catch (MatchException matchException) {
                                        throw ru.djL(matchException);
                                    }
                                }
                                bl2 = ru.djK(c2);
                            }
                            catch (MatchException matchException) {
                                throw ru.djL(matchException);
                            }
                        }
                        if (!bl2) continue;
                        ++n3;
                        if (iSArray != null) continue;
                    }
                    n2 = n4;
                }
                try {
                    try {
                        if (iSArray == null) break block16;
                        if (n2 < n3) break block17;
                    }
                    catch (MatchException matchException) {
                        throw ru.djL(matchException);
                    }
                    n2 = '\u0001';
                    break block16;
                }
                catch (MatchException matchException) {
                    throw ru.djL(matchException);
                }
            }
            n2 = '\u0000';
        }
        return n2 != '\u0000';
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private static boolean djJ(char c2) {
        CallSite callSite;
        char c3;
        block16: {
            iS[] iSArray;
            long l2;
            block14: {
                l2 = JJddW ^ 0x60EF8BF9B74CL;
                iSArray = rm.div();
                try {
                    block15: {
                        try {
                            try {
                                try {
                                    c3 = c2;
                                    callSite = ru.djO("e", (int)27750, (long)(0x16FF546D4526F804L ^ l2));
                                    if (iSArray == null) break block14;
                                    if (c3 < callSite) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw ru.djL(matchException);
                                }
                                c3 = c2;
                                if (iSArray == null) return c3 != '\u0000';
                            }
                            catch (MatchException matchException) {
                                throw ru.djL(matchException);
                            }
                            if (c3 <= ru.djO("e", (int)3734, (long)(0xA5794E6C0B11AA8L ^ l2))) return '\u0001' != '\u0000';
                        }
                        catch (MatchException matchException) {
                            throw ru.djL(matchException);
                        }
                    }
                    c3 = c2;
                    callSite = ru.djO("e", (int)9554, (long)(0x7B8D0D0A39DA3116L ^ l2));
                }
                catch (MatchException matchException) {
                    throw ru.djL(matchException);
                }
            }
            try {
                try {
                    try {
                        if (iSArray == null) break block16;
                        if (c3 < callSite) return '\u0000' != '\u0000';
                    }
                    catch (MatchException matchException) {
                        throw ru.djL(matchException);
                    }
                    c3 = c2;
                    if (iSArray == null) return c3 != '\u0000';
                }
                catch (MatchException matchException) {
                    throw ru.djL(matchException);
                }
                callSite = ru.djO("e", (int)12907, (long)(0x13E5C69AB27B263CL ^ l2));
            }
            catch (MatchException matchException) {
                throw ru.djL(matchException);
            }
        }
        if (c3 > callSite) return '\u0000' != '\u0000';
        return '\u0001' != '\u0000';
    }

    private static CallSite djO(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ru" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private static boolean djK(char c2) {
        CallSite callSite;
        boolean bl2;
        block6: {
            long l2 = JJddW ^ 0x11E3D003B6FCL;
            iS[] iSArray = rm.div();
            try {
                try {
                    try {
                        bl2 = c2;
                        callSite = ru.djO("e", (int)12553, (long)(0x4EFB882D769CA4F0L ^ l2));
                        if (iSArray == null) break block6;
                        if (bl2 < callSite) return false;
                    }
                    catch (MatchException matchException) {
                        throw ru.djL(matchException);
                    }
                    bl2 = c2;
                    if (iSArray == null) return bl2;
                }
                catch (MatchException matchException) {
                    throw ru.djL(matchException);
                }
                callSite = ru.djO("e", (int)25164, (long)(0xEFF8F636442F7E4L ^ l2));
            }
            catch (MatchException matchException) {
                throw ru.djL(matchException);
            }
        }
        if (bl2 > callSite) return false;
        return true;
    }

    private static int djN(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = ru.djM(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static boolean djH(String string) {
        int n2;
        iS[] iSArray;
        block12: {
            block13: {
                String string2;
                block11: {
                    long l2 = JJddW ^ 0x48E9DA8EEB48L;
                    iSArray = rm.div();
                    try {
                        string2 = string;
                        if (iSArray == null) break block11;
                        if (string2 == null) return false;
                    }
                    catch (MatchException matchException) {
                        throw ru.djL(matchException);
                    }
                    string2 = string;
                }
                try {
                    try {
                        n2 = string2.isEmpty();
                        if (iSArray == null) break block12;
                        if (n2 == 0) break block13;
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw ru.djL(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw ru.djL(matchException);
                }
            }
            n2 = 0;
        }
        int n3 = n2;
        do {
            block14: {
                if (n3 >= string.length()) return false;
                try {
                    boolean bl2;
                    try {
                        bl2 = sRJBt.containsKey(Character.valueOf(string.charAt(n3)));
                        if (iSArray == null) return bl2;
                        if (iSArray == null) boolean bl3;
                        return bl3;
                    }
                    catch (MatchException matchException) {
                        throw ru.djL(matchException);
                    }
                    if (!bl2) break block14;
                    return true;
                }
                catch (MatchException matchException) {
                    throw ru.djL(matchException);
                }
            }
            ++n3;
        } while (iSArray != null);
        return false;
    }

    private static int djM(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x2E7C;
        if (TwbYR[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = UzssG[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])edNag.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    edNag.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ru", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            ru.TwbYR[n3] = n4;
        }
        return TwbYR[n3];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ru.class, "djN", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

