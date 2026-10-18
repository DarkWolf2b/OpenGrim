package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class es extends gg {
   private final cv nPcnW;
   private final cw lfLfR;
   private final cw uaNzy;
   private static long oDHva;
   private static long[] EQALu;
   private static Integer[] hTUdB;
   private static Map watFw;

   public es() {
      long var1 = oDHva ^ 46708857925585L;
      super(gf.aZL(37, false, gh.xgeEn));
      int[] var10004 = new int[11];
      var10004[0] = 67;
      var10004[1] = 97;
      var10004[2] = 110;
      var10004[3] = 99;
      var10004[4] = 101;
      var10004[5] = 108;
      var10004[6] = 32;
      var10004[7] = 80;
      var10004[8] = 117;
      var10004[9] = 115;
      var10004[10] = 104;
      this.nPcnW = new cv(this, mr.clS(var10004));
      cv var10003 = this.nPcnW;
      var10004 = new int[10];
      var10004[0] = 66;
      var10004[1] = 108;
      var10004[2] = 111;
      var10004[3] = 99;
      var10004[4] = 107;
      var10004[5] = 32;
      var10004[6] = 80;
      var10004[7] = 117;
      var10004[8] = 115;
      var10004[9] = 104;
      this.lfLfR = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.nPcnW;
      var10004 = new int[11];
      var10004[0] = 69;
      var10004[1] = 110;
      var10004[2] = 116;
      var10004[3] = 105;
      var10004[4] = 116;
      var10004[5] = 121;
      var10004[6] = 32;
      var10004[7] = 80;
      var10004[8] = 117;
      var10004[9] = 115;
      var10004[10] = 104;
      this.uaNzy = new cw(var10003, mr.clS(var10004));
   }

   static {
      Loader.doInit(es.class);
      _e247605082268ca529ec3d4615a01be3();
   }

   private static native void _e247605082268ca529ec3d4615a01be3();

   @hG
   public native void aup(hd var1);

   private static native MatchException aur(MatchException var0);

   private static native int aus(int var0, long var1);

   private static native CallSite auu(Lookup var0, String var1, MethodType var2);

   private static native int aut(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @hG
   public native void auq(hq var1);
}
