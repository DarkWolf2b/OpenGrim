package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.client.input.Input;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.util.PlayerInput;
import net.minecraft.util.math.Vec2f;

class mk$uK extends Input {
   final mv DYvln;
   final ClientPlayerEntity NpYIL;
   private static final long qbKPs = gb.aYR(4156954222303847609L, 2050517343560288004L, MethodHandles.lookup().lookupClass()).a(99568747978715L);

   mk$uK(mv var1, ClientPlayerEntity var2) {
      this.DYvln = var1;
      this.NpYIL = var2;
   }

   @Override
   public Vec2f getMovementInput() {
      return this.DYvln.cmC();
   }

   @Override
   public void tick() {
      long var1 = qbKPs ^ 88522520548292L;

      mk$uK var10000;
      PlayerInput var10001;
      PlayerInput var10002;
      boolean var10003;
      label32: {
         try {
            var10000 = this;
            var10001 = new PlayerInput;
            var10002 = var10001;
            if (this.DYvln.vGEel > 0.0F) {
               var10003 = true;
               break label32;
            }
         } catch (MatchException var3) {
            throw dvv(var3);
         }

         var10003 = false;
      }

      var10002./* $VF: Unable to resugar constructor */<init>(
         var10003, this.DYvln.vGEel < 0.0F, this.DYvln.mgoqe > 0.0F, this.DYvln.mgoqe < 0.0F, this.DYvln.GgKkk, this.DYvln.SuYKY, this.NpYIL.isSprinting()
      );
      var10000.playerInput = var10001;
      this.movementVector = this.DYvln.cmC();
   }

   private static MatchException dvv(MatchException var0) {
      return var0;
   }
}
