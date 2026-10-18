package sixtwo;

import net.minecraft.block.BlockState;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayNetworkHandler;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.recipebook.ClientRecipeBook;
import net.minecraft.client.world.ClientWorld;
import net.minecraft.sound.SoundEvent;
import net.minecraft.stat.StatHandler;
import net.minecraft.util.PlayerInput;
import net.minecraft.util.math.BlockPos;

class mk$uL extends ClientPlayerEntity {
   mk$uL(MinecraftClient var1, ClientWorld var2, ClientPlayNetworkHandler var3, StatHandler var4, ClientRecipeBook var5, PlayerInput var6, boolean var7) {
      super(var1, var2, var3, var4, var5, var6, var7);
   }

   @Override
   public float getHealth() {
      return this.getMaxHealth();
   }

   @Override
   public boolean isCamera() {
      return true;
   }

   @Override
   protected void fall(double heightDifference, boolean onGround, BlockState state, BlockPos landedPosition) {
   }

   @Override
   public void playSound(SoundEvent sound, float volume, float pitch) {
   }

   @Override
   public void tickMovement() {
      this.fallDistance = 0.0;
      super.tickMovement();
   }
}
