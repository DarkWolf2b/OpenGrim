package sixtwo;

import java.awt.image.BufferedImage;
import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.List;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class lx extends az {
   private final List<lx$uB> CVfuu;
   private mI$uP oIxEE;
   private ld EsFbZ;
   private boolean nmGBT;
   private int NGBqu;
   private long tjpvs;
   private static final long pvdUF = gb.aYR(8239756785891625524L, -4189039151916817371L, MethodHandles.lookup().lookupClass()).a(34404396481828L);
   private static final long HUSfJ;

   public lx ccf(ld var1) {
      this.EsFbZ = var1;
      return this;
   }

   public lx(String var1) {
      long var2 = pvdUF ^ 128486818149206L;
      String[] var10000 = lw.cbS();
      super();
      String[] var4 = var10000;
      this.CVfuu = new ArrayList<>();
      this.oIxEE = mI$uP.SYfjl;
      this.EsFbZ = ld.NONE;
      this.nmGBT = true;
      this.NGBqu = 0;
      this.tjpvs = System.currentTimeMillis();
      lw var5 = new lw();
      int var6 = var5.cbB(var1);

      label50: {
         try {
            var12 = var6;
            if (var4 == null) {
               break label50;
            }

            if (var6 != 0) {
               return;
            }
         } catch (MatchException var11) {
            throw ccj(var11);
         }

         var12 = 0;
      }

      int var7 = var12;

      while (var7 < var5.cbt()) {
         BufferedImage var8 = var5.cbx(var7);
         int var9 = var5.cbs(var7);

         label36: {
            label35: {
               try {
                  if (var4 == null) {
                     break label36;
                  }

                  if (var9 > 0) {
                     break label35;
                  }
               } catch (MatchException var10) {
                  throw ccj(var10);
               }

               var9 = (int)HUSfJ;
            }

            this.CVfuu.add(new lx$uB(new lv(var8), var9));
         }

         var7++;
         if (var4 == null) {
            break;
         }
      }
   }

   static {
      long var0 = pvdUF ^ 117148088277514L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = -6043150605921148885L;
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
      HUSfJ = var7;
   }

   public lx cce(mI$uP var1) {
      this.oIxEE = var1;
      return this;
   }

   private void ccc() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lx.pvdUF J
      // 03: ldc2_w 23120210641685
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/lw.cbS ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/lx.CVfuu Ljava/util/List;
      // 10: invokeinterface java/util/List.isEmpty ()Z 1
      // 15: aload 3
      // 16: ifnull 2a
      // 19: ifeq 24
      // 1c: goto 23
      // 1f: invokestatic sixtwo/lx.ccj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: return
      // 24: aload 0
      // 25: getfield sixtwo/lx.NGBqu I
      // 28: bipush 1
      // 29: iadd
      // 2a: istore 4
      // 2c: aload 3
      // 2d: ifnull 80
      // 30: iload 4
      // 32: aload 0
      // 33: getfield sixtwo/lx.CVfuu Ljava/util/List;
      // 36: invokeinterface java/util/List.size ()I 1
      // 3b: if_icmplt 7a
      // 3e: goto 45
      // 41: invokestatic sixtwo/lx.ccj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: aload 0
      // 46: aload 3
      // 47: ifnull 76
      // 4a: goto 51
      // 4d: invokestatic sixtwo/lx.ccj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: getfield sixtwo/lx.oIxEE Lsixtwo/mI$uP;
      // 54: getstatic sixtwo/mI$uP.SYfjl Lsixtwo/mI$uP;
      // 57: if_acmpne 68
      // 5a: goto 61
      // 5d: invokestatic sixtwo/lx.ccj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 60: athrow
      // 61: bipush 0
      // 62: istore 4
      // 64: aload 3
      // 65: ifnonnull 7a
      // 68: aload 0
      // 69: getfield sixtwo/lx.CVfuu Ljava/util/List;
      // 6c: invokeinterface java/util/List.size ()I 1
      // 71: bipush 1
      // 72: isub
      // 73: istore 4
      // 75: aload 0
      // 76: bipush 0
      // 77: putfield sixtwo/lx.nmGBT Z
      // 7a: aload 0
      // 7b: iload 4
      // 7d: putfield sixtwo/lx.NGBqu I
      // 80: return
   }

   @Override
   protected void bV(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lx.pvdUF J
      // 03: ldc2_w 93162801205189
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/lw.cbS ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/lx.CVfuu Ljava/util/List;
      // 11: invokeinterface java/util/List.isEmpty ()Z 1
      // 16: aload 4
      // 18: ifnull 36
      // 1b: ifeq 26
      // 1e: goto 25
      // 21: invokestatic sixtwo/lx.ccj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: return
      // 26: aload 0
      // 27: aload 4
      // 29: ifnull 45
      // 2c: getfield sixtwo/lx.nmGBT Z
      // 2f: goto 36
      // 32: invokestatic sixtwo/lx.ccj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 35: athrow
      // 36: ifeq 44
      // 39: aload 0
      // 3a: invokevirtual sixtwo/lx.ccb ()V
      // 3d: goto 44
      // 40: invokestatic sixtwo/lx.ccj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 43: athrow
      // 44: aload 0
      // 45: invokevirtual sixtwo/lx.ccd ()Lsixtwo/lx$uB;
      // 48: astore 5
      // 4a: aload 4
      // 4c: ifnull 7d
      // 4f: aload 5
      // 51: ifnonnull 60
      // 54: goto 5b
      // 57: invokestatic sixtwo/lx.ccj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5a: athrow
      // 5b: return
      // 5c: invokestatic sixtwo/lx.ccj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5f: athrow
      // 60: aload 1
      // 61: aload 5
      // 63: getfield sixtwo/lx$uB.location Lnet/minecraft/class_1044;
      // 66: aload 0
      // 67: getfield sixtwo/lx.MCnYt F
      // 6a: aload 0
      // 6b: getfield sixtwo/lx.pNyTQ F
      // 6e: aload 0
      // 6f: getfield sixtwo/lx.BcpIo F
      // 72: aload 0
      // 73: getfield sixtwo/lx.WjISQ F
      // 76: aload 0
      // 77: getfield sixtwo/lx.EsFbZ Lsixtwo/ld;
      // 7a: invokevirtual sixtwo/lC.cee (Lnet/minecraft/class_1044;FFFFLsixtwo/ld;)V
      // 7d: return
   }

   private static MatchException ccj(MatchException var0) {
      return var0;
   }

   public lx ccg(boolean var1) {
      this.nmGBT = var1;
      return this;
   }

   public lx cch(int var1) {
      this.NGBqu = var1;
      return this;
   }

   public lx cci(long var1) {
      this.tjpvs = var1;
      return this;
   }

   private void ccb() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lx.pvdUF J
      // 03: ldc2_w 18650322964273
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/lw.cbS ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/lx.CVfuu Ljava/util/List;
      // 10: invokeinterface java/util/List.isEmpty ()Z 1
      // 15: ifeq 1d
      // 18: return
      // 19: invokestatic sixtwo/lx.ccj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: invokestatic java/lang/System.currentTimeMillis ()J
      // 20: lstore 4
      // 22: aload 0
      // 23: invokevirtual sixtwo/lx.ccd ()Lsixtwo/lx$uB;
      // 26: astore 6
      // 28: aload 6
      // 2a: ifnonnull 32
      // 2d: return
      // 2e: invokestatic sixtwo/lx.ccj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: lload 4
      // 34: aload 0
      // 35: getfield sixtwo/lx.tjpvs J
      // 38: lsub
      // 39: lstore 7
      // 3b: aload 3
      // 3c: ifnull 5d
      // 3f: lload 7
      // 41: aload 6
      // 43: invokevirtual sixtwo/lx$uB.delay ()I
      // 46: i2l
      // 47: lcmp
      // 48: iflt 63
      // 4b: goto 52
      // 4e: invokestatic sixtwo/lx.ccj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51: athrow
      // 52: aload 0
      // 53: invokevirtual sixtwo/lx.ccc ()V
      // 56: goto 5d
      // 59: invokestatic sixtwo/lx.ccj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5c: athrow
      // 5d: aload 0
      // 5e: lload 4
      // 60: putfield sixtwo/lx.tjpvs J
      // 63: return
   }

   private lx$uB ccd() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lx.pvdUF J
      // 03: ldc2_w 27057216730516
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/lw.cbS ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/lx.CVfuu Ljava/util/List;
      // 10: invokeinterface java/util/List.isEmpty ()Z 1
      // 15: aload 3
      // 16: ifnull 38
      // 19: ifeq 29
      // 1c: goto 23
      // 1f: invokestatic sixtwo/lx.ccj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: aconst_null
      // 24: areturn
      // 25: invokestatic sixtwo/lx.ccj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: aload 0
      // 2a: aload 3
      // 2b: ifnull 65
      // 2e: getfield sixtwo/lx.NGBqu I
      // 31: goto 38
      // 34: invokestatic sixtwo/lx.ccj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 37: athrow
      // 38: iflt 5d
      // 3b: aload 0
      // 3c: aload 3
      // 3d: ifnull 76
      // 40: goto 47
      // 43: invokestatic sixtwo/lx.ccj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 46: athrow
      // 47: getfield sixtwo/lx.NGBqu I
      // 4a: aload 0
      // 4b: getfield sixtwo/lx.CVfuu Ljava/util/List;
      // 4e: invokeinterface java/util/List.size ()I 1
      // 53: if_icmplt 69
      // 56: goto 5d
      // 59: invokestatic sixtwo/lx.ccj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5c: athrow
      // 5d: aload 0
      // 5e: goto 65
      // 61: invokestatic sixtwo/lx.ccj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 64: athrow
      // 65: bipush 0
      // 66: putfield sixtwo/lx.NGBqu I
      // 69: aload 0
      // 6a: getfield sixtwo/lx.CVfuu Ljava/util/List;
      // 6d: aload 0
      // 6e: getfield sixtwo/lx.NGBqu I
      // 71: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 76: checkcast sixtwo/lx$uB
      // 79: areturn
   }
}
