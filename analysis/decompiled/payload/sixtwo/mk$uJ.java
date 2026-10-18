package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_1299;
import net.minecraft.class_1309;
import net.minecraft.class_1665;
import net.minecraft.class_1799;
import net.minecraft.class_1937;
import net.minecraft.class_3966;

class mk$uJ extends class_1665 {
   final boolean[] alpOb;
   final mk$uH kZTMf;
   private static final long DupjF = gb.aYR(-1654546772862254832L, -4010347470658568081L, MethodHandles.lookup().lookupClass()).a(167330261954076L);

   mk$uJ(class_1299 var1, class_1937 var2, boolean[] var3, mk$uH var4) {
      super(var1, var2);
      this.alpOb = var3;
      this.kZTMf = var4;
   }

   protected class_1799 method_57314() {
      return null;
   }

   protected void method_7450(class_1309 var1) {
      this.alpOb[0] = true;
   }

   public class_1799 method_7445() {
      return null;
   }

   protected void method_7454(class_3966 var1) {
      this.alpOb[0] = true;
   }

   public void method_5773() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mk$uJ.DupjF J
      // 03: ldc2_w 94663781580664
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/mk.cle ()[I
      // 0b: aload 0
      // 0c: invokespecial net/minecraft/class_1665.method_5773 ()V
      // 0f: astore 3
      // 10: aload 0
      // 11: getfield sixtwo/mk$uJ.kZTMf Lsixtwo/mk$uH;
      // 14: aload 3
      // 15: ifnonnull 4b
      // 18: getfield sixtwo/mk$uH.persistent Z
      // 1b: ifne 3c
      // 1e: goto 25
      // 21: invokestatic sixtwo/mk$uJ.dvu (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: aload 0
      // 26: new net/minecraft/class_243
      // 29: dup
      // 2a: dconst_0
      // 2b: ldc2_w 0.02
      // 2e: dconst_0
      // 2f: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 32: invokevirtual sixtwo/mk$uJ.method_45319 (Lnet/minecraft/class_243;)V
      // 35: goto 3c
      // 38: invokestatic sixtwo/mk$uJ.dvu (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: aload 0
      // 3d: aload 3
      // 3e: ifnonnull 5c
      // 41: getfield sixtwo/mk$uJ.kZTMf Lsixtwo/mk$uH;
      // 44: goto 4b
      // 47: invokestatic sixtwo/mk$uJ.dvu (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4a: athrow
      // 4b: getfield sixtwo/mk$uH.entityType Lnet/minecraft/class_1299;
      // 4e: getstatic net/minecraft/class_1299.field_6103 Lnet/minecraft/class_1299;
      // 51: if_acmpne 69
      // 54: aload 0
      // 55: goto 5c
      // 58: invokestatic sixtwo/mk$uJ.dvu (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5b: athrow
      // 5c: aload 0
      // 5d: invokevirtual sixtwo/mk$uJ.method_18798 ()Lnet/minecraft/class_243;
      // 60: ldc2_w 0.9375
      // 63: invokevirtual net/minecraft/class_243.method_1021 (D)Lnet/minecraft/class_243;
      // 66: invokevirtual sixtwo/mk$uJ.method_18799 (Lnet/minecraft/class_243;)V
      // 69: return
   }

   private static MatchException dvu(MatchException var0) {
      return var0;
   }
}
