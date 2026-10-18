package sixtwo;

import native.Loader;

public abstract class nF extends nH {
   protected final mT VbFMT;
   private final nI Kgyve;
   private static long CyNRa;

   private static native void _6f9294b9bddda6f7488d0a2402f2fd99();

   public nF(nI var1) {
      long var2 = CyNRa ^ 128688886799553L;
      super();
      String var10000 = nH.cxy();
      this.VbFMT = mT.cpz();
      this.Kgyve = var1;
      String var4 = var10000;

      try {
         if (var4 == null) {
            iS.bwK("yoc5R");
         }
      } catch (MatchException var5) {
         throw cxu(var5);
      }
   }

   static {
      Loader.doInit(nF.class);
      _6f9294b9bddda6f7488d0a2402f2fd99();
   }

   public native mT cxs();

   @Override
   public native void cwq();

   public native boolean cxr(iy var1);

   private static native MatchException cxu(MatchException var0);

   public native nI cxt();
}
