package sixtwo;

import java.util.List;
import java.util.Map;
import net.minecraft.client.option.KeyBinding;
import net.minecraft.client.util.InputUtil.Key;

public class gz extends hH {
   private Key YKcvD;
   private Map<Key, List<KeyBinding>> zrjpu;

   public boolean bbK(KeyBinding var1) {
      return this.bbJ().contains(var1);
   }

   public Key bbL() {
      return this.YKcvD;
   }

   public List<KeyBinding> bbJ() {
      return this.zrjpu.getOrDefault(this.YKcvD, List.of());
   }

   public Map<Key, List<KeyBinding>> bbM() {
      return this.zrjpu;
   }

   public gz(Key var1, Map<Key, List<KeyBinding>> var2) {
      this.YKcvD = var1;
      this.zrjpu = var2;
   }
}
