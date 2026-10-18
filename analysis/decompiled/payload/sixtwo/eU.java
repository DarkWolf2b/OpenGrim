package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.class_2338;

public class eU extends gg {
   private final cJ uOhjt;
   private final cC CrAYX;
   private class_2338 cEkBs;
   private boolean KALVf;
   private final mW HyfoP;
   private static long QgLWU;
   private static String pyZOh;
   private static long[] oZHIK;
   private static Integer[] rKPMZ;
   private static Map ISkoE;

   public eU() {
      long var1 = QgLWU ^ 93483057880636L;
      super(gf.aZL(aDN<"o">(18961, 2056269750712149374L ^ var1), false, gh.xwjCw));
      int[] var10004 = new int[aDN<"o">(27720, 840150064540025651L ^ var1)];
      var10004[0] = aDN<"o">(389, 1035929441973694200L ^ var1);
      var10004[1] = aDN<"o">(29699, 853561564711492477L ^ var1);
      var10004[2] = aDN<"o">(16625, 6378110633795006347L ^ var1);
      var10004[3] = aDN<"o">(6587, 7153743784341370569L ^ var1);
      var10004[4] = aDN<"o">(6857, 7348082407934653882L ^ var1);
      var10004[5] = aDN<"o">(4658, 7885419555239624004L ^ var1);
      var10004[aDN<"o">(32702, 8816554052951609556L ^ var1)] = aDN<"o">(16626, 1521707713299525511L ^ var1);
      var10004[aDN<"o">(18343, 6728859719313139905L ^ var1)] = aDN<"o">(6242, 8492384732578051854L ^ var1);
      var10004[aDN<"o">(27113, 470004065028179614L ^ var1)] = aDN<"o">(31938, 7582520030960227250L ^ var1);
      var10004[aDN<"o">(22291, 6769118505292019810L ^ var1)] = aDN<"o">(17876, 5947358877283887798L ^ var1);
      var10004[aDN<"o">(9024, 2622428576745376825L ^ var1)] = aDN<"o">(21882, 7419812568739527174L ^ var1);
      var10004[aDN<"o">(1951, 4213100672495020256L ^ var1)] = aDN<"o">(26532, 3401681345660979395L ^ var1);
      var10004[aDN<"o">(10357, 4396685370693601052L ^ var1)] = aDN<"o">(22539, 5613058830309767011L ^ var1);
      this.uOhjt = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aDN<"o">(22747, 1200986293163538366L ^ var1)];
      var10004[0] = aDN<"o">(9050, 8500594296652778558L ^ var1);
      var10004[1] = aDN<"o">(4197, 6671402160251469576L ^ var1);
      var10004[2] = aDN<"o">(1928, 6495697668133185788L ^ var1);
      var10004[3] = aDN<"o">(23057, 656302078722684282L ^ var1);
      var10004[4] = aDN<"o">(25073, 3368708636070841993L ^ var1);
      var10004[5] = aDN<"o">(32278, 1369685905892544888L ^ var1);
      this.CrAYX = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0).Vz(pyZOh);
      this.HyfoP = new mW();
   }

   static {
      Loader.doInit(eU.class);
      _52fd631e8564c1ac6eff89a1e8b2d5a7();
   }

   private static native void _52fd631e8564c1ac6eff89a1e8b2d5a7();

   public native mW aDH();

   public native class_2338 aDF();

   private static native int aDM(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite aDN(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aDC(gH$th var1);

   public native cJ aDD();

   private static native MatchException aDJ(MatchException var0);

   private static native int aDL(int var0, long var1);

   private static native String aDK(byte[] var0);

   public native cC aDE();

   public native boolean aDG();

   @Override
   public native void YO();
}
