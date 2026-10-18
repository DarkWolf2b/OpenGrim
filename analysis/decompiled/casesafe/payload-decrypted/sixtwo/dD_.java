package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class dD extends gg {
   private final ct ZKjem;
   private final cu Qtxqy;
   private final cu VCHhf;
   private final cu ABbIM;
   private final cz mJHrk;
   private static long bapnK;
   private static long[] dxsTa;
   private static Integer[] htjaR;
   private static Map APUxf;

   private static native void _07021457c400d30aa53725408e6f5e94();

   public dD() {
      long var1 = bapnK ^ 84347128949063L;
      super(gf.aZL(70, false, gh.qBzlZ));
      this.ZKjem = new ct(
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
      ct var10003 = this.ZKjem;
      int[] var10004 = new int[9];
      var10004[0] = 65;
      var10004[1] = 108;
      var10004[2] = 108;
      var10004[3] = 32;
      var10004[4] = 73;
      var10004[5] = 116;
      var10004[6] = 101;
      var10004[7] = 109;
      var10004[8] = 115;
      this.Qtxqy = new cu(var10003, mr.clS(var10004));
      var10003 = this.ZKjem;
      var10004 = new int[12];
      var10004[0] = 79;
      var10004[1] = 110;
      var10004[2] = 108;
      var10004[3] = 121;
      var10004[4] = 32;
      var10004[5] = 87;
      var10004[6] = 101;
      var10004[7] = 97;
      var10004[8] = 112;
      var10004[9] = 111;
      var10004[10] = 110;
      var10004[11] = 115;
      this.VCHhf = new cu(var10003, mr.clS(var10004));
      var10003 = this.ZKjem;
      var10004 = new int[15];
      var10004[0] = 83;
      var10004[1] = 112;
      var10004[2] = 101;
      var10004[3] = 99;
      var10004[4] = 105;
      var10004[5] = 102;
      var10004[6] = 105;
      var10004[7] = 101;
      var10004[8] = 100;
      var10004[9] = 32;
      var10004[10] = 83;
      var10004[11] = 108;
      var10004[12] = 111;
      var10004[13] = 116;
      var10004[14] = 115;
      this.ABbIM = new cu(var10003, mr.clS(var10004));
      this.mJHrk = new cz(
         this,
         mr.clS(
            new int[]{
               83,
               108,
               111,
               116,
               115
            }
         )
      );
   }

   static {
      Loader.doInit(dD.class);
      _07021457c400d30aa53725408e6f5e94();
   }

   private static native MatchException akC(MatchException var0);

   private static native int akD(int var0, long var1);

   private static native CallSite akF(Lookup var0, String var1, MethodType var2);

   @hG
   public native void akB(gO$tm var1);

   private static native int akE(Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}
