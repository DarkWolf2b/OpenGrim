package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.function.Supplier;

public abstract class aE extends az {
   private static final Map<Class<? extends aE>, aE> CaoaN = new ConcurrentHashMap<>();
   protected List<az> LGwHI;
   protected int[] YYZes;
   private static iS[] APvXi;
   private static final long OvxDD = gb.aYR(-2692304497950348839L, 8007589828775926486L, MethodHandles.lookup().lookupClass()).a(227607518144727L);

   public aE(int[] var1) {
      long var2 = OvxDD ^ 86812701191673L;
      vG();
      super();

      try {
         this.LGwHI = new CopyOnWriteArrayList<>();
         this.YYZes = var1;
         if (iS.bwL() == null) {
            vF(new iS[5]);
         }
      } catch (MatchException var5) {
         throw vH(var5);
      }
   }

   static {
      vF(null);
   }

   @Override
   public void dl(double var1, double var3, mA var5) {
      long var6 = OvxDD ^ 35025586798735L;
      iS[] var10000 = vG();
      Iterator var9 = this.LGwHI.iterator();
      iS[] var8 = var10000;

      while (var9.hasNext()) {
         az var10 = (az)var9.next();
         var10.dl(var1, var3, var5);
         if (var8 != null) {
            break;
         }
      }
   }

   @Override
   public boolean dk(double param1, double param3, mA param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/aE.OvxDD J
      // 03: ldc2_w 120293882144246
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/aE.vG ()[Lsixtwo/iS;
      // 0c: invokestatic sixtwo/bl.Ex ()Lsixtwo/bl;
      // 0f: invokevirtual sixtwo/bl.ED ()Lsixtwo/bi;
      // 12: astore 9
      // 14: astore 8
      // 16: aload 9
      // 18: dload 1
      // 19: dload 3
      // 1a: invokevirtual sixtwo/bi.Dw (DD)Z
      // 1d: aload 8
      // 1f: ifnonnull 2d
      // 22: ifne 2e
      // 25: goto 2c
      // 28: invokestatic sixtwo/aE.vH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: bipush 0
      // 2d: ireturn
      // 2e: aload 0
      // 2f: getfield sixtwo/aE.LGwHI Ljava/util/List;
      // 32: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 37: astore 10
      // 39: aload 10
      // 3b: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 40: ifeq bb
      // 43: aload 10
      // 45: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 4a: checkcast sixtwo/az
      // 4d: astore 11
      // 4f: aload 11
      // 51: invokevirtual sixtwo/az.tf ()Z
      // 54: aload 8
      // 56: ifnonnull c3
      // 59: aload 8
      // 5b: ifnonnull a5
      // 5e: goto 65
      // 61: invokestatic sixtwo/aE.vH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 64: athrow
      // 65: ifeq 9c
      // 68: goto 6f
      // 6b: invokestatic sixtwo/aE.vH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6e: athrow
      // 6f: invokestatic sixtwo/bl.Ex ()Lsixtwo/bl;
      // 72: invokevirtual sixtwo/bl.ED ()Lsixtwo/bi;
      // 75: aload 11
      // 77: invokevirtual sixtwo/bi.Dv (Lsixtwo/az;)Z
      // 7a: aload 8
      // 7c: ifnonnull a5
      // 7f: goto 86
      // 82: invokestatic sixtwo/aE.vH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 85: athrow
      // 86: ifne 9c
      // 89: goto 90
      // 8c: invokestatic sixtwo/aE.vH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8f: athrow
      // 90: aload 8
      // 92: ifnull 39
      // 95: goto 9c
      // 98: invokestatic sixtwo/aE.vH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9b: athrow
      // 9c: aload 11
      // 9e: dload 1
      // 9f: dload 3
      // a0: aload 5
      // a2: invokevirtual sixtwo/az.dk (DDLsixtwo/mA;)Z
      // a5: aload 8
      // a7: ifnonnull b5
      // aa: ifeq b6
      // ad: goto b4
      // b0: invokestatic sixtwo/aE.vH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b3: athrow
      // b4: bipush 1
      // b5: ireturn
      // b6: aload 8
      // b8: ifnull 39
      // bb: aload 0
      // bc: dload 1
      // bd: dload 3
      // be: aload 5
      // c0: invokespecial sixtwo/az.dk (DDLsixtwo/mA;)Z
      // c3: ireturn
   }

   @Override
   public void bV(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/aE.OvxDD J
      // 03: ldc2_w 53866719932722
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/aE.vG ()[Lsixtwo/iS;
      // 0b: aload 0
      // 0c: getfield sixtwo/aE.LGwHI Ljava/util/List;
      // 0f: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 14: astore 5
      // 16: astore 4
      // 18: aload 5
      // 1a: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 1f: ifeq 59
      // 22: aload 5
      // 24: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 29: checkcast sixtwo/az
      // 2c: astore 6
      // 2e: aload 6
      // 30: aload 4
      // 32: ifnonnull 50
      // 35: invokestatic sixtwo/jG.bHY (Lsixtwo/az;)Z
      // 38: ifne 4e
      // 3b: goto 42
      // 3e: invokestatic sixtwo/aE.vH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: aload 4
      // 44: ifnull 18
      // 47: goto 4e
      // 4a: invokestatic sixtwo/aE.vH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4d: athrow
      // 4e: aload 6
      // 50: aload 1
      // 51: invokevirtual sixtwo/az.su (Lsixtwo/lC;)V
      // 54: aload 4
      // 56: ifnull 18
      // 59: return
   }

   public abstract void tP(lC var1, float var2, al var3);

   public static iS[] vG() {
      return APvXi;
   }

   public List<az> vC() {
      return this.LGwHI;
   }

   public static void vF(iS[] var0) {
      APvXi = var0;
   }

   private static MatchException vH(MatchException var0) {
      return var0;
   }

   public int[] vD() {
      return this.YYZes;
   }

   public static <T extends aE> T vB(Class<T> var0, Supplier<T> var1) {
      return (T)var0.cast(CaoaN.computeIfAbsent(var0, var1x -> (aE)var1.get()));
   }

   public static <T extends aE> T vA(Class<T> var0) {
      return (T)var0.cast(CaoaN.get(var0));
   }
}
