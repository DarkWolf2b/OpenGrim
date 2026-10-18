package org.jose4j.jwk;

import java.security.Key;
import java.security.PublicKey;
import java.security.interfaces.EdECKey;
import java.security.interfaces.XECKey;
import java.security.spec.NamedParameterSpec;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import org.jose4j.base64url.Base64Url;
import org.jose4j.keys.EdDsaKeyUtil;
import org.jose4j.keys.OctetKeyPairUtil;
import org.jose4j.keys.XDHKeyUtil;
import org.jose4j.lang.ExceptionHelp;
import org.jose4j.lang.InvalidKeyException;
import org.jose4j.lang.JoseException;
import org.jose4j.lang.UncheckedJoseException;

public class OctetKeyPairJsonWebKey extends PublicJsonWebKey {
   static final Set<String> APPLICABLE_KEY_ALGORITHMS = new HashSet<>(Arrays.asList("Ed448", "Ed25519", "EdDSA", "X25519", "X448", "XDH"));
   public static final String KEY_TYPE = "OKP";
   public static final String SUBTYPE_MEMBER_NAME = "crv";
   public static final String PUBLIC_KEY_MEMBER_NAME = "x";
   public static final String PRIVATE_KEY_MEMBER_NAME = "d";
   public static final String SUBTYPE_ED25519 = "Ed25519";
   public static final String SUBTYPE_ED448 = "Ed448";
   public static final String SUBTYPE_X25519 = "X25519";
   public static final String SUBTYPE_X448 = "X448";
   private final String subtype;

   public String getSubtype() {
      return this.subtype;
   }

   OctetKeyPairUtil subtypeKeyUtil() {
      return OctetKeyPairUtil.getOctetKeyPairUtil(this.subtype, this.jcaProvider, null);
   }

   public OctetKeyPairJsonWebKey(PublicKey var1) {
      super(var1);
      if (XDHKeyUtil.isXECPublicKey(var1)) {
         XECKey var2 = (XECKey)var1;
         this.subtype = ((NamedParameterSpec)var2.getParams()).getName();
      } else {
         if (!EdDsaKeyUtil.isEdECPublicKey(var1)) {
            throw new UncheckedJoseException("Unable to determine OKP subtype from " + var1);
         }

         EdECKey var3 = (EdECKey)var1;
         this.subtype = var3.getParams().getName();
      }
   }

   public OctetKeyPairJsonWebKey(Map<String, Object> var1, String var2) throws JoseException {
      super(var1, var2);
      this.subtype = getString(var1, "crv", true);

      try {
         OctetKeyPairUtil var3 = this.subtypeKeyUtil();
         if (var3 == null) {
            throw new InvalidKeyException("\"" + this.subtype + "\" is an unknown or unsupported subtype value for the \"crv\" parameter.");
         }

         String var4 = getString(var1, "x", true);
         byte[] var5 = Base64Url.decode(var4);
         this.key = var3.publicKey(var5, this.subtype);
         this.checkForBareKeyCertMismatch();
         if (var1.containsKey("d")) {
            String var6 = getString(var1, "d", false);
            byte[] var7 = Base64Url.decode(var6);
            this.privateKey = var3.privateKey(var7, this.subtype);
         }
      } catch (NoClassDefFoundError var8) {
         throw new JoseException("Unable to instantiate key for OKP JWK with " + this.subtype + ". " + ExceptionHelp.toStringWithCauses(var8));
      }

      this.removeFromOtherParams(new String[]{"crv", "x", "d"});
   }

   public OctetKeyPairJsonWebKey(Map<String, Object> var1) throws JoseException {
      this(var1, null);
   }

   static boolean isApplicable(Key var0) {
      return APPLICABLE_KEY_ALGORITHMS.contains(var0.getAlgorithm());
   }

   @Override
   protected String produceThumbprintHashInput() {
      String var1 = "{\"crv\":\"%s\",\"kty\":\"OKP\",\"x\":\"%s\"}";
      HashMap var2 = new HashMap();
      this.fillPublicTypeSpecificParams(var2);
      Object var3 = var2.get("crv");
      Object var4 = var2.get("x");
      return String.format(var1, var3, var4);
   }

   @Override
   protected void fillPublicTypeSpecificParams(Map<String, Object> var1) {
      OctetKeyPairUtil var2 = this.subtypeKeyUtil();
      byte[] var3 = var2.rawPublicKey(this.key);
      var1.put("crv", this.subtype);
      var1.put("x", Base64Url.encode(var3));
   }

   @Override
   protected void fillPrivateTypeSpecificParams(Map<String, Object> var1) {
      if (this.privateKey != null) {
         OctetKeyPairUtil var2 = this.subtypeKeyUtil();
         byte[] var3 = var2.rawPrivateKey(this.privateKey);
         var1.put("d", Base64Url.encode(var3));
      }
   }

   @Override
   public String getKeyType() {
      return "OKP";
   }
}
