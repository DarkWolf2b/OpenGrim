package sixtwo;

import java.lang.invoke.MethodHandles;

public class bi extends az {
   private static final long VEYAp = gb.aYR(9139635386457903753L, 1557971589278227743L, MethodHandles.lookup().lookupClass()).a(32253300271458L);

   @Override
   public void dl(double var1, double var3, mA var5) {
      bl.Ex().EB().wp().dl(var1, var3, var5);
   }

   @Override
   public boolean dk(double var1, double var3, mA var5) {
      return bl.Ex().EB().wp().dk(var1, var3, var5);
   }

   @Override
   protected void bV(lC var1) {
      long var2 = VEYAp ^ 103525096930311L;
      aE var4 = bl.Ex().EB().wp();

      try {
         if (var4 == null) {
            return;
         }
      } catch (MatchException var6) {
         throw Dx(var6);
      }

      float var5 = this.WjISQ - 0.75F;
      jG.bHK(var1, this.MCnYt, this.pNyTQ, this.BcpIo, var5);
      var4.sY(this.MCnYt, this.pNyTQ, this.BcpIo, var5);
      var4.su(var1);
      jG.bHN();
   }

   @Override
   public boolean fC(double param1, double param3, double param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bi.VEYAp J
      // 03: ldc2_w 76064253204937
      // 06: lxor
      // 07: lstore 7
      // 09: invokestatic sixtwo/bg.De ()I
      // 0c: istore 9
      // 0e: aload 0
      // 0f: dload 1
      // 10: dload 3
      // 11: invokevirtual sixtwo/bi.tg (DD)Z
      // 14: iload 9
      // 16: ifeq 3c
      // 19: ifeq 34
      // 1c: goto 23
      // 1f: invokestatic sixtwo/bi.Dx (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: invokestatic sixtwo/bl.Ex ()Lsixtwo/bl;
      // 26: invokevirtual sixtwo/bl.Ez ()Lsixtwo/ah;
      // 29: dload 5
      // 2b: invokevirtual sixtwo/ah.nJ (D)V
      // 2e: bipush 1
      // 2f: ireturn
      // 30: invokestatic sixtwo/bi.Dx (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33: athrow
      // 34: aload 0
      // 35: dload 1
      // 36: dload 3
      // 37: dload 5
      // 39: invokespecial sixtwo/az.fC (DDD)Z
      // 3c: ireturn
   }

   @Override
   public boolean dB(double var1, double var3, mA var5, double var6, double var8) {
      return bl.Ex().EB().wp().dB(var1, var3, var5, var6, var8);
   }

   public boolean Dv(az var1) {
      return jf.bAU(this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ, var1.tr(), var1.ts(), var1.kN(), var1.dn());
   }

   public boolean Dw(double var1, double var3) {
      return jf.bAX(this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ, var1, var3);
   }

   private static MatchException Dx(MatchException var0) {
      return var0;
   }
}
