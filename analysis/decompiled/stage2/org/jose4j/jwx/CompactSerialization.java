package org.jose4j.jwx;

import org.jose4j.lang.JoseException;

/** @deprecated */
public class CompactSerialization {
   public CompactSerialization() {
   }

   /** @deprecated */
   public static String[] deserialize(String var0) {
      return CompactSerializer.deserialize(var0);
   }

   /** @deprecated */
   public static String serialize(String... var0) throws JoseException {
      return CompactSerializer.serialize(var0);
   }
}
