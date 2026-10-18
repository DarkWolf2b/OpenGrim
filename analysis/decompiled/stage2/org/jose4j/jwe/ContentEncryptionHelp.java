package org.jose4j.jwe;

import org.jose4j.jca.ProviderContext;
import org.jose4j.jwx.Headers;

class ContentEncryptionHelp {
   static String getMacProvider(Headers var0, ProviderContext var1) {
      ProviderContext.Context var2 = choseContext(var0, var1);
      return var2.getMacProvider();
   }

   static String getCipherProvider(Headers var0, ProviderContext var1) {
      ProviderContext.Context var2 = choseContext(var0, var1);
      return var2.getCipherProvider();
   }

   private static ProviderContext.Context choseContext(Headers var0, ProviderContext var1) {
      boolean var2 = var0 != null && "dir".equals(var0.getStringHeaderValue("alg"));
      return var2 ? var1.getSuppliedKeyProviderContext() : var1.getGeneralProviderContext();
   }

   ContentEncryptionHelp() {
   }
}
