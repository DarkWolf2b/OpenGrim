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

public class dd extends gg implements lG {
   private final cK MKdlw;
   private final cC pYKFd;
   private final cG KhQrs;
   private final cG zdHIt;
   private final cJ jUhNc;
   private final cJ IfTUx;
   private final cC JkVNw;
   private final rl rNrBp;
   private static final long OBqTT = gb.aYR(2968925495041184559L, -7969743510681426525L, MethodHandles.lookup().lookupClass()).a(170475967692167L);
   private static final String vRYIv;
   private static final long[] XpzLl;
   private static final Integer[] OykDi;
   private static final Map bJBvO;
   private static final long SSCLk;

   public dd() {
      long var1 = OBqTT ^ 59456709174211L;
      super(gf.aZL(acp<"s">(21616, 7494617362261843866L ^ var1), false, gh.nOCvV));
      int[] var10004 = new int[acp<"s">(11800, 5158843998733788663L ^ var1)];
      var10004[0] = acp<"s">(31387, 3781090274577068378L ^ var1);
      var10004[1] = acp<"s">(6365, 912964279051309878L ^ var1);
      var10004[2] = acp<"s">(31080, 6981065770491785870L ^ var1);
      var10004[3] = acp<"s">(24247, 5690581538540295520L ^ var1);
      var10004[4] = acp<"s">(12672, 4797282675347389045L ^ var1);
      var10004[5] = acp<"s">(13862, 4816810810492419545L ^ var1);
      var10004[acp<"s">(23624, 4184775585506989989L ^ var1)] = acp<"s">(6235, 3879067956350178180L ^ var1);
      var10004[acp<"s">(23676, 7868875680999577483L ^ var1)] = acp<"s">(22972, 7871420989365326452L ^ var1);
      var10004[acp<"s">(12562, 1425520314835303150L ^ var1)] = acp<"s">(26358, 2321404194846027028L ^ var1);
      var10004[acp<"s">(40, 4724990420513541072L ^ var1)] = acp<"s">(25475, 2439084731053451377L ^ var1);
      var10004[acp<"s">(8568, 6373028495746853532L ^ var1)] = acp<"s">(25687, 1004193313773858714L ^ var1);
      var10004[acp<"s">(12198, 4057653349103756405L ^ var1)] = acp<"s">(23615, 2966696950636615628L ^ var1);
      var10004[acp<"s">(6001, 2608164379337612469L ^ var1)] = acp<"s">(29516, 7381962623848528036L ^ var1);
      var10004[acp<"s">(14632, 4783698287624024818L ^ var1)] = acp<"s">(8527, 1898898026056379028L ^ var1);
      var10004[acp<"s">(29902, 2131911688211054355L ^ var1)] = acp<"s">(29439, 3519249224733112639L ^ var1);
      var10004[acp<"s">(19114, 5098711380384481603L ^ var1)] = acp<"s">(2361, 8106365942269199042L ^ var1);
      var10004[acp<"s">(19214, 5392837974384378057L ^ var1)] = acp<"s">(17244, 5645452684868520125L ^ var1);
      var10004[acp<"s">(24387, 4179739100698547357L ^ var1)] = acp<"s">(11909, 1511749376993060180L ^ var1);
      var10004[acp<"s">(14422, 6916828554649858993L ^ var1)] = acp<"s">(458, 2937321290106161722L ^ var1);
      this.MKdlw = new cK(this, mr.clS(var10004)).WM(jc.GjreY);
      this.pYKFd = new cC(
            this,
            mr.clS(
               new int[]{
                  acp<"s">(14027, 5787909105783307524L ^ var1),
                  acp<"s">(15107, 6334361042581057738L ^ var1),
                  acp<"s">(21058, 8134093384110021000L ^ var1),
                  acp<"s">(17244, 5645452684868520125L ^ var1),
                  acp<"s">(25047, 497252840043129396L ^ var1)
               }
            )
         )
         .Vy(1.0)
         .Vw(1.0)
         .Vx(128.0)
         .VA(100.0)
         .Vz(vRYIv);
      var10004 = new int[acp<"s">(3250, 3626710114127333212L ^ var1)];
      var10004[0] = acp<"s">(5017, 6252706319744456825L ^ var1);
      var10004[1] = acp<"s">(31500, 7664979320617775317L ^ var1);
      var10004[2] = acp<"s">(6253, 2704206663333696433L ^ var1);
      var10004[3] = acp<"s">(29439, 3519249224733112639L ^ var1);
      var10004[4] = acp<"s">(2361, 8106365942269199042L ^ var1);
      var10004[5] = acp<"s">(2520, 1501417058595291709L ^ var1);
      var10004[acp<"s">(24714, 2719302906889546569L ^ var1)] = acp<"s">(9112, 6522383086422648915L ^ var1);
      var10004[acp<"s">(8814, 6987326137494563244L ^ var1)] = acp<"s">(25475, 2439084731053451377L ^ var1);
      var10004[acp<"s">(15793, 2403536751636051528L ^ var1)] = acp<"s">(6215, 8053930682270897026L ^ var1);
      var10004[acp<"s">(5335, 380972055629356838L ^ var1)] = acp<"s">(26358, 2321404194846027028L ^ var1);
      var10004[acp<"s">(11652, 856410130868725374L ^ var1)] = acp<"s">(29439, 3519249224733112639L ^ var1);
      var10004[acp<"s">(26779, 1163979485212844909L ^ var1)] = acp<"s">(26358, 2321404194846027028L ^ var1);
      var10004[acp<"s">(29371, 189059198036228439L ^ var1)] = acp<"s">(8757, 7830183858889746925L ^ var1);
      this.KhQrs = new cG(this, mr.clS(var10004)).Uf(rD.dlM().bjG().bis());
      var10004 = new int[acp<"s">(11652, 856410130868725374L ^ var1)];
      var10004[0] = acp<"s">(7809, 7776594177114822015L ^ var1);
      var10004[1] = acp<"s">(2361, 8106365942269199042L ^ var1);
      var10004[2] = acp<"s">(29439, 3519249224733112639L ^ var1);
      var10004[3] = acp<"s">(29439, 3519249224733112639L ^ var1);
      var10004[4] = acp<"s">(25475, 2439084731053451377L ^ var1);
      var10004[5] = acp<"s">(21201, 5719704422974658845L ^ var1);
      var10004[acp<"s">(24714, 2719302906889546569L ^ var1)] = acp<"s">(26358, 2321404194846027028L ^ var1);
      var10004[acp<"s">(8814, 6987326137494563244L ^ var1)] = acp<"s">(29439, 3519249224733112639L ^ var1);
      var10004[acp<"s">(15793, 2403536751636051528L ^ var1)] = acp<"s">(26358, 2321404194846027028L ^ var1);
      var10004[acp<"s">(5335, 380972055629356838L ^ var1)] = acp<"s">(6948, 9158450144263983344L ^ var1);
      this.zdHIt = new cG(this, mr.clS(var10004)).Uf(rD.dlM().bjG().bis().cob(0.5F));
      var10004 = new int[acp<"s">(24714, 2719302906889546569L ^ var1)];
      var10004[0] = acp<"s">(29426, 3251508791963531554L ^ var1);
      var10004[1] = acp<"s">(2361, 8106365942269199042L ^ var1);
      var10004[2] = acp<"s">(29439, 3519249224733112639L ^ var1);
      var10004[3] = acp<"s">(29439, 3519249224733112639L ^ var1);
      var10004[4] = acp<"s">(9112, 6522383086422648915L ^ var1);
      var10004[5] = acp<"s">(21241, 2578236082799253823L ^ var1);
      this.jUhNc = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[acp<"s">(8814, 6987326137494563244L ^ var1)];
      var10004[0] = acp<"s">(12988, 8803823450259814721L ^ var1);
      var10004[1] = acp<"s">(6948, 9158450144263983344L ^ var1);
      var10004[2] = acp<"s">(11064, 8565973626573840618L ^ var1);
      var10004[3] = acp<"s">(27213, 255450648282243513L ^ var1);
      var10004[4] = acp<"s">(9112, 6522383086422648915L ^ var1);
      var10004[5] = acp<"s">(6948, 9158450144263983344L ^ var1);
      var10004[acp<"s">(24714, 2719302906889546569L ^ var1)] = acp<"s">(4982, 5826626305607653539L ^ var1);
      this.IfTUx = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[acp<"s">(3250, 3626710114127333212L ^ var1)];
      var10004[0] = acp<"s">(12988, 8803823450259814721L ^ var1);
      var10004[1] = acp<"s">(6948, 9158450144263983344L ^ var1);
      var10004[2] = acp<"s">(11064, 8565973626573840618L ^ var1);
      var10004[3] = acp<"s">(27213, 255450648282243513L ^ var1);
      var10004[4] = acp<"s">(9112, 6522383086422648915L ^ var1);
      var10004[5] = acp<"s">(6948, 9158450144263983344L ^ var1);
      var10004[acp<"s">(24714, 2719302906889546569L ^ var1)] = acp<"s">(4982, 5826626305607653539L ^ var1);
      var10004[acp<"s">(8814, 6987326137494563244L ^ var1)] = acp<"s">(25475, 2439084731053451377L ^ var1);
      var10004[acp<"s">(15793, 2403536751636051528L ^ var1)] = acp<"s">(10231, 3654360145940442169L ^ var1);
      var10004[acp<"s">(5335, 380972055629356838L ^ var1)] = acp<"s">(2361, 8106365942269199042L ^ var1);
      var10004[acp<"s">(11652, 856410130868725374L ^ var1)] = acp<"s">(12215, 5002458338628756577L ^ var1);
      var10004[acp<"s">(26779, 1163979485212844909L ^ var1)] = acp<"s">(6253, 2704206663333696433L ^ var1);
      var10004[acp<"s">(29371, 189059198036228439L ^ var1)] = acp<"s">(11909, 1511749376993060180L ^ var1);
      this.JkVNw = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(1.0).Vx(3.0).VA(1.0);
      this.rNrBp = new rl();
      this.JkVNw.Vf(this.IfTUx::WF);
   }

   static {
      long var16 = OBqTT ^ 45652545398424L;
      Cipher var18;
      Cipher var10000 = var18 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var19 = 1; var19 < 8; var19++) {
         var10003[var19] = (byte)(var16 << var19 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var20 = var18.doFinal("\u0088\u0087\u001e,YNk\u009a".getBytes("ISO-8859-1"));
      String var29 = acm(var20).intern();
      int var10001 = -1;
      vRYIv = var29;
      bJBvO = new HashMap(13);
      Cipher var5;
      var10000 = var5 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var6 = 1; var6 < 8; var6++) {
         var10003[var6] = (byte)(var16 << var6 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var11 = new long[64];
      int var8 = 0;
      String var9 = "Ø\u008b\u0088\u001bà\u00ad\u009bÀü ô!\u0014ç@F¨ö]6\u007f\u0002\u008eÙ\u008e\u0005õãó¤Si\u008eÒr2D¯9\nE\tý\u007fª\u0012\b Iê\u0016\u0093\u0085{\u00825§\u0006\u009e>ºyÚÈ5l9\u001cG±`ù²Ýw\u0080@ÊW²\u0007\u0012\u0083ºs´í®\u008dÜI¥b\u008eº4ÒK\u0083íò\u0082\u001f¬\u00967ý~RL\u000e\u001drM\u0080ãýÏ3Å\u008d(\u0081Xv\u0084\u008c«Å Ð\u000eÊVRl.Y\u000f\u009bß\u008c\u0090ÎßÌ\u001aôÄÂý\u0093Å§Éi¥N\u0007~!÷û\u001d8áwïÁoYëxèÐ2~¥O×êµ\u0098%\u0088§º¹®¨B©¢¢ýl\u001b0\u0019È\u0004\t?`.Ø\u0012í3éÇ\u0007\u0085\fJ}q\u00986>ioµJØESq°òf!êÍ\u001dÎÊk^M>Â_\u0001\"[v\u0096\u0080\u0003FkD\u0015S\u008dsäÓ1¼_â3l5Û±\u007f\u0083\u0005j\u0011W\u0089\ríÌÝNG9ò\u0088\u0084ç\u000eRü\u008d{«ïÝ¹+\f\u0096»\fÌ\u0001ñ\u009e÷\u0016'\u0083®b\u008bFL\u00102Y\u0099\t©\u0017EÅ]}\u00ad\u008d\u001fìÏÝ\u0015\u0098rÄÓ{¢\u0095A\u0003\u008d)(\u009fPL`ØÅ|jÌ2\u0013\u0081Ø\u0013%N ìç|ðk\tÜü\u009eÃ¥r\u0085s\u0000CÍHÝð`[µ§í\u0092\u00951ý¾Ã¸ÌìCó\u0004\u008c^XQ|õ\u0014SÌ\u008dô\u0097\"´ü\u001d\u0017\u0094Âààe*p¿pºþÿ4D>W\u0089ñ\r%¯ªå\u001cö\u000f\u008eW{É¼eÇqØÍ¸ì%¬Åë±e¨úÂú\u0086aë\u0084\u009cL\u0012ª%#<\u0090hF±X\u001e\u0088h´ôO íî«þ\u0001Vá\u00963\u008b±";
      int var10 = "Ø\u008b\u0088\u001bà\u00ad\u009bÀü ô!\u0014ç@F¨ö]6\u007f\u0002\u008eÙ\u008e\u0005õãó¤Si\u008eÒr2D¯9\nE\tý\u007fª\u0012\b Iê\u0016\u0093\u0085{\u00825§\u0006\u009e>ºyÚÈ5l9\u001cG±`ù²Ýw\u0080@ÊW²\u0007\u0012\u0083ºs´í®\u008dÜI¥b\u008eº4ÒK\u0083íò\u0082\u001f¬\u00967ý~RL\u000e\u001drM\u0080ãýÏ3Å\u008d(\u0081Xv\u0084\u008c«Å Ð\u000eÊVRl.Y\u000f\u009bß\u008c\u0090ÎßÌ\u001aôÄÂý\u0093Å§Éi¥N\u0007~!÷û\u001d8áwïÁoYëxèÐ2~¥O×êµ\u0098%\u0088§º¹®¨B©¢¢ýl\u001b0\u0019È\u0004\t?`.Ø\u0012í3éÇ\u0007\u0085\fJ}q\u00986>ioµJØESq°òf!êÍ\u001dÎÊk^M>Â_\u0001\"[v\u0096\u0080\u0003FkD\u0015S\u008dsäÓ1¼_â3l5Û±\u007f\u0083\u0005j\u0011W\u0089\ríÌÝNG9ò\u0088\u0084ç\u000eRü\u008d{«ïÝ¹+\f\u0096»\fÌ\u0001ñ\u009e÷\u0016'\u0083®b\u008bFL\u00102Y\u0099\t©\u0017EÅ]}\u00ad\u008d\u001fìÏÝ\u0015\u0098rÄÓ{¢\u0095A\u0003\u008d)(\u009fPL`ØÅ|jÌ2\u0013\u0081Ø\u0013%N ìç|ðk\tÜü\u009eÃ¥r\u0085s\u0000CÍHÝð`[µ§í\u0092\u00951ý¾Ã¸ÌìCó\u0004\u008c^XQ|õ\u0014SÌ\u008dô\u0097\"´ü\u001d\u0017\u0094Âààe*p¿pºþÿ4D>W\u0089ñ\r%¯ªå\u001cö\u000f\u008eW{É¼eÇqØÍ¸ì%¬Åë±e¨úÂú\u0086aë\u0084\u009cL\u0012ª%#<\u0090hF±X\u001e\u0088h´ôO íî«þ\u0001Vá\u00963\u008b±"
         .length();
      byte var7 = 0;

      label39:
      while (true) {
         var10001 = var7;
         var7 += 8;
         byte[] var12 = var9.substring(var10001, var7).getBytes("ISO-8859-1");
         long[] var23 = var11;
         var10001 = var8++;
         long var31 = (var12[0] & 255L) << 56
            | (var12[1] & 255L) << 48
            | (var12[2] & 255L) << 40
            | (var12[3] & 255L) << 32
            | (var12[4] & 255L) << 24
            | (var12[5] & 255L) << 16
            | (var12[6] & 255L) << 8
            | var12[7] & 255L;
         byte var36 = -1;

         while (true) {
            long var13 = var31;
            byte[] var15 = var5.doFinal(
               new byte[]{
                  (byte)(var13 >>> 56),
                  (byte)(var13 >>> 48),
                  (byte)(var13 >>> 40),
                  (byte)(var13 >>> 32),
                  (byte)(var13 >>> 24),
                  (byte)(var13 >>> 16),
                  (byte)(var13 >>> 8),
                  (byte)var13
               }
            );
            long var39 = (var15[0] & 255L) << 56
               | (var15[1] & 255L) << 48
               | (var15[2] & 255L) << 40
               | (var15[3] & 255L) << 32
               | (var15[4] & 255L) << 24
               | (var15[5] & 255L) << 16
               | (var15[6] & 255L) << 8
               | var15[7] & 255L;
            switch (var36) {
               case 0:
                  var23[var10001] = var39;
                  if (var7 >= var10) {
                     XpzLl = var11;
                     OykDi = new Integer[64];
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var16 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long var2 = -2983841993349134973L;
                     byte[] var4 = var0.doFinal(
                        new byte[]{
                           (byte)(var2 >>> 56),
                           (byte)(var2 >>> 48),
                           (byte)(var2 >>> 40),
                           (byte)(var2 >>> 32),
                           (byte)(var2 >>> 24),
                           (byte)(var2 >>> 16),
                           (byte)(var2 >>> 8),
                           (byte)var2
                        }
                     );
                     long var34 = (var4[0] & 255L) << 56
                        | (var4[1] & 255L) << 48
                        | (var4[2] & 255L) << 40
                        | (var4[3] & 255L) << 32
                        | (var4[4] & 255L) << 24
                        | (var4[5] & 255L) << 16
                        | (var4[6] & 255L) << 8
                        | var4[7] & 255L;
                     byte var28 = -1;
                     SSCLk = var34;
                     return;
                  }
                  break;
               default:
                  var23[var10001] = var39;
                  if (var7 < var10) {
                     continue label39;
                  }

                  var9 = "T¦i&-\u0013º1_B\u009aZÖý\b\u008f";
                  var10 = "T¦i&-\u0013º1_B\u009aZÖý\b\u008f".length();
                  var7 = 0;
            }

            byte var27 = var7;
            var7 += 8;
            var12 = var9.substring(var27, var7).getBytes("ISO-8859-1");
            var23 = var11;
            var10001 = var8++;
            var31 = (var12[0] & 255L) << 56
               | (var12[1] & 255L) << 48
               | (var12[2] & 255L) << 40
               | (var12[3] & 255L) << 32
               | (var12[4] & 255L) << 24
               | (var12[5] & 255L) << 16
               | (var12[6] & 255L) << 8
               | var12[7] & 255L;
            var36 = 0;
         }
      }
   }

   private static MatchException acl(MatchException var0) {
      return var0;
   }

   private static int acn(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 25649;
      if (OykDi[var3] == null) {
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
         long var5 = XpzLl[var3];
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
         Object[] var9 = (Object[])bJBvO.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               bJBvO.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/dd", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         OykDi[var3] = var15;
      }

      return OykDi[var3];
   }

   @Override
   public void aaj() {
      super.aaj();
      this.rNrBp.dhF();
   }

   private static String acm(byte[] var0) {
      int var1 = 0;
      int var2;
      char[] var3 = new char[var2 = var0.length];

      for (int var4 = 0; var4 < var2; var4++) {
         int var5;
         if ((var5 = 255 & var0[var4]) < 192) {
            var3[var1++] = (char)var5;
         } else if (var5 < 224) {
            char var6 = (char)((char)(var5 & 31) << 6);
            byte var8 = var0[++var4];
            var6 = (char)(var6 | (char)(var8 & 63));
            var3[var1++] = var6;
         } else if (var4 < var2 - 2) {
            char var12 = (char)((char)(var5 & 15) << '\f');
            byte var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63) << 6);
            var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63));
            var3[var1++] = var12;
         }
      }

      return new String(var3, 0, var1);
   }

   private static CallSite acp(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aco".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dd" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   @hG
   public void aci(gH$th var1) {
      long var2 = OBqTT ^ 13640721005189L;
      this.rNrBp.dhJ(SSCLk, this.pYKFd.VC(), var1x -> this.MKdlw.WW(var1x.method_26204().method_8389()));
   }

   @hG
   public void acj(go$sX param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dd.OBqTT J
      // 003: ldc2_w 37350450760053
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/dd.bab ()Z
      // 011: ifeq 024
      // 014: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 017: invokevirtual net/minecraft/class_310.method_1560 ()Lnet/minecraft/class_1297;
      // 01a: ifnonnull 029
      // 01d: goto 024
      // 020: invokestatic sixtwo/dd.acl (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 023: athrow
      // 024: return
      // 025: invokestatic sixtwo/dd.acl (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 028: athrow
      // 029: aload 0
      // 02a: getfield sixtwo/dd.rNrBp Lsixtwo/rl;
      // 02d: invokevirtual sixtwo/rl.dhB ()Ljava/util/List;
      // 030: astore 5
      // 032: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 035: getfield net/minecraft/class_310.field_1773 Lnet/minecraft/class_757;
      // 038: invokevirtual net/minecraft/class_757.method_19418 ()Lnet/minecraft/class_4184;
      // 03b: invokevirtual net/minecraft/class_4184.method_71156 ()Lnet/minecraft/class_243;
      // 03e: invokevirtual net/minecraft/class_243.method_22882 ()Lnet/minecraft/class_243;
      // 041: astore 6
      // 043: getstatic sixtwo/dd.MMuss Lsixtwo/kN;
      // 046: invokevirtual sixtwo/kN.startBatch ()V
      // 049: aload 5
      // 04b: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 050: astore 7
      // 052: aload 7
      // 054: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 059: ifeq 0d6
      // 05c: aload 7
      // 05e: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 063: checkcast net/minecraft/class_2338
      // 066: astore 8
      // 068: aload 4
      // 06a: ifnonnull 0d1
      // 06d: aload 8
      // 06f: invokevirtual net/minecraft/class_2338.method_46558 ()Lnet/minecraft/class_243;
      // 072: invokestatic sixtwo/jJ.bIA (Lnet/minecraft/class_243;)Z
      // 075: aload 4
      // 077: ifnonnull 0f1
      // 07a: goto 081
      // 07d: invokestatic sixtwo/dd.acl (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 080: athrow
      // 081: ifne 097
      // 084: goto 08b
      // 087: invokestatic sixtwo/dd.acl (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08a: athrow
      // 08b: aload 4
      // 08d: ifnull 052
      // 090: goto 097
      // 093: invokestatic sixtwo/dd.acl (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 096: athrow
      // 097: getstatic sixtwo/dd.MMuss Lsixtwo/kN;
      // 09a: aload 1
      // 09b: invokevirtual sixtwo/go$sX.bbh ()Lnet/minecraft/class_4587;
      // 09e: new net/minecraft/class_238
      // 0a1: dup
      // 0a2: aload 8
      // 0a4: invokespecial net/minecraft/class_238.<init> (Lnet/minecraft/class_2338;)V
      // 0a7: aload 6
      // 0a9: invokevirtual net/minecraft/class_238.method_997 (Lnet/minecraft/class_243;)Lnet/minecraft/class_238;
      // 0ac: aload 0
      // 0ad: getfield sixtwo/dd.jUhNc Lsixtwo/cJ;
      // 0b0: invokevirtual sixtwo/cJ.WF ()Z
      // 0b3: bipush 0
      // 0b4: invokestatic sixtwo/kH.bTJ (Lnet/minecraft/class_4587;Lnet/minecraft/class_238;ZZ)Lsixtwo/kH$up;
      // 0b7: aload 0
      // 0b8: getfield sixtwo/dd.KhQrs Lsixtwo/cG;
      // 0bb: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 0be: invokevirtual sixtwo/kH$up.dtN (Lsixtwo/mG;)Lsixtwo/kH$up;
      // 0c1: aload 0
      // 0c2: getfield sixtwo/dd.zdHIt Lsixtwo/cG;
      // 0c5: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 0c8: invokevirtual sixtwo/kH$up.dtO (Lsixtwo/mG;)Lsixtwo/kH$up;
      // 0cb: invokevirtual sixtwo/kH$up.dtS ()Lsixtwo/kH;
      // 0ce: invokevirtual sixtwo/kN.bUS (Lsixtwo/kH;)V
      // 0d1: aload 4
      // 0d3: ifnull 052
      // 0d6: getstatic sixtwo/dd.MMuss Lsixtwo/kN;
      // 0d9: invokevirtual sixtwo/kN.endBatch ()V
      // 0dc: goto 0ea
      // 0df: astore 9
      // 0e1: getstatic sixtwo/dd.MMuss Lsixtwo/kN;
      // 0e4: invokevirtual sixtwo/kN.endBatch ()V
      // 0e7: aload 9
      // 0e9: athrow
      // 0ea: aload 0
      // 0eb: getfield sixtwo/dd.IfTUx Lsixtwo/cJ;
      // 0ee: invokevirtual sixtwo/cJ.WF ()Z
      // 0f1: ifne 0f5
      // 0f4: return
      // 0f5: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f8: invokevirtual net/minecraft/class_310.method_1560 ()Lnet/minecraft/class_1297;
      // 0fb: aload 1
      // 0fc: invokevirtual sixtwo/go$sX.bbi ()F
      // 0ff: invokevirtual net/minecraft/class_1297.method_30950 (F)Lnet/minecraft/class_243;
      // 102: astore 7
      // 104: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 107: invokevirtual net/minecraft/class_310.method_1560 ()Lnet/minecraft/class_1297;
      // 10a: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 10d: invokevirtual net/minecraft/class_310.method_1560 ()Lnet/minecraft/class_1297;
      // 110: invokevirtual net/minecraft/class_1297.method_18376 ()Lnet/minecraft/class_4050;
      // 113: invokevirtual net/minecraft/class_1297.method_18381 (Lnet/minecraft/class_4050;)F
      // 116: fstore 8
      // 118: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 11b: getfield net/minecraft/class_310.field_1690 Lnet/minecraft/class_315;
      // 11e: invokevirtual net/minecraft/class_315.method_31044 ()Lnet/minecraft/class_5498;
      // 121: invokevirtual net/minecraft/class_5498.method_31034 ()Z
      // 124: istore 9
      // 126: aload 0
      // 127: getfield sixtwo/dd.JkVNw Lsixtwo/cC;
      // 12a: invokevirtual sixtwo/cC.VB ()F
      // 12d: fstore 10
      // 12f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 132: invokevirtual net/minecraft/class_310.method_1560 ()Lnet/minecraft/class_1297;
      // 135: invokevirtual net/minecraft/class_1297.method_36455 ()F
      // 138: f2d
      // 139: invokestatic java/lang/Math.toRadians (D)D
      // 13c: dneg
      // 13d: d2f
      // 13e: fstore 11
      // 140: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 143: invokevirtual net/minecraft/class_310.method_1560 ()Lnet/minecraft/class_1297;
      // 146: invokevirtual net/minecraft/class_1297.method_36454 ()F
      // 149: f2d
      // 14a: invokestatic java/lang/Math.toRadians (D)D
      // 14d: dneg
      // 14e: d2f
      // 14f: fstore 12
      // 151: new net/minecraft/class_243
      // 154: dup
      // 155: dconst_0
      // 156: dconst_0
      // 157: ldc2_w 75.0
      // 15a: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 15d: fload 11
      // 15f: invokevirtual net/minecraft/class_243.method_1037 (F)Lnet/minecraft/class_243;
      // 162: fload 12
      // 164: invokevirtual net/minecraft/class_243.method_1024 (F)Lnet/minecraft/class_243;
      // 167: aload 7
      // 169: dconst_0
      // 16a: fload 8
      // 16c: f2d
      // 16d: dconst_0
      // 16e: invokevirtual net/minecraft/class_243.method_1031 (DDD)Lnet/minecraft/class_243;
      // 171: invokevirtual net/minecraft/class_243.method_1019 (Lnet/minecraft/class_243;)Lnet/minecraft/class_243;
      // 174: astore 13
      // 176: aload 4
      // 178: ifnonnull 199
      // 17b: iload 9
      // 17d: ifne 193
      // 180: goto 187
      // 183: invokestatic sixtwo/dd.acl (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 186: athrow
      // 187: aload 7
      // 189: dconst_0
      // 18a: fload 8
      // 18c: f2d
      // 18d: dconst_0
      // 18e: invokevirtual net/minecraft/class_243.method_1031 (DDD)Lnet/minecraft/class_243;
      // 191: astore 13
      // 193: getstatic sixtwo/dd.dJxyG Lsixtwo/kL;
      // 196: invokevirtual sixtwo/kL.startBatch ()V
      // 199: aload 5
      // 19b: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 1a0: astore 14
      // 1a2: aload 14
      // 1a4: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 1a9: ifeq 1ec
      // 1ac: aload 14
      // 1ae: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 1b3: checkcast net/minecraft/class_2338
      // 1b6: astore 15
      // 1b8: getstatic sixtwo/dd.dJxyG Lsixtwo/kL;
      // 1bb: aload 1
      // 1bc: invokevirtual sixtwo/go$sX.bbh ()Lnet/minecraft/class_4587;
      // 1bf: aload 13
      // 1c1: aload 15
      // 1c3: invokevirtual net/minecraft/class_2338.method_46558 ()Lnet/minecraft/class_243;
      // 1c6: aload 0
      // 1c7: getfield sixtwo/dd.KhQrs Lsixtwo/cG;
      // 1ca: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 1cd: invokestatic sixtwo/kF.bTn (Lnet/minecraft/class_4587;Lnet/minecraft/class_243;Lnet/minecraft/class_243;Lsixtwo/mG;)Lsixtwo/kF$un;
      // 1d0: fload 10
      // 1d2: invokevirtual sixtwo/kF$un.dts (F)Lsixtwo/kF$un;
      // 1d5: invokevirtual sixtwo/kF$un.dtt ()Lsixtwo/kF;
      // 1d8: invokevirtual sixtwo/kL.bUv (Lsixtwo/kF;)V
      // 1db: aload 4
      // 1dd: ifnonnull 1f2
      // 1e0: aload 4
      // 1e2: ifnull 1a2
      // 1e5: goto 1ec
      // 1e8: invokestatic sixtwo/dd.acl (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1eb: athrow
      // 1ec: getstatic sixtwo/dd.dJxyG Lsixtwo/kL;
      // 1ef: invokevirtual sixtwo/kL.endBatch ()V
      // 1f2: goto 200
      // 1f5: astore 16
      // 1f7: getstatic sixtwo/dd.dJxyG Lsixtwo/kL;
      // 1fa: invokevirtual sixtwo/kL.endBatch ()V
      // 1fd: aload 16
      // 1ff: athrow
      // 200: return
   }

   private static int aco(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = acn(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }
}
