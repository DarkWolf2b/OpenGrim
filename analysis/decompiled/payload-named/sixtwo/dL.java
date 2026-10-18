package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class dL extends gg {
   private final cJ lXvtl;
   private static long MvRUw;
   private static long[] xmVgM;
   private static Integer[] OKemK;
   private static Map VTfqp;

   private static native void _05bd19a8cf8c644a334ebd019e2b6fa0();

   public dL() {
      long var1 = MvRUw ^ 7302236552225L;
      super(gf.aZL(anu<"x">(28507, 8049146611693535164L ^ var1), false, gh.qBzlZ));
      int[] var10004 = new int[anu<"x">(20466, 5452733350803545885L ^ var1)];
      var10004[0] = anu<"x">(20184, 1534063358083997236L ^ var1);
      var10004[1] = anu<"x">(13794, 4352814409035506968L ^ var1);
      var10004[2] = anu<"x">(3555, 2764545197223664907L ^ var1);
      var10004[3] = anu<"x">(14813, 1457425417827084582L ^ var1);
      var10004[4] = anu<"x">(15435, 2860786115158535342L ^ var1);
      var10004[5] = anu<"x">(10514, 9128849069644642789L ^ var1);
      var10004[anu<"x">(16117, 4153626502074494485L ^ var1)] = anu<"x">(5072, 3971276420381393696L ^ var1);
      var10004[anu<"x">(28536, 3150148105607692181L ^ var1)] = anu<"x">(12662, 2402222353635139984L ^ var1);
      var10004[anu<"x">(11547, 5711481151320686061L ^ var1)] = anu<"x">(21783, 6396744105346532835L ^ var1);
      var10004[anu<"x">(10867, 7114358316209240715L ^ var1)] = anu<"x">(9703, 3651825527511545113L ^ var1);
      var10004[anu<"x">(20304, 8996265444755152830L ^ var1)] = anu<"x">(12743, 1124029004504785188L ^ var1);
      var10004[anu<"x">(9432, 104460843697075258L ^ var1)] = anu<"x">(29313, 4063870377433506430L ^ var1);
      var10004[anu<"x">(17543, 54970623068640365L ^ var1)] = anu<"x">(258, 6653151613233287659L ^ var1);
      var10004[anu<"x">(18225, 2656550531395622856L ^ var1)] = anu<"x">(17213, 7447068290531398620L ^ var1);
      var10004[anu<"x">(25412, 1079794323284505504L ^ var1)] = anu<"x">(9081, 4214014330940421010L ^ var1);
      var10004[anu<"x">(28410, 1462431251591839243L ^ var1)] = anu<"x">(21138, 1825155845688066670L ^ var1);
      var10004[anu<"x">(4015, 4150017351980834642L ^ var1)] = anu<"x">(10449, 7441822931543685156L ^ var1);
      this.lXvtl = new cJ(this, mr.clS(var10004)).WE(true);
   }

   static {
      Loader.doInit(dL.class);
      _05bd19a8cf8c644a334ebd019e2b6fa0();
   }

   private static native CallSite anu(Lookup var0, String var1, MethodType var2);

   @hG
   public native void anq(hh var1);

   private static native int ant(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int ans(int var0, long var1);

   private static native MatchException anr(MatchException var0);
}
