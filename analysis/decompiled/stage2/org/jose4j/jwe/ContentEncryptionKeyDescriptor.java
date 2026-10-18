package org.jose4j.jwe;

public class ContentEncryptionKeyDescriptor {
   private final int contentEncryptionKeyByteLength;
   private final String contentEncryptionKeyAlgorithm;

   public ContentEncryptionKeyDescriptor(int var1, String var2) {
      this.contentEncryptionKeyByteLength = var1;
      this.contentEncryptionKeyAlgorithm = var2;
   }

   public int getContentEncryptionKeyByteLength() {
      return this.contentEncryptionKeyByteLength;
   }

   public String getContentEncryptionKeyAlgorithm() {
      return this.contentEncryptionKeyAlgorithm;
   }
}
