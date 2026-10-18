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
import net.minecraft.class_241;

public class po extends pA {
   private final cJ HPiNo;
   private final cJ wToji;
   private static final long fOoPJ = gb.aYR(-124399486084661757L, -5482780568688628892L, MethodHandles.lookup().lookupClass()).a(169349507375206L);
   private static final String[] mPffK;
   private static final String[] JpLoo;
   private static final Map UUABk = new HashMap(13);
   private static final long[] nngoF;
   private static final Integer[] kBdmD;
   private static final Map tvwWu;

   public po() {
      long var1 = fOoPJ ^ 64378181535597L;
      pq.cOM();
      super(cOA<"u">(923, 2153153947425633551L ^ var1), cOA<"u">(31571, 2363216239753727430L ^ var1));
      int[] var10005 = new int[cOD<"a">(25412, 3008732224440447433L ^ var1)];
      var10005[0] = cOD<"a">(5669, 5195099499719115961L ^ var1);
      var10005[1] = cOD<"a">(12908, 8057648926042808557L ^ var1);
      var10005[2] = cOD<"a">(20045, 992504669740506324L ^ var1);
      var10005[3] = cOD<"a">(19861, 8660966616486452993L ^ var1);
      var10005[4] = cOD<"a">(15542, 6238701311893892657L ^ var1);
      var10005[5] = cOD<"a">(162, 5699917859158872610L ^ var1);
      var10005[cOD<"a">(3770, 4195977672895224840L ^ var1)] = cOD<"a">(24446, 6914631036729462262L ^ var1);
      var10005[cOD<"a">(6851, 2172586494179461199L ^ var1)] = cOD<"a">(32431, 2296132952372194366L ^ var1);
      var10005[cOD<"a">(113, 7176604287379264193L ^ var1)] = cOD<"a">(8444, 534920345285358178L ^ var1);
      var10005[cOD<"a">(15877, 3102360277421485207L ^ var1)] = cOD<"a">(32431, 2296132952372194366L ^ var1);
      var10005[cOD<"a">(1371, 1191068180523866061L ^ var1)] = cOD<"a">(6511, 3136504178478762994L ^ var1);
      this.HPiNo = new cJ(this, mr.clS(var10005));
      var10005 = new int[cOD<"a">(14604, 3519854066286128008L ^ var1)];
      var10005[0] = cOD<"a">(148, 787216951658697217L ^ var1);
      var10005[1] = cOD<"a">(9622, 6798837831968749313L ^ var1);
      var10005[2] = cOD<"a">(2888, 852785612527917522L ^ var1);
      var10005[3] = cOD<"a">(1436, 9015956671398041384L ^ var1);
      var10005[4] = cOD<"a">(8137, 4351848652994071875L ^ var1);
      var10005[5] = cOD<"a">(29224, 8681477621596364973L ^ var1);
      var10005[cOD<"a">(2946, 245962489270196535L ^ var1)] = cOD<"a">(6511, 3136504178478762994L ^ var1);
      var10005[cOD<"a">(21493, 182239644361556350L ^ var1)] = cOD<"a">(73, 582956410749113024L ^ var1);
      var10005[cOD<"a">(19463, 685029935675645573L ^ var1)] = cOD<"a">(15258, 7520299381180066068L ^ var1);
      var10005[cOD<"a">(1144, 3631639066183128811L ^ var1)] = cOD<"a">(73, 582956410749113024L ^ var1);
      var10005[cOD<"a">(25904, 5120313767722694579L ^ var1)] = cOD<"a">(20472, 5759168620333407587L ^ var1);
      var10005[cOD<"a">(19790, 8639002765772365821L ^ var1)] = cOD<"a">(32431, 2296132952372194366L ^ var1);
      var10005[cOD<"a">(6010, 8848920425271018981L ^ var1)] = cOD<"a">(28260, 52175164566781163L ^ var1);
      this.wToji = new cJ(this, mr.clS(var10005));

      try {
         this.position(pM.oFEYk);
         if (iS.bwL() == null) {
            pq.cOL("pzrVhb");
         }
      } catch (MatchException var4) {
         throw cOw(var4);
      }
   }

   static {
      long var11 = fOoPJ ^ 98542086147337L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[2];
      int var18 = 0;
      String var17 = "\u008a├ž\u0006┬│\u0010┬«.\u0011J+\u009bm\u0091├ł\u0088\u0081┬Ęg┬╣├ž┬ŞsI├á├ś├â2├â├ő\u0086\u000f├░\u00186┬«\"┬ź├ĽdG2├Üc\u0082┬«┬┤\u008cJq\u0004┬ę\u0016├Ś┬▓\u001d/\u001f";
      int var19 = "\u008a├ž\u0006┬│\u0010┬«.\u0011J+\u009bm\u0091├ł\u0088\u0081┬Ęg┬╣├ž┬ŞsI├á├ś├â2├â├ő\u0086\u000f├░\u00186┬«\"┬ź├ĽdG2├Üc\u0082┬«┬┤\u008cJq\u0004┬ę\u0016├Ś┬▓\u001d/\u001f"
         .length();
      char var16 = ' ';
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = cOx(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            mPffK = var20;
            JpLoo = new String[2];
            tvwWu = new HashMap(13);
            Cipher var0;
            var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[41];
            int var3 = 0;
            String var4 = "s\u008d├░┬▓Jn\u0014├śm├č├║~┬Â├│├│ \u0010*├Ź├î┬░\u008d\u0082├Ş├×\t├ź├×┬ź├ć\u008b┬┤\u0010├ź^├╣$\u001b\u0012\u000e├¬VG├ą\u000b├¬>├ş\u0002X├░'\u0098B?$\u0002┬┤Uo\u000bR\u0014├ź\u0014┬Č*l├łz}\u001fG├âKE\u0087z ├░\u0088h\u00017\u0090├Őp┬á0N\u0086}┬Şn\u0002\u0001q├Ć\u0094\u008czR\u0017\u008dH├ź\u001f├ę$\u008c├▒├ž@\u000b]├×\\%\u0011├ŽDc├ą├Ĺ┬╗,┬┤\u009d\u008d├ćAI├ć\u0091├čz├é\u0081\u008b├▓\u0002\u008a\"├í\u008b\u009b\u0090\u0002├│\u0005T├Ž\u0017b\u009d\"├╣┬▒y├ĆZ├░├î├×├┐\u0095\u001e\rB\u008a o$├ü├Ś\u001b\u0007├É├ż\u009c├ź|┬│├╣K├Ž\u009a\u000f>+\u0010├ů1\\├╝&-\u00146\u009b,\f┬Ą├┐p├é\u0092┬┐┬ą├░h├╣┬ú├é\u0016^├Ä.K\u001b~\u001arI├Ş]b\u0082├»├Ź┬ą├ĽF1├╗├âl\u0095#l├ÖT\u007f├░\u0087U├ž├î├ĺ├çL\u001a=├ľ├╝┬Â\u008e\u0007├Ź3@\u0010XP\u0097J\tZ├ő\u0000┬Ż├┤N├ą\u0086├Ż┬ás5\u0013├╣!\u0010\u0010├âG├║┬ĚU┬Ż\u00172├áu├Č\u0014├ÇW?(\u009a├ë\u009a┬Ž┬┐]\u0084\r\u009ea\u008e├ź";
            int var5 = "s\u008d├░┬▓Jn\u0014├śm├č├║~┬Â├│├│ \u0010*├Ź├î┬░\u008d\u0082├Ş├×\t├ź├×┬ź├ć\u008b┬┤\u0010├ź^├╣$\u001b\u0012\u000e├¬VG├ą\u000b├¬>├ş\u0002X├░'\u0098B?$\u0002┬┤Uo\u000bR\u0014├ź\u0014┬Č*l├łz}\u001fG├âKE\u0087z ├░\u0088h\u00017\u0090├Őp┬á0N\u0086}┬Şn\u0002\u0001q├Ć\u0094\u008czR\u0017\u008dH├ź\u001f├ę$\u008c├▒├ž@\u000b]├×\\%\u0011├ŽDc├ą├Ĺ┬╗,┬┤\u009d\u008d├ćAI├ć\u0091├čz├é\u0081\u008b├▓\u0002\u008a\"├í\u008b\u009b\u0090\u0002├│\u0005T├Ž\u0017b\u009d\"├╣┬▒y├ĆZ├░├î├×├┐\u0095\u001e\rB\u008a o$├ü├Ś\u001b\u0007├É├ż\u009c├ź|┬│├╣K├Ž\u009a\u000f>+\u0010├ů1\\├╝&-\u00146\u009b,\f┬Ą├┐p├é\u0092┬┐┬ą├░h├╣┬ú├é\u0016^├Ä.K\u001b~\u001arI├Ş]b\u0082├»├Ź┬ą├ĽF1├╗├âl\u0095#l├ÖT\u007f├░\u0087U├ž├î├ĺ├çL\u001a=├ľ├╝┬Â\u008e\u0007├Ź3@\u0010XP\u0097J\tZ├ő\u0000┬Ż├┤N├ą\u0086├Ż┬ás5\u0013├╣!\u0010\u0010├âG├║┬ĚU┬Ż\u00172├áu├Č\u0014├ÇW?(\u009a├ë\u009a┬Ž┬┐]\u0084\r\u009ea\u008e├ź"
               .length();
            byte var2 = 0;

            label32:
            while (true) {
               var10001 = var2;
               var2 += 8;
               byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
               long[] var25 = var6;
               var10001 = var3++;
               long var33 = (var7[0] & 255L) << 56
                  | (var7[1] & 255L) << 48
                  | (var7[2] & 255L) << 40
                  | (var7[3] & 255L) << 32
                  | (var7[4] & 255L) << 24
                  | (var7[5] & 255L) << 16
                  | (var7[6] & 255L) << 8
                  | var7[7] & 255L;
               byte var36 = -1;

               while (true) {
                  long var8 = var33;
                  byte[] var10 = var0.doFinal(
                     new byte[]{
                        (byte)(var8 >>> 56),
                        (byte)(var8 >>> 48),
                        (byte)(var8 >>> 40),
                        (byte)(var8 >>> 32),
                        (byte)(var8 >>> 24),
                        (byte)(var8 >>> 16),
                        (byte)(var8 >>> 8),
                        (byte)var8
                     }
                  );
                  long var38 = (var10[0] & 255L) << 56
                     | (var10[1] & 255L) << 48
                     | (var10[2] & 255L) << 40
                     | (var10[3] & 255L) << 32
                     | (var10[4] & 255L) << 24
                     | (var10[5] & 255L) << 16
                     | (var10[6] & 255L) << 8
                     | var10[7] & 255L;
                  switch (var36) {
                     case 0:
                        var25[var10001] = var38;
                        if (var2 >= var5) {
                           nngoF = var6;
                           kBdmD = new Integer[41];
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "J├ś┬Ž\\\u0097┬╣├Ź\u001c\u0084├«├źjb'\u0004\u0084";
                        var5 = "J├ś┬Ž\\\u0097┬╣├Ź\u001c\u0084├«├źjb'\u0004\u0084".length();
                        var2 = 0;
                  }

                  byte var29 = var2;
                  var2 += 8;
                  var7 = var4.substring(var29, var2).getBytes("ISO-8859-1");
                  var25 = var6;
                  var10001 = var3++;
                  var33 = (var7[0] & 255L) << 56
                     | (var7[1] & 255L) << 48
                     | (var7[2] & 255L) << 40
                     | (var7[3] & 255L) << 32
                     | (var7[4] & 255L) << 24
                     | (var7[5] & 255L) << 16
                     | (var7[6] & 255L) << 8
                     | var7[7] & 255L;
                  var36 = 0;
               }
            }
         }

         var16 = var17.charAt(var15);
      }
   }

   private static int cOB(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 10651;
      if (kBdmD[var3] == null) {
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
         long var5 = nngoF[var3];
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
         Object[] var9 = (Object[])tvwWu.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               tvwWu.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/po", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         kBdmD[var3] = var15;
      }

      return kBdmD[var3];
   }

   private static String cOx(byte[] var0) {
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

   private float cOv(pA$vy var1) {
      return this.cQI(1.0F, var1.renderScale());
   }

   private void cOu(lC param1, class_1297 param2, boolean param3, float param4, float param5, float param6, float param7) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/po.fOoPJ J
      // 03: ldc2_w 128581626319307
      // 06: lxor
      // 07: lstore 8
      // 09: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 0c: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 0f: ldc_w 255.0
      // 12: fload 7
      // 14: fmul
      // 15: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 18: astore 11
      // 1a: astore 10
      // 1c: fload 6
      // 1e: ldc 5.0
      // 20: fdiv
      // 21: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 24: astore 12
      // 26: aload 2
      // 27: instanceof net/minecraft/class_742
      // 2a: aload 10
      // 2c: ifnonnull 5c
      // 2f: ifeq 54
      // 32: goto 39
      // 35: invokestatic sixtwo/po.cOw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: aload 2
      // 3a: checkcast net/minecraft/class_742
      // 3d: astore 13
      // 3f: aload 1
      // 40: aload 13
      // 42: fload 4
      // 44: fload 5
      // 46: fload 6
      // 48: aload 12
      // 4a: aload 11
      // 4c: invokevirtual sixtwo/lC.ccZ (Lnet/minecraft/class_742;FFFLsixtwo/ld;Lsixtwo/mG;)V
      // 4f: aload 10
      // 51: ifnull a4
      // 54: iload 3
      // 55: goto 5c
      // 58: invokestatic sixtwo/po.cOw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5b: athrow
      // 5c: ifeq 8f
      // 5f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 62: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 65: ifnull 8f
      // 68: goto 6f
      // 6b: invokestatic sixtwo/po.cOw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6e: athrow
      // 6f: aload 1
      // 70: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 73: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 76: fload 4
      // 78: fload 5
      // 7a: fload 6
      // 7c: aload 12
      // 7e: aload 11
      // 80: invokevirtual sixtwo/lC.ccZ (Lnet/minecraft/class_742;FFFLsixtwo/ld;Lsixtwo/mG;)V
      // 83: aload 10
      // 85: ifnull a4
      // 88: goto 8f
      // 8b: invokestatic sixtwo/po.cOw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8e: athrow
      // 8f: aload 1
      // 90: fload 4
      // 92: fload 5
      // 94: fload 6
      // 96: aload 12
      // 98: aload 11
      // 9a: invokevirtual sixtwo/lC.cdb (FFFLsixtwo/ld;Lsixtwo/mG;)V
      // 9d: goto a4
      // a0: invokestatic sixtwo/po.cOw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a3: athrow
      // a4: return
   }

   private static Object cOz(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = cOy(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   @Override
   protected void cOs(lC param1, lc param2, pA$vy param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/po.fOoPJ J
      // 03: ldc2_w 75160369830824
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 0c: aload 2
      // 0d: invokevirtual sixtwo/lc.bXF ()F
      // 10: aload 3
      // 11: invokevirtual sixtwo/pA$vy.paddingX ()F
      // 14: fadd
      // 15: fstore 7
      // 17: astore 6
      // 19: aload 2
      // 1a: invokevirtual sixtwo/lc.bXI ()F
      // 1d: aload 0
      // 1e: aload 3
      // 1f: invokevirtual sixtwo/po.cOv (Lsixtwo/pA$vy;)F
      // 22: fsub
      // 23: fstore 8
      // 25: aload 0
      // 26: aload 6
      // 28: ifnonnull 43
      // 2b: getfield sixtwo/po.HPiNo Lsixtwo/cJ;
      // 2e: invokevirtual sixtwo/cJ.WF ()Z
      // 31: ifeq 84
      // 34: goto 3b
      // 37: invokestatic sixtwo/po.cOw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a: athrow
      // 3b: aload 0
      // 3c: goto 43
      // 3f: invokestatic sixtwo/po.cOw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: ldc 5.0
      // 45: aload 3
      // 46: invokevirtual sixtwo/pA$vy.renderScale ()F
      // 49: invokevirtual sixtwo/po.cQI (FF)F
      // 4c: fstore 9
      // 4e: aload 2
      // 4f: invokevirtual sixtwo/lc.bXG ()F
      // 52: fload 9
      // 54: fload 8
      // 56: invokestatic sixtwo/jf.bAH (FF)F
      // 59: fadd
      // 5a: fstore 10
      // 5c: aload 0
      // 5d: aload 1
      // 5e: aload 3
      // 5f: invokevirtual sixtwo/pA$vy.entity ()Lnet/minecraft/class_1297;
      // 62: aload 3
      // 63: invokevirtual sixtwo/pA$vy.preview ()Z
      // 66: fload 7
      // 68: fload 10
      // 6a: fload 9
      // 6c: aload 3
      // 6d: invokevirtual sixtwo/pA$vy.alpha ()F
      // 70: invokevirtual sixtwo/po.cOu (Lsixtwo/lC;Lnet/minecraft/class_1297;ZFFFF)V
      // 73: fload 7
      // 75: fload 9
      // 77: aload 0
      // 78: fconst_2
      // 79: aload 3
      // 7a: invokevirtual sixtwo/pA$vy.renderScale ()F
      // 7d: invokevirtual sixtwo/po.cQI (FF)F
      // 80: fadd
      // 81: fadd
      // 82: fstore 7
      // 84: aload 2
      // 85: invokevirtual sixtwo/lc.bXG ()F
      // 88: aload 3
      // 89: invokevirtual sixtwo/pA$vy.textHeight ()F
      // 8c: fload 8
      // 8e: invokestatic sixtwo/jf.bAH (FF)F
      // 91: fadd
      // 92: fstore 9
      // 94: aload 0
      // 95: aload 1
      // 96: aload 3
      // 97: invokevirtual sixtwo/pA$vy.font ()Lsixtwo/lq;
      // 9a: aload 3
      // 9b: invokevirtual sixtwo/pA$vy.text ()Ljava/lang/String;
      // 9e: fload 7
      // a0: fload 9
      // a2: aload 3
      // a3: invokevirtual sixtwo/pA$vy.alpha ()F
      // a6: invokevirtual sixtwo/po.cRG (Lsixtwo/lC;Lsixtwo/lq;Ljava/lang/String;FFF)V
      // a9: return
   }

   private static CallSite cOA(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cOz".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/po" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static MatchException cOw(MatchException var0) {
      return var0;
   }

   @Override
   protected String cNC(class_1297 param1, boolean param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/po.fOoPJ J
      // 003: ldc2_w 117048129153755
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 00b: astore 5
      // 00d: iload 2
      // 00e: aload 5
      // 010: ifnonnull 131
      // 013: ifeq 121
      // 016: goto 01d
      // 019: invokestatic sixtwo/po.cOw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01c: athrow
      // 01d: sipush 19790
      // 020: ldc2_w 8638950576257118795
      // 023: lload 3
      // 024: lxor
      // 025: invokedynamic a (IJ)I bsm=sixtwo/po.cOD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 02a: newarray 10
      // 02c: dup
      // 02d: bipush 0
      // 02e: sipush 18207
      // 031: ldc2_w 850226593427175455
      // 034: lload 3
      // 035: lxor
      // 036: invokedynamic a (IJ)I bsm=sixtwo/po.cOD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 03b: iastore
      // 03c: dup
      // 03d: bipush 1
      // 03e: sipush 6511
      // 041: ldc2_w 3136556032383116868
      // 044: lload 3
      // 045: lxor
      // 046: invokedynamic a (IJ)I bsm=sixtwo/po.cOD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 04b: iastore
      // 04c: dup
      // 04d: bipush 2
      // 04e: bipush 73
      // 050: ldc2_w 583008606118510454
      // 053: lload 3
      // 054: lxor
      // 055: invokedynamic a (IJ)I bsm=sixtwo/po.cOD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 05a: iastore
      // 05b: dup
      // 05c: bipush 3
      // 05d: sipush 14246
      // 060: ldc2_w 2988397991279675528
      // 063: lload 3
      // 064: lxor
      // 065: invokedynamic a (IJ)I bsm=sixtwo/po.cOD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 06a: iastore
      // 06b: dup
      // 06c: bipush 4
      // 06d: sipush 8137
      // 070: ldc2_w 4351761141718180085
      // 073: lload 3
      // 074: lxor
      // 075: invokedynamic a (IJ)I bsm=sixtwo/po.cOD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 07a: iastore
      // 07b: dup
      // 07c: bipush 5
      // 07d: sipush 32325
      // 080: ldc2_w 6324195305701409090
      // 083: lload 3
      // 084: lxor
      // 085: invokedynamic a (IJ)I bsm=sixtwo/po.cOD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 08a: iastore
      // 08b: dup
      // 08c: sipush 2946
      // 08f: ldc2_w 245874361683801217
      // 092: lload 3
      // 093: lxor
      // 094: invokedynamic a (IJ)I bsm=sixtwo/po.cOD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 099: sipush 29189
      // 09c: ldc2_w 156581896116342031
      // 09f: lload 3
      // 0a0: lxor
      // 0a1: invokedynamic a (IJ)I bsm=sixtwo/po.cOD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0a6: iastore
      // 0a7: dup
      // 0a8: sipush 21493
      // 0ab: ldc2_w 182150614764399816
      // 0ae: lload 3
      // 0af: lxor
      // 0b0: invokedynamic a (IJ)I bsm=sixtwo/po.cOD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0b5: bipush 73
      // 0b7: ldc2_w 583008606118510454
      // 0ba: lload 3
      // 0bb: lxor
      // 0bc: invokedynamic a (IJ)I bsm=sixtwo/po.cOD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0c1: iastore
      // 0c2: dup
      // 0c3: sipush 19463
      // 0c6: ldc2_w 685083574222205747
      // 0c9: lload 3
      // 0ca: lxor
      // 0cb: invokedynamic a (IJ)I bsm=sixtwo/po.cOD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0d0: sipush 21031
      // 0d3: ldc2_w 7155348927584087319
      // 0d6: lload 3
      // 0d7: lxor
      // 0d8: invokedynamic a (IJ)I bsm=sixtwo/po.cOD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0dd: iastore
      // 0de: dup
      // 0df: sipush 1144
      // 0e2: ldc2_w 3631727056414997341
      // 0e5: lload 3
      // 0e6: lxor
      // 0e7: invokedynamic a (IJ)I bsm=sixtwo/po.cOD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0ec: sipush 22448
      // 0ef: ldc2_w 7460632800465528982
      // 0f2: lload 3
      // 0f3: lxor
      // 0f4: invokedynamic a (IJ)I bsm=sixtwo/po.cOD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0f9: iastore
      // 0fa: dup
      // 0fb: sipush 25904
      // 0fe: ldc2_w 5120402317827086853
      // 101: lload 3
      // 102: lxor
      // 103: invokedynamic a (IJ)I bsm=sixtwo/po.cOD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 108: sipush 19217
      // 10b: ldc2_w 2038424483609293840
      // 10e: lload 3
      // 10f: lxor
      // 110: invokedynamic a (IJ)I bsm=sixtwo/po.cOD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 115: iastore
      // 116: invokestatic sixtwo/mr.clS ([I)Lsixtwo/mr;
      // 119: invokevirtual sixtwo/mr.toString ()Ljava/lang/String;
      // 11c: areturn
      // 11d: invokestatic sixtwo/po.cOw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 120: athrow
      // 121: aload 1
      // 122: aload 5
      // 124: ifnonnull 144
      // 127: instanceof net/minecraft/class_1657
      // 12a: goto 131
      // 12d: invokestatic sixtwo/po.cOw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 130: athrow
      // 131: ifeq 143
      // 134: aload 1
      // 135: checkcast net/minecraft/class_1657
      // 138: astore 6
      // 13a: aload 6
      // 13c: invokevirtual net/minecraft/class_1657.method_7334 ()Lcom/mojang/authlib/GameProfile;
      // 13f: invokevirtual com/mojang/authlib/GameProfile.name ()Ljava/lang/String;
      // 142: areturn
      // 143: aload 1
      // 144: aload 5
      // 146: ifnonnull 15c
      // 149: ifnonnull 15b
      // 14c: goto 153
      // 14f: invokestatic sixtwo/po.cOw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 152: athrow
      // 153: aconst_null
      // 154: goto 164
      // 157: invokestatic sixtwo/po.cOw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 15a: athrow
      // 15b: aload 1
      // 15c: invokevirtual net/minecraft/class_1297.method_5477 ()Lnet/minecraft/class_2561;
      // 15f: invokeinterface net/minecraft/class_2561.getString ()Ljava/lang/String; 1
      // 164: areturn
   }

   private static String cOy(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 3483;
      if (JpLoo[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])UUABk.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               UUABk.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/po", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = mPffK[var5].getBytes("ISO-8859-1");
         JpLoo[var5] = cOx(((Cipher)var4[0]).doFinal(var9));
      }

      return JpLoo[var5];
   }

   private static CallSite cOD(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cOC".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/po" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int cOC(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = cOB(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   @Override
   protected class_241 cOr(pA$vy param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/po.fOoPJ J
      // 03: ldc2_w 59743755922460
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 0b: aload 1
      // 0c: invokevirtual sixtwo/pA$vy.textWidth ()F
      // 0f: aload 1
      // 10: invokevirtual sixtwo/pA$vy.paddingX ()F
      // 13: fconst_2
      // 14: fmul
      // 15: fadd
      // 16: fstore 5
      // 18: astore 4
      // 1a: aload 0
      // 1b: aload 1
      // 1c: invokevirtual sixtwo/po.cOv (Lsixtwo/pA$vy;)F
      // 1f: fstore 6
      // 21: aload 1
      // 22: invokevirtual sixtwo/pA$vy.textHeight ()F
      // 25: aload 1
      // 26: invokevirtual sixtwo/pA$vy.paddingY ()F
      // 29: fconst_2
      // 2a: fmul
      // 2b: fadd
      // 2c: fload 6
      // 2e: fadd
      // 2f: fstore 7
      // 31: aload 0
      // 32: aload 4
      // 34: ifnonnull 4f
      // 37: getfield sixtwo/po.HPiNo Lsixtwo/cJ;
      // 3a: invokevirtual sixtwo/cJ.WF ()Z
      // 3d: ifeq 7e
      // 40: goto 47
      // 43: invokestatic sixtwo/po.cOw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 46: athrow
      // 47: aload 0
      // 48: goto 4f
      // 4b: invokestatic sixtwo/po.cOw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4e: athrow
      // 4f: ldc 5.0
      // 51: aload 1
      // 52: invokevirtual sixtwo/pA$vy.renderScale ()F
      // 55: invokevirtual sixtwo/po.cQI (FF)F
      // 58: fstore 8
      // 5a: fload 5
      // 5c: fload 8
      // 5e: aload 0
      // 5f: fconst_2
      // 60: aload 1
      // 61: invokevirtual sixtwo/pA$vy.renderScale ()F
      // 64: invokevirtual sixtwo/po.cQI (FF)F
      // 67: fadd
      // 68: fadd
      // 69: fstore 5
      // 6b: fload 7
      // 6d: fload 8
      // 6f: aload 1
      // 70: invokevirtual sixtwo/pA$vy.paddingY ()F
      // 73: fconst_2
      // 74: fmul
      // 75: fadd
      // 76: fload 6
      // 78: fadd
      // 79: invokestatic java/lang/Math.max (FF)F
      // 7c: fstore 7
      // 7e: new net/minecraft/class_241
      // 81: dup
      // 82: fload 5
      // 84: fload 7
      // 86: invokespecial net/minecraft/class_241.<init> (FF)V
      // 89: areturn
   }

   public boolean cOt() {
      return this.wToji.WF();
   }
}
