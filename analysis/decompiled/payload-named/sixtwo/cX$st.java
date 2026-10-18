package sixtwo;

import net.minecraft.item.consume.UseAction;

// $VF: synthetic class
class cX$st {
   static final int[] uFllB = new int[UseAction.values().length];

   static {
      try {
         uFllB[UseAction.EAT.ordinal()] = 1;
      } catch (NoSuchFieldError var2) {
      }

      try {
         uFllB[UseAction.DRINK.ordinal()] = 2;
      } catch (NoSuchFieldError var1) {
      }
   }
}
