package sixtwo;

import java.util.List;

public abstract class hH {
   private boolean QQqas;

   public void bdX(boolean var1) {
      this.QQqas = var1;
   }

   public void bdV() {
      List var1 = hF.bdO((Class<? extends hH>)this.getClass());
      if (!var1.isEmpty() && hF.BQuMu) {
         for (hI var3 : var1) {
            try {
               var3.target().invokeWithArguments(var3.source(), this);
            } catch (Throwable var5) {
               var5.printStackTrace();
            }
         }
      }
   }

   public boolean bdW() {
      return this.QQqas;
   }
}
