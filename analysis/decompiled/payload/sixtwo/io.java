package sixtwo;

import com.google.gson.JsonObject;
import native.Loader;
import net.minecraft.class_241;

public class io implements rp {
   private float rXqlY;
   private float GeupB;

   public io() {
   }

   public io(float var1, float var2) {
      this.rXqlY = var1;
      this.GeupB = var2;
   }

   static {
      Loader.doInit(io.class);
   }

   @Override
   public native void fromJson(JsonObject var1);

   @Override
   public native JsonObject toJson();

   public native float blz();

   public native io blB(float var1);

   public native io blx();

   public native float bly();

   public native io blA(float var1);

   public native class_241 blw();
}
