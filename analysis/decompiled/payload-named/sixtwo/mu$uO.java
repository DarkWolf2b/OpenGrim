package sixtwo;

import java.util.Iterator;
import java.util.List;
import java.util.NoSuchElementException;
import native.Loader;

class mu$uO implements Iterator<T> {
   int QUqEO;
   final List sQWtz;
   private static long QSZHT;

   mu$uO(mu var1, List var2) {
      this.sQWtz = var2;
      this.QUqEO = this.sQWtz.size() - 1;
   }

   static {
      Loader.doInit(mu$uO.class);
      _e37fb7c09a41424ba7338f7948cdf6b0();
   }

   @Override
   public native boolean hasNext();

   @Override
   public native T next();

   private static native NoSuchElementException dvw(NoSuchElementException var0);

   private static native void _e37fb7c09a41424ba7338f7948cdf6b0();
}
