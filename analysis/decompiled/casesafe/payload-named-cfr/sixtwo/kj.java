/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.pipeline.RenderPipeline
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.textures.GpuTexture
 *  mixin.accessors.MinecraftAccessor
 *  net.minecraft.client.gl.Framebuffer
 *  org.lwjgl.glfw.GLFW
 */
package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.systems.RenderPass;
import com.mojang.blaze3d.textures.GpuTexture;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import java.util.function.Consumer;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import mixin.accessors.MinecraftAccessor;
import net.minecraft.client.gl.Framebuffer;
import org.lwjgl.glfw.GLFW;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jL;
import sixtwo.jo;
import sixtwo.kR;
import sixtwo.kk;
import sixtwo.kn;
import sixtwo.ls;
import sixtwo.lt;
import sixtwo.lu;
import sixtwo.rD;

public final class kj {
    private static final ls mNSdG;
    private static final ls dVZad;
    private static final long LGtJN;
    private static final String[] wMCjL;
    private static final String[] wOOLq;
    private static final Map LaLaT;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                kj.LGtJN = gb.aYR(-5100149887312655670L, -641086698390901533L, MethodHandles.lookup().lookupClass()).a(231343024895401L);
                kj.LaLaT = new HashMap<K, V>(13);
                var0 = kj.LGtJN ^ 43175818618112L;
                var2_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var0 >>> 56);
                for (var3_2 = 1; var3_2 < 8; ++var3_2) {
                    v2 = v2;
                    v2[var3_2] = (byte)(var0 << var3_2 * 8 >>> 56);
                }
                var2_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var9_3 = new String[46];
                var7_4 = 0;
                var6_5 = "\u0094\u0095\u0004\u00d9!O9l\u00cfL\u0019\u0098<1G\u00f5\\_\u008e+\u007fB\u001e:\u0018\u0016c#\u00e6{v\u001b\u007f\u000e%w\u00c1K!\u0083\u00b2 .\u00e9\u00f9\u00b6\u00ba\u0012\u00a6 \\\u00e6\u0012\u008a\u0005\u00c0\u00f7\u00fd\u001e\u0018\u00ed\u0011\u00c3\u00bc\u008dn\u0096Rh\u00c2+\u00af\u00fd \f\u008f\u00fe\u0007M\u00c6\u0004+\u0018\u0085\u00df\u00c8@\u00ca}\u00fe\u00c9\u00dcY\u00e7[w\u00ad\u00da\u00f0\u00932KL\u00da\u00b7\u00eb, v\u00bd@\u001e\u00c6#p\u00e9\u00f4\b\u008a\u00bcr\u00bf\u0017\u00d1\u0007\u00af+\u009668V6/=\u00fa\u00f1R\u0005\u00cb\u0012\u0018g\u00a9\u00dd\u00b4\u009e\u00de&\u008cEX\u0014\u008d\u00d1/M\u00a4T\u008b\u0092\u009e`\u00a7\u00d9\u00e6 o\u00fb$\u00d6\u00b9\u008d\bU \u0095\u00ce\u000f\u009d\u0010\u0000\u00db\u00d2\u00bc\u00ea\u0004\u0006\u00d5t\u00c5\u00e59\u00a5G\u008ao\u00b2E\u0010\u008c\u001eG\u00db\u00f6\u00fb\u00e9\u000e\u00e8f\u00ae\\\t\u00e2\u00a7Z\u0010\u008b\u008f\u00a4\u00acN7D|\u009e\u009a\u008f\u00e1\u001f22\u00b9\u0010*\u0015\u00b0\u00f4_\u00b7\u008b\u0011\u00a8;\u008b\u0098P\"\u00d0a\u0010f`\u00eek2\u00b6\u00c7)\u00ab\u001b\u00dd\u00c9@\u00e4\u00ef\u00ca\u0010K2\u00ee\u00a8\u00e0x\u0004\u00a2\u00ca\u00ce\u0013 b\u00d4\u0083w Q\u0011\u00d9\u00a9B\n\u001b\u0018u\u00e2=\u00cc\u00fb\u009f\u00ddMy\u0081s\u00f6\u00bdt\u0080H\u00d6\u00f7\u00f5\u00b3\u00cf\u009c]\u00ad\u0018@\u0081c\u00af\u0096\f%\u001a\u008f\u00ae\t\u00c0^\u009d\u0011\u000b&\u00b8C\u0019\u00f8\u00bc0[ \u00e57\t\u00ed\u00ff\u0007\u00c8\u00db-){W\u00a4<\u0014\u0084\u00a2\u00cb\"\u00ffz\u009c\u000e\u00a4\u00e7\u00d3(v\u0095\u00a9\u00a6o\u0010v\u00c46\u00d3\u00d3h\u00a1\u0087\u00d2W\u008f\u00b2l\u00ae\u00f2F(\u00ea\u0086\u0093N\u0086\u0087C*\u00ae\u000f\u00dd\u008b\u0097f\u000b8\u00dc.\u0084}\u00f1\u00b2+\u0082M^\u008c\u001c\u00c5\u00ee\u00f8g\u001f\u00dcP\u00e8\u0005\u00d7t\u009e \u00b5)P\u0001/\u00d7\u00f1\u001c\t\u00ff\u00bf\u00d1+\u00f1\u009f\u00d1q\u00e8+{\u00fe\u0099x\u00bd\u0003\u00fb\\\u00f5}d\u00a7\u00f5 \u00fa\u0087\u0081p\u0084\u0086\u009a\u00e0n\u00b2C\u00e9\u001a\u00b6}\u009aS[\u00b9k\u00de\u0096\u00b5\u00d4\u00d4\u00d3\u00be{\u00c4\u0088\u00c6\u00bc \u00c6\u00c3b\u00cb\u00a7*pa\u00dd\u00a9i\u0085\u00fb\u00bf3\u00a0\"\u00b9\u00b0o6_\u001ba\u00b0\b\u00e7T\u00a3\u00e4=\u00dc\u0018]\u00c7\u0097\u00a2\u0000\u000b\u00a9=\u008f\u00cbf\u008b\u00f0\u0000\u00c8\"\u008ef\u00ac_?\u00d4k\u0080 \u00fbu\u00cd\u0089\u00df\u000f&\u00bc\u00dbI\u0006\u00ddL\u00a7\u00e5X\u00d6\u00da\u00cd\u009e\u00f7\u00a1#\u0094'\u00c3\u00eb\u00ac\u00b2\u00aan\u0000 _\u008dH\u009e\u00eaao4\u00b8\u0084(\u00cb\u008d9(SOJS\u0088_\u00b9O|\u00a5\u00b9L\u00ffP\u00b7\u0088\u00de($\u009d\u0003\u00e9\u00e4P\u001b\u00ba\u00ee\u0094K\n^\u00a0 \u0089\u00c5\u00e6\u0002\u00b4\u00b7PJ\u0004\u00dc\u00fa\u00f1\t[K\u001b\u00daSI\u00df\u00cc@\u00fd\u00c2\u007f\u0010\u00d9\u00bd\u00b2\u009f&\u00e1\u0001\u00b7\u00eaf\u00a0\u00ae\u00ea\u008b\u0080; \u008c\u00b7\u0084\u0089\u00a8:\u00b3V\u00d4m\u0080\u001b\u001ftg\u00f2\u00d0\"\u00c9\u00fb\u00d1\u00f0\u0098\u00b4A\u00e6\u0080\u00dbdez| \u00b9\u0005\u00f0\u00f78\u0017\\\u000e\u001c\u00b6\u00ee\u0000\u00af(\u00c5\u0019nYI\u00fa\u00f8g^\u0097XI\u0087\u00df\u009b\u0017\u0081\u008e\u0010C\u00f4\u0096Z\u009e_\u00c5.\u00c8\u00f4R\u00ca\u00deoR\u008d\u0010$\u008b\u00d75\u00ab\u0003G\u0095\u00eb-\u00e6\u0095L\u00cf\u0087[\u0018\u000e\u00ea\u0087\u008b\u0018\u00b1\u00e3\u00bb \u00aa\u001d\u00eb\u00b8?\u00a7`Y\u00fd\u00ef\u00c0\u00de\u0013'\u00b7 \u00a1#$\u007f\u0095\u00d2\u00da\u00a4\u00d7\u00f5&\u00b8\u0080['%j\u0000\u0083o\u00d9\u00b3Q\u008bJ\u00f9\u00fc#K\u00b1\u00a0\u00da \u00a3\u00d6\u00a04\u008csR\u00e0G\u001c\"c\u00ac\u00a5\u001e\u00f44#V\u00cc\u00de\u0001\u00e3\u0018\u008c\u00d9\u00b9\"\u00d3\u00e2\u001e\u00a4([4\u00fc9I\u0086K\u0087\u001du\u00d8\u0017F\u0090\u00f1:6\u00879\u00ea:\u00ac\u008d\u00fb\u00e4=!\u0015\u00aen\u0088\u0006\u00d1\u008d\u0086\u0001Fp~\u00cc\u0018?zC\u00e1Mc\u00a3\u00e7\u00c4%\u009d\u009c\u00c7\u009b\u00de\u00d2\u00a8\u001b\u000f4{D\u00dde \u00db\u0090\u00a6\b;\u001a\u00ba3\u0012\u00a9\u00db3\u001f]^\u00ba\u00acq\u000f.\u00c8\u0094TJ\u0005'\u0005\u00e4_A\u00fe[ h\u0093)\u00d8\u0096\u00bf\u00c3A>\t\u00ba\u0016\u00c4\u0093r^\u0080S\u00d5\u00d3\u009b\u00ae\u0002\n\u00dc7\u0017\u00f2,rn\u0002\u0010Y\u00a2\u009b^\u0094%]\u00bf9\u00dbb\u00eb\u0011\b\u009f\u00f5\u0018\u0017\u0000\u00c5\u00e1lp_\u007f\u008dh\u00c4\u0010(u\u00d2\u00faI\u00aaR\u007f\u00a9,z\u00ad \u00e5\u001c\u00fb\u00ec\u00ff\u00a3\u00a4\u0010\u0006\u00d4\u00f1\u009a\u009f\u001d4\u00a1\u00c2d\u0019E\u0019\u0080\u00f9\u00c9[\u0083\u009c<\u00d8\u00da3\u00ba )e\u00ebH\u00ce\u001c\u00eb\u00be\u0001\u00ff\u0014\u00c1\u008a\u00cc\u0093\u00ed\u001f\u0017\u00f8\u00c6\u00a4\u00d5t\tspJ\u009cK\t\u0097\u00ae\u0010\\\u00b8\u00cf\u0092\u00b6\u00ad\u00c02\u00e4\u0098\u0088;4\u00f5E! \u009f\u0005)v\u00eb\u00ef\u0093c|\"\u0019\u00d5\t\u00f1\u00db\u00fcV\u0006\u007f\u00b8\u00cf\u00ec\u00b7\u00eb\u00a0_\u0084\"[i\u008b\u001f \u00fcg3\u008e\u00bc?y\u00976\u00ae\u00cb\u00e8\u00b2\t\u00da\u00f1\u00b6\u009dv\u00baJ\u009c\u00e7\u0085\u000ba\u0007A\u00d1i\u00db8\u0010\u0085\u00bf\u00c0\u00a0\u00e6b\u00c7\u008fI.\u0017\u00b4\u00a6\\S%";
                var8_6 = "\u0094\u0095\u0004\u00d9!O9l\u00cfL\u0019\u0098<1G\u00f5\\_\u008e+\u007fB\u001e:\u0018\u0016c#\u00e6{v\u001b\u007f\u000e%w\u00c1K!\u0083\u00b2 .\u00e9\u00f9\u00b6\u00ba\u0012\u00a6 \\\u00e6\u0012\u008a\u0005\u00c0\u00f7\u00fd\u001e\u0018\u00ed\u0011\u00c3\u00bc\u008dn\u0096Rh\u00c2+\u00af\u00fd \f\u008f\u00fe\u0007M\u00c6\u0004+\u0018\u0085\u00df\u00c8@\u00ca}\u00fe\u00c9\u00dcY\u00e7[w\u00ad\u00da\u00f0\u00932KL\u00da\u00b7\u00eb, v\u00bd@\u001e\u00c6#p\u00e9\u00f4\b\u008a\u00bcr\u00bf\u0017\u00d1\u0007\u00af+\u009668V6/=\u00fa\u00f1R\u0005\u00cb\u0012\u0018g\u00a9\u00dd\u00b4\u009e\u00de&\u008cEX\u0014\u008d\u00d1/M\u00a4T\u008b\u0092\u009e`\u00a7\u00d9\u00e6 o\u00fb$\u00d6\u00b9\u008d\bU \u0095\u00ce\u000f\u009d\u0010\u0000\u00db\u00d2\u00bc\u00ea\u0004\u0006\u00d5t\u00c5\u00e59\u00a5G\u008ao\u00b2E\u0010\u008c\u001eG\u00db\u00f6\u00fb\u00e9\u000e\u00e8f\u00ae\\\t\u00e2\u00a7Z\u0010\u008b\u008f\u00a4\u00acN7D|\u009e\u009a\u008f\u00e1\u001f22\u00b9\u0010*\u0015\u00b0\u00f4_\u00b7\u008b\u0011\u00a8;\u008b\u0098P\"\u00d0a\u0010f`\u00eek2\u00b6\u00c7)\u00ab\u001b\u00dd\u00c9@\u00e4\u00ef\u00ca\u0010K2\u00ee\u00a8\u00e0x\u0004\u00a2\u00ca\u00ce\u0013 b\u00d4\u0083w Q\u0011\u00d9\u00a9B\n\u001b\u0018u\u00e2=\u00cc\u00fb\u009f\u00ddMy\u0081s\u00f6\u00bdt\u0080H\u00d6\u00f7\u00f5\u00b3\u00cf\u009c]\u00ad\u0018@\u0081c\u00af\u0096\f%\u001a\u008f\u00ae\t\u00c0^\u009d\u0011\u000b&\u00b8C\u0019\u00f8\u00bc0[ \u00e57\t\u00ed\u00ff\u0007\u00c8\u00db-){W\u00a4<\u0014\u0084\u00a2\u00cb\"\u00ffz\u009c\u000e\u00a4\u00e7\u00d3(v\u0095\u00a9\u00a6o\u0010v\u00c46\u00d3\u00d3h\u00a1\u0087\u00d2W\u008f\u00b2l\u00ae\u00f2F(\u00ea\u0086\u0093N\u0086\u0087C*\u00ae\u000f\u00dd\u008b\u0097f\u000b8\u00dc.\u0084}\u00f1\u00b2+\u0082M^\u008c\u001c\u00c5\u00ee\u00f8g\u001f\u00dcP\u00e8\u0005\u00d7t\u009e \u00b5)P\u0001/\u00d7\u00f1\u001c\t\u00ff\u00bf\u00d1+\u00f1\u009f\u00d1q\u00e8+{\u00fe\u0099x\u00bd\u0003\u00fb\\\u00f5}d\u00a7\u00f5 \u00fa\u0087\u0081p\u0084\u0086\u009a\u00e0n\u00b2C\u00e9\u001a\u00b6}\u009aS[\u00b9k\u00de\u0096\u00b5\u00d4\u00d4\u00d3\u00be{\u00c4\u0088\u00c6\u00bc \u00c6\u00c3b\u00cb\u00a7*pa\u00dd\u00a9i\u0085\u00fb\u00bf3\u00a0\"\u00b9\u00b0o6_\u001ba\u00b0\b\u00e7T\u00a3\u00e4=\u00dc\u0018]\u00c7\u0097\u00a2\u0000\u000b\u00a9=\u008f\u00cbf\u008b\u00f0\u0000\u00c8\"\u008ef\u00ac_?\u00d4k\u0080 \u00fbu\u00cd\u0089\u00df\u000f&\u00bc\u00dbI\u0006\u00ddL\u00a7\u00e5X\u00d6\u00da\u00cd\u009e\u00f7\u00a1#\u0094'\u00c3\u00eb\u00ac\u00b2\u00aan\u0000 _\u008dH\u009e\u00eaao4\u00b8\u0084(\u00cb\u008d9(SOJS\u0088_\u00b9O|\u00a5\u00b9L\u00ffP\u00b7\u0088\u00de($\u009d\u0003\u00e9\u00e4P\u001b\u00ba\u00ee\u0094K\n^\u00a0 \u0089\u00c5\u00e6\u0002\u00b4\u00b7PJ\u0004\u00dc\u00fa\u00f1\t[K\u001b\u00daSI\u00df\u00cc@\u00fd\u00c2\u007f\u0010\u00d9\u00bd\u00b2\u009f&\u00e1\u0001\u00b7\u00eaf\u00a0\u00ae\u00ea\u008b\u0080; \u008c\u00b7\u0084\u0089\u00a8:\u00b3V\u00d4m\u0080\u001b\u001ftg\u00f2\u00d0\"\u00c9\u00fb\u00d1\u00f0\u0098\u00b4A\u00e6\u0080\u00dbdez| \u00b9\u0005\u00f0\u00f78\u0017\\\u000e\u001c\u00b6\u00ee\u0000\u00af(\u00c5\u0019nYI\u00fa\u00f8g^\u0097XI\u0087\u00df\u009b\u0017\u0081\u008e\u0010C\u00f4\u0096Z\u009e_\u00c5.\u00c8\u00f4R\u00ca\u00deoR\u008d\u0010$\u008b\u00d75\u00ab\u0003G\u0095\u00eb-\u00e6\u0095L\u00cf\u0087[\u0018\u000e\u00ea\u0087\u008b\u0018\u00b1\u00e3\u00bb \u00aa\u001d\u00eb\u00b8?\u00a7`Y\u00fd\u00ef\u00c0\u00de\u0013'\u00b7 \u00a1#$\u007f\u0095\u00d2\u00da\u00a4\u00d7\u00f5&\u00b8\u0080['%j\u0000\u0083o\u00d9\u00b3Q\u008bJ\u00f9\u00fc#K\u00b1\u00a0\u00da \u00a3\u00d6\u00a04\u008csR\u00e0G\u001c\"c\u00ac\u00a5\u001e\u00f44#V\u00cc\u00de\u0001\u00e3\u0018\u008c\u00d9\u00b9\"\u00d3\u00e2\u001e\u00a4([4\u00fc9I\u0086K\u0087\u001du\u00d8\u0017F\u0090\u00f1:6\u00879\u00ea:\u00ac\u008d\u00fb\u00e4=!\u0015\u00aen\u0088\u0006\u00d1\u008d\u0086\u0001Fp~\u00cc\u0018?zC\u00e1Mc\u00a3\u00e7\u00c4%\u009d\u009c\u00c7\u009b\u00de\u00d2\u00a8\u001b\u000f4{D\u00dde \u00db\u0090\u00a6\b;\u001a\u00ba3\u0012\u00a9\u00db3\u001f]^\u00ba\u00acq\u000f.\u00c8\u0094TJ\u0005'\u0005\u00e4_A\u00fe[ h\u0093)\u00d8\u0096\u00bf\u00c3A>\t\u00ba\u0016\u00c4\u0093r^\u0080S\u00d5\u00d3\u009b\u00ae\u0002\n\u00dc7\u0017\u00f2,rn\u0002\u0010Y\u00a2\u009b^\u0094%]\u00bf9\u00dbb\u00eb\u0011\b\u009f\u00f5\u0018\u0017\u0000\u00c5\u00e1lp_\u007f\u008dh\u00c4\u0010(u\u00d2\u00faI\u00aaR\u007f\u00a9,z\u00ad \u00e5\u001c\u00fb\u00ec\u00ff\u00a3\u00a4\u0010\u0006\u00d4\u00f1\u009a\u009f\u001d4\u00a1\u00c2d\u0019E\u0019\u0080\u00f9\u00c9[\u0083\u009c<\u00d8\u00da3\u00ba )e\u00ebH\u00ce\u001c\u00eb\u00be\u0001\u00ff\u0014\u00c1\u008a\u00cc\u0093\u00ed\u001f\u0017\u00f8\u00c6\u00a4\u00d5t\tspJ\u009cK\t\u0097\u00ae\u0010\\\u00b8\u00cf\u0092\u00b6\u00ad\u00c02\u00e4\u0098\u0088;4\u00f5E! \u009f\u0005)v\u00eb\u00ef\u0093c|\"\u0019\u00d5\t\u00f1\u00db\u00fcV\u0006\u007f\u00b8\u00cf\u00ec\u00b7\u00eb\u00a0_\u0084\"[i\u008b\u001f \u00fcg3\u008e\u00bc?y\u00976\u00ae\u00cb\u00e8\u00b2\t\u00da\u00f1\u00b6\u009dv\u00baJ\u009c\u00e7\u0085\u000ba\u0007A\u00d1i\u00db8\u0010\u0085\u00bf\u00c0\u00a0\u00e6b\u00c7\u008fI.\u0017\u00b4\u00a6\\S%".length();
                var5_7 = 24;
                var4_8 = -1;
lbl20:
                // 2 sources

                while (true) {
                    v3 = ++var4_8;
                    v4 = var6_5.substring(v3, v3 + var5_7);
                    v5 = -1;
                    break block10;
                    break;
                }
lbl25:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = kj.bPD(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "m\u0093\u008a\u00f4\u0092g@\\K$\u00e8\u0016\u00e2\u000e\u00b1\u00d2\u0018\u0089\u00b3\u00b3n\u008c\u00ee\u00ac\t@\u00f5\u00fcT\u00bd\u00f8\u00f9\u00b0\u00e7/\u00a4\u00aav~k\u00a4";
                    var8_6 = "m\u0093\u008a\u00f4\u0092g@\\K$\u00e8\u0016\u00e2\u000e\u00b1\u00d2\u0018\u0089\u00b3\u00b3n\u008c\u00ee\u00ac\t@\u00f5\u00fcT\u00bd\u00f8\u00f9\u00b0\u00e7/\u00a4\u00aav~k\u00a4".length();
                    var5_7 = 16;
                    var4_8 = -1;
lbl34:
                    // 2 sources

                    while (true) {
                        v6 = ++var4_8;
                        v4 = var6_5.substring(v6, v6 + var5_7);
                        v5 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl39:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = kj.bPD(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    break block11;
                    break;
                }
            }
            var10_9 = var2_1.doFinal(v4.getBytes("ISO-8859-1"));
            switch (v5) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl51:
                // 1 sources

                ** continue;
            }
        }
        kj.wMCjL = var9_3;
        kj.wOOLq = new String[46];
        kj.mNSdG = new ls();
        kj.dVZad = new ls();
    }

    private static CallSite bPG(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kj" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Loose catch block
     */
    private static void bPv(Runnable runnable, RenderPipeline renderPipeline, Consumer<RenderPass> consumer) {
        block7: {
            block8: {
                long l2 = LGtJN ^ 0x5EB7586F15DEL;
                String string = kk.bPU();
                if (string == null) break block7;
                try {
                    block10: {
                        if (kj.bPw()) break block8;
                        break block10;
                        catch (MatchException matchException) {
                            throw kj.bPC(matchException);
                        }
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw kj.bPC(matchException);
                }
            }
            dVZad.caK();
            dVZad.caM();
        }
        MinecraftAccessor minecraftAccessor = (MinecraftAccessor)rD.dlmvG;
        Framebuffer framebuffer = rD.dlmvG.getFramebuffer();
        minecraftAccessor.setMainRenderTarget((Framebuffer)dVZad);
        try {
            kn.bQo(runnable);
        }
        finally {
            minecraftAccessor.setMainRenderTarget(framebuffer);
        }
        Framebuffer framebuffer2 = rD.dlmvG.getFramebuffer();
        kn.bQr(renderPipeline, framebuffer2, renderPass -> {
            long l2 = LGtJN ^ 0x4CC60D236A9L;
            renderPass.bindTexture((String)((Object)kj.bPG("u", (int)778, (long)(0x36B30734820F7641L ^ l2))), dVZad.getColorAttachmentView(), lt.caX());
            renderPass.bindTexture((String)((Object)kj.bPG("u", (int)20531, (long)(0x33F7D835062DA56BL ^ l2))), mNSdG.getColorAttachmentView(), lt.caX());
            consumer.accept((RenderPass)renderPass);
        });
    }

    public static boolean bPw() {
        block9: {
            GpuTexture gpuTexture;
            Framebuffer framebuffer;
            block10: {
                String string;
                block8: {
                    long l2 = LGtJN ^ 0x768E96FE0DD4L;
                    framebuffer = jo.bEh();
                    string = kk.bPU();
                    try {
                        try {
                            mNSdG.caL(framebuffer);
                            gpuTexture = framebuffer.getColorAttachment();
                            if (string == null) break block8;
                            if (gpuTexture == null) break block9;
                        }
                        catch (MatchException matchException) {
                            throw kj.bPC(matchException);
                        }
                        gpuTexture = mNSdG.getColorAttachment();
                    }
                    catch (MatchException matchException) {
                        throw kj.bPC(matchException);
                    }
                }
                try {
                    try {
                        if (string == null) break block10;
                        if (gpuTexture == null) break block9;
                    }
                    catch (MatchException matchException) {
                        throw kj.bPC(matchException);
                    }
                    gpuTexture = framebuffer.getColorAttachment();
                }
                catch (MatchException matchException) {
                    throw kj.bPC(matchException);
                }
            }
            lu.cbf(gpuTexture, mNSdG.getColorAttachment(), 0, 0, 0, 0, 0, framebuffer.textureWidth, framebuffer.textureHeight);
            return true;
        }
        return false;
    }

    private static Object bPF(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = kj.bPE(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static MatchException bPC(MatchException matchException) {
        return matchException;
    }

    private static String bPE(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x23DE;
        if (wOOLq[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])LaLaT.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    LaLaT.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kj", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = wMCjL[n3].getBytes("ISO-8859-1");
            kj.wOOLq[n3] = kj.bPD(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return wOOLq[n3];
    }

    private static String bPD(byte[] byArray) {
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

    public static void bPs(Runnable runnable, float[] fArray, float f2, float f3, float f4, float f5, float f6, float f7, float f8) {
        kj.bPv(runnable, kR.OkSsT, renderPass -> {
            long l2 = LGtJN ^ 0x98B096B4942L;
            jL.aXSot.bJl();
            Framebuffer framebuffer = rD.dlmvG.getFramebuffer();
            jL.aXSot.bJr((String)((Object)kj.bPG("u", (int)4430, (long)(0x59201AC0DB3B9BC3L ^ l2))), framebuffer.textureWidth, framebuffer.textureHeight);
            jL.aXSot.bJq((String)((Object)kj.bPG("u", (int)29091, (long)(0x7D769F9DA3B97B0DL ^ l2))), (float)GLFW.glfwGetTime());
            jL.aXSot.bJt((String)((Object)kj.bPG("u", (int)30288, (long)(0x1DB6E31AB824FCE0L ^ l2))), fArray[0], fArray[1], fArray[2], fArray[3]);
            jL.aXSot.bJq((String)((Object)kj.bPG("u", (int)19794, (long)(0x624DB4857D27C7E4L ^ l2))), f2);
            jL.aXSot.bJq((String)((Object)kj.bPG("u", (int)25681, (long)(0x1F847612009DEEECL ^ l2))), f3);
            jL.aXSot.bJt((String)((Object)kj.bPG("u", (int)7861, (long)(0x47F6222ED3AA9417L ^ l2))), 1.0f, 1.0f, 1.0f, 1.0f);
            jL.aXSot.bJq((String)((Object)kj.bPG("u", (int)11014, (long)(0x5B1C2364535521B2L ^ l2))), f4);
            jL.aXSot.bJq((String)((Object)kj.bPG("u", (int)8410, (long)(0x35CF63059E6DAA5EL ^ l2))), f5);
            jL.aXSot.bJq((String)((Object)kj.bPG("u", (int)16517, (long)(0x1F62A8BE1853CA3EL ^ l2))), f6);
            jL.aXSot.bJq((String)((Object)kj.bPG("u", (int)18954, (long)(0x7C6005ED62C2C083L ^ l2))), f7);
            jL.aXSot.bJq((String)((Object)kj.bPG("u", (int)16613, (long)(0x3894919A476C4A5BL ^ l2))), f8);
        });
    }

    public static void bPr(Runnable runnable, float f2, float f3, float f4, float f5, float[] fArray, float f6, float f7, float[] fArray2, float f8) {
        kj.bPv(runnable, kR.DrDBo, renderPass -> {
            long l2 = LGtJN ^ 0x17D1C77A8024L;
            jL.Dract.bJl();
            Framebuffer framebuffer = rD.dlmvG.getFramebuffer();
            jL.Dract.bJr((String)((Object)kj.bPG("u", (int)6408, (long)(0x3117343E7EA6DAD7L ^ l2))), framebuffer.textureWidth, framebuffer.textureHeight);
            jL.Dract.bJq((String)((Object)kj.bPG("u", (int)30015, (long)(0x582C7B1AD0D4B6F0L ^ l2))), f2);
            jL.Dract.bJq((String)((Object)kj.bPG("u", (int)28541, (long)(0x21915D5F749AC97L ^ l2))), f3);
            jL.Dract.bJq((String)((Object)kj.bPG("u", (int)8959, (long)(0x2713111B95AE6135L ^ l2))), f4);
            jL.Dract.bJq((String)((Object)kj.bPG("u", (int)6824, (long)(0x33CF14C5250CD948L ^ l2))), f5);
            jL.Dract.bJt((String)((Object)kj.bPG("u", (int)12990, (long)(0x22599B5AE8C1715DL ^ l2))), fArray[0], fArray[1], fArray[2], fArray[3]);
            jL.Dract.bJt((String)((Object)kj.bPG("u", (int)4505, (long)(0x65D01137751AD271L ^ l2))), 1.0f, 1.0f, 1.0f, 1.0f);
            jL.Dract.bJq((String)((Object)kj.bPG("u", (int)7958, (long)(0x466CD550B4605CF2L ^ l2))), f6);
            jL.Dract.bJq((String)((Object)kj.bPG("u", (int)2867, (long)(0x68280F71C069C8FDL ^ l2))), f7);
            jL.Dract.bJt((String)((Object)kj.bPG("u", (int)26839, (long)(0x370A99C842B22B30L ^ l2))), fArray2[0], fArray2[1], fArray2[2], fArray[3]);
            jL.Dract.bJq((String)((Object)kj.bPG("u", (int)27190, (long)(0x6ACE3B93F8A2A9DFL ^ l2))), f8);
        });
    }

    public static void bPt(Runnable runnable, float[] fArray, float f2, float f3, float f4) {
        kj.bPv(runnable, kR.gMhtR, renderPass -> {
            long l2 = LGtJN ^ 0x4850B927B53L;
            jL.LsZdJ.bJl();
            Framebuffer framebuffer = rD.dlmvG.getFramebuffer();
            jL.LsZdJ.bJr((String)((Object)kj.bPG("u", (int)6408, (long)(0x3117276AB24E21A0L ^ l2))), framebuffer.textureWidth, framebuffer.textureHeight);
            jL.LsZdJ.bJq((String)((Object)kj.bPG("u", (int)1864, (long)(0x70040F016283FD9L ^ l2))), (float)GLFW.glfwGetTime());
            jL.LsZdJ.bJq((String)((Object)kj.bPG("u", (int)21772, (long)(0xD502257082B6DA2L ^ l2))), f4);
            jL.LsZdJ.bJt((String)((Object)kj.bPG("u", (int)23144, (long)(0x3D502CDE1A8362D3L ^ l2))), fArray[0], fArray[1], fArray[2], fArray[3]);
            jL.LsZdJ.bJq((String)((Object)kj.bPG("u", (int)850, (long)(0x4D38DCDD3E31BBF1L ^ l2))), f2);
            jL.LsZdJ.bJq((String)((Object)kj.bPG("u", (int)5175, (long)(0x1C0103C58A22AC81L ^ l2))), f3);
            jL.LsZdJ.bJt((String)((Object)kj.bPG("u", (int)4505, (long)(0x65D00263B9F22906L ^ l2))), 1.0f, 1.0f, 1.0f, 1.0f);
        });
    }

    public static void bPu(Runnable runnable, float f2, float f3, float f4, float f5, float f6, float f7, float f8, float[] fArray, float[] fArray2, float[] fArray3, float[] fArray4, float f9, float f10, float f11, float f12, float f13, float f14) {
        long l2 = LGtJN ^ 0x4909DF140324L;
        String string = kk.bPU();
        kj.bPv(runnable, kR.ZxxjD, renderPass -> {
            long l2 = LGtJN ^ 0x449648BEA260L;
            jL.vcspz.bJl();
            Framebuffer framebuffer = rD.dlmvG.getFramebuffer();
            jL.vcspz.bJq((String)((Object)kj.bPG("u", (int)1864, (long)(0x70000E35504E6EAL ^ l2))), (float)GLFW.glfwGetTime());
            jL.vcspz.bJr((String)((Object)kj.bPG("u", (int)6408, (long)(0x31176779F162F893L ^ l2))), framebuffer.textureWidth, framebuffer.textureHeight);
            jL.vcspz.bJt((String)((Object)kj.bPG("u", (int)4505, (long)(0x65D04270FADEF035L ^ l2))), 1.0f, 1.0f, 1.0f, 1.0f);
            jL.vcspz.bJq((String)((Object)kj.bPG("u", (int)32016, (long)(0x34076DAD95D39C9FL ^ l2))), f2);
            jL.vcspz.bJq((String)((Object)kj.bPG("u", (int)18462, (long)(0x6F7474C851E299AL ^ l2))), f3);
            jL.vcspz.bJq((String)((Object)kj.bPG("u", (int)29496, (long)(0x10763C84BF6C92ADL ^ l2))), f4);
            jL.vcspz.bJq((String)((Object)kj.bPG("u", (int)26957, (long)(0x690671707EAD08CEL ^ l2))), f5);
            jL.vcspz.bJq((String)((Object)kj.bPG("u", (int)6451, (long)(0x241DE3A784CD7896L ^ l2))), f6);
            jL.vcspz.bJq((String)((Object)kj.bPG("u", (int)16636, (long)(0x3D23B422B971217AL ^ l2))), f7);
            jL.vcspz.bJq((String)((Object)kj.bPG("u", (int)10949, (long)(0x1E19CA5D2426CB64L ^ l2))), f8);
            jL.vcspz.bJs((String)((Object)kj.bPG("u", (int)3139, (long)(0x6DB4D200785B6DCEL ^ l2))), fArray[0], fArray[1], fArray[2]);
            jL.vcspz.bJs((String)((Object)kj.bPG("u", (int)31414, (long)(0x65B47ED8DC251B3FL ^ l2))), fArray2[0], fArray2[1], fArray2[2]);
            jL.vcspz.bJs((String)((Object)kj.bPG("u", (int)3267, (long)(0x679B4CCFBE016D69L ^ l2))), fArray3[0], fArray3[1], fArray3[2]);
            jL.vcspz.bJs((String)((Object)kj.bPG("u", (int)10665, (long)(0x4B00F057C077C837L ^ l2))), fArray4[0], fArray4[1], fArray4[2]);
            jL.vcspz.bJq((String)((Object)kj.bPG("u", (int)2150, (long)(0x2F814A1600F4E9E1L ^ l2))), f9);
            jL.vcspz.bJq((String)((Object)kj.bPG("u", (int)4272, (long)(0x7EF22C6E8BD2F12AL ^ l2))), f10);
            jL.vcspz.bJq((String)((Object)kj.bPG("u", (int)23497, (long)(0x1CDAAEB4BD5EBA5EL ^ l2))), f11);
            jL.vcspz.bJq((String)((Object)kj.bPG("u", (int)31270, (long)(0x1BA30334C3D51BB5L ^ l2))), f12);
            jL.vcspz.bJq((String)((Object)kj.bPG("u", (int)32593, (long)(0x53DE8FA386CE1ED0L ^ l2))), f13);
            jL.vcspz.bJq((String)((Object)kj.bPG("u", (int)3155, (long)(0x19F2F3AADAF6EDCBL ^ l2))), f14);
        });
        String string2 = string;
        try {
            if (iS.bwL() == null) {
                kk.bPT("Vs09Vb");
            }
        }
        catch (MatchException matchException) {
            throw kj.bPC(matchException);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kj.class, "bPF", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

