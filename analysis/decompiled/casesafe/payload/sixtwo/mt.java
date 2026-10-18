package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.PriorityQueue;

public class mt<T> {
   private final boolean iTYQP;
   private final PriorityQueue<mt$uN<T>> BvHPi = new PriorityQueue<>((var0, var1x) -> Integer.compare(var1x.cjmFK, var0.cjmFK));
   private int lHMhG = 0;
   private static final long CaFDo = gb.aYR(8874880994607976844L, 4296825732768018460L, MethodHandles.lookup().lookupClass()).a(5159262980888L);

   public mt(boolean var1) {
      this.iTYQP = var1;
   }

   public T cmd() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mt.CaFDo J
      // 03: ldc2_w 5362554543311
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/mr.clW ()[I
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/mt.BvHPi Ljava/util/PriorityQueue;
      // 10: invokevirtual java/util/PriorityQueue.isEmpty ()Z
      // 13: ifne ad
      // 16: aload 0
      // 17: getfield sixtwo/mt.BvHPi Ljava/util/PriorityQueue;
      // 1a: aload 3
      // 1b: ifnonnull b1
      // 1e: invokevirtual java/util/PriorityQueue.peek ()Ljava/lang/Object;
      // 21: aload 3
      // 22: ifnonnull cf
      // 25: goto 2c
      // 28: invokestatic sixtwo/mt.cmh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: ifnull ad
      // 2f: goto 36
      // 32: invokestatic sixtwo/mt.cmh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 35: athrow
      // 36: aload 0
      // 37: getfield sixtwo/mt.BvHPi Ljava/util/PriorityQueue;
      // 3a: invokevirtual java/util/PriorityQueue.peek ()Ljava/lang/Object;
      // 3d: checkcast sixtwo/mt$uN
      // 40: aload 3
      // 41: ifnonnull a8
      // 44: goto 4b
      // 47: invokestatic sixtwo/mt.cmh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4a: athrow
      // 4b: getfield sixtwo/mt$uN.dkmea I
      // 4e: aload 0
      // 4f: getfield sixtwo/mt.lHMhG I
      // 52: if_icmple 9a
      // 55: goto 5c
      // 58: invokestatic sixtwo/mt.cmh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5b: athrow
      // 5c: aload 0
      // 5d: getfield sixtwo/mt.iTYQP Z
      // 60: aload 3
      // 61: ifnonnull bf
      // 64: goto 6b
      // 67: invokestatic sixtwo/mt.cmh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6a: athrow
      // 6b: ifeq ad
      // 6e: goto 75
      // 71: invokestatic sixtwo/mt.cmh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 74: athrow
      // 75: aload 0
      // 76: getfield sixtwo/mt.BvHPi Ljava/util/PriorityQueue;
      // 79: invokevirtual java/util/PriorityQueue.peek ()Ljava/lang/Object;
      // 7c: checkcast sixtwo/mt$uN
      // 7f: getfield sixtwo/mt$uN.xOoyO Lsixtwo/gg;
      // 82: invokevirtual sixtwo/gg.bag ()Z
      // 85: aload 3
      // 86: ifnonnull bf
      // 89: goto 90
      // 8c: invokestatic sixtwo/mt.cmh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8f: athrow
      // 90: ifne ad
      // 93: goto 9a
      // 96: invokestatic sixtwo/mt.cmh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 99: athrow
      // 9a: aload 0
      // 9b: getfield sixtwo/mt.BvHPi Ljava/util/PriorityQueue;
      // 9e: invokevirtual java/util/PriorityQueue.poll ()Ljava/lang/Object;
      // a1: goto a8
      // a4: invokestatic sixtwo/mt.cmh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a7: athrow
      // a8: pop
      // a9: aload 3
      // aa: ifnull 0c
      // ad: aload 0
      // ae: getfield sixtwo/mt.BvHPi Ljava/util/PriorityQueue;
      // b1: aload 3
      // b2: ifnonnull cf
      // b5: invokevirtual java/util/PriorityQueue.isEmpty ()Z
      // b8: goto bf
      // bb: invokestatic sixtwo/mt.cmh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // be: athrow
      // bf: ifeq c8
      // c2: aconst_null
      // c3: areturn
      // c4: invokestatic sixtwo/mt.cmh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c7: athrow
      // c8: aload 0
      // c9: getfield sixtwo/mt.BvHPi Ljava/util/PriorityQueue;
      // cc: invokevirtual java/util/PriorityQueue.peek ()Ljava/lang/Object;
      // cf: aload 3
      // d0: ifnonnull f1
      // d3: ifnull f2
      // d6: goto dd
      // d9: invokestatic sixtwo/mt.cmh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // dc: athrow
      // dd: aload 0
      // de: getfield sixtwo/mt.BvHPi Ljava/util/PriorityQueue;
      // e1: invokevirtual java/util/PriorityQueue.peek ()Ljava/lang/Object;
      // e4: checkcast sixtwo/mt$uN
      // e7: getfield sixtwo/mt$uN.YHzBD Ljava/lang/Object;
      // ea: goto f1
      // ed: invokestatic sixtwo/mt.cmh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // f0: athrow
      // f1: areturn
      // f2: aconst_null
      // f3: areturn
   }

   private static MatchException cmh(MatchException var0) {
      return var0;
   }

   public void cmc(mt$uN<T> var1) {
      this.BvHPi.removeIf(var1x -> var1x.xOoyO.equals(var1.xOoyO));
      var1.dkmea = var1.dkmea + this.lHMhG;
      this.BvHPi.add(var1);
   }

   public void cme() {
      this.BvHPi.clear();
   }

   public void cmb(int var1) {
      this.lHMhG += var1;
   }
}
