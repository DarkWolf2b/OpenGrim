package sixtwo;

import java.lang.invoke.MethodHandles;

public record ld(float topLeft, float topRight, float bottomLeft, float bottomRight) {
   public static final ld NONE = new ld(0.0F, 0.0F, 0.0F, 0.0F);
   public static final ld M = all(6.0F);
   private static String a;
   private static final long b = gb.aYR(-1669595612824727443L, 5278967684341544382L, MethodHandles.lookup().lookupClass()).a(34424182403630L);

   static {
      b("CAKTX");
   }

   public static ld bottom(float var0, float var1) {
      return new ld(0.0F, 0.0F, var0, var1);
   }

   public static ld bottom(ld var0, ld var1) {
      return new ld(0.0F, 0.0F, var0.bottomLeft, var1.bottomRight);
   }

   public float value() {
      return this.topLeft;
   }

   @Override
   public boolean equals(Object param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ld.b J
      // 03: ldc2_w 124017529000096
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ld.b ()Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnull 25
      // 13: aload 1
      // 14: if_acmpne 24
      // 17: goto 1e
      // 1a: invokestatic sixtwo/ld.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: bipush 1
      // 1f: ireturn
      // 20: invokestatic sixtwo/ld.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aload 1
      // 25: instanceof sixtwo/ld
      // 28: aload 4
      // 2a: ifnull 4a
      // 2d: ifeq 42
      // 30: goto 37
      // 33: invokestatic sixtwo/ld.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: aload 1
      // 38: checkcast sixtwo/ld
      // 3b: astore 5
      // 3d: aload 4
      // 3f: ifnonnull 4b
      // 42: bipush 0
      // 43: goto 4a
      // 46: invokestatic sixtwo/ld.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 49: athrow
      // 4a: ireturn
      // 4b: aload 0
      // 4c: getfield sixtwo/ld.topLeft F
      // 4f: aload 5
      // 51: getfield sixtwo/ld.topLeft F
      // 54: invokestatic java/lang/Float.compare (FF)I
      // 57: aload 4
      // 59: ifnull 79
      // 5c: ifne d0
      // 5f: goto 66
      // 62: invokestatic sixtwo/ld.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 65: athrow
      // 66: aload 0
      // 67: getfield sixtwo/ld.topRight F
      // 6a: aload 5
      // 6c: getfield sixtwo/ld.topRight F
      // 6f: invokestatic java/lang/Float.compare (FF)I
      // 72: goto 79
      // 75: invokestatic sixtwo/ld.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 78: athrow
      // 79: aload 4
      // 7b: ifnull 9b
      // 7e: ifne d0
      // 81: goto 88
      // 84: invokestatic sixtwo/ld.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 87: athrow
      // 88: aload 0
      // 89: getfield sixtwo/ld.bottomLeft F
      // 8c: aload 5
      // 8e: getfield sixtwo/ld.bottomLeft F
      // 91: invokestatic java/lang/Float.compare (FF)I
      // 94: goto 9b
      // 97: invokestatic sixtwo/ld.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9a: athrow
      // 9b: aload 4
      // 9d: ifnull bd
      // a0: ifne d0
      // a3: goto aa
      // a6: invokestatic sixtwo/ld.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a9: athrow
      // aa: aload 0
      // ab: getfield sixtwo/ld.bottomRight F
      // ae: aload 5
      // b0: getfield sixtwo/ld.bottomRight F
      // b3: invokestatic java/lang/Float.compare (FF)I
      // b6: goto bd
      // b9: invokestatic sixtwo/ld.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // bc: athrow
      // bd: aload 4
      // bf: ifnull cd
      // c2: ifne d0
      // c5: goto cc
      // c8: invokestatic sixtwo/ld.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // cb: athrow
      // cc: bipush 1
      // cd: goto d1
      // d0: bipush 0
      // d1: ireturn
   }

   public ld inflate(float var1) {
      return new ld(this.topLeft + var1, this.topRight + var1, this.bottomLeft + var1, this.bottomRight + var1);
   }

   public static ld of(ld var0, ld var1, ld var2, ld var3) {
      return new ld(var0.topLeft, var1.topRight, var2.bottomLeft, var3.bottomRight);
   }

   public static ld of(ld var0) {
      return new ld(var0.topLeft, var0.topRight, var0.bottomLeft, var0.bottomRight);
   }

   public static void b(String var0) {
      a = var0;
   }

   public static String b() {
      return a;
   }

   private static MatchException a(MatchException var0) {
      return var0;
   }

   public static ld top(float var0, float var1) {
      return new ld(var0, var1, 0.0F, 0.0F);
   }

   public static ld left(float var0, float var1) {
      return new ld(var0, 0.0F, var1, 0.0F);
   }

   public static ld left(ld var0, ld var1) {
      return new ld(var0.topLeft, 0.0F, var1.bottomLeft, 0.0F);
   }

   public static ld right(ld var0, ld var1) {
      return new ld(0.0F, var0.topRight, 0.0F, var1.bottomRight);
   }

   public static ld right(ld var0) {
      return new ld(0.0F, var0.topRight, 0.0F, var0.bottomRight);
   }

   public static ld right(float var0, float var1) {
      return new ld(0.0F, var0, 0.0F, var1);
   }

   public static ld all(float var0) {
      return new ld(var0, var0, var0, var0);
   }

   public static ld onlyBottomRight(float var0) {
      return new ld(0.0F, 0.0F, 0.0F, var0);
   }

   public static ld onlyBottomLeft(float var0) {
      return new ld(0.0F, 0.0F, var0, 0.0F);
   }

   public static ld onlyTopLeft(float var0) {
      return new ld(var0, 0.0F, 0.0F, 0.0F);
   }

   public static ld onlyTopRight(float var0) {
      return new ld(0.0F, var0, 0.0F, 0.0F);
   }
}
