package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

public class cH extends cB {
   private final List<cB> sdWIG = new ArrayList<>();
   private static final long ZdDfg = gb.aYR(-2240991886133654468L, 2263670644429913216L, MethodHandles.lookup().lookupClass()).a(173865963928684L);

   public cH(mr var1) {
      super(var1);
   }

   public cH(iS var1, mr var2) {
      this(var2);
      this.Vg(var1);
   }

   private static Exception Ww(Exception var0) {
      return var0;
   }

   public cH Wu(cB... var1) {
      this.sdWIG.addAll(List.of(var1));
      return this;
   }

   public List<cB> Wv() {
      return this.sdWIG;
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
      // 00: getstatic sixtwo/cH.ZdDfg J
      // 03: ldc2_w 38471499753282
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vu ()Z
      // 0b: istore 4
      // 0d: aload 1
      // 0e: iload 4
      // 10: ifne 26
      // 13: invokevirtual com/google/gson/JsonElement.isJsonObject ()Z
      // 16: ifne 25
      // 19: goto 20
      // 1c: invokestatic sixtwo/cH.Ww (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 1f: athrow
      // 20: return
      // 21: invokestatic sixtwo/cH.Ww (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 24: athrow
      // 25: aload 1
      // 26: invokevirtual com/google/gson/JsonElement.getAsJsonObject ()Lcom/google/gson/JsonObject;
      // 29: astore 5
      // 2b: aload 0
      // 2c: getfield sixtwo/cH.sdWIG Ljava/util/List;
      // 2f: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 34: astore 6
      // 36: aload 6
      // 38: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 3d: ifeq 82
      // 40: aload 6
      // 42: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 47: checkcast sixtwo/cB
      // 4a: astore 7
      // 4c: aload 7
      // 4e: invokevirtual sixtwo/cB.Vm ()[I
      // 51: invokestatic java/util/Arrays.toString ([I)Ljava/lang/String;
      // 54: astore 8
      // 56: iload 4
      // 58: ifne 78
      // 5b: aload 5
      // 5d: aload 8
      // 5f: invokevirtual com/google/gson/JsonObject.has (Ljava/lang/String;)Z
      // 62: ifeq 7d
      // 65: goto 6c
      // 68: invokestatic sixtwo/cH.Ww (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 6b: athrow
      // 6c: aload 7
      // 6e: aload 5
      // 70: aload 8
      // 72: invokevirtual com/google/gson/JsonObject.get (Ljava/lang/String;)Lcom/google/gson/JsonElement;
      // 75: invokevirtual sixtwo/cB.SS (Lcom/google/gson/JsonElement;)V
      // 78: goto 7d
      // 7b: astore 9
      // 7d: iload 4
      // 7f: ifeq 36
      // 82: return
   }

   @Override
   public void SR(Map<String, Object> var1) {
      long var2 = ZdDfg ^ 124815280257774L;
      boolean var10000 = cB.Vu();
      HashMap var5 = new HashMap();
      boolean var4 = var10000;
      Iterator var6 = this.sdWIG.iterator();

      while (true) {
         if (var6.hasNext()) {
            cB var7 = (cB)var6.next();

            try {
               var7.SR(var5);
               if (var4) {
                  break;
               }

               if (!var4) {
                  continue;
               }
            } catch (MatchException var8) {
               throw Ww(var8);
            }
         }

         var1.put(Arrays.toString(this.NwlSF), var5);
         break;
      }
   }
}
