package media;

import java.lang.invoke.MethodHandles;
import sixtwo.gb;
import sixtwo.iS;

public record MediaInfo(String title, String artist, byte[] artworkPng, long position, long duration, boolean playing) {
   private static int a;
   private static final long b = gb.aYR(-4690977596374498253L, -6608750977830163526L, MethodHandles.lookup().lookupClass()).a(103618053689892L);

   public MediaInfo(String title, String artist, byte[] artworkPng, long position, long duration, boolean playing) {
      long var9 = b ^ 47662519166117L;
      super();
      int var10000 = b();
      this.title = title;
      this.artist = artist;
      this.artworkPng = artworkPng;
      int var11 = var10000;

      try {
         this.position = position;
         this.duration = duration;
         this.playing = playing;
         if (var11 == 0) {
            iS.bwK("ftSxVc");
         }
      } catch (MatchException var12) {
         throw a(var12);
      }
   }

   static {
      if (c() != 0) {
         b(113);
      }
   }

   @Override
   public boolean equals(Object param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic media/MediaInfo.b J
      // 003: ldc2_w 138176061116229
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic media/MediaInfo.c ()I
      // 00b: istore 4
      // 00d: aload 0
      // 00e: iload 4
      // 010: ifne 025
      // 013: aload 1
      // 014: if_acmpne 024
      // 017: goto 01e
      // 01a: invokestatic media/MediaInfo.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01d: athrow
      // 01e: bipush 1
      // 01f: ireturn
      // 020: invokestatic media/MediaInfo.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 023: athrow
      // 024: aload 1
      // 025: ifnull 046
      // 028: aload 0
      // 029: invokevirtual java/lang/Object.getClass ()Ljava/lang/Class;
      // 02c: iload 4
      // 02e: ifne 04d
      // 031: goto 038
      // 034: invokestatic media/MediaInfo.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 037: athrow
      // 038: aload 1
      // 039: invokevirtual java/lang/Object.getClass ()Ljava/lang/Class;
      // 03c: if_acmpeq 04c
      // 03f: goto 046
      // 042: invokestatic media/MediaInfo.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 045: athrow
      // 046: bipush 0
      // 047: ireturn
      // 048: invokestatic media/MediaInfo.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 04b: athrow
      // 04c: aload 1
      // 04d: checkcast media/MediaInfo
      // 050: astore 5
      // 052: aload 0
      // 053: getfield media/MediaInfo.position J
      // 056: aload 5
      // 058: getfield media/MediaInfo.position J
      // 05b: lcmp
      // 05c: iload 4
      // 05e: ifne 07c
      // 061: ifne 114
      // 064: goto 06b
      // 067: invokestatic media/MediaInfo.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06a: athrow
      // 06b: aload 0
      // 06c: getfield media/MediaInfo.duration J
      // 06f: aload 5
      // 071: getfield media/MediaInfo.duration J
      // 074: lcmp
      // 075: goto 07c
      // 078: invokestatic media/MediaInfo.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07b: athrow
      // 07c: iload 4
      // 07e: ifne 096
      // 081: ifne 114
      // 084: goto 08b
      // 087: invokestatic media/MediaInfo.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08a: athrow
      // 08b: aload 0
      // 08c: getfield media/MediaInfo.playing Z
      // 08f: goto 096
      // 092: invokestatic media/MediaInfo.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 095: athrow
      // 096: iload 4
      // 098: ifne 0bd
      // 09b: aload 5
      // 09d: getfield media/MediaInfo.playing Z
      // 0a0: if_icmpne 114
      // 0a3: goto 0aa
      // 0a6: invokestatic media/MediaInfo.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a9: athrow
      // 0aa: aload 0
      // 0ab: getfield media/MediaInfo.title Ljava/lang/String;
      // 0ae: aload 5
      // 0b0: getfield media/MediaInfo.title Ljava/lang/String;
      // 0b3: invokestatic java/util/Objects.equals (Ljava/lang/Object;Ljava/lang/Object;)Z
      // 0b6: goto 0bd
      // 0b9: invokestatic media/MediaInfo.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0bc: athrow
      // 0bd: iload 4
      // 0bf: ifne 0df
      // 0c2: ifeq 114
      // 0c5: goto 0cc
      // 0c8: invokestatic media/MediaInfo.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0cb: athrow
      // 0cc: aload 0
      // 0cd: getfield media/MediaInfo.artist Ljava/lang/String;
      // 0d0: aload 5
      // 0d2: getfield media/MediaInfo.artist Ljava/lang/String;
      // 0d5: invokestatic java/util/Objects.equals (Ljava/lang/Object;Ljava/lang/Object;)Z
      // 0d8: goto 0df
      // 0db: invokestatic media/MediaInfo.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0de: athrow
      // 0df: iload 4
      // 0e1: ifne 101
      // 0e4: ifeq 114
      // 0e7: goto 0ee
      // 0ea: invokestatic media/MediaInfo.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ed: athrow
      // 0ee: aload 0
      // 0ef: getfield media/MediaInfo.artworkPng [B
      // 0f2: aload 5
      // 0f4: getfield media/MediaInfo.artworkPng [B
      // 0f7: invokestatic java/util/Arrays.equals ([B[B)Z
      // 0fa: goto 101
      // 0fd: invokestatic media/MediaInfo.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 100: athrow
      // 101: iload 4
      // 103: ifne 111
      // 106: ifeq 114
      // 109: goto 110
      // 10c: invokestatic media/MediaInfo.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 10f: athrow
      // 110: bipush 1
      // 111: goto 115
      // 114: bipush 0
      // 115: ireturn
   }

   public static void b(int var0) {
      a = var0;
   }

   public static int b() {
      return a;
   }

   public static int c() {
      int var0 = b();

      try {
         return var0 == 0 ? 36 : 0;
      } catch (MatchException var1) {
         throw a(var1);
      }
   }

   private static MatchException a(MatchException var0) {
      return var0;
   }
}
