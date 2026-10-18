package sixtwo;

import java.util.List;
import java.util.Map;
import net.minecraft.class_304;
import net.minecraft.class_3675.class_306;

public class gz extends hH {
   private class_306 YKcvD;
   private Map<class_306, List<class_304>> zrjpu;

   public boolean bbK(class_304 var1) {
      return this.bbJ().contains(var1);
   }

   public class_306 bbL() {
      return this.YKcvD;
   }

   public List<class_304> bbJ() {
      return this.zrjpu.getOrDefault(this.YKcvD, List.of());
   }

   public Map<class_306, List<class_304>> bbM() {
      return this.zrjpu;
   }

   public gz(class_306 var1, Map<class_306, List<class_304>> var2) {
      this.YKcvD = var1;
      this.zrjpu = var2;
   }
}
