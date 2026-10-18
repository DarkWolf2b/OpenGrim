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
import net.minecraft.class_1792;
import net.minecraft.class_1802;
import net.minecraft.class_2680;

public class dk extends gg {
   private final cK emDeH;
   private final cJ AwjXZ;
   private final cJ JTZwR;
   private static final long BVgZr = gb.aYR(5056340219880094500L, 6142770863447593462L, MethodHandles.lookup().lookupClass()).a(50335092989352L);
   private static final long[] tYNOc;
   private static final Integer[] fiAab;
   private static final Map Thkfx = new HashMap(13);

   public dk() {
      long var1 = BVgZr ^ 65771401917042L;
      super(gf.aZL(agI<"m">(23928, 6005964373697491260L ^ var1), false, gh.nOCvV).aZS(false));
      cK var10001 = new cK(
         this,
         mr.clS(
            new int[]{
               agI<"m">(15840, 6337332039989629355L ^ var1),
               agI<"m">(24629, 6891724636487240829L ^ var1),
               agI<"m">(27016, 469662668458640854L ^ var1),
               agI<"m">(11575, 5661609026644115814L ^ var1)
            }
         )
      );
      class_1792[] var10002 = new class_1792[agI<"m">(17078, 1111177573886783202L ^ var1)];
      var10002[0] = class_1802.field_22019;
      var10002[1] = class_1802.field_8787;
      var10002[2] = class_1802.field_8775;
      var10002[3] = class_1802.field_8599;
      var10002[4] = class_1802.field_8837;
      var10002[5] = class_1802.field_8604;
      var10002[agI<"m">(19312, 7913169890667816757L ^ var1)] = class_1802.field_8809;
      var10002[agI<"m">(24317, 1310218565185630888L ^ var1)] = class_1802.field_8476;
      var10002[agI<"m">(1387, 5679849298675018022L ^ var1)] = class_1802.field_8702;
      var10002[agI<"m">(27359, 1712653276767274655L ^ var1)] = class_1802.field_29022;
      var10002[agI<"m">(6475, 8821633749373138184L ^ var1)] = class_1802.field_29019;
      var10002[agI<"m">(3230, 6303695959182778578L ^ var1)] = class_1802.field_29020;
      var10002[agI<"m">(21425, 1055911243439013887L ^ var1)] = class_1802.field_29216;
      var10002[agI<"m">(22671, 1549314164147877061L ^ var1)] = class_1802.field_29023;
      var10002[agI<"m">(5557, 4890256270563490280L ^ var1)] = class_1802.field_29021;
      var10002[agI<"m">(22990, 1240327035672229263L ^ var1)] = class_1802.field_23140;
      var10002[agI<"m">(31044, 2844858379072230669L ^ var1)] = class_1802.field_27018;
      var10002[agI<"m">(25291, 6953917729992003213L ^ var1)] = class_1802.field_29211;
      var10002[agI<"m">(6196, 1569236131839358051L ^ var1)] = class_1802.field_8542;
      this.emDeH = var10001.WK(var10002);
      this.AwjXZ = new cJ(
            this,
            mr.clS(
               new int[]{
                  agI<"m">(26845, 8821732804625843341L ^ var1),
                  agI<"m">(28272, 8142321352294253111L ^ var1),
                  agI<"m">(23372, 6285856320428963600L ^ var1),
                  agI<"m">(30419, 7221461681508014721L ^ var1),
                  agI<"m">(3990, 2157888493331620800L ^ var1)
               }
            )
         )
         .WE(false);
      this.JTZwR = new cJ(
            this,
            mr.clS(
               new int[]{
                  agI<"m">(14102, 5939729589203868500L ^ var1),
                  agI<"m">(25727, 1603583772539045932L ^ var1),
                  agI<"m">(10182, 2627807373586729865L ^ var1),
                  agI<"m">(25727, 1603583772539045932L ^ var1)
               }
            )
         )
         .WE(false);
      this.bwI().forEach(var0 -> var0.Vd(ja::byJ));
   }

   static {
      long var0 = BVgZr ^ 135957180664667L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[27];
      int var5 = 0;
      String var6 = "\u00826\u0094&\u0083ã·\u0012jøª0ëÓRu{Ôni!p¾ü\u009f\u0090\"ð÷¡v±\t\u009cR/¨\u007f5mËq×¾HºöÐ\u0002)×÷ú{ÿÌ\u0018¶F# \u001f\u00ad\u001a\u0012æ\u0096\u00ad2}8\u0018nÞø\u0096\u009däùõ\f]B=þë¾ð¨23¢Z¯IØVv\u0004åO8Z wÞ²ª\u007fdÍ\u00030\u0092ËÎ¦ÜÈK\u0093?w&e á1ÃÍ=ZÚ1#\u0083]¿\f/þ«äÁ31ª\u0010¸\u0013¦\u008a\u0087I\u0088¥\u0018ÞÉ\u001dBx\u0091¥\\$\u009a\u0093íåm>Éã§\u001bD\u0013\u001a<yLn³åL\u008f8ÉôOüf\u008aÝ#¢\u009cv\u0016";
      int var7 = "\u00826\u0094&\u0083ã·\u0012jøª0ëÓRu{Ôni!p¾ü\u009f\u0090\"ð÷¡v±\t\u009cR/¨\u007f5mËq×¾HºöÐ\u0002)×÷ú{ÿÌ\u0018¶F# \u001f\u00ad\u001a\u0012æ\u0096\u00ad2}8\u0018nÞø\u0096\u009däùõ\f]B=þë¾ð¨23¢Z¯IØVv\u0004åO8Z wÞ²ª\u007fdÍ\u00030\u0092ËÎ¦ÜÈK\u0093?w&e á1ÃÍ=ZÚ1#\u0083]¿\f/þ«äÁ31ª\u0010¸\u0013¦\u008a\u0087I\u0088¥\u0018ÞÉ\u001dBx\u0091¥\\$\u009a\u0093íåm>Éã§\u001bD\u0013\u001a<yLn³åL\u008f8ÉôOüf\u008aÝ#¢\u009cv\u0016"
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
                     tYNOc = var8;
                     fiAab = new Integer[27];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "î\u001e\u0086}\u009cÈ\u009f[\u0080gi¡6â_Ö";
                  var7 = "î\u001e\u0086}\u009cÈ\u009f[\u0080gi¡6â_Ö".length();
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

   @Override
   public void aaj() {
      super.aaj();
      rD.dlmvG.field_1730 = false;
      ja.byJ();
   }

   public boolean agA(class_2680 var1) {
      return this.emDeH.WZ(var1);
   }

   @Override
   public void YO() {
      super.YO();
      rD.dlmvG.field_1730 = true;
      ja.byJ();
   }

   @hG
   public void agz(ha var1) {
      var1.bdX(true);
      var1.bcp(1.0F);
   }

   @hG
   public void agv(gs var1) {
      long var2 = BVgZr ^ 9252813815108L;

      try {
         if (!this.agA(var1.bbs())) {
            var1.bdX(true);
         }
      } catch (MatchException var4) {
         throw agF(var4);
      }
   }

   @hG
   public void agy(gT var1) {
      var1.bdX(true);
   }

   public cK agB() {
      return this.emDeH;
   }

   @hG
   public void agw(gr var1) {
      long var2 = BVgZr ^ 65288793074166L;

      try {
         if (!this.agA(var1.bbr())) {
            var1.bdX(true);
         }
      } catch (MatchException var4) {
         throw agF(var4);
      }
   }

   @hG
   public void agx(gn param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dk.BVgZr J
      // 03: ldc2_w 113514858299346
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: aload 1
      // 0c: invokevirtual sixtwo/gn.bbg ()Lnet/minecraft/class_3610;
      // 0f: astore 5
      // 11: astore 4
      // 13: aload 5
      // 15: getstatic net/minecraft/class_3612.field_15910 Lnet/minecraft/class_3609;
      // 18: invokevirtual net/minecraft/class_3610.method_39360 (Lnet/minecraft/class_3611;)Z
      // 1b: aload 4
      // 1d: ifnonnull 56
      // 20: ifne 48
      // 23: goto 2a
      // 26: invokestatic sixtwo/dk.agF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: aload 5
      // 2c: getstatic net/minecraft/class_3612.field_15909 Lnet/minecraft/class_3609;
      // 2f: invokevirtual net/minecraft/class_3610.method_39360 (Lnet/minecraft/class_3611;)Z
      // 32: aload 4
      // 34: ifnonnull 79
      // 37: goto 3e
      // 3a: invokestatic sixtwo/dk.agF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: ifeq 6a
      // 41: goto 48
      // 44: invokestatic sixtwo/dk.agF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: aload 0
      // 49: getfield sixtwo/dk.AwjXZ Lsixtwo/cJ;
      // 4c: invokevirtual sixtwo/cJ.WF ()Z
      // 4f: goto 56
      // 52: invokestatic sixtwo/dk.agF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 55: athrow
      // 56: ifne d4
      // 59: aload 1
      // 5a: bipush 1
      // 5b: invokevirtual sixtwo/gn.bdX (Z)V
      // 5e: aload 4
      // 60: ifnull d4
      // 63: goto 6a
      // 66: invokestatic sixtwo/dk.agF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 69: athrow
      // 6a: aload 5
      // 6c: getstatic net/minecraft/class_3612.field_15908 Lnet/minecraft/class_3609;
      // 6f: invokevirtual net/minecraft/class_3610.method_39360 (Lnet/minecraft/class_3611;)Z
      // 72: goto 79
      // 75: invokestatic sixtwo/dk.agF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 78: athrow
      // 79: aload 4
      // 7b: ifnonnull b4
      // 7e: ifne a6
      // 81: goto 88
      // 84: invokestatic sixtwo/dk.agF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 87: athrow
      // 88: aload 5
      // 8a: getstatic net/minecraft/class_3612.field_15907 Lnet/minecraft/class_3609;
      // 8d: invokevirtual net/minecraft/class_3610.method_39360 (Lnet/minecraft/class_3611;)Z
      // 90: aload 4
      // 92: ifnonnull b4
      // 95: goto 9c
      // 98: invokestatic sixtwo/dk.agF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9b: athrow
      // 9c: ifeq c8
      // 9f: goto a6
      // a2: invokestatic sixtwo/dk.agF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a5: athrow
      // a6: aload 0
      // a7: getfield sixtwo/dk.JTZwR Lsixtwo/cJ;
      // aa: invokevirtual sixtwo/cJ.WF ()Z
      // ad: goto b4
      // b0: invokestatic sixtwo/dk.agF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b3: athrow
      // b4: ifne d4
      // b7: aload 1
      // b8: bipush 1
      // b9: invokevirtual sixtwo/gn.bdX (Z)V
      // bc: aload 4
      // be: ifnull d4
      // c1: goto c8
      // c4: invokestatic sixtwo/dk.agF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c7: athrow
      // c8: aload 1
      // c9: bipush 1
      // ca: invokevirtual sixtwo/gn.bdX (Z)V
      // cd: goto d4
      // d0: invokestatic sixtwo/dk.agF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d3: athrow
      // d4: return
   }

   public cJ agC() {
      return this.AwjXZ;
   }

   private static int agG(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 17585;
      if (fiAab[var3] == null) {
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
         long var5 = tYNOc[var3];
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
         Object[] var9 = (Object[])Thkfx.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               Thkfx.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/dk", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         fiAab[var3] = var15;
      }

      return fiAab[var3];
   }

   public cJ agD() {
      return this.JTZwR;
   }

   private static int agH(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = agG(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static MatchException agF(MatchException var0) {
      return var0;
   }

   private static CallSite agI(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("agH".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dk" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
