package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.List;
import java.util.Objects;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public final class lH {
   private final List<lI> TeJgs = new ArrayList<>();
   private static final long TMDwZ = gb.aYR(-4620712992161204533L, -2482462191155530377L, MethodHandles.lookup().lookupClass()).a(187499983405416L);
   private static final String htYOp;

   static {
      long var0 = TMDwZ ^ 53993161460816L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("3\u001ecn\u0098#yK".getBytes("ISO-8859-1"));
      String var5 = cgr(var4).intern();
      byte var10001 = -1;
      htYOp = var5;
   }

   public lH cgm(lI var1) {
      long var2 = TMDwZ ^ 81045181340781L;
      this.TeJgs.add(Objects.requireNonNull(var1, htYOp));
      return this;
   }

   public void cgp() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lH.TMDwZ J
      // 003: ldc2_w 37585319722537
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/lN.b ()Z
      // 00b: aconst_null
      // 00c: astore 4
      // 00e: invokestatic sixtwo/lN.immediate ()Lsixtwo/lN;
      // 011: astore 5
      // 013: istore 3
      // 014: aload 0
      // 015: getfield sixtwo/lH.TeJgs Ljava/util/List;
      // 018: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 01d: astore 6
      // 01f: aload 6
      // 021: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 026: ifeq 109
      // 029: aload 6
      // 02b: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 030: checkcast sixtwo/lI
      // 033: astore 7
      // 035: iload 3
      // 036: ifne 124
      // 039: aload 7
      // 03b: iload 3
      // 03c: ifne 05c
      // 03f: goto 046
      // 042: invokestatic sixtwo/lH.cgq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 045: athrow
      // 046: instanceof sixtwo/lK
      // 049: ifeq 0db
      // 04c: goto 053
      // 04f: invokestatic sixtwo/lH.cgq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 052: athrow
      // 053: aload 7
      // 055: goto 05c
      // 058: invokestatic sixtwo/lH.cgq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05b: athrow
      // 05c: checkcast sixtwo/lK
      // 05f: astore 8
      // 061: aload 8
      // 063: iload 3
      // 064: ifne 0dd
      // 067: invokeinterface sixtwo/lK.batchKey ()Lsixtwo/lN; 1
      // 06c: invokevirtual sixtwo/lN.batchable ()Z
      // 06f: ifeq 0db
      // 072: goto 079
      // 075: invokestatic sixtwo/lH.cgq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 078: athrow
      // 079: aload 8
      // 07b: invokeinterface sixtwo/lK.batchKey ()Lsixtwo/lN; 1
      // 080: astore 9
      // 082: iload 3
      // 083: ifne 0d7
      // 086: aload 9
      // 088: aload 5
      // 08a: invokevirtual sixtwo/lN.equals (Ljava/lang/Object;)Z
      // 08d: ifne 0d0
      // 090: goto 097
      // 093: invokestatic sixtwo/lH.cgq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 096: athrow
      // 097: aload 4
      // 099: iload 3
      // 09a: ifne 0ca
      // 09d: goto 0a4
      // 0a0: invokestatic sixtwo/lH.cgq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a3: athrow
      // 0a4: ifnull 0c1
      // 0a7: goto 0ae
      // 0aa: invokestatic sixtwo/lH.cgq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ad: athrow
      // 0ae: aload 4
      // 0b0: astore 10
      // 0b2: aconst_null
      // 0b3: astore 4
      // 0b5: invokestatic sixtwo/lN.immediate ()Lsixtwo/lN;
      // 0b8: astore 5
      // 0ba: aload 10
      // 0bc: invokeinterface sixtwo/lK.endBatch ()V 1
      // 0c1: aload 8
      // 0c3: invokeinterface sixtwo/lK.beginBatch ()V 1
      // 0c8: aload 8
      // 0ca: astore 4
      // 0cc: aload 9
      // 0ce: astore 5
      // 0d0: aload 8
      // 0d2: invokeinterface sixtwo/lK.renderIntoBatch ()V 1
      // 0d7: iload 3
      // 0d8: ifeq 01f
      // 0db: aload 4
      // 0dd: iload 3
      // 0de: ifne 100
      // 0e1: ifnull 0fe
      // 0e4: goto 0eb
      // 0e7: invokestatic sixtwo/lH.cgq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ea: athrow
      // 0eb: aload 4
      // 0ed: astore 8
      // 0ef: aconst_null
      // 0f0: astore 4
      // 0f2: invokestatic sixtwo/lN.immediate ()Lsixtwo/lN;
      // 0f5: astore 5
      // 0f7: aload 8
      // 0f9: invokeinterface sixtwo/lK.endBatch ()V 1
      // 0fe: aload 7
      // 100: invokeinterface sixtwo/lI.execute ()V 1
      // 105: iload 3
      // 106: ifeq 01f
      // 109: aload 4
      // 10b: iload 3
      // 10c: ifne 11b
      // 10f: ifnull 120
      // 112: goto 119
      // 115: invokestatic sixtwo/lH.cgq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 118: athrow
      // 119: aload 4
      // 11b: invokeinterface sixtwo/lK.endBatch ()V 1
      // 120: aload 0
      // 121: invokevirtual sixtwo/lH.cgo ()V
      // 124: goto 14e
      // 127: astore 11
      // 129: iload 3
      // 12a: ifne 14b
      // 12d: aload 4
      // 12f: ifnull 147
      // 132: goto 139
      // 135: invokestatic sixtwo/lH.cgq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 138: athrow
      // 139: aload 4
      // 13b: invokeinterface sixtwo/lK.endBatch ()V 1
      // 140: goto 147
      // 143: invokestatic sixtwo/lH.cgq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 146: athrow
      // 147: aload 0
      // 148: invokevirtual sixtwo/lH.cgo ()V
      // 14b: aload 11
      // 14d: athrow
      // 14e: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 151: ifnonnull 16b
      // 154: iload 3
      // 155: ifeq 167
      // 158: goto 15f
      // 15b: invokestatic sixtwo/lH.cgq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 15e: athrow
      // 15f: bipush 0
      // 160: goto 168
      // 163: invokestatic sixtwo/lH.cgq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 166: athrow
      // 167: bipush 1
      // 168: invokestatic sixtwo/lN.b (Z)V
      // 16b: return
   }

   public void cgo() {
      this.TeJgs.clear();
   }

   private static MatchException cgq(MatchException var0) {
      return var0;
   }

   public boolean cgn() {
      return this.TeJgs.isEmpty();
   }

   private static String cgr(byte[] var0) {
      int var1 = 0;
      int var2;
      char[] var3 = new char[var2 = var0.length];

      for (int var4 = 0; var4 < var2; var4++) {
         int var5;
         if ((var5 = 255 & var0[var4]) < 192) {
            var3[var1++] = (char)var5;
         } else if (var5 < 224) {
            char var6 = (char)((char)(var5 & 31) << 6);
            byte var8 = var0[++var4];
            var6 = (char)(var6 | (char)(var8 & 63));
            var3[var1++] = var6;
         } else if (var4 < var2 - 2) {
            char var12 = (char)((char)(var5 & 15) << '\f');
            byte var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63) << 6);
            var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63));
            var3[var1++] = var12;
         }
      }

      return new String(var3, 0, var1);
   }
}
