package sixtwo;

import com.google.gson.JsonArray;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import java.lang.invoke.MethodHandles;
import java.time.Instant;
import java.time.format.DateTimeParseException;
import java.util.Collections;
import java.util.List;
import java.util.function.Supplier;
import net.minecraft.class_241;

public interface rp {
   long kpXrA = gb.aYR(5211369814533665663L, 4045199368490434293L, MethodHandles.lookup().lookupClass()).a(107105863367195L);

   private static RuntimeException a(RuntimeException var0) {
      return var0;
   }

   default <T extends rp> T readObject(JsonObject param1, String param2, Supplier<T> param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rp.kpXrA J
      // 03: ldc2_w 63994373699296
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0c: aload 0
      // 0d: aload 1
      // 0e: aload 2
      // 0f: invokeinterface sixtwo/rp.readElement (Lcom/google/gson/JsonObject;Ljava/lang/String;)Lcom/google/gson/JsonElement; 3
      // 14: astore 7
      // 16: astore 6
      // 18: aload 7
      // 1a: aload 6
      // 1c: ifnull 2b
      // 1f: ifnull 3d
      // 22: goto 29
      // 25: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 28: athrow
      // 29: aload 7
      // 2b: aload 6
      // 2d: ifnull 49
      // 30: invokevirtual com/google/gson/JsonElement.isJsonObject ()Z
      // 33: ifne 43
      // 36: goto 3d
      // 39: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 3c: athrow
      // 3d: aconst_null
      // 3e: areturn
      // 3f: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 42: athrow
      // 43: aload 3
      // 44: invokeinterface java/util/function/Supplier.get ()Ljava/lang/Object; 1
      // 49: checkcast sixtwo/rp
      // 4c: astore 8
      // 4e: aload 8
      // 50: aload 7
      // 52: invokevirtual com/google/gson/JsonElement.getAsJsonObject ()Lcom/google/gson/JsonObject;
      // 55: invokeinterface sixtwo/rp.fromJson (Lcom/google/gson/JsonObject;)V 2
      // 5a: aload 8
      // 5c: areturn
   }

   default int readInt(JsonObject param1, String param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rp.kpXrA J
      // 03: ldc2_w 21345594117262
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: aload 0
      // 0c: aload 1
      // 0d: aload 2
      // 0e: invokeinterface sixtwo/rp.readElement (Lcom/google/gson/JsonObject;Ljava/lang/String;)Lcom/google/gson/JsonElement; 3
      // 13: astore 6
      // 15: astore 5
      // 17: aload 6
      // 19: aload 5
      // 1b: ifnull 32
      // 1e: ifnonnull 30
      // 21: goto 28
      // 24: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 27: athrow
      // 28: bipush 0
      // 29: goto 35
      // 2c: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 2f: athrow
      // 30: aload 6
      // 32: invokevirtual com/google/gson/JsonElement.getAsInt ()I
      // 35: ireturn
   }

   default float readFloat(JsonObject param1, String param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rp.kpXrA J
      // 03: ldc2_w 18444231513616
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: aload 0
      // 0c: aload 1
      // 0d: aload 2
      // 0e: invokeinterface sixtwo/rp.readElement (Lcom/google/gson/JsonObject;Ljava/lang/String;)Lcom/google/gson/JsonElement; 3
      // 13: astore 6
      // 15: astore 5
      // 17: aload 6
      // 19: aload 5
      // 1b: ifnull 32
      // 1e: ifnonnull 30
      // 21: goto 28
      // 24: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 27: athrow
      // 28: fconst_0
      // 29: goto 35
      // 2c: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 2f: athrow
      // 30: aload 6
      // 32: invokevirtual com/google/gson/JsonElement.getAsFloat ()F
      // 35: freturn
   }

   default boolean readBoolean(JsonObject param1, String param2, boolean param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rp.kpXrA J
      // 03: ldc2_w 119952271842963
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0c: aload 0
      // 0d: aload 1
      // 0e: aload 2
      // 0f: invokeinterface sixtwo/rp.readElement (Lcom/google/gson/JsonObject;Ljava/lang/String;)Lcom/google/gson/JsonElement; 3
      // 14: astore 7
      // 16: astore 6
      // 18: aload 7
      // 1a: aload 6
      // 1c: ifnull 33
      // 1f: ifnonnull 31
      // 22: goto 29
      // 25: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 28: athrow
      // 29: iload 3
      // 2a: goto 36
      // 2d: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 30: athrow
      // 31: aload 7
      // 33: invokevirtual com/google/gson/JsonElement.getAsBoolean ()Z
      // 36: ireturn
   }

   default Long readLong(JsonObject param1, String param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rp.kpXrA J
      // 03: ldc2_w 59966328091786
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: aload 0
      // 0c: aload 1
      // 0d: aload 2
      // 0e: invokeinterface sixtwo/rp.readElement (Lcom/google/gson/JsonObject;Ljava/lang/String;)Lcom/google/gson/JsonElement; 3
      // 13: astore 6
      // 15: astore 5
      // 17: aload 6
      // 19: aload 5
      // 1b: ifnull 32
      // 1e: ifnonnull 30
      // 21: goto 28
      // 24: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 27: athrow
      // 28: aconst_null
      // 29: goto 38
      // 2c: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 2f: athrow
      // 30: aload 6
      // 32: invokevirtual com/google/gson/JsonElement.getAsLong ()J
      // 35: invokestatic java/lang/Long.valueOf (J)Ljava/lang/Long;
      // 38: areturn
   }

   default String readString(JsonObject param1, String param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rp.kpXrA J
      // 03: ldc2_w 49135666279029
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: aload 0
      // 0c: aload 1
      // 0d: aload 2
      // 0e: invokeinterface sixtwo/rp.readElement (Lcom/google/gson/JsonObject;Ljava/lang/String;)Lcom/google/gson/JsonElement; 3
      // 13: astore 6
      // 15: astore 5
      // 17: aload 6
      // 19: aload 5
      // 1b: ifnull 32
      // 1e: ifnonnull 30
      // 21: goto 28
      // 24: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 27: athrow
      // 28: aconst_null
      // 29: goto 35
      // 2c: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 2f: athrow
      // 30: aload 6
      // 32: invokevirtual com/google/gson/JsonElement.getAsString ()Ljava/lang/String;
      // 35: areturn
   }

   default Integer readInteger(JsonObject param1, String param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rp.kpXrA J
      // 03: ldc2_w 62258202603883
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: aload 0
      // 0c: aload 1
      // 0d: aload 2
      // 0e: invokeinterface sixtwo/rp.readElement (Lcom/google/gson/JsonObject;Ljava/lang/String;)Lcom/google/gson/JsonElement; 3
      // 13: astore 6
      // 15: astore 5
      // 17: aload 6
      // 19: aload 5
      // 1b: ifnull 32
      // 1e: ifnonnull 30
      // 21: goto 28
      // 24: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 27: athrow
      // 28: aconst_null
      // 29: goto 38
      // 2c: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 2f: athrow
      // 30: aload 6
      // 32: invokevirtual com/google/gson/JsonElement.getAsInt ()I
      // 35: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 38: areturn
   }

   default JsonElement readElement(JsonObject param1, String param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rp.kpXrA J
      // 03: ldc2_w 99471810185406
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: astore 5
      // 0d: aload 1
      // 0e: ifnull 2f
      // 11: aload 2
      // 12: aload 5
      // 14: ifnull 29
      // 17: goto 1e
      // 1a: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 1d: athrow
      // 1e: ifnull 2f
      // 21: goto 28
      // 24: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 27: athrow
      // 28: aload 2
      // 29: invokevirtual java/lang/String.isBlank ()Z
      // 2c: ifeq 35
      // 2f: aconst_null
      // 30: areturn
      // 31: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 34: athrow
      // 35: aload 1
      // 36: aload 2
      // 37: invokevirtual com/google/gson/JsonObject.get (Ljava/lang/String;)Lcom/google/gson/JsonElement;
      // 3a: astore 6
      // 3c: aload 6
      // 3e: aload 5
      // 40: ifnull 4f
      // 43: ifnull 61
      // 46: goto 4d
      // 49: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 4c: athrow
      // 4d: aload 6
      // 4f: aload 5
      // 51: ifnull 69
      // 54: invokevirtual com/google/gson/JsonElement.isJsonNull ()Z
      // 57: ifeq 67
      // 5a: goto 61
      // 5d: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 60: athrow
      // 61: aconst_null
      // 62: areturn
      // 63: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 66: athrow
      // 67: aload 6
      // 69: areturn
   }

   default <T extends rp> List<T> readList(JsonObject param1, String param2, Supplier<T> param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rp.kpXrA J
      // 03: ldc2_w 46188161776447
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0c: aload 0
      // 0d: aload 1
      // 0e: aload 2
      // 0f: invokeinterface sixtwo/rp.readElement (Lcom/google/gson/JsonObject;Ljava/lang/String;)Lcom/google/gson/JsonElement; 3
      // 14: astore 7
      // 16: astore 6
      // 18: aload 7
      // 1a: aload 6
      // 1c: ifnull 2b
      // 1f: ifnull 3d
      // 22: goto 29
      // 25: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 28: athrow
      // 29: aload 7
      // 2b: aload 6
      // 2d: ifnull 45
      // 30: invokevirtual com/google/gson/JsonElement.isJsonArray ()Z
      // 33: ifne 43
      // 36: goto 3d
      // 39: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 3c: athrow
      // 3d: aconst_null
      // 3e: areturn
      // 3f: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 42: athrow
      // 43: aload 7
      // 45: invokevirtual com/google/gson/JsonElement.getAsJsonArray ()Lcom/google/gson/JsonArray;
      // 48: astore 8
      // 4a: new java/util/ArrayList
      // 4d: dup
      // 4e: aload 8
      // 50: invokevirtual com/google/gson/JsonArray.size ()I
      // 53: invokespecial java/util/ArrayList.<init> (I)V
      // 56: astore 9
      // 58: aload 8
      // 5a: invokevirtual com/google/gson/JsonArray.iterator ()Ljava/util/Iterator;
      // 5d: astore 10
      // 5f: aload 10
      // 61: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 66: ifeq e0
      // 69: aload 10
      // 6b: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 70: checkcast com/google/gson/JsonElement
      // 73: astore 11
      // 75: aload 11
      // 77: aload 6
      // 79: ifnull 88
      // 7c: ifnull 5f
      // 7f: goto 86
      // 82: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 85: athrow
      // 86: aload 11
      // 88: invokevirtual com/google/gson/JsonElement.isJsonNull ()Z
      // 8b: aload 6
      // 8d: ifnull ab
      // 90: ifne 5f
      // 93: goto 9a
      // 96: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 99: athrow
      // 9a: aload 11
      // 9c: aload 6
      // 9e: ifnull c0
      // a1: invokevirtual com/google/gson/JsonElement.isJsonObject ()Z
      // a4: goto ab
      // a7: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // aa: athrow
      // ab: ifne ba
      // ae: aload 6
      // b0: ifnonnull 5f
      // b3: goto ba
      // b6: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // b9: athrow
      // ba: aload 3
      // bb: invokeinterface java/util/function/Supplier.get ()Ljava/lang/Object; 1
      // c0: checkcast sixtwo/rp
      // c3: astore 12
      // c5: aload 12
      // c7: aload 11
      // c9: invokevirtual com/google/gson/JsonElement.getAsJsonObject ()Lcom/google/gson/JsonObject;
      // cc: invokeinterface sixtwo/rp.fromJson (Lcom/google/gson/JsonObject;)V 2
      // d1: aload 9
      // d3: aload 12
      // d5: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // da: pop
      // db: aload 6
      // dd: ifnonnull 5f
      // e0: aload 9
      // e2: areturn
   }

   default Instant readInstant(JsonObject param1, String param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rp.kpXrA J
      // 03: ldc2_w 133830102607895
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: aload 0
      // 0c: aload 1
      // 0d: aload 2
      // 0e: invokeinterface sixtwo/rp.readString (Lcom/google/gson/JsonObject;Ljava/lang/String;)Ljava/lang/String; 3
      // 13: astore 6
      // 15: astore 5
      // 17: aload 6
      // 19: aload 5
      // 1b: ifnull 2a
      // 1e: ifnull 3c
      // 21: goto 28
      // 24: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 27: athrow
      // 28: aload 6
      // 2a: aload 5
      // 2c: ifnull 44
      // 2f: invokevirtual java/lang/String.isBlank ()Z
      // 32: ifeq 42
      // 35: goto 3c
      // 38: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 3b: athrow
      // 3c: aconst_null
      // 3d: areturn
      // 3e: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 41: athrow
      // 42: aload 6
      // 44: invokestatic java/time/Instant.parse (Ljava/lang/CharSequence;)Ljava/time/Instant;
      // 47: areturn
      // 48: astore 7
      // 4a: aconst_null
      // 4b: areturn
   }

   default JsonArray writeStringList(List<String> param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rp.kpXrA J
      // 03: ldc2_w 38928072984988
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: new com/google/gson/JsonArray
      // 0e: dup
      // 0f: invokespecial com/google/gson/JsonArray.<init> ()V
      // 12: astore 5
      // 14: astore 4
      // 16: aload 1
      // 17: aload 4
      // 19: ifnull 2e
      // 1c: ifnonnull 2d
      // 1f: goto 26
      // 22: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 25: athrow
      // 26: aload 5
      // 28: areturn
      // 29: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 2c: athrow
      // 2d: aload 1
      // 2e: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 33: astore 6
      // 35: aload 6
      // 37: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 3c: ifeq 6a
      // 3f: aload 6
      // 41: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 46: checkcast java/lang/String
      // 49: astore 7
      // 4b: aload 7
      // 4d: ifnull 65
      // 50: aload 5
      // 52: new com/google/gson/JsonPrimitive
      // 55: dup
      // 56: aload 7
      // 58: invokespecial com/google/gson/JsonPrimitive.<init> (Ljava/lang/String;)V
      // 5b: invokevirtual com/google/gson/JsonArray.add (Lcom/google/gson/JsonElement;)V
      // 5e: goto 65
      // 61: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 64: athrow
      // 65: aload 4
      // 67: ifnonnull 35
      // 6a: aload 5
      // 6c: areturn
   }

   default JsonArray writeIntArray(int[] param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rp.kpXrA J
      // 03: ldc2_w 44884540987606
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: new com/google/gson/JsonArray
      // 0e: dup
      // 0f: invokespecial com/google/gson/JsonArray.<init> ()V
      // 12: astore 5
      // 14: astore 4
      // 16: aload 1
      // 17: aload 4
      // 19: ifnull 2e
      // 1c: ifnonnull 2d
      // 1f: goto 26
      // 22: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 25: athrow
      // 26: aload 5
      // 28: areturn
      // 29: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 2c: athrow
      // 2d: aload 1
      // 2e: astore 6
      // 30: aload 6
      // 32: arraylength
      // 33: istore 7
      // 35: bipush 0
      // 36: istore 8
      // 38: iload 8
      // 3a: iload 7
      // 3c: if_icmpge 6b
      // 3f: aload 6
      // 41: iload 8
      // 43: iaload
      // 44: istore 9
      // 46: aload 5
      // 48: aload 4
      // 4a: ifnull 6d
      // 4d: new com/google/gson/JsonPrimitive
      // 50: dup
      // 51: iload 9
      // 53: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 56: invokespecial com/google/gson/JsonPrimitive.<init> (Ljava/lang/Number;)V
      // 59: invokevirtual com/google/gson/JsonArray.add (Lcom/google/gson/JsonElement;)V
      // 5c: iinc 8 1
      // 5f: aload 4
      // 61: ifnonnull 38
      // 64: goto 6b
      // 67: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 6a: athrow
      // 6b: aload 5
      // 6d: areturn
   }

   default List<String> safeStringList(List<String> var1) {
      long var2 = kpXrA ^ 1578783965744L;
      iS[] var4 = rm.div();

      try {
         if (var4 == null) {
            return var1;
         }

         if (var1 == null) {
            return Collections.emptyList();
         }
      } catch (DateTimeParseException var5) {
         throw a(var5);
      }

      return var1;
   }

   default List<String> readStringList(JsonObject param1, String param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rp.kpXrA J
      // 03: ldc2_w 92088626368011
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: aload 0
      // 0c: aload 1
      // 0d: aload 2
      // 0e: invokeinterface sixtwo/rp.readElement (Lcom/google/gson/JsonObject;Ljava/lang/String;)Lcom/google/gson/JsonElement; 3
      // 13: astore 6
      // 15: astore 5
      // 17: aload 6
      // 19: aload 5
      // 1b: ifnull 2a
      // 1e: ifnull 3c
      // 21: goto 28
      // 24: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 27: athrow
      // 28: aload 6
      // 2a: aload 5
      // 2c: ifnull 44
      // 2f: invokevirtual com/google/gson/JsonElement.isJsonArray ()Z
      // 32: ifne 42
      // 35: goto 3c
      // 38: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 3b: athrow
      // 3c: aconst_null
      // 3d: areturn
      // 3e: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 41: athrow
      // 42: aload 6
      // 44: invokevirtual com/google/gson/JsonElement.getAsJsonArray ()Lcom/google/gson/JsonArray;
      // 47: astore 7
      // 49: new java/util/ArrayList
      // 4c: dup
      // 4d: aload 7
      // 4f: invokevirtual com/google/gson/JsonArray.size ()I
      // 52: invokespecial java/util/ArrayList.<init> (I)V
      // 55: astore 8
      // 57: aload 7
      // 59: invokevirtual com/google/gson/JsonArray.iterator ()Ljava/util/Iterator;
      // 5c: astore 9
      // 5e: aload 9
      // 60: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 65: ifeq b7
      // 68: aload 9
      // 6a: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 6f: checkcast com/google/gson/JsonElement
      // 72: astore 10
      // 74: aload 10
      // 76: aload 5
      // 78: ifnull 87
      // 7b: ifnull 5e
      // 7e: goto 85
      // 81: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 84: athrow
      // 85: aload 10
      // 87: invokevirtual com/google/gson/JsonElement.isJsonNull ()Z
      // 8a: aload 5
      // 8c: ifnull b1
      // 8f: ifeq a5
      // 92: goto 99
      // 95: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 98: athrow
      // 99: aload 5
      // 9b: ifnonnull 5e
      // 9e: goto a5
      // a1: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // a4: athrow
      // a5: aload 8
      // a7: aload 10
      // a9: invokevirtual com/google/gson/JsonElement.getAsString ()Ljava/lang/String;
      // ac: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // b1: pop
      // b2: aload 5
      // b4: ifnonnull 5e
      // b7: aload 8
      // b9: areturn
   }

   default int[] readIntArray(JsonObject param1, String param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rp.kpXrA J
      // 03: ldc2_w 125809378090599
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: aload 0
      // 0c: aload 1
      // 0d: aload 2
      // 0e: invokeinterface sixtwo/rp.readElement (Lcom/google/gson/JsonObject;Ljava/lang/String;)Lcom/google/gson/JsonElement; 3
      // 13: astore 6
      // 15: astore 5
      // 17: aload 6
      // 19: aload 5
      // 1b: ifnull 2a
      // 1e: ifnull 3c
      // 21: goto 28
      // 24: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 27: athrow
      // 28: aload 6
      // 2a: aload 5
      // 2c: ifnull 44
      // 2f: invokevirtual com/google/gson/JsonElement.isJsonArray ()Z
      // 32: ifne 42
      // 35: goto 3c
      // 38: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 3b: athrow
      // 3c: aconst_null
      // 3d: areturn
      // 3e: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 41: athrow
      // 42: aload 6
      // 44: invokevirtual com/google/gson/JsonElement.getAsJsonArray ()Lcom/google/gson/JsonArray;
      // 47: astore 7
      // 49: aload 7
      // 4b: invokevirtual com/google/gson/JsonArray.size ()I
      // 4e: newarray 10
      // 50: astore 8
      // 52: bipush 0
      // 53: istore 9
      // 55: iload 9
      // 57: aload 7
      // 59: invokevirtual com/google/gson/JsonArray.size ()I
      // 5c: if_icmpge b3
      // 5f: aload 7
      // 61: iload 9
      // 63: invokevirtual com/google/gson/JsonArray.get (I)Lcom/google/gson/JsonElement;
      // 66: astore 10
      // 68: aload 8
      // 6a: aload 5
      // 6c: ifnull b5
      // 6f: iload 9
      // 71: aload 10
      // 73: aload 5
      // 75: ifnull 8b
      // 78: goto 7f
      // 7b: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 7e: athrow
      // 7f: ifnull 9d
      // 82: goto 89
      // 85: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 88: athrow
      // 89: aload 10
      // 8b: aload 5
      // 8d: ifnull a7
      // 90: invokevirtual com/google/gson/JsonElement.isJsonNull ()Z
      // 93: ifeq a5
      // 96: goto 9d
      // 99: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 9c: athrow
      // 9d: bipush 0
      // 9e: goto aa
      // a1: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // a4: athrow
      // a5: aload 10
      // a7: invokevirtual com/google/gson/JsonElement.getAsInt ()I
      // aa: iastore
      // ab: iinc 9 1
      // ae: aload 5
      // b0: ifnonnull 55
      // b3: aload 8
      // b5: areturn
   }

   void fromJson(JsonObject var1);

   default JsonObject toJson() {
      return new JsonObject();
   }

   default JsonObject writeVec2(class_241 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rp.kpXrA J
      // 03: ldc2_w 5396339282685
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: new com/google/gson/JsonObject
      // 0e: dup
      // 0f: invokespecial com/google/gson/JsonObject.<init> ()V
      // 12: astore 5
      // 14: astore 4
      // 16: aload 4
      // 18: ifnull 49
      // 1b: aload 1
      // 1c: ifnonnull 2d
      // 1f: goto 26
      // 22: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 25: athrow
      // 26: aload 5
      // 28: areturn
      // 29: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 2c: athrow
      // 2d: aload 5
      // 2f: ldc "x"
      // 31: aload 1
      // 32: getfield net/minecraft/class_241.field_1343 F
      // 35: invokestatic java/lang/Float.valueOf (F)Ljava/lang/Float;
      // 38: invokevirtual com/google/gson/JsonObject.addProperty (Ljava/lang/String;Ljava/lang/Number;)V
      // 3b: aload 5
      // 3d: ldc "y"
      // 3f: aload 1
      // 40: getfield net/minecraft/class_241.field_1342 F
      // 43: invokestatic java/lang/Float.valueOf (F)Ljava/lang/Float;
      // 46: invokevirtual com/google/gson/JsonObject.addProperty (Ljava/lang/String;Ljava/lang/Number;)V
      // 49: aload 5
      // 4b: areturn
   }

   default class_241 readVec2(JsonObject param1, String param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rp.kpXrA J
      // 03: ldc2_w 4635455238963
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: aload 0
      // 0c: aload 1
      // 0d: aload 2
      // 0e: invokeinterface sixtwo/rp.readElement (Lcom/google/gson/JsonObject;Ljava/lang/String;)Lcom/google/gson/JsonElement; 3
      // 13: astore 6
      // 15: astore 5
      // 17: aload 6
      // 19: aload 5
      // 1b: ifnull 2a
      // 1e: ifnull 3c
      // 21: goto 28
      // 24: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 27: athrow
      // 28: aload 6
      // 2a: aload 5
      // 2c: ifnull 44
      // 2f: invokevirtual com/google/gson/JsonElement.isJsonObject ()Z
      // 32: ifne 42
      // 35: goto 3c
      // 38: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 3b: athrow
      // 3c: aconst_null
      // 3d: areturn
      // 3e: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 41: athrow
      // 42: aload 6
      // 44: invokevirtual com/google/gson/JsonElement.getAsJsonObject ()Lcom/google/gson/JsonObject;
      // 47: astore 7
      // 49: new net/minecraft/class_241
      // 4c: dup
      // 4d: aload 0
      // 4e: aload 7
      // 50: ldc "x"
      // 52: invokeinterface sixtwo/rp.readFloat (Lcom/google/gson/JsonObject;Ljava/lang/String;)F 3
      // 57: aload 0
      // 58: aload 7
      // 5a: ldc "y"
      // 5c: invokeinterface sixtwo/rp.readFloat (Lcom/google/gson/JsonObject;Ljava/lang/String;)F 3
      // 61: invokespecial net/minecraft/class_241.<init> (FF)V
      // 64: areturn
   }

   default JsonArray writeList(List<? extends rp> param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rp.kpXrA J
      // 03: ldc2_w 19924387774881
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: new com/google/gson/JsonArray
      // 0e: dup
      // 0f: invokespecial com/google/gson/JsonArray.<init> ()V
      // 12: astore 5
      // 14: astore 4
      // 16: aload 1
      // 17: aload 4
      // 19: ifnull 2e
      // 1c: ifnonnull 2d
      // 1f: goto 26
      // 22: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 25: athrow
      // 26: aload 5
      // 28: areturn
      // 29: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 2c: athrow
      // 2d: aload 1
      // 2e: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 33: astore 6
      // 35: aload 6
      // 37: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 3c: ifeq 68
      // 3f: aload 6
      // 41: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 46: checkcast sixtwo/rp
      // 49: astore 7
      // 4b: aload 7
      // 4d: ifnull 63
      // 50: aload 5
      // 52: aload 7
      // 54: invokeinterface sixtwo/rp.toJson ()Lcom/google/gson/JsonObject; 1
      // 59: invokevirtual com/google/gson/JsonArray.add (Lcom/google/gson/JsonElement;)V
      // 5c: goto 63
      // 5f: invokestatic sixtwo/rp.a (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 62: athrow
      // 63: aload 4
      // 65: ifnonnull 35
      // 68: aload 5
      // 6a: areturn
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   default <E extends Enum<E>> E readEnum(JsonObject var1, String var2, Class<E> var3, E var4) {
      long var5 = kpXrA ^ 80319864734553L;
      iS[] var10000 = rm.div();
      String var8 = this.readString(var1, var2);
      iS[] var7 = var10000;

      label38: {
         label33: {
            try {
               var14 = var8;
               if (var7 == null) {
                  break label33;
               }

               if (var8 == null) {
                  break label38;
               }
            } catch (IllegalArgumentException var13) {
               throw a(var13);
            }

            var14 = var8;
         }

         try {
            if (var14.isBlank()) {
               break label38;
            }
         } catch (IllegalArgumentException var12) {
            throw a(var12);
         }

         try {
            return Enum.valueOf(var3, var8);
         } catch (IllegalArgumentException var11) {
            return (E)var4;
         }
      }

      try {
         return (E)var4;
      } catch (IllegalArgumentException var10) {
         throw a(var10);
      }
   }
}
