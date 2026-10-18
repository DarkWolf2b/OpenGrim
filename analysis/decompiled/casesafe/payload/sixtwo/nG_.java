package sixtwo;

public interface nG {
   void runMarketOpenCommand(iy var1);

   long updateFallbackTimeout();

   default void pauseAndNotify() {
      this.pauseAndNotify(null);
   }

   void pauseAndNotify(String var1);

   void reopenMarket(iy var1);

   void pauseSession();
}
