package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_1044;

public class an extends az {
   private class_1044 nLhhg;
   private ld ijNkN = ld.NONE;
   private static final long hKMkO = gb.aYR(-8978404935843101031L, 5007309845702240110L, MethodHandles.lookup().lookupClass()).a(230467291552426L);

   public an ph(class_1044 var1) {
      this.nLhhg = var1;
      return this;
   }

   public class_1044 pf() {
      return this.nLhhg;
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
      // 00: getstatic sixtwo/an.hKMkO J
      // 03: ldc2_w 43918801540896
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/aj.oA ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 4
      // 0f: ifnull 41
      // 12: aload 0
      // 13: getfield sixtwo/an.nLhhg Lnet/minecraft/class_1044;
      // 16: ifnonnull 25
      // 19: goto 20
      // 1c: invokestatic sixtwo/an.pj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: return
      // 21: invokestatic sixtwo/an.pj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: aload 1
      // 26: aload 0
      // 27: getfield sixtwo/an.nLhhg Lnet/minecraft/class_1044;
      // 2a: aload 0
      // 2b: getfield sixtwo/an.MCnYt F
      // 2e: aload 0
      // 2f: getfield sixtwo/an.pNyTQ F
      // 32: aload 0
      // 33: getfield sixtwo/an.BcpIo F
      // 36: aload 0
      // 37: getfield sixtwo/an.WjISQ F
      // 3a: aload 0
      // 3b: getfield sixtwo/an.ijNkN Lsixtwo/ld;
      // 3e: invokevirtual sixtwo/lC.cee (Lnet/minecraft/class_1044;FFFFLsixtwo/ld;)V
      // 41: return
   }

   public an pi(ld var1) {
      this.ijNkN = var1;
      return this;
   }

   public ld pg() {
      return this.ijNkN;
   }

   private static MatchException pj(MatchException var0) {
      return var0;
   }
}
