package sixtwo;

import java.lang.invoke.MethodHandles;

public class mW {
   private boolean VEfPX;
   private boolean ISQse;
   private static final long GvwYc = gb.aYR(3304271961851692338L, 6547709399777409721L, MethodHandles.lookup().lookupClass()).a(101794849805559L);

   public boolean cry() {
      return this.VEfPX;
   }

   private static MatchException crB(MatchException var0) {
      return var0;
   }

   public void crA() {
      this.VEfPX = false;
      this.ISQse = false;
   }

   public boolean crz() {
      return this.ISQse;
   }

   public boolean crx(int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mW.GvwYc J
      // 03: ldc2_w 77352129183632
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/mU.cpU ()I
      // 0b: istore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/mW.VEfPX Z
      // 11: iload 4
      // 13: ifne 38
      // 16: ifne 34
      // 19: goto 20
      // 1c: invokestatic sixtwo/mW.crB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 0
      // 21: iload 1
      // 22: invokestatic sixtwo/mU.cpN (I)Z
      // 25: putfield sixtwo/mW.ISQse Z
      // 28: aload 0
      // 29: bipush 1
      // 2a: putfield sixtwo/mW.VEfPX Z
      // 2d: goto 34
      // 30: invokestatic sixtwo/mW.crB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33: athrow
      // 34: aload 0
      // 35: getfield sixtwo/mW.ISQse Z
      // 38: ireturn
   }
}
