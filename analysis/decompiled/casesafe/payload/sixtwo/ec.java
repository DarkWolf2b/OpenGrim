package sixtwo;

import java.util.HashSet;
import java.util.Set;
import native.Loader;
import net.minecraft.class_2338;

public class ec extends gg {
   private final Set<class_2338> SRuur;
   private static long fIYBK;
   private static long esMqW;

   public ec() {
      long var1 = fIYBK ^ 131273348581354L;
      super(gf.aZL((int)esMqW, false, gh.qBzlZ));
      this.SRuur = new HashSet<>();
   }

   static {
      Loader.doInit(ec.class);
      _a6b74c1c3e347fb3f64dc8d1948a0595();
   }

   private static native void _a6b74c1c3e347fb3f64dc8d1948a0595();

   @hG
   public native void arz(gH$th var1);

   private static native MatchException arA(MatchException var0);
}
