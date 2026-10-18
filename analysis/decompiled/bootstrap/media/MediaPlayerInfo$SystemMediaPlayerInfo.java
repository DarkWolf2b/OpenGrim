package media;

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
import sixtwo.gb;

public class MediaPlayerInfo$SystemMediaPlayerInfo {
   private static final MediaPlayerInfo instance;
   private static final long a = gb.aYR(4899431017824094015L, -3451551360480880294L, MethodHandles.lookup().lookupClass()).a(194727918518822L);
   private static final String[] b;
   private static final String[] c;
   private static final Map d = new HashMap(13);

   public MediaPlayerInfo$SystemMediaPlayerInfo() {
   }

   static {
      long var0 = a ^ 136783861947754L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[4];
      int var7 = 0;
      String var6 = "b\u00da\u00ca\u00a4\u00dc\u0004\u00f1\u00a8@\u000bvR;\u0019\u001c\u0012\u0010c\u0084d\u00d8Mo\u00f5\u0018\u0094n\u00ad\u0091\u00f7;d\u00a2";
      int var8 = "b\u00da\u00ca\u00a4\u00dc\u0004\u00f1\u00a8@\u000bvR;\u0019\u001c\u0012\u0010c\u0084d\u00d8Mo\u00f5\u0018\u0094n\u00ad\u0091\u00f7;d\u00a2"
         .length();
      char var5 = 16;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = a(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     b = var9;
                     c = new String[4];
                     instance = create();
                     return;
                  }

                  var5 = var6.charAt(var12);
                  break;
               default:
                  var9[var7++] = var19;
                  if ((var12 += var5) < var8) {
                     var5 = var6.charAt(var12);
                     continue label27;
                  }

                  var6 = "\u0012&0\u00ec\u00cd0\u00ee\u00855\u00d9k\u0019\u00c1#\u00a3\u00d1\u0010f\u0097\u0095kF\u009d\u00c6\u0096\u00e1\u00a4(\u007f\u00efU\u001f\u0081";
                  var8 = "\u0012&0\u00ec\u00cd0\u00ee\u00855\u00d9k\u0019\u00c1#\u00a3\u00d1\u0010f\u0097\u0095kF\u009d\u00c6\u0096\u00e1\u00a4(\u007f\u00efU\u001f\u0081"
                     .length();
                  var5 = 16;
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   private static String a(byte[] var0) {
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

   private static String a(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 8064;
      if (c[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])d.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               d.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("media/MediaPlayerInfo$SystemMediaPlayerInfo", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = b[var5].getBytes("ISO-8859-1");
         c[var5] = a(((Cipher)var4[0]).doFinal(var9));
      }

      return c[var5];
   }

   private static CallSite a(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("a".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("media/MediaPlayerInfo$SystemMediaPlayerInfo" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static Object a(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = a(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static MatchException a(MatchException var0) {
      return var0;
   }

   public static MediaPlayerInfo getInstance() {
      return instance;
   }

   private static MediaPlayerInfo create() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic media/MediaPlayerInfo$SystemMediaPlayerInfo.a J
      // 03: ldc2_w 96763490118755
      // 06: lxor
      // 07: lstore 0
      // 08: sipush 14867
      // 0b: ldc2_w 2770244211825889083
      // 0e: lload 0
      // 0f: lxor
      // 10: invokedynamic q (IJ)Ljava/lang/String; bsm=media/MediaPlayerInfo$SystemMediaPlayerInfo.a (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 15: invokestatic java/lang/System.getProperty (Ljava/lang/String;)Ljava/lang/String;
      // 18: invokevirtual java/lang/String.toLowerCase ()Ljava/lang/String;
      // 1b: astore 2
      // 1c: aload 2
      // 1d: sipush 32128
      // 20: ldc2_w 7015730580381960361
      // 23: lload 0
      // 24: lxor
      // 25: invokedynamic q (IJ)Ljava/lang/String; bsm=media/MediaPlayerInfo$SystemMediaPlayerInfo.a (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2a: invokevirtual java/lang/String.startsWith (Ljava/lang/String;)Z
      // 2d: ifeq 3c
      // 30: new media/impl/win/WindowsMediaPlayerInfo
      // 33: dup
      // 34: invokespecial media/impl/win/WindowsMediaPlayerInfo.<init> ()V
      // 37: areturn
      // 38: invokestatic media/MediaPlayerInfo$SystemMediaPlayerInfo.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: aload 2
      // 3d: sipush 12785
      // 40: ldc2_w 7962823782457099482
      // 43: lload 0
      // 44: lxor
      // 45: invokedynamic q (IJ)Ljava/lang/String; bsm=media/MediaPlayerInfo$SystemMediaPlayerInfo.a (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 4a: invokevirtual java/lang/String.startsWith (Ljava/lang/String;)Z
      // 4d: ifne 6b
      // 50: aload 2
      // 51: sipush 14807
      // 54: ldc2_w 8781222767163591933
      // 57: lload 0
      // 58: lxor
      // 59: invokedynamic q (IJ)Ljava/lang/String; bsm=media/MediaPlayerInfo$SystemMediaPlayerInfo.a (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 5e: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 61: ifeq 77
      // 64: goto 6b
      // 67: invokestatic media/MediaPlayerInfo$SystemMediaPlayerInfo.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6a: athrow
      // 6b: new media/impl/macos/MacOSMediaPlayerInfo
      // 6e: dup
      // 6f: invokespecial media/impl/macos/MacOSMediaPlayerInfo.<init> ()V
      // 72: areturn
      // 73: invokestatic media/MediaPlayerInfo$SystemMediaPlayerInfo.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 76: athrow
      // 77: new media/impl/DummyMediaPlayer
      // 7a: dup
      // 7b: invokespecial media/impl/DummyMediaPlayer.<init> ()V
      // 7e: areturn
   }
}
