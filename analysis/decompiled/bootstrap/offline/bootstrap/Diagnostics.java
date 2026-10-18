package offline.bootstrap;

public final class Diagnostics {
   private Diagnostics() {
   }

   public static void reportProtectedFailure(Throwable var0) {
      System.err.println("[offline-bootstrap] protected payload initialization failed:");
      var0.printStackTrace(System.err);
   }
}
