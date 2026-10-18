package org.jose4j.jwk;

import java.security.SecureRandom;
import org.jose4j.keys.AesKey;
import org.jose4j.lang.ByteUtil;

public class OctJwkGenerator {
   public OctJwkGenerator() {
   }

   public static OctetSequenceJsonWebKey generateJwk(int var0) {
      return generateJwk(var0, null);
   }

   public static OctetSequenceJsonWebKey generateJwk(int var0, SecureRandom var1) {
      byte[] var2 = ByteUtil.randomBytes(ByteUtil.byteLength(var0), var1);
      return new OctetSequenceJsonWebKey(new AesKey(var2));
   }
}
