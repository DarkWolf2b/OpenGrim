package org.jose4j.json;

import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import org.jose4j.json.internal.json_simple.parser.ContainerFactory;

class JsonUtil$1 implements ContainerFactory {
   JsonUtil$1() {
   }

   @Override
   public List creatArrayContainer() {
      return new ArrayList();
   }

   @Override
   public Map createObjectContainer() {
      return new JsonUtil.DupeKeyDisallowingLinkedHashMap();
   }
}
