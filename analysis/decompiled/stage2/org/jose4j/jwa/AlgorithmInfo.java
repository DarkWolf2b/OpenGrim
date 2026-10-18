package org.jose4j.jwa;

import org.jose4j.keys.KeyPersuasion;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public abstract class AlgorithmInfo implements Algorithm {
   protected final Logger log = LoggerFactory.getLogger(this.getClass());
   private String algorithmIdentifier;
   private String javaAlgorithm;
   private KeyPersuasion keyPersuasion;
   private String keyType;

   @Override
   public KeyPersuasion getKeyPersuasion() {
      return this.keyPersuasion;
   }

   @Override
   public String getJavaAlgorithm() {
      return this.javaAlgorithm;
   }

   public void setKeyPersuasion(KeyPersuasion var1) {
      this.keyPersuasion = var1;
   }

   public void setJavaAlgorithm(String var1) {
      this.javaAlgorithm = var1;
   }

   public AlgorithmInfo() {
   }

   @Override
   public String toString() {
      return this.getClass().getName() + "(" + this.algorithmIdentifier + "|" + this.javaAlgorithm + ")";
   }

   @Override
   public String getAlgorithmIdentifier() {
      return this.algorithmIdentifier;
   }

   public void setAlgorithmIdentifier(String var1) {
      this.algorithmIdentifier = var1;
   }

   public void setKeyType(String var1) {
      this.keyType = var1;
   }

   @Override
   public String getKeyType() {
      return this.keyType;
   }
}
