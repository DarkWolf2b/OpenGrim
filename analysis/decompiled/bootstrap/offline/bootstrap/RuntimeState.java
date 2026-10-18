package offline.bootstrap;

final class RuntimeState {
   static volatile ClassLoader stage2Loader;
   static volatile Object runtime;
   static volatile boolean initialized;
   static volatile boolean postInitialized;

   private RuntimeState() {
   }
}
