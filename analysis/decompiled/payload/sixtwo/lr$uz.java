package sixtwo;

import com.mojang.blaze3d.buffers.GpuBuffer;
import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.List;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

final class lr$uz {
   private final List<GpuBuffer> Sbaal = new ArrayList<>();
   private final List<Long> sdjYE = new ArrayList<>();
   private int kMYMJ;
   private static final long dLfMu = gb.aYR(3010032469631690283L, 1947573880745350377L, MethodHandles.lookup().lookupClass()).a(244103868321636L);
   private static final long YxrRn;

   private lr$uz() {
   }

   static {
      long var0 = dLfMu ^ 84016906581896L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = 4930290248145794784L;
      byte[] var6 = var2.doFinal(
         new byte[]{
            (byte)(var4 >>> 56),
            (byte)(var4 >>> 48),
            (byte)(var4 >>> 40),
            (byte)(var4 >>> 32),
            (byte)(var4 >>> 24),
            (byte)(var4 >>> 16),
            (byte)(var4 >>> 8),
            (byte)var4
         }
      );
      long var7 = (var6[0] & 255L) << 56
         | (var6[1] & 255L) << 48
         | (var6[2] & 255L) << 40
         | (var6[3] & 255L) << 32
         | (var6[4] & 255L) << 24
         | (var6[5] & 255L) << 16
         | (var6[6] & 255L) << 8
         | var6[7] & 255L;
      byte var10001 = -1;
      YxrRn = var7;
   }

   private void dvr() {
      this.kMYMJ = 0;
   }

   private GpuBuffer dvq(int param1, String param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lr$uz.dLfMu J
      // 003: ldc2_w 105718848989103
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/lt.cbc ()[Lsixtwo/iS;
      // 00b: astore 5
      // 00d: aload 0
      // 00e: aload 5
      // 010: ifnonnull 06b
      // 013: getfield sixtwo/lr$uz.kMYMJ I
      // 016: aload 0
      // 017: getfield sixtwo/lr$uz.Sbaal Ljava/util/List;
      // 01a: invokeinterface java/util/List.size ()I 1
      // 01f: if_icmplt 057
      // 022: goto 029
      // 025: invokestatic sixtwo/lr$uz.dvt (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 028: athrow
      // 029: lconst_0
      // 02a: iload 1
      // 02b: invokestatic sixtwo/lr$uz.dvs (JI)J
      // 02e: aload 2
      // 02f: invokestatic sixtwo/lr.caD (JLjava/lang/String;)Lcom/mojang/blaze3d/buffers/GpuBuffer;
      // 032: astore 6
      // 034: aload 0
      // 035: getfield sixtwo/lr$uz.Sbaal Ljava/util/List;
      // 038: aload 6
      // 03a: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 03f: pop
      // 040: aload 0
      // 041: getfield sixtwo/lr$uz.sdjYE Ljava/util/List;
      // 044: aload 6
      // 046: invokevirtual com/mojang/blaze3d/buffers/GpuBuffer.size ()J
      // 049: invokestatic java/lang/Long.valueOf (J)Ljava/lang/Long;
      // 04c: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 051: pop
      // 052: aload 5
      // 054: ifnull 131
      // 057: aload 0
      // 058: getfield sixtwo/lr$uz.Sbaal Ljava/util/List;
      // 05b: aload 0
      // 05c: getfield sixtwo/lr$uz.kMYMJ I
      // 05f: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 064: goto 06b
      // 067: invokestatic sixtwo/lr$uz.dvt (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06a: athrow
      // 06b: checkcast com/mojang/blaze3d/buffers/GpuBuffer
      // 06e: astore 6
      // 070: aload 0
      // 071: getfield sixtwo/lr$uz.sdjYE Ljava/util/List;
      // 074: aload 0
      // 075: getfield sixtwo/lr$uz.kMYMJ I
      // 078: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 07d: checkcast java/lang/Long
      // 080: invokevirtual java/lang/Long.longValue ()J
      // 083: lstore 7
      // 085: aload 6
      // 087: aload 5
      // 089: ifnonnull 0c9
      // 08c: ifnull 0c0
      // 08f: goto 096
      // 092: invokestatic sixtwo/lr$uz.dvt (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 095: athrow
      // 096: aload 6
      // 098: aload 5
      // 09a: ifnonnull 0c9
      // 09d: goto 0a4
      // 0a0: invokestatic sixtwo/lr$uz.dvt (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a3: athrow
      // 0a4: invokevirtual com/mojang/blaze3d/buffers/GpuBuffer.isClosed ()Z
      // 0a7: ifne 0c0
      // 0aa: goto 0b1
      // 0ad: invokestatic sixtwo/lr$uz.dvt (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b0: athrow
      // 0b1: lload 7
      // 0b3: iload 1
      // 0b4: i2l
      // 0b5: lcmp
      // 0b6: ifge 131
      // 0b9: goto 0c0
      // 0bc: invokestatic sixtwo/lr$uz.dvt (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0bf: athrow
      // 0c0: aload 6
      // 0c2: goto 0c9
      // 0c5: invokestatic sixtwo/lr$uz.dvt (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c8: athrow
      // 0c9: aload 5
      // 0cb: ifnonnull 130
      // 0ce: ifnull 0ff
      // 0d1: goto 0d8
      // 0d4: invokestatic sixtwo/lr$uz.dvt (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d7: athrow
      // 0d8: aload 6
      // 0da: aload 5
      // 0dc: ifnonnull 130
      // 0df: goto 0e6
      // 0e2: invokestatic sixtwo/lr$uz.dvt (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e5: athrow
      // 0e6: invokevirtual com/mojang/blaze3d/buffers/GpuBuffer.isClosed ()Z
      // 0e9: ifne 0ff
      // 0ec: goto 0f3
      // 0ef: invokestatic sixtwo/lr$uz.dvt (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f2: athrow
      // 0f3: aload 6
      // 0f5: invokevirtual com/mojang/blaze3d/buffers/GpuBuffer.close ()V
      // 0f8: goto 0ff
      // 0fb: invokestatic sixtwo/lr$uz.dvt (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0fe: athrow
      // 0ff: lload 7
      // 101: iload 1
      // 102: invokestatic sixtwo/lr$uz.dvs (JI)J
      // 105: aload 2
      // 106: invokestatic sixtwo/lr.caD (JLjava/lang/String;)Lcom/mojang/blaze3d/buffers/GpuBuffer;
      // 109: astore 6
      // 10b: aload 0
      // 10c: getfield sixtwo/lr$uz.Sbaal Ljava/util/List;
      // 10f: aload 0
      // 110: getfield sixtwo/lr$uz.kMYMJ I
      // 113: aload 6
      // 115: invokeinterface java/util/List.set (ILjava/lang/Object;)Ljava/lang/Object; 3
      // 11a: pop
      // 11b: aload 0
      // 11c: getfield sixtwo/lr$uz.sdjYE Ljava/util/List;
      // 11f: aload 0
      // 120: getfield sixtwo/lr$uz.kMYMJ I
      // 123: aload 6
      // 125: invokevirtual com/mojang/blaze3d/buffers/GpuBuffer.size ()J
      // 128: invokestatic java/lang/Long.valueOf (J)Ljava/lang/Long;
      // 12b: invokeinterface java/util/List.set (ILjava/lang/Object;)Ljava/lang/Object; 3
      // 130: pop
      // 131: aload 0
      // 132: getfield sixtwo/lr$uz.Sbaal Ljava/util/List;
      // 135: aload 0
      // 136: dup
      // 137: getfield sixtwo/lr$uz.kMYMJ I
      // 13a: dup_x1
      // 13b: bipush 1
      // 13c: iadd
      // 13d: putfield sixtwo/lr$uz.kMYMJ I
      // 140: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 145: checkcast com/mojang/blaze3d/buffers/GpuBuffer
      // 148: areturn
   }

   private static long dvs(long param0, int param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lr$uz.dLfMu J
      // 03: ldc2_w 5947836830610
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/lt.cbc ()[Lsixtwo/iS;
      // 0b: astore 5
      // 0d: iload 2
      // 0e: i2l
      // 0f: lload 0
      // 10: lconst_0
      // 11: lcmp
      // 12: aload 5
      // 14: ifnonnull 2e
      // 17: ifle 2d
      // 1a: goto 21
      // 1d: invokestatic sixtwo/lr$uz.dvt (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: lload 0
      // 22: getstatic sixtwo/lr$uz.YxrRn J
      // 25: lmul
      // 26: goto 2f
      // 29: invokestatic sixtwo/lr$uz.dvt (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: iload 2
      // 2e: i2l
      // 2f: invokestatic java/lang/Math.max (JJ)J
      // 32: lreturn
   }

   private static MatchException dvt(MatchException var0) {
      return var0;
   }
}
