package org.jose4j.jwe;

public class ContentEncryptionParts {
   private byte[] iv;
   private byte[] ciphertext;
   private byte[] authenticationTag;

   public byte[] getCiphertext() {
      return this.ciphertext;
   }

   public ContentEncryptionParts(byte[] var1, byte[] var2, byte[] var3) {
      this.iv = var1;
      this.ciphertext = var2;
      this.authenticationTag = var3;
   }

   public byte[] getAuthenticationTag() {
      return this.authenticationTag;
   }

   public byte[] getIv() {
      return this.iv;
   }
}
