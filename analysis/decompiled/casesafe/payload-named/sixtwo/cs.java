package sixtwo;

public interface cs {
   default boolean onMouseDragged(double var1, double var3, mA var5, double var6, double var8) {
      return false;
   }

   default boolean onCharTyped(char var1) {
      return false;
   }

   default boolean onMouseClicked(double var1, double var3, mA var5) {
      return false;
   }

   default boolean onKeyPressed(int var1, int var2, int var3) {
      return false;
   }

   default boolean onMouseReleased(double var1, double var3, mA var5) {
      return false;
   }

   default boolean onMouseScrolled(double var1, double var3, double var5) {
      return false;
   }
}
