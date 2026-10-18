package sixtwo;

import native.Loader;

public record hJ$tx<T>(T value) implements hJ {
   static {
      Loader.doInit(hJ$tx.class);
   }

   public native T value();

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();
}
