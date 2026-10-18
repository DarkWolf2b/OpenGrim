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
      super(gf.aZL(76, false, gh.qBzlZ).aZS(false));
      this.tBVoR = new cC(
            this,
            mr.clS(
               new int[]{
                  83,
                  112,
                  101,
                  101,
                  100
               }
            )
         )
         .Vy(0.1)
         .Vw(1.0)
         .Vx(10.0)
         .VA(3.0);
      int[] var10004 = new int[6];
      var10004[0] = 82;
      var10004[1] = 111;
      var10004[2] = 116;
      var10004[3] = 97;
      var10004[4] = 116;
      var10004[5] = 101;
      this.joJfw = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[17];
      var10004[0] = 68;
      var10004[1] = 105;
      var10004[2] = 115;
      var10004[3] = 97;
      var10004[4] = 98;
      var10004[5] = 108;
      var10004[6] = 101;
      var10004[7] = 32;
      var10004[8] = 111;
      var10004[9] = 110;
      var10004[10] = 32;
      var10004[11] = 68;
      var10004[12] = 97;
      var10004[13] = 109;
      var10004[14] = 97;
      var10004[15] = 103;
      var10004[16] = 101;
      this.xkmCl = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[11];
      var10004[0] = 82;
      var10004[1] = 101;
      var10004[2] = 110;
      var10004[3] = 100;
      var10004[4] = 101;
      var10004[5] = 114;
      var10004[6] = 32;
      var10004[7] = 72;
      var10004[8] = 97;
      var10004[9] = 110;
      var10004[10] = 100;
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
