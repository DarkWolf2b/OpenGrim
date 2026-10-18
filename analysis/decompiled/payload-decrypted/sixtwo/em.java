package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.block.entity.ShulkerBoxBlockEntity;

public class em extends gg {
   private final ct hyrdo;
   private final cu Mbkzf;
   private final cu nszob;
   private final cC qbgVw;
   private final cC eXBkK;
   private static long IAnJC;
   private static long[] rXots;
   private static Integer[] cSAnF;
   private static Map rnwKn;

   public em() {
      long var1 = IAnJC ^ 27833373165954L;
      super(gf.aZL(167, false, gh.xgeEn).aZS(false));
      this.hyrdo = new ct(
         this,
         mr.clS(
            new int[]{
               77,
               111,
               100,
               101
            }
         )
      );
      ct var10003 = this.hyrdo;
      int[] var10004 = new int[7];
      var10004[0] = 86;
      var10004[1] = 97;
      var10004[2] = 110;
      var10004[3] = 105;
      var10004[4] = 108;
      var10004[5] = 108;
      var10004[6] = 97;
      this.Mbkzf = new cu(var10003, mr.clS(var10004));
      var10003 = this.hyrdo;
      var10004 = new int[12];
      var10004[0] = 71;
      var10004[1] = 114;
      var10004[2] = 105;
      var10004[3] = 109;
      var10004[4] = 32;
      var10004[5] = 83;
      var10004[6] = 104;
      var10004[7] = 117;
      var10004[8] = 108;
      var10004[9] = 107;
      var10004[10] = 101;
      var10004[11] = 114;
      this.nszob = new cu(var10003, mr.clS(var10004)).SY();
      var10004 = new int[11];
      var10004[0] = 74;
      var10004[1] = 117;
      var10004[2] = 109;
      var10004[3] = 112;
      var10004[4] = 32;
      var10004[5] = 72;
      var10004[6] = 101;
      var10004[7] = 105;
      var10004[8] = 103;
      var10004[9] = 104;
      var10004[10] = 116;
      this.qbgVw = new cC(this, mr.clS(var10004)).Vy(0.01).Vw(1.0).Vx(3.0).VA(1.6).Vf(this.Mbkzf::SZ);
      var10004 = new int[14];
      var10004[0] = 86;
      var10004[1] = 101;
      var10004[2] = 114;
      var10004[3] = 116;
      var10004[4] = 105;
      var10004[5] = 99;
      var10004[6] = 97;
      var10004[7] = 108;
      var10004[8] = 32;
      var10004[9] = 66;
      var10004[10] = 111;
      var10004[11] = 111;
      var10004[12] = 115;
      var10004[13] = 116;
      this.eXBkK = new cC(this, mr.clS(var10004)).Vy(0.01).Vw(0.1).Vx(3.0).VA(1.91).Vf(this.nszob::SZ);
   }

   static {
      Loader.doInit(em.class);
      _8b967bade6a5815b769653759123e3a3();
   }

   private static native int atn(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite ato(Lookup var0, String var1, MethodType var2);

   @hG
   public native void atj(gH$th var1);

   private native boolean atk(ShulkerBoxBlockEntity var1);

   @hG
   public native void ati(hs var1);

   private static native MatchException atl(MatchException var0);

   private static native int atm(int var0, long var1);

   private static native void _8b967bade6a5815b769653759123e3a3();
}
