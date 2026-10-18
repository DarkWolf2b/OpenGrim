package sixtwo;

import java.util.function.Consumer;
import net.minecraft.class_1044;

public sealed interface kP<T> permits kQ {
   void flush();

   default lI command(T var1, lN var2, Consumer<kP<T>> var3) {
      return new lM<>(this, var2, var3, (T)var1);
   }

   kS defaultState();

   void render(T var1);

   default void startBatch() {
      this.startBatch(this.defaultState());
   }

   default void startBatch(class_1044 var1) {
      this.startBatch(var1, this.defaultState());
   }

   default void startBatch(class_1044 var1, kS var2) {
   }

   default void startBatch(kS var1) {
   }

   void endBatch();

   default void swapTexture(class_1044 var1) {
   }
}
