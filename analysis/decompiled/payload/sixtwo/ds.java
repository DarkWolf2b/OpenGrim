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
import net.minecraft.class_1299;

public class ds extends gg implements lG {
   private final cF RIxRc;
   private final cJ NgLhx;
   private final cG VLjNm;
   private final cG BDwzq;
   private final cG zwpWs;
   private final cG MFFfX;
   private final ct Tkevx;
   private final cu Bcsfp;
   private final cu omxYT;
   private static final long zEUdL = gb.aYR(3713528879801623362L, -6358016118666169026L, MethodHandles.lookup().lookupClass()).a(130400000526636L);
   private static final long[] TcimW;
   private static final Integer[] dnAGY;
   private static final Map GxymI = new HashMap(13);

   public ds() {
      long var1 = zEUdL ^ 71991968996348L;
      super(gf.aZL(aik<"f">(10636, 1498194010386941050L ^ var1), false, gh.nOCvV));
      int[] var10004 = new int[aik<"f">(13624, 2107662473957464262L ^ var1)];
      var10004[0] = aik<"f">(1953, 5412042526740408910L ^ var1);
      var10004[1] = aik<"f">(973, 7921113980276534797L ^ var1);
      var10004[2] = aik<"f">(21808, 4398614560943126770L ^ var1);
      var10004[3] = aik<"f">(14748, 2507755297021154385L ^ var1);
      var10004[4] = aik<"f">(2128, 5475815681613981079L ^ var1);
      var10004[5] = aik<"f">(24398, 3444170169707737752L ^ var1);
      var10004[aik<"f">(4887, 1437314131771162332L ^ var1)] = aik<"f">(19253, 4603450883428198093L ^ var1);
      var10004[aik<"f">(23183, 1759651675639887691L ^ var1)] = aik<"f">(3686, 8897269048534819751L ^ var1);
      this.RIxRc = new cF(this, mr.clS(var10004)).VS(jg$tJ.OCdZM).VT(class_1299.field_6052, class_1299.field_6053);
      var10004 = new int[aik<"f">(18252, 7198841634926537376L ^ var1)];
      var10004[0] = aik<"f">(17093, 3479909986471620380L ^ var1);
      var10004[1] = aik<"f">(24398, 3444170169707737752L ^ var1);
      var10004[2] = aik<"f">(15944, 575528036818932612L ^ var1);
      var10004[3] = aik<"f">(17172, 1439315033666694887L ^ var1);
      var10004[4] = aik<"f">(32592, 8616105033521205912L ^ var1);
      var10004[5] = aik<"f">(6698, 8574987542114432997L ^ var1);
      this.NgLhx = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aik<"f">(30450, 8346396325705718577L ^ var1)];
      var10004[0] = aik<"f">(25637, 4250917080986913224L ^ var1);
      var10004[1] = aik<"f">(24225, 1033559841821373269L ^ var1);
      var10004[2] = aik<"f">(2128, 5475815681613981079L ^ var1);
      var10004[3] = aik<"f">(17172, 1439315033666694887L ^ var1);
      var10004[4] = aik<"f">(24398, 3444170169707737752L ^ var1);
      var10004[5] = aik<"f">(1044, 261964476347640266L ^ var1);
      var10004[aik<"f">(18252, 7198841634926537376L ^ var1)] = aik<"f">(32592, 8616105033521205912L ^ var1);
      var10004[aik<"f">(3266, 5748756808635998475L ^ var1)] = aik<"f">(25913, 758037943603071208L ^ var1);
      var10004[aik<"f">(2178, 118632678197486919L ^ var1)] = aik<"f">(22889, 3670934905544881295L ^ var1);
      var10004[aik<"f">(26814, 5128087302878102893L ^ var1)] = aik<"f">(26636, 1106157975530636764L ^ var1);
      var10004[aik<"f">(2706, 3383128369458505570L ^ var1)] = aik<"f">(17172, 1439315033666694887L ^ var1);
      var10004[aik<"f">(24602, 3124761557878443488L ^ var1)] = aik<"f">(23385, 3405798044802266764L ^ var1);
      var10004[aik<"f">(3935, 1858660280168997544L ^ var1)] = aik<"f">(30535, 6339258681405282973L ^ var1);
      this.VLjNm = new cG(this, mr.clS(var10004)).Uf(rD.dlM().bjG().bis());
      var10004 = new int[aik<"f">(6351, 7884909153420866861L ^ var1)];
      var10004[0] = aik<"f">(7864, 7785527226199176028L ^ var1);
      var10004[1] = aik<"f">(24398, 3444170169707737752L ^ var1);
      var10004[2] = aik<"f">(17172, 1439315033666694887L ^ var1);
      var10004[3] = aik<"f">(17172, 1439315033666694887L ^ var1);
      var10004[4] = aik<"f">(1366, 6616667444811163778L ^ var1);
      var10004[5] = aik<"f">(18101, 7258718872353221440L ^ var1);
      var10004[aik<"f">(18252, 7198841634926537376L ^ var1)] = aik<"f">(23385, 3405798044802266764L ^ var1);
      var10004[aik<"f">(3266, 5748756808635998475L ^ var1)] = aik<"f">(17172, 1439315033666694887L ^ var1);
      var10004[aik<"f">(2178, 118632678197486919L ^ var1)] = aik<"f">(23385, 3405798044802266764L ^ var1);
      var10004[aik<"f">(27376, 3561826728467203879L ^ var1)] = aik<"f">(6104, 5987280220570286595L ^ var1);
      this.BDwzq = new cG(this, mr.clS(var10004)).Uf(rD.dlM().bjG().bis().cob(0.5F));
      var10004 = new int[aik<"f">(8056, 5276667130395292338L ^ var1)];
      var10004[0] = aik<"f">(7864, 7785527226199176028L ^ var1);
      var10004[1] = aik<"f">(6104, 5987280220570286595L ^ var1);
      var10004[2] = aik<"f">(24398, 3444170169707737752L ^ var1);
      var10004[3] = aik<"f">(32592, 8616105033521205912L ^ var1);
      var10004[4] = aik<"f">(1044, 261964476347640266L ^ var1);
      var10004[5] = aik<"f">(26416, 6376656876297292504L ^ var1);
      var10004[aik<"f">(18252, 7198841634926537376L ^ var1)] = aik<"f">(1366, 6616667444811163778L ^ var1);
      var10004[aik<"f">(3266, 5748756808635998475L ^ var1)] = aik<"f">(18551, 4275667746308007343L ^ var1);
      var10004[aik<"f">(2178, 118632678197486919L ^ var1)] = aik<"f">(24228, 8334032326451999611L ^ var1);
      var10004[aik<"f">(27376, 3561826728467203879L ^ var1)] = aik<"f">(2128, 5475815681613981079L ^ var1);
      var10004[aik<"f">(6351, 7884909153420866861L ^ var1)] = aik<"f">(17172, 1439315033666694887L ^ var1);
      var10004[aik<"f">(24768, 7351701667744320807L ^ var1)] = aik<"f">(24398, 3444170169707737752L ^ var1);
      var10004[aik<"f">(12975, 7579310804739022706L ^ var1)] = aik<"f">(1044, 261964476347640266L ^ var1);
      var10004[aik<"f">(5198, 2167601553699961271L ^ var1)] = aik<"f">(32592, 8616105033521205912L ^ var1);
      var10004[aik<"f">(6785, 1362825773494630248L ^ var1)] = aik<"f">(1366, 6616667444811163778L ^ var1);
      var10004[aik<"f">(23309, 6383953606081132264L ^ var1)] = aik<"f">(18101, 7258718872353221440L ^ var1);
      var10004[aik<"f">(20004, 550744983972586442L ^ var1)] = aik<"f">(23385, 3405798044802266764L ^ var1);
      var10004[aik<"f">(28009, 7831835259688124591L ^ var1)] = aik<"f">(17172, 1439315033666694887L ^ var1);
      var10004[aik<"f">(12625, 8085150910025260192L ^ var1)] = aik<"f">(23385, 3405798044802266764L ^ var1);
      var10004[aik<"f">(9161, 3893093137382657586L ^ var1)] = aik<"f">(6104, 5987280220570286595L ^ var1);
      this.zwpWs = new cG(this, mr.clS(var10004)).Uf(jk.jEkxo);
      var10004 = new int[aik<"f">(3385, 2907683262383513847L ^ var1)];
      var10004[0] = aik<"f">(7864, 7785527226199176028L ^ var1);
      var10004[1] = aik<"f">(6104, 5987280220570286595L ^ var1);
      var10004[2] = aik<"f">(24398, 3444170169707737752L ^ var1);
      var10004[3] = aik<"f">(32592, 8616105033521205912L ^ var1);
      var10004[4] = aik<"f">(1044, 261964476347640266L ^ var1);
      var10004[5] = aik<"f">(26416, 6376656876297292504L ^ var1);
      var10004[aik<"f">(18252, 7198841634926537376L ^ var1)] = aik<"f">(1366, 6616667444811163778L ^ var1);
      var10004[aik<"f">(3266, 5748756808635998475L ^ var1)] = aik<"f">(7864, 7785527226199176028L ^ var1);
      var10004[aik<"f">(2178, 118632678197486919L ^ var1)] = aik<"f">(24398, 3444170169707737752L ^ var1);
      var10004[aik<"f">(27376, 3561826728467203879L ^ var1)] = aik<"f">(17172, 1439315033666694887L ^ var1);
      var10004[aik<"f">(6351, 7884909153420866861L ^ var1)] = aik<"f">(17172, 1439315033666694887L ^ var1);
      var10004[aik<"f">(24768, 7351701667744320807L ^ var1)] = aik<"f">(1366, 6616667444811163778L ^ var1);
      var10004[aik<"f">(12975, 7579310804739022706L ^ var1)] = aik<"f">(18101, 7258718872353221440L ^ var1);
      var10004[aik<"f">(5198, 2167601553699961271L ^ var1)] = aik<"f">(23385, 3405798044802266764L ^ var1);
      var10004[aik<"f">(5347, 6713177738456103168L ^ var1)] = aik<"f">(17172, 1439315033666694887L ^ var1);
      var10004[aik<"f">(14193, 4535381301359270531L ^ var1)] = aik<"f">(23385, 3405798044802266764L ^ var1);
      var10004[aik<"f">(4480, 5325713046639934560L ^ var1)] = aik<"f">(6104, 5987280220570286595L ^ var1);
      this.MFFfX = new cG(this, mr.clS(var10004)).Uf(jk.jEkxo.cob(0.5F));
      this.Tkevx = new ct(
            this,
            mr.clS(
               new int[]{
                  aik<"f">(20248, 8449959341210575562L ^ var1),
                  aik<"f">(23385, 3405798044802266764L ^ var1),
                  aik<"f">(26416, 6376656876297292504L ^ var1),
                  aik<"f">(32592, 8616105033521205912L ^ var1)
               }
            )
         )
         .SO(1);
      this.Bcsfp = new cu(
         this.Tkevx,
         mr.clS(
            new int[]{
               aik<"f">(494, 8336952913897581583L ^ var1),
               aik<"f">(23385, 3405798044802266764L ^ var1),
               aik<"f">(26416, 6376656876297292504L ^ var1),
               aik<"f">(32592, 8616105033521205912L ^ var1),
               aik<"f">(17172, 1439315033666694887L ^ var1)
            }
         )
      );
      ct var10003 = this.Tkevx;
      var10004 = new int[aik<"f">(18252, 7198841634926537376L ^ var1)];
      var10004[0] = aik<"f">(10245, 5793829298038588889L ^ var1);
      var10004[1] = aik<"f">(24398, 3444170169707737752L ^ var1);
      var10004[2] = aik<"f">(2128, 5475815681613981079L ^ var1);
      var10004[3] = aik<"f">(23507, 97769958630405689L ^ var1);
      var10004[4] = aik<"f">(23385, 3405798044802266764L ^ var1);
      var10004[5] = aik<"f">(28963, 1999976340114218184L ^ var1);
      this.omxYT = new cu(var10003, mr.clS(var10004));
   }

   static {
      long var0 = zEUdL ^ 77137010299908L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[61];
      int var5 = 0;
      String var6 = "Á\u0088÷È\u009b\fi\u000fU\u0089°\u0080X\u0081FM\f\u008bßH½\"´\u0013m\u0091Ì\u0097h ü\u0093Þ\u0087Ój\u009aYÕ\r,Î¡\\òª^\u0086Y»\u001aùLÕ¢\u0019ÿ\u000b%E\u0093\u0095¯dñ\u0085ÀJxÖ)\b)L\nÎÿöaÑ\u0086R\u0097\u0095P\u0084s\u00ad5£\u0002_ñ¯Rÿæ\u001eðÂÂm>2õ\n6\u0018ç!$\u0095zÞ¶o\u0093Ó\u0015{\u0081ST\u0080¯\u0016ü¿pJR¯\u001bò®¼©\u0094ñÎÕÑC\u0000= ËC\u008e\u001cW\u0097\u00ad\u001e\u0091Ê\u0016µJ¤¼P\u008fã6»Á\u008eÍó£w\u009e³îý\t9\u0088\u0007\u0010Æ5Ëè¼\u000f\u001cOA¾è\u000e[zð\u0013\u0012K\u008bhÿ\u007f ¯8\u0094\u000b\u0006ux¨£L³\u008d\u008d è\u009d\u008dí\u008eÓäB\u0092òÆ¾\u0003ø\u001312\u000b?à!³¢\u0017Þg/©á,^r»º\u0099\u0093[\u008a´}\u0087\u001dºáx]\u0003/í5\u0091ô²Ã*\u0003\u0013³íls\u0095Ñw¢e5DÎEEP\u0083k¹ª\u0087\u0091ñ\u0014{¹â06ø\u0012Ê\u001c÷¥ªÂ~ë%*®CH*kC\u001b{\u0002Òz\u001cwBûÏì´îgÞ¥\u000bÑ\u0011Ç\u00943Ì\u009a\u0092³\u0016Á÷\u008eô\u00ad¿%Y$éµ\u0000GrjtQwÆ,L\u0014ºÍ9\u0095\u0001S\t·*·Ï]\u008e%í\u0090B-h]×Q\u0011U\u009a·AvQ8¹\u001fÞ8\f©b7È\u009dÿ(çéÕëgã9Óò'µ¢iÛ1fdá\u001f;FÔ\u000eìo\r¶2e\u0006\u009cëÁò\u009a=½\u009a<\u000bf4l\u0092/N\u009bÉ\u00ad\u00ad=éßR\u009fº(é«à";
      int var7 = "Á\u0088÷È\u009b\fi\u000fU\u0089°\u0080X\u0081FM\f\u008bßH½\"´\u0013m\u0091Ì\u0097h ü\u0093Þ\u0087Ój\u009aYÕ\r,Î¡\\òª^\u0086Y»\u001aùLÕ¢\u0019ÿ\u000b%E\u0093\u0095¯dñ\u0085ÀJxÖ)\b)L\nÎÿöaÑ\u0086R\u0097\u0095P\u0084s\u00ad5£\u0002_ñ¯Rÿæ\u001eðÂÂm>2õ\n6\u0018ç!$\u0095zÞ¶o\u0093Ó\u0015{\u0081ST\u0080¯\u0016ü¿pJR¯\u001bò®¼©\u0094ñÎÕÑC\u0000= ËC\u008e\u001cW\u0097\u00ad\u001e\u0091Ê\u0016µJ¤¼P\u008fã6»Á\u008eÍó£w\u009e³îý\t9\u0088\u0007\u0010Æ5Ëè¼\u000f\u001cOA¾è\u000e[zð\u0013\u0012K\u008bhÿ\u007f ¯8\u0094\u000b\u0006ux¨£L³\u008d\u008d è\u009d\u008dí\u008eÓäB\u0092òÆ¾\u0003ø\u001312\u000b?à!³¢\u0017Þg/©á,^r»º\u0099\u0093[\u008a´}\u0087\u001dºáx]\u0003/í5\u0091ô²Ã*\u0003\u0013³íls\u0095Ñw¢e5DÎEEP\u0083k¹ª\u0087\u0091ñ\u0014{¹â06ø\u0012Ê\u001c÷¥ªÂ~ë%*®CH*kC\u001b{\u0002Òz\u001cwBûÏì´îgÞ¥\u000bÑ\u0011Ç\u00943Ì\u009a\u0092³\u0016Á÷\u008eô\u00ad¿%Y$éµ\u0000GrjtQwÆ,L\u0014ºÍ9\u0095\u0001S\t·*·Ï]\u008e%í\u0090B-h]×Q\u0011U\u009a·AvQ8¹\u001fÞ8\f©b7È\u009dÿ(çéÕëgã9Óò'µ¢iÛ1fdá\u001f;FÔ\u000eìo\r¶2e\u0006\u009cëÁò\u009a=½\u009a<\u000bf4l\u0092/N\u009bÉ\u00ad\u00ad=éßR\u009fº(é«à"
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
                     TcimW = var8;
                     dnAGY = new Integer[61];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "\u0003¦\u00114w0+ì,\u0006×\u000e\u009cÜñÐ";
                  var7 = "\u0003¦\u00114w0+ì,\u0006×\u000e\u009cÜñÐ".length();
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

   private static MatchException aih(MatchException var0) {
      return var0;
   }

   private static int aii(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 11801;
      if (dnAGY[var3] == null) {
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
         long var5 = TcimW[var3];
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
         Object[] var9 = (Object[])GxymI.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               GxymI.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/ds", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         dnAGY[var3] = var15;
      }

      return dnAGY[var3];
   }

   private static int aij(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = aii(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite aik(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aij".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ds" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   @hG
   public void aig(go$sX param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/ds.zEUdL J
      // 003: ldc2_w 64785704576451
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/ds.bab ()Z
      // 011: ifne 019
      // 014: return
      // 015: invokestatic sixtwo/ds.aih (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 018: athrow
      // 019: aload 1
      // 01a: invokevirtual sixtwo/go$sX.bbh ()Lnet/minecraft/class_4587;
      // 01d: astore 5
      // 01f: invokestatic sixtwo/rD.dlJ ()Lsixtwo/ge;
      // 022: ldc_w sixtwo/fJ
      // 025: invokevirtual sixtwo/ge.aZx (Ljava/lang/Class;)Lsixtwo/gg;
      // 028: checkcast sixtwo/fJ
      // 02b: astore 6
      // 02d: getstatic sixtwo/ds.MMuss Lsixtwo/kN;
      // 030: invokevirtual sixtwo/kN.startBatch ()V
      // 033: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 036: getfield net/minecraft/class_310.field_1773 Lnet/minecraft/class_757;
      // 039: invokevirtual net/minecraft/class_757.method_19418 ()Lnet/minecraft/class_4184;
      // 03c: invokevirtual net/minecraft/class_4184.method_71156 ()Lnet/minecraft/class_243;
      // 03f: invokevirtual net/minecraft/class_243.method_22882 ()Lnet/minecraft/class_243;
      // 042: astore 7
      // 044: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 047: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 04a: invokevirtual net/minecraft/class_638.method_18112 ()Ljava/lang/Iterable;
      // 04d: invokeinterface java/lang/Iterable.iterator ()Ljava/util/Iterator; 1
      // 052: astore 8
      // 054: aload 8
      // 056: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 05b: ifeq 1b5
      // 05e: aload 8
      // 060: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 065: checkcast net/minecraft/class_1297
      // 068: astore 9
      // 06a: aload 4
      // 06c: ifnonnull 1bb
      // 06f: aload 9
      // 071: aload 4
      // 073: ifnonnull 08f
      // 076: goto 07d
      // 079: invokestatic sixtwo/ds.aih (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07c: athrow
      // 07d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 080: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 083: if_acmpeq 054
      // 086: goto 08d
      // 089: invokestatic sixtwo/ds.aih (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08c: athrow
      // 08d: aload 9
      // 08f: invokestatic sixtwo/jJ.bIB (Lnet/minecraft/class_1297;)Z
      // 092: aload 4
      // 094: ifnonnull 0b6
      // 097: ifne 0ad
      // 09a: goto 0a1
      // 09d: invokestatic sixtwo/ds.aih (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a0: athrow
      // 0a1: aload 4
      // 0a3: ifnull 054
      // 0a6: goto 0ad
      // 0a9: invokestatic sixtwo/ds.aih (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ac: athrow
      // 0ad: aload 0
      // 0ae: getfield sixtwo/ds.RIxRc Lsixtwo/cF;
      // 0b1: aload 9
      // 0b3: invokevirtual sixtwo/cF.VX (Lnet/minecraft/class_1297;)Z
      // 0b6: ifne 0c5
      // 0b9: aload 4
      // 0bb: ifnull 054
      // 0be: goto 0c5
      // 0c1: invokestatic sixtwo/ds.aih (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c4: athrow
      // 0c5: aload 9
      // 0c7: invokestatic sixtwo/jg.bBA (Lnet/minecraft/class_1297;)Lnet/minecraft/class_238;
      // 0ca: astore 10
      // 0cc: aload 0
      // 0cd: getfield sixtwo/ds.Tkevx Lsixtwo/ct;
      // 0d0: bipush 1
      // 0d1: invokevirtual sixtwo/ct.SQ (I)Z
      // 0d4: aload 4
      // 0d6: ifnonnull 12b
      // 0d9: ifeq 111
      // 0dc: goto 0e3
      // 0df: invokestatic sixtwo/ds.aih (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e2: athrow
      // 0e3: aload 6
      // 0e5: invokevirtual sixtwo/fJ.bag ()Z
      // 0e8: aload 4
      // 0ea: ifnonnull 12b
      // 0ed: goto 0f4
      // 0f0: invokestatic sixtwo/ds.aih (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f3: athrow
      // 0f4: ifeq 111
      // 0f7: goto 0fe
      // 0fa: invokestatic sixtwo/ds.aih (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0fd: athrow
      // 0fe: aload 6
      // 100: aload 9
      // 102: invokevirtual sixtwo/fJ.aUP (Lnet/minecraft/class_1297;)F
      // 105: fstore 11
      // 107: aload 10
      // 109: fload 11
      // 10b: f2d
      // 10c: invokevirtual net/minecraft/class_238.method_1014 (D)Lnet/minecraft/class_238;
      // 10f: astore 10
      // 111: aload 10
      // 113: aload 7
      // 115: invokevirtual net/minecraft/class_238.method_997 (Lnet/minecraft/class_243;)Lnet/minecraft/class_238;
      // 118: astore 10
      // 11a: aload 4
      // 11c: ifnonnull 1b0
      // 11f: aload 9
      // 121: instanceof net/minecraft/class_1657
      // 124: goto 12b
      // 127: invokestatic sixtwo/ds.aih (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 12a: athrow
      // 12b: ifeq 184
      // 12e: aload 9
      // 130: checkcast net/minecraft/class_1657
      // 133: astore 11
      // 135: aload 4
      // 137: ifnonnull 1b0
      // 13a: invokestatic sixtwo/rD.dmc ()Lsixtwo/qQ;
      // 13d: aload 11
      // 13f: invokevirtual sixtwo/qQ.ddy (Lnet/minecraft/class_1657;)Z
      // 142: ifeq 184
      // 145: goto 14c
      // 148: invokestatic sixtwo/ds.aih (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14b: athrow
      // 14c: getstatic sixtwo/ds.MMuss Lsixtwo/kN;
      // 14f: aload 5
      // 151: aload 10
      // 153: aload 0
      // 154: getfield sixtwo/ds.NgLhx Lsixtwo/cJ;
      // 157: invokevirtual sixtwo/cJ.WF ()Z
      // 15a: bipush 0
      // 15b: invokestatic sixtwo/kH.bTJ (Lnet/minecraft/class_4587;Lnet/minecraft/class_238;ZZ)Lsixtwo/kH$up;
      // 15e: aload 0
      // 15f: getfield sixtwo/ds.zwpWs Lsixtwo/cG;
      // 162: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 165: invokevirtual sixtwo/kH$up.dtN (Lsixtwo/mG;)Lsixtwo/kH$up;
      // 168: aload 0
      // 169: getfield sixtwo/ds.MFFfX Lsixtwo/cG;
      // 16c: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 16f: invokevirtual sixtwo/kH$up.dtO (Lsixtwo/mG;)Lsixtwo/kH$up;
      // 172: invokevirtual sixtwo/kH$up.dtS ()Lsixtwo/kH;
      // 175: invokevirtual sixtwo/kN.bUS (Lsixtwo/kH;)V
      // 178: aload 4
      // 17a: ifnull 054
      // 17d: goto 184
      // 180: invokestatic sixtwo/ds.aih (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 183: athrow
      // 184: getstatic sixtwo/ds.MMuss Lsixtwo/kN;
      // 187: aload 5
      // 189: aload 10
      // 18b: aload 0
      // 18c: getfield sixtwo/ds.NgLhx Lsixtwo/cJ;
      // 18f: invokevirtual sixtwo/cJ.WF ()Z
      // 192: bipush 0
      // 193: invokestatic sixtwo/kH.bTJ (Lnet/minecraft/class_4587;Lnet/minecraft/class_238;ZZ)Lsixtwo/kH$up;
      // 196: aload 0
      // 197: getfield sixtwo/ds.VLjNm Lsixtwo/cG;
      // 19a: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 19d: invokevirtual sixtwo/kH$up.dtN (Lsixtwo/mG;)Lsixtwo/kH$up;
      // 1a0: aload 0
      // 1a1: getfield sixtwo/ds.BDwzq Lsixtwo/cG;
      // 1a4: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 1a7: invokevirtual sixtwo/kH$up.dtO (Lsixtwo/mG;)Lsixtwo/kH$up;
      // 1aa: invokevirtual sixtwo/kH$up.dtS ()Lsixtwo/kH;
      // 1ad: invokevirtual sixtwo/kN.bUS (Lsixtwo/kH;)V
      // 1b0: aload 4
      // 1b2: ifnull 054
      // 1b5: getstatic sixtwo/ds.MMuss Lsixtwo/kN;
      // 1b8: invokevirtual sixtwo/kN.endBatch ()V
      // 1bb: goto 1c9
      // 1be: astore 12
      // 1c0: getstatic sixtwo/ds.MMuss Lsixtwo/kN;
      // 1c3: invokevirtual sixtwo/kN.endBatch ()V
      // 1c6: aload 12
      // 1c8: athrow
      // 1c9: return
   }
}
