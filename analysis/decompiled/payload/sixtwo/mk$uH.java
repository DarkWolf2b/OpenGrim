package sixtwo;

import java.util.function.BiConsumer;
import net.minecraft.class_1299;
import net.minecraft.class_1665;
import net.minecraft.class_1792;
import net.minecraft.class_1799;

public record mk$uH(Class<? extends class_1792> itemClass, class_1299<?> entityType, boolean persistent, BiConsumer<class_1799, class_1665> setupRoutine) {
   public boolean isSame(class_1792 var1) {
      return this.itemClass.isInstance(var1);
   }
}
