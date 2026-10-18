package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;

public class dy extends gg {
   private final cF fCwUr;
   private final cJ wHVjK;
   private static final long ZRAwl = gb.aYR(8184928328733181890L, -5121498493565386823L, MethodHandles.lookup().lookupClass()).a(214260309949996L);
   private static final long[] XlcMB;
   private static final Integer[] iDsnQ;
   private static final Map fUxYh = new HashMap(13);

   public dy() {
      long var1 = ZRAwl ^ 121116436876489L;
      super(gf.aZL(ajz<"i">(26208, 1553423715096058390L ^ var1), false, gh.nOCvV));
      int[] var10004 = new int[ajz<"i">(4540, 5746602299251371459L ^ var1)];
      var10004[0] = ajz<"i">(14389, 4191021340080899156L ^ var1);
      var10004[1] = ajz<"i">(789, 4819397633611743098L ^ var1);
      var10004[2] = ajz<"i">(6020, 3903459790036741094L ^ var1);
      var10004[3] = ajz<"i">(22722, 8571802521126036651L ^ var1);
      var10004[4] = ajz<"i">(3568, 7467114856074949019L ^ var1);
      var10004[5] = ajz<"i">(30218, 1081964356437396083L ^ var1);
      var10004[ajz<"i">(12400, 7631867361955875869L ^ var1)] = ajz<"i">(4906, 4567046689549463372L ^ var1);
      var10004[ajz<"i">(32315, 6909014918798000711L ^ var1)] = ajz<"i">(1736, 5774285214542281387L ^ var1);
      this.fCwUr = new cF(this, mr.clS(var10004)).VS(jg$tJ.OCdZM);
      var10004 = new int[ajz<"i">(9621, 8941876637915617775L ^ var1)];
      var10004[0] = ajz<"i">(26704, 7365119946243265589L ^ var1);
      var10004[1] = ajz<"i">(13687, 7850674247963674907L ^ var1);
      var10004[2] = ajz<"i">(16781, 1158874309996871139L ^ var1);
      var10004[3] = ajz<"i">(27985, 2940061780113805612L ^ var1);
      var10004[4] = ajz<"i">(13921, 5258885584900360709L ^ var1);
      var10004[5] = ajz<"i">(2678, 6972820536134252062L ^ var1);
      var10004[ajz<"i">(24344, 3716334328753021795L ^ var1)] = ajz<"i">(29146, 3554080258085244336L ^ var1);
      var10004[ajz<"i">(25093, 1592628832403283579L ^ var1)] = ajz<"i">(7621, 2371557609950716349L ^ var1);
      var10004[ajz<"i">(18103, 5974450347949423312L ^ var1)] = ajz<"i">(23212, 4503640986630481612L ^ var1);
      this.wHVjK = new cJ(this, mr.clS(var10004)).WE(false);
   }

   static {
      long var0 = ZRAwl ^ 34519164955064L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[25];
      int var5 = 0;
      String var6 = "Ò´ ÿòËOx¤ª(3\u0081àÈF\u008fÅ¼oü)`\u0098\u0097>,\u009aæ9×Ëù&hôßd»'\u001d3!ïÖ£0¢`2ô\u008f\u0088\u008cT·©ýéî}y\u001eM\u008a»|ÿÊ$\rÿ(-`Ò\t¤÷ÿ2¡¨\u000b(Þ\u0092»I\u0099\u008bo9b{A?t¯é\"4+x\u0087\u009eMD\u0016ËJ\u001f\u000eí:éüé\u0086hDNxDk§r@«±Êç\u0090Üí\u0011vâë¼)Z´\u0002ÿG¾\u0013\u001c\u0007\u0083Æ¼ÎlÈJo¯+\u0014*/w\u0013ÚDÖ\u00858®Ý@|\u00044sÅ\u001aî4»Ø\u0010";
      int var7 = "Ò´ ÿòËOx¤ª(3\u0081àÈF\u008fÅ¼oü)`\u0098\u0097>,\u009aæ9×Ëù&hôßd»'\u001d3!ïÖ£0¢`2ô\u008f\u0088\u008cT·©ýéî}y\u001eM\u008a»|ÿÊ$\rÿ(-`Ò\t¤÷ÿ2¡¨\u000b(Þ\u0092»I\u0099\u008bo9b{A?t¯é\"4+x\u0087\u009eMD\u0016ËJ\u001f\u000eí:éüé\u0086hDNxDk§r@«±Êç\u0090Üí\u0011vâë¼)Z´\u0002ÿG¾\u0013\u001c\u0007\u0083Æ¼ÎlÈJo¯+\u0014*/w\u0013ÚDÖ\u00858®Ý@|\u00044sÅ\u001aî4»Ø\u0010"
         .length();
      byte var4 = 0;

      label23:
      while (true) {
         int var10001 = var4;
         var4 += 8;
         byte[] var9 = var6.substring(var10001, var4).getBytes("ISO-8859-1");
         long[] var14 = var8;
         var10001 = var5++;
         long var17 = (var9[0] & 255L) << 56
            | (var9[1] & 255L) << 48
            | (var9[2] & 255L) << 40
            | (var9[3] & 255L) << 32
            | (var9[4] & 255L) << 24
            | (var9[5] & 255L) << 16
            | (var9[6] & 255L) << 8
            | var9[7] & 255L;
         byte var19 = -1;

         while (true) {
            long var10 = var17;
            byte[] var12 = var2.doFinal(
               new byte[]{
                  (byte)(var10 >>> 56),
                  (byte)(var10 >>> 48),
                  (byte)(var10 >>> 40),
                  (byte)(var10 >>> 32),
                  (byte)(var10 >>> 24),
                  (byte)(var10 >>> 16),
                  (byte)(var10 >>> 8),
                  (byte)var10
               }
            );
            long var21 = (var12[0] & 255L) << 56
               | (var12[1] & 255L) << 48
               | (var12[2] & 255L) << 40
               | (var12[3] & 255L) << 32
               | (var12[4] & 255L) << 24
               | (var12[5] & 255L) << 16
               | (var12[6] & 255L) << 8
               | var12[7] & 255L;
            switch (var19) {
               case 0:
                  var14[var10001] = var21;
                  if (var4 >= var7) {
                     XlcMB = var8;
                     iDsnQ = new Integer[25];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "\u00ad`\u0085@S\u0006é~å\u009bª5Þ,{\u000e";
                  var7 = "\u00ad`\u0085@S\u0006é~å\u009bª5Þ,{\u000e".length();
                  var4 = 0;
            }

            byte var16 = var4;
            var4 += 8;
            var9 = var6.substring(var16, var4).getBytes("ISO-8859-1");
            var14 = var8;
            var10001 = var5++;
            var17 = (var9[0] & 255L) << 56
               | (var9[1] & 255L) << 48
               | (var9[2] & 255L) << 40
               | (var9[3] & 255L) << 32
               | (var9[4] & 255L) << 24
               | (var9[5] & 255L) << 16
               | (var9[6] & 255L) << 8
               | var9[7] & 255L;
            var19 = 0;
         }
      }
   }

   public boolean ajv(class_1297 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dy.ZRAwl J
      // 03: ldc2_w 17157560534573
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/dy.fCwUr Lsixtwo/cF;
      // 11: aload 1
      // 12: invokevirtual sixtwo/cF.VX (Lnet/minecraft/class_1297;)Z
      // 15: aload 4
      // 17: ifnonnull 25
      // 1a: ifne 26
      // 1d: goto 24
      // 20: invokestatic sixtwo/dy.ajw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: bipush 0
      // 25: ireturn
      // 26: aload 1
      // 27: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2a: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 2d: if_acmpeq 51
      // 30: aload 0
      // 31: getfield sixtwo/dy.wHVjK Lsixtwo/cJ;
      // 34: invokevirtual sixtwo/cJ.WF ()Z
      // 37: aload 4
      // 39: ifnonnull 4e
      // 3c: goto 43
      // 3f: invokestatic sixtwo/dy.ajw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: ifne 51
      // 46: goto 4d
      // 49: invokestatic sixtwo/dy.ajw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4c: athrow
      // 4d: bipush 1
      // 4e: goto 52
      // 51: bipush 0
      // 52: ireturn
   }

   private static CallSite ajz(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ajy".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dy" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int ajx(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 31781;
      if (iDsnQ[var3] == null) {
         byte[] var4 = new byte[]{
            (byte)(var1 >>> 56),
            (byte)(var1 >>> 48),
            (byte)(var1 >>> 40),
            (byte)(var1 >>> 32),
            (byte)(var1 >>> 24),
            (byte)(var1 >>> 16),
            (byte)(var1 >>> 8),
            (byte)var1
         };
         long var5 = XlcMB[var3];
         byte[] var7 = new byte[]{
            (byte)(var5 >>> 56),
            (byte)(var5 >>> 48),
            (byte)(var5 >>> 40),
            (byte)(var5 >>> 32),
            (byte)(var5 >>> 24),
            (byte)(var5 >>> 16),
            (byte)(var5 >>> 8),
            (byte)var5
         };
         Long var8 = Thread.currentThread().threadId();
         Object[] var9 = (Object[])fUxYh.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               fUxYh.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/dy", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         iDsnQ[var3] = var15;
      }

      return iDsnQ[var3];
   }

   private static int ajy(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = ajx(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static MatchException ajw(MatchException var0) {
      return var0;
   }
}
