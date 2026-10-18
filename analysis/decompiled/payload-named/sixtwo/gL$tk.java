package sixtwo;

import net.minecraft.network.listener.PacketListener;
import net.minecraft.network.packet.Packet;

public class gL$tk extends gL {
   private final PacketListener OXWCb;

   public <T extends PacketListener> gL$tk(Packet<T> var1, PacketListener var2) {
      super(var1);
      this.OXWCb = var2;
   }

   public PacketListener dpn() {
      return this.OXWCb;
   }
}
