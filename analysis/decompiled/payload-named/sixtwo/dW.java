package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.client.option.Perspective;
import net.minecraft.util.math.Vec3d;

public class dW extends gg {
   private cC tBVoR;
   private cJ joJfw;
   private cJ xkmCl;
   private cJ KEfhe;
   private kr VqYYp;
   private Perspective vWhWE;
   private Vec3d FtQTF;
   private Vec3d cSmNg;
   private boolean QcpdD;
   private boolean XMIhN;
   private boolean uTfhD;
   private boolean hxajS;
   private boolean aDkxT;
   private boolean tTIWo;
   private boolean NLUKs;
   private ov pVZhY;
   private ov eWyed;
   private static long XbNnT;
   private static long[] ZRHhR;
   private static Integer[] lrbSD;
   private static Map fkNRQ;

   public dW() {
      long var1 = XbNnT ^ 70897005787773L;
      super(gf.aZL(aqS<"h">(28081, 461547230837157908L ^ var1), false, gh.qBzlZ).aZS(false));
      this.tBVoR = new cC(
            this,
            mr.clS(
               new int[]{
                  aqS<"h">(9403, 797289500331243793L ^ var1),
                  aqS<"h">(3593, 7478870035569988492L ^ var1),
                  aqS<"h">(14220, 5163980451150948917L ^ var1),
                  aqS<"h">(29333, 1099681124629589790L ^ var1),
                  aqS<"h">(23354, 6484343835585119895L ^ var1)
               }
            )
         )
         .Vy(0.1)
         .Vw(1.0)
         .Vx(10.0)
         .VA(3.0);
      int[] var10004 = new int[aqS<"h">(59, 7457656257576656300L ^ var1)];
      var10004[0] = aqS<"h">(20171, 7793792936462324574L ^ var1);
      var10004[1] = aqS<"h">(16422, 7416219268282719666L ^ var1);
      var10004[2] = aqS<"h">(23829, 530444994083848353L ^ var1);
      var10004[3] = aqS<"h">(1435, 8674018407525046325L ^ var1);
      var10004[4] = aqS<"h">(15235, 4663677551006934544L ^ var1);
      var10004[5] = aqS<"h">(29333, 1099681124629589790L ^ var1);
      this.joJfw = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aqS<"h">(17006, 2181090021362835433L ^ var1)];
      var10004[0] = aqS<"h">(26807, 9089781786434876691L ^ var1);
      var10004[1] = aqS<"h">(27307, 8207698629199935270L ^ var1);
      var10004[2] = aqS<"h">(22593, 4591372565287175643L ^ var1);
      var10004[3] = aqS<"h">(29583, 780864889517190707L ^ var1);
      var10004[4] = aqS<"h">(19455, 5520998901365675585L ^ var1);
      var10004[5] = aqS<"h">(7942, 5033746579165921979L ^ var1);
      var10004[aqS<"h">(7443, 43035626950869172L ^ var1)] = aqS<"h">(29333, 1099681124629589790L ^ var1);
      var10004[aqS<"h">(13943, 5101422360657357793L ^ var1)] = aqS<"h">(14394, 7812674916111279514L ^ var1);
      var10004[aqS<"h">(2591, 7902613346539067310L ^ var1)] = aqS<"h">(13950, 137658641816087461L ^ var1);
      var10004[aqS<"h">(28981, 6983022280715283644L ^ var1)] = aqS<"h">(22669, 8817044238126941501L ^ var1);
      var10004[aqS<"h">(15858, 6367148986938384490L ^ var1)] = aqS<"h">(17198, 8245892908236840591L ^ var1);
      var10004[aqS<"h">(14932, 6778479767848052726L ^ var1)] = aqS<"h">(20327, 2588114319504741099L ^ var1);
      var10004[aqS<"h">(3394, 1345034125997592781L ^ var1)] = aqS<"h">(29583, 780864889517190707L ^ var1);
      var10004[aqS<"h">(23073, 2138950498106705850L ^ var1)] = aqS<"h">(15171, 4031906740126017245L ^ var1);
      var10004[aqS<"h">(17627, 6088172226860816733L ^ var1)] = aqS<"h">(29583, 780864889517190707L ^ var1);
      var10004[aqS<"h">(883, 5554159951171804914L ^ var1)] = aqS<"h">(32725, 9145255667036463688L ^ var1);
      var10004[aqS<"h">(32562, 6019983226262004398L ^ var1)] = aqS<"h">(29333, 1099681124629589790L ^ var1);
      this.xkmCl = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aqS<"h">(3525, 3386660577765478479L ^ var1)];
      var10004[0] = aqS<"h">(1717, 4355625286711761683L ^ var1);
      var10004[1] = aqS<"h">(29333, 1099681124629589790L ^ var1);
      var10004[2] = aqS<"h">(8478, 5222686083163847862L ^ var1);
      var10004[3] = aqS<"h">(11537, 2984519469545156737L ^ var1);
      var10004[4] = aqS<"h">(29333, 1099681124629589790L ^ var1);
      var10004[5] = aqS<"h">(17487, 7169078545915714022L ^ var1);
      var10004[aqS<"h">(7443, 43035626950869172L ^ var1)] = aqS<"h">(17198, 8245892908236840591L ^ var1);
      var10004[aqS<"h">(14253, 7480730222067214871L ^ var1)] = aqS<"h">(14714, 8453216332523693257L ^ var1);
      var10004[aqS<"h">(6924, 1166929638666487471L ^ var1)] = aqS<"h">(29583, 780864889517190707L ^ var1);
      var10004[aqS<"h">(30524, 6319519107455986323L ^ var1)] = aqS<"h">(8478, 5222686083163847862L ^ var1);
      var10004[aqS<"h">(29681, 3458345664685158003L ^ var1)] = aqS<"h">(11537, 2984519469545156737L ^ var1);
      this.KEfhe = new cJ(this, mr.clS(var10004)).WE(false);
      this.VqYYp = new kr(this, ku.qnXgu);
      this.VqYYp.bQV(kw.bRK().bRN(true));
   }

   static {
      Loader.doInit(dW.class);
      _91acb54da99050939360519fe74acf78();
   }

   @hG
   public native void aqt(gv var1);

   @Override
   public native void aaj();

   public native ov aqx(float var1);

   public native Vec3d aqw(float var1);

   private static native void _91acb54da99050939360519fe74acf78();

   public native void aqv(double var1, double var3);

   @hG(
      priority = mw.LOWEST
   )
   public native void aqu(hh var1);

   public native cJ aqz();

   @hG
   public native void aqr(hn var1);

   public native boolean aqG();

   @hG
   public native void aqm(gJ var1);

   public native cC aqy();

   @hG
   public native void aqk(gH$ti var1);

   @hG
   public native void aqp(hv var1);

   @hG
   public native void aqs(go$sX var1);

   public native boolean aqL();

   public native Vec3d aqE();

   public native Perspective aqD();

   private static native int aqQ(int var0, long var1);

   private static native int aqR(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native kr aqC();

   private static native MatchException aqP(MatchException var0);

   @hG
   public native void aqq(gT var1);

   public native boolean aqK();

   public native boolean aqH();

   public native boolean aqM();

   public native ov aqN();

   public native cJ aqA();

   private static native CallSite aqS(Lookup var0, String var1, MethodType var2);

   @hG(
      priority = mw.LOWEST
   )
   public native void aql(gA var1);

   public native cJ aqB();

   public native ov aqO();

   public native Vec3d aqF();

   private native void aqn();

   public native boolean aqI();

   @hG
   public native void aqo(gM var1);

   public native boolean aqJ();

   @Override
   public native void YO();
}
