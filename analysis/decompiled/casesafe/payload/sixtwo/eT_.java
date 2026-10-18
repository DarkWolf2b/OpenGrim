package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.class_1657;

public class eT extends gg {
   private final cC JIjdU;
   private final ct wSXQh;
   private final cu uAaOS;
   private final cu mRyFn;
   private final cC YtRvz;
   private static long cHXms;
   private static String QSxPs;
   private static long[] nzopz;
   private static Integer[] NCEJm;
   private static Map AISwg;

   public eT() {
      long var1 = cHXms ^ 1157860442311L;
      super(gf.aZL(aDB<"k">(7370, 7025631901632982764L ^ var1), false, gh.xwjCw));
      int[] var10004 = new int[aDB<"k">(472, 2058321364874720208L ^ var1)];
      var10004[0] = aDB<"k">(14929, 8511824717575407695L ^ var1);
      var10004[1] = aDB<"k">(9181, 1014561519294632441L ^ var1);
      var10004[2] = aDB<"k">(12479, 6651080661165458098L ^ var1);
      var10004[3] = aDB<"k">(30531, 5377669805478413662L ^ var1);
      var10004[4] = aDB<"k">(9166, 3533125933034361285L ^ var1);
      var10004[5] = aDB<"k">(7199, 3401950062398205455L ^ var1);
      var10004[aDB<"k">(21154, 1507147962431873152L ^ var1)] = aDB<"k">(19567, 2993124162937470565L ^ var1);
      var10004[aDB<"k">(30159, 8214445266360207329L ^ var1)] = aDB<"k">(20848, 6571321507211944796L ^ var1);
      var10004[aDB<"k">(4671, 7447107346900836378L ^ var1)] = aDB<"k">(17610, 3120329813450766028L ^ var1);
      var10004[aDB<"k">(21494, 7563635858958066125L ^ var1)] = aDB<"k">(19232, 6716928098182347008L ^ var1);
      var10004[aDB<"k">(9162, 4247039379978605037L ^ var1)] = aDB<"k">(24303, 2454240488464657600L ^ var1);
      var10004[aDB<"k">(27846, 3098029747959307983L ^ var1)] = aDB<"k">(14637, 1170626407962168127L ^ var1);
      var10004[aDB<"k">(3622, 242363508880473143L ^ var1)] = aDB<"k">(12307, 7386880441952780831L ^ var1);
      var10004[aDB<"k">(21470, 7377413047956251083L ^ var1)] = aDB<"k">(18559, 7836614816849902180L ^ var1);
      var10004[aDB<"k">(7046, 1877993968674990485L ^ var1)] = aDB<"k">(29857, 3502394291441632908L ^ var1);
      var10004[aDB<"k">(3114, 7141798406679985724L ^ var1)] = aDB<"k">(3575, 8462180035773267960L ^ var1);
      var10004[aDB<"k">(8346, 9109822079000924820L ^ var1)] = aDB<"k">(8103, 3426264104161275296L ^ var1);
      this.JIjdU = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(0.0).Vx(12.0).VA(1.5).Vz(QSxPs);
      var10004 = new int[aDB<"k">(21791, 3398617010705508096L ^ var1)];
      var10004[0] = aDB<"k">(17232, 6381854236076716411L ^ var1);
      var10004[1] = aDB<"k">(20848, 6571321507211944796L ^ var1);
      var10004[2] = aDB<"k">(24303, 2454240488464657600L ^ var1);
      var10004[3] = aDB<"k">(12058, 5635252313637018886L ^ var1);
      var10004[4] = aDB<"k">(31541, 379860581078436130L ^ var1);
      var10004[5] = aDB<"k">(17610, 3120329813450766028L ^ var1);
      var10004[aDB<"k">(5989, 4568973287512302943L ^ var1)] = aDB<"k">(8635, 8359888365914477459L ^ var1);
      var10004[aDB<"k">(4115, 7498543921661796906L ^ var1)] = aDB<"k">(9125, 5116150336360042912L ^ var1);
      var10004[aDB<"k">(10300, 3717424636052101694L ^ var1)] = aDB<"k">(20052, 6868895488745913424L ^ var1);
      var10004[aDB<"k">(15533, 3026628349541043895L ^ var1)] = aDB<"k">(32303, 8833715982148406284L ^ var1);
      this.wSXQh = new ct(this, mr.clS(var10004));
      ct var10003 = this.wSXQh;
      var10004 = new int[aDB<"k">(4115, 7498543921661796906L ^ var1)];
      var10004[0] = aDB<"k">(23224, 9060630094610737324L ^ var1);
      var10004[1] = aDB<"k">(18559, 7836614816849902180L ^ var1);
      var10004[2] = aDB<"k">(29857, 3502394291441632908L ^ var1);
      var10004[3] = aDB<"k">(24303, 2454240488464657600L ^ var1);
      var10004[4] = aDB<"k">(20848, 6571321507211944796L ^ var1);
      var10004[5] = aDB<"k">(20848, 6571321507211944796L ^ var1);
      var10004[aDB<"k">(5989, 4568973287512302943L ^ var1)] = aDB<"k">(18559, 7836614816849902180L ^ var1);
      this.uAaOS = new cu(var10003, mr.clS(var10004));
      var10003 = this.wSXQh;
      var10004 = new int[aDB<"k">(4115, 7498543921661796906L ^ var1)];
      var10004[0] = aDB<"k">(13227, 2373435171772416426L ^ var1);
      var10004[1] = aDB<"k">(20848, 6571321507211944796L ^ var1);
      var10004[2] = aDB<"k">(18559, 7836614816849902180L ^ var1);
      var10004[3] = aDB<"k">(25198, 3372483547860308086L ^ var1);
      var10004[4] = aDB<"k">(18559, 7836614816849902180L ^ var1);
      var10004[5] = aDB<"k">(29857, 3502394291441632908L ^ var1);
      var10004[aDB<"k">(5989, 4568973287512302943L ^ var1)] = aDB<"k">(25198, 3372483547860308086L ^ var1);
      this.mRyFn = new cu(var10003, mr.clS(var10004));
      var10004 = new int[aDB<"k">(13724, 4889719757761038244L ^ var1)];
      var10004[0] = aDB<"k">(8039, 6071912406467898694L ^ var1);
      var10004[1] = aDB<"k">(24303, 2454240488464657600L ^ var1);
      var10004[2] = aDB<"k">(25198, 3372483547860308086L ^ var1);
      var10004[3] = aDB<"k">(17610, 3120329813450766028L ^ var1);
      var10004[4] = aDB<"k">(12922, 1201732983420862547L ^ var1);
      var10004[5] = aDB<"k">(32303, 8833715982148406284L ^ var1);
      var10004[aDB<"k">(5989, 4568973287512302943L ^ var1)] = aDB<"k">(11286, 1609735437352033814L ^ var1);
      var10004[aDB<"k">(4115, 7498543921661796906L ^ var1)] = aDB<"k">(17610, 3120329813450766028L ^ var1);
      var10004[aDB<"k">(10300, 3717424636052101694L ^ var1)] = aDB<"k">(2042, 6865062137835943395L ^ var1);
      var10004[aDB<"k">(15533, 3026628349541043895L ^ var1)] = aDB<"k">(24303, 2454240488464657600L ^ var1);
      var10004[aDB<"k">(21791, 3398617010705508096L ^ var1)] = aDB<"k">(12058, 5635252313637018886L ^ var1);
      var10004[aDB<"k">(15402, 1411174237400288809L ^ var1)] = aDB<"k">(18286, 4740605071785211204L ^ var1);
      this.YtRvz = new cC(this, mr.clS(var10004)).VA(10.0).Vw(1.0).Vx(50.0).Vy(1.0);
      this.YtRvz.Vf(this.mRyFn::SZ);
   }

   static {
      Loader.doInit(eT.class);
      _250bbcb8ea6c376711219c4c5a94a71d();
   }

   private static native void _250bbcb8ea6c376711219c4c5a94a71d();

   private static native CallSite aDB(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aDu(gH$th var1);

   private native boolean aDv(class_1657 var1);

   private static native int aDz(int var0, long var1);

   private static native String aDy(byte[] var0);

   private static native MatchException aDx(MatchException var0);

   private static native int aDA(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native boolean aDw(class_1657 var1);
}
