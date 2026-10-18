package org.jose4j.jwa;

import java.security.Key;
import java.security.Signature;
import javax.crypto.Cipher;
import javax.crypto.KeyAgreement;
import javax.crypto.Mac;

public class CryptoPrimitive {
   private final Signature sig;
   private final Cipher cip;
   private final Mac mac;
   private final Key key;
   private final KeyAgreement kag;

   public Cipher getCipher() {
      return this.cip;
   }

   public KeyAgreement getKeyAgreement() {
      return this.kag;
   }

   public CryptoPrimitive(Signature var1) {
      this(var1, null, null, null, null);
   }

   private CryptoPrimitive(Signature var1, Cipher var2, Mac var3, Key var4, KeyAgreement var5) {
      this.sig = var1;
      this.cip = var2;
      this.mac = var3;
      this.key = var4;
      this.kag = var5;
   }

   public CryptoPrimitive(KeyAgreement var1) {
      this(null, null, null, null, var1);
   }

   public CryptoPrimitive(Cipher var1) {
      this(null, var1, null, null, null);
   }

   public CryptoPrimitive(Mac var1) {
      this(null, null, var1, null, null);
   }

   public CryptoPrimitive(Key var1) {
      this(null, null, null, var1, null);
   }

   public Key getKey() {
      return this.key;
   }

   public Signature getSignature() {
      return this.sig;
   }

   public Mac getMac() {
      return this.mac;
   }
}
