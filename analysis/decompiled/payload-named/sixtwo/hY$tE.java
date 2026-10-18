package sixtwo;

import java.util.List;
import native.Loader;

record hY$tE(List<String> names, String description, List<hM<?>> parameters, List<hZ> subcommands, boolean executable, hW handler) implements hZ {
   @Override
   public native boolean executable();

   static {
      Loader.doInit(hY$tE.class);
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   @Override
   public native hW handler();

   @Override
   public native List<hM<?>> parameters();

   @Override
   public native List<String> names();

   @Override
   public native String description();

   @Override
   public native List<hZ> subcommands();
}
