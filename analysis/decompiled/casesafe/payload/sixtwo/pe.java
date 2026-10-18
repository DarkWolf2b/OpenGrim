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
import net.minecraft.class_1297;
import net.minecraft.class_238;
import net.minecraft.class_243;

public class pe {
   private static final int CMrqs;
   private final List<pg> xDaXT = new ArrayList<>();
   private static final long GrmXe = gb.aYR(-3988037882128948230L, -8088075348631620398L, MethodHandles.lookup().lookupClass()).a(799244562155L);
   private static final long[] IFSsg;
   private static final Integer[] ZTGgI;
   private static final Map pHZSv = new HashMap(13);

   public List<pg> cNd() {
      return this.xDaXT;
   }

   private static int cNg(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = cNf(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int cNf(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 23974;
      if (ZTGgI[var3] == null) {
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
         long var5 = IFSsg[var3];
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
         Object[] var9 = (Object[])pHZSv.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               pHZSv.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/pe", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         ZTGgI[var3] = var15;
      }

      return ZTGgI[var3];
   }

   static {
      long var0 = GrmXe ^ 130081177308058L;
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
      String var6 = "┬Żl\u0003\u008cC┬░┬Ş├Ź├ź0\u001e├╣┬│)\u009b├Ž";
      int var7 = "┬Żl\u0003\u008cC┬░┬Ş├Ź├ź0\u001e├╣┬│)\u009b├Ž".length();
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

      IFSsg = var8;
      ZTGgI = new Integer[2];
      CMrqs = cNh<"m">(20780, var0 ^ 6699905349273020008L);
   }

   private static boolean cNc(class_243 param0, class_243 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pe.GrmXe J
      // 03: ldc2_w 78997324849779
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ph.cNp ()Z
      // 0b: istore 4
      // 0d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 10: iload 4
      // 12: ifeq 2c
      // 15: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 18: ifnull 32
      // 1b: goto 22
      // 1e: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 25: goto 2c
      // 28: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 2f: ifnonnull 38
      // 32: bipush 0
      // 33: ireturn
      // 34: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 37: athrow
      // 38: aload 0
      // 39: aload 1
      // 3a: invokevirtual net/minecraft/class_243.method_1025 (Lnet/minecraft/class_243;)D
      // 3d: ldc2_w 9.999999747378752E-6
      // 40: dcmpg
      // 41: iload 4
      // 43: ifeq 51
      // 46: ifge 52
      // 49: goto 50
      // 4c: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4f: athrow
      // 50: bipush 1
      // 51: ireturn
      // 52: new net/minecraft/class_3959
      // 55: dup
      // 56: aload 0
      // 57: aload 1
      // 58: getstatic net/minecraft/class_3959$class_3960.field_17559 Lnet/minecraft/class_3959$class_3960;
      // 5b: getstatic net/minecraft/class_3959$class_242.field_1348 Lnet/minecraft/class_3959$class_242;
      // 5e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 61: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 64: invokespecial net/minecraft/class_3959.<init> (Lnet/minecraft/class_243;Lnet/minecraft/class_243;Lnet/minecraft/class_3959$class_3960;Lnet/minecraft/class_3959$class_242;Lnet/minecraft/class_1297;)V
      // 67: astore 5
      // 69: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 6c: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 6f: aload 5
      // 71: invokevirtual net/minecraft/class_638.method_17742 (Lnet/minecraft/class_3959;)Lnet/minecraft/class_3965;
      // 74: astore 6
      // 76: aload 6
      // 78: invokevirtual net/minecraft/class_3965.method_17783 ()Lnet/minecraft/class_239$class_240;
      // 7b: getstatic net/minecraft/class_239$class_240.field_1333 Lnet/minecraft/class_239$class_240;
      // 7e: if_acmpne 89
      // 81: bipush 1
      // 82: goto 8a
      // 85: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 88: athrow
      // 89: bipush 0
      // 8a: ireturn
   }

   public class_243 cNa(class_1297 var1, ov var2, class_243 var3, ph var4, float var5, boolean var6) {
      long var7 = GrmXe ^ 87826257677428L;

      pe var10000;
      class_1297 var10001;
      ov var10002;
      class_243 var10003;
      ph var10004;
      float var10005;
      try {
         var10000 = this;
         var10001 = var1;
         var10002 = var2;
         var10003 = var3;
         var10004 = var4;
         var10005 = var5;
         if (var6) {
            return this.cMZ(var1, var2, var3, var4, var5, 0.0F, var6);
         }
      } catch (MatchException var9) {
         throw cNe(var9);
      }

      return var10000.cMZ(var10001, var10002, var10003, var10004, var10005, 3.0F, var6);
   }

   public class_243 cMZ(class_1297 param1, ov param2, class_243 param3, ph param4, float param5, float param6, boolean param7) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/pe.GrmXe J
      // 003: ldc2_w 78043253635748
      // 006: lxor
      // 007: lstore 8
      // 009: aload 1
      // 00a: invokevirtual net/minecraft/class_1297.method_5829 ()Lnet/minecraft/class_238;
      // 00d: astore 11
      // 00f: invokestatic sixtwo/ph.cNo ()Z
      // 012: aload 3
      // 013: aload 11
      // 015: sipush 31230
      // 018: ldc2_w 6475469986634514309
      // 01b: lload 8
      // 01d: lxor
      // 01e: invokedynamic m (IJ)I bsm=sixtwo/pe.cNh (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 023: invokestatic sixtwo/pf.cNi (Lnet/minecraft/class_243;Lnet/minecraft/class_238;I)Ljava/util/List;
      // 026: astore 12
      // 028: aconst_null
      // 029: astore 13
      // 02b: aconst_null
      // 02c: astore 14
      // 02e: istore 10
      // 030: ldc2_w 1.7976931348623157E308
      // 033: dstore 15
      // 035: ldc2_w 1.7976931348623157E308
      // 038: dstore 17
      // 03a: fload 5
      // 03c: f2d
      // 03d: fload 5
      // 03f: f2d
      // 040: dmul
      // 041: dstore 19
      // 043: fload 6
      // 045: f2d
      // 046: fload 6
      // 048: f2d
      // 049: dmul
      // 04a: dstore 21
      // 04c: aload 12
      // 04e: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 053: astore 23
      // 055: aload 23
      // 057: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 05c: ifeq 178
      // 05f: aload 23
      // 061: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 066: checkcast net/minecraft/class_243
      // 069: astore 24
      // 06b: aload 3
      // 06c: iload 10
      // 06e: ifne 17e
      // 071: aload 24
      // 073: invokevirtual net/minecraft/class_243.method_1025 (Lnet/minecraft/class_243;)D
      // 076: dstore 25
      // 078: dload 25
      // 07a: iload 10
      // 07c: ifne 0a4
      // 07f: dload 19
      // 081: dcmpl
      // 082: ifle 098
      // 085: goto 08c
      // 088: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08b: athrow
      // 08c: iload 10
      // 08e: ifeq 055
      // 091: goto 098
      // 094: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 097: athrow
      // 098: aload 0
      // 099: aload 24
      // 09b: aload 3
      // 09c: aload 2
      // 09d: aload 4
      // 09f: aload 11
      // 0a1: invokevirtual sixtwo/pe.cNb (Lnet/minecraft/class_243;Lnet/minecraft/class_243;Lsixtwo/ov;Lsixtwo/ph;Lnet/minecraft/class_238;)D
      // 0a4: dstore 27
      // 0a6: iload 7
      // 0a8: iload 10
      // 0aa: ifne 0f3
      // 0ad: ifeq 0e6
      // 0b0: goto 0b7
      // 0b3: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b6: athrow
      // 0b7: dload 27
      // 0b9: iload 10
      // 0bb: ifne 0db
      // 0be: goto 0c5
      // 0c1: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c4: athrow
      // 0c5: dload 15
      // 0c7: dcmpg
      // 0c8: ifge 173
      // 0cb: goto 0d2
      // 0ce: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d1: athrow
      // 0d2: dload 27
      // 0d4: goto 0db
      // 0d7: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0da: athrow
      // 0db: dstore 15
      // 0dd: aload 24
      // 0df: astore 13
      // 0e1: iload 10
      // 0e3: ifeq 173
      // 0e6: aload 3
      // 0e7: aload 24
      // 0e9: invokestatic sixtwo/pe.cNc (Lnet/minecraft/class_243;Lnet/minecraft/class_243;)Z
      // 0ec: goto 0f3
      // 0ef: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f2: athrow
      // 0f3: istore 29
      // 0f5: iload 29
      // 0f7: iload 10
      // 0f9: ifne 141
      // 0fc: ifeq 135
      // 0ff: goto 106
      // 102: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 105: athrow
      // 106: dload 27
      // 108: iload 10
      // 10a: ifne 12a
      // 10d: goto 114
      // 110: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 113: athrow
      // 114: dload 15
      // 116: dcmpg
      // 117: ifge 173
      // 11a: goto 121
      // 11d: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 120: athrow
      // 121: dload 27
      // 123: goto 12a
      // 126: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 129: athrow
      // 12a: dstore 15
      // 12c: aload 24
      // 12e: astore 13
      // 130: iload 10
      // 132: ifeq 173
      // 135: dload 25
      // 137: dload 21
      // 139: dcmpg
      // 13a: goto 141
      // 13d: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 140: athrow
      // 141: iload 10
      // 143: ifne 168
      // 146: ifgt 173
      // 149: goto 150
      // 14c: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14f: athrow
      // 150: dload 27
      // 152: iload 10
      // 154: ifne 16d
      // 157: goto 15e
      // 15a: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 15d: athrow
      // 15e: dload 17
      // 160: dcmpg
      // 161: goto 168
      // 164: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 167: athrow
      // 168: ifge 173
      // 16b: dload 27
      // 16d: dstore 17
      // 16f: aload 24
      // 171: astore 14
      // 173: iload 10
      // 175: ifeq 055
      // 178: aload 3
      // 179: aload 11
      // 17b: invokestatic sixtwo/jg.bBK (Lnet/minecraft/class_243;Lnet/minecraft/class_238;)Lnet/minecraft/class_243;
      // 17e: astore 23
      // 180: aload 3
      // 181: aload 23
      // 183: invokevirtual net/minecraft/class_243.method_1025 (Lnet/minecraft/class_243;)D
      // 186: dstore 24
      // 188: dload 24
      // 18a: iload 10
      // 18c: ifne 1af
      // 18f: dload 19
      // 191: dcmpg
      // 192: ifgt 264
      // 195: goto 19c
      // 198: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 19b: athrow
      // 19c: aload 0
      // 19d: aload 23
      // 19f: aload 3
      // 1a0: aload 2
      // 1a1: aload 4
      // 1a3: aload 11
      // 1a5: invokevirtual sixtwo/pe.cNb (Lnet/minecraft/class_243;Lnet/minecraft/class_243;Lsixtwo/ov;Lsixtwo/ph;Lnet/minecraft/class_238;)D
      // 1a8: goto 1af
      // 1ab: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1ae: athrow
      // 1af: dstore 26
      // 1b1: iload 7
      // 1b3: iload 10
      // 1b5: ifne 1e7
      // 1b8: ifeq 1da
      // 1bb: goto 1c2
      // 1be: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c1: athrow
      // 1c2: dload 26
      // 1c4: dload 15
      // 1c6: dcmpg
      // 1c7: ifge 264
      // 1ca: goto 1d1
      // 1cd: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d0: athrow
      // 1d1: aload 23
      // 1d3: astore 13
      // 1d5: iload 10
      // 1d7: ifeq 264
      // 1da: aload 3
      // 1db: aload 23
      // 1dd: invokestatic sixtwo/pe.cNc (Lnet/minecraft/class_243;Lnet/minecraft/class_243;)Z
      // 1e0: goto 1e7
      // 1e3: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e6: athrow
      // 1e7: istore 28
      // 1e9: iload 28
      // 1eb: iload 10
      // 1ed: ifne 227
      // 1f0: ifeq 21e
      // 1f3: goto 1fa
      // 1f6: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f9: athrow
      // 1fa: dload 26
      // 1fc: dload 15
      // 1fe: dcmpg
      // 1ff: iload 10
      // 201: ifne 227
      // 204: goto 20b
      // 207: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20a: athrow
      // 20b: ifge 21e
      // 20e: goto 215
      // 211: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 214: athrow
      // 215: aload 23
      // 217: astore 13
      // 219: iload 10
      // 21b: ifeq 264
      // 21e: iload 28
      // 220: goto 227
      // 223: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 226: athrow
      // 227: iload 10
      // 229: ifne 242
      // 22c: ifne 264
      // 22f: goto 236
      // 232: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 235: athrow
      // 236: dload 24
      // 238: dload 21
      // 23a: dcmpg
      // 23b: goto 242
      // 23e: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 241: athrow
      // 242: iload 10
      // 244: ifne 25d
      // 247: ifgt 264
      // 24a: goto 251
      // 24d: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 250: athrow
      // 251: dload 26
      // 253: dload 17
      // 255: dcmpg
      // 256: goto 25d
      // 259: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25c: athrow
      // 25d: ifge 264
      // 260: aload 23
      // 262: astore 14
      // 264: aload 13
      // 266: iload 10
      // 268: ifne 277
      // 26b: ifnull 27a
      // 26e: goto 275
      // 271: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 274: athrow
      // 275: aload 13
      // 277: goto 27c
      // 27a: aload 14
      // 27c: astore 26
      // 27e: aload 26
      // 280: iload 10
      // 282: ifne 2ef
      // 285: ifnull 2ed
      // 288: goto 28f
      // 28b: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28e: athrow
      // 28f: aload 0
      // 290: getfield sixtwo/pe.xDaXT Ljava/util/List;
      // 293: iload 10
      // 295: ifne 2b9
      // 298: goto 29f
      // 29b: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29e: athrow
      // 29f: invokeinterface java/util/List.isEmpty ()Z 1
      // 2a4: ifne 2ed
      // 2a7: goto 2ae
      // 2aa: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2ad: athrow
      // 2ae: aload 0
      // 2af: getfield sixtwo/pe.xDaXT Ljava/util/List;
      // 2b2: goto 2b9
      // 2b5: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b8: athrow
      // 2b9: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 2be: astore 27
      // 2c0: aload 27
      // 2c2: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 2c7: ifeq 2ed
      // 2ca: aload 27
      // 2cc: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 2d1: checkcast sixtwo/pg
      // 2d4: astore 28
      // 2d6: aload 28
      // 2d8: aload 26
      // 2da: aload 11
      // 2dc: invokeinterface sixtwo/pg.process (Lnet/minecraft/class_243;Lnet/minecraft/class_238;)Lnet/minecraft/class_243; 3
      // 2e1: iload 10
      // 2e3: ifne 2ef
      // 2e6: astore 26
      // 2e8: iload 10
      // 2ea: ifeq 2c0
      // 2ed: aload 26
      // 2ef: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 2f2: ifnonnull 30d
      // 2f5: iload 10
      // 2f7: ifeq 309
      // 2fa: goto 301
      // 2fd: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 300: athrow
      // 301: bipush 0
      // 302: goto 30a
      // 305: invokestatic sixtwo/pe.cNe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 308: athrow
      // 309: bipush 1
      // 30a: invokestatic sixtwo/ph.cNn (Z)V
      // 30d: areturn
   }

   private static MatchException cNe(MatchException var0) {
      return var0;
   }

   private double cNb(class_243 var1, class_243 var2, ov var3, ph var4, class_238 var5) {
      long var6 = GrmXe ^ 116873573199510L;

      label36: {
         try {
            switch (pe$vs.aLDDe[var4.ordinal()]) {
               case 1:
                  return var2.method_1025(var1);
               case 2:
                  break label36;
               case 3:
                  break;
               default:
                  throw new MatchException(null, null);
            }
         } catch (MatchException var12) {
            throw cNe(var12);
         }

         double var8 = var5.field_1322 + 0.05;
         class_243 var10 = new class_243(var5.method_1005().field_1352, var8, var5.method_1005().field_1350);
         return var1.method_1025(var10);
      }

      class_243 var13 = var1.method_1020(var2).method_1029();
      class_243 var9 = var3.cGH();
      double var14 = var9.method_1026(var13);
      return Math.acos(Math.clamp(var14, -1.0, 1.0));
   }

   public void cMY(pg var1) {
      this.xDaXT.add(var1);
   }

   private static CallSite cNh(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cNg".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/pe" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
