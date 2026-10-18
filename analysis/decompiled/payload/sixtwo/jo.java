package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_276;

public final class jo {
   private static final jo fYlIq;
   private static final ThreadLocal<jn> wEOIE;
   private static final ThreadLocal<class_276> hdKgo;
   private volatile boolean ifpCk;
   private volatile boolean WZYbo;
   private jp vUdoJ;
   private jp VZxOZ;
   private jp wnqWl;
   private jp nBoiY;
   private jp eFXCP;
   private jp rQpiC;
   private lO ErHsl;
   private lP mauej;
   private static final long SuwYq = gb.aYR(-36095552564910604L, -9047621285772579722L, MethodHandles.lookup().lookupClass()).a(165376727831294L);
   private static final String[] Jdstx;
   private static final String[] NlbpS;
   private static final Map DoEeQ = new HashMap(13);
   private static final long[] YKowF;
   private static final Integer[] yOISF;
   private static final Map oVZWQ;

   public static class_276 bEh() {
      long var0 = SuwYq ^ 67308111151477L;
      iS[] var10000 = jm.bDZ();
      class_276 var3 = hdKgo.get();
      iS[] var2 = var10000;

      try {
         if (var2 == null) {
            return var3;
         }

         if (var3 != null) {
            return var3;
         }
      } catch (IllegalStateException var4) {
         throw bFb(var4);
      }

      return rD.dlmvG.method_1522();
   }

   public static class_276 bEk() {
      return fYlIq.bEH(fYlIq.vUdoJ);
   }

   public static class_276 bEi() {
      long var0 = SuwYq ^ 63367122413696L;
      jn var2 = wEOIE.get();

      try {
         if (var2 == null) {
            return null;
         }
      } catch (IllegalStateException var3) {
         throw bFb(var3);
      }

      return fYlIq.bEE(var2);
   }

   public static class_276 bEl() {
      return fYlIq.bEH(fYlIq.wnqWl);
   }

   public static class_276 bEj() {
      long var0 = SuwYq ^ 60936807560513L;
      jn var2 = wEOIE.get();

      try {
         if (var2 == null) {
            return null;
         }
      } catch (IllegalStateException var3) {
         throw bFb(var3);
      }

      return fYlIq.bEF(var2);
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   private void bEw() {
      long var1 = SuwYq ^ 88083106209449L;
      iS[] var3 = jm.bDZ();

      jo var9;
      label49: {
         label42: {
            try {
               var10000 = this.ifpCk;
               if (var3 == null) {
                  break label42;
               }

               if (!this.ifpCk) {
                  return;
               }
            } catch (Throwable var8) {
               throw bFb(var8);
            }

            try {
               this.bEA();
               var9 = this;
               if (var3 == null) {
                  break label49;
               }

               var10000 = this.bER();
            } catch (Throwable var7) {
               throw bFb(var7);
            }
         }

         if (!var10000) {
            return;
         }

         try {
            this.bEB();
            this.bEM(this.vUdoJ);
            this.bEM(this.wnqWl);
            this.bEM(this.eFXCP);
            this.bEM(this.VZxOZ);
            this.bEM(this.nBoiY);
            var9 = this;
         } catch (Throwable var6) {
            return;
         }
      }

      try {
         var9.bEM(this.rQpiC);
      } catch (Throwable var5) {
      }
   }

   private void bEU(int param1, int param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jo.SuwYq J
      // 03: ldc2_w 21553412351506
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 0b: astore 5
      // 0d: aload 0
      // 0e: aload 5
      // 10: ifnull 28
      // 13: getfield sixtwo/jo.ifpCk Z
      // 16: ifeq 57
      // 19: goto 20
      // 1c: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1f: athrow
      // 20: aload 0
      // 21: goto 28
      // 24: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 27: athrow
      // 28: getfield sixtwo/jo.mauej Lsixtwo/lP;
      // 2b: aload 5
      // 2d: ifnull 45
      // 30: ifnull 57
      // 33: goto 3a
      // 36: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 39: athrow
      // 3a: aload 0
      // 3b: getfield sixtwo/jo.mauej Lsixtwo/lP;
      // 3e: goto 45
      // 41: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 44: athrow
      // 45: aload 5
      // 47: ifnull 60
      // 4a: invokevirtual sixtwo/lP.cgW ()Z
      // 4d: ifne 5c
      // 50: goto 57
      // 53: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 56: athrow
      // 57: return
      // 58: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 5b: athrow
      // 5c: aload 0
      // 5d: getfield sixtwo/jo.mauej Lsixtwo/lP;
      // 60: iload 1
      // 61: iload 2
      // 62: invokevirtual sixtwo/lP.chf (II)V
      // 65: return
   }

   private void bEC() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jo.SuwYq J
      // 03: ldc2_w 90201217670531
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 26
      // 11: getfield sixtwo/jo.ErHsl Lsixtwo/lO;
      // 14: ifnonnull 30
      // 17: goto 1e
      // 1a: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: aload 0
      // 1f: goto 26
      // 22: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 25: athrow
      // 26: new sixtwo/lO
      // 29: dup
      // 2a: invokespecial sixtwo/lO.<init> ()V
      // 2d: putfield sixtwo/jo.ErHsl Lsixtwo/lO;
      // 30: return
   }

   private void bEN(jp var1) {
      long var2 = SuwYq ^ 31310303966591L;
      this.bEP(var1, 1, bFi<"x">(26637, 7569200844432972574L ^ var2), 1, bFi<"x">(5820, 1445646379341505966L ^ var2));
   }

   private void bEB() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/jo.SuwYq J
      // 003: ldc2_w 61916781605442
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 00b: astore 3
      // 00c: aload 0
      // 00d: getfield sixtwo/jo.vUdoJ Lsixtwo/jp;
      // 010: aload 3
      // 011: ifnull 04d
      // 014: ifnonnull 042
      // 017: goto 01e
      // 01a: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 01d: athrow
      // 01e: aload 0
      // 01f: new sixtwo/jp
      // 022: dup
      // 023: sipush 15228
      // 026: ldc2_w 8264015025950206687
      // 029: lload 1
      // 02a: lxor
      // 02b: invokedynamic l (IJ)Ljava/lang/String; bsm=sixtwo/jo.bFf (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 030: bipush 1
      // 031: invokespecial sixtwo/jp.<init> (Ljava/lang/String;Z)V
      // 034: putfield sixtwo/jo.vUdoJ Lsixtwo/jp;
      // 037: aload 3
      // 038: ifnonnull 050
      // 03b: goto 042
      // 03e: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 041: athrow
      // 042: aload 0
      // 043: getfield sixtwo/jo.vUdoJ Lsixtwo/jp;
      // 046: goto 04d
      // 049: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 04c: athrow
      // 04d: invokevirtual sixtwo/jp.bFj ()V
      // 050: aload 0
      // 051: getfield sixtwo/jo.wnqWl Lsixtwo/jp;
      // 054: aload 3
      // 055: ifnull 091
      // 058: ifnonnull 086
      // 05b: goto 062
      // 05e: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 061: athrow
      // 062: aload 0
      // 063: new sixtwo/jp
      // 066: dup
      // 067: sipush 13908
      // 06a: ldc2_w 2067362627351095288
      // 06d: lload 1
      // 06e: lxor
      // 06f: invokedynamic l (IJ)Ljava/lang/String; bsm=sixtwo/jo.bFf (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 074: bipush 1
      // 075: invokespecial sixtwo/jp.<init> (Ljava/lang/String;Z)V
      // 078: putfield sixtwo/jo.wnqWl Lsixtwo/jp;
      // 07b: aload 3
      // 07c: ifnonnull 094
      // 07f: goto 086
      // 082: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 085: athrow
      // 086: aload 0
      // 087: getfield sixtwo/jo.wnqWl Lsixtwo/jp;
      // 08a: goto 091
      // 08d: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 090: athrow
      // 091: invokevirtual sixtwo/jp.bFj ()V
      // 094: aload 0
      // 095: getfield sixtwo/jo.eFXCP Lsixtwo/jp;
      // 098: aload 3
      // 099: ifnull 0d5
      // 09c: ifnonnull 0ca
      // 09f: goto 0a6
      // 0a2: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0a5: athrow
      // 0a6: aload 0
      // 0a7: new sixtwo/jp
      // 0aa: dup
      // 0ab: sipush 7621
      // 0ae: ldc2_w 3700130139946749027
      // 0b1: lload 1
      // 0b2: lxor
      // 0b3: invokedynamic l (IJ)Ljava/lang/String; bsm=sixtwo/jo.bFf (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0b8: bipush 0
      // 0b9: invokespecial sixtwo/jp.<init> (Ljava/lang/String;Z)V
      // 0bc: putfield sixtwo/jo.eFXCP Lsixtwo/jp;
      // 0bf: aload 3
      // 0c0: ifnonnull 0d8
      // 0c3: goto 0ca
      // 0c6: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0c9: athrow
      // 0ca: aload 0
      // 0cb: getfield sixtwo/jo.eFXCP Lsixtwo/jp;
      // 0ce: goto 0d5
      // 0d1: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0d4: athrow
      // 0d5: invokevirtual sixtwo/jp.bFj ()V
      // 0d8: aload 0
      // 0d9: getfield sixtwo/jo.VZxOZ Lsixtwo/jp;
      // 0dc: aload 3
      // 0dd: ifnull 119
      // 0e0: ifnonnull 10e
      // 0e3: goto 0ea
      // 0e6: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0e9: athrow
      // 0ea: aload 0
      // 0eb: new sixtwo/jp
      // 0ee: dup
      // 0ef: sipush 27053
      // 0f2: ldc2_w 5315628105105602570
      // 0f5: lload 1
      // 0f6: lxor
      // 0f7: invokedynamic l (IJ)Ljava/lang/String; bsm=sixtwo/jo.bFf (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0fc: bipush 0
      // 0fd: invokespecial sixtwo/jp.<init> (Ljava/lang/String;Z)V
      // 100: putfield sixtwo/jo.VZxOZ Lsixtwo/jp;
      // 103: aload 3
      // 104: ifnonnull 11c
      // 107: goto 10e
      // 10a: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 10d: athrow
      // 10e: aload 0
      // 10f: getfield sixtwo/jo.VZxOZ Lsixtwo/jp;
      // 112: goto 119
      // 115: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 118: athrow
      // 119: invokevirtual sixtwo/jp.bFj ()V
      // 11c: aload 0
      // 11d: getfield sixtwo/jo.nBoiY Lsixtwo/jp;
      // 120: aload 3
      // 121: ifnull 15d
      // 124: ifnonnull 152
      // 127: goto 12e
      // 12a: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 12d: athrow
      // 12e: aload 0
      // 12f: new sixtwo/jp
      // 132: dup
      // 133: sipush 15246
      // 136: ldc2_w 1902717009022167598
      // 139: lload 1
      // 13a: lxor
      // 13b: invokedynamic l (IJ)Ljava/lang/String; bsm=sixtwo/jo.bFf (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 140: bipush 0
      // 141: invokespecial sixtwo/jp.<init> (Ljava/lang/String;Z)V
      // 144: putfield sixtwo/jo.nBoiY Lsixtwo/jp;
      // 147: aload 3
      // 148: ifnonnull 160
      // 14b: goto 152
      // 14e: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 151: athrow
      // 152: aload 0
      // 153: getfield sixtwo/jo.nBoiY Lsixtwo/jp;
      // 156: goto 15d
      // 159: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 15c: athrow
      // 15d: invokevirtual sixtwo/jp.bFj ()V
      // 160: aload 0
      // 161: getfield sixtwo/jo.rQpiC Lsixtwo/jp;
      // 164: aload 3
      // 165: ifnull 1a1
      // 168: ifnonnull 196
      // 16b: goto 172
      // 16e: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 171: athrow
      // 172: aload 0
      // 173: new sixtwo/jp
      // 176: dup
      // 177: sipush 11727
      // 17a: ldc2_w 6786629658817936493
      // 17d: lload 1
      // 17e: lxor
      // 17f: invokedynamic l (IJ)Ljava/lang/String; bsm=sixtwo/jo.bFf (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 184: bipush 0
      // 185: invokespecial sixtwo/jp.<init> (Ljava/lang/String;Z)V
      // 188: putfield sixtwo/jo.rQpiC Lsixtwo/jp;
      // 18b: aload 3
      // 18c: ifnonnull 1a4
      // 18f: goto 196
      // 192: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 195: athrow
      // 196: aload 0
      // 197: getfield sixtwo/jo.rQpiC Lsixtwo/jp;
      // 19a: goto 1a1
      // 19d: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1a0: athrow
      // 1a1: invokevirtual sixtwo/jp.bFj ()V
      // 1a4: return
   }

   private static Throwable bFb(Throwable var0) {
      return var0;
   }

   private jp bEF(jn var1) {
      long var2 = SuwYq ^ 73826621810396L;

      try {
         if (var1 == jn.pWlAK) {
            return this.wnqWl;
         }
      } catch (IllegalStateException var4) {
         throw bFb(var4);
      }

      return this.nBoiY;
   }

   public static boolean bEg() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jo.SuwYq J
      // 03: ldc2_w 106099364778726
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 0b: astore 2
      // 0c: invokestatic sixtwo/rt.djy ()Z
      // 0f: aload 2
      // 10: ifnull 24
      // 13: ifeq 23
      // 16: goto 1d
      // 19: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1c: athrow
      // 1d: bipush 0
      // 1e: ireturn
      // 1f: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 22: athrow
      // 23: bipush 1
      // 24: ireturn
   }

   private boolean bES() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jo.SuwYq J
      // 03: ldc2_w 33232648633751
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/jo.ifpCk Z
      // 10: aload 3
      // 11: ifnull 1f
      // 14: ifne 20
      // 17: goto 1e
      // 1a: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: bipush 0
      // 1f: ireturn
      // 20: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 23: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 26: aload 3
      // 27: ifnull 41
      // 2a: ifnull 74
      // 2d: goto 34
      // 30: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 33: athrow
      // 34: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 37: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 3a: goto 41
      // 3d: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 40: athrow
      // 41: instanceof sixtwo/av
      // 44: aload 3
      // 45: ifnull 62
      // 48: ifne 74
      // 4b: goto 52
      // 4e: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 51: athrow
      // 52: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 55: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 58: instanceof net/minecraft/class_408
      // 5b: goto 62
      // 5e: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 61: athrow
      // 62: aload 3
      // 63: ifnull 71
      // 66: ifne 74
      // 69: goto 70
      // 6c: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 6f: athrow
      // 70: bipush 1
      // 71: goto 75
      // 74: bipush 0
      // 75: ireturn
   }

   private static CallSite bFf(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bFe".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/jo" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private class_276 bEI(RenderPipeline param1, class_276 param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jo.SuwYq J
      // 03: ldc2_w 65622362310353
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 0b: getstatic sixtwo/jo.wEOIE Ljava/lang/ThreadLocal;
      // 0e: invokevirtual java/lang/ThreadLocal.get ()Ljava/lang/Object;
      // 11: checkcast sixtwo/jn
      // 14: astore 6
      // 16: astore 5
      // 18: aload 6
      // 1a: ifnull 45
      // 1d: aload 0
      // 1e: invokevirtual sixtwo/jo.bER ()Z
      // 21: aload 5
      // 23: ifnull 42
      // 26: goto 2d
      // 29: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2c: athrow
      // 2d: ifeq 45
      // 30: goto 37
      // 33: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 36: athrow
      // 37: aload 1
      // 38: invokestatic sixtwo/kV.bWo (Lcom/mojang/blaze3d/pipeline/RenderPipeline;)Z
      // 3b: goto 42
      // 3e: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 41: athrow
      // 42: ifne 4b
      // 45: aload 2
      // 46: areturn
      // 47: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 4a: athrow
      // 4b: aload 0
      // 4c: aload 6
      // 4e: invokevirtual sixtwo/jo.bEE (Lsixtwo/jn;)Lsixtwo/jp;
      // 51: astore 7
      // 53: aload 2
      // 54: aload 5
      // 56: ifnull 6d
      // 59: aload 7
      // 5b: if_acmpeq 6e
      // 5e: goto 65
      // 61: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 64: athrow
      // 65: aload 2
      // 66: goto 6d
      // 69: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 6c: athrow
      // 6d: areturn
      // 6e: aload 0
      // 6f: aload 6
      // 71: invokevirtual sixtwo/jo.bEF (Lsixtwo/jn;)Lsixtwo/jp;
      // 74: astore 8
      // 76: aload 8
      // 78: aload 5
      // 7a: ifnull aa
      // 7d: ifnull a2
      // 80: goto 87
      // 83: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 86: athrow
      // 87: aload 8
      // 89: aload 5
      // 8b: ifnull bd
      // 8e: goto 95
      // 91: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 94: athrow
      // 95: invokevirtual sixtwo/jp.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 98: ifnonnull ab
      // 9b: goto a2
      // 9e: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // a1: athrow
      // a2: aload 2
      // a3: goto aa
      // a6: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // a9: athrow
      // aa: areturn
      // ab: aload 0
      // ac: aload 6
      // ae: aload 7
      // b0: aload 8
      // b2: invokevirtual sixtwo/jo.bEJ (Lsixtwo/jn;Lsixtwo/jp;Lsixtwo/jp;)V
      // b5: aload 8
      // b7: bipush 1
      // b8: putfield sixtwo/jp.LHtaR Z
      // bb: aload 8
      // bd: areturn
   }

   private jp bEG(jn var1) {
      long var2 = SuwYq ^ 85879651409107L;

      try {
         if (var1 == jn.pWlAK) {
            return this.eFXCP;
         }
      } catch (IllegalStateException var4) {
         throw bFb(var4);
      }

      return this.rQpiC;
   }

   private void bEz() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jo.SuwYq J
      // 03: ldc2_w 33196289229748
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 0b: aload 0
      // 0c: invokevirtual sixtwo/jo.bEC ()V
      // 0f: astore 3
      // 10: aload 0
      // 11: aload 3
      // 12: ifnull 4a
      // 15: getfield sixtwo/jo.ErHsl Lsixtwo/lO;
      // 18: ifnonnull 27
      // 1b: goto 22
      // 1e: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 21: athrow
      // 22: return
      // 23: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 26: athrow
      // 27: invokestatic sixtwo/lQ.chQ ()V
      // 2a: invokestatic sixtwo/lQ.chS ()V
      // 2d: aload 0
      // 2e: aload 0
      // 2f: getfield sixtwo/jo.vUdoJ Lsixtwo/jp;
      // 32: invokevirtual sixtwo/jo.bEN (Lsixtwo/jp;)V
      // 35: aload 0
      // 36: aload 0
      // 37: getfield sixtwo/jo.wnqWl Lsixtwo/jp;
      // 3a: aload 0
      // 3b: getfield sixtwo/jo.eFXCP Lsixtwo/jp;
      // 3e: invokevirtual sixtwo/jo.bEO (Lsixtwo/jp;Lsixtwo/jp;)V
      // 41: aload 0
      // 42: aload 0
      // 43: getfield sixtwo/jo.VZxOZ Lsixtwo/jp;
      // 46: invokevirtual sixtwo/jo.bEN (Lsixtwo/jp;)V
      // 49: aload 0
      // 4a: aload 0
      // 4b: getfield sixtwo/jo.nBoiY Lsixtwo/jp;
      // 4e: aload 0
      // 4f: getfield sixtwo/jo.rQpiC Lsixtwo/jp;
      // 52: invokevirtual sixtwo/jo.bEO (Lsixtwo/jp;Lsixtwo/jp;)V
      // 55: invokestatic sixtwo/lQ.chT ()V
      // 58: invokestatic sixtwo/lQ.chR ()V
      // 5b: goto 69
      // 5e: astore 4
      // 60: invokestatic sixtwo/lQ.chT ()V
      // 63: invokestatic sixtwo/lQ.chR ()V
      // 66: goto 69
      // 69: return
   }

   private boolean bER() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jo.SuwYq J
      // 03: ldc2_w 116069544514257
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 26
      // 11: getfield sixtwo/jo.ifpCk Z
      // 14: ifeq 57
      // 17: goto 1e
      // 1a: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: aload 0
      // 1f: goto 26
      // 22: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 25: athrow
      // 26: getfield sixtwo/jo.mauej Lsixtwo/lP;
      // 29: aload 3
      // 2a: ifnull 42
      // 2d: ifnull 57
      // 30: goto 37
      // 33: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 36: athrow
      // 37: aload 0
      // 38: getfield sixtwo/jo.mauej Lsixtwo/lP;
      // 3b: goto 42
      // 3e: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 41: athrow
      // 42: invokevirtual sixtwo/lP.cgW ()Z
      // 45: aload 3
      // 46: ifnull 54
      // 49: ifeq 57
      // 4c: goto 53
      // 4f: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 52: athrow
      // 53: bipush 1
      // 54: goto 58
      // 57: bipush 0
      // 58: ireturn
   }

   private void bEK(class_276 param1, jp param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jo.SuwYq J
      // 03: ldc2_w 35985050684108
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 0b: astore 5
      // 0d: aload 1
      // 0e: aload 5
      // 10: ifnull 1e
      // 13: ifnull 4e
      // 16: goto 1d
      // 19: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1c: athrow
      // 1d: aload 1
      // 1e: invokevirtual net/minecraft/class_276.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 21: ifnull 4e
      // 24: aload 2
      // 25: aload 5
      // 27: ifnull 3c
      // 2a: goto 31
      // 2d: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 30: athrow
      // 31: ifnull 4e
      // 34: goto 3b
      // 37: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3a: athrow
      // 3b: aload 2
      // 3c: aload 5
      // 3e: ifnull 54
      // 41: invokevirtual sixtwo/jp.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 44: ifnonnull 53
      // 47: goto 4e
      // 4a: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 4d: athrow
      // 4e: return
      // 4f: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 52: athrow
      // 53: aload 1
      // 54: getfield net/minecraft/class_276.field_1482 I
      // 57: aload 2
      // 58: getfield sixtwo/jp.field_1482 I
      // 5b: invokestatic java/lang/Math.min (II)I
      // 5e: istore 6
      // 60: aload 1
      // 61: getfield net/minecraft/class_276.field_1481 I
      // 64: aload 2
      // 65: getfield sixtwo/jp.field_1481 I
      // 68: invokestatic java/lang/Math.min (II)I
      // 6b: istore 7
      // 6d: iload 6
      // 6f: aload 5
      // 71: ifnull 80
      // 74: ifle 83
      // 77: goto 7e
      // 7a: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 7d: athrow
      // 7e: iload 7
      // 80: ifgt 84
      // 83: return
      // 84: aload 1
      // 85: invokevirtual net/minecraft/class_276.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 88: aload 2
      // 89: invokevirtual sixtwo/jp.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 8c: bipush 0
      // 8d: bipush 0
      // 8e: bipush 0
      // 8f: bipush 0
      // 90: bipush 0
      // 91: iload 6
      // 93: iload 7
      // 95: invokestatic sixtwo/lu.cbf (Lcom/mojang/blaze3d/textures/GpuTexture;Lcom/mojang/blaze3d/textures/GpuTexture;IIIIIII)V
      // 98: return
   }

   private void bEL(class_276 param1, jp param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jo.SuwYq J
      // 03: ldc2_w 136365286169160
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 0b: astore 5
      // 0d: aload 1
      // 0e: aload 5
      // 10: ifnull 1e
      // 13: ifnull 42
      // 16: goto 1d
      // 19: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1c: athrow
      // 1d: aload 1
      // 1e: invokevirtual net/minecraft/class_276.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 21: ifnull 42
      // 24: aload 2
      // 25: aload 5
      // 27: ifnull 3c
      // 2a: goto 31
      // 2d: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 30: athrow
      // 31: ifnull 42
      // 34: goto 3b
      // 37: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3a: athrow
      // 3b: aload 2
      // 3c: invokevirtual sixtwo/jp.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 3f: ifnonnull 47
      // 42: return
      // 43: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 46: athrow
      // 47: getstatic sixtwo/kR.cSPla Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 4a: ifnull 5a
      // 4d: getstatic sixtwo/jL.TruIk Lsixtwo/jN;
      // 50: ifnonnull 5f
      // 53: goto 5a
      // 56: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 59: athrow
      // 5a: return
      // 5b: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 5e: athrow
      // 5f: getstatic sixtwo/kR.cSPla Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 62: aload 2
      // 63: aload 1
      // 64: invokedynamic accept (Lnet/minecraft/class_276;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/jo.bFa (Lnet/minecraft/class_276;Lcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 69: invokestatic sixtwo/kn.bQq (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_276;Ljava/util/function/Consumer;)V
      // 6c: return
   }

   private synchronized void bEu(boolean param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jo.SuwYq J
      // 03: ldc2_w 16415117638243
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/jo.ifpCk Z
      // 11: aload 4
      // 13: ifnull 38
      // 16: iload 1
      // 17: if_icmpne 26
      // 1a: goto 21
      // 1d: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 20: athrow
      // 21: return
      // 22: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 25: athrow
      // 26: aload 0
      // 27: aload 4
      // 29: ifnull 3c
      // 2c: iload 1
      // 2d: putfield sixtwo/jo.ifpCk Z
      // 30: iload 1
      // 31: goto 38
      // 34: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 37: athrow
      // 38: ifne 3f
      // 3b: aload 0
      // 3c: invokevirtual sixtwo/jo.bEv ()V
      // 3f: return
   }

   public static boolean bEf() {
      long var0 = SuwYq ^ 49258654473540L;

      try {
         if (wEOIE.get() != null) {
            return true;
         }
      } catch (IllegalStateException var2) {
         throw bFb(var2);
      }

      return false;
   }

   private void bEV() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jo.SuwYq J
      // 03: ldc2_w 22255617507723
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 3
      // 0d: ifnull 28
      // 10: invokestatic com/mojang/blaze3d/systems/RenderSystem.isOnRenderThread ()Z
      // 13: ifeq 2c
      // 16: goto 1d
      // 19: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1c: athrow
      // 1d: aload 0
      // 1e: invokevirtual sixtwo/jo.bEW ()V
      // 21: goto 28
      // 24: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 27: athrow
      // 28: aload 3
      // 29: ifnonnull 3c
      // 2c: aload 0
      // 2d: invokedynamic run (Lsixtwo/jo;)Ljava/lang/Runnable; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()V, sixtwo/jo.bEW ()V, ()V ]
      // 32: invokestatic com/mojang/blaze3d/systems/RenderSystem.queueFencedTask (Ljava/lang/Runnable;)V
      // 35: goto 3c
      // 38: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3b: athrow
      // 3c: goto 41
      // 3f: astore 4
      // 41: return
   }

   private void bEA() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jo.SuwYq J
      // 03: ldc2_w 41992852164519
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/jo.mauej Lsixtwo/lP;
      // 10: aload 3
      // 11: ifnull 3f
      // 14: ifnonnull 30
      // 17: goto 1e
      // 1a: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: aload 0
      // 1f: new sixtwo/lP
      // 22: dup
      // 23: invokespecial sixtwo/lP.<init> ()V
      // 26: putfield sixtwo/jo.mauej Lsixtwo/lP;
      // 29: goto 30
      // 2c: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2f: athrow
      // 30: aload 0
      // 31: aload 3
      // 32: ifnull 54
      // 35: getfield sixtwo/jo.mauej Lsixtwo/lP;
      // 38: goto 3f
      // 3b: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3e: athrow
      // 3f: invokevirtual sixtwo/lP.cgW ()Z
      // 42: ifne 53
      // 45: aload 0
      // 46: getfield sixtwo/jo.mauej Lsixtwo/lP;
      // 49: invokevirtual sixtwo/lP.cgX ()V
      // 4c: goto 53
      // 4f: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 52: athrow
      // 53: aload 0
      // 54: aload 0
      // 55: getfield sixtwo/jo.mauej Lsixtwo/lP;
      // 58: invokevirtual sixtwo/lP.cgW ()Z
      // 5b: putfield sixtwo/jo.WZYbo Z
      // 5e: return
   }

   public static boolean bEd() {
      return fYlIq.ifpCk;
   }

   private jp bEE(jn var1) {
      long var2 = SuwYq ^ 77636142902162L;

      try {
         if (var1 == jn.pWlAK) {
            return this.vUdoJ;
         }
      } catch (IllegalStateException var4) {
         throw bFb(var4);
      }

      return this.VZxOZ;
   }

   private class_276 bEH(jp param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jo.SuwYq J
      // 03: ldc2_w 2078901525637
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/jo.ifpCk Z
      // 11: ifeq 58
      // 14: aload 1
      // 15: aload 4
      // 17: ifnull 2c
      // 1a: goto 21
      // 1d: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 20: athrow
      // 21: ifnull 58
      // 24: goto 2b
      // 27: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2a: athrow
      // 2b: aload 1
      // 2c: aload 4
      // 2e: ifnull 46
      // 31: getfield sixtwo/jp.LHtaR Z
      // 34: ifeq 58
      // 37: goto 3e
      // 3a: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3d: athrow
      // 3e: aload 1
      // 3f: goto 46
      // 42: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 45: athrow
      // 46: aload 4
      // 48: ifnull 5f
      // 4b: invokevirtual sixtwo/jp.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 4e: ifnonnull 5e
      // 51: goto 58
      // 54: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 57: athrow
      // 58: aconst_null
      // 59: areturn
      // 5a: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 5d: athrow
      // 5e: aload 1
      // 5f: areturn
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   private void bEx() {
      long var1 = SuwYq ^ 126333645477197L;
      iS[] var3 = jm.bDZ();

      boolean var10000;
      label95: {
         try {
            var10000 = this.ifpCk;
            if (var3 == null) {
               break label95;
            }

            if (!this.ifpCk) {
               return;
            }
         } catch (Throwable var16) {
            throw bFb(var16);
         }

         try {
            var10000 = this.bES();
         } catch (Throwable var8) {
            return;
         }
      }

      label86: {
         try {
            label84: {
               try {
                  if (var3 == null) {
                     break label86;
                  }

                  if (!var10000) {
                     break label84;
                  }
               } catch (Throwable var14) {
                  throw bFb(var14);
               }

               this.bET();
               return;
            }
         } catch (Throwable var15) {
            return;
         }

         try {
            this.bEA();
            var10000 = this.bER();
         } catch (Throwable var7) {
            return;
         }
      }

      label102: {
         label74: {
            try {
               try {
                  if (var3 == null) {
                     break label74;
                  }

                  if (!var10000) {
                     return;
                  }
               } catch (Throwable var12) {
                  throw bFb(var12);
               }
            } catch (Throwable var13) {
               return;
            }

            try {
               try {
                  this.bEB();
                  var17 = this.mauej;
                  if (var3 == null) {
                     break label102;
                  }

                  var10000 = this.mauej.cgY();
               } catch (Throwable var9) {
                  throw bFb(var9);
               }
            } catch (Throwable var10) {
               return;
            }
         }

         try {
            if (!var10000) {
               return;
            }
         } catch (Throwable var11) {
            return;
         }

         try {
            var17 = this.mauej;
         } catch (Throwable var6) {
            return;
         }
      }

      try {
         var17.cgZ(this::bEz);
      } catch (Throwable var5) {
      }
   }

   private void bEO(jp var1, jp var2) {
      long var3 = SuwYq ^ 23575982767555L;
      this.bEQ(var1, var2, 1, bFi<"x">(5820, 1445654038197742866L ^ var3), 1, bFi<"x">(5820, 1445654038197742866L ^ var3), 1);
   }

   private void bEJ(jn param1, jp param2, jp param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jo.SuwYq J
      // 03: ldc2_w 85673295302451
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 0c: astore 6
      // 0e: aload 3
      // 0f: aload 6
      // 11: ifnull 2b
      // 14: getfield sixtwo/jp.LHtaR Z
      // 17: ifeq 26
      // 1a: goto 21
      // 1d: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 20: athrow
      // 21: return
      // 22: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 25: athrow
      // 26: aload 0
      // 27: aload 1
      // 28: invokevirtual sixtwo/jo.bEG (Lsixtwo/jn;)Lsixtwo/jp;
      // 2b: astore 7
      // 2d: aload 7
      // 2f: aload 6
      // 31: ifnull 40
      // 34: ifnull 52
      // 37: goto 3e
      // 3a: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3d: athrow
      // 3e: aload 7
      // 40: invokevirtual sixtwo/jp.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 43: aload 6
      // 45: ifnull 59
      // 48: ifnonnull 53
      // 4b: goto 52
      // 4e: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 51: athrow
      // 52: return
      // 53: getstatic sixtwo/jo.hdKgo Ljava/lang/ThreadLocal;
      // 56: invokevirtual java/lang/ThreadLocal.get ()Ljava/lang/Object;
      // 59: checkcast net/minecraft/class_276
      // 5c: astore 8
      // 5e: aload 6
      // 60: ifnull 93
      // 63: aload 8
      // 65: ifnonnull 77
      // 68: goto 6f
      // 6b: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 6e: athrow
      // 6f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 72: invokevirtual net/minecraft/class_310.method_1522 ()Lnet/minecraft/class_276;
      // 75: astore 8
      // 77: aload 0
      // 78: aload 8
      // 7a: aload 7
      // 7c: invokevirtual sixtwo/jo.bEK (Lnet/minecraft/class_276;Lsixtwo/jp;)V
      // 7f: aload 0
      // 80: aload 2
      // 81: aload 7
      // 83: invokevirtual sixtwo/jo.bEL (Lnet/minecraft/class_276;Lsixtwo/jp;)V
      // 86: aload 0
      // 87: aload 7
      // 89: aload 3
      // 8a: invokevirtual sixtwo/jo.bEK (Lnet/minecraft/class_276;Lsixtwo/jp;)V
      // 8d: aload 7
      // 8f: bipush 1
      // 90: putfield sixtwo/jp.LHtaR Z
      // 93: return
   }

   public static void bEn() {
      fYlIq.bEx();
   }

   public static void bEc(boolean var0) {
      fYlIq.bEu(var0);
   }

   public static void bEo(int var0, int var1) {
      fYlIq.bEU(var0, var1);
   }

   public static boolean bEe() {
      return fYlIq.WZYbo;
   }

   public static void bEm() {
      fYlIq.bEw();
   }

   private void bEy(jn param1, Runnable param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/jo.SuwYq J
      // 003: ldc2_w 56718861567490
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 00b: astore 5
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/jo.bES ()Z
      // 011: aload 5
      // 013: ifnull 031
      // 016: ifeq 021
      // 019: goto 020
      // 01c: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 01f: athrow
      // 020: return
      // 021: aload 0
      // 022: aload 5
      // 024: ifnull 041
      // 027: invokevirtual sixtwo/jo.bER ()Z
      // 02a: goto 031
      // 02d: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 030: athrow
      // 031: ifeq 044
      // 034: getstatic sixtwo/jo.wEOIE Ljava/lang/ThreadLocal;
      // 037: invokevirtual java/lang/ThreadLocal.get ()Ljava/lang/Object;
      // 03a: goto 041
      // 03d: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 040: athrow
      // 041: ifnull 04f
      // 044: aload 2
      // 045: invokeinterface java/lang/Runnable.run ()V 1
      // 04a: return
      // 04b: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 04e: athrow
      // 04f: aload 0
      // 050: invokevirtual sixtwo/jo.bEB ()V
      // 053: aload 0
      // 054: aload 1
      // 055: invokevirtual sixtwo/jo.bEE (Lsixtwo/jn;)Lsixtwo/jp;
      // 058: astore 6
      // 05a: aload 0
      // 05b: aload 1
      // 05c: invokevirtual sixtwo/jo.bEF (Lsixtwo/jn;)Lsixtwo/jp;
      // 05f: astore 7
      // 061: aload 6
      // 063: aload 5
      // 065: ifnull 074
      // 068: ifnull 086
      // 06b: goto 072
      // 06e: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 071: athrow
      // 072: aload 6
      // 074: aload 5
      // 076: ifnull 0af
      // 079: invokevirtual sixtwo/jp.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 07c: ifnonnull 0a9
      // 07f: goto 086
      // 082: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 085: athrow
      // 086: new java/lang/IllegalStateException
      // 089: dup
      // 08a: aload 1
      // 08b: invokestatic java/lang/String.valueOf (Ljava/lang/Object;)Ljava/lang/String;
      // 08e: sipush 30160
      // 091: ldc2_w 5546403830681210941
      // 094: lload 3
      // 095: lxor
      // 096: invokedynamic l (IJ)Ljava/lang/String; bsm=sixtwo/jo.bFf (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 09b: swap
      // 09c: invokedynamic makeConcatWithConstants (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001\u0001" ]
      // 0a1: invokespecial java/lang/IllegalStateException.<init> (Ljava/lang/String;)V
      // 0a4: athrow
      // 0a5: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0a8: athrow
      // 0a9: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0ac: invokevirtual net/minecraft/class_310.method_1522 ()Lnet/minecraft/class_276;
      // 0af: astore 8
      // 0b1: aload 5
      // 0b3: ifnull 10f
      // 0b6: aload 1
      // 0b7: getstatic sixtwo/jn.pWlAK Lsixtwo/jn;
      // 0ba: if_acmpne 0f3
      // 0bd: goto 0c4
      // 0c0: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0c3: athrow
      // 0c4: aload 0
      // 0c5: aload 8
      // 0c7: aload 6
      // 0c9: invokevirtual sixtwo/jo.bED (Lnet/minecraft/class_276;Lsixtwo/jp;)V
      // 0cc: aload 5
      // 0ce: ifnull 10f
      // 0d1: goto 0d8
      // 0d4: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0d7: athrow
      // 0d8: aload 7
      // 0da: ifnull 0f3
      // 0dd: goto 0e4
      // 0e0: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0e3: athrow
      // 0e4: aload 0
      // 0e5: aload 8
      // 0e7: aload 7
      // 0e9: invokevirtual sixtwo/jo.bED (Lnet/minecraft/class_276;Lsixtwo/jp;)V
      // 0ec: goto 0f3
      // 0ef: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0f2: athrow
      // 0f3: getstatic sixtwo/jo.hdKgo Ljava/lang/ThreadLocal;
      // 0f6: aload 8
      // 0f8: invokevirtual java/lang/ThreadLocal.set (Ljava/lang/Object;)V
      // 0fb: getstatic sixtwo/jo.wEOIE Ljava/lang/ThreadLocal;
      // 0fe: aload 1
      // 0ff: invokevirtual java/lang/ThreadLocal.set (Ljava/lang/Object;)V
      // 102: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 105: checkcast mixin/accessors/MinecraftAccessor
      // 108: aload 6
      // 10a: invokeinterface mixin/accessors/MinecraftAccessor.setMainRenderTarget (Lnet/minecraft/class_276;)V 2
      // 10f: goto 127
      // 112: astore 9
      // 114: getstatic sixtwo/jo.hdKgo Ljava/lang/ThreadLocal;
      // 117: invokevirtual java/lang/ThreadLocal.remove ()V
      // 11a: getstatic sixtwo/jo.wEOIE Ljava/lang/ThreadLocal;
      // 11d: invokevirtual java/lang/ThreadLocal.remove ()V
      // 120: aload 2
      // 121: invokeinterface java/lang/Runnable.run ()V 1
      // 126: return
      // 127: aload 2
      // 128: invokeinterface java/lang/Runnable.run ()V 1
      // 12d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 130: checkcast mixin/accessors/MinecraftAccessor
      // 133: aload 8
      // 135: invokeinterface mixin/accessors/MinecraftAccessor.setMainRenderTarget (Lnet/minecraft/class_276;)V 2
      // 13a: aload 6
      // 13c: bipush 1
      // 13d: putfield sixtwo/jp.LHtaR Z
      // 140: getstatic sixtwo/jo.hdKgo Ljava/lang/ThreadLocal;
      // 143: invokevirtual java/lang/ThreadLocal.remove ()V
      // 146: getstatic sixtwo/jo.wEOIE Ljava/lang/ThreadLocal;
      // 149: invokevirtual java/lang/ThreadLocal.remove ()V
      // 14c: goto 160
      // 14f: astore 10
      // 151: getstatic sixtwo/jo.hdKgo Ljava/lang/ThreadLocal;
      // 154: invokevirtual java/lang/ThreadLocal.remove ()V
      // 157: getstatic sixtwo/jo.wEOIE Ljava/lang/ThreadLocal;
      // 15a: invokevirtual java/lang/ThreadLocal.remove ()V
      // 15d: aload 10
      // 15f: athrow
      // 160: goto 19b
      // 163: astore 11
      // 165: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 168: checkcast mixin/accessors/MinecraftAccessor
      // 16b: aload 8
      // 16d: invokeinterface mixin/accessors/MinecraftAccessor.setMainRenderTarget (Lnet/minecraft/class_276;)V 2
      // 172: aload 6
      // 174: bipush 1
      // 175: putfield sixtwo/jp.LHtaR Z
      // 178: getstatic sixtwo/jo.hdKgo Ljava/lang/ThreadLocal;
      // 17b: invokevirtual java/lang/ThreadLocal.remove ()V
      // 17e: getstatic sixtwo/jo.wEOIE Ljava/lang/ThreadLocal;
      // 181: invokevirtual java/lang/ThreadLocal.remove ()V
      // 184: goto 198
      // 187: astore 12
      // 189: getstatic sixtwo/jo.hdKgo Ljava/lang/ThreadLocal;
      // 18c: invokevirtual java/lang/ThreadLocal.remove ()V
      // 18f: getstatic sixtwo/jo.wEOIE Ljava/lang/ThreadLocal;
      // 192: invokevirtual java/lang/ThreadLocal.remove ()V
      // 195: aload 12
      // 197: athrow
      // 198: aload 11
      // 19a: athrow
      // 19b: return
   }

   private synchronized void bEv() {
      this.WZYbo = false;
      this.bEV();
   }

   private void bEM(jp param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jo.SuwYq J
      // 03: ldc2_w 18921249228322
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 1
      // 0e: aload 4
      // 10: ifnull 1e
      // 13: ifnull 3b
      // 16: goto 1d
      // 19: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1c: athrow
      // 1d: aload 1
      // 1e: aload 4
      // 20: ifnull 38
      // 23: getfield sixtwo/jp.LHtaR Z
      // 26: ifeq 3b
      // 29: goto 30
      // 2c: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2f: athrow
      // 30: aload 1
      // 31: goto 38
      // 34: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 37: athrow
      // 38: invokevirtual sixtwo/jp.bFk ()V
      // 3b: return
   }

   private void bET() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jo.SuwYq J
      // 03: ldc2_w 133871708153761
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/jo.mauej Lsixtwo/lP;
      // 10: aload 3
      // 11: ifnull 29
      // 14: ifnull 2c
      // 17: goto 1e
      // 1a: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: aload 0
      // 1f: getfield sixtwo/jo.mauej Lsixtwo/lP;
      // 22: goto 29
      // 25: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 28: athrow
      // 29: invokevirtual sixtwo/lP.chl ()V
      // 2c: return
   }

   private void bED(class_276 param1, jp param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jo.SuwYq J
      // 03: ldc2_w 28261957753934
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 0b: aload 2
      // 0c: invokevirtual sixtwo/jp.bFm ()I
      // 0f: istore 6
      // 11: astore 5
      // 13: aload 5
      // 15: ifnull 42
      // 18: iload 6
      // 1a: bipush -1
      // 1b: if_icmpne 2a
      // 1e: goto 25
      // 21: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 24: athrow
      // 25: return
      // 26: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 29: athrow
      // 2a: invokestatic sixtwo/lT.ciQ ()Lsixtwo/lU;
      // 2d: aload 1
      // 2e: invokevirtual net/minecraft/class_276.method_30278 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 31: aload 2
      // 32: invokevirtual sixtwo/jp.method_30278 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 35: aload 2
      // 36: getfield sixtwo/jp.field_1482 I
      // 39: aload 2
      // 3a: getfield sixtwo/jp.field_1481 I
      // 3d: invokeinterface sixtwo/lU.copyDepthTexture (Lcom/mojang/blaze3d/textures/GpuTexture;Lcom/mojang/blaze3d/textures/GpuTexture;II)V 5
      // 42: return
   }

   private static CallSite bFi(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bFh".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/jo" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private void bEW() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jo.SuwYq J
      // 03: ldc2_w 52931515430443
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 3e
      // 11: getfield sixtwo/jo.mauej Lsixtwo/lP;
      // 14: ifnull 36
      // 17: goto 1e
      // 1a: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: aload 0
      // 1f: getfield sixtwo/jo.mauej Lsixtwo/lP;
      // 22: aload 0
      // 23: invokedynamic run (Lsixtwo/jo;)Ljava/lang/Runnable; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()V, sixtwo/jo.bEZ ()V, ()V ]
      // 28: invokevirtual sixtwo/lP.cha (Ljava/lang/Runnable;)V
      // 2b: aload 3
      // 2c: ifnonnull 62
      // 2f: goto 36
      // 32: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 35: athrow
      // 36: aload 0
      // 37: goto 3e
      // 3a: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3d: athrow
      // 3e: aload 3
      // 3f: ifnull 68
      // 42: getfield sixtwo/jo.ErHsl Lsixtwo/lO;
      // 45: ifnull 62
      // 48: goto 4f
      // 4b: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 4e: athrow
      // 4f: aload 0
      // 50: getfield sixtwo/jo.ErHsl Lsixtwo/lO;
      // 53: invokevirtual sixtwo/lO.cgK ()V
      // 56: aload 0
      // 57: aconst_null
      // 58: putfield sixtwo/jo.ErHsl Lsixtwo/lO;
      // 5b: goto 62
      // 5e: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 61: athrow
      // 62: aload 0
      // 63: aconst_null
      // 64: putfield sixtwo/jo.mauej Lsixtwo/lP;
      // 67: aload 0
      // 68: bipush 0
      // 69: putfield sixtwo/jo.WZYbo Z
      // 6c: goto 7e
      // 6f: astore 4
      // 71: aload 0
      // 72: aconst_null
      // 73: putfield sixtwo/jo.mauej Lsixtwo/lP;
      // 76: aload 0
      // 77: bipush 0
      // 78: putfield sixtwo/jo.WZYbo Z
      // 7b: goto 7e
      // 7e: aload 0
      // 7f: invokevirtual sixtwo/jo.bEX ()V
      // 82: return
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   private void bEY(jp var1) {
      long var2 = SuwYq ^ 58633630577549L;
      iS[] var4 = jm.bDZ();

      jp var10000;
      label30: {
         try {
            var10000 = var1;
            if (var4 == null) {
               break label30;
            }

            if (var1 == null) {
               return;
            }
         } catch (Throwable var8) {
            throw bFb(var8);
         }

         try {
            var10000 = var1;
         } catch (Throwable var7) {
            return;
         }
      }

      try {
         var10000.method_1238();
      } catch (Throwable var6) {
      }
   }

   private static Object bFe(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bFd(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int bFg(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 4103;
      if (yOISF[var3] == null) {
         byte[] var4 = new byte[]{
            (byte)(var1 >>> 56),
            (byte)(var1 >>> 48),
            (byte)(var1 >>> 40),
            (byte)(var1 >>> 32),
            (byte)(var1 >>> 24),
            (byte)(var1 >>> 16),
            (byte)(var1 >>> 8),
            (byte)var1
         };
         long var5 = YKowF[var3];
         byte[] var7 = new byte[]{
            (byte)(var5 >>> 56),
            (byte)(var5 >>> 48),
            (byte)(var5 >>> 40),
            (byte)(var5 >>> 32),
            (byte)(var5 >>> 24),
            (byte)(var5 >>> 16),
            (byte)(var5 >>> 8),
            (byte)var5
         };
         Long var8 = Thread.currentThread().threadId();
         Object[] var9 = (Object[])oVZWQ.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               oVZWQ.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/jo", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         yOISF[var3] = var15;
      }

      return yOISF[var3];
   }

   private void bEP(jp var1, int var2, int var3, int var4, int var5) {
      this.bEQ(var1, null, var2, var3, var4, var5, 0);
   }

   private void bEX() {
      this.bEY(this.vUdoJ);
      this.bEY(this.wnqWl);
      this.bEY(this.eFXCP);
      this.bEY(this.VZxOZ);
      this.bEY(this.nBoiY);
      this.bEY(this.rQpiC);
      this.vUdoJ = null;
      this.wnqWl = null;
      this.eFXCP = null;
      this.VZxOZ = null;
      this.nBoiY = null;
      this.rQpiC = null;
   }

   private static String bFc(byte[] var0) {
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

   private static String bFd(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 13709;
      if (NlbpS[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])DoEeQ.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               DoEeQ.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/jo", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = Jdstx[var5].getBytes("ISO-8859-1");
         NlbpS[var5] = bFc(((Cipher)var4[0]).doFinal(var9));
      }

      return NlbpS[var5];
   }

   private static int bFh(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bFg(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private void bEQ(jp param1, jp param2, int param3, int param4, int param5, int param6, int param7) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/jo.SuwYq J
      // 003: ldc2_w 88167924464865
      // 006: lxor
      // 007: lstore 8
      // 009: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 00c: astore 10
      // 00e: aload 1
      // 00f: aload 10
      // 011: ifnull 01f
      // 014: ifnull 025
      // 017: goto 01e
      // 01a: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 01d: athrow
      // 01e: aload 1
      // 01f: invokevirtual sixtwo/jp.bFl ()I
      // 022: goto 026
      // 025: bipush -1
      // 026: istore 11
      // 028: aload 1
      // 029: ifnull 05f
      // 02c: iload 11
      // 02e: aload 10
      // 030: ifnull 05c
      // 033: goto 03a
      // 036: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 039: athrow
      // 03a: bipush -1
      // 03b: if_icmpeq 05f
      // 03e: goto 045
      // 041: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 044: athrow
      // 045: aload 1
      // 046: aload 10
      // 048: ifnull 061
      // 04b: goto 052
      // 04e: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 051: athrow
      // 052: getfield sixtwo/jp.LHtaR Z
      // 055: goto 05c
      // 058: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 05b: athrow
      // 05c: ifne 060
      // 05f: return
      // 060: aload 2
      // 061: aload 10
      // 063: ifnull 071
      // 066: ifnull 077
      // 069: goto 070
      // 06c: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 06f: athrow
      // 070: aload 2
      // 071: invokevirtual sixtwo/jp.bFl ()I
      // 074: goto 078
      // 077: bipush -1
      // 078: istore 12
      // 07a: iload 7
      // 07c: bipush 1
      // 07d: aload 10
      // 07f: ifnull 10b
      // 082: if_icmpne 0cb
      // 085: goto 08c
      // 088: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 08b: athrow
      // 08c: aload 2
      // 08d: ifnull 0ca
      // 090: goto 097
      // 093: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 096: athrow
      // 097: iload 12
      // 099: aload 10
      // 09b: ifnull 0bb
      // 09e: goto 0a5
      // 0a1: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0a4: athrow
      // 0a5: bipush -1
      // 0a6: if_icmpeq 0ca
      // 0a9: goto 0b0
      // 0ac: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0af: athrow
      // 0b0: aload 2
      // 0b1: getfield sixtwo/jp.LHtaR Z
      // 0b4: goto 0bb
      // 0b7: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0ba: athrow
      // 0bb: aload 10
      // 0bd: ifnull 10a
      // 0c0: ifne 0cb
      // 0c3: goto 0ca
      // 0c6: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0c9: athrow
      // 0ca: return
      // 0cb: invokestatic sixtwo/lQ.chK ()V
      // 0ce: iload 3
      // 0cf: iload 4
      // 0d1: iload 5
      // 0d3: iload 6
      // 0d5: invokestatic sixtwo/lQ.chO (IIII)V
      // 0d8: invokestatic sixtwo/lQ.chN ()V
      // 0db: aload 0
      // 0dc: getfield sixtwo/jo.ErHsl Lsixtwo/lO;
      // 0df: invokevirtual sixtwo/lO.cgG ()V
      // 0e2: bipush 0
      // 0e3: bipush 0
      // 0e4: invokestatic sixtwo/lQ.chC (II)V
      // 0e7: aload 0
      // 0e8: getfield sixtwo/jo.ErHsl Lsixtwo/lO;
      // 0eb: iload 7
      // 0ed: invokevirtual sixtwo/lO.cgJ (I)V
      // 0f0: aload 0
      // 0f1: getfield sixtwo/jo.ErHsl Lsixtwo/lO;
      // 0f4: sipush 26632
      // 0f7: ldc2_w 4808494369463072522
      // 0fa: lload 8
      // 0fc: lxor
      // 0fd: invokedynamic l (IJ)Ljava/lang/String; bsm=sixtwo/jo.bFf (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 102: iload 11
      // 104: bipush 0
      // 105: invokevirtual sixtwo/lO.cgI (Ljava/lang/String;II)V
      // 108: iload 7
      // 10a: bipush 1
      // 10b: aload 10
      // 10d: ifnull 14c
      // 110: if_icmpne 13e
      // 113: goto 11a
      // 116: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 119: athrow
      // 11a: bipush 1
      // 11b: bipush 0
      // 11c: invokestatic sixtwo/lQ.chC (II)V
      // 11f: aload 0
      // 120: getfield sixtwo/jo.ErHsl Lsixtwo/lO;
      // 123: sipush 24011
      // 126: ldc2_w 3602190114215445196
      // 129: lload 8
      // 12b: lxor
      // 12c: invokedynamic l (IJ)Ljava/lang/String; bsm=sixtwo/jo.bFf (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 131: iload 12
      // 133: bipush 1
      // 134: invokevirtual sixtwo/lO.cgI (Ljava/lang/String;II)V
      // 137: goto 13e
      // 13a: invokestatic sixtwo/jo.bFb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 13d: athrow
      // 13e: aload 0
      // 13f: getfield sixtwo/jo.ErHsl Lsixtwo/lO;
      // 142: invokevirtual sixtwo/lO.cgH ()V
      // 145: bipush 1
      // 146: bipush 0
      // 147: invokestatic sixtwo/lQ.chB (II)V
      // 14a: bipush 0
      // 14b: bipush 0
      // 14c: invokestatic sixtwo/lQ.chB (II)V
      // 14f: bipush 0
      // 150: invokestatic sixtwo/lQ.ciq (I)V
      // 153: return
   }

   static {
      long var11 = SuwYq ^ 1861293023303L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[10];
      int var18 = 0;
      String var17 = "¦ÀSØ\u0095¢¡Bn\n\n´O\u0098-\u001e2\u00947\u001e\t÷©æ¨\u0012ñüà_\u001e\u0095 \u007fnGý\u009f\u009f\u008fl\f¶7þÌÆ¦ \u00ad¦ê/^\u0086ö\u0093Ð£\t\fÎ\tË\u0098\u00100µoìx\u009aSì;\u0007\u008e\u000bQwÜã(\u009e\u0086¸úH-Má\u008côGµNhPFmë\tvõ7\u0004Ü\u0099äi».\u007f¬\u0084\u008cïÄ+\u000fè\u0084\" ¤@ë«g^)áQ\u009b\u0086\u0081\u0083F;QºBÈ\u0086\u008eI71,åä¦Ó\t¶± #\u000b-V#,\u0016eh\u001bø½ÅU\u0081\u0004\u001e\"4'\u0016\u0092\u009f\u0015\u009eõAY<÷Û\u0096\u0010\u001c\u009eß\u0004öÜk\u0018õ\u0089É\u0003=\u001bÀ\u009b(\u0002ùo&\r\u0089Ø\u000bÚ\u0093Ö¢»m=Å\u008c¥\u0097\u0085`áLç\u0095Þ\u001cÀ¬Rp÷¿òøìm\u009a\u001aý";
      int var19 = "¦ÀSØ\u0095¢¡Bn\n\n´O\u0098-\u001e2\u00947\u001e\t÷©æ¨\u0012ñüà_\u001e\u0095 \u007fnGý\u009f\u009f\u008fl\f¶7þÌÆ¦ \u00ad¦ê/^\u0086ö\u0093Ð£\t\fÎ\tË\u0098\u00100µoìx\u009aSì;\u0007\u008e\u000bQwÜã(\u009e\u0086¸úH-Má\u008côGµNhPFmë\tvõ7\u0004Ü\u0099äi».\u007f¬\u0084\u008cïÄ+\u000fè\u0084\" ¤@ë«g^)áQ\u009b\u0086\u0081\u0083F;QºBÈ\u0086\u008eI71,åä¦Ó\t¶± #\u000b-V#,\u0016eh\u001bø½ÅU\u0081\u0004\u001e\"4'\u0016\u0092\u009f\u0015\u009eõAY<÷Û\u0096\u0010\u001c\u009eß\u0004öÜk\u0018õ\u0089É\u0003=\u001bÀ\u009b(\u0002ùo&\r\u0089Ø\u000bÚ\u0093Ö¢»m=Å\u008c¥\u0097\u0085`áLç\u0095Þ\u001cÀ¬Rp÷¿òøìm\u009a\u001aý"
         .length();
      char var16 = ' ';
      int var23 = -1;

      label45:
      while (true) {
         String var24 = var17.substring(++var23, var23 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var24.getBytes("ISO-8859-1"));
            String var33 = bFc(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var33;
                  if ((var23 += var16) >= var19) {
                     Jdstx = var20;
                     NlbpS = new String[10];
                     oVZWQ = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[2];
                     int var3 = 0;
                     String var4 = "&Èè+\u0087ô\u001d\n\u0086dî\u0002ó\u0017,¸";
                     int var5 = "&Èè+\u0087ô\u001d\n\u0086dî\u0002ó\u0017,¸".length();
                     byte var2 = 0;

                     do {
                        var10001 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
                        var10001 = var3++;
                        long var8 = (var7[0] & 255L) << 56
                           | (var7[1] & 255L) << 48
                           | (var7[2] & 255L) << 40
                           | (var7[3] & 255L) << 32
                           | (var7[4] & 255L) << 24
                           | (var7[5] & 255L) << 16
                           | (var7[6] & 255L) << 8
                           | var7[7] & 255L;
                        byte[] var10 = var0.doFinal(
                           new byte[]{
                              (byte)(var8 >>> 56),
                              (byte)(var8 >>> 48),
                              (byte)(var8 >>> 40),
                              (byte)(var8 >>> 32),
                              (byte)(var8 >>> 24),
                              (byte)(var8 >>> 16),
                              (byte)(var8 >>> 8),
                              (byte)var8
                           }
                        );
                        long var10004 = (var10[0] & 255L) << 56
                           | (var10[1] & 255L) << 48
                           | (var10[2] & 255L) << 40
                           | (var10[3] & 255L) << 32
                           | (var10[4] & 255L) << 24
                           | (var10[5] & 255L) << 16
                           | (var10[6] & 255L) << 8
                           | var10[7] & 255L;
                        byte var38 = -1;
                        var6[var10001] = var10004;
                     } while (var2 < var5);

                     YKowF = var6;
                     yOISF = new Integer[2];
                     fYlIq = new jo();
                     wEOIE = new ThreadLocal<>();
                     hdKgo = new ThreadLocal<>();
                     return;
                  }

                  var16 = var17.charAt(var23);
                  break;
               default:
                  var20[var18++] = var33;
                  if ((var23 += var16) < var19) {
                     var16 = var17.charAt(var23);
                     continue label45;
                  }

                  var17 = "mbZýÅF3\u0092$\u009f\u001fç\u0085ä\u008cIM \u00adí\u001e\u00102\u000bm\tA\u0089÷ï@ª\u0098Î<Ø\u0099@\u0019.ºÞø-g\u0019Rü\u0018¿=:K\u0084\b\u007f\u0094Jp»¥\u00836îçØ¾§q)7U\u001b";
                  var19 = "mbZýÅF3\u0092$\u009f\u001fç\u0085ä\u008cIM \u00adí\u001e\u00102\u000bm\tA\u0089÷ï@ª\u0098Î<Ø\u0099@\u0019.ºÞø-g\u0019Rü\u0018¿=:K\u0084\b\u007f\u0094Jp»¥\u00836îçØ¾§q)7U\u001b"
                     .length();
                  var16 = '0';
                  var23 = -1;
            }

            var24 = var17.substring(++var23, var23 + var16);
            var10001 = 0;
         }
      }
   }

   public static void bEt(Runnable var0) {
      fYlIq.bEy(jn.pWlAK, var0);
   }

   public static void bEs(Runnable var0) {
      fYlIq.bEy(jn.bxePp, var0);
   }

   public static class_276 bEp(RenderPipeline var0) {
      return fYlIq.bEI(var0, rD.dlmvG.method_1522());
   }

   public static class_276 bEq(RenderPipeline var0, class_276 var1) {
      return fYlIq.bEI(var0, var1);
   }

   public static RenderPipeline bEr(RenderPipeline var0) {
      long var1 = SuwYq ^ 72318261916031L;

      try {
         if (bEf()) {
            return kV.bWp(var0);
         }
      } catch (IllegalStateException var3) {
         throw bFb(var3);
      }

      return var0;
   }
}
