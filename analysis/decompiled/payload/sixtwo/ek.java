package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class ek extends gg {
   private final cJ FjUNy;
   private static long LqclE;
   private static long[] BJUBR;
   private static Integer[] Drksd;
   private static Map DaQXB;

   private static native void _9c9b6f0fd399ea825680701554b84b00();

   public ek() {
      long var1 = LqclE ^ 82902571671683L;
      super(gf.aZL(ata<"e">(9512, 2555034054177279046L ^ var1), false, gh.xgeEn));
      int[] var10004 = new int[ata<"e">(11408, 8448166170172671477L ^ var1)];
      var10004[0] = ata<"e">(7212, 7275334424744457536L ^ var1);
      var10004[1] = ata<"e">(24846, 2146203830165440618L ^ var1);
      var10004[2] = ata<"e">(10895, 2844319709865559023L ^ var1);
      var10004[3] = ata<"e">(26064, 5565667492708224183L ^ var1);
      var10004[4] = ata<"e">(25756, 4525358273606258166L ^ var1);
      var10004[5] = ata<"e">(17087, 3681542533358365657L ^ var1);
      var10004[ata<"e">(11997, 7634952395972691903L ^ var1)] = ata<"e">(13697, 2249545829117877472L ^ var1);
      var10004[ata<"e">(23483, 9191237433915060944L ^ var1)] = ata<"e">(20276, 7978954562332239434L ^ var1);
      var10004[ata<"e">(26596, 7735679201803013773L ^ var1)] = ata<"e">(18181, 3480733435658088063L ^ var1);
      var10004[ata<"e">(7653, 8288095925992617094L ^ var1)] = ata<"e">(2580, 3131156151636714345L ^ var1);
      var10004[ata<"e">(3527, 4656641627021763752L ^ var1)] = ata<"e">(12409, 6537066626533349652L ^ var1);
      var10004[ata<"e">(32336, 1382377276088882988L ^ var1)] = ata<"e">(4385, 3109563770399684702L ^ var1);
      this.FjUNy = new cJ(this, mr.clS(var10004)).WE(false);
   }

   static {
      Loader.doInit(ek.class);
      _9c9b6f0fd399ea825680701554b84b00();
   }

   @hG
   public native void asT(gH$th var1);

   @hG
   public native void asU(gB var1);

   private static native int asZ(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int asY(int var0, long var1);

   private static native MatchException asX(MatchException var0);

   private static native CallSite ata(Lookup var0, String var1, MethodType var2);

   public native boolean asV();
}
