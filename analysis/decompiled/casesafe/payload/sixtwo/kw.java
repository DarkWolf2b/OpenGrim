package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_3532;

public class kw {
   private boolean aWESC;
   private boolean KKmjC;
   private float DDOla = 1.0F;
   private float gQrYP = 0.75F;
   private float ShWuN = 0.0F;
   private float TJUdw = 0.0F;
   private mG NbShj = mG.hoGuU;
   private kv sGRHh = kv.CiCMa;
   private float iXIAG = 0.75F;
   private static final long EJufu = gb.aYR(6278266694011406635L, 1906504147671339946L, MethodHandles.lookup().lookupClass()).a(62711754600401L);

   public kw bRL() {
      return bRK().bRM(this);
   }

   public kw bRP(mG var1, kv var2, float var3) {
      this.NbShj = var1;
      this.sGRHh = var2;
      this.iXIAG = class_3532.method_15363(var3, 0.0F, 1.0F);
      return this;
   }

   public static kw bRK() {
      return new kw();
   }

   public boolean bRQ() {
      return this.aWESC;
   }

   public mG bRW() {
      return this.NbShj;
   }

   public float bRY() {
      return this.iXIAG;
   }

   public kv bRX() {
      return this.sGRHh;
   }

   public kw bRM(kw param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kw.EJufu J
      // 03: ldc2_w 59999178814843
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/kt.bRw ()Z
      // 0b: istore 4
      // 0d: aload 1
      // 0e: iload 4
      // 10: ifne 6c
      // 13: ifnonnull 23
      // 16: goto 1d
      // 19: invokestatic sixtwo/kw.bRZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 0
      // 1e: areturn
      // 1f: invokestatic sixtwo/kw.bRZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: aload 0
      // 24: aload 1
      // 25: getfield sixtwo/kw.aWESC Z
      // 28: putfield sixtwo/kw.aWESC Z
      // 2b: aload 0
      // 2c: aload 1
      // 2d: getfield sixtwo/kw.KKmjC Z
      // 30: putfield sixtwo/kw.KKmjC Z
      // 33: aload 0
      // 34: aload 1
      // 35: getfield sixtwo/kw.DDOla F
      // 38: putfield sixtwo/kw.DDOla F
      // 3b: aload 0
      // 3c: aload 1
      // 3d: getfield sixtwo/kw.gQrYP F
      // 40: putfield sixtwo/kw.gQrYP F
      // 43: aload 0
      // 44: aload 1
      // 45: getfield sixtwo/kw.ShWuN F
      // 48: putfield sixtwo/kw.ShWuN F
      // 4b: aload 0
      // 4c: aload 1
      // 4d: getfield sixtwo/kw.TJUdw F
      // 50: putfield sixtwo/kw.TJUdw F
      // 53: aload 0
      // 54: aload 1
      // 55: getfield sixtwo/kw.NbShj Lsixtwo/mG;
      // 58: putfield sixtwo/kw.NbShj Lsixtwo/mG;
      // 5b: aload 0
      // 5c: aload 1
      // 5d: getfield sixtwo/kw.sGRHh Lsixtwo/kv;
      // 60: putfield sixtwo/kw.sGRHh Lsixtwo/kv;
      // 63: aload 0
      // 64: aload 1
      // 65: getfield sixtwo/kw.iXIAG F
      // 68: putfield sixtwo/kw.iXIAG F
      // 6b: aload 0
      // 6c: areturn
   }

   private static MatchException bRZ(MatchException var0) {
      return var0;
   }

   public float bRU() {
      return this.ShWuN;
   }

   public kw bRN(boolean var1) {
      this.aWESC = var1;
      return this;
   }

   public boolean bRR() {
      return this.KKmjC;
   }

   public float bRS() {
      return this.DDOla;
   }

   public float bRT() {
      return this.gQrYP;
   }

   public float bRV() {
      return this.TJUdw;
   }

   public kw bRO(float var1, float var2, float var3, float var4) {
      this.KKmjC = true;
      this.DDOla = class_3532.method_15363(var1, 0.0F, 1.0F);
      this.gQrYP = class_3532.method_15363(var2, 0.0F, 1.0F);
      this.ShWuN = class_3532.method_15363(var3, 0.0F, 1.0F);
      this.TJUdw = Math.max(var4, 0.0F);
      return this;
   }
}
