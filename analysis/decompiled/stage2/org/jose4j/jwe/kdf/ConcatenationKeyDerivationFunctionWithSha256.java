package org.jose4j.jwe.kdf;

public interface ConcatenationKeyDerivationFunctionWithSha256 {
   byte[] kdf(byte[] var1, int var2, byte[] var3);
}
