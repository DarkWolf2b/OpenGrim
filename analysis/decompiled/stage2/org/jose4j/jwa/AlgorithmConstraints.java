package org.jose4j.jwa;

import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;
import org.jose4j.lang.InvalidAlgorithmException;

public class AlgorithmConstraints {
   public static final AlgorithmConstraints NO_CONSTRAINTS = new AlgorithmConstraints(AlgorithmConstraints.ConstraintType.BLOCK);
   public static final AlgorithmConstraints DISALLOW_NONE = new AlgorithmConstraints(AlgorithmConstraints.ConstraintType.BLOCK, "none");
   public static final AlgorithmConstraints ALLOW_ONLY_NONE = new AlgorithmConstraints(AlgorithmConstraints.ConstraintType.PERMIT, "none");
   private final AlgorithmConstraints.ConstraintType type;
   private final Set<String> algorithms;

   // $VF: Unable to simplify switch on enum
   // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
   public void checkConstraint(String var1) throws InvalidAlgorithmException {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: invalid constant type: Lorg/jose4j/jwa/AlgorithmConstraints$ConstraintType; with value 4
      //   at org.jetbrains.java.decompiler.modules.decompiler.exps.ConstExprent.toJava(ConstExprent.java:356)
      //   at org.jetbrains.java.decompiler.modules.decompiler.stats.SwitchStatement.toJava(SwitchStatement.java:171)
      //   at org.jetbrains.java.decompiler.modules.decompiler.ExprProcessor.jmpWrapper(ExprProcessor.java:829)
      //   at org.jetbrains.java.decompiler.modules.decompiler.stats.SequenceStatement.toJava(SequenceStatement.java:107)
      //   at org.jetbrains.java.decompiler.modules.decompiler.stats.RootStatement.toJava(RootStatement.java:36)
      //   at org.jetbrains.java.decompiler.main.ClassWriter.writeMethod(ClassWriter.java:1306)
      //
      // Bytecode:
      // 00: getstatic org/jose4j/jwa/AlgorithmConstraints$1.$SwitchMap$org$jose4j$jwa$AlgorithmConstraints$ConstraintType [I
      // 03: aload 0
      // 04: getfield org/jose4j/jwa/AlgorithmConstraints.type Lorg/jose4j/jwa/AlgorithmConstraints$ConstraintType;
      // 07: invokevirtual org/jose4j/jwa/AlgorithmConstraints$ConstraintType.ordinal ()I
      // 0a: iaload
      // 0b: tableswitch 119 1 4 29 29 74 74
      // 28: aload 0
      // 29: getfield org/jose4j/jwa/AlgorithmConstraints.algorithms Ljava/util/Set;
      // 2c: aload 1
      // 2d: invokeinterface java/util/Set.contains (Ljava/lang/Object;)Z 2
      // 32: ifne 82
      // 35: new org/jose4j/lang/InvalidAlgorithmException
      // 38: dup
      // 39: new java/lang/StringBuilder
      // 3c: dup
      // 3d: invokespecial java/lang/StringBuilder.<init> ()V
      // 40: ldc "'"
      // 42: invokevirtual java/lang/StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder;
      // 45: aload 1
      // 46: invokevirtual java/lang/StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder;
      // 49: ldc "' is not a permitted algorithm."
      // 4b: invokevirtual java/lang/StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder;
      // 4e: invokevirtual java/lang/StringBuilder.toString ()Ljava/lang/String;
      // 51: invokespecial org/jose4j/lang/InvalidAlgorithmException.<init> (Ljava/lang/String;)V
      // 54: athrow
      // 55: aload 0
      // 56: getfield org/jose4j/jwa/AlgorithmConstraints.algorithms Ljava/util/Set;
      // 59: aload 1
      // 5a: invokeinterface java/util/Set.contains (Ljava/lang/Object;)Z 2
      // 5f: ifeq 82
      // 62: new org/jose4j/lang/InvalidAlgorithmException
      // 65: dup
      // 66: new java/lang/StringBuilder
      // 69: dup
      // 6a: invokespecial java/lang/StringBuilder.<init> ()V
      // 6d: ldc "'"
      // 6f: invokevirtual java/lang/StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder;
      // 72: aload 1
      // 73: invokevirtual java/lang/StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder;
      // 76: ldc "' is a blocked algorithm."
      // 78: invokevirtual java/lang/StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder;
      // 7b: invokevirtual java/lang/StringBuilder.toString ()Ljava/lang/String;
      // 7e: invokespecial org/jose4j/lang/InvalidAlgorithmException.<init> (Ljava/lang/String;)V
      // 81: athrow
      // 82: return
   }

   public AlgorithmConstraints(AlgorithmConstraints.ConstraintType var1, String... var2) {
      if (var1 == null) {
         throw new NullPointerException("ConstraintType cannot be null");
      } else {
         this.type = var1;
         this.algorithms = new HashSet<>(Arrays.asList(var2));
      }
   }

   public static enum ConstraintType {
      @Deprecated
      WHITELIST,
      @Deprecated
      BLACKLIST,
      PERMIT,
      BLOCK;

      private ConstraintType() {
      }
   }
}
