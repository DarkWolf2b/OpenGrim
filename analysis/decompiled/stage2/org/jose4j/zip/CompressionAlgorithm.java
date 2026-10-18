package org.jose4j.zip;

import org.jose4j.jwa.Algorithm;
import org.jose4j.lang.JoseException;

public interface CompressionAlgorithm extends Algorithm {
   byte[] compress(byte[] var1);

   byte[] decompress(byte[] var1) throws JoseException;
}
