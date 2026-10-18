package sixtwo;

import native.Loader;

public record lm$uy(String text, int color, boolean bold, boolean italic, boolean underlined, boolean strikethrough) {
   static {
      Loader.doInit(lm$uy.class);
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native int color();

   public native String text();

   public native boolean strikethrough();

   public native boolean bold();

   public native boolean italic();

   public native boolean underlined();
}
