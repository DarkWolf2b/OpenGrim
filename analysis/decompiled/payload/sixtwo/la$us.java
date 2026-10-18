package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public final class la$us {
   private final kY hIkuM;
   private final List<kZ> Wmiiq = new ArrayList<>();
   private float oeGIt;
   private static final long rpPbR = gb.aYR(-8115858361901315235L, -2430594068427098782L, MethodHandles.lookup().lookupClass()).a(82141205509506L);
   private static final long[] WzIVs;
   private static final Integer[] yrHak;
   private static final Map Zlxdn = new HashMap(13);

   private la$us(kY var1) {
      this.hIkuM = la.bWZ(var1);
   }

   static {
      long var0 = rpPbR ^ 124256731926150L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[2];
      int var5 = 0;
      String var6 = "T:7\u001d2#g2×Êùd\u008aÛ*%";
      int var7 = "T:7\u001d2#g2×Êùd\u008aÛ*%".length();
      byte var4 = 0;

      do {
         int var10001 = var4;
         var4 += 8;
         byte[] var9 = var6.substring(var10001, var4).getBytes("ISO-8859-1");
         var10001 = var5++;
         long var10 = (var9[0] & 255L) << 56
            | (var9[1] & 255L) << 48
            | (var9[2] & 255L) << 40
            | (var9[3] & 255L) << 32
            | (var9[4] & 255L) << 24
            | (var9[5] & 255L) << 16
            | (var9[6] & 255L) << 8
            | var9[7] & 255L;
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
         long var10004 = (var12[0] & 255L) << 56
            | (var12[1] & 255L) << 48
            | (var12[2] & 255L) << 40
            | (var12[3] & 255L) << 32
            | (var12[4] & 255L) << 24
            | (var12[5] & 255L) << 16
            | (var12[6] & 255L) << 8
            | var12[7] & 255L;
         byte var14 = -1;
         var8[var10001] = var10004;
      } while (var4 < var7);

      WzIVs = var8;
      yrHak = new Integer[2];
   }

   public la$us dur(mG var1) {
      return this.dus(var1, var1);
   }

   private static int duz(kZ var0, kZ var1) {
      return Float.compare(var0.offset(), var1.offset());
   }

   public la$us duu(kZ... param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/la$us.rpPbR J
      // 03: ldc2_w 52055546154081
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/la.bXl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnull 6c
      // 13: getfield sixtwo/la$us.Wmiiq Ljava/util/List;
      // 16: invokeinterface java/util/List.clear ()V 1
      // 1b: aload 1
      // 1c: ifnull 6b
      // 1f: goto 26
      // 22: invokestatic sixtwo/la$us.duA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 1
      // 27: astore 5
      // 29: aload 5
      // 2b: arraylength
      // 2c: istore 6
      // 2e: bipush 0
      // 2f: istore 7
      // 31: iload 7
      // 33: iload 6
      // 35: if_icmpge 6b
      // 38: aload 5
      // 3a: iload 7
      // 3c: aaload
      // 3d: astore 8
      // 3f: aload 4
      // 41: ifnull 66
      // 44: aload 8
      // 46: ifnull 63
      // 49: goto 50
      // 4c: invokestatic sixtwo/la$us.duA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4f: athrow
      // 50: aload 0
      // 51: getfield sixtwo/la$us.Wmiiq Ljava/util/List;
      // 54: aload 8
      // 56: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 5b: pop
      // 5c: goto 63
      // 5f: invokestatic sixtwo/la$us.duA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 62: athrow
      // 63: iinc 7 1
      // 66: aload 4
      // 68: ifnonnull 31
      // 6b: aload 0
      // 6c: areturn
   }

   private static CallSite duD(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("duC".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/la$us" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int duB(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 832;
      if (yrHak[var3] == null) {
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
         long var5 = WzIVs[var3];
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
         Object[] var9 = (Object[])Zlxdn.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               Zlxdn.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/la$us", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         yrHak[var3] = var15;
      }

      return yrHak[var3];
   }

   private static MatchException duA(MatchException var0) {
      return var0;
   }

   private static int duC(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = duB(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public la$us duv(float param1, mG param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/la$us.rpPbR J
      // 03: ldc2_w 117374270258079
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/la.bXl ()[Lsixtwo/iS;
      // 0b: astore 5
      // 0d: aload 0
      // 0e: aload 5
      // 10: ifnull 49
      // 13: getfield sixtwo/la$us.Wmiiq Ljava/util/List;
      // 16: invokeinterface java/util/List.size ()I 1
      // 1b: sipush 11510
      // 1e: ldc2_w 4811587696133741258
      // 21: lload 3
      // 22: lxor
      // 23: invokedynamic e (IJ)I bsm=sixtwo/la$us.duD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 28: if_icmpge 48
      // 2b: goto 32
      // 2e: invokestatic sixtwo/la$us.duA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: aload 0
      // 33: getfield sixtwo/la$us.Wmiiq Ljava/util/List;
      // 36: fload 1
      // 37: aload 2
      // 38: invokestatic sixtwo/kZ.of (FLsixtwo/mG;)Lsixtwo/kZ;
      // 3b: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 40: pop
      // 41: goto 48
      // 44: invokestatic sixtwo/la$us.duA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: aload 0
      // 49: areturn
   }

   public la duy() {
      long var1 = rpPbR ^ 65785956323215L;
      iS[] var3 = la.bXl();

      try {
         if (this.Wmiiq.isEmpty()) {
            return new la(this.hIkuM, new mG[]{mG.hoGuU, mG.hoGuU}, null, this.oeGIt);
         }
      } catch (MatchException var10) {
         throw duA(var10);
      }

      ArrayList var4 = new ArrayList<>(this.Wmiiq);
      var4.sort(la$us::duz);
      int var5 = Math.min(var4.size(), duD<"e">(5884, 8833574971114837201L ^ var1));
      mG[] var6 = new mG[var5];
      float[] var7 = new float[var5];
      int var8 = 0;

      while (var8 < var5) {
         kZ var9 = (kZ)var4.get(var8);
         var6[var8] = var9.color();
         var7[var8] = var9.offset();
         var8++;
         if (var3 == null) {
            break;
         }
      }

      return new la(this.hIkuM, var6, var7, this.oeGIt);
   }

   public la$us duw(float var1) {
      this.oeGIt = var1;
      return this;
   }

   public la$us dux(float var1) {
      return this.duw((float)Math.toRadians(var1));
   }

   public la$us dus(mG... var1) {
      mG[] var2 = la.bXa(var1);
      float[] var3 = la.bXb(null, var2.length);
      return this.dut(var2, var3);
   }

   public la$us dut(mG[] var1, float[] var2) {
      long var3 = rpPbR ^ 13178666882732L;
      mG[] var6 = la.bXa(var1);
      float[] var7 = la.bXb(var2, var6.length);
      la.bXc(var6, var7);
      iS[] var10000 = la.bXl();
      this.Wmiiq.clear();
      int var8 = 0;
      iS[] var5 = var10000;

      while (true) {
         if (var8 < var6.length) {
            try {
               var10 = this.duv(var7[var8], var6[var8]);
               if (var5 == null) {
                  break;
               }

               var8++;
               if (var5 != null) {
                  continue;
               }
            } catch (MatchException var9) {
               throw duA(var9);
            }
         }

         var10 = this;
         break;
      }

      return var10;
   }
}
