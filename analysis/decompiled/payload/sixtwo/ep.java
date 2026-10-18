package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class ep extends gg {
   private final cC QHFqR;
   private static long SdMAu;
   private static long[] uwsLE;
   private static Integer[] JzJxD;
   private static Map IUUCe;

   public ep() {
      long var1 = SdMAu ^ 102420000849384L;
      super(gf.aZL(aua<"l">(6861, 2378227852126877481L ^ var1), false, gh.xgeEn));
      int[] var10004 = new int[aua<"l">(19100, 6827023518469564282L ^ var1)];
      var10004[0] = aua<"l">(15527, 7040309900987781447L ^ var1);
      var10004[1] = aua<"l">(13817, 8836152091523242000L ^ var1);
      var10004[2] = aua<"l">(6421, 6379057446342882557L ^ var1);
      var10004[3] = aua<"l">(26330, 3061638513913957181L ^ var1);
      var10004[4] = aua<"l">(22868, 4867233072795727034L ^ var1);
      var10004[5] = aua<"l">(1084, 2351674839305316801L ^ var1);
      var10004[aua<"l">(7221, 5519978449195889118L ^ var1)] = aua<"l">(4879, 3794658192774004450L ^ var1);
      var10004[aua<"l">(24992, 5869598674353261637L ^ var1)] = aua<"l">(17364, 5925044261779418678L ^ var1);
      var10004[aua<"l">(19028, 5791340828945524664L ^ var1)] = aua<"l">(24774, 4907453801942125868L ^ var1);
      var10004[aua<"l">(15300, 3934973174018954791L ^ var1)] = aua<"l">(7499, 1007987707848421559L ^ var1);
      var10004[aua<"l">(29598, 6425776304558972543L ^ var1)] = aua<"l">(13251, 2114787091346775596L ^ var1);
      this.QHFqR = new cC(this, mr.clS(var10004)).Vy(0.01).Vw(1.5).Vx(3.0).VA(1.5);
   }

   static {
      Loader.doInit(ep.class);
      _a30b6b505e7cd15c6b5a9e05f022e45f();
   }

   public native cC atX();

   private static native CallSite aua(Lookup var0, String var1, MethodType var2);

   private static native int atY(int var0, long var1);

   private static native int atZ(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native void _a30b6b505e7cd15c6b5a9e05f022e45f();
}
