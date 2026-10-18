package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_437;

public class qK {
   private class_437 CDRZA;
   private static final long OGmAQ = gb.aYR(-7566814362838651729L, 7488888391049323160L, MethodHandles.lookup().lookupClass()).a(209831431673789L);

   public qK() {
      hF.bdI(this);
   }

   private static MatchException dbB(MatchException var0) {
      return var0;
   }

   public void dbA(class_437 var1) {
      this.CDRZA = var1;
   }

   @hG
   public void dbz(gH$th param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/qK.OGmAQ J
      // 03: ldc2_w 81701670975220
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/qL.dcb ()Z
      // 0b: istore 4
      // 0d: iload 4
      // 0f: ifeq 2e
      // 12: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 15: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 18: ifnonnull 2f
      // 1b: goto 22
      // 1e: invokestatic sixtwo/qK.dbB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: aload 0
      // 23: aconst_null
      // 24: putfield sixtwo/qK.CDRZA Lnet/minecraft/class_437;
      // 27: goto 2e
      // 2a: invokestatic sixtwo/qK.dbB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: return
      // 2f: aload 0
      // 30: iload 4
      // 32: ifeq 54
      // 35: getfield sixtwo/qK.CDRZA Lnet/minecraft/class_437;
      // 38: ifnull 58
      // 3b: goto 42
      // 3e: invokestatic sixtwo/qK.dbB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 45: aload 0
      // 46: getfield sixtwo/qK.CDRZA Lnet/minecraft/class_437;
      // 49: invokevirtual net/minecraft/class_310.method_1507 (Lnet/minecraft/class_437;)V
      // 4c: aload 0
      // 4d: goto 54
      // 50: invokestatic sixtwo/qK.dbB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 53: athrow
      // 54: aconst_null
      // 55: putfield sixtwo/qK.CDRZA Lnet/minecraft/class_437;
      // 58: return
   }
}
