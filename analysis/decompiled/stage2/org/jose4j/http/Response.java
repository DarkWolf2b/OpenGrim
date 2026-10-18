package org.jose4j.http;

import java.util.Collection;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;

public class Response implements SimpleResponse {
   private int statusCode;
   private String statusMessage;
   private Map<String, List<String>> headers;
   private String body;

   public Response(int var1, String var2, Map<String, List<String>> var3, String var4) {
      this.statusCode = var1;
      this.statusMessage = var2;
      this.headers = new HashMap<>();

      for (Entry var6 : var3.entrySet()) {
         String var7 = this.normalizeHeaderName((String)var6.getKey());
         this.headers.put(var7, (List<String>)var6.getValue());
      }

      this.body = var4;
   }

   @Override
   public int getStatusCode() {
      return this.statusCode;
   }

   @Override
   public String getStatusMessage() {
      return this.statusMessage;
   }

   @Override
   public Collection<String> getHeaderNames() {
      return this.headers.keySet();
   }

   @Override
   public List<String> getHeaderValues(String var1) {
      var1 = this.normalizeHeaderName(var1);
      return this.headers.get(var1);
   }

   @Override
   public String getBody() {
      return this.body;
   }

   private String normalizeHeaderName(String var1) {
      return var1 != null ? var1.toLowerCase().trim() : null;
   }

   @Override
   public String toString() {
      return "SimpleResponse{statusCode="
         + this.statusCode
         + ", statusMessage='"
         + this.statusMessage
         + '\''
         + ", headers="
         + this.headers
         + ", body='"
         + this.body
         + '\''
         + '}';
   }
}
