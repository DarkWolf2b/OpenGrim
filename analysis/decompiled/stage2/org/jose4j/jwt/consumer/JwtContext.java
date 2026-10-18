package org.jose4j.jwt.consumer;

import java.util.List;
import org.jose4j.jwt.JwtClaims;
import org.jose4j.jwx.JsonWebStructure;

public class JwtContext {
   private String jwt;
   private JwtClaims jwtClaims;
   private List<JsonWebStructure> joseObjects;

   public JwtContext(JwtClaims var1, List<JsonWebStructure> var2) {
      this.jwtClaims = var1;
      this.joseObjects = var2;
   }

   public JwtContext(String var1, JwtClaims var2, List<JsonWebStructure> var3) {
      this.jwt = var1;
      this.jwtClaims = var2;
      this.joseObjects = var3;
   }

   public JwtClaims getJwtClaims() {
      return this.jwtClaims;
   }

   void setJwtClaims(JwtClaims var1) {
      this.jwtClaims = var1;
   }

   public List<JsonWebStructure> getJoseObjects() {
      return this.joseObjects;
   }

   public String getJwt() {
      return this.jwt;
   }
}
