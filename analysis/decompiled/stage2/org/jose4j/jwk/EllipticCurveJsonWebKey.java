package org.jose4j.jwk;

import java.math.BigInteger;
import java.security.interfaces.ECPrivateKey;
import java.security.interfaces.ECPublicKey;
import java.security.spec.ECParameterSpec;
import java.security.spec.ECPoint;
import java.security.spec.EllipticCurve;
import java.util.HashMap;
import java.util.Map;
import org.jose4j.keys.EcKeyUtil;
import org.jose4j.keys.EllipticCurves;
import org.jose4j.lang.InvalidKeyException;
import org.jose4j.lang.JoseException;

public class EllipticCurveJsonWebKey extends PublicJsonWebKey {
   public static final String KEY_TYPE = "EC";
   public static final String CURVE_MEMBER_NAME = "crv";
   public static final String X_MEMBER_NAME = "x";
   public static final String Y_MEMBER_NAME = "y";
   public static final String PRIVATE_KEY_MEMBER_NAME = "d";
   private String curveName;

   public ECPublicKey getECPublicKey() {
      return (ECPublicKey)this.key;
   }

   public ECPrivateKey getEcPrivateKey() {
      return (ECPrivateKey)this.privateKey;
   }

   public EllipticCurveJsonWebKey(ECPublicKey var1) {
      super(var1);
      ECParameterSpec var2 = var1.getParams();
      EllipticCurve var3 = var2.getCurve();
      this.curveName = EllipticCurves.getName(var3);
   }

   public EllipticCurveJsonWebKey(Map<String, Object> var1, String var2) throws JoseException {
      super(var1, var2);
      this.curveName = getString(var1, "crv", true);
      ECParameterSpec var3 = EllipticCurves.getSpec(this.curveName);
      if (var3 == null) {
         throw new InvalidKeyException("\"" + this.curveName + "\" is an unknown or unsupported value for the \"crv\" parameter.");
      } else {
         BigInteger var4 = this.getBigIntFromBase64UrlEncodedParam(var1, "x", true);
         BigInteger var5 = this.getBigIntFromBase64UrlEncodedParam(var1, "y", true);
         EcKeyUtil var6 = new EcKeyUtil(var2, null);
         this.key = var6.publicKey(var4, var5, var3);
         this.checkForBareKeyCertMismatch();
         if (var1.containsKey("d")) {
            BigInteger var7 = this.getBigIntFromBase64UrlEncodedParam(var1, "d", false);
            this.privateKey = var6.privateKey(var7, var3);
         }

         this.removeFromOtherParams(new String[]{"crv", "x", "y", "d"});
      }
   }

   public EllipticCurveJsonWebKey(Map<String, Object> var1) throws JoseException {
      this(var1, null);
   }

   @Override
   protected String produceThumbprintHashInput() {
      String var1 = "{\"crv\":\"%s\",\"kty\":\"EC\",\"x\":\"%s\",\"y\":\"%s\"}";
      HashMap var2 = new HashMap();
      this.fillPublicTypeSpecificParams(var2);
      Object var3 = var2.get("crv");
      Object var4 = var2.get("x");
      Object var5 = var2.get("y");
      return String.format(var1, var3, var4, var5);
   }

   private int getCoordinateByteLength() {
      ECParameterSpec var1 = EllipticCurves.getSpec(this.getCurveName());
      return (int)Math.ceil(var1.getCurve().getField().getFieldSize() / 8.0);
   }

   @Override
   protected void fillPublicTypeSpecificParams(Map<String, Object> var1) {
      ECPublicKey var2 = this.getECPublicKey();
      ECPoint var3 = var2.getW();
      int var4 = this.getCoordinateByteLength();
      this.putBigIntAsBase64UrlEncodedParam(var1, "x", var3.getAffineX(), var4);
      this.putBigIntAsBase64UrlEncodedParam(var1, "y", var3.getAffineY(), var4);
      var1.put("crv", this.getCurveName());
   }

   @Override
   protected void fillPrivateTypeSpecificParams(Map<String, Object> var1) {
      ECPrivateKey var2 = this.getEcPrivateKey();
      if (var2 != null) {
         int var3 = this.getCoordinateByteLength();
         this.putBigIntAsBase64UrlEncodedParam(var1, "d", var2.getS(), var3);
      }
   }

   public String getCurveName() {
      return this.curveName;
   }

   @Override
   public String getKeyType() {
      return "EC";
   }
}
