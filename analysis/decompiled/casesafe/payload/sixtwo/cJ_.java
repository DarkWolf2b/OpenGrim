package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.MethodHandles;
import java.util.Arrays;
import java.util.Map;

public class cJ extends cB {
   private boolean LIkdP = false;
   private static boolean bLjCM;
   private static final long hpdui = gb.aYR(-6547464087807471634L, 1371317141899777693L, MethodHandles.lookup().lookupClass()).a(166795554959631L);

   public cJ(mr var1) {
      super(var1);
   }

   public cJ(iS var1, mr var2) {
      this(var2);
      this.Vg(var1);
   }

   static {
      if (!WI()) {
         WG(true);
      }
   }

   private static MatchException WJ(MatchException var0) {
      return var0;
   }

   @Override
   public void SS(JsonElement var1) {
      this.WE(var1.getAsBoolean());
   }

   @Override
   public void SR(Map<String, Object> var1) {
      var1.put(Arrays.toString(this.NwlSF), this.LIkdP);
   }

   public boolean WF() {
      return this.LIkdP;
   }

   public static boolean WH() {
      return bLjCM;
   }

   public cJ WD() {
      long var1 = hpdui ^ 66104045301885L;
      boolean var3 = cB.Vt();

      cJ var10000;
      boolean var10001;
      label22: {
         label21: {
            try {
               var10000 = this;
               var10001 = this.LIkdP;
               if (!var3) {
                  break label22;
               }

               if (!this.LIkdP) {
                  break label21;
               }
            } catch (MatchException var4) {
               throw WJ(var4);
            }

            var10001 = false;
            break label22;
         }

         var10001 = true;
      }

      var10000.LIkdP = var10001;
      this.Vk();
      return this;
   }

   public static void WG(boolean var0) {
      bLjCM = var0;
   }

   public static boolean WI() {
      boolean var0 = WH();

      try {
         return !var0;
      } catch (MatchException var1) {
         throw WJ(var1);
      }
   }

   public cJ WE(boolean param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cJ.hpdui J
      // 03: ldc2_w 86725758886617
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vu ()Z
      // 0b: istore 4
      // 0d: aload 0
      // 0e: iload 4
      // 10: ifne 31
      // 13: getfield sixtwo/cJ.LIkdP Z
      // 16: iload 1
      // 17: if_icmpne 27
      // 1a: goto 21
      // 1d: invokestatic sixtwo/cJ.WJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 0
      // 22: areturn
      // 23: invokestatic sixtwo/cJ.WJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 0
      // 28: iload 1
      // 29: putfield sixtwo/cJ.LIkdP Z
      // 2c: aload 0
      // 2d: invokevirtual sixtwo/cJ.Vk ()V
      // 30: aload 0
      // 31: areturn
   }
}
