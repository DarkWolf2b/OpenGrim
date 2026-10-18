package sixtwo;

import native.Loader;

record G$rJ(
   float listX,
   float listY,
   float listWidth,
   float listHeight,
   float footerX,
   float footerY,
   float footerWidth,
   float footerHeight,
   float rowsStartY,
   float addIconY
) {
   static {
      Loader.doInit(G$rJ.class);
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native float listWidth();

   public native float rowsStartY();

   public native float addIconY();

   native float addIconX();

   public native float footerX();

   public native float footerY();

   public native float listX();

   public native float listY();

   public native float listHeight();

   public native float footerWidth();

   public native float footerHeight();
}
