package sixtwo;

import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.ByteBuffer;
import java.util.function.Consumer;
import native.Loader;

public class qk extends qm {
   private final RandomAccessFile KuraZ;
   private final Consumer<qo> jRIrU;
   private static long TItqy;
   private static String lzFXf;
   private static long PUMVH;

   qk(String var1, Consumer<qo> var2) throws IOException {
      long var3 = TItqy ^ 28565712313730L;
      super();
      this.KuraZ = new RandomAccessFile(var1, lzFXf);
      this.jRIrU = var2;
      Thread var5 = new Thread(this::cWW);
      var5.start();
   }

   static {
      Loader.doInit(qk.class);
      _33b1635d3e3b20f5ec6d5d0e17226f07();
   }

   @Override
   protected native void cWV(ByteBuffer var1);

   @Override
   public native void cWY();

   private native void cWW();

   private native void cWX(ByteBuffer var1) throws IOException;

   private static native String cXa(byte[] var0);

   private static native IOException cWZ(IOException var0);

   private static native void _33b1635d3e3b20f5ec6d5d0e17226f07();
}
