package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class ed extends gg {
   private final cC BpiUS;
   private final cJ HfVsU;
   private static long PQbtp;
   private static String XgLBB;
   private static long[] fokqH;
   private static Integer[] RqWGM;
   private static Map TVqrW;

   public ed() {
      long var1 = PQbtp ^ 24714996094914L;
      super(gf.aZL(arH<"o">(4470, 7714020927095694383L ^ var1), false, gh.qBzlZ));
      int[] var10004 = new int[arH<"o">(3315, 3536728936762735103L ^ var1)];
      var10004[0] = arH<"o">(19133, 3301311360212320241L ^ var1);
      var10004[1] = arH<"o">(25337, 7780182194668902273L ^ var1);
      var10004[2] = arH<"o">(20366, 4773893360844716724L ^ var1);
      var10004[3] = arH<"o">(30813, 1275559677655584064L ^ var1);
      var10004[4] = arH<"o">(7567, 5448605295380556024L ^ var1);
      var10004[5] = arH<"o">(20015, 145726299283536724L ^ var1);
      var10004[arH<"o">(11227, 3625965602435522238L ^ var1)] = arH<"o">(27922, 597014003726227484L ^ var1);
      var10004[arH<"o">(4279, 6037373608562025931L ^ var1)] = arH<"o">(17326, 6808383623017871100L ^ var1);
      this.BpiUS = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(4.0).Vx(100.0).VA(4.0).Vz(XgLBB);
      var10004 = new int[arH<"o">(4279, 6037373608562025931L ^ var1)];
      var10004[0] = arH<"o">(16812, 7233313355019433113L ^ var1);
      var10004[1] = arH<"o">(20874, 274622242696471799L ^ var1);
      var10004[2] = arH<"o">(16459, 9117407685512344859L ^ var1);
      var10004[3] = arH<"o">(17837, 482711969005875419L ^ var1);
      var10004[4] = arH<"o">(301, 6758384271189800048L ^ var1);
      var10004[5] = arH<"o">(25337, 7780182194668902273L ^ var1);
      var10004[arH<"o">(11227, 3625965602435522238L ^ var1)] = arH<"o">(32135, 9013538181128915104L ^ var1);
      this.HfVsU = new cJ(this, mr.clS(var10004)).WE(false);
   }

   static {
      Loader.doInit(ed.class);
      _a79940e05944d2ef07f1382edf83c8fc();
   }

   @Override
   public native void aaj();

   public native cJ arC();

   public native cC arB();

   private static native void _a79940e05944d2ef07f1382edf83c8fc();

   private static native CallSite arH(Lookup var0, String var1, MethodType var2);

   private static native MatchException arD(MatchException var0);

   private static native int arF(int var0, long var1);

   private static native int arG(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String arE(byte[] var0);
}
