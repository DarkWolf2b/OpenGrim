package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class eA extends gg {
   private final cC uYjwj;
   private static long lClZL;
   private static long[] GMvGu;
   private static Integer[] oOQKe;
   private static Map ldHfb;

   public eA() {
      long var1 = lClZL ^ 78748095781882L;
      super(gf.aZL(avq<"b">(1330, 1702182247099329984L ^ var1), false, gh.xgeEn));
      this.uYjwj = new cC(
            this,
            mr.clS(
               new int[]{
                  avq<"b">(11690, 4250961350709855580L ^ var1),
                  avq<"b">(1763, 6721324650553896468L ^ var1),
                  avq<"b">(21921, 4259739730081299796L ^ var1),
                  avq<"b">(24792, 9003523570482448427L ^ var1),
                  avq<"b">(5475, 3188461343027166615L ^ var1)
               }
            )
         )
         .Vy(0.05)
         .Vw(0.25)
         .Vx(2.0)
         .VA(0.25);
   }

   static {
      Loader.doInit(eA.class);
      _5e7cb2aeed2a4e96452d61e493ee8585();
   }

   private static native void _5e7cb2aeed2a4e96452d61e493ee8585();

   @hG
   public native void avm(gH$th var1);

   private static native int avo(int var0, long var1);

   private static native MatchException avn(MatchException var0);

   private static native int avp(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite avq(Lookup var0, String var1, MethodType var2);
}
