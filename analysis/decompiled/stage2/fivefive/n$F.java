package fivefive;

import natives.Loader;
import org.objectweb.asm.ClassVisitor;
import org.objectweb.asm.FieldVisitor;

class n$F extends ClassVisitor {
   boolean gwXQR;
   final String NNidW;
   final String tryTO;
   private static long ytGqo;
   private static long VXumE;

   n$F(int var1, ClassVisitor var2, String var3, String var4) {
      super(var1, var2);
      this.NNidW = var3;
      this.tryTO = var4;
      this.gwXQR = false;
   }

   static {
      Loader.doInit(n$F.class);
      _9798bfa69e6e24a48e110ae7a0e3023b();
   }

   public native FieldVisitor visitField(int var1, String var2, String var3, String var4, Object var5);

   public native void visitEnd();

   private static native void _9798bfa69e6e24a48e110ae7a0e3023b();

   private static native RuntimeException fA(RuntimeException var0);
}
