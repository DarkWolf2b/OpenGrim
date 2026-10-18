package org.jose4j.keys;

import javax.crypto.spec.SecretKeySpec;
import org.jose4j.lang.ByteUtil;

public class AesKey extends SecretKeySpec {
   public static final String ALGORITHM = "AES";

   public AesKey(byte[] var1) {
      super(var1, "AES");
   }

   @Override
   public String toString() {
      return ByteUtil.bitLength(this.getEncoded().length) + " bit " + "AES" + " key";
   }
}
