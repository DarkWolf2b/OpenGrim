package sixtwo;

import java.util.List;
import native.Loader;

class hU$tD implements hK {
   final List XkoLj;
   private static long Ktmcl;

   hU$tD(hU var1, List var2) {
      this.XkoLj = var2;
   }

   static {
      Loader.doInit(hU$tD.class);
      _50787977f06a1d9c59bf65fd93e67ec0();
   }

   @Override
   public native hJ validate(String var1);

   @Override
   public native List<String> suggestions(String var1);

   private static native MatchException dpH(MatchException var0);

   private static native boolean dpG(String var0, String var1);

   private static native void _50787977f06a1d9c59bf65fd93e67ec0();
}
