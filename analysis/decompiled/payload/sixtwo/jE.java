package sixtwo;

import it.unimi.dsi.fastutil.objects.Object2ObjectLinkedOpenHashMap;
import net.minecraft.class_12249;
import net.minecraft.class_1921;
import net.minecraft.class_9799;

public final class jE {
   private static void bHv(Object2ObjectLinkedOpenHashMap<class_1921, class_9799> var0, class_1921 var1) {
      var0.put(var1, new class_9799(var1.method_22722()));
   }

   public static void bHu(Object2ObjectLinkedOpenHashMap<class_1921, class_9799> var0) {
      bHv(var0, class_12249.method_75989());
      bHv(var0, class_12249.method_75995());
      bHv(var0, class_12249.method_75993());
      bHv(var0, class_12249.method_75997());
   }
}
