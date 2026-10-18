package offline.bootstrap;

import java.io.IOException;
import java.net.InetSocketAddress;
import java.net.Proxy;
import java.net.ProxySelector;
import java.net.SocketAddress;
import java.net.URI;
import java.net.Proxy.Type;
import java.util.List;

final class OfflineNetworkPolicy {
   private static final List<Proxy> BLOCKED = List.of(new Proxy(Type.HTTP, new InetSocketAddress("127.0.0.1", 9)));
   private static boolean installed;

   private OfflineNetworkPolicy() {
   }

   static synchronized void install() {
      if (!installed) {
         installed = true;
         final ProxySelector var0 = ProxySelector.getDefault();
         ProxySelector.setDefault(new ProxySelector() {
            @Override
            public List<Proxy> select(URI var1) {
               String var2 = var1 == null ? null : var1.getHost();
               String var3 = var1 == null ? null : var1.getScheme();
               if (!OfflineNetworkPolicy.isClientBackend(var2) && (!OfflineNetworkPolicy.isWebScheme(var3) || OfflineNetworkPolicy.isLoopback(var2))) {
                  return var0 == null ? List.of(Proxy.NO_PROXY) : var0.select(var1);
               } else {
                  return OfflineNetworkPolicy.BLOCKED;
               }
            }

            @Override
            public void connectFailed(URI var1, SocketAddress var2, IOException var3) {
               if (var0 != null) {
                  var0.connectFailed(var1, var2, var3);
               }
            }
         });
         System.out.println("[offline-bootstrap] all external HTTP/HTTPS disabled; local and Minecraft TCP remain available");
      }
   }

   private static boolean isWebScheme(String var0) {
      return var0 != null && (var0.equalsIgnoreCase("http") || var0.equalsIgnoreCase("https"));
   }

   private static boolean isLoopback(String var0) {
      if (var0 == null) {
         return false;
      } else {
         String var1 = var0.toLowerCase();
         return var1.equals("localhost") || var1.equals("127.0.0.1") || var1.equals("::1") || var1.equals("[::1]");
      }
   }

   private static boolean isClientBackend(String var0) {
      if (var0 == null) {
         return false;
      } else {
         String var1 = var0.toLowerCase();
         return var1.equals("cute.rip")
            || var1.endsWith(".cute.rip")
            || var1.equals("grimclient.pl")
            || var1.endsWith(".grimclient.pl")
            || var1.equals("sixtwo.io")
            || var1.endsWith(".sixtwo.io")
            || var1.equals("liquidproxy.net")
            || var1.endsWith(".liquidproxy.net")
            || var1.equals("gravatar.com")
            || var1.endsWith(".gravatar.com");
      }
   }
}
