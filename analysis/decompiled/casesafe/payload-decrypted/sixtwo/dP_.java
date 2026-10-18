package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.item.Items;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.HitResult;

public class dP extends gg {
   private final cF jOKrR;
   private final cK bMPfs;
   private HitResult KhkCT;
   private static long xCesR;
   private static long[] kOBSI;
   private static Integer[] pSJuP;
   private static Map RwFEW;

   private static native void _dbdd37ae9e60b3e40dfe5790eb5fd042();

   public dP() {
      long var1 = xCesR ^ 88227395256061L;
      super(gf.aZL(143, false, gh.qBzlZ));
      int[] var10004 = new int[8];
      var10004[0] = 69;
      var10004[1] = 110;
      var10004[2] = 116;
      var10004[3] = 105;
      var10004[4] = 116;
      var10004[5] = 105;
      var10004[6] = 101;
      var10004[7] = 115;
      this.jOKrR = new cF(this, mr.clS(var10004)).VS(jg$tJ.OCdZM);
      var10004 = new int[14];
      var10004[0] = 65;
      var10004[1] = 108;
      var10004[2] = 108;
      var10004[3] = 111;
      var10004[4] = 119;
      var10004[5] = 101;
      var10004[6] = 100;
      var10004[7] = 32;
      var10004[8] = 66;
      var10004[9] = 108;
      var10004[10] = 111;
      var10004[11] = 99;
      var10004[12] = 107;
      var10004[13] = 115;
      this.bMPfs = new cK(this, mr.clS(var10004)).WM(jc.GjreY).WN(Items.COBWEB);
   }

   static {
      Loader.doInit(dP.class);
      _dbdd37ae9e60b3e40dfe5790eb5fd042();
   }

   @hG
   public native void aoR(gO$tm var1);

   @hG
   public native void aoS(gO$tn var1);

   private static native MatchException aoU(MatchException var0);

   private native Hand aoT();

   private static native CallSite aoX(Lookup var0, String var1, MethodType var2);

   private static native int aoV(int var0, long var1);

   private static native int aoW(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @Override
   public native void YO();
}
