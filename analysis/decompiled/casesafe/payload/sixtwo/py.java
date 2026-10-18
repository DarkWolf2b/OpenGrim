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
import net.minecraft.class_1297;
import net.minecraft.class_1799;
import net.minecraft.class_241;

public abstract class py extends az {
   protected final rk RnEgc;
   protected final rk oOKGX;
   protected final rk kosRk;
   protected final rk vqYvK;
   protected final cC hmPAD;
   private final String hNALo;
   private final String RJEfO;
   private final lc euKNr;
   private pM lKAKH;
   private pK qbstY;
   private int jPzky;
   private boolean uajJe;
   private boolean Rrudb;
   private boolean GWcRy;
   private boolean Iqptt;
   private boolean pHrkM;
   private float ybpom;
   private float KAWQC;
   private float IIJgd;
   private float lbLFN;
   private float OLEnw;
   private float HPRNB;
   private float sJTEF;
   private float OAdOq;
   private float UOoKH;
   private float SzsRB;
   private float XykmV;
   private float ZOsRY;
   private static int hDHpj;
   private static final long dfcBl = gb.aYR(-4975932006003757102L, -2536993283428394912L, MethodHandles.lookup().lookupClass()).a(224652685794718L);
   private static final long[] DsBXn;
   private static final Integer[] NFScw;
   private static final Map MYDKC = new HashMap(13);

   public py(String var1, String var2, double var3) {
      long var5 = dfcBl ^ 50726099172488L;
      int var10000 = cRA();
      super();
      this.RnEgc = new rk(cRF<"j">(31305, 5755429792380019052L ^ var5)).dhs(rj.UPXqT);
      this.oOKGX = new rk(cRF<"j">(15532, 6850725122777327501L ^ var5)).dhs(rj.NJlxm);
      this.kosRk = new rk(cRF<"j">(25617, 5956094065652236081L ^ var5)).dhs(rj.NJlxm);
      this.vqYvK = new rk(cRF<"j">(73, 358087457056201572L ^ var5)).dhs(rj.NJlxm);
      int var7 = var10000;

      try {
         this.hmPAD = new cC(
               this,
               mr.clS(
                  new int[]{
                     cRF<"j">(1823, 6238702245906684984L ^ var5),
                     cRF<"j">(32211, 8782703558518204145L ^ var5),
                     cRF<"j">(2090, 4744705917677507337L ^ var5),
                     cRF<"j">(13955, 4645444820776070567L ^ var5),
                     cRF<"j">(27264, 8927454957440037286L ^ var5)
                  }
               )
            )
            .Vw(0.5)
            .Vx(2.0)
            .Vy(0.01)
            .VA(1.0);
         this.euKNr = new lc(0.0F, 0.0F, 0.0F, 0.0F);
         this.lKAKH = pM.oFEYk;
         this.qbstY = pK.AkTYU;
         this.uajJe = true;
         this.hNALo = var1;
         this.RJEfO = var2;
         this.hmPAD.Vx(var3);
         if (var7 == 0) {
            iS.bwK("egohW");
         }
      } catch (MatchException var8) {
         throw cRC(var8);
      }
   }

   static {
      long var0 = dfcBl ^ 2084097077399L;
      cRz(64);
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[9];
      int var5 = 0;
      String var6 = "c\u007fN~N├×.┬ż┬┤├Őu├»┬ą├Ä\u0091├Łq┬«├ź\u0092$├É├Žu\u0089┬╝\u001a\u001e├ľ┬│4yP├Ę┬ó+├ć├ë├Ž\u0010┬ąA\u0081├ą8;├ź├âT┬ó\u0004\u0089\u0006├ä3\u007f";
      int var7 = "c\u007fN~N├×.┬ż┬┤├Őu├»┬ą├Ä\u0091├Łq┬«├ź\u0092$├É├Žu\u0089┬╝\u001a\u001e├ľ┬│4yP├Ę┬ó+├ć├ë├Ž\u0010┬ąA\u0081├ą8;├ź├âT┬ó\u0004\u0089\u0006├ä3\u007f".length();
      byte var4 = 0;

      label23:
      while (true) {
         int var10001 = var4;
         var4 += 8;
         byte[] var9 = var6.substring(var10001, var4).getBytes("ISO-8859-1");
         long[] var14 = var8;
         var10001 = var5++;
         long var17 = (var9[0] & 255L) << 56
            | (var9[1] & 255L) << 48
            | (var9[2] & 255L) << 40
            | (var9[3] & 255L) << 32
            | (var9[4] & 255L) << 24
            | (var9[5] & 255L) << 16
            | (var9[6] & 255L) << 8
            | var9[7] & 255L;
         byte var19 = -1;

         while (true) {
            long var10 = var17;
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
            long var21 = (var12[0] & 255L) << 56
               | (var12[1] & 255L) << 48
               | (var12[2] & 255L) << 40
               | (var12[3] & 255L) << 32
               | (var12[4] & 255L) << 24
               | (var12[5] & 255L) << 16
               | (var12[6] & 255L) << 8
               | var12[7] & 255L;
            switch (var19) {
               case 0:
                  var14[var10001] = var21;
                  if (var4 >= var7) {
                     DsBXn = var8;
                     NFScw = new Integer[9];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "\u0082\u0080T├Ľe├Ż├Ä\u0002\u0017┬ź8\u009e|\u0092├ÜN";
                  var7 = "\u0082\u0080T├Ľe├Ż├Ä\u0002\u0017┬ź8\u009e|\u0092├ÜN".length();
                  var4 = 0;
            }

            byte var16 = var4;
            var4 += 8;
            var9 = var6.substring(var16, var4).getBytes("ISO-8859-1");
            var14 = var8;
            var10001 = var5++;
            var17 = (var9[0] & 255L) << 56
               | (var9[1] & 255L) << 48
               | (var9[2] & 255L) << 40
               | (var9[3] & 255L) << 32
               | (var9[4] & 255L) << 24
               | (var9[5] & 255L) << 16
               | (var9[6] & 255L) << 8
               | var9[7] & 255L;
            var19 = 0;
         }
      }
   }

   public py position(pM var1) {
      this.lKAKH = var1;
      return this;
   }

   public pM position() {
      return this.lKAKH;
   }

   @Override
   public boolean tg(double param1, double param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/py.dfcBl J
      // 03: ldc2_w 52906528523715
      // 06: lxor
      // 07: lstore 5
      // 09: invokestatic sixtwo/py.cRB ()I
      // 0c: istore 7
      // 0e: aload 0
      // 0f: getfield sixtwo/py.uajJe Z
      // 12: iload 7
      // 14: ifne 2c
      // 17: ifeq 5e
      // 1a: goto 21
      // 1d: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 0
      // 22: getfield sixtwo/py.Rrudb Z
      // 25: goto 2c
      // 28: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: iload 7
      // 2e: ifne 4b
      // 31: ifne 5e
      // 34: goto 3b
      // 37: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a: athrow
      // 3b: aload 0
      // 3c: getfield sixtwo/py.euKNr Lsixtwo/lc;
      // 3f: dload 1
      // 40: dload 3
      // 41: invokevirtual sixtwo/lc.bXD (DD)Z
      // 44: goto 4b
      // 47: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4a: athrow
      // 4b: iload 7
      // 4d: ifne 5b
      // 50: ifeq 5e
      // 53: goto 5a
      // 56: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 59: athrow
      // 5a: bipush 1
      // 5b: goto 5f
      // 5e: bipush 0
      // 5f: ireturn
   }

   public py order(int var1) {
      this.jPzky = var1;
      return this;
   }

   public int order() {
      return this.jPzky;
   }

   @Override
   public boolean ti(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/py.dfcBl J
      // 03: ldc2_w 16912882388192
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/py.cRB ()I
      // 0b: istore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/py.uajJe Z
      // 11: iload 4
      // 13: ifne 2b
      // 16: ifeq 76
      // 19: goto 20
      // 1c: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 0
      // 21: getfield sixtwo/py.Rrudb Z
      // 24: goto 2b
      // 27: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: iload 4
      // 2d: ifne 45
      // 30: ifne 76
      // 33: goto 3a
      // 36: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: aload 1
      // 3b: invokestatic sixtwo/jG.bHZ (Lsixtwo/lC;)Z
      // 3e: goto 45
      // 41: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: iload 4
      // 47: ifne 63
      // 4a: ifeq 76
      // 4d: goto 54
      // 50: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 53: athrow
      // 54: aload 0
      // 55: getfield sixtwo/py.euKNr Lsixtwo/lc;
      // 58: aload 1
      // 59: invokevirtual sixtwo/lc.bXE (Lsixtwo/lC;)Z
      // 5c: goto 63
      // 5f: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 62: athrow
      // 63: iload 4
      // 65: ifne 73
      // 68: ifeq 76
      // 6b: goto 72
      // 6e: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 71: athrow
      // 72: bipush 1
      // 73: goto 77
      // 76: bipush 0
      // 77: ireturn
   }

   public boolean active() {
      return this.uajJe;
   }

   @Override
   protected void bV(lC var1) {
   }

   public float cQZ() {
      return this.IIJgd;
   }

   public py cRr(float var1) {
      this.OLEnw = var1;
      return this;
   }

   public py cRl(boolean var1) {
      this.Iqptt = var1;
      return this;
   }

   public float cRb() {
      return this.OLEnw;
   }

   public py cRt(float var1) {
      this.sJTEF = var1;
      return this;
   }

   public rk cQN() {
      return this.RnEgc;
   }

   public void cQA() {
      this.Rrudb = false;
      this.Iqptt = this.uajJe;
      this.pHrkM = false;
   }

   protected float cQI(float var1, float var2) {
      return var1 * var2;
   }

   public boolean cQU() {
      return this.GWcRy;
   }

   public py cRu(float var1) {
      this.OAdOq = var1;
      return this;
   }

   public py cRw(float var1) {
      this.SzsRB = var1;
      return this;
   }

   public py cRo(float var1) {
      this.KAWQC = var1;
      return this;
   }

   public py cRx(float var1) {
      this.XykmV = var1;
      return this;
   }

   public py cRy(float var1) {
      this.ZOsRY = var1;
      return this;
   }

   private static int cRD(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 22474;
      if (NFScw[var3] == null) {
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
         long var5 = DsBXn[var3];
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
         Object[] var9 = (Object[])MYDKC.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               MYDKC.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/py", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         NFScw[var3] = var15;
      }

      return NFScw[var3];
   }

   public void cQy(double var1, double var3) {
      this.Rrudb = true;
      this.Iqptt = false;
      this.ybpom = (float)var1;
      this.KAWQC = (float)var3;
      this.IIJgd = 0.5F;
      this.lbLFN = 0.5F;
      this.OLEnw = this.euKNr.bXF();
      this.HPRNB = this.euKNr.bXG();
      this.pHrkM = false;
   }

   public void cQx(double param1, double param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/py.dfcBl J
      // 03: ldc2_w 39689849241280
      // 06: lxor
      // 07: lstore 5
      // 09: invokestatic sixtwo/py.cRA ()I
      // 0c: istore 7
      // 0e: aload 0
      // 0f: iload 7
      // 11: ifeq 33
      // 14: dload 1
      // 15: dload 3
      // 16: invokevirtual sixtwo/py.tg (DD)Z
      // 19: ifne 28
      // 1c: goto 23
      // 1f: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: return
      // 24: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: aload 0
      // 29: bipush 1
      // 2a: putfield sixtwo/py.Rrudb Z
      // 2d: aload 0
      // 2e: bipush 0
      // 2f: putfield sixtwo/py.Iqptt Z
      // 32: aload 0
      // 33: getfield sixtwo/py.euKNr Lsixtwo/lc;
      // 36: invokevirtual sixtwo/lc.bXH ()F
      // 39: fconst_1
      // 3a: invokestatic java/lang/Math.max (FF)F
      // 3d: fstore 8
      // 3f: aload 0
      // 40: getfield sixtwo/py.euKNr Lsixtwo/lc;
      // 43: invokevirtual sixtwo/lc.bXI ()F
      // 46: fconst_1
      // 47: invokestatic java/lang/Math.max (FF)F
      // 4a: fstore 9
      // 4c: aload 0
      // 4d: dload 1
      // 4e: d2f
      // 4f: putfield sixtwo/py.ybpom F
      // 52: aload 0
      // 53: dload 3
      // 54: d2f
      // 55: putfield sixtwo/py.KAWQC F
      // 58: aload 0
      // 59: dload 1
      // 5a: aload 0
      // 5b: getfield sixtwo/py.euKNr Lsixtwo/lc;
      // 5e: invokevirtual sixtwo/lc.bXF ()F
      // 61: f2d
      // 62: dsub
      // 63: fload 8
      // 65: f2d
      // 66: ddiv
      // 67: d2f
      // 68: fconst_0
      // 69: fconst_1
      // 6a: invokestatic java/lang/Math.clamp (FFF)F
      // 6d: putfield sixtwo/py.IIJgd F
      // 70: aload 0
      // 71: dload 3
      // 72: aload 0
      // 73: getfield sixtwo/py.euKNr Lsixtwo/lc;
      // 76: invokevirtual sixtwo/lc.bXG ()F
      // 79: f2d
      // 7a: dsub
      // 7b: fload 9
      // 7d: f2d
      // 7e: ddiv
      // 7f: d2f
      // 80: fconst_0
      // 81: fconst_1
      // 82: invokestatic java/lang/Math.clamp (FFF)F
      // 85: putfield sixtwo/py.lbLFN F
      // 88: aload 0
      // 89: aload 0
      // 8a: getfield sixtwo/py.euKNr Lsixtwo/lc;
      // 8d: invokevirtual sixtwo/lc.bXF ()F
      // 90: putfield sixtwo/py.OLEnw F
      // 93: aload 0
      // 94: aload 0
      // 95: getfield sixtwo/py.euKNr Lsixtwo/lc;
      // 98: invokevirtual sixtwo/lc.bXG ()F
      // 9b: putfield sixtwo/py.HPRNB F
      // 9e: aload 0
      // 9f: bipush 0
      // a0: putfield sixtwo/py.pHrkM Z
      // a3: return
   }

   private static int cRE(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = cRD(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public py cRj(boolean var1) {
      this.Rrudb = var1;
      return this;
   }

   public py cRn(float var1) {
      this.ybpom = var1;
      return this;
   }

   protected float cQJ(lc param1, boolean param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/py.dfcBl J
      // 03: ldc2_w 83780138233827
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/py.cRA ()I
      // 0b: istore 5
      // 0d: iload 2
      // 0e: ifne 28
      // 11: aload 1
      // 12: iload 5
      // 14: ifeq 32
      // 17: goto 1e
      // 1a: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: ifnonnull 31
      // 21: goto 28
      // 24: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: aload 0
      // 29: invokevirtual sixtwo/py.cQE ()F
      // 2c: freturn
      // 2d: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30: athrow
      // 31: aload 1
      // 32: invokevirtual sixtwo/lc.bXI ()F
      // 35: ldc_w 80.0
      // 38: fdiv
      // 39: ldc_w 0.4
      // 3c: fconst_1
      // 3d: invokestatic java/lang/Math.clamp (FFF)F
      // 40: fstore 6
      // 42: aload 0
      // 43: invokevirtual sixtwo/py.cQE ()F
      // 46: fload 6
      // 48: fmul
      // 49: freturn
   }

   public float cRe() {
      return this.OAdOq;
   }

   public py cRv(float var1) {
      this.UOoKH = var1;
      return this;
   }

   public void cQB() {
      this.Rrudb = false;
      this.GWcRy = false;
      this.Iqptt = false;
      this.pHrkM = false;
   }

   public float cQX() {
      return this.ybpom;
   }

   public void cQG(double param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/py.dfcBl J
      // 03: ldc2_w 139617088027297
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/py.cRB ()I
      // 0b: istore 5
      // 0d: iload 5
      // 0f: ifne 39
      // 12: dload 1
      // 13: dconst_0
      // 14: dcmpl
      // 15: ifne 24
      // 18: goto 1f
      // 1b: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e: athrow
      // 1f: return
      // 20: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aload 0
      // 25: aload 0
      // 26: invokevirtual sixtwo/py.cQE ()F
      // 29: f2d
      // 2a: dload 1
      // 2b: aload 0
      // 2c: getfield sixtwo/py.hmPAD Lsixtwo/cC;
      // 2f: invokevirtual sixtwo/cC.VH ()D
      // 32: dmul
      // 33: dadd
      // 34: d2f
      // 35: invokevirtual sixtwo/py.cQD (F)Lsixtwo/py;
      // 38: pop
      // 39: return
   }

   public py cQD(float var1) {
      this.hmPAD.VA(var1);
      return this;
   }

   public rk cQO() {
      return this.oOKGX;
   }

   public float cQY() {
      return this.KAWQC;
   }

   public float cRc() {
      return this.HPRNB;
   }

   public float cRg() {
      return this.SzsRB;
   }

   public float cRi() {
      return this.ZOsRY;
   }

   protected void cQK(lC param1, class_1799 param2, float param3, float param4, float param5, float param6) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/py.dfcBl J
      // 03: ldc2_w 125069874519963
      // 06: lxor
      // 07: lstore 7
      // 09: invokestatic sixtwo/py.cRB ()I
      // 0c: istore 9
      // 0e: aload 2
      // 0f: iload 9
      // 11: ifne 1f
      // 14: ifnull 4b
      // 17: goto 1e
      // 1a: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 2
      // 1f: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 22: iload 9
      // 24: ifne 48
      // 27: ifne 4b
      // 2a: goto 31
      // 2d: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30: athrow
      // 31: fload 6
      // 33: iload 9
      // 35: ifne 4f
      // 38: goto 3f
      // 3b: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3e: athrow
      // 3f: fconst_0
      // 40: fcmpg
      // 41: goto 48
      // 44: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: ifgt 4c
      // 4b: return
      // 4c: invokestatic sixtwo/jF.bHy ()F
      // 4f: fstore 10
      // 51: fconst_1
      // 52: fload 6
      // 54: invokestatic java/lang/Math.min (FF)F
      // 57: fstore 11
      // 59: fconst_1
      // 5a: fconst_1
      // 5b: fconst_1
      // 5c: fload 11
      // 5e: invokestatic sixtwo/jF.bHz (FFFF)V
      // 61: aload 1
      // 62: aload 2
      // 63: fload 3
      // 64: fload 4
      // 66: fload 5
      // 68: invokevirtual sixtwo/lC.cea (Lnet/minecraft/class_1799;FFF)Lsixtwo/jv;
      // 6b: invokevirtual sixtwo/jv.bGv ()Lsixtwo/jy;
      // 6e: pop
      // 6f: fconst_1
      // 70: fconst_1
      // 71: fconst_1
      // 72: fload 10
      // 74: invokestatic sixtwo/jF.bHz (FFFF)V
      // 77: return
   }

   public boolean cQT() {
      return this.Rrudb;
   }

   public boolean cQV() {
      return this.Iqptt;
   }

   public py cRk(boolean var1) {
      this.GWcRy = var1;
      return this;
   }

   public py cRp(float var1) {
      this.IIJgd = var1;
      return this;
   }

   public cC cQF() {
      return this.hmPAD;
   }

   public py cRq(float var1) {
      this.lbLFN = var1;
      return this;
   }

   public rk cQP() {
      return this.kosRk;
   }

   public String cQR() {
      return this.hNALo;
   }

   public boolean cQW() {
      return this.pHrkM;
   }

   public float cRa() {
      return this.lbLFN;
   }

   public float cRh() {
      return this.XykmV;
   }

   public void cQz(double param1, double param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/py.dfcBl J
      // 03: ldc2_w 114897287819204
      // 06: lxor
      // 07: lstore 5
      // 09: invokestatic sixtwo/py.cRA ()I
      // 0c: istore 7
      // 0e: aload 0
      // 0f: iload 7
      // 11: ifeq 7d
      // 14: getfield sixtwo/py.Rrudb Z
      // 17: ifne 26
      // 1a: goto 21
      // 1d: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: return
      // 22: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: dload 1
      // 28: d2f
      // 29: putfield sixtwo/py.ybpom F
      // 2c: aload 0
      // 2d: dload 3
      // 2e: d2f
      // 2f: putfield sixtwo/py.KAWQC F
      // 32: aload 0
      // 33: aload 0
      // 34: getfield sixtwo/py.ybpom F
      // 37: aload 0
      // 38: getfield sixtwo/py.euKNr Lsixtwo/lc;
      // 3b: invokevirtual sixtwo/lc.bXH ()F
      // 3e: aload 0
      // 3f: getfield sixtwo/py.IIJgd F
      // 42: fmul
      // 43: fsub
      // 44: putfield sixtwo/py.OLEnw F
      // 47: aload 0
      // 48: aload 0
      // 49: getfield sixtwo/py.KAWQC F
      // 4c: aload 0
      // 4d: getfield sixtwo/py.euKNr Lsixtwo/lc;
      // 50: invokevirtual sixtwo/lc.bXI ()F
      // 53: aload 0
      // 54: getfield sixtwo/py.lbLFN F
      // 57: fmul
      // 58: fsub
      // 59: putfield sixtwo/py.HPRNB F
      // 5c: aload 0
      // 5d: getfield sixtwo/py.kosRk Lsixtwo/rk;
      // 60: aload 0
      // 61: getfield sixtwo/py.OLEnw F
      // 64: aload 0
      // 65: getfield sixtwo/py.sJTEF F
      // 68: fsub
      // 69: invokevirtual sixtwo/rk.dhe (F)V
      // 6c: aload 0
      // 6d: getfield sixtwo/py.vqYvK Lsixtwo/rk;
      // 70: aload 0
      // 71: getfield sixtwo/py.HPRNB F
      // 74: aload 0
      // 75: getfield sixtwo/py.OAdOq F
      // 78: fsub
      // 79: invokevirtual sixtwo/rk.dhe (F)V
      // 7c: aload 0
      // 7d: getfield sixtwo/py.euKNr Lsixtwo/lc;
      // 80: aload 0
      // 81: getfield sixtwo/py.OLEnw F
      // 84: aload 0
      // 85: getfield sixtwo/py.HPRNB F
      // 88: invokevirtual sixtwo/lc.bXt (FF)V
      // 8b: return
   }

   public float cRd() {
      return this.sJTEF;
   }

   public float cQE() {
      return this.hmPAD.VB();
   }

   public py cQC(boolean var1) {
      this.uajJe = var1;
      return this;
   }

   protected class_241 cQL() {
      return class_241.field_1340;
   }

   public float cRf() {
      return this.UOoKH;
   }

   public py cRs(float var1) {
      this.HPRNB = var1;
      return this;
   }

   public rk cQQ() {
      return this.vqYvK;
   }

   public String cQS() {
      return this.RJEfO;
   }

   public py cRm(boolean var1) {
      this.pHrkM = var1;
      return this;
   }

   protected float cQM(boolean var1) {
      long var2 = dfcBl ^ 68799520289356L;

      try {
         if (var1) {
            return this.oOKGX.dhj() * this.RnEgc.dhj();
         }
      } catch (MatchException var4) {
         throw cRC(var4);
      }

      return this.RnEgc.dhj();
   }

   protected float cQH(float var1) {
      return var1 * this.cQE();
   }

   private float cQv(lc param1, lc param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/py.dfcBl J
      // 03: ldc2_w 126327335650807
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/py.cRB ()I
      // 0b: istore 5
      // 0d: aload 2
      // 0e: iload 5
      // 10: ifne 29
      // 13: ifnonnull 28
      // 16: goto 1d
      // 19: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 1
      // 1e: invokevirtual sixtwo/lc.bXG ()F
      // 21: goto 31
      // 24: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: aload 1
      // 29: invokevirtual sixtwo/lc.bXG ()F
      // 2c: aload 2
      // 2d: invokevirtual sixtwo/lc.bXG ()F
      // 30: fsub
      // 31: freturn
   }

   private static MatchException cRC(MatchException var0) {
      return var0;
   }

   public static void cRz(int var0) {
      hDHpj = var0;
   }

   public void cQp(lC var1, lc var2, class_1297 var3) {
      this.cQr(var1, var2, var3, false);
   }

   public lc cQs(lc var1) {
      return this.cQt(var1, null);
   }

   private float cQu(lc param1, lc param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/py.dfcBl J
      // 03: ldc2_w 54213601709164
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/py.cRA ()I
      // 0b: istore 5
      // 0d: aload 2
      // 0e: iload 5
      // 10: ifeq 29
      // 13: ifnonnull 28
      // 16: goto 1d
      // 19: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 1
      // 1e: invokevirtual sixtwo/lc.bXF ()F
      // 21: goto 31
      // 24: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: aload 1
      // 29: invokevirtual sixtwo/lc.bXF ()F
      // 2c: aload 2
      // 2d: invokevirtual sixtwo/lc.bXF ()F
      // 30: fsub
      // 31: freturn
   }

   public static int cRA() {
      return hDHpj;
   }

   private static CallSite cRF(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cRE".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/py" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public void cQq(lC var1, lc var2) {
      this.cQr(var1, var2, null, true);
   }

   public lc cQt(lc param1, lc param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/py.dfcBl J
      // 003: ldc2_w 68600590546717
      // 006: lxor
      // 007: lstore 3
      // 008: aload 0
      // 009: aload 1
      // 00a: aload 2
      // 00b: invokevirtual sixtwo/py.cQu (Lsixtwo/lc;Lsixtwo/lc;)F
      // 00e: fstore 6
      // 010: invokestatic sixtwo/py.cRB ()I
      // 013: aload 0
      // 014: aload 1
      // 015: aload 2
      // 016: invokevirtual sixtwo/py.cQv (Lsixtwo/lc;Lsixtwo/lc;)F
      // 019: fstore 7
      // 01b: istore 5
      // 01d: aload 0
      // 01e: getfield sixtwo/py.GWcRy Z
      // 021: iload 5
      // 023: ifne 03b
      // 026: ifeq 0a2
      // 029: goto 030
      // 02c: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02f: athrow
      // 030: aload 0
      // 031: getfield sixtwo/py.uajJe Z
      // 034: goto 03b
      // 037: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03a: athrow
      // 03b: iload 5
      // 03d: ifne 055
      // 040: ifeq 0a2
      // 043: goto 04a
      // 046: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 049: athrow
      // 04a: aload 0
      // 04b: getfield sixtwo/py.Rrudb Z
      // 04e: goto 055
      // 051: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 054: athrow
      // 055: iload 5
      // 057: ifne 072
      // 05a: ifne 0a2
      // 05d: goto 064
      // 060: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 063: athrow
      // 064: aload 0
      // 065: getfield sixtwo/py.UOoKH F
      // 068: fload 6
      // 06a: fcmpl
      // 06b: goto 072
      // 06e: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 071: athrow
      // 072: iload 5
      // 074: ifne 09f
      // 077: ifne 09e
      // 07a: goto 081
      // 07d: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 080: athrow
      // 081: aload 0
      // 082: getfield sixtwo/py.SzsRB F
      // 085: fload 7
      // 087: fcmpl
      // 088: iload 5
      // 08a: ifne 09f
      // 08d: goto 094
      // 090: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 093: athrow
      // 094: ifeq 0a2
      // 097: goto 09e
      // 09a: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09d: athrow
      // 09e: bipush 1
      // 09f: goto 0a3
      // 0a2: bipush 0
      // 0a3: istore 8
      // 0a5: aload 0
      // 0a6: aload 1
      // 0a7: invokevirtual sixtwo/lc.bXF ()F
      // 0aa: putfield sixtwo/py.sJTEF F
      // 0ad: aload 0
      // 0ae: aload 1
      // 0af: invokevirtual sixtwo/lc.bXG ()F
      // 0b2: putfield sixtwo/py.OAdOq F
      // 0b5: aload 0
      // 0b6: fload 6
      // 0b8: putfield sixtwo/py.UOoKH F
      // 0bb: aload 0
      // 0bc: fload 7
      // 0be: putfield sixtwo/py.SzsRB F
      // 0c1: aload 0
      // 0c2: getfield sixtwo/py.Rrudb Z
      // 0c5: iload 5
      // 0c7: ifne 150
      // 0ca: ifeq 145
      // 0cd: goto 0d4
      // 0d0: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d3: athrow
      // 0d4: aload 0
      // 0d5: aload 0
      // 0d6: getfield sixtwo/py.ybpom F
      // 0d9: aload 1
      // 0da: invokevirtual sixtwo/lc.bXH ()F
      // 0dd: aload 0
      // 0de: getfield sixtwo/py.IIJgd F
      // 0e1: fmul
      // 0e2: fsub
      // 0e3: putfield sixtwo/py.OLEnw F
      // 0e6: aload 0
      // 0e7: aload 0
      // 0e8: getfield sixtwo/py.KAWQC F
      // 0eb: aload 1
      // 0ec: invokevirtual sixtwo/lc.bXI ()F
      // 0ef: aload 0
      // 0f0: getfield sixtwo/py.lbLFN F
      // 0f3: fmul
      // 0f4: fsub
      // 0f5: putfield sixtwo/py.HPRNB F
      // 0f8: aload 0
      // 0f9: getfield sixtwo/py.kosRk Lsixtwo/rk;
      // 0fc: aload 0
      // 0fd: getfield sixtwo/py.OLEnw F
      // 100: aload 1
      // 101: invokevirtual sixtwo/lc.bXF ()F
      // 104: fsub
      // 105: invokevirtual sixtwo/rk.dhe (F)V
      // 108: aload 0
      // 109: getfield sixtwo/py.vqYvK Lsixtwo/rk;
      // 10c: aload 0
      // 10d: getfield sixtwo/py.HPRNB F
      // 110: aload 1
      // 111: invokevirtual sixtwo/lc.bXG ()F
      // 114: fsub
      // 115: invokevirtual sixtwo/rk.dhe (F)V
      // 118: aload 0
      // 119: aload 1
      // 11a: aload 0
      // 11b: getfield sixtwo/py.kosRk Lsixtwo/rk;
      // 11e: invokevirtual sixtwo/rk.dhj ()F
      // 121: aload 0
      // 122: getfield sixtwo/py.vqYvK Lsixtwo/rk;
      // 125: invokevirtual sixtwo/rk.dhj ()F
      // 128: fload 6
      // 12a: fload 7
      // 12c: invokevirtual sixtwo/py.cQw (Lsixtwo/lc;FFFF)V
      // 12f: aload 0
      // 130: bipush 1
      // 131: putfield sixtwo/py.GWcRy Z
      // 134: aload 0
      // 135: bipush 0
      // 136: putfield sixtwo/py.pHrkM Z
      // 139: iload 5
      // 13b: ifeq 2f9
      // 13e: goto 145
      // 141: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 144: athrow
      // 145: aload 0
      // 146: getfield sixtwo/py.uajJe Z
      // 149: goto 150
      // 14c: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14f: athrow
      // 150: iload 5
      // 152: ifne 1d0
      // 155: ifne 1c5
      // 158: goto 15f
      // 15b: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 15e: athrow
      // 15f: aload 0
      // 160: getfield sixtwo/py.euKNr Lsixtwo/lc;
      // 163: invokevirtual sixtwo/lc.bXH ()F
      // 166: fconst_0
      // 167: fcmpl
      // 168: iload 5
      // 16a: ifne 1d0
      // 16d: goto 174
      // 170: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 173: athrow
      // 174: ifle 1c5
      // 177: goto 17e
      // 17a: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 17d: athrow
      // 17e: aload 0
      // 17f: getfield sixtwo/py.euKNr Lsixtwo/lc;
      // 182: invokevirtual sixtwo/lc.bXI ()F
      // 185: fconst_0
      // 186: fcmpl
      // 187: iload 5
      // 189: ifne 1d0
      // 18c: goto 193
      // 18f: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 192: athrow
      // 193: ifle 1c5
      // 196: goto 19d
      // 199: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 19c: athrow
      // 19d: aload 0
      // 19e: aload 1
      // 19f: aload 0
      // 1a0: getfield sixtwo/py.kosRk Lsixtwo/rk;
      // 1a3: invokevirtual sixtwo/rk.dhj ()F
      // 1a6: aload 0
      // 1a7: getfield sixtwo/py.vqYvK Lsixtwo/rk;
      // 1aa: invokevirtual sixtwo/rk.dhj ()F
      // 1ad: fload 6
      // 1af: fload 7
      // 1b1: invokevirtual sixtwo/py.cQw (Lsixtwo/lc;FFFF)V
      // 1b4: aload 0
      // 1b5: bipush 1
      // 1b6: putfield sixtwo/py.GWcRy Z
      // 1b9: iload 5
      // 1bb: ifeq 2f9
      // 1be: goto 1c5
      // 1c1: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c4: athrow
      // 1c5: aload 0
      // 1c6: getfield sixtwo/py.GWcRy Z
      // 1c9: goto 1d0
      // 1cc: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1cf: athrow
      // 1d0: iload 5
      // 1d2: ifne 21e
      // 1d5: ifne 215
      // 1d8: goto 1df
      // 1db: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1de: athrow
      // 1df: aload 0
      // 1e0: getfield sixtwo/py.kosRk Lsixtwo/rk;
      // 1e3: fconst_0
      // 1e4: invokevirtual sixtwo/rk.dhe (F)V
      // 1e7: aload 0
      // 1e8: getfield sixtwo/py.vqYvK Lsixtwo/rk;
      // 1eb: fconst_0
      // 1ec: invokevirtual sixtwo/rk.dhe (F)V
      // 1ef: aload 0
      // 1f0: aload 1
      // 1f1: fconst_0
      // 1f2: fconst_0
      // 1f3: fload 6
      // 1f5: fload 7
      // 1f7: invokevirtual sixtwo/py.cQw (Lsixtwo/lc;FFFF)V
      // 1fa: aload 0
      // 1fb: bipush 1
      // 1fc: putfield sixtwo/py.GWcRy Z
      // 1ff: aload 0
      // 200: bipush 0
      // 201: putfield sixtwo/py.Iqptt Z
      // 204: aload 0
      // 205: bipush 1
      // 206: putfield sixtwo/py.pHrkM Z
      // 209: iload 5
      // 20b: ifeq 2f9
      // 20e: goto 215
      // 211: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 214: athrow
      // 215: iload 8
      // 217: goto 21e
      // 21a: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21d: athrow
      // 21e: iload 5
      // 220: ifne 26a
      // 223: ifeq 25f
      // 226: goto 22d
      // 229: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22c: athrow
      // 22d: aload 0
      // 22e: getfield sixtwo/py.kosRk Lsixtwo/rk;
      // 231: aload 0
      // 232: getfield sixtwo/py.XykmV F
      // 235: fload 6
      // 237: fsub
      // 238: invokevirtual sixtwo/rk.dhe (F)V
      // 23b: aload 0
      // 23c: getfield sixtwo/py.vqYvK Lsixtwo/rk;
      // 23f: aload 0
      // 240: getfield sixtwo/py.ZOsRY F
      // 243: fload 7
      // 245: fsub
      // 246: invokevirtual sixtwo/rk.dhe (F)V
      // 249: aload 0
      // 24a: bipush 1
      // 24b: putfield sixtwo/py.Iqptt Z
      // 24e: aload 0
      // 24f: bipush 1
      // 250: putfield sixtwo/py.pHrkM Z
      // 253: iload 5
      // 255: ifeq 29d
      // 258: goto 25f
      // 25b: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25e: athrow
      // 25f: aload 0
      // 260: getfield sixtwo/py.Iqptt Z
      // 263: goto 26a
      // 266: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 269: athrow
      // 26a: iload 5
      // 26c: ifne 2ad
      // 26f: ifne 29d
      // 272: goto 279
      // 275: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 278: athrow
      // 279: aload 0
      // 27a: getfield sixtwo/py.kosRk Lsixtwo/rk;
      // 27d: fconst_0
      // 27e: invokevirtual sixtwo/rk.dhe (F)V
      // 281: aload 0
      // 282: getfield sixtwo/py.vqYvK Lsixtwo/rk;
      // 285: fconst_0
      // 286: invokevirtual sixtwo/rk.dhe (F)V
      // 289: aload 0
      // 28a: aload 1
      // 28b: fconst_0
      // 28c: fconst_0
      // 28d: fload 6
      // 28f: fload 7
      // 291: invokevirtual sixtwo/py.cQw (Lsixtwo/lc;FFFF)V
      // 294: aload 0
      // 295: getfield sixtwo/py.euKNr Lsixtwo/lc;
      // 298: areturn
      // 299: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29c: athrow
      // 29d: aload 0
      // 29e: iload 5
      // 2a0: ifne 2d9
      // 2a3: getfield sixtwo/py.pHrkM Z
      // 2a6: goto 2ad
      // 2a9: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2ac: athrow
      // 2ad: ifne 2d8
      // 2b0: aload 0
      // 2b1: getfield sixtwo/py.kosRk Lsixtwo/rk;
      // 2b4: aload 0
      // 2b5: getfield sixtwo/py.XykmV F
      // 2b8: fload 6
      // 2ba: fsub
      // 2bb: invokevirtual sixtwo/rk.dhe (F)V
      // 2be: aload 0
      // 2bf: getfield sixtwo/py.vqYvK Lsixtwo/rk;
      // 2c2: aload 0
      // 2c3: getfield sixtwo/py.ZOsRY F
      // 2c6: fload 7
      // 2c8: fsub
      // 2c9: invokevirtual sixtwo/rk.dhe (F)V
      // 2cc: aload 0
      // 2cd: bipush 1
      // 2ce: putfield sixtwo/py.pHrkM Z
      // 2d1: goto 2d8
      // 2d4: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d7: athrow
      // 2d8: aload 0
      // 2d9: getfield sixtwo/py.kosRk Lsixtwo/rk;
      // 2dc: fconst_0
      // 2dd: invokevirtual sixtwo/rk.dhh (F)F
      // 2e0: fstore 9
      // 2e2: aload 0
      // 2e3: getfield sixtwo/py.vqYvK Lsixtwo/rk;
      // 2e6: fconst_0
      // 2e7: invokevirtual sixtwo/rk.dhh (F)F
      // 2ea: fstore 10
      // 2ec: aload 0
      // 2ed: aload 1
      // 2ee: fload 9
      // 2f0: fload 10
      // 2f2: fload 6
      // 2f4: fload 7
      // 2f6: invokevirtual sixtwo/py.cQw (Lsixtwo/lc;FFFF)V
      // 2f9: aload 0
      // 2fa: getfield sixtwo/py.euKNr Lsixtwo/lc;
      // 2fd: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 300: ifnonnull 312
      // 303: iinc 5 1
      // 306: iload 5
      // 308: invokestatic sixtwo/py.cRz (I)V
      // 30b: goto 312
      // 30e: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 311: athrow
      // 312: areturn
   }

   private void cQw(lc var1, float var2, float var3, float var4, float var5) {
      this.euKNr.bXr(var1.bXF() + var2, var1.bXG() + var3, var1.bXH(), var1.bXI());
      this.XykmV = var4 + var2;
      this.ZOsRY = var5 + var3;
      this.sZ(this.euKNr);
   }

   private void cQr(lC param1, lc param2, class_1297 param3, boolean param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/py.dfcBl J
      // 03: ldc2_w 54115312918841
      // 06: lxor
      // 07: lstore 5
      // 09: invokestatic sixtwo/py.cRA ()I
      // 0c: aload 0
      // 0d: astore 9
      // 0f: istore 7
      // 11: aload 9
      // 13: instanceof sixtwo/pC
      // 16: iload 7
      // 18: ifeq 3d
      // 1b: ifeq 39
      // 1e: goto 25
      // 21: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: aload 9
      // 27: checkcast sixtwo/pC
      // 2a: astore 8
      // 2c: aload 8
      // 2e: aload 1
      // 2f: aload 2
      // 30: aload 3
      // 31: iload 4
      // 33: invokeinterface sixtwo/pC.drawFrame (Lsixtwo/lC;Lsixtwo/lc;Lnet/minecraft/class_1297;Z)V 5
      // 38: return
      // 39: aload 0
      // 3a: instanceof sixtwo/pz
      // 3d: iload 7
      // 3f: ifeq 57
      // 42: ifne 5a
      // 45: goto 4c
      // 48: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4b: athrow
      // 4c: aload 0
      // 4d: instanceof sixtwo/pE
      // 50: goto 57
      // 53: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 56: athrow
      // 57: ifeq 6d
      // 5a: aload 1
      // 5b: aload 2
      // 5c: aload 3
      // 5d: aload 0
      // 5e: invokestatic java/util/List.of (Ljava/lang/Object;)Ljava/util/List;
      // 61: iload 4
      // 63: invokestatic sixtwo/pj.cNs (Lsixtwo/lC;Lsixtwo/lc;Lnet/minecraft/class_1297;Ljava/util/List;Z)V
      // 66: goto 6d
      // 69: invokestatic sixtwo/py.cRC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6c: athrow
      // 6d: return
   }

   public static int cRB() {
      int var0 = cRA();

      try {
         return var0 == 0 ? 117 : 0;
      } catch (MatchException var1) {
         throw cRC(var1);
      }
   }

   public py verticalAnchor(pK var1) {
      this.qbstY = var1;
      return this;
   }

   public pK verticalAnchor() {
      return this.qbstY;
   }

   public lc previewBounds() {
      return this.euKNr;
   }
}
