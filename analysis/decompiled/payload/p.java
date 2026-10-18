import oshi.PlatformEnum;

// $VF: synthetic class
class p {
   static final int[] K = new int[PlatformEnum.values().length];

   static {
      try {
         K[PlatformEnum.WINDOWS.ordinal()] = 1;
      } catch (NoSuchFieldError var3) {
      }

      try {
         K[PlatformEnum.MACOS.ordinal()] = 2;
      } catch (NoSuchFieldError var2) {
      }

      try {
         K[PlatformEnum.LINUX.ordinal()] = 3;
      } catch (NoSuchFieldError var1) {
      }
   }
}
