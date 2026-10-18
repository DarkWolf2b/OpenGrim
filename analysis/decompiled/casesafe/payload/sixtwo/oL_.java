package sixtwo;

import java.util.List;
import native.Loader;
import net.minecraft.class_1309;

public class oL extends oQ<oG> {
   private static boolean dbAtL;
   private static long WEaqM;

   public oL() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oL.WEaqM J
      // 03: ldc2_w 37524763107809
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/oL.cJe ()Z
      // 0b: aload 0
      // 0c: new sixtwo/oG
      // 0f: dup
      // 10: invokespecial sixtwo/oG.<init> ()V
      // 13: invokestatic java/util/List.of (Ljava/lang/Object;)Ljava/util/List;
      // 16: invokespecial sixtwo/oQ.<init> (Ljava/util/List;)V
      // 19: istore 3
      // 1a: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 1d: ifnonnull 37
      // 20: iload 3
      // 21: ifeq 33
      // 24: goto 2b
      // 27: invokestatic sixtwo/oL.cJf (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: bipush 0
      // 2c: goto 34
      // 2f: invokestatic sixtwo/oL.cJf (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 32: athrow
      // 33: bipush 1
      // 34: invokestatic sixtwo/oL.cJc (Z)V
      // 37: return
   }

   public oL(class_1309 var1) {
      long var2 = WEaqM ^ 25621495550511L;
      boolean var10000 = cJe();
      super(List.of(new oG(var1)));
      boolean var4 = var10000;

      try {
         if (var4) {
            iS.bwK("ZPd06");
         }
      } catch (MatchException var5) {
         throw cJf(var5);
      }
   }

   static {
      Loader.doInit(oL.class);
      _545c8ef846e38724f95196ed3a35f253();
   }

   public static native boolean cJd();

   public static native boolean cJe();

   private static native MatchException cJf(MatchException var0);

   public static native void cJc(boolean var0);

   private static native void _545c8ef846e38724f95196ed3a35f253();
}
