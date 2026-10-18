package sixtwo;

import net.minecraft.network.ClientConnection;
import net.minecraft.network.listener.PacketListener;
import net.minecraft.network.packet.Packet;

public class gL$tj extends gL {
   private final ClientConnection EkqAB;

   public <T extends PacketListener> gL$tj(Packet<T> var1, ClientConnection var2) {
      super(var1);
      this.EkqAB = var2;
   }

   public ClientConnection dpm() {
      return this.EkqAB;
   }
}
