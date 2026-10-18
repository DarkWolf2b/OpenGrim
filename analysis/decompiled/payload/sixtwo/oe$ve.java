package sixtwo;

import native.Loader;

public record oe$ve(int maxAttempts, long initialBackoffMs) {
   static {
      Loader.doInit(oe$ve.class);
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native int maxAttempts();

   public native long initialBackoffMs();
}
