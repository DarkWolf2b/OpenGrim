package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.function.Supplier;

public abstract class cB {
   private static final ThreadLocal<cB$sm> BgpvM = new ThreadLocal<>();
   private static final ThreadLocal<Boolean> qrjFk = new ThreadLocal<>();
   protected final int[] NwlSF;
   protected final List<Runnable> PMSMO = new ArrayList<>();
   protected final List<Runnable> aFqYe = new ArrayList<>();
   protected Supplier<Boolean> uexTC = () -> true;
   private static boolean WVYkD;
   private static final long LcOyM = gb.aYR(3762902164579098143L, 1918968295152562278L, MethodHandles.lookup().lookupClass()).a(202678185734377L);

   public cB(mr var1) {
      this.NwlSF = var1.clT();
   }

   public cB(iS var1, mr var2) {
      this(var2);
      this.Vg(var1);
   }

   static {
      Vs(true);
   }

   public int[] Vm() {
      return this.NwlSF;
   }

   public <T extends cB> T Vd(Runnable var1) {
      this.PMSMO.add(var1);
      return (T)this;
   }

   public static void Vi(Runnable var0) {
      Vj(var0, true);
   }

   public static void Vh(Runnable var0) {
      Vj(var0, false);
   }

   private static void Vj(Runnable param0, boolean param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cB.LcOyM J
      // 003: ldc2_w 68522431240534
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/cB.Vu ()Z
      // 00b: getstatic sixtwo/cB.BgpvM Ljava/lang/ThreadLocal;
      // 00e: invokevirtual java/lang/ThreadLocal.get ()Ljava/lang/Object;
      // 011: checkcast sixtwo/cB$sm
      // 014: astore 5
      // 016: istore 4
      // 018: aload 5
      // 01a: iload 4
      // 01c: ifne 063
      // 01f: ifnonnull 03a
      // 022: goto 029
      // 025: invokestatic sixtwo/cB.Vv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 028: athrow
      // 029: new sixtwo/cB$sm
      // 02c: dup
      // 02d: invokespecial sixtwo/cB$sm.<init> ()V
      // 030: astore 5
      // 032: getstatic sixtwo/cB.BgpvM Ljava/lang/ThreadLocal;
      // 035: aload 5
      // 037: invokevirtual java/lang/ThreadLocal.set (Ljava/lang/Object;)V
      // 03a: aload 5
      // 03c: dup
      // 03d: getfield sixtwo/cB$sm.oTCWD Z
      // 040: iload 1
      // 041: ior
      // 042: putfield sixtwo/cB$sm.oTCWD Z
      // 045: aload 5
      // 047: dup
      // 048: getfield sixtwo/cB$sm.Gkoov I
      // 04b: bipush 1
      // 04c: iadd
      // 04d: putfield sixtwo/cB$sm.Gkoov I
      // 050: aload 0
      // 051: invokeinterface java/lang/Runnable.run ()V 1
      // 056: aload 5
      // 058: dup
      // 059: getfield sixtwo/cB$sm.Gkoov I
      // 05c: bipush 1
      // 05d: isub
      // 05e: putfield sixtwo/cB$sm.Gkoov I
      // 061: aload 5
      // 063: iload 4
      // 065: ifne 07e
      // 068: getfield sixtwo/cB$sm.Gkoov I
      // 06b: ifne 132
      // 06e: goto 075
      // 071: invokestatic sixtwo/cB.Vv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 074: athrow
      // 075: aload 5
      // 077: goto 07e
      // 07a: invokestatic sixtwo/cB.Vv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07d: athrow
      // 07e: getfield sixtwo/cB$sm.vzghL Ljava/util/Set;
      // 081: invokestatic java/util/List.copyOf (Ljava/util/Collection;)Ljava/util/List;
      // 084: astore 6
      // 086: getstatic sixtwo/cB.BgpvM Ljava/lang/ThreadLocal;
      // 089: invokevirtual java/lang/ThreadLocal.remove ()V
      // 08c: aload 6
      // 08e: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 093: astore 7
      // 095: aload 7
      // 097: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 09c: ifeq 0c6
      // 09f: aload 7
      // 0a1: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 0a6: checkcast sixtwo/cB
      // 0a9: astore 8
      // 0ab: aload 8
      // 0ad: aload 5
      // 0af: getfield sixtwo/cB$sm.oTCWD Z
      // 0b2: invokevirtual sixtwo/cB.Vl (Z)V
      // 0b5: iload 4
      // 0b7: ifne 132
      // 0ba: iload 4
      // 0bc: ifeq 095
      // 0bf: goto 0c6
      // 0c2: invokestatic sixtwo/cB.Vv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c5: athrow
      // 0c6: goto 132
      // 0c9: astore 9
      // 0cb: aload 5
      // 0cd: dup
      // 0ce: getfield sixtwo/cB$sm.Gkoov I
      // 0d1: bipush 1
      // 0d2: isub
      // 0d3: putfield sixtwo/cB$sm.Gkoov I
      // 0d6: aload 5
      // 0d8: iload 4
      // 0da: ifne 0f3
      // 0dd: getfield sixtwo/cB$sm.Gkoov I
      // 0e0: ifne 12f
      // 0e3: goto 0ea
      // 0e6: invokestatic sixtwo/cB.Vv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e9: athrow
      // 0ea: aload 5
      // 0ec: goto 0f3
      // 0ef: invokestatic sixtwo/cB.Vv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f2: athrow
      // 0f3: getfield sixtwo/cB$sm.vzghL Ljava/util/Set;
      // 0f6: invokestatic java/util/List.copyOf (Ljava/util/Collection;)Ljava/util/List;
      // 0f9: astore 10
      // 0fb: getstatic sixtwo/cB.BgpvM Ljava/lang/ThreadLocal;
      // 0fe: invokevirtual java/lang/ThreadLocal.remove ()V
      // 101: aload 10
      // 103: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 108: astore 11
      // 10a: aload 11
      // 10c: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 111: ifeq 12f
      // 114: aload 11
      // 116: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 11b: checkcast sixtwo/cB
      // 11e: astore 12
      // 120: aload 12
      // 122: aload 5
      // 124: getfield sixtwo/cB$sm.oTCWD Z
      // 127: invokevirtual sixtwo/cB.Vl (Z)V
      // 12a: iload 4
      // 12c: ifeq 10a
      // 12f: aload 9
      // 131: athrow
      // 132: return
   }

   public <T extends cB> T Ve(Runnable var1) {
      this.aFqYe.add(var1);
      return (T)this;
   }

   private static MatchException Vv(MatchException var0) {
      return var0;
   }

   public void Vg(iS var1) {
      long var2 = LcOyM ^ 27944814630664L;
      boolean var4 = Vt();

      iS var10000;
      label20: {
         try {
            var10000 = var1;
            if (!var4) {
               break label20;
            }

            if (var1 == null) {
               return;
            }
         } catch (MatchException var5) {
            throw Vv(var5);
         }

         var10000 = var1;
      }

      var10000.bwH(this);
   }

   public static boolean Vu() {
      boolean var0 = Vt();

      try {
         return !var0;
      } catch (MatchException var1) {
         throw Vv(var1);
      }
   }

   public abstract void SS(JsonElement var1);

   public Supplier<Boolean> Vp() {
      return this.uexTC;
   }

   private void Vl(boolean param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cB.LcOyM J
      // 003: ldc2_w 40054581482314
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/cB.Vt ()Z
      // 00b: getstatic sixtwo/cB.qrjFk Ljava/lang/ThreadLocal;
      // 00e: invokevirtual java/lang/ThreadLocal.get ()Ljava/lang/Object;
      // 011: checkcast java/lang/Boolean
      // 014: astore 5
      // 016: istore 4
      // 018: iload 1
      // 019: ifeq 02d
      // 01c: getstatic sixtwo/cB.qrjFk Ljava/lang/ThreadLocal;
      // 01f: bipush 1
      // 020: invokestatic java/lang/Boolean.valueOf (Z)Ljava/lang/Boolean;
      // 023: invokevirtual java/lang/ThreadLocal.set (Ljava/lang/Object;)V
      // 026: goto 02d
      // 029: invokestatic sixtwo/cB.Vv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02c: athrow
      // 02d: aload 0
      // 02e: getfield sixtwo/cB.PMSMO Ljava/util/List;
      // 031: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 036: astore 6
      // 038: aload 6
      // 03a: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 03f: ifeq 066
      // 042: aload 6
      // 044: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 049: checkcast java/lang/Runnable
      // 04c: astore 7
      // 04e: aload 7
      // 050: invokeinterface java/lang/Runnable.run ()V 1
      // 055: iload 4
      // 057: ifeq 0a3
      // 05a: iload 4
      // 05c: ifne 038
      // 05f: goto 066
      // 062: invokestatic sixtwo/cB.Vv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 065: athrow
      // 066: iload 1
      // 067: ifne 0a3
      // 06a: aload 0
      // 06b: getfield sixtwo/cB.aFqYe Ljava/util/List;
      // 06e: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 073: astore 6
      // 075: aload 6
      // 077: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 07c: ifeq 0a3
      // 07f: aload 6
      // 081: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 086: checkcast java/lang/Runnable
      // 089: astore 7
      // 08b: aload 7
      // 08d: invokeinterface java/lang/Runnable.run ()V 1
      // 092: iload 4
      // 094: ifeq 0c9
      // 097: iload 4
      // 099: ifne 075
      // 09c: goto 0a3
      // 09f: invokestatic sixtwo/cB.Vv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a2: athrow
      // 0a3: aload 5
      // 0a5: ifnonnull 0ba
      // 0a8: getstatic sixtwo/cB.qrjFk Ljava/lang/ThreadLocal;
      // 0ab: invokevirtual java/lang/ThreadLocal.remove ()V
      // 0ae: iload 4
      // 0b0: ifne 103
      // 0b3: goto 0ba
      // 0b6: invokestatic sixtwo/cB.Vv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b9: athrow
      // 0ba: getstatic sixtwo/cB.qrjFk Ljava/lang/ThreadLocal;
      // 0bd: aload 5
      // 0bf: invokevirtual java/lang/ThreadLocal.set (Ljava/lang/Object;)V
      // 0c2: goto 0c9
      // 0c5: invokestatic sixtwo/cB.Vv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c8: athrow
      // 0c9: goto 103
      // 0cc: astore 8
      // 0ce: iload 4
      // 0d0: ifeq 0ec
      // 0d3: aload 5
      // 0d5: ifnonnull 0f1
      // 0d8: goto 0df
      // 0db: invokestatic sixtwo/cB.Vv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0de: athrow
      // 0df: getstatic sixtwo/cB.qrjFk Ljava/lang/ThreadLocal;
      // 0e2: invokevirtual java/lang/ThreadLocal.remove ()V
      // 0e5: goto 0ec
      // 0e8: invokestatic sixtwo/cB.Vv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0eb: athrow
      // 0ec: iload 4
      // 0ee: ifne 100
      // 0f1: getstatic sixtwo/cB.qrjFk Ljava/lang/ThreadLocal;
      // 0f4: aload 5
      // 0f6: invokevirtual java/lang/ThreadLocal.set (Ljava/lang/Object;)V
      // 0f9: goto 100
      // 0fc: invokestatic sixtwo/cB.Vv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ff: athrow
      // 100: aload 8
      // 102: athrow
      // 103: return
   }

   public List<Runnable> Vn() {
      return this.PMSMO;
   }

   public static void Vs(boolean var0) {
      WVYkD = var0;
   }

   public static boolean Vt() {
      return WVYkD;
   }

   public List<Runnable> Vo() {
      return this.aFqYe;
   }

   protected void Vk() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cB.LcOyM J
      // 03: ldc2_w 82141916251299
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/cB.Vu ()Z
      // 0b: getstatic sixtwo/cB.BgpvM Ljava/lang/ThreadLocal;
      // 0e: invokevirtual java/lang/ThreadLocal.get ()Ljava/lang/Object;
      // 11: checkcast sixtwo/cB$sm
      // 14: astore 4
      // 16: istore 3
      // 17: iload 3
      // 18: ifne 48
      // 1b: aload 4
      // 1d: ifnull 38
      // 20: goto 27
      // 23: invokestatic sixtwo/cB.Vv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 4
      // 29: getfield sixtwo/cB$sm.vzghL Ljava/util/Set;
      // 2c: aload 0
      // 2d: invokeinterface java/util/Set.add (Ljava/lang/Object;)Z 2
      // 32: pop
      // 33: return
      // 34: invokestatic sixtwo/cB.Vv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 37: athrow
      // 38: aload 0
      // 39: getstatic java/lang/Boolean.TRUE Ljava/lang/Boolean;
      // 3c: getstatic sixtwo/cB.qrjFk Ljava/lang/ThreadLocal;
      // 3f: invokevirtual java/lang/ThreadLocal.get ()Ljava/lang/Object;
      // 42: invokevirtual java/lang/Boolean.equals (Ljava/lang/Object;)Z
      // 45: invokevirtual sixtwo/cB.Vl (Z)V
      // 48: return
   }

   public abstract void SR(Map<String, Object> var1);

   public <T extends cB> T Vf(Supplier<Boolean> var1) {
      long var2 = LcOyM ^ 130267605490322L;
      boolean var4 = Vt();

      cB var10000;
      Supplier var10001;
      label22: {
         label21: {
            try {
               var10000 = this;
               var10001 = var1;
               if (!var4) {
                  break label22;
               }

               if (var1 != null) {
                  break label21;
               }
            } catch (MatchException var5) {
               throw Vv(var5);
            }

            var10001 = () -> true;
            break label22;
         }

         var10001 = var1;
      }

      var10000.uexTC = var10001;
      return (T)this;
   }
}
