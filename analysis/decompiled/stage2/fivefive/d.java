package fivefive;

import java.nio.ByteBuffer;
import natives.Loader;

public class d {
   public final String RTKSC;
   private final ByteBuffer zSfdW;
   private static C[] Oqdeg;

   public d(String var1, int var2) {
      this.RTKSC = var1;
      this.zSfdW = ByteBuffer.allocate(var2);
   }

   public native d o(Object[] var1);

   public native d p(Object... var1);

   public native byte q(Object[] var1);

   public native ByteBuffer r(Object[] var1);

   public static native void s(C[] var0);

   public static native C[] t();

   private static native RuntimeException u(RuntimeException var0);

   static {
      Loader.doInit(d.class);
      _cc8ad8917af5ab63a776b3adaa87e60d();
   }

   private static native void _cc8ad8917af5ab63a776b3adaa87e60d();
}
