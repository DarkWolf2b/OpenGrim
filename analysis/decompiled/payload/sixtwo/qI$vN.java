package sixtwo;

import javax.sound.sampled.AudioFormat;
import native.Loader;

record qI$vN(AudioFormat format, byte[] pcmBytes, long frameLength) {
   static {
      Loader.doInit(qI$vN.class);
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native AudioFormat format();

   public native long frameLength();

   public native byte[] pcmBytes();
}
