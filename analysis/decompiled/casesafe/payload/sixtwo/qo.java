package sixtwo;

import com.google.gson.JsonObject;
import native.Loader;

public record qo(qp opcode, JsonObject data) {
   static {
      Loader.doInit(qo.class);
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native JsonObject data();

   public native qp opcode();
}
