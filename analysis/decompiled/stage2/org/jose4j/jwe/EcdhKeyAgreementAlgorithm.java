package org.jose4j.jwe;

import java.math.BigInteger;
import java.security.Key;
import java.security.NoSuchAlgorithmException;
import java.security.NoSuchProviderException;
import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.SecureRandom;
import java.security.interfaces.ECKey;
import java.security.interfaces.ECPrivateKey;
import java.security.interfaces.ECPublicKey;
import java.security.interfaces.XECPublicKey;
import java.security.spec.ECFieldFp;
import java.security.spec.ECParameterSpec;
import java.security.spec.ECPoint;
import java.security.spec.EllipticCurve;
import java.security.spec.NamedParameterSpec;
import javax.crypto.KeyAgreement;
import javax.crypto.spec.SecretKeySpec;
import org.jose4j.jca.ProviderContext;
import org.jose4j.jwa.AlgorithmAvailability;
import org.jose4j.jwa.AlgorithmInfo;
import org.jose4j.jwa.CryptoPrimitive;
import org.jose4j.jwe.kdf.KdfUtil;
import org.jose4j.jwk.EcJwkGenerator;
import org.jose4j.jwk.OkpJwkGenerator;
import org.jose4j.jwk.PublicJsonWebKey;
import org.jose4j.jwx.Headers;
import org.jose4j.jwx.KeyValidationSupport;
import org.jose4j.keys.EcKeyUtil;
import org.jose4j.keys.EllipticCurves;
import org.jose4j.keys.KeyPersuasion;
import org.jose4j.keys.XDHKeyUtil;
import org.jose4j.lang.ByteUtil;
import org.jose4j.lang.InvalidKeyException;
import org.jose4j.lang.JoseException;
import org.jose4j.lang.UncheckedJoseException;

public class EcdhKeyAgreementAlgorithm extends AlgorithmInfo implements KeyManagementAlgorithm {
   String algorithmIdHeaderName = "enc";

   @Override
   public boolean isAvailable() {
      EcKeyUtil var1 = new EcKeyUtil();
      return var1.isAvailable() && AlgorithmAvailability.isAvailable("KeyAgreement", this.getJavaAlgorithm());
   }

   @Override
   public Key manageForDecrypt(CryptoPrimitive var1, byte[] var2, ContentEncryptionKeyDescriptor var3, Headers var4, ProviderContext var5) throws JoseException {
      KeyAgreement var6 = var1.getKeyAgreement();
      byte[] var7 = var6.generateSecret();
      byte[] var8 = this.kdf(var3, var4, var7, var5);
      String var9 = var3.getContentEncryptionKeyAlgorithm();
      return new SecretKeySpec(var8, var9);
   }

   @Override
   public CryptoPrimitive prepareForDecrypt(Key var1, Headers var2, ProviderContext var3) throws JoseException {
      String var4 = var3.getGeneralProviderContext().getKeyFactoryProvider();
      PublicJsonWebKey var5 = var2.getPublicJwkHeaderValue("epk", var4);
      PublicKey var6 = var5.getPublicKey();
      PrivateKey var7 = (PrivateKey)var1;
      if (var6 instanceof ECPublicKey) {
         ECPublicKey var8 = (ECPublicKey)var6;
         ECPrivateKey var9 = (ECPrivateKey)var1;
         this.checkCurveAllowed(var9);
         this.checkPointIsOnCurve(var8, var9);
      }

      KeyAgreement var10 = this.createKeyAgreement(var7, var6, var3);
      return new CryptoPrimitive(var10);
   }

   ContentEncryptionKeys manageForEncrypt(Key var1, ContentEncryptionKeyDescriptor var2, Headers var3, PublicJsonWebKey var4, ProviderContext var5) throws JoseException {
      var3.setJwkHeaderValue("epk", var4);
      byte[] var6 = this.generateEcdhSecret(var4.getPrivateKey(), (PublicKey)var1, var5);
      byte[] var7 = this.kdf(var2, var3, var6, var5);
      return new ContentEncryptionKeys(var7, null);
   }

   @Override
   public ContentEncryptionKeys manageForEncrypt(Key var1, ContentEncryptionKeyDescriptor var2, Headers var3, byte[] var4, ProviderContext var5) throws JoseException {
      KeyValidationSupport.cekNotAllowed(var4, this.getAlgorithmIdentifier());
      String var6 = var5.getGeneralProviderContext().getKeyPairGeneratorProvider();
      SecureRandom var7 = var5.getSecureRandom();
      Object var8;
      if (var1 instanceof ECPublicKey) {
         ECPublicKey var9 = (ECPublicKey)var1;
         this.checkCurveAllowed(var9);
         var8 = EcJwkGenerator.generateJwk(var9.getParams(), var6, var7);
      } else {
         if (!XDHKeyUtil.isXECPublicKey(var1)) {
            throw new InvalidKeyException("Inappropriate key for ECDH: " + var1);
         }

         XECPublicKey var12 = (XECPublicKey)var1;
         NamedParameterSpec var10 = (NamedParameterSpec)var12.getParams();
         String var11 = var10.getName();
         var8 = OkpJwkGenerator.generateJwk(var11, var6, var7);
      }

      return this.manageForEncrypt(var1, var2, var3, (PublicJsonWebKey)var8, var5);
   }

   private byte[] generateEcdhSecret(PrivateKey var1, PublicKey var2, ProviderContext var3) throws JoseException {
      KeyAgreement var4 = this.createKeyAgreement(var1, var2, var3);
      return var4.generateSecret();
   }

   private KeyAgreement createKeyAgreement(PrivateKey var1, PublicKey var2, ProviderContext var3) throws JoseException {
      String var4 = var3.getSuppliedKeyProviderContext().getKeyAgreementProvider();
      String var5 = var1 instanceof ECPrivateKey ? this.getJavaAlgorithm() : "XDH";
      KeyAgreement var6 = this.getKeyAgreement(var4, var5);

      try {
         var6.init(var1);
         var6.doPhase(var2, true);
         return var6;
      } catch (java.security.InvalidKeyException var8) {
         throw new InvalidKeyException("Invalid Key for " + this.getJavaAlgorithm() + " key agreement - " + var8, var8);
      }
   }

   private KeyAgreement getKeyAgreement(String var1, String var2) throws JoseException {
      try {
         return var1 == null ? KeyAgreement.getInstance(var2) : KeyAgreement.getInstance(var2, var1);
      } catch (NoSuchAlgorithmException var4) {
         throw new UncheckedJoseException("No " + var2 + " KeyAgreement available.", var4);
      } catch (NoSuchProviderException var5) {
         throw new JoseException("Cannot get " + var2 + " KeyAgreement with provider " + var1, var5);
      }
   }

   private void checkCurveAllowed(ECKey var1) throws InvalidKeyException {
      ECParameterSpec var2 = var1.getParams();
      String var3 = EllipticCurves.getName(var2.getCurve());
      if ("secp256k1".equals(var3)) {
         throw new InvalidKeyException("Use of the secp256k1 curve is not defined for ECDH-ES key agreement with JOSE.");
      }
   }

   public EcdhKeyAgreementAlgorithm(String var1) {
      this();
      this.algorithmIdHeaderName = var1;
   }

   public EcdhKeyAgreementAlgorithm() {
      this.setAlgorithmIdentifier("ECDH-ES");
      this.setJavaAlgorithm("ECDH");
      this.setKeyType("EC");
      this.setKeyPersuasion(KeyPersuasion.ASYMMETRIC);
   }

   @Override
   public void validateEncryptionKey(Key var1, ContentEncryptionAlgorithm var2) throws InvalidKeyException {
      if (!(var1 instanceof ECPublicKey) && !XDHKeyUtil.isXECPublicKey(var1)) {
         throw new InvalidKeyException("Encrypting with ECDH expects ECPublicKey or XECPublicKey but was given " + var1);
      }
   }

   @Override
   public void validateDecryptionKey(Key var1, ContentEncryptionAlgorithm var2) throws InvalidKeyException {
      if (!(var1 instanceof ECPrivateKey) && !XDHKeyUtil.isXECPrivateKey(var1)) {
         throw new InvalidKeyException("Decrypting with ECDH expects ECPrivateKey or XECPrivateKey but was given " + var1);
      }
   }

   private void checkPointIsOnCurve(ECPublicKey var1, ECPrivateKey var2) throws JoseException {
      ECParameterSpec var3 = var2.getParams();
      EllipticCurve var4 = var3.getCurve();
      ECPoint var5 = var1.getW();
      BigInteger var6 = var5.getAffineX();
      BigInteger var7 = var5.getAffineY();
      BigInteger var8 = var4.getA();
      BigInteger var9 = var4.getB();
      BigInteger var10 = ((ECFieldFp)var4.getField()).getP();
      BigInteger var11 = var7.pow(2).mod(var10);
      BigInteger var12 = var6.pow(3).add(var8.multiply(var6)).add(var9).mod(var10);
      boolean var13 = var11.equals(var12);
      if (!var13) {
         throw new InvalidKeyException("epk is invalid for " + EllipticCurves.getName(var4));
      }
   }

   private byte[] kdf(ContentEncryptionKeyDescriptor var1, Headers var2, byte[] var3, ProviderContext var4) {
      String var5 = var4.getGeneralProviderContext().getMessageDigestProvider();
      KdfUtil var6 = new KdfUtil(var5);
      int var7 = ByteUtil.bitLength(var1.getContentEncryptionKeyByteLength());
      String var8 = var2.getStringHeaderValue(this.algorithmIdHeaderName);
      String var9 = var2.getStringHeaderValue("apu");
      String var10 = var2.getStringHeaderValue("apv");
      return var6.kdf(var3, var7, var8, var9, var10);
   }
}
