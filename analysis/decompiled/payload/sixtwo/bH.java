package sixtwo;

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

public class bH extends cw {
   private int[] VCgDl;
   private String tWcbr;
   private static String[] sXJBa;
   private static final long iXCvb = gb.aYR(9088286829136546371L, -5680511453484505268L, MethodHandles.lookup().lookupClass()).a(279160009442563L);
   private static final long[] HtTLR;
   private static final Integer[] veNlg;
   private static final Map KvEPM = new HashMap(13);

   public bH(cv var1, mr var2) {
      long var3 = iXCvb ^ 39113162363538L;
      super(var1, var2);
      this.VCgDl = new int[]{Mx<"d">(189, 1289182739036095502L ^ var3)};
      this.tWcbr = "";
      this.Tz();
   }

   public bH(cv var1, mr var2, String var3) {
      long var4 = iXCvb ^ 26164788306354L;
      super(var1, var2);
      this.VCgDl = new int[]{Mx<"d">(3764, 2414036996718000422L ^ var4)};
      this.tWcbr = "";
      this.tWcbr = var3;
      this.Tz();
   }

   static {
      String[] var10000 = new String[3];
      long var0 = iXCvb ^ 69106807032058L;
      Ms(var10000);
      Cipher var2;
      Cipher var13 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var13.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[2];
      int var5 = 0;
      String var6 = "S\u0094\u009aËt\u0007ä\u0084¡\u008d\u00ad*|¶j.";
      int var7 = "S\u0094\u009aËt\u0007ä\u0084¡\u008d\u00ad*|¶j.".length();
      byte var4 = 0;

      do {
         int var10001 = var4;
         var4 += 8;
         byte[] var9 = var6.substring(var10001, var4).getBytes("ISO-8859-1");
         var10001 = var5++;
         long var10 = (var9[0] & 255L) << 56
            | (var9[1] & 255L) << 48
            | (var9[2] & 255L) << 40
            | (var9[3] & 255L) << 32
            | (var9[4] & 255L) << 24
            | (var9[5] & 255L) << 16
            | (var9[6] & 255L) << 8
            | var9[7] & 255L;
         byte[] var12 = var2.doFinal(
            new byte[]{
               (byte)(var10 >>> 56),
               (byte)(var10 >>> 48),
               (byte)(var10 >>> 40),
               (byte)(var10 >>> 32),
               (byte)(var10 >>> 24),
               (byte)(var10 >>> 16),
               (byte)(var10 >>> 8),
               (byte)var10
            }
         );
         long var10004 = (var12[0] & 255L) << 56
            | (var12[1] & 255L) << 48
            | (var12[2] & 255L) << 40
            | (var12[3] & 255L) << 32
            | (var12[4] & 255L) << 24
            | (var12[5] & 255L) << 16
            | (var12[6] & 255L) << 8
            | var12[7] & 255L;
         byte var15 = -1;
         var8[var10001] = var10004;
      } while (var4 < var7);

      HtTLR = var8;
      veNlg = new Integer[2];
   }

   public static String[] Mt() {
      return sXJBa;
   }

   public void Mo(String param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bH.iXCvb J
      // 03: ldc2_w 33150839382136
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/bH.Mt ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnull 26
      // 13: invokevirtual sixtwo/bH.TC ()Z
      // 16: ifne 25
      // 19: goto 20
      // 1c: invokestatic sixtwo/bH.Mu (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: return
      // 21: invokestatic sixtwo/bH.Mu (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: aload 0
      // 26: aload 1
      // 27: invokestatic sixtwo/mZ.csh (Ljava/lang/String;)[I
      // 2a: putfield sixtwo/bH.VCgDl [I
      // 2d: return
   }

   public void Mp(int[] param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bH.iXCvb J
      // 03: ldc2_w 136881072512910
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/bH.Mt ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnull 26
      // 13: invokevirtual sixtwo/bH.TC ()Z
      // 16: ifne 25
      // 19: goto 20
      // 1c: invokestatic sixtwo/bH.Mu (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: return
      // 21: invokestatic sixtwo/bH.Mu (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: aload 0
      // 26: aload 1
      // 27: putfield sixtwo/bH.VCgDl [I
      // 2a: return
   }

   public int[] Mq() {
      return this.VCgDl;
   }

   public String Mr() {
      return this.tWcbr;
   }

   private static int Mw(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = Mv(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public static void Ms(String[] var0) {
      sXJBa = var0;
   }

   private static CallSite Mx(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Mw".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bH" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int Mv(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 24696;
      if (veNlg[var3] == null) {
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
         long var5 = HtTLR[var3];
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
         Object[] var9 = (Object[])KvEPM.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               KvEPM.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/bH", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         veNlg[var3] = var15;
      }

      return veNlg[var3];
   }

   private static MatchException Mu(MatchException var0) {
      return var0;
   }
}
