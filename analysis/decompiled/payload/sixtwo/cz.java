package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.MethodHandles;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;
import net.minecraft.class_1657;

public class cz extends cB {
   private Set<Integer> vTMHw = new HashSet<>();
   private static final long akFDW = gb.aYR(-9107030281486293025L, 2831443964350399896L, MethodHandles.lookup().lookupClass()).a(31398750213229L);

   public cz(mr var1) {
      super(var1);
   }

   public cz(iS var1, mr var2) {
      this(var2);
      this.Vg(var1);
   }

   public cz UA(Integer param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cz.akFDW J
      // 03: ldc2_w 83871457622851
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vt ()Z
      // 0b: istore 4
      // 0d: aload 0
      // 0e: iload 4
      // 10: ifeq 32
      // 13: getfield sixtwo/cz.vTMHw Ljava/util/Set;
      // 16: aload 1
      // 17: invokeinterface java/util/Set.add (Ljava/lang/Object;)Z 2
      // 1c: ifeq 31
      // 1f: goto 26
      // 22: invokestatic sixtwo/cz.UD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: invokevirtual sixtwo/cz.Vk ()V
      // 2a: goto 31
      // 2d: invokestatic sixtwo/cz.UD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30: athrow
      // 31: aload 0
      // 32: areturn
   }

   public boolean Uy() {
      return this.vTMHw.contains(rD.dlmvG.field_1724.method_31548().method_67532());
   }

   public cz UC(Set<Integer> param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cz.akFDW J
      // 03: ldc2_w 1890650942152
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vt ()Z
      // 0b: istore 4
      // 0d: aload 1
      // 0e: ifnonnull 1f
      // 11: new java/util/HashSet
      // 14: dup
      // 15: invokespecial java/util/HashSet.<init> ()V
      // 18: goto 20
      // 1b: invokestatic sixtwo/cz.UD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e: athrow
      // 1f: aload 1
      // 20: astore 5
      // 22: aload 0
      // 23: iload 4
      // 25: ifeq 4b
      // 28: getfield sixtwo/cz.vTMHw Ljava/util/Set;
      // 2b: aload 5
      // 2d: invokestatic java/util/Objects.equals (Ljava/lang/Object;Ljava/lang/Object;)Z
      // 30: ifeq 40
      // 33: goto 3a
      // 36: invokestatic sixtwo/cz.UD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: aload 0
      // 3b: areturn
      // 3c: invokestatic sixtwo/cz.UD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3f: athrow
      // 40: aload 0
      // 41: aload 5
      // 43: putfield sixtwo/cz.vTMHw Ljava/util/Set;
      // 46: aload 0
      // 47: invokevirtual sixtwo/cz.Vk ()V
      // 4a: aload 0
      // 4b: areturn
   }

   public cz Uw(int... var1) {
      long var2 = akFDW ^ 67462628015420L;
      HashSet var5 = new HashSet();
      boolean var10000 = cB.Vt();
      int[] var6 = var1;
      int var7 = var1.length;
      int var8 = 0;
      boolean var4 = var10000;

      while (var8 < var7) {
         int var9 = var6[var8];
         var5.add(var9);
         var8++;
         if (!var4) {
            break;
         }
      }

      return this.UC(var5);
   }

   private static MatchException UD(MatchException var0) {
      return var0;
   }

   @Override
   public void SS(JsonElement var1) {
      long var2 = akFDW ^ 3751951872541L;
      boolean var10000 = cB.Vu();
      HashSet var5 = new HashSet();
      boolean var4 = var10000;
      Iterator var6 = var1.getAsJsonArray().iterator();

      while (true) {
         if (var6.hasNext()) {
            JsonElement var7 = (JsonElement)var6.next();

            try {
               var5.add(var7.getAsInt());
               if (var4) {
                  break;
               }

               if (!var4) {
                  continue;
               }
            } catch (MatchException var8) {
               throw UD(var8);
            }
         }

         this.UC(var5);
         break;
      }
   }

   public boolean Uz(class_1657 var1) {
      return this.vTMHw.contains(var1.method_31548().method_67532());
   }

   public Set<Integer> Ux() {
      return this.vTMHw;
   }

   public cz UB(Integer param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cz.akFDW J
      // 03: ldc2_w 56601663430353
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vt ()Z
      // 0b: istore 4
      // 0d: aload 0
      // 0e: iload 4
      // 10: ifeq 32
      // 13: getfield sixtwo/cz.vTMHw Ljava/util/Set;
      // 16: aload 1
      // 17: invokeinterface java/util/Set.remove (Ljava/lang/Object;)Z 2
      // 1c: ifeq 31
      // 1f: goto 26
      // 22: invokestatic sixtwo/cz.UD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: invokevirtual sixtwo/cz.Vk ()V
      // 2a: goto 31
      // 2d: invokestatic sixtwo/cz.UD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30: athrow
      // 31: aload 0
      // 32: areturn
   }

   @Override
   public void SR(Map<String, Object> var1) {
      var1.put(Arrays.toString(this.NwlSF), this.vTMHw);
   }
}
