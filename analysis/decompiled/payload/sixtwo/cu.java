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

public class cu {
   private final ct QYQDk;
   private final int[] HgKwo;
   private boolean IopEl;
   private final rk cmFXh;
   private final rk AKmqA;
   private static iS[] UwQow;
   private static final long yWXbB = gb.aYR(-2390175784653023099L, 4531184877364118520L, MethodHandles.lookup().lookupClass()).a(15978060871461L);
   private static final long[] tBNbK;
   private static final Integer[] PBdyX;
   private static final Map Urdhw = new HashMap(13);

   public cu(ct var1, mr var2) {
      long var3 = yWXbB ^ 39674037347546L;
      iS[] var10000 = ct.SW();
      super();
      this.IopEl = true;
      this.cmFXh = new rk(Tk<"f">(22447, 3935392892953037429L ^ var3)).dhs(rj.UPXqT);
      iS[] var5 = var10000;

      try {
         this.AKmqA = new rk(Tk<"f">(13717, 8449604726333532238L ^ var3)).dhs(rj.UPXqT);
         this.QYQDk = var1;
         this.HgKwo = var2.clT();
         var1.SU().add(this);
         if (var5 == null) {
            iS.bwK("O9qHhb");
         }
      } catch (MatchException var6) {
         throw Th(var6);
      }
   }

   static {
      iS[] var10000 = new iS[4];
      Tf(var10000);
      long var0 = yWXbB ^ 73633784708001L;
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
      String var6 = "÷ÅÆ=3Zn\u0080å´m\tøÉ\u0087J";
      int var7 = "÷ÅÆ=3Zn\u0080å´m\tøÉ\u0087J".length();
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

      tBNbK = var8;
      PBdyX = new Integer[2];
   }

   public int[] Tb() {
      return this.HgKwo;
   }

   private static int Tj(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = Ti(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite Tk(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Tj".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cu" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public static void Tf(iS[] var0) {
      UwQow = var0;
   }

   public boolean Tc() {
      return this.IopEl;
   }

   public ct Ta() {
      return this.QYQDk;
   }

   public static iS[] Tg() {
      return UwQow;
   }

   private static int Ti(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 14042;
      if (PBdyX[var3] == null) {
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
         long var5 = tBNbK[var3];
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
         Object[] var9 = (Object[])Urdhw.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               Urdhw.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cu", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         PBdyX[var3] = var15;
      }

      return PBdyX[var3];
   }

   private static MatchException Th(MatchException var0) {
      return var0;
   }

   public rk Te() {
      return this.AKmqA;
   }

   public rk Td() {
      return this.cmFXh;
   }

   public boolean SZ() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cu.yWXbB J
      // 03: ldc2_w 95116600862284
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/ct.SW ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/cu.IopEl Z
      // 10: aload 3
      // 11: ifnull 2c
      // 14: ifne 24
      // 17: goto 1e
      // 1a: invokestatic sixtwo/cu.Th (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: bipush 0
      // 1f: ireturn
      // 20: invokestatic sixtwo/cu.Th (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aload 0
      // 25: getfield sixtwo/cu.QYQDk Lsixtwo/ct;
      // 28: aload 0
      // 29: invokevirtual sixtwo/ct.SP (Lsixtwo/cu;)Z
      // 2c: ireturn
   }

   public cu SY() {
      this.QYQDk.SN(this.QYQDk.SU().indexOf(this));
      return this;
   }
}
