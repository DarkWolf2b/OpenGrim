package sixtwo;

public interface px {
   pM position();

   py position(pM var1);

   default py element() {
      return (py)this;
   }

   py order(int var1);

   int order();

   default boolean active() {
      return this.element().active();
   }

   default lc previewBounds() {
      return this.element().previewBounds();
   }
}
