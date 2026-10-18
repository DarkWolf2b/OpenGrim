package org.jose4j.jwe;

import org.jose4j.lang.ByteUtil;

public class ContentEncryptionKeys {
   private final byte[] contentEncryptionKey;
   private final byte[] encryptedKey;

   public byte[] getEncryptedKey() {
      return this.encryptedKey;
   }

   public ContentEncryptionKeys(byte[] var1, byte[] var2) {
      this.contentEncryptionKey = var1;
      this.encryptedKey = var2 == null ? ByteUtil.EMPTY_BYTES : var2;
   }

   public byte[] getContentEncryptionKey() {
      return this.contentEncryptionKey;
   }
}
