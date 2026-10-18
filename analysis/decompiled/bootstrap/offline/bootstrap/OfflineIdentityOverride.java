package offline.bootstrap;

import java.lang.reflect.Field;
import java.nio.charset.StandardCharsets;
import java.util.Arrays;
import java.util.Base64;
import java.util.Base64.Encoder;
import java.util.concurrent.ExecutorService;

final class OfflineIdentityOverride {
   private OfflineIdentityOverride() {
   }

   static void apply(ClassLoader var0) throws Exception {
      String var1 = System.getProperty("offline.client.displayName", "matthew");
      int var2 = Integer.getInteger("offline.client.uid", 1337);
      Class var3 = Class.forName("sixtwo.ry", true, var0);
      Object var4 = var3.getMethod("dkB").invoke(null);
      if (var4 == null) {
         throw new IllegalStateException("sixtwo.ry singleton was not created");
      } else {
         NativeOverrides.overrideAccountChecks(var3);
         Field var5 = accessible(var3.getDeclaredField("yyzxB"));
         Class var6 = Class.forName("sixtwo.mC", true, var0);
         Object var7 = var6.getDeclaredConstructor().newInstance();
         accessible(var6.getDeclaredField("kcUAf")).set(var7, localToken(var1, var2));
         byte var8 = 20;
         accessible(var6.getDeclaredField("aWpDC")).setInt(var7, var2 + var8);
         accessible(var6.getDeclaredField("IUJzX")).set(var7, var1);
         accessible(var6.getDeclaredField("BSavb")).set(var7, "https://gravatar.com/avatar/00000000000000000000000000000000?size=150");
         var5.set(var4, var7);
         Field var9 = accessible(var3.getDeclaredField("bVgUI"));
         if (var9.get(var4) instanceof ExecutorService var11) {
            var11.shutdownNow();
         }

         Class var14 = Class.forName("sixtwo.mZ", true, var0);
         boolean var12 = (Boolean)var14.getMethod("css").invoke(null);
         boolean var13 = (Boolean)var3.getMethod("dkG").invoke(var4);
         System.out.printf("[offline-bootstrap] local profile installed: name=%s uid=%s token=%s profile=%s%n", var1, var2, var12, var13);
      }
   }

   private static Field accessible(Field var0) {
      var0.setAccessible(true);
      return var0;
   }

   private static String localToken(String var0, int var1) {
      Encoder var2 = Base64.getUrlEncoder().withoutPadding();
      String var3 = var2.encodeToString("{\"alg\":\"HS512\"}".getBytes(StandardCharsets.UTF_8));
      String var4 = var0.replace("\\", "_").replace("\"", "_");
      String var5 = String.format(
         "{\"sub\":\"offline\",\"licenseId\":%d,\"hwids\":\"offline\",\"accountId\":\"%s\",\"betaAccess\":true,\"iat\":0,\"exp\":4102444800}", var1, var4
      );
      byte[] var6 = new byte[64];
      Arrays.fill(var6, (byte)66);
      return var3 + "." + var2.encodeToString(var5.getBytes(StandardCharsets.UTF_8)) + "." + var2.encodeToString(var6);
   }
}
