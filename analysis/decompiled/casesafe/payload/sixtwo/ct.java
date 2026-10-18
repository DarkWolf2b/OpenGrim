package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Map;

public class ct extends cB {
   private final List<cu> kwiHL;
   private int kErPl;
   private static iS[] qAFpE;
   private static final long moIkZ = gb.aYR(7043047839429379363L, -5324473541524081038L, MethodHandles.lookup().lookupClass()).a(52170070807811L);

   public int ST() {
      return this.kErPl;
   }

   public ct(mr var1) {
      long var2 = moIkZ ^ 26280771825923L;
      SW();
      super(var1);

      try {
         this.kwiHL = new ArrayList<>();
         this.kErPl = 0;
         if (iS.bwL() == null) {
            SV(new iS[3]);
         }
      } catch (MatchException var5) {
         throw SX(var5);
      }
   }

   public ct(iS var1, mr var2) {
      this(var2);
      this.Vg(var1);
   }

   static {
      if (SW() == null) {
         SV(new iS[2]);
      }
   }

   public static iS[] SW() {
      return qAFpE;
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   @Override
   public void SS(JsonElement var1) {
      long var2 = moIkZ ^ 130039241040997L;
      iS[] var10000 = SW();
      int var5 = var1.getAsInt();
      iS[] var4 = var10000;

      label31: {
         label30: {
            label29: {
               try {
                  var9 = var5;
                  if (var4 == null) {
                     break label29;
                  }

                  if (var5 < 0) {
                     break label30;
                  }
               } catch (MatchException var8) {
                  throw SX(var8);
               }

               var9 = var5;
            }

            try {
               if (var9 < this.kwiHL.size()) {
                  break label31;
               }
            } catch (MatchException var7) {
               throw SX(var7);
            }
         }

         try {
            return;
         } catch (MatchException var6) {
            throw SX(var6);
         }
      }

      this.SN(var5);
   }

   @Override
   public void SR(Map<String, Object> var1) {
      var1.put(Arrays.toString(this.NwlSF), this.kErPl);
   }

   public static void SV(iS[] var0) {
      qAFpE = var0;
   }

   private static MatchException SX(MatchException var0) {
      return var0;
   }

   public cu SL() {
      return this.kwiHL.get(this.kErPl);
   }

   public int[] SM() {
      return this.kwiHL.get(this.kErPl).Tb();
   }

   public boolean SP(cu param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ct.moIkZ J
      // 03: ldc2_w 52874729547086
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ct.SW ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/ct.kErPl I
      // 11: aload 4
      // 13: ifnull 32
      // 16: aload 0
      // 17: getfield sixtwo/ct.kwiHL Ljava/util/List;
      // 1a: aload 1
      // 1b: invokeinterface java/util/List.indexOf (Ljava/lang/Object;)I 2
      // 20: if_icmpne 35
      // 23: goto 2a
      // 26: invokestatic sixtwo/ct.SX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: bipush 1
      // 2b: goto 32
      // 2e: invokestatic sixtwo/ct.SX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: goto 36
      // 35: bipush 0
      // 36: ireturn
   }

   public List<cu> SU() {
      return this.kwiHL;
   }

   public void SN(int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ct.moIkZ J
      // 03: ldc2_w 49077383979366
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ct.SW ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnull 2c
      // 13: getfield sixtwo/ct.kErPl I
      // 16: iload 1
      // 17: if_icmpne 26
      // 1a: goto 21
      // 1d: invokestatic sixtwo/ct.SX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: return
      // 22: invokestatic sixtwo/ct.SX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: iload 1
      // 28: putfield sixtwo/ct.kErPl I
      // 2b: aload 0
      // 2c: invokevirtual sixtwo/ct.Vk ()V
      // 2f: return
   }

   public boolean SQ(int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ct.moIkZ J
      // 03: ldc2_w 67294532660692
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ct.SW ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/ct.kErPl I
      // 11: aload 4
      // 13: ifnull 29
      // 16: iload 1
      // 17: if_icmpne 2c
      // 1a: goto 21
      // 1d: invokestatic sixtwo/ct.SX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: bipush 1
      // 22: goto 29
      // 25: invokestatic sixtwo/ct.SX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: goto 2d
      // 2c: bipush 0
      // 2d: ireturn
   }

   public ct SO(int var1) {
      this.SN(var1);
      return this;
   }
}
