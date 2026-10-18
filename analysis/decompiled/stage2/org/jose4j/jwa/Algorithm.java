package org.jose4j.jwa;

import org.jose4j.keys.KeyPersuasion;

public interface Algorithm {
   boolean isAvailable();

   KeyPersuasion getKeyPersuasion();

   String getJavaAlgorithm();

   String getAlgorithmIdentifier();

   String getKeyType();
}
