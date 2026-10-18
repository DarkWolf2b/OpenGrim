package sixtwo;

import java.lang.invoke.MethodHandles;

public class rk {
   private int zBOEu;
   private float fjEKi;
   private rj mYwgX;
   private long ZwnAr;
   private float gESFz;
   private float egDEL;
   private boolean xIqZY;
   private boolean WdkXD;
   private static String[] bradt;
   private static final long wRIZt = gb.aYR(-6083727380241001860L, -4613429592943998361L, MethodHandles.lookup().lookupClass()).a(136086932182178L);

   public rk(int var1) {
      this(var1, 0.0F);
   }

   public rk(int var1, float var2) {
      this(var1, var2, rj.Xmkbr);
   }

   public rk(int var1, float var2, rj var3) {
      this.zBOEu = var1;
      this.mYwgX = var3;
      this.fjEKi = var2;
      this.gESFz = var2;
      this.egDEL = var2;
      this.xIqZY = true;
      this.ZwnAr = 0L;
      this.WdkXD = false;
   }

   static {
      if (dhz() != null) {
         dhy(new String[1]);
      }
   }

   public int dhi() {
      return this.zBOEu;
   }

   public float dhd(float param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rk.wRIZt J
      // 03: ldc2_w 77112675038952
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/rk.dhz ()[Ljava/lang/String;
      // 0b: invokestatic java/lang/System.currentTimeMillis ()J
      // 0e: lstore 5
      // 10: astore 4
      // 12: fload 1
      // 13: aload 0
      // 14: getfield sixtwo/rk.egDEL F
      // 17: fcmpl
      // 18: aload 4
      // 1a: ifnonnull 56
      // 1d: ifeq 46
      // 20: goto 27
      // 23: invokestatic sixtwo/rk.dhA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 0
      // 28: aload 0
      // 29: getfield sixtwo/rk.fjEKi F
      // 2c: putfield sixtwo/rk.gESFz F
      // 2f: aload 0
      // 30: fload 1
      // 31: putfield sixtwo/rk.egDEL F
      // 34: aload 0
      // 35: lload 5
      // 37: putfield sixtwo/rk.ZwnAr J
      // 3a: aload 0
      // 3b: bipush 0
      // 3c: putfield sixtwo/rk.xIqZY Z
      // 3f: goto 46
      // 42: invokestatic sixtwo/rk.dhA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 45: athrow
      // 46: aload 0
      // 47: aload 4
      // 49: ifnonnull 6e
      // 4c: getfield sixtwo/rk.zBOEu I
      // 4f: goto 56
      // 52: invokestatic sixtwo/rk.dhA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 55: athrow
      // 56: ifgt 72
      // 59: aload 0
      // 5a: aload 0
      // 5b: getfield sixtwo/rk.egDEL F
      // 5e: putfield sixtwo/rk.fjEKi F
      // 61: aload 0
      // 62: bipush 1
      // 63: putfield sixtwo/rk.xIqZY Z
      // 66: aload 0
      // 67: goto 6e
      // 6a: invokestatic sixtwo/rk.dhA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6d: athrow
      // 6e: getfield sixtwo/rk.fjEKi F
      // 71: freturn
      // 72: lload 5
      // 74: aload 0
      // 75: getfield sixtwo/rk.ZwnAr J
      // 78: lsub
      // 79: lstore 7
      // 7b: lload 7
      // 7d: aload 4
      // 7f: ifnonnull aa
      // 82: aload 0
      // 83: getfield sixtwo/rk.zBOEu I
      // 86: i2l
      // 87: lcmp
      // 88: iflt a8
      // 8b: goto 92
      // 8e: invokestatic sixtwo/rk.dhA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 91: athrow
      // 92: aload 0
      // 93: aload 0
      // 94: getfield sixtwo/rk.egDEL F
      // 97: putfield sixtwo/rk.fjEKi F
      // 9a: aload 0
      // 9b: bipush 1
      // 9c: putfield sixtwo/rk.xIqZY Z
      // 9f: aload 0
      // a0: getfield sixtwo/rk.fjEKi F
      // a3: freturn
      // a4: invokestatic sixtwo/rk.dhA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a7: athrow
      // a8: lload 7
      // aa: l2f
      // ab: aload 0
      // ac: getfield sixtwo/rk.zBOEu I
      // af: i2f
      // b0: fdiv
      // b1: fstore 9
      // b3: aload 0
      // b4: getfield sixtwo/rk.mYwgX Lsixtwo/rj;
      // b7: fload 9
      // b9: fconst_0
      // ba: fconst_1
      // bb: fconst_1
      // bc: invokevirtual sixtwo/rj.dga (FFFF)F
      // bf: fstore 10
      // c1: aload 0
      // c2: aload 0
      // c3: getfield sixtwo/rk.gESFz F
      // c6: aload 0
      // c7: getfield sixtwo/rk.egDEL F
      // ca: aload 0
      // cb: getfield sixtwo/rk.gESFz F
      // ce: fsub
      // cf: fload 10
      // d1: fmul
      // d2: fadd
      // d3: putfield sixtwo/rk.fjEKi F
      // d6: aload 0
      // d7: getfield sixtwo/rk.fjEKi F
      // da: freturn
   }

   public boolean dhp() {
      return this.WdkXD;
   }

   public rk dht(long var1) {
      this.ZwnAr = var1;
      return this;
   }

   public rk dhv(float var1) {
      this.egDEL = var1;
      return this;
   }

   public rk dhx(boolean var1) {
      this.WdkXD = var1;
      return this;
   }

   public rj dhk() {
      return this.mYwgX;
   }

   public long dhl() {
      return this.ZwnAr;
   }

   public boolean dho() {
      return this.xIqZY;
   }

   public rk dhq(int var1) {
      this.zBOEu = var1;
      return this;
   }

   public rk dhw(boolean var1) {
      this.xIqZY = var1;
      return this;
   }

   private static MatchException dhA(MatchException var0) {
      return var0;
   }

   public static String[] dhz() {
      return bradt;
   }

   public void dhf(float var1) {
      this.fjEKi = var1;
      this.gESFz = var1;
      this.egDEL = var1;
      this.xIqZY = true;
      this.ZwnAr = System.currentTimeMillis();
      this.WdkXD = true;
   }

   public float dhm() {
      return this.gESFz;
   }

   public static void dhy(String[] var0) {
      bradt = var0;
   }

   public float dhn() {
      return this.egDEL;
   }

   public void dhg() {
      this.dhe(0.0F);
   }

   public rk dhu(float var1) {
      this.gESFz = var1;
      return this;
   }

   public rk dhr(float var1) {
      this.fjEKi = var1;
      return this;
   }

   public float dhh(float param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/rk.wRIZt J
      // 003: ldc2_w 8849058357231
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/rk.dhz ()[Ljava/lang/String;
      // 00b: invokestatic java/lang/System.currentTimeMillis ()J
      // 00e: lstore 5
      // 010: astore 4
      // 012: aload 0
      // 013: getfield sixtwo/rk.WdkXD Z
      // 016: aload 4
      // 018: ifnonnull 053
      // 01b: ifne 04d
      // 01e: goto 025
      // 021: invokestatic sixtwo/rk.dhA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 024: athrow
      // 025: aload 0
      // 026: bipush 1
      // 027: putfield sixtwo/rk.WdkXD Z
      // 02a: aload 0
      // 02b: fload 1
      // 02c: putfield sixtwo/rk.fjEKi F
      // 02f: aload 0
      // 030: fload 1
      // 031: putfield sixtwo/rk.gESFz F
      // 034: aload 0
      // 035: fload 1
      // 036: putfield sixtwo/rk.egDEL F
      // 039: aload 0
      // 03a: bipush 1
      // 03b: putfield sixtwo/rk.xIqZY Z
      // 03e: aload 0
      // 03f: lload 5
      // 041: putfield sixtwo/rk.ZwnAr J
      // 044: aload 0
      // 045: getfield sixtwo/rk.fjEKi F
      // 048: freturn
      // 049: invokestatic sixtwo/rk.dhA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 04c: athrow
      // 04d: fload 1
      // 04e: aload 0
      // 04f: getfield sixtwo/rk.egDEL F
      // 052: fcmpl
      // 053: aload 4
      // 055: ifnonnull 091
      // 058: ifeq 081
      // 05b: goto 062
      // 05e: invokestatic sixtwo/rk.dhA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 061: athrow
      // 062: aload 0
      // 063: aload 0
      // 064: getfield sixtwo/rk.fjEKi F
      // 067: putfield sixtwo/rk.gESFz F
      // 06a: aload 0
      // 06b: fload 1
      // 06c: putfield sixtwo/rk.egDEL F
      // 06f: aload 0
      // 070: lload 5
      // 072: putfield sixtwo/rk.ZwnAr J
      // 075: aload 0
      // 076: bipush 0
      // 077: putfield sixtwo/rk.xIqZY Z
      // 07a: goto 081
      // 07d: invokestatic sixtwo/rk.dhA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 080: athrow
      // 081: aload 0
      // 082: aload 4
      // 084: ifnonnull 0a9
      // 087: getfield sixtwo/rk.zBOEu I
      // 08a: goto 091
      // 08d: invokestatic sixtwo/rk.dhA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 090: athrow
      // 091: ifgt 0ad
      // 094: aload 0
      // 095: aload 0
      // 096: getfield sixtwo/rk.egDEL F
      // 099: putfield sixtwo/rk.fjEKi F
      // 09c: aload 0
      // 09d: bipush 1
      // 09e: putfield sixtwo/rk.xIqZY Z
      // 0a1: aload 0
      // 0a2: goto 0a9
      // 0a5: invokestatic sixtwo/rk.dhA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a8: athrow
      // 0a9: getfield sixtwo/rk.fjEKi F
      // 0ac: freturn
      // 0ad: lload 5
      // 0af: aload 0
      // 0b0: getfield sixtwo/rk.ZwnAr J
      // 0b3: lsub
      // 0b4: lstore 7
      // 0b6: lload 7
      // 0b8: aload 4
      // 0ba: ifnonnull 0e5
      // 0bd: aload 0
      // 0be: getfield sixtwo/rk.zBOEu I
      // 0c1: i2l
      // 0c2: lcmp
      // 0c3: iflt 0e3
      // 0c6: goto 0cd
      // 0c9: invokestatic sixtwo/rk.dhA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0cc: athrow
      // 0cd: aload 0
      // 0ce: aload 0
      // 0cf: getfield sixtwo/rk.egDEL F
      // 0d2: putfield sixtwo/rk.fjEKi F
      // 0d5: aload 0
      // 0d6: bipush 1
      // 0d7: putfield sixtwo/rk.xIqZY Z
      // 0da: aload 0
      // 0db: getfield sixtwo/rk.fjEKi F
      // 0de: freturn
      // 0df: invokestatic sixtwo/rk.dhA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e2: athrow
      // 0e3: lload 7
      // 0e5: l2f
      // 0e6: aload 0
      // 0e7: getfield sixtwo/rk.zBOEu I
      // 0ea: i2f
      // 0eb: fdiv
      // 0ec: fstore 9
      // 0ee: aload 0
      // 0ef: getfield sixtwo/rk.mYwgX Lsixtwo/rj;
      // 0f2: fload 9
      // 0f4: fconst_0
      // 0f5: fconst_1
      // 0f6: fconst_1
      // 0f7: invokevirtual sixtwo/rj.dga (FFFF)F
      // 0fa: fstore 10
      // 0fc: aload 0
      // 0fd: aload 0
      // 0fe: getfield sixtwo/rk.gESFz F
      // 101: aload 0
      // 102: getfield sixtwo/rk.egDEL F
      // 105: aload 0
      // 106: getfield sixtwo/rk.gESFz F
      // 109: fsub
      // 10a: fload 10
      // 10c: fmul
      // 10d: fadd
      // 10e: putfield sixtwo/rk.fjEKi F
      // 111: aload 0
      // 112: getfield sixtwo/rk.fjEKi F
      // 115: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 118: ifnonnull 129
      // 11b: bipush 5
      // 11c: anewarray 102
      // 11f: invokestatic sixtwo/rk.dhy ([Ljava/lang/String;)V
      // 122: goto 129
      // 125: invokestatic sixtwo/rk.dhA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 128: athrow
      // 129: freturn
   }

   public float dhj() {
      return this.fjEKi;
   }

   public void dhc(boolean var1) {
      long var2 = wRIZt ^ 95846405937159L;

      rk var10000;
      float var10001;
      label17: {
         try {
            var10000 = this;
            if (var1) {
               var10001 = 1.0F;
               break label17;
            }
         } catch (MatchException var4) {
            throw dhA(var4);
         }

         var10001 = 0.0F;
      }

      var10000.dhd(var10001);
   }

   public void dhe(float var1) {
      this.fjEKi = var1;
      this.gESFz = var1;
      this.egDEL = var1;
      this.xIqZY = true;
      this.ZwnAr = System.currentTimeMillis();
      this.WdkXD = true;
   }

   public rk dhs(rj var1) {
      this.mYwgX = var1;
      return this;
   }
}
