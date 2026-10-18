package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_1937;

class dh$sy {
   private float cmcMI = 0.0F;
   private float eIsxf = 0.0F;
   private static final long cdlKh = gb.aYR(-8094499602601458092L, 6363211938442674905L, MethodHandles.lookup().lookupClass()).a(85071454242371L);

   private dh$sy() {
   }

   public void doy(class_1937 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dh$sy.cdlKh J
      // 03: ldc2_w 55145457068623
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/dh$sy.cmcMI F
      // 11: fconst_0
      // 12: fcmpl
      // 13: aload 4
      // 15: ifnonnull 37
      // 18: iflt 31
      // 1b: goto 22
      // 1e: invokestatic sixtwo/dh$sy.doA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: aload 1
      // 23: aload 0
      // 24: getfield sixtwo/dh$sy.cmcMI F
      // 27: invokevirtual net/minecraft/class_1937.method_8519 (F)V
      // 2a: goto 31
      // 2d: invokestatic sixtwo/dh$sy.doA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30: athrow
      // 31: aload 0
      // 32: getfield sixtwo/dh$sy.eIsxf F
      // 35: fconst_0
      // 36: fcmpl
      // 37: iflt 49
      // 3a: aload 1
      // 3b: aload 0
      // 3c: getfield sixtwo/dh$sy.eIsxf F
      // 3f: invokevirtual net/minecraft/class_1937.method_8496 (F)V
      // 42: goto 49
      // 45: invokestatic sixtwo/dh$sy.doA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 48: athrow
      // 49: return
   }

   public void dow(float var1) {
      this.eIsxf = var1;
   }

   public void dov(float var1) {
      this.cmcMI = var1;
   }

   public void dox() {
      this.cmcMI = 0.0F;
      this.eIsxf = 0.0F;
   }

   public boolean doz() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dh$sy.cdlKh J
      // 03: ldc2_w 29651359268776
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/dh$sy.cmcMI F
      // 10: fconst_0
      // 11: fcmpl
      // 12: aload 3
      // 13: ifnonnull 3c
      // 16: ifge 3b
      // 19: goto 20
      // 1c: invokestatic sixtwo/dh$sy.doA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 0
      // 21: getfield sixtwo/dh$sy.eIsxf F
      // 24: fconst_1
      // 25: fcmpl
      // 26: aload 3
      // 27: ifnonnull 3c
      // 2a: goto 31
      // 2d: invokestatic sixtwo/dh$sy.doA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30: athrow
      // 31: iflt 3f
      // 34: goto 3b
      // 37: invokestatic sixtwo/dh$sy.doA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a: athrow
      // 3b: bipush 1
      // 3c: goto 40
      // 3f: bipush 0
      // 40: ireturn
   }

   private static MatchException doA(MatchException var0) {
      return var0;
   }
}
