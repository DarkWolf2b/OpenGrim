package sixtwo;

import com.mojang.blaze3d.opengl.GlStateManager;
import com.mojang.blaze3d.systems.RenderSystem;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.nio.FloatBuffer;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import org.lwjgl.opengl.GL11C;
import org.lwjgl.opengl.GL13C;
import org.lwjgl.opengl.GL14C;
import org.lwjgl.opengl.GL15;
import org.lwjgl.opengl.GL15C;
import org.lwjgl.opengl.GL20;
import org.lwjgl.opengl.GL20C;
import org.lwjgl.opengl.GL30;
import org.lwjgl.opengl.GL30C;
import org.lwjgl.opengl.GL33C;

public final class lQ {
   public static final int wjyTu;
   public static final int GOYJU;
   public static final int MtKgJ;
   public static final int DZRYj;
   public static final int OvEXM;
   public static final int VaZaQ;
   public static final int iYfpb = 1;
   public static final int owoKc;
   private static boolean aMvFW;
   private static boolean nKuBJ;
   private static boolean fCEzP;
   private static boolean LIZvL;
   private static boolean VVTnq;
   private static int tevXB;
   private static int WPrfB;
   private static int jCLAR;
   private static int JCuUr;
   private static int VLrxD;
   private static int cQWic;
   private static int VeAij;
   private static int ejZTh;
   private static int bbfkk;
   private static int SIlve;
   private static int TcXqa;
   private static int ManrS;
   private static int AEnnS;
   private static int joTfj;
   private static final int[] FrYbs;
   private static int swnov;
   private static int jYHrQ;
   private static final long erOHr = gb.aYR(3456135055035395908L, 6732740744624808019L, MethodHandles.lookup().lookupClass()).a(150763448627319L);
   private static final long[] UOEnR;
   private static final Integer[] HaCDI;
   private static final Map BwWNH = new HashMap(13);

   static {
      long var0 = erOHr ^ 110064258505761L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[52];
      int var5 = 0;
      String var6 = "\u0097Hu\u0083┬╗\u0018\u0087├ž\u001b┬«Y(Bm┬Ę\"┬ó├ú├ĺ┬»\u0094\u0006\u008b\u00109\u0092TO├┤]i\u001csz\u0004p3\u0092├â├»g├Ç\u0086i├íc├ł\u0010├çj├│┬▒├Â┬Č┬ó\\\u0001├ľ\u0099[\u000e├ş├▒┬Ż\u0014\u001a[├╝E\u0097\u0086├Ł){\u008aA├č\u000e\u0088├Ç5V┬╗├│\u009b├║,┬╗┬ĄTMF├ó┬Ż+├ú┬Á├╣H\u009aH├ąM0├┐├┐├»\u008c0\tjgh├×\u0006├Ö├óx1├«:{*|\u009b>\u000e'Z├╝\u0018\u0096├ć├í\u000emO┬Žd-┬Č┬ą\u0080├ő├ś├Śb├ö┬Ž\u0091┬ú├×┬Ě\u008e\u009d┬í┬ż├î├Ľ\u0011F\u0083vn\u0099\u0001\u000b┬Ę├Ľ_\u009a├╣)H├őy├í\"Y┬▒Z\u008bg┬že \u0087┬ę\u0000\u0081>=H_OP\u0003=\u0007T┬Á\u0086┬Č\u0002\u009f\u0085W├│U\u00019V\u001c┬░├Ž%5\u009f\u0085┬Ž\u008f├óg-├│├Ö├Ź├│6T\u00808┬ę=Y├Ż\u008f├ž├Â┬ę├▓j\u0094*├Ą├şS┬┤y├ä\u0083├ívWh├ž/r\u0097├Ž\"├â├ż\u000b\ro┬¬\b├Á.\u001e\u0095├ž9\u0089├Üx├Ż├Ź\u0094M├Ś\u0088├ż├Ę┬ź\u0014\b# (A┬Ą├ů5├ź├ź\u0016M├á\u0015\u0004AL\u008a^a\u0096\u009eP1┬┐!├Ś├Ä\u0093├▒\u001a┬╗|\u0084\u009a├Ä┬Ą\u009d7┬┐┬Ş_\u001a}\u000f┬Ż┬Ž:i\u0002┬ŽU;w)\u00adn├Â\tYx\u009ap\u009d┬░┬áatyRt\u0081├ź\u000174'\u008d├ą\u0013┬žr \u000f├í┬ó[┬¬b\bM?┬░┬ą├ó┬Ş\u0088├╝\u008dd<├ł├Ť├ö\u009d├ä&┬░├á┬Ż\u0098├ż'";
      int var7 = "\u0097Hu\u0083┬╗\u0018\u0087├ž\u001b┬«Y(Bm┬Ę\"┬ó├ú├ĺ┬»\u0094\u0006\u008b\u00109\u0092TO├┤]i\u001csz\u0004p3\u0092├â├»g├Ç\u0086i├íc├ł\u0010├çj├│┬▒├Â┬Č┬ó\\\u0001├ľ\u0099[\u000e├ş├▒┬Ż\u0014\u001a[├╝E\u0097\u0086├Ł){\u008aA├č\u000e\u0088├Ç5V┬╗├│\u009b├║,┬╗┬ĄTMF├ó┬Ż+├ú┬Á├╣H\u009aH├ąM0├┐├┐├»\u008c0\tjgh├×\u0006├Ö├óx1├«:{*|\u009b>\u000e'Z├╝\u0018\u0096├ć├í\u000emO┬Žd-┬Č┬ą\u0080├ő├ś├Śb├ö┬Ž\u0091┬ú├×┬Ě\u008e\u009d┬í┬ż├î├Ľ\u0011F\u0083vn\u0099\u0001\u000b┬Ę├Ľ_\u009a├╣)H├őy├í\"Y┬▒Z\u008bg┬že \u0087┬ę\u0000\u0081>=H_OP\u0003=\u0007T┬Á\u0086┬Č\u0002\u009f\u0085W├│U\u00019V\u001c┬░├Ž%5\u009f\u0085┬Ž\u008f├óg-├│├Ö├Ź├│6T\u00808┬ę=Y├Ż\u008f├ž├Â┬ę├▓j\u0094*├Ą├şS┬┤y├ä\u0083├ívWh├ž/r\u0097├Ž\"├â├ż\u000b\ro┬¬\b├Á.\u001e\u0095├ž9\u0089├Üx├Ż├Ź\u0094M├Ś\u0088├ż├Ę┬ź\u0014\b# (A┬Ą├ů5├ź├ź\u0016M├á\u0015\u0004AL\u008a^a\u0096\u009eP1┬┐!├Ś├Ä\u0093├▒\u001a┬╗|\u0084\u009a├Ä┬Ą\u009d7┬┐┬Ş_\u001a}\u000f┬Ż┬Ž:i\u0002┬ŽU;w)\u00adn├Â\tYx\u009ap\u009d┬░┬áatyRt\u0081├ź\u000174'\u008d├ą\u0013┬žr \u000f├í┬ó[┬¬b\bM?┬░┬ą├ó┬Ş\u0088├╝\u008dd<├ł├Ť├ö\u009d├ä&┬░├á┬Ż\u0098├ż'"
         .length();
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
                     UOEnR = var8;
                     HaCDI = new Integer[52];
                     wjyTu = ciw<"x">(27223, var0 ^ 46201714285338385L);
                     owoKc = ciw<"x">(26265, var0 ^ 1112022353797338093L);
                     DZRYj = ciw<"x">(23561, var0 ^ 477538044818712901L);
                     MtKgJ = ciw<"x">(25692, var0 ^ 4604790024995524925L);
                     GOYJU = ciw<"x">(1157, var0 ^ 3072176616936419790L);
                     OvEXM = ciw<"x">(16048, var0 ^ 314852587288366032L);
                     VaZaQ = ciw<"x">(31123, var0 ^ 6978143821226462417L);
                     FrYbs = new int[4];
                     swnov = -1;
                     jYHrQ = -1;
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "I├ë┬Ę├Ś├ąF?\u0085├ś┬Čv\u009a\u0003[P9";
                  var7 = "I├ë┬Ę├Ś├ąF?\u0085├ś┬Čv\u009a\u0003[P9".length();
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

   public static void cis() {
      long var0 = erOHr ^ 23584621738369L;
      GL11C.glClear(ciw<"x">(13353, 6061192708668712128L ^ var0));
   }

   public static void cir(float var0, float var1, float var2, float var3) {
      GL11C.glClearColor(var0, var1, var2, var3);
   }

   public static boolean cip(int param0, int param1, int param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lQ.erOHr J
      // 03: ldc2_w 116827872718801
      // 06: lxor
      // 07: lstore 3
      // 08: iload 0
      // 09: iload 1
      // 0a: invokestatic com/mojang/blaze3d/opengl/GlStateManager.glAttachShader (II)V
      // 0d: iload 0
      // 0e: iload 2
      // 0f: invokestatic com/mojang/blaze3d/opengl/GlStateManager.glAttachShader (II)V
      // 12: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 15: iload 0
      // 16: invokestatic com/mojang/blaze3d/opengl/GlStateManager.glLinkProgram (I)V
      // 19: astore 5
      // 1b: iload 0
      // 1c: sipush 17839
      // 1f: ldc2_w 4782762150160024359
      // 22: lload 3
      // 23: lxor
      // 24: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 29: invokestatic com/mojang/blaze3d/opengl/GlStateManager.glGetProgrami (II)I
      // 2c: aload 5
      // 2e: ifnull 42
      // 31: ifne 41
      // 34: goto 3b
      // 37: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a: athrow
      // 3b: bipush 0
      // 3c: ireturn
      // 3d: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 40: athrow
      // 41: bipush 1
      // 42: ireturn
   }

   public static void chQ() {
      long var0 = erOHr ^ 77421288737739L;
      aMvFW = GL11C.glIsEnabled(ciw<"x">(21468, 6249050771994866046L ^ var0));
      nKuBJ = GL11C.glIsEnabled(ciw<"x">(19673, 2515623046957919821L ^ var0));
      fCEzP = GL11C.glIsEnabled(ciw<"x">(30943, 8665165509035776630L ^ var0));
      LIZvL = GL11C.glIsEnabled(ciw<"x">(16179, 8248285072148733367L ^ var0));
      VVTnq = GL11C.glGetBoolean(ciw<"x">(18272, 1372452210269513179L ^ var0));
      tevXB = GL11C.glGetInteger(ciw<"x">(28336, 1291455812761340966L ^ var0));
      WPrfB = GL11C.glGetInteger(ciw<"x">(4522, 2527321552140841768L ^ var0));
      jCLAR = GL11C.glGetInteger(ciw<"x">(26988, 6625952262412913607L ^ var0));
      JCuUr = GL11C.glGetInteger(ciw<"x">(25868, 8479713822073833363L ^ var0));
      VLrxD = GL11C.glGetInteger(ciw<"x">(11767, 6762085985853902690L ^ var0));
      cQWic = GL11C.glGetInteger(ciw<"x">(8893, 1473731940846370823L ^ var0));
      VeAij = GL11C.glGetInteger(ciw<"x">(29523, 1604904735547478485L ^ var0));
      ejZTh = GL11C.glGetInteger(ciw<"x">(14472, 5924272761728473625L ^ var0));
      bbfkk = GL11C.glGetInteger(ciw<"x">(8022, 8734472920892259801L ^ var0));
      GL11C.glGetIntegerv(ciw<"x">(19008, 4660721396914972864L ^ var0), FrYbs);
   }

   public static void chS() {
      long var0 = erOHr ^ 93552756668473L;
      SIlve = GL11C.glGetInteger(ciw<"x">(1998, 8614401778948200096L ^ var0));
      GL13C.glActiveTexture(ciw<"x">(24188, 6986305592168451861L ^ var0));
      TcXqa = GL11C.glGetInteger(ciw<"x">(13166, 3963499754706559537L ^ var0));
      AEnnS = GL11C.glGetInteger(ciw<"x">(13401, 3803095823252415788L ^ var0));
      GL13C.glActiveTexture(ciw<"x">(139, 8145520650684125690L ^ var0));
      ManrS = GL11C.glGetInteger(ciw<"x">(10547, 1034782869486008399L ^ var0));
      joTfj = GL11C.glGetInteger(ciw<"x">(28788, 644098915353010442L ^ var0));
      GL13C.glActiveTexture(SIlve);
   }

   public static void chT() {
      long var0 = erOHr ^ 114892446233785L;
      GL33C.glBindSampler(0, TcXqa);
      GL33C.glBindSampler(1, ManrS);
      GL13C.glActiveTexture(ciw<"x">(4593, 8652981190954060816L ^ var0));
      GL11C.glBindTexture(ciw<"x">(10640, 8376985347360568431L ^ var0), AEnnS);
      GL13C.glActiveTexture(ciw<"x">(22059, 1879666725042965440L ^ var0));
      GL11C.glBindTexture(ciw<"x">(29138, 5420667052946779169L ^ var0), joTfj);
      GL13C.glActiveTexture(SIlve);
   }

   public static void chO(int var0, int var1, int var2, int var3) {
      GL14C.glBlendFuncSeparate(var0, var1, var2, var3);
   }

   public static void chC(int var0, int var1) {
      GL33C.glBindSampler(var0, var1);
   }

   public static void chR() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lQ.erOHr J
      // 003: ldc2_w 107207399078286
      // 006: lxor
      // 007: lstore 0
      // 008: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 00b: astore 2
      // 00c: getstatic sixtwo/lQ.aMvFW Z
      // 00f: aload 2
      // 010: ifnull 04c
      // 013: ifeq 038
      // 016: goto 01d
      // 019: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01c: athrow
      // 01d: sipush 18535
      // 020: ldc2_w 7090957012727879816
      // 023: lload 0
      // 024: lxor
      // 025: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 02a: invokestatic org/lwjgl/opengl/GL11C.glEnable (I)V
      // 02d: aload 2
      // 02e: ifnonnull 04f
      // 031: goto 038
      // 034: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 037: athrow
      // 038: sipush 18535
      // 03b: ldc2_w 7090957012727879816
      // 03e: lload 0
      // 03f: lxor
      // 040: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 045: goto 04c
      // 048: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 04b: athrow
      // 04c: invokestatic org/lwjgl/opengl/GL11C.glDisable (I)V
      // 04f: getstatic sixtwo/lQ.nKuBJ Z
      // 052: aload 2
      // 053: ifnull 08f
      // 056: ifeq 07b
      // 059: goto 060
      // 05c: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05f: athrow
      // 060: sipush 4478
      // 063: ldc2_w 5314864969353560478
      // 066: lload 0
      // 067: lxor
      // 068: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 06d: invokestatic org/lwjgl/opengl/GL11C.glEnable (I)V
      // 070: aload 2
      // 071: ifnonnull 092
      // 074: goto 07b
      // 077: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07a: athrow
      // 07b: sipush 4478
      // 07e: ldc2_w 5314864969353560478
      // 081: lload 0
      // 082: lxor
      // 083: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 088: goto 08f
      // 08b: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08e: athrow
      // 08f: invokestatic org/lwjgl/opengl/GL11C.glDisable (I)V
      // 092: getstatic sixtwo/lQ.fCEzP Z
      // 095: aload 2
      // 096: ifnull 0d2
      // 099: ifeq 0be
      // 09c: goto 0a3
      // 09f: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a2: athrow
      // 0a3: sipush 30943
      // 0a6: ldc2_w 8665204915805808691
      // 0a9: lload 0
      // 0aa: lxor
      // 0ab: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0b0: invokestatic org/lwjgl/opengl/GL11C.glEnable (I)V
      // 0b3: aload 2
      // 0b4: ifnonnull 0d5
      // 0b7: goto 0be
      // 0ba: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0bd: athrow
      // 0be: sipush 30943
      // 0c1: ldc2_w 8665204915805808691
      // 0c4: lload 0
      // 0c5: lxor
      // 0c6: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0cb: goto 0d2
      // 0ce: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d1: athrow
      // 0d2: invokestatic org/lwjgl/opengl/GL11C.glDisable (I)V
      // 0d5: getstatic sixtwo/lQ.LIZvL Z
      // 0d8: aload 2
      // 0d9: ifnull 115
      // 0dc: ifeq 101
      // 0df: goto 0e6
      // 0e2: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e5: athrow
      // 0e6: sipush 23761
      // 0e9: ldc2_w 8268241430104329267
      // 0ec: lload 0
      // 0ed: lxor
      // 0ee: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0f3: invokestatic org/lwjgl/opengl/GL11C.glEnable (I)V
      // 0f6: aload 2
      // 0f7: ifnonnull 118
      // 0fa: goto 101
      // 0fd: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 100: athrow
      // 101: sipush 23761
      // 104: ldc2_w 8268241430104329267
      // 107: lload 0
      // 108: lxor
      // 109: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 10e: goto 115
      // 111: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 114: athrow
      // 115: invokestatic org/lwjgl/opengl/GL11C.glDisable (I)V
      // 118: getstatic sixtwo/lQ.tevXB I
      // 11b: getstatic sixtwo/lQ.WPrfB I
      // 11e: getstatic sixtwo/lQ.jCLAR I
      // 121: getstatic sixtwo/lQ.JCuUr I
      // 124: invokestatic org/lwjgl/opengl/GL14C.glBlendFuncSeparate (IIII)V
      // 127: sipush 29463
      // 12a: getstatic sixtwo/lQ.VLrxD I
      // 12d: invokestatic org/lwjgl/opengl/GL11C.glDepthFunc (I)V
      // 130: ldc2_w 8868304555306902491
      // 133: lload 0
      // 134: lxor
      // 135: getstatic sixtwo/lQ.VVTnq Z
      // 138: invokestatic org/lwjgl/opengl/GL11C.glDepthMask (Z)V
      // 13b: getstatic sixtwo/lQ.cQWic I
      // 13e: invokestatic org/lwjgl/opengl/GL20C.glUseProgram (I)V
      // 141: getstatic sixtwo/lQ.VeAij I
      // 144: invokestatic org/lwjgl/opengl/GL30C.glBindVertexArray (I)V
      // 147: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 14c: getstatic sixtwo/lQ.ejZTh I
      // 14f: invokestatic org/lwjgl/opengl/GL30C.glBindFramebuffer (II)V
      // 152: sipush 10168
      // 155: ldc2_w 152750924066895684
      // 158: lload 0
      // 159: lxor
      // 15a: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 15f: getstatic sixtwo/lQ.bbfkk I
      // 162: invokestatic org/lwjgl/opengl/GL30C.glBindFramebuffer (II)V
      // 165: getstatic sixtwo/lQ.FrYbs [I
      // 168: bipush 0
      // 169: iaload
      // 16a: getstatic sixtwo/lQ.FrYbs [I
      // 16d: bipush 1
      // 16e: iaload
      // 16f: getstatic sixtwo/lQ.FrYbs [I
      // 172: bipush 2
      // 173: iaload
      // 174: getstatic sixtwo/lQ.FrYbs [I
      // 177: bipush 3
      // 178: iaload
      // 179: invokestatic org/lwjgl/opengl/GL11C.glViewport (IIII)V
      // 17c: return
   }

   public static void ciq(int var0) {
      GL20C.glUseProgram(var0);
   }

   public static void chK() {
      long var0 = erOHr ^ 126488685786416L;
      GL11C.glEnable(ciw<"x">(18535, 7090971894147093558L ^ var0));
   }

   public static void chN() {
      long var0 = erOHr ^ 8182348313929L;
      GL11C.glDisable(ciw<"x">(30943, 8665096132119258356L ^ var0));
   }

   public static void chB(int var0, int var1) {
      long var2 = erOHr ^ 86285727841292L;
      GL13C.glActiveTexture(ciw<"x">(24188, 6986293068110138144L ^ var2) + var0);
      GL11C.glBindTexture(ciw<"x">(29138, 5420704412674270356L ^ var2), var1);
   }

   public static void cib(int var0, int var1, int var2, boolean var3, int var4, long var5) {
      GL20C.glVertexAttribPointer(var0, var1, var2, var3, var4, var5);
   }

   public static int cie(int var0, String var1) {
      return GL20.glGetUniformLocation(var0, var1);
   }

   public static void cim(int var0) {
      GL20.glDeleteShader(var0);
   }

   public static void cid(int var0, int var1, int var2) {
      GL11C.glDrawArrays(var0, var1, var2);
   }

   public static void cig(int var0, float var1, float var2) {
      GL20C.glUniform2f(var0, var1, var2);
   }

   public static void cil(int var0) {
      GL20.glDeleteProgram(var0);
   }

   public static int cio(int param0, String param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lQ.erOHr J
      // 03: ldc2_w 136961549763975
      // 06: lxor
      // 07: lstore 2
      // 08: iload 0
      // 09: invokestatic com/mojang/blaze3d/opengl/GlStateManager.glCreateShader (I)I
      // 0c: istore 5
      // 0e: iload 5
      // 10: aload 1
      // 11: invokestatic com/mojang/blaze3d/opengl/GlStateManager.glShaderSource (ILjava/lang/String;)V
      // 14: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 17: iload 5
      // 19: invokestatic com/mojang/blaze3d/opengl/GlStateManager.glCompileShader (I)V
      // 1c: astore 4
      // 1e: iload 5
      // 20: sipush 27086
      // 23: ldc2_w 7832689040375055640
      // 26: lload 2
      // 27: lxor
      // 28: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2d: invokestatic com/mojang/blaze3d/opengl/GlStateManager.glGetShaderi (II)I
      // 30: aload 4
      // 32: ifnull 47
      // 35: ifne 45
      // 38: goto 3f
      // 3b: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3e: athrow
      // 3f: bipush -1
      // 40: ireturn
      // 41: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: iload 5
      // 47: ireturn
   }

   public static void cik(int var0) {
      RenderSystem.assertOnRenderThread();
      GL30C.glDeleteVertexArrays(var0);
   }

   public static void cic(int var0) {
      GL20C.glEnableVertexAttribArray(var0);
   }

   public static int cin() {
      return GL20.glCreateProgram();
   }

   public static int chV() {
      return GL15.glGenBuffers();
   }

   public static void cih(int var0) {
      GlStateManager._glDeleteBuffers(var0);
   }

   public static void chY(int var0) {
      GL30C.glBindVertexArray(var0);
   }

   public static void chZ(int var0, int var1) {
      GL15C.glBindBuffer(var0, var1);
   }

   public static void cia(int var0, FloatBuffer var1, int var2) {
      RenderSystem.assertOnRenderThread();
      GL15C.glBufferData(var0, var1, var2);
   }

   public static int chU() {
      return GL30.glGenVertexArrays();
   }

   public static void chA(int var0) {
      long var1 = erOHr ^ 137996104618748L;
      GL11C.glBindTexture(ciw<"x">(29138, 5420651738211568228L ^ var1), var0);
   }

   public static void chE() {
      long var0 = erOHr ^ 91038201999007L;
      chD(ciw<"x">(22187, 1157930049516622171L ^ var0), 0);
   }

   public static void chF(int var0, int var1, int var2, int var3, int var4) {
      GL30C.glFramebufferTexture2D(var0, var1, var2, var3, var4);
   }

   public static void chG(int var0, int var1, int var2, int var3) {
      GL11C.glViewport(var0, var1, var2, var3);
   }

   private static CallSite ciw(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("civ".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/lQ" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public static void chD(int var0, int var1) {
      GL30C.glBindFramebuffer(var0, var1);
   }

   private static MatchException cit(MatchException var0) {
      return var0;
   }

   public static void chH() {
      long var0 = erOHr ^ 71697565317872L;
      GL11C.glDisable(ciw<"x">(23761, 8268205885911748429L ^ var0));
   }

   public static void chI(boolean var0, boolean var1, boolean var2, boolean var3) {
      GL11C.glColorMask(var0, var1, var2, var3);
   }

   static boolean chz(int param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lQ.erOHr J
      // 03: ldc2_w 34884636378137
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: iload 0
      // 0d: invokestatic org/lwjgl/opengl/GL30C.glCheckFramebufferStatus (I)I
      // 10: aload 3
      // 11: ifnull 33
      // 14: sipush 29622
      // 17: ldc2_w 6204550416695860938
      // 1a: lload 1
      // 1b: lxor
      // 1c: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 21: if_icmpne 36
      // 24: goto 2b
      // 27: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: bipush 1
      // 2c: goto 33
      // 2f: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 32: athrow
      // 33: goto 37
      // 36: bipush 0
      // 37: ireturn
   }

   public static void chJ(boolean var0) {
      GL11C.glDepthMask(var0);
   }

   public static void chL() {
      long var0 = erOHr ^ 88956112602878L;
      GL11C.glDisable(ciw<"x">(18535, 7090938177509894136L ^ var0));
   }

   public static void cij(int var0) {
      GlStateManager._deleteTexture(var0);
   }

   private static int ciu(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 20082;
      if (HaCDI[var3] == null) {
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
         long var5 = UOEnR[var3];
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
         Object[] var9 = (Object[])BwWNH.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               BwWNH.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/lQ", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         HaCDI[var3] = var15;
      }

      return HaCDI[var3];
   }

   private static int civ(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = ciu(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public static void chP(int param0, int param1, int param2, int param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lQ.erOHr J
      // 003: ldc2_w 30948263413266
      // 006: lxor
      // 007: lstore 4
      // 009: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 00c: astore 6
      // 00e: getstatic sixtwo/lQ.swnov I
      // 011: bipush -1
      // 012: aload 6
      // 014: ifnull 03e
      // 017: if_icmpne 02e
      // 01a: goto 021
      // 01d: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 020: athrow
      // 021: invokestatic sixtwo/lQ.chW ()I
      // 024: putstatic sixtwo/lQ.swnov I
      // 027: goto 02e
      // 02a: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02d: athrow
      // 02e: getstatic sixtwo/lQ.jYHrQ I
      // 031: aload 6
      // 033: ifnull 05f
      // 036: bipush -1
      // 037: goto 03e
      // 03a: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03d: athrow
      // 03e: if_icmpne 04e
      // 041: invokestatic sixtwo/lQ.chW ()I
      // 044: putstatic sixtwo/lQ.jYHrQ I
      // 047: goto 04e
      // 04a: invokestatic sixtwo/lQ.cit (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 04d: athrow
      // 04e: sipush 1608
      // 051: ldc2_w 3348937025762994444
      // 054: lload 4
      // 056: lxor
      // 057: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 05c: invokestatic org/lwjgl/opengl/GL11C.glGetInteger (I)I
      // 05f: istore 7
      // 061: sipush 8022
      // 064: ldc2_w 8734536415412203520
      // 067: lload 4
      // 069: lxor
      // 06a: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 06f: invokestatic org/lwjgl/opengl/GL11C.glGetInteger (I)I
      // 072: istore 8
      // 074: sipush 12977
      // 077: ldc2_w 1824641233598619079
      // 07a: lload 4
      // 07c: lxor
      // 07d: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 082: getstatic sixtwo/lQ.swnov I
      // 085: invokestatic sixtwo/lQ.chD (II)V
      // 088: sipush 12977
      // 08b: ldc2_w 1824641233598619079
      // 08e: lload 4
      // 090: lxor
      // 091: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 096: sipush 2514
      // 099: ldc2_w 5032127069534267011
      // 09c: lload 4
      // 09e: lxor
      // 09f: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0a4: sipush 29138
      // 0a7: ldc2_w 5420759095156203146
      // 0aa: lload 4
      // 0ac: lxor
      // 0ad: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0b2: iload 0
      // 0b3: bipush 0
      // 0b4: invokestatic sixtwo/lQ.chF (IIIII)V
      // 0b7: sipush 17409
      // 0ba: ldc2_w 7274191734763449181
      // 0bd: lload 4
      // 0bf: lxor
      // 0c0: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0c5: getstatic sixtwo/lQ.jYHrQ I
      // 0c8: invokestatic sixtwo/lQ.chD (II)V
      // 0cb: sipush 17409
      // 0ce: ldc2_w 7274191734763449181
      // 0d1: lload 4
      // 0d3: lxor
      // 0d4: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0d9: sipush 31950
      // 0dc: ldc2_w 3023891162382816128
      // 0df: lload 4
      // 0e1: lxor
      // 0e2: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0e7: sipush 29138
      // 0ea: ldc2_w 5420759095156203146
      // 0ed: lload 4
      // 0ef: lxor
      // 0f0: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0f5: iload 1
      // 0f6: bipush 0
      // 0f7: invokestatic sixtwo/lQ.chF (IIIII)V
      // 0fa: bipush 0
      // 0fb: bipush 0
      // 0fc: iload 2
      // 0fd: iload 3
      // 0fe: bipush 0
      // 0ff: bipush 0
      // 100: iload 2
      // 101: iload 3
      // 102: sipush 10839
      // 105: ldc2_w 45190702685717790
      // 108: lload 4
      // 10a: lxor
      // 10b: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 110: sipush 32241
      // 113: ldc2_w 951137797463528080
      // 116: lload 4
      // 118: lxor
      // 119: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 11e: invokestatic org/lwjgl/opengl/GL30.glBlitFramebuffer (IIIIIIIIII)V
      // 121: sipush 12977
      // 124: ldc2_w 1824641233598619079
      // 127: lload 4
      // 129: lxor
      // 12a: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 12f: iload 7
      // 131: invokestatic sixtwo/lQ.chD (II)V
      // 134: sipush 17409
      // 137: ldc2_w 7274191734763449181
      // 13a: lload 4
      // 13c: lxor
      // 13d: invokedynamic x (IJ)I bsm=sixtwo/lQ.ciw (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 142: iload 8
      // 144: invokestatic sixtwo/lQ.chD (II)V
      // 147: return
   }

   public static int chX() {
      long var0 = erOHr ^ 33558969232826L;
      return GL11C.glGetInteger(ciw<"x">(9506, 5791369479448453579L ^ var0));
   }

   public static int chW() {
      return GL30.glGenFramebuffers();
   }

   public static void chM() {
      long var0 = erOHr ^ 88843960303655L;
      GL11C.glEnable(ciw<"x">(12554, 2579676235503966278L ^ var0));
   }

   public static void cii(int var0) {
      GlStateManager._glDeleteFramebuffers(var0);
   }

   public static void cif(int var0, int var1) {
      GL20C.glUniform1i(var0, var1);
   }
}
