package sixtwo;

import java.util.List;
import native.Loader;

class hL$tz implements hK {
   final hK ussFH;
   final List CLLeY;

   hL$tz(hL var1, hK var2, List var3) {
      this.ussFH = var2;
      this.CLLeY = var3;
   }

   static {
      Loader.doInit(hL$tz.class);
   }

   @Override
   public native hJ validate(String var1);

   @Override
   public native List<String> suggestions(String var1);

   private static native boolean dpu(String var0, String var1);
}
