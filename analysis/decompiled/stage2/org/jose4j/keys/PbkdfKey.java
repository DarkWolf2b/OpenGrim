package org.jose4j.keys;

import javax.crypto.spec.SecretKeySpec;
import org.jose4j.lang.StringUtil;

public class PbkdfKey extends SecretKeySpec {
   public static final String ALGORITHM = "PBKDF2";

   public PbkdfKey(String var1) {
      super(StringUtil.getBytesUtf8(var1), "PBKDF2");
   }
}
