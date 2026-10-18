package sixtwo;

import native.Loader;

public record F(String text, lf icon, mG textColor, mG iconColor, ai action) {
   private static String[] a;

   public F(String var1, lf var2, ai var3) {
      this(var1, var2, null, null, var3);
   }

   static {
      Loader.doInit(F.class);
      _a8272f08dc4ef3746d6c262c44bd92e3();
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public static native void b(String[] var0);

   public static native String[] b();

   public native ai action();

   public native String text();

   public native mG textColor();

   public native mG iconColor();

   public native lf icon();

   private static native void _a8272f08dc4ef3746d6c262c44bd92e3();
}
