package sixtwo;

import java.util.Collections;
import java.util.List;

@FunctionalInterface
public interface hK {
   hJ validate(String var1);

   default List<String> suggestions(String var1) {
      return Collections.emptyList();
   }
}
