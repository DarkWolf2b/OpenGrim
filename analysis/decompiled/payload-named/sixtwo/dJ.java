package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.List;
import java.util.Map;
import native.Loader;
import net.minecraft.client.gui.screen.Screen;
import net.minecraft.client.gui.screen.ingame.HandledScreen;
import net.minecraft.item.ItemStack;
import net.minecraft.screen.slot.Slot;

public class dJ extends gg {
   private final cJ hRuUo;
   private final cJ Twcyd;
   private final cJ AkIWJ;
   private final cJ kshzP;
   private final ct MjLVq;
   private final cu GndWc;
   private final cu lULpb;
   private final ct XujOg;
   private final cu BEFfA;
   private final cu FkJRf;
   private final cu RCVzG;
   private final cu iUlIH;
   private final ct cnoHj;
   private final cu YdPTn;
   private final cu QgNbo;
   private Screen bGfmG;
   private Slot wZqCT;
   private double AoTLF;
   private boolean MfpDd;
   private boolean UGWve;
   private boolean aLgGR;
   private static long BBSYk;
   private static long[] CXTPO;
   private static Integer[] IsjYj;
   private static Map crFLs;

   private static native void _f6f055b5122afffdaca62a3a3058ae70();

   public dJ() {
      long var1 = BBSYk ^ 64969696602626L;
      super(gf.aZL(amZ<"h">(13245, 3878641345455887363L ^ var1), false, gh.qBzlZ));
      int[] var10004 = new int[amZ<"h">(17906, 7589957190389260803L ^ var1)];
      var10004[0] = amZ<"h">(28471, 3267294504954579160L ^ var1);
      var10004[1] = amZ<"h">(6180, 4296642699568005011L ^ var1);
      var10004[2] = amZ<"h">(3329, 90238953334680311L ^ var1);
      var10004[3] = amZ<"h">(4431, 3222932923972073170L ^ var1);
      var10004[4] = amZ<"h">(526, 3522887203418351002L ^ var1);
      var10004[5] = amZ<"h">(5054, 1081796779284280360L ^ var1);
      var10004[amZ<"h">(1314, 3916169358079763153L ^ var1)] = amZ<"h">(3174, 8445526063739579343L ^ var1);
      var10004[amZ<"h">(10736, 3713653739647143542L ^ var1)] = amZ<"h">(30537, 5256089004271096047L ^ var1);
      var10004[amZ<"h">(387, 3277911950957848074L ^ var1)] = amZ<"h">(29126, 4834119173947020886L ^ var1);
      this.hRuUo = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[amZ<"h">(22206, 7699833036157153580L ^ var1)];
      var10004[0] = amZ<"h">(14298, 3323550520171204713L ^ var1);
      var10004[1] = amZ<"h">(25471, 6924217732171646082L ^ var1);
      var10004[2] = amZ<"h">(28664, 733735075116107873L ^ var1);
      var10004[3] = amZ<"h">(10907, 5911741701758651674L ^ var1);
      var10004[4] = amZ<"h">(22115, 4991301078941037013L ^ var1);
      var10004[5] = amZ<"h">(15406, 6027655328776526814L ^ var1);
      var10004[amZ<"h">(9514, 8379165266926273204L ^ var1)] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      var10004[amZ<"h">(30650, 2671504122960924752L ^ var1)] = amZ<"h">(31426, 3965196902386425149L ^ var1);
      var10004[amZ<"h">(23771, 7242648582718290768L ^ var1)] = amZ<"h">(5717, 3373290009949254098L ^ var1);
      var10004[amZ<"h">(25213, 932132314478167493L ^ var1)] = amZ<"h">(10907, 5911741701758651674L ^ var1);
      var10004[amZ<"h">(23620, 3824568351577897890L ^ var1)] = amZ<"h">(21798, 539685512536552122L ^ var1);
      var10004[amZ<"h">(16866, 708988692328539651L ^ var1)] = amZ<"h">(5212, 1993719343377232845L ^ var1);
      var10004[amZ<"h">(24141, 438663302533020078L ^ var1)] = amZ<"h">(24160, 6224827130308098530L ^ var1);
      var10004[amZ<"h">(19762, 3535377422242835161L ^ var1)] = amZ<"h">(5314, 3385658649561412433L ^ var1);
      var10004[amZ<"h">(19050, 955018828038303173L ^ var1)] = amZ<"h">(10907, 5911741701758651674L ^ var1);
      var10004[amZ<"h">(29266, 3849969137927149032L ^ var1)] = amZ<"h">(25192, 1529482660966942157L ^ var1);
      var10004[amZ<"h">(3604, 5905886426015246774L ^ var1)] = amZ<"h">(5211, 1317649152430093307L ^ var1);
      var10004[amZ<"h">(4466, 2578726885788137104L ^ var1)] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      var10004[amZ<"h">(18422, 805737452310618220L ^ var1)] = amZ<"h">(30915, 212319013383987057L ^ var1);
      this.Twcyd = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[amZ<"h">(13379, 899744815015334906L ^ var1)];
      var10004[0] = amZ<"h">(23552, 7191985739074304904L ^ var1);
      var10004[1] = amZ<"h">(25471, 6924217732171646082L ^ var1);
      var10004[2] = amZ<"h">(28664, 733735075116107873L ^ var1);
      var10004[3] = amZ<"h">(10907, 5911741701758651674L ^ var1);
      var10004[4] = amZ<"h">(22115, 4991301078941037013L ^ var1);
      var10004[5] = amZ<"h">(15406, 6027655328776526814L ^ var1);
      var10004[amZ<"h">(9514, 8379165266926273204L ^ var1)] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      var10004[amZ<"h">(30650, 2671504122960924752L ^ var1)] = amZ<"h">(31426, 3965196902386425149L ^ var1);
      var10004[amZ<"h">(23771, 7242648582718290768L ^ var1)] = amZ<"h">(5717, 3373290009949254098L ^ var1);
      var10004[amZ<"h">(25213, 932132314478167493L ^ var1)] = amZ<"h">(10907, 5911741701758651674L ^ var1);
      var10004[amZ<"h">(30119, 797731428265448011L ^ var1)] = amZ<"h">(22400, 4130720287267680289L ^ var1);
      var10004[amZ<"h">(624, 839447515533682155L ^ var1)] = amZ<"h">(29867, 342783379189814138L ^ var1);
      var10004[amZ<"h">(1357, 3589342727616307885L ^ var1)] = amZ<"h">(5211, 1317649152430093307L ^ var1);
      var10004[amZ<"h">(20641, 422195168414627631L ^ var1)] = amZ<"h">(30156, 7814317966259311216L ^ var1);
      var10004[amZ<"h">(26536, 2071995932448997404L ^ var1)] = amZ<"h">(26104, 1208168614636405334L ^ var1);
      var10004[amZ<"h">(15121, 8078566160863206556L ^ var1)] = amZ<"h">(6043, 4788231486778978340L ^ var1);
      var10004[amZ<"h">(12448, 9035466625442977630L ^ var1)] = amZ<"h">(5211, 1317649152430093307L ^ var1);
      var10004[amZ<"h">(12400, 3395323408895449087L ^ var1)] = amZ<"h">(10907, 5911741701758651674L ^ var1);
      var10004[amZ<"h">(18003, 455810575046926775L ^ var1)] = amZ<"h">(3973, 229036833277552753L ^ var1);
      var10004[amZ<"h">(29476, 2606495922085942477L ^ var1)] = amZ<"h">(5211, 1317649152430093307L ^ var1);
      var10004[amZ<"h">(8587, 4453716936452965896L ^ var1)] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      var10004[amZ<"h">(32149, 580189349060270642L ^ var1)] = amZ<"h">(30625, 8038201317959815201L ^ var1);
      this.AkIWJ = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[amZ<"h">(624, 839447515533682155L ^ var1)];
      var10004[0] = amZ<"h">(22400, 4130720287267680289L ^ var1);
      var10004[1] = amZ<"h">(30156, 7814317966259311216L ^ var1);
      var10004[2] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      var10004[3] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      var10004[4] = amZ<"h">(1622, 5608340480315138505L ^ var1);
      var10004[5] = amZ<"h">(10907, 5911741701758651674L ^ var1);
      var10004[amZ<"h">(9514, 8379165266926273204L ^ var1)] = amZ<"h">(22115, 4991301078941037013L ^ var1);
      var10004[amZ<"h">(30650, 2671504122960924752L ^ var1)] = amZ<"h">(15406, 6027655328776526814L ^ var1);
      var10004[amZ<"h">(23771, 7242648582718290768L ^ var1)] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      var10004[amZ<"h">(25213, 932132314478167493L ^ var1)] = amZ<"h">(31426, 3965196902386425149L ^ var1);
      var10004[amZ<"h">(30119, 797731428265448011L ^ var1)] = amZ<"h">(5717, 3373290009949254098L ^ var1);
      this.kshzP = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[amZ<"h">(18003, 455810575046926775L ^ var1)];
      var10004[0] = amZ<"h">(22400, 4130720287267680289L ^ var1);
      var10004[1] = amZ<"h">(30156, 7814317966259311216L ^ var1);
      var10004[2] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      var10004[3] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      var10004[4] = amZ<"h">(8807, 6386566222513669519L ^ var1);
      var10004[5] = amZ<"h">(10907, 5911741701758651674L ^ var1);
      var10004[amZ<"h">(9514, 8379165266926273204L ^ var1)] = amZ<"h">(27558, 1915986081000115235L ^ var1);
      var10004[amZ<"h">(30650, 2671504122960924752L ^ var1)] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      var10004[amZ<"h">(23771, 7242648582718290768L ^ var1)] = amZ<"h">(31426, 3965196902386425149L ^ var1);
      var10004[amZ<"h">(25213, 932132314478167493L ^ var1)] = amZ<"h">(29712, 1946480371141039079L ^ var1);
      var10004[amZ<"h">(30119, 797731428265448011L ^ var1)] = amZ<"h">(16459, 6362163430827386878L ^ var1);
      var10004[amZ<"h">(624, 839447515533682155L ^ var1)] = amZ<"h">(30156, 7814317966259311216L ^ var1);
      var10004[amZ<"h">(1357, 3589342727616307885L ^ var1)] = amZ<"h">(10907, 5911741701758651674L ^ var1);
      var10004[amZ<"h">(20641, 422195168414627631L ^ var1)] = amZ<"h">(25030, 8261102590648305270L ^ var1);
      var10004[amZ<"h">(26536, 2071995932448997404L ^ var1)] = amZ<"h">(27581, 7894229473534331992L ^ var1);
      var10004[amZ<"h">(15121, 8078566160863206556L ^ var1)] = amZ<"h">(825, 5284624743157998786L ^ var1);
      var10004[amZ<"h">(12448, 9035466625442977630L ^ var1)] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      var10004[amZ<"h">(12400, 3395323408895449087L ^ var1)] = amZ<"h">(27581, 7894229473534331992L ^ var1);
      this.MjLVq = new ct(this, mr.clS(var10004));
      ct var10003 = this.MjLVq;
      var10004 = new int[amZ<"h">(20641, 422195168414627631L ^ var1)];
      var10004[0] = amZ<"h">(6335, 6781534877347233556L ^ var1);
      var10004[1] = amZ<"h">(29867, 342783379189814138L ^ var1);
      var10004[2] = amZ<"h">(27581, 7894229473534331992L ^ var1);
      var10004[3] = amZ<"h">(13989, 1477681404853915979L ^ var1);
      var10004[4] = amZ<"h">(5211, 1317649152430093307L ^ var1);
      var10004[5] = amZ<"h">(10907, 5911741701758651674L ^ var1);
      var10004[amZ<"h">(9514, 8379165266926273204L ^ var1)] = amZ<"h">(22115, 4991301078941037013L ^ var1);
      var10004[amZ<"h">(30650, 2671504122960924752L ^ var1)] = amZ<"h">(30671, 4214020560143896679L ^ var1);
      var10004[amZ<"h">(23771, 7242648582718290768L ^ var1)] = amZ<"h">(10907, 5911741701758651674L ^ var1);
      var10004[amZ<"h">(25213, 932132314478167493L ^ var1)] = amZ<"h">(23552, 7191985739074304904L ^ var1);
      var10004[amZ<"h">(30119, 797731428265448011L ^ var1)] = amZ<"h">(31426, 3965196902386425149L ^ var1);
      var10004[amZ<"h">(624, 839447515533682155L ^ var1)] = amZ<"h">(9418, 4020012279229645616L ^ var1);
      var10004[amZ<"h">(1357, 3589342727616307885L ^ var1)] = amZ<"h">(5211, 1317649152430093307L ^ var1);
      this.GndWc = new cu(var10003, mr.clS(var10004));
      var10003 = this.MjLVq;
      var10004 = new int[amZ<"h">(20641, 422195168414627631L ^ var1)];
      var10004[0] = amZ<"h">(23552, 7191985739074304904L ^ var1);
      var10004[1] = amZ<"h">(31426, 3965196902386425149L ^ var1);
      var10004[2] = amZ<"h">(9418, 4020012279229645616L ^ var1);
      var10004[3] = amZ<"h">(5211, 1317649152430093307L ^ var1);
      var10004[4] = amZ<"h">(10907, 5911741701758651674L ^ var1);
      var10004[5] = amZ<"h">(22115, 4991301078941037013L ^ var1);
      var10004[amZ<"h">(9514, 8379165266926273204L ^ var1)] = amZ<"h">(30671, 4214020560143896679L ^ var1);
      var10004[amZ<"h">(30650, 2671504122960924752L ^ var1)] = amZ<"h">(10907, 5911741701758651674L ^ var1);
      var10004[amZ<"h">(23771, 7242648582718290768L ^ var1)] = amZ<"h">(27451, 2338894408134872297L ^ var1);
      var10004[amZ<"h">(25213, 932132314478167493L ^ var1)] = amZ<"h">(29867, 342783379189814138L ^ var1);
      var10004[amZ<"h">(30119, 797731428265448011L ^ var1)] = amZ<"h">(27581, 7894229473534331992L ^ var1);
      var10004[amZ<"h">(624, 839447515533682155L ^ var1)] = amZ<"h">(9418, 4020012279229645616L ^ var1);
      var10004[amZ<"h">(1357, 3589342727616307885L ^ var1)] = amZ<"h">(5211, 1317649152430093307L ^ var1);
      this.lULpb = new cu(var10003, mr.clS(var10004)).SY();
      var10004 = new int[amZ<"h">(26829, 1499683285300629358L ^ var1)];
      var10004[0] = amZ<"h">(22400, 4130720287267680289L ^ var1);
      var10004[1] = amZ<"h">(30156, 7814317966259311216L ^ var1);
      var10004[2] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      var10004[3] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      var10004[4] = amZ<"h">(8807, 6386566222513669519L ^ var1);
      var10004[5] = amZ<"h">(10907, 5911741701758651674L ^ var1);
      var10004[amZ<"h">(9514, 8379165266926273204L ^ var1)] = amZ<"h">(1764, 748251016038424856L ^ var1);
      var10004[amZ<"h">(30650, 2671504122960924752L ^ var1)] = amZ<"h">(15606, 6972434225293957903L ^ var1);
      var10004[amZ<"h">(23771, 7242648582718290768L ^ var1)] = amZ<"h">(27581, 7894229473534331992L ^ var1);
      var10004[amZ<"h">(25213, 932132314478167493L ^ var1)] = amZ<"h">(30671, 4214020560143896679L ^ var1);
      var10004[amZ<"h">(30119, 797731428265448011L ^ var1)] = amZ<"h">(8807, 6386566222513669519L ^ var1);
      var10004[amZ<"h">(624, 839447515533682155L ^ var1)] = amZ<"h">(8807, 6386566222513669519L ^ var1);
      var10004[amZ<"h">(1357, 3589342727616307885L ^ var1)] = amZ<"h">(10907, 5911741701758651674L ^ var1);
      var10004[amZ<"h">(20641, 422195168414627631L ^ var1)] = amZ<"h">(2748, 6425309049177582884L ^ var1);
      var10004[amZ<"h">(26536, 2071995932448997404L ^ var1)] = amZ<"h">(29867, 342783379189814138L ^ var1);
      var10004[amZ<"h">(15121, 8078566160863206556L ^ var1)] = amZ<"h">(27581, 7894229473534331992L ^ var1);
      var10004[amZ<"h">(12448, 9035466625442977630L ^ var1)] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      var10004[amZ<"h">(12400, 3395323408895449087L ^ var1)] = amZ<"h">(15606, 6972434225293957903L ^ var1);
      var10004[amZ<"h">(18003, 455810575046926775L ^ var1)] = amZ<"h">(5211, 1317649152430093307L ^ var1);
      var10004[amZ<"h">(29476, 2606495922085942477L ^ var1)] = amZ<"h">(29867, 342783379189814138L ^ var1);
      var10004[amZ<"h">(23659, 6821735213539916758L ^ var1)] = amZ<"h">(30671, 4214020560143896679L ^ var1);
      var10004[amZ<"h">(775, 3478536779583693995L ^ var1)] = amZ<"h">(13889, 7936229279073374700L ^ var1);
      this.XujOg = new ct(this, mr.clS(var10004));
      var10003 = this.XujOg;
      var10004 = new int[amZ<"h">(9514, 8379165266926273204L ^ var1)];
      var10004[0] = amZ<"h">(6608, 9024045125058117157L ^ var1);
      var10004[1] = amZ<"h">(30671, 4214020560143896679L ^ var1);
      var10004[2] = amZ<"h">(27581, 7894229473534331992L ^ var1);
      var10004[3] = amZ<"h">(30625, 8038201317959815201L ^ var1);
      var10004[4] = amZ<"h">(31426, 3965196902386425149L ^ var1);
      var10004[5] = amZ<"h">(8807, 6386566222513669519L ^ var1);
      this.BEFfA = new cu(var10003, mr.clS(var10004)).SY();
      var10003 = this.XujOg;
      var10004 = new int[amZ<"h">(23771, 7242648582718290768L ^ var1)];
      var10004[0] = amZ<"h">(3973, 229036833277552753L ^ var1);
      var10004[1] = amZ<"h">(10167, 449463597645103183L ^ var1);
      var10004[2] = amZ<"h">(9791, 8681913651460178318L ^ var1);
      var10004[3] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      var10004[4] = amZ<"h">(27581, 7894229473534331992L ^ var1);
      var10004[5] = amZ<"h">(5211, 1317649152430093307L ^ var1);
      var10004[amZ<"h">(9514, 8379165266926273204L ^ var1)] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      var10004[amZ<"h">(30650, 2671504122960924752L ^ var1)] = amZ<"h">(31662, 2669616454452042788L ^ var1);
      this.FkJRf = new cu(var10003, mr.clS(var10004));
      var10003 = this.XujOg;
      var10004 = new int[amZ<"h">(26536, 2071995932448997404L ^ var1)];
      var10004[0] = amZ<"h">(23434, 6390464602503183392L ^ var1);
      var10004[1] = amZ<"h">(30671, 4214020560143896679L ^ var1);
      var10004[2] = amZ<"h">(9418, 4020012279229645616L ^ var1);
      var10004[3] = amZ<"h">(29867, 342783379189814138L ^ var1);
      var10004[4] = amZ<"h">(5211, 1317649152430093307L ^ var1);
      var10004[5] = amZ<"h">(29867, 342783379189814138L ^ var1);
      var10004[amZ<"h">(9514, 8379165266926273204L ^ var1)] = amZ<"h">(30671, 4214020560143896679L ^ var1);
      var10004[amZ<"h">(30650, 2671504122960924752L ^ var1)] = amZ<"h">(10167, 449463597645103183L ^ var1);
      var10004[amZ<"h">(23771, 7242648582718290768L ^ var1)] = amZ<"h">(10907, 5911741701758651674L ^ var1);
      var10004[amZ<"h">(25213, 932132314478167493L ^ var1)] = amZ<"h">(32193, 4087651864251128397L ^ var1);
      var10004[amZ<"h">(30119, 797731428265448011L ^ var1)] = amZ<"h">(15406, 6027655328776526814L ^ var1);
      var10004[amZ<"h">(624, 839447515533682155L ^ var1)] = amZ<"h">(31426, 3965196902386425149L ^ var1);
      var10004[amZ<"h">(1357, 3589342727616307885L ^ var1)] = amZ<"h">(27581, 7894229473534331992L ^ var1);
      var10004[amZ<"h">(20641, 422195168414627631L ^ var1)] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      this.RCVzG = new cu(var10003, mr.clS(var10004));
      var10003 = this.XujOg;
      var10004 = new int[amZ<"h">(6801, 301107085368245546L ^ var1)];
      var10004[0] = amZ<"h">(11059, 1563144768082152631L ^ var1);
      var10004[1] = amZ<"h">(30671, 4214020560143896679L ^ var1);
      var10004[2] = amZ<"h">(9418, 4020012279229645616L ^ var1);
      var10004[3] = amZ<"h">(29867, 342783379189814138L ^ var1);
      var10004[4] = amZ<"h">(5211, 1317649152430093307L ^ var1);
      var10004[5] = amZ<"h">(29867, 342783379189814138L ^ var1);
      var10004[amZ<"h">(9514, 8379165266926273204L ^ var1)] = amZ<"h">(30671, 4214020560143896679L ^ var1);
      var10004[amZ<"h">(30650, 2671504122960924752L ^ var1)] = amZ<"h">(10167, 449463597645103183L ^ var1);
      var10004[amZ<"h">(23771, 7242648582718290768L ^ var1)] = amZ<"h">(10907, 5911741701758651674L ^ var1);
      var10004[amZ<"h">(25213, 932132314478167493L ^ var1)] = amZ<"h">(7460, 8969790860779830004L ^ var1);
      var10004[amZ<"h">(30119, 797731428265448011L ^ var1)] = amZ<"h">(15406, 6027655328776526814L ^ var1);
      var10004[amZ<"h">(624, 839447515533682155L ^ var1)] = amZ<"h">(31426, 3965196902386425149L ^ var1);
      var10004[amZ<"h">(1357, 3589342727616307885L ^ var1)] = amZ<"h">(27581, 7894229473534331992L ^ var1);
      var10004[amZ<"h">(20641, 422195168414627631L ^ var1)] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      var10004[amZ<"h">(26536, 2071995932448997404L ^ var1)] = amZ<"h">(10907, 5911741701758651674L ^ var1);
      var10004[amZ<"h">(15121, 8078566160863206556L ^ var1)] = amZ<"h">(3973, 229036833277552753L ^ var1);
      var10004[amZ<"h">(12448, 9035466625442977630L ^ var1)] = amZ<"h">(10167, 449463597645103183L ^ var1);
      var10004[amZ<"h">(12400, 3395323408895449087L ^ var1)] = amZ<"h">(10579, 1443216121116921505L ^ var1);
      var10004[amZ<"h">(18003, 455810575046926775L ^ var1)] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      var10004[amZ<"h">(29476, 2606495922085942477L ^ var1)] = amZ<"h">(27581, 7894229473534331992L ^ var1);
      var10004[amZ<"h">(23659, 6821735213539916758L ^ var1)] = amZ<"h">(5211, 1317649152430093307L ^ var1);
      var10004[amZ<"h">(775, 3478536779583693995L ^ var1)] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      var10004[amZ<"h">(26829, 1499683285300629358L ^ var1)] = amZ<"h">(31662, 2669616454452042788L ^ var1);
      this.iUlIH = new cu(var10003, mr.clS(var10004));
      var10004 = new int[amZ<"h">(29476, 2606495922085942477L ^ var1)];
      var10004[0] = amZ<"h">(1764, 748251016038424856L ^ var1);
      var10004[1] = amZ<"h">(15606, 6972434225293957903L ^ var1);
      var10004[2] = amZ<"h">(27581, 7894229473534331992L ^ var1);
      var10004[3] = amZ<"h">(30671, 4214020560143896679L ^ var1);
      var10004[4] = amZ<"h">(8807, 6386566222513669519L ^ var1);
      var10004[5] = amZ<"h">(8807, 6386566222513669519L ^ var1);
      var10004[amZ<"h">(9514, 8379165266926273204L ^ var1)] = amZ<"h">(10907, 5911741701758651674L ^ var1);
      var10004[amZ<"h">(30650, 2671504122960924752L ^ var1)] = amZ<"h">(3973, 229036833277552753L ^ var1);
      var10004[amZ<"h">(23771, 7242648582718290768L ^ var1)] = amZ<"h">(5211, 1317649152430093307L ^ var1);
      var10004[amZ<"h">(25213, 932132314478167493L ^ var1)] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      var10004[amZ<"h">(30119, 797731428265448011L ^ var1)] = amZ<"h">(30625, 8038201317959815201L ^ var1);
      var10004[amZ<"h">(624, 839447515533682155L ^ var1)] = amZ<"h">(10907, 5911741701758651674L ^ var1);
      var10004[amZ<"h">(1357, 3589342727616307885L ^ var1)] = amZ<"h">(1764, 748251016038424856L ^ var1);
      var10004[amZ<"h">(20641, 422195168414627631L ^ var1)] = amZ<"h">(15606, 6972434225293957903L ^ var1);
      var10004[amZ<"h">(26536, 2071995932448997404L ^ var1)] = amZ<"h">(31426, 3965196902386425149L ^ var1);
      var10004[amZ<"h">(15121, 8078566160863206556L ^ var1)] = amZ<"h">(8807, 6386566222513669519L ^ var1);
      var10004[amZ<"h">(12448, 9035466625442977630L ^ var1)] = amZ<"h">(29867, 342783379189814138L ^ var1);
      var10004[amZ<"h">(12400, 3395323408895449087L ^ var1)] = amZ<"h">(10167, 449463597645103183L ^ var1);
      var10004[amZ<"h">(18003, 455810575046926775L ^ var1)] = amZ<"h">(21191, 4474926742715921696L ^ var1);
      this.cnoHj = new ct(this, mr.clS(var10004));
      var10003 = this.cnoHj;
      var10004 = new int[amZ<"h">(1357, 3589342727616307885L ^ var1)];
      var10004[0] = amZ<"h">(11059, 1563144768082152631L ^ var1);
      var10004[1] = amZ<"h">(27581, 7894229473534331992L ^ var1);
      var10004[2] = amZ<"h">(30671, 4214020560143896679L ^ var1);
      var10004[3] = amZ<"h">(25096, 1554700376644437477L ^ var1);
      var10004[4] = amZ<"h">(30671, 4214020560143896679L ^ var1);
      var10004[5] = amZ<"h">(27581, 7894229473534331992L ^ var1);
      var10004[amZ<"h">(9514, 8379165266926273204L ^ var1)] = amZ<"h">(5211, 1317649152430093307L ^ var1);
      var10004[amZ<"h">(30650, 2671504122960924752L ^ var1)] = amZ<"h">(29867, 342783379189814138L ^ var1);
      var10004[amZ<"h">(23771, 7242648582718290768L ^ var1)] = amZ<"h">(30671, 4214020560143896679L ^ var1);
      var10004[amZ<"h">(25213, 932132314478167493L ^ var1)] = amZ<"h">(10167, 449463597645103183L ^ var1);
      var10004[amZ<"h">(30119, 797731428265448011L ^ var1)] = amZ<"h">(31426, 3965196902386425149L ^ var1);
      var10004[amZ<"h">(624, 839447515533682155L ^ var1)] = amZ<"h">(8807, 6386566222513669519L ^ var1);
      this.YdPTn = new cu(var10003, mr.clS(var10004)).SY();
      var10003 = this.cnoHj;
      var10004 = new int[amZ<"h">(30119, 797731428265448011L ^ var1)];
      var10004[0] = amZ<"h">(7460, 8969790860779830004L ^ var1);
      var10004[1] = amZ<"h">(8807, 6386566222513669519L ^ var1);
      var10004[2] = amZ<"h">(15406, 6027655328776526814L ^ var1);
      var10004[3] = amZ<"h">(31426, 3965196902386425149L ^ var1);
      var10004[4] = amZ<"h">(12488, 2130084168043698028L ^ var1);
      var10004[5] = amZ<"h">(9418, 4020012279229645616L ^ var1);
      var10004[amZ<"h">(9514, 8379165266926273204L ^ var1)] = amZ<"h">(10907, 5911741701758651674L ^ var1);
      var10004[amZ<"h">(30650, 2671504122960924752L ^ var1)] = amZ<"h">(15174, 3398103840579067091L ^ var1);
      var10004[amZ<"h">(23771, 7242648582718290768L ^ var1)] = amZ<"h">(10167, 449463597645103183L ^ var1);
      var10004[amZ<"h">(25213, 932132314478167493L ^ var1)] = amZ<"h">(21343, 3181765506467558600L ^ var1);
      this.QgNbo = new cu(var10003, mr.clS(var10004));
   }

   static {
      Loader.doInit(dJ.class);
      _f6f055b5122afffdaca62a3a3058ae70();
   }

   public native void amy(HandledScreen<?> var1, double var2, double var4, int var6);

   public native void amz(HandledScreen<?> var1, double var2, double var4, int var6);

   public native boolean amA(HandledScreen<?> var1, double var2, double var4, double var6);

   public native void amx(HandledScreen<?> var1, double var2, double var4, int var6);

   private native boolean amG(HandledScreen<?> var1);

   private native boolean amN(Slot var1);

   private native boolean amO(Slot var1, HandledScreen<?> var2);

   private native Slot amK(HandledScreen<?> var1, double var2, double var4);

   private native boolean amP(ItemStack var1, ItemStack var2);

   private native Slot amQ(List<Slot> var1, Slot var2);

   private native double amT(double var1);

   private native void amJ();

   private native void amF(HandledScreen<?> var1, Slot var2, ItemStack var3);

   private static native int amY(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native void amD(HandledScreen<?> var1, Slot var2, ItemStack var3, ItemStack var4, List<Slot> var5, int var6);

   private native boolean amH(int var1);

   private native boolean amS(Slot var1, List<Slot> var2);

   private static native int amX(int var0, long var1);

   private native boolean amV();

   private native void amB(HandledScreen<?> var1, Slot var2, ItemStack var3);

   private native void amI(Screen var1);

   private native void amM(HandledScreen<?> var1);

   private static native CallSite amZ(Lookup var0, String var1, MethodType var2);

   private native List<Slot> amR(List<Slot> var1, Slot var2, int var3, boolean var4);

   private native boolean amU();

   private native void amL(HandledScreen<?> var1, Slot var2, int var3, boolean var4);

   private native void amE(HandledScreen<?> var1, Slot var2, ItemStack var3, ItemStack var4, List<Slot> var5, int var6);

   private static native MatchException amW(MatchException var0);

   private native void amC(HandledScreen<?> var1, Slot var2, ItemStack var3, ItemStack var4, List<Slot> var5, int var6, boolean var7);

   @Override
   public native void YO();
}
