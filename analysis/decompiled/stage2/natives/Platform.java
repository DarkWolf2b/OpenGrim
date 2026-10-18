package natives;

public class Platform {
   public static int WINDOWS;
   public static int LINUX;
   public static int MAC;
   public static int osType;

   static {
      _2570cf9c17493cc1f4ccbc56660d42b2();
   }

   private static void _2570cf9c17493cc1f4ccbc56660d42b2() {
      String var0 = System.getProperty("os.name").toLowerCase();
      if (var0.contains("win")) {
         osType = 2;
      } else if (var0.contains("mac")) {
         osType = 3;
      } else {
         osType = 1;
      }
   }
}
