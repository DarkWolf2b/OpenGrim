package sixtwo;

public interface lK extends lI {
   @Override
   default void execute() {
      this.beginBatch();

      try {
         this.renderIntoBatch();
      } finally {
         this.endBatch();
      }
   }

   void endBatch();

   void beginBatch();

   void renderIntoBatch();
}
