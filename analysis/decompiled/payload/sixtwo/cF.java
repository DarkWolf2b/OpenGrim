package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.MethodHandles;
import java.util.Arrays;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Set;
import java.util.stream.Collectors;
import net.minecraft.class_1297;
import net.minecraft.class_1299;

public class cF extends cB {
   private Set<class_1299<? extends class_1297>> AcnID = new LinkedHashSet<>();
   private Set<class_1299<? extends class_1297>> sulLA = new LinkedHashSet<>();
   private static final long MRNxb = gb.aYR(239314320164638091L, -21656609510465895L, MethodHandles.lookup().lookupClass()).a(162609858617285L);

   public cF(mr var1) {
      super(var1);
      this.sulLA.add(class_1299.field_6097);
   }

   public cF(iS var1, mr var2) {
      this(var2);
      this.Vg(var1);
   }

   public cF VS(jg$tJ var1) {
      long var2 = MRNxb ^ 91948943521210L;

      Set var10000;
      label21: {
         label20: {
            try {
               switch (cF$sn.riatK[var1.ordinal()]) {
                  case 1:
                     var10000 = jg.fbEDU;
                     break label21;
                  case 2:
                     break label20;
               }
            } catch (MatchException var5) {
               throw Wd(var5);
            }

            var10000 = jg.hZYeV;
            break label21;
         }

         var10000 = jg.skTlu;
      }

      Set var4 = var10000;
      this.AcnID.clear();
      this.AcnID.addAll(var4);
      return this;
   }

   public void VU(class_1299<? extends class_1297> param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cF.MRNxb J
      // 03: ldc2_w 10027870622366
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vt ()Z
      // 0b: istore 4
      // 0d: aload 0
      // 0e: iload 4
      // 10: ifeq 2e
      // 13: getfield sixtwo/cF.sulLA Ljava/util/Set;
      // 16: aload 1
      // 17: invokeinterface java/util/Set.add (Ljava/lang/Object;)Z 2
      // 1c: ifeq 31
      // 1f: goto 26
      // 22: invokestatic sixtwo/cF.Wd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: goto 2e
      // 2a: invokestatic sixtwo/cF.Wd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: invokevirtual sixtwo/cF.Vk ()V
      // 31: return
   }

   public Set<class_1299<? extends class_1297>> VZ() {
      return this.sulLA;
   }

   public cF Wb(Set<class_1299<? extends class_1297>> var1) {
      this.sulLA = var1;
      return this;
   }

   public Set<class_1299<? extends class_1297>> VY() {
      return this.AcnID;
   }

   @Override
   public void SS(JsonElement param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cF.MRNxb J
      // 03: ldc2_w 3683354368281
      // 06: lxor
      // 07: lstore 2
      // 08: new java/util/LinkedHashSet
      // 0b: dup
      // 0c: invokespecial java/util/LinkedHashSet.<init> ()V
      // 0f: astore 5
      // 11: invokestatic sixtwo/cB.Vt ()Z
      // 14: aload 1
      // 15: invokevirtual com/google/gson/JsonElement.getAsJsonArray ()Lcom/google/gson/JsonArray;
      // 18: invokevirtual com/google/gson/JsonArray.iterator ()Ljava/util/Iterator;
      // 1b: astore 6
      // 1d: istore 4
      // 1f: aload 6
      // 21: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 26: ifeq ac
      // 29: aload 6
      // 2b: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 30: checkcast com/google/gson/JsonElement
      // 33: astore 7
      // 35: aload 7
      // 37: invokevirtual com/google/gson/JsonElement.getAsString ()Ljava/lang/String;
      // 3a: astore 8
      // 3c: aload 0
      // 3d: getfield sixtwo/cF.AcnID Ljava/util/Set;
      // 40: iload 4
      // 42: ifeq d4
      // 45: invokeinterface java/util/Set.iterator ()Ljava/util/Iterator; 1
      // 4a: astore 9
      // 4c: aload 9
      // 4e: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 53: ifeq a7
      // 56: aload 9
      // 58: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 5d: checkcast net/minecraft/class_1299
      // 60: astore 10
      // 62: aload 10
      // 64: invokevirtual net/minecraft/class_1299.method_5897 ()Lnet/minecraft/class_2561;
      // 67: invokeinterface net/minecraft/class_2561.getString ()Ljava/lang/String; 1
      // 6c: aload 8
      // 6e: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 71: iload 4
      // 73: ifeq 26
      // 76: iload 4
      // 78: ifeq 95
      // 7b: ifeq 9b
      // 7e: goto 85
      // 81: invokestatic sixtwo/cF.Wd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 84: athrow
      // 85: aload 5
      // 87: aload 10
      // 89: invokeinterface java/util/Set.add (Ljava/lang/Object;)Z 2
      // 8e: goto 95
      // 91: invokestatic sixtwo/cF.Wd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 94: athrow
      // 95: pop
      // 96: iload 4
      // 98: ifne a7
      // 9b: iload 4
      // 9d: ifne 4c
      // a0: goto a7
      // a3: invokestatic sixtwo/cF.Wd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a6: athrow
      // a7: iload 4
      // a9: ifne 1f
      // ac: aload 5
      // ae: aload 0
      // af: getfield sixtwo/cF.sulLA Ljava/util/Set;
      // b2: invokeinterface java/util/Set.equals (Ljava/lang/Object;)Z 2
      // b7: iload 4
      // b9: ifeq db
      // bc: ifeq c7
      // bf: goto c6
      // c2: invokestatic sixtwo/cF.Wd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c5: athrow
      // c6: return
      // c7: aload 0
      // c8: getfield sixtwo/cF.sulLA Ljava/util/Set;
      // cb: invokeinterface java/util/Set.clear ()V 1
      // d0: aload 0
      // d1: getfield sixtwo/cF.sulLA Ljava/util/Set;
      // d4: aload 5
      // d6: invokeinterface java/util/Set.addAll (Ljava/util/Collection;)Z 2
      // db: pop
      // dc: aload 0
      // dd: invokevirtual sixtwo/cF.Vk ()V
      // e0: return
   }

   @SafeVarargs
   public final cF VT(class_1299<? extends class_1297>... var1) {
      this.AcnID.addAll(Set.of(var1));
      return this;
   }

   public void VV(class_1299<? extends class_1297> param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cF.MRNxb J
      // 03: ldc2_w 308669162467
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vu ()Z
      // 0b: istore 4
      // 0d: aload 0
      // 0e: iload 4
      // 10: ifne 2e
      // 13: getfield sixtwo/cF.sulLA Ljava/util/Set;
      // 16: aload 1
      // 17: invokeinterface java/util/Set.remove (Ljava/lang/Object;)Z 2
      // 1c: ifeq 31
      // 1f: goto 26
      // 22: invokestatic sixtwo/cF.Wd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: goto 2e
      // 2a: invokestatic sixtwo/cF.Wd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: invokevirtual sixtwo/cF.Vk ()V
      // 31: return
   }

   public boolean VW(class_1299<? extends class_1297> var1) {
      return this.sulLA.contains(var1);
   }

   private static MatchException Wd(MatchException var0) {
      return var0;
   }

   public cF Wa(Set<class_1299<? extends class_1297>> var1) {
      this.AcnID = var1;
      return this;
   }

   @Override
   public void SR(Map<String, Object> var1) {
      Set var2 = this.sulLA.stream().map(var0 -> var0.method_5897().getString()).collect(Collectors.toSet());
      var1.put(Arrays.toString(this.NwlSF), var2);
   }

   public boolean VX(class_1297 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cF.MRNxb J
      // 03: ldc2_w 130190389713735
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vt ()Z
      // 0b: istore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/cF.sulLA Ljava/util/Set;
      // 11: invokeinterface java/util/Set.isEmpty ()Z 1
      // 16: iload 4
      // 18: ifeq 49
      // 1b: ifne 48
      // 1e: goto 25
      // 21: invokestatic sixtwo/cF.Wd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: aload 0
      // 26: getfield sixtwo/cF.AcnID Ljava/util/Set;
      // 29: aload 1
      // 2a: invokevirtual net/minecraft/class_1297.method_5864 ()Lnet/minecraft/class_1299;
      // 2d: invokeinterface java/util/Set.contains (Ljava/lang/Object;)Z 2
      // 32: iload 4
      // 34: ifeq 57
      // 37: goto 3e
      // 3a: invokestatic sixtwo/cF.Wd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: ifne 4a
      // 41: goto 48
      // 44: invokestatic sixtwo/cF.Wd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: bipush 0
      // 49: ireturn
      // 4a: aload 0
      // 4b: getfield sixtwo/cF.sulLA Ljava/util/Set;
      // 4e: aload 1
      // 4f: invokevirtual net/minecraft/class_1297.method_5864 ()Lnet/minecraft/class_1299;
      // 52: invokeinterface java/util/Set.contains (Ljava/lang/Object;)Z 2
      // 57: ireturn
   }
}
