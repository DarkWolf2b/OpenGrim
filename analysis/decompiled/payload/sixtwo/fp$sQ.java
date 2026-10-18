package sixtwo;

import native.Loader;
import net.minecraft.class_2596;

public class fp$sQ {
   final fp mEqah;
   private static long rAQCM;

   private static native boolean doZ(class_2596 var0);

   private static native void dpa(class_2596 var0);

   private static native MatchException dpb(MatchException var0);

   @hG
   public void doY(gG param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/fp$sQ.rAQCM J
      // 03: ldc2_w 99690750451098
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/fg.aIW ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/fp$sQ.mEqah Lsixtwo/fp;
      // 11: invokestatic sixtwo/fp.aMu (Lsixtwo/fp;)Z
      // 14: aload 4
      // 16: ifnonnull 45
      // 19: ifne 32
      // 1c: goto 23
      // 1f: invokestatic sixtwo/fp$sQ.dpb (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: aload 0
      // 24: getfield sixtwo/fp$sQ.mEqah Lsixtwo/fp;
      // 27: bipush 1
      // 28: bipush 1
      // 29: bipush 1
      // 2a: invokevirtual sixtwo/fp.aLP (ZZZ)V
      // 2d: return
      // 2e: invokestatic sixtwo/fp$sQ.dpb (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: aload 0
      // 33: getfield sixtwo/fp$sQ.mEqah Lsixtwo/fp;
      // 36: aload 4
      // 38: ifnonnull 67
      // 3b: invokevirtual sixtwo/fp.aLS ()Z
      // 3e: goto 45
      // 41: invokestatic sixtwo/fp$sQ.dpb (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: ifeq 5c
      // 48: aload 0
      // 49: getfield sixtwo/fp$sQ.mEqah Lsixtwo/fp;
      // 4c: bipush 0
      // 4d: invokevirtual sixtwo/fp.aLN (Z)V
      // 50: aload 4
      // 52: ifnull 6d
      // 55: goto 5c
      // 58: invokestatic sixtwo/fp$sQ.dpb (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5b: athrow
      // 5c: aload 0
      // 5d: getfield sixtwo/fp$sQ.mEqah Lsixtwo/fp;
      // 60: goto 67
      // 63: invokestatic sixtwo/fp$sQ.dpb (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 66: athrow
      // 67: bipush 1
      // 68: bipush 0
      // 69: bipush 1
      // 6a: invokevirtual sixtwo/fp.aLP (ZZZ)V
      // 6d: aload 0
      // 6e: getfield sixtwo/fp$sQ.mEqah Lsixtwo/fp;
      // 71: getfield sixtwo/fp.cDqQL Ljava/util/concurrent/ConcurrentLinkedQueue;
      // 74: invokedynamic test ()Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, sixtwo/fp$sQ.doZ (Lnet/minecraft/class_2596;)Z, (Lnet/minecraft/class_2596;)Z ]
      // 79: invokevirtual java/util/concurrent/ConcurrentLinkedQueue.removeIf (Ljava/util/function/Predicate;)Z
      // 7c: pop
      // 7d: aload 0
      // 7e: getfield sixtwo/fp$sQ.mEqah Lsixtwo/fp;
      // 81: getfield sixtwo/fp.cDqQL Ljava/util/concurrent/ConcurrentLinkedQueue;
      // 84: invokevirtual java/util/concurrent/ConcurrentLinkedQueue.isEmpty ()Z
      // 87: aload 4
      // 89: ifnonnull b3
      // 8c: ifeq e5
      // 8f: goto 96
      // 92: invokestatic sixtwo/fp$sQ.dpb (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 95: athrow
      // 96: aload 0
      // 97: getfield sixtwo/fp$sQ.mEqah Lsixtwo/fp;
      // 9a: aload 4
      // 9c: ifnonnull d5
      // 9f: goto a6
      // a2: invokestatic sixtwo/fp$sQ.dpb (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a5: athrow
      // a6: getfield sixtwo/fp.UlcPe Ljava/util/concurrent/ConcurrentLinkedQueue;
      // a9: invokevirtual java/util/concurrent/ConcurrentLinkedQueue.isEmpty ()Z
      // ac: goto b3
      // af: invokestatic sixtwo/fp$sQ.dpb (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b2: athrow
      // b3: ifeq e5
      // b6: aload 0
      // b7: getfield sixtwo/fp$sQ.mEqah Lsixtwo/fp;
      // ba: aload 0
      // bb: getfield sixtwo/fp$sQ.mEqah Lsixtwo/fp;
      // be: getfield sixtwo/fp.yNflG Lsixtwo/cA;
      // c1: invokevirtual sixtwo/cA.UN ()Ljava/lang/Number;
      // c4: invokevirtual java/lang/Number.intValue ()I
      // c7: putfield sixtwo/fp.heFtE I
      // ca: aload 0
      // cb: getfield sixtwo/fp$sQ.mEqah Lsixtwo/fp;
      // ce: goto d5
      // d1: invokestatic sixtwo/fp$sQ.dpb (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d4: athrow
      // d5: aload 0
      // d6: getfield sixtwo/fp$sQ.mEqah Lsixtwo/fp;
      // d9: getfield sixtwo/fp.AJNZt Lsixtwo/cA;
      // dc: invokevirtual sixtwo/cA.UN ()Ljava/lang/Number;
      // df: invokevirtual java/lang/Number.intValue ()I
      // e2: putfield sixtwo/fp.fNonW I
      // e5: return
   }

   public fp$sQ(fp var1) {
      this.mEqah = var1;
      hF.bdI(this);
   }

   static {
      Loader.doInit(fp$sQ.class);
      _2db8ec2939b94b3ea880a84b6606dbb5();
   }

   private static native void _2db8ec2939b94b3ea880a84b6606dbb5();
}
