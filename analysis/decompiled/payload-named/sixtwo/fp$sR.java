package sixtwo;

import native.Loader;
import net.minecraft.network.packet.Packet;

record fp$sR(Packet<?> packet, long time) {
   public fp$sR(Packet<?> var1) {
      this(var1, System.currentTimeMillis());
   }

   static {
      Loader.doInit(fp$sR.class);
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native long time();

   public native Packet<?> packet();
}
