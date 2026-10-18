package sixtwo;

import java.util.List;
import native.Loader;

public record hX(hZ command, List<Object> arguments) {
   static {
      Loader.doInit(hX.class);
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native List<Object> arguments();

   public native hZ command();
}
