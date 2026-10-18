package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

public class cv extends cB {
   private final List<cw> jjOKZ = new ArrayList<>();
   private final List<cw> JIvPe = new ArrayList<>();
   private int jHVbQ;
   private boolean tsRCd = false;
   private static final long MorJn = gb.aYR(-3429635470523625339L, 2516146184062335452L, MethodHandles.lookup().lookupClass()).a(270174065979058L);

   public cv(mr var1) {
      super(var1);
   }

   public cv(iS var1, mr var2) {
      this(var2);
      this.Vg(var1);
   }

   public void To(cw param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cv.MorJn J
      // 03: ldc2_w 37809547038955
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cw.TL ()[I
      // 0b: astore 4
      // 0d: aload 1
      // 0e: ifnull 51
      // 11: aload 0
      // 12: getfield sixtwo/cv.jjOKZ Ljava/util/List;
      // 15: aload 1
      // 16: invokeinterface java/util/List.contains (Ljava/lang/Object;)Z 2
      // 1b: aload 4
      // 1d: ifnull 42
      // 20: goto 27
      // 23: invokestatic sixtwo/cv.Tw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: ifeq 51
      // 2a: goto 31
      // 2d: invokestatic sixtwo/cv.Tw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30: athrow
      // 31: aload 0
      // 32: getfield sixtwo/cv.JIvPe Ljava/util/List;
      // 35: aload 1
      // 36: invokeinterface java/util/List.contains (Ljava/lang/Object;)Z 2
      // 3b: goto 42
      // 3e: invokestatic sixtwo/cv.Tw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: aload 4
      // 44: ifnull 5c
      // 47: ifeq 52
      // 4a: goto 51
      // 4d: invokestatic sixtwo/cv.Tw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: return
      // 52: aload 0
      // 53: getfield sixtwo/cv.jjOKZ Ljava/util/List;
      // 56: aload 1
      // 57: invokeinterface java/util/List.indexOf (Ljava/lang/Object;)I 2
      // 5c: istore 5
      // 5e: aload 0
      // 5f: getfield sixtwo/cv.JIvPe Ljava/util/List;
      // 62: invokeinterface java/util/List.size ()I 1
      // 67: istore 6
      // 69: bipush 0
      // 6a: istore 7
      // 6c: iload 7
      // 6e: aload 0
      // 6f: getfield sixtwo/cv.JIvPe Ljava/util/List;
      // 72: invokeinterface java/util/List.size ()I 1
      // 77: if_icmpge ca
      // 7a: aload 0
      // 7b: getfield sixtwo/cv.jjOKZ Ljava/util/List;
      // 7e: aload 4
      // 80: ifnull ce
      // 83: aload 0
      // 84: getfield sixtwo/cv.JIvPe Ljava/util/List;
      // 87: iload 7
      // 89: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 8e: invokeinterface java/util/List.indexOf (Ljava/lang/Object;)I 2
      // 93: aload 4
      // 95: ifnull b4
      // 98: goto 9f
      // 9b: invokestatic sixtwo/cv.Tw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9e: athrow
      // 9f: iload 5
      // a1: if_icmple bb
      // a4: goto ab
      // a7: invokestatic sixtwo/cv.Tw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // aa: athrow
      // ab: iload 7
      // ad: goto b4
      // b0: invokestatic sixtwo/cv.Tw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b3: athrow
      // b4: istore 6
      // b6: aload 4
      // b8: ifnonnull ca
      // bb: iinc 7 1
      // be: aload 4
      // c0: ifnonnull 6c
      // c3: goto ca
      // c6: invokestatic sixtwo/cv.Tw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c9: athrow
      // ca: aload 0
      // cb: getfield sixtwo/cv.JIvPe Ljava/util/List;
      // ce: iload 6
      // d0: aload 1
      // d1: invokeinterface java/util/List.add (ILjava/lang/Object;)V 3
      // d6: aload 0
      // d7: invokevirtual sixtwo/cv.Vk ()V
      // da: return
   }

   private static MatchException Tw(MatchException var0) {
      return var0;
   }

   public cv Tl(boolean var1) {
      this.tsRCd = var1;
      return this;
   }

   public cv Tm(int var1) {
      this.jHVbQ = var1;
      return this;
   }

   public boolean Tn(cw var1) {
      return this.JIvPe.contains(var1);
   }

   public boolean Tq(int[] param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cv.MorJn J
      // 03: ldc2_w 11120138600977
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cw.TL ()[I
      // 0b: aload 0
      // 0c: getfield sixtwo/cv.jjOKZ Ljava/util/List;
      // 0f: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 14: astore 5
      // 16: astore 4
      // 18: aload 5
      // 1a: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 1f: ifeq 59
      // 22: aload 5
      // 24: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 29: checkcast sixtwo/cw
      // 2c: astore 6
      // 2e: aload 6
      // 30: invokevirtual sixtwo/cw.TE ()[I
      // 33: aload 1
      // 34: invokestatic java/util/Arrays.equals ([I[I)Z
      // 37: aload 4
      // 39: ifnull 5a
      // 3c: aload 4
      // 3e: ifnull 53
      // 41: goto 48
      // 44: invokestatic sixtwo/cv.Tw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: ifeq 54
      // 4b: goto 52
      // 4e: invokestatic sixtwo/cv.Tw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51: athrow
      // 52: bipush 1
      // 53: ireturn
      // 54: aload 4
      // 56: ifnonnull 18
      // 59: bipush 0
      // 5a: ireturn
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
      // 00: getstatic sixtwo/cv.MorJn J
      // 03: ldc2_w 21131622395759
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cw.TL ()[I
      // 0b: new java/util/ArrayList
      // 0e: dup
      // 0f: invokespecial java/util/ArrayList.<init> ()V
      // 12: astore 5
      // 14: astore 4
      // 16: aload 1
      // 17: invokevirtual com/google/gson/JsonElement.getAsJsonArray ()Lcom/google/gson/JsonArray;
      // 1a: invokevirtual com/google/gson/JsonArray.iterator ()Ljava/util/Iterator;
      // 1d: astore 6
      // 1f: aload 6
      // 21: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 26: ifeq 9a
      // 29: aload 6
      // 2b: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 30: checkcast com/google/gson/JsonElement
      // 33: astore 7
      // 35: aload 7
      // 37: invokevirtual com/google/gson/JsonElement.getAsInt ()I
      // 3a: istore 8
      // 3c: iload 8
      // 3e: aload 4
      // 40: ifnull a5
      // 43: aload 4
      // 45: ifnull 5b
      // 48: goto 4f
      // 4b: invokestatic sixtwo/cv.Tw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4e: athrow
      // 4f: iflt 1f
      // 52: goto 59
      // 55: invokestatic sixtwo/cv.Tw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 58: athrow
      // 59: iload 8
      // 5b: aload 4
      // 5d: ifnull 94
      // 60: aload 0
      // 61: getfield sixtwo/cv.jjOKZ Ljava/util/List;
      // 64: invokeinterface java/util/List.size ()I 1
      // 69: if_icmplt 7f
      // 6c: goto 73
      // 6f: invokestatic sixtwo/cv.Tw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 72: athrow
      // 73: aload 4
      // 75: ifnonnull 1f
      // 78: goto 7f
      // 7b: invokestatic sixtwo/cv.Tw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7e: athrow
      // 7f: aload 5
      // 81: aload 0
      // 82: getfield sixtwo/cv.jjOKZ Ljava/util/List;
      // 85: iload 8
      // 87: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 8c: checkcast sixtwo/cw
      // 8f: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 94: pop
      // 95: aload 4
      // 97: ifnonnull 1f
      // 9a: aload 5
      // 9c: aload 0
      // 9d: getfield sixtwo/cv.JIvPe Ljava/util/List;
      // a0: invokeinterface java/util/List.equals (Ljava/lang/Object;)Z 2
      // a5: aload 4
      // a7: ifnull c9
      // aa: ifeq b5
      // ad: goto b4
      // b0: invokestatic sixtwo/cv.Tw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b3: athrow
      // b4: return
      // b5: aload 0
      // b6: getfield sixtwo/cv.JIvPe Ljava/util/List;
      // b9: invokeinterface java/util/List.clear ()V 1
      // be: aload 0
      // bf: getfield sixtwo/cv.JIvPe Ljava/util/List;
      // c2: aload 5
      // c4: invokeinterface java/util/List.addAll (Ljava/util/Collection;)Z 2
      // c9: pop
      // ca: aload 0
      // cb: invokevirtual sixtwo/cv.Vk ()V
      // ce: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // d1: ifnonnull e1
      // d4: bipush 1
      // d5: newarray 10
      // d7: invokestatic sixtwo/cw.TK ([I)V
      // da: goto e1
      // dd: invokestatic sixtwo/cv.Tw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // e0: athrow
      // e1: return
   }

   @Override
   public void SR(Map<String, Object> var1) {
      var1.put(Arrays.toString(this.NwlSF), this.Tr());
   }

   public void Tp(cw param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cv.MorJn J
      // 03: ldc2_w 65915973979536
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cw.TL ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnull 2e
      // 13: getfield sixtwo/cv.JIvPe Ljava/util/List;
      // 16: aload 1
      // 17: invokeinterface java/util/List.remove (Ljava/lang/Object;)Z 2
      // 1c: ifeq 31
      // 1f: goto 26
      // 22: invokestatic sixtwo/cv.Tw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: goto 2e
      // 2a: invokestatic sixtwo/cv.Tw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: invokevirtual sixtwo/cv.Vk ()V
      // 31: return
   }

   public List<cw> Ts() {
      return this.jjOKZ;
   }

   public List<cw> Tt() {
      return this.JIvPe;
   }

   public boolean Tv() {
      return this.tsRCd;
   }

   public int Tu() {
      return this.jHVbQ;
   }

   public List<Integer> Tr() {
      long var1 = MorJn ^ 77313439600030L;
      int[] var10000 = cw.TL();
      ArrayList var4 = new ArrayList();
      int[] var3 = var10000;
      Iterator var5 = this.JIvPe.iterator();

      while (true) {
         if (var5.hasNext()) {
            cw var6 = (cw)var5.next();

            try {
               var8 = var4;
               if (var3 == null) {
                  break;
               }

               var4.add(this.jjOKZ.indexOf(var6));
               if (var3 != null) {
                  continue;
               }
            } catch (MatchException var7) {
               throw Tw(var7);
            }
         }

         var8 = var4;
         break;
      }

      return var8;
   }
}
