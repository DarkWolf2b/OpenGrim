package org.jose4j.jwt.consumer;

import java.util.Collections;
import org.jose4j.jws.JsonWebSignature;

public class InvalidJwtSignatureException extends InvalidJwtException {
   public InvalidJwtSignatureException(JsonWebSignature var1, JwtContext var2) {
      super("JWT rejected due to invalid signature.", Collections.singletonList(new ErrorCodeValidator.Error(9, "Invalid JWS Signature: " + var1)), var2);
   }
}
