package sixtwo;

import native.Loader;

public record hM<T>(String name, boolean required, boolean vararg, hK validator) {
   static {
      Loader.doInit(hM.class);
   }

   public native String name();

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native boolean required();

   public native hK validator();

   public native boolean vararg();
}
