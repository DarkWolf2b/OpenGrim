package org.jose4j.keys;

import java.io.ByteArrayInputStream;
import java.security.MessageDigest;
import java.security.NoSuchProviderException;
import java.security.cert.Certificate;
import java.security.cert.CertificateEncodingException;
import java.security.cert.CertificateException;
import java.security.cert.CertificateFactory;
import java.security.cert.X509Certificate;
import org.jose4j.base64url.Base64;
import org.jose4j.base64url.Base64Url;
import org.jose4j.base64url.SimplePEMEncoder;
import org.jose4j.lang.HashUtil;
import org.jose4j.lang.JoseException;
import org.jose4j.lang.UncheckedJoseException;

public class X509Util {
   private static final String FACTORY_TYPE = "X.509";
   private CertificateFactory certFactory;

   public X509Util() {
      try {
         this.certFactory = CertificateFactory.getInstance("X.509");
      } catch (CertificateException var2) {
         throw new IllegalStateException("Couldn't find X.509 CertificateFactory!?!", var2);
      }
   }

   public X509Util(String var1) throws NoSuchProviderException {
      try {
         this.certFactory = CertificateFactory.getInstance("X.509", var1);
      } catch (CertificateException var3) {
         throw new IllegalStateException("Couldn't find X.509 CertificateFactory!?!", var3);
      }
   }

   public static X509Util getX509Util(String var0) throws JoseException {
      if (var0 == null) {
         return new X509Util();
      } else {
         try {
            return new X509Util(var0);
         } catch (NoSuchProviderException var2) {
            throw new JoseException("Provider " + var0 + " not found when creating X509Util.", var2);
         }
      }
   }

   public String toBase64(X509Certificate var1) {
      try {
         byte[] var2 = var1.getEncoded();
         return Base64.encode(var2);
      } catch (CertificateEncodingException var3) {
         throw new IllegalStateException("Unexpected problem getting encoded certificate.", var3);
      }
   }

   public String toPem(X509Certificate var1) {
      try {
         byte[] var2 = var1.getEncoded();
         return SimplePEMEncoder.encode(var2);
      } catch (CertificateEncodingException var3) {
         throw new IllegalStateException("Unexpected problem getting encoded certificate.", var3);
      }
   }

   public X509Certificate fromBase64Der(String var1) throws JoseException {
      byte[] var2 = Base64.decode(var1);
      ByteArrayInputStream var3 = new ByteArrayInputStream(var2);

      try {
         Certificate var4 = this.certFactory.generateCertificate(var3);
         return (X509Certificate)var4;
      } catch (CertificateException var5) {
         throw new JoseException("Unable to convert " + var1 + " value to X509Certificate: " + var5, var5);
      }
   }

   public static String x5t(X509Certificate var0) {
      return base64urlThumbprint(var0, "SHA-1");
   }

   public static String x5tS256(X509Certificate var0) {
      return base64urlThumbprint(var0, "SHA-256");
   }

   private static String base64urlThumbprint(X509Certificate var0, String var1) {
      MessageDigest var2 = HashUtil.getMessageDigest(var1);

      byte[] var3;
      try {
         var3 = var0.getEncoded();
      } catch (CertificateEncodingException var5) {
         throw new UncheckedJoseException("Unable to get certificate thumbprint due to unexpected certificate encoding exception.", var5);
      }

      byte[] var4 = var2.digest(var3);
      return Base64Url.encode(var4);
   }
}
