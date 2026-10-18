package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_1542;
import net.minecraft.class_1657;
import net.minecraft.class_1799;
import net.minecraft.class_1887;
import net.minecraft.class_1890;
import net.minecraft.class_241;
import net.minecraft.class_243;
import net.minecraft.class_6880;
import net.minecraft.class_9304;
import org.joml.Vector4d;

public class dt extends gg implements lA, lG {
   private final cv bpDue;
   private final cw jtzDi;
   private final cw VPgLm;
   private final cv vjqkH;
   private final cw vExdX;
   private final cw zHaUb;
   private final cw gxggV;
   private final cw AbmMN;
   private final cw yhuFt;
   private final cw JKWzw;
   private final cw ZhrcH;
   private final cw bhXKP;
   private final cw VrMbh;
   private final cC hSuAc;
   private final cJ uuLKb;
   private final cG wRBRi;
   private final cG uxHfK;
   private final cG weKln;
   private final ct bcjCz;
   private final cu OHUtJ;
   private final cu bgoRN;
   private final cG MAUHJ;
   private final cG JdaIF;
   private final cG lFuNf;
   private final cG BmdVM;
   private final cG bocCI;
   private final cJ KjFun;
   private static final long JzNel = gb.aYR(9079704667440152341L, -4531979296725247371L, MethodHandles.lookup().lookupClass()).a(181127066555353L);
   private static final String[] LQnFM;
   private static final String[] yCgSU;
   private static final Map bUAHN = new HashMap(13);
   private static final long[] BYKvc;
   private static final Integer[] WeGki;
   private static final Map JRvoE;

   public dt() {
      long var1 = JzNel ^ 103960604000183L;
      super(gf.aZL(aiC<"m">(11470, 161786174376591017L ^ var1), false, gh.nOCvV));
      int[] var10004 = new int[aiC<"m">(22574, 7222061314773764711L ^ var1)];
      var10004[0] = aiC<"m">(24458, 4163180418550156704L ^ var1);
      var10004[1] = aiC<"m">(16505, 5137427633122726485L ^ var1);
      var10004[2] = aiC<"m">(19346, 1203116008188336611L ^ var1);
      var10004[3] = aiC<"m">(14799, 4217657669139245998L ^ var1);
      var10004[4] = aiC<"m">(1635, 3438452968416023639L ^ var1);
      var10004[5] = aiC<"m">(16646, 6058318956261102454L ^ var1);
      var10004[aiC<"m">(8354, 2552258471595946710L ^ var1)] = aiC<"m">(2338, 3670095190172834575L ^ var1);
      var10004[aiC<"m">(14458, 8694869836390017568L ^ var1)] = aiC<"m">(12802, 4303006296787099759L ^ var1);
      var10004[aiC<"m">(7364, 4137201187797405333L ^ var1)] = aiC<"m">(14450, 5095990789648329292L ^ var1);
      var10004[aiC<"m">(3154, 4164505003533246010L ^ var1)] = aiC<"m">(27862, 4889938894575599275L ^ var1);
      this.bpDue = new cv(this, mr.clS(var10004));
      cv var10003 = this.bpDue;
      var10004 = new int[aiC<"m">(25943, 243100755221051140L ^ var1)];
      var10004[0] = aiC<"m">(28436, 6326292267430051140L ^ var1);
      var10004[1] = aiC<"m">(14707, 4754072619696761638L ^ var1);
      var10004[2] = aiC<"m">(16729, 1853277110901166876L ^ var1);
      var10004[3] = aiC<"m">(22980, 8936038038489353093L ^ var1);
      var10004[4] = aiC<"m">(1635, 3438452968416023639L ^ var1);
      var10004[5] = aiC<"m">(27862, 4889938894575599275L ^ var1);
      var10004[aiC<"m">(29448, 6762510782359757159L ^ var1)] = aiC<"m">(28284, 3974526704884055063L ^ var1);
      this.jtzDi = new cw(var10003, mr.clS(var10004)).Tz();
      this.VPgLm = new cw(
         this.bpDue,
         mr.clS(
            new int[]{
               aiC<"m">(24708, 2134463167290405610L ^ var1),
               aiC<"m">(9640, 2158035377165776778L ^ var1),
               aiC<"m">(1635, 3438452968416023639L ^ var1),
               aiC<"m">(27403, 6122019149698529639L ^ var1),
               aiC<"m">(29466, 7530092784091848999L ^ var1)
            }
         )
      );
      var10004 = new int[aiC<"m">(9354, 6977209206341842653L ^ var1)];
      var10004[0] = aiC<"m">(4117, 7803483404003017343L ^ var1);
      var10004[1] = aiC<"m">(20305, 5148552233579437361L ^ var1);
      var10004[2] = aiC<"m">(9294, 5267920893912004156L ^ var1);
      var10004[3] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[4] = aiC<"m">(14662, 3960183051196017456L ^ var1);
      var10004[5] = aiC<"m">(31104, 1675012736421850063L ^ var1);
      var10004[aiC<"m">(29448, 6762510782359757159L ^ var1)] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[aiC<"m">(25943, 243100755221051140L ^ var1)] = aiC<"m">(14662, 3960183051196017456L ^ var1);
      var10004[aiC<"m">(16766, 4802670517533692729L ^ var1)] = aiC<"m">(1560, 7522079353414259819L ^ var1);
      var10004[aiC<"m">(12606, 2596822422361776988L ^ var1)] = aiC<"m">(1635, 3438452968416023639L ^ var1);
      var10004[aiC<"m">(13197, 6356284899430867374L ^ var1)] = aiC<"m">(20305, 5148552233579437361L ^ var1);
      var10004[aiC<"m">(22005, 1924451766465185743L ^ var1)] = aiC<"m">(5073, 3793594838103785966L ^ var1);
      var10004[aiC<"m">(8528, 5887941575948120851L ^ var1)] = aiC<"m">(1635, 3438452968416023639L ^ var1);
      var10004[aiC<"m">(1667, 4144050247313790149L ^ var1)] = aiC<"m">(27862, 4889938894575599275L ^ var1);
      this.vjqkH = new cv(this, mr.clS(var10004));
      this.vExdX = new cw(
            this.vjqkH,
            mr.clS(
               new int[]{
                  aiC<"m">(10646, 7513919613495688156L ^ var1),
                  aiC<"m">(16729, 1853277110901166876L ^ var1),
                  aiC<"m">(13405, 7382846669027976743L ^ var1),
                  aiC<"m">(1635, 3438452968416023639L ^ var1)
               }
            )
         )
         .Tz();
      var10003 = this.vjqkH;
      var10004 = new int[aiC<"m">(29448, 6762510782359757159L ^ var1)];
      var10004[0] = aiC<"m">(30979, 5526802395181247297L ^ var1);
      var10004[1] = aiC<"m">(1635, 3438452968416023639L ^ var1);
      var10004[2] = aiC<"m">(16729, 1853277110901166876L ^ var1);
      var10004[3] = aiC<"m">(6109, 8150750954663020015L ^ var1);
      var10004[4] = aiC<"m">(9828, 9201516857169785903L ^ var1);
      var10004[5] = aiC<"m">(12966, 2617250219752104070L ^ var1);
      this.zHaUb = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.vjqkH;
      var10004 = new int[aiC<"m">(13197, 6356284899430867374L ^ var1)];
      var10004[0] = aiC<"m">(7422, 5771561234471161495L ^ var1);
      var10004[1] = aiC<"m">(17195, 5709716352614322549L ^ var1);
      var10004[2] = aiC<"m">(29466, 7530092784091848999L ^ var1);
      var10004[3] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[4] = aiC<"m">(27862, 4889938894575599275L ^ var1);
      var10004[5] = aiC<"m">(22570, 1107787141544168015L ^ var1);
      var10004[aiC<"m">(29448, 6762510782359757159L ^ var1)] = aiC<"m">(9828, 9201516857169785903L ^ var1);
      var10004[aiC<"m">(25943, 243100755221051140L ^ var1)] = aiC<"m">(27646, 5100655620049205638L ^ var1);
      var10004[aiC<"m">(16766, 4802670517533692729L ^ var1)] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[aiC<"m">(12606, 2596822422361776988L ^ var1)] = aiC<"m">(20305, 5148552233579437361L ^ var1);
      this.gxggV = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.vjqkH;
      var10004 = new int[aiC<"m">(16766, 4802670517533692729L ^ var1)];
      var10004[0] = aiC<"m">(2717, 3623718692304328872L ^ var1);
      var10004[1] = aiC<"m">(31521, 3010685315422644601L ^ var1);
      var10004[2] = aiC<"m">(29466, 7530092784091848999L ^ var1);
      var10004[3] = aiC<"m">(9828, 9201516857169785903L ^ var1);
      var10004[4] = aiC<"m">(16729, 1853277110901166876L ^ var1);
      var10004[5] = aiC<"m">(20305, 5148552233579437361L ^ var1);
      var10004[aiC<"m">(29448, 6762510782359757159L ^ var1)] = aiC<"m">(16756, 521820375319991119L ^ var1);
      var10004[aiC<"m">(25943, 243100755221051140L ^ var1)] = aiC<"m">(1635, 3438452968416023639L ^ var1);
      this.AbmMN = new cw(var10003, mr.clS(var10004)).Tz();
      this.yhuFt = new cw(
         this.vjqkH,
         mr.clS(
            new int[]{
               aiC<"m">(20519, 932682815050760821L ^ var1),
               aiC<"m">(31521, 3010685315422644601L ^ var1),
               aiC<"m">(20305, 5148552233579437361L ^ var1),
               aiC<"m">(15293, 1306415826076805578L ^ var1)
            }
         )
      );
      this.JKWzw = new cw(
         this.vjqkH,
         mr.clS(
            new int[]{
               aiC<"m">(1494, 8200252090324227986L ^ var1),
               aiC<"m">(27862, 4889938894575599275L ^ var1),
               aiC<"m">(13405, 7382846669027976743L ^ var1),
               aiC<"m">(15161, 4025631243127793935L ^ var1),
               aiC<"m">(27862, 4889938894575599275L ^ var1)
            }
         )
      );
      var10003 = this.vjqkH;
      var10004 = new int[aiC<"m">(13197, 6356284899430867374L ^ var1)];
      var10004[0] = aiC<"m">(29142, 1895718318049256355L ^ var1);
      var10004[1] = aiC<"m">(16729, 1853277110901166876L ^ var1);
      var10004[2] = aiC<"m">(20305, 5148552233579437361L ^ var1);
      var10004[3] = aiC<"m">(5073, 3793594838103785966L ^ var1);
      var10004[4] = aiC<"m">(14662, 3960183051196017456L ^ var1);
      var10004[5] = aiC<"m">(4117, 7803483404003017343L ^ var1);
      var10004[aiC<"m">(29448, 6762510782359757159L ^ var1)] = aiC<"m">(9828, 9201516857169785903L ^ var1);
      var10004[aiC<"m">(25943, 243100755221051140L ^ var1)] = aiC<"m">(1635, 3438452968416023639L ^ var1);
      var10004[aiC<"m">(16766, 4802670517533692729L ^ var1)] = aiC<"m">(13405, 7382846669027976743L ^ var1);
      var10004[aiC<"m">(12606, 2596822422361776988L ^ var1)] = aiC<"m">(29466, 7530092784091848999L ^ var1);
      this.ZhrcH = new cw(var10003, mr.clS(var10004));
      var10003 = this.vjqkH;
      var10004 = new int[aiC<"m">(16766, 4802670517533692729L ^ var1)];
      var10004[0] = aiC<"m">(7724, 7643378468888808455L ^ var1);
      var10004[1] = aiC<"m">(20305, 5148552233579437361L ^ var1);
      var10004[2] = aiC<"m">(21208, 2454677174040248451L ^ var1);
      var10004[3] = aiC<"m">(30244, 7704066433493197848L ^ var1);
      var10004[4] = aiC<"m">(16729, 1853277110901166876L ^ var1);
      var10004[5] = aiC<"m">(20305, 5148552233579437361L ^ var1);
      var10004[aiC<"m">(29448, 6762510782359757159L ^ var1)] = aiC<"m">(9828, 9201516857169785903L ^ var1);
      var10004[aiC<"m">(25943, 243100755221051140L ^ var1)] = aiC<"m">(29466, 7530092784091848999L ^ var1);
      this.bhXKP = new cw(var10003, mr.clS(var10004));
      var10003 = this.vjqkH;
      var10004 = new int[aiC<"m">(25943, 243100755221051140L ^ var1)];
      var10004[0] = aiC<"m">(20593, 7555051553674019422L ^ var1);
      var10004[1] = aiC<"m">(2938, 416233008109623602L ^ var1);
      var10004[2] = aiC<"m">(2938, 416233008109623602L ^ var1);
      var10004[3] = aiC<"m">(1635, 3438452968416023639L ^ var1);
      var10004[4] = aiC<"m">(21208, 2454677174040248451L ^ var1);
      var10004[5] = aiC<"m">(9828, 9201516857169785903L ^ var1);
      var10004[aiC<"m">(29448, 6762510782359757159L ^ var1)] = aiC<"m">(29466, 7530092784091848999L ^ var1);
      this.VrMbh = new cw(var10003, mr.clS(var10004));
      this.hSuAc = new cC(
            this,
            mr.clS(
               new int[]{
                  aiC<"m">(2384, 8404617123270105977L ^ var1),
                  aiC<"m">(21208, 2454677174040248451L ^ var1),
                  aiC<"m">(16729, 1853277110901166876L ^ var1),
                  aiC<"m">(6109, 8150750954663020015L ^ var1),
                  aiC<"m">(1635, 3438452968416023639L ^ var1)
               }
            )
         )
         .Vy(0.01)
         .Vw(0.2)
         .Vx(2.0)
         .VA(1.0);
      var10004 = new int[aiC<"m">(12606, 2596822422361776988L ^ var1)];
      var10004[0] = aiC<"m">(31340, 5565769932792653842L ^ var1);
      var10004[1] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[2] = aiC<"m">(20305, 5148552233579437361L ^ var1);
      var10004[3] = aiC<"m">(20305, 5148552233579437361L ^ var1);
      var10004[4] = aiC<"m">(1635, 3438452968416023639L ^ var1);
      var10004[5] = aiC<"m">(21208, 2454677174040248451L ^ var1);
      var10004[aiC<"m">(29448, 6762510782359757159L ^ var1)] = aiC<"m">(9828, 9201516857169785903L ^ var1);
      var10004[aiC<"m">(25943, 243100755221051140L ^ var1)] = aiC<"m">(1635, 3438452968416023639L ^ var1);
      var10004[aiC<"m">(16766, 4802670517533692729L ^ var1)] = aiC<"m">(5073, 3793594838103785966L ^ var1);
      this.uuLKb = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aiC<"m">(3416, 591722853861138177L ^ var1)];
      var10004[0] = aiC<"m">(29326, 622052306126659802L ^ var1);
      var10004[1] = aiC<"m">(16729, 1853277110901166876L ^ var1);
      var10004[2] = aiC<"m">(21208, 2454677174040248451L ^ var1);
      var10004[3] = aiC<"m">(27891, 5966592921085410967L ^ var1);
      var10004[4] = aiC<"m">(6476, 4663360880004434704L ^ var1);
      var10004[5] = aiC<"m">(27862, 4889938894575599275L ^ var1);
      var10004[aiC<"m">(29448, 6762510782359757159L ^ var1)] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[aiC<"m">(25943, 243100755221051140L ^ var1)] = aiC<"m">(9053, 7980379649066611054L ^ var1);
      var10004[aiC<"m">(16766, 4802670517533692729L ^ var1)] = aiC<"m">(20305, 5148552233579437361L ^ var1);
      var10004[aiC<"m">(12606, 2596822422361776988L ^ var1)] = aiC<"m">(5073, 3793594838103785966L ^ var1);
      var10004[aiC<"m">(13197, 6356284899430867374L ^ var1)] = aiC<"m">(14662, 3960183051196017456L ^ var1);
      var10004[aiC<"m">(7841, 2812285629833088239L ^ var1)] = aiC<"m">(10375, 2431882603324258985L ^ var1);
      var10004[aiC<"m">(27723, 4920861369126190640L ^ var1)] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[aiC<"m">(17868, 1441515751221057450L ^ var1)] = aiC<"m">(6109, 8150750954663020015L ^ var1);
      var10004[aiC<"m">(21645, 8363687403158849243L ^ var1)] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[aiC<"m">(7350, 1448571462014766825L ^ var1)] = aiC<"m">(27862, 4889938894575599275L ^ var1);
      this.wRBRi = new cG(this, mr.clS(var10004)).Uc(mG.QHTxQ.coa(140.0F).coh());
      this.uxHfK = new cG(
         this,
         mr.clS(
            new int[]{
               aiC<"m">(10375, 2431882603324258985L ^ var1),
               aiC<"m">(15161, 4025631243127793935L ^ var1),
               aiC<"m">(6109, 8150750954663020015L ^ var1),
               aiC<"m">(15161, 4025631243127793935L ^ var1),
               aiC<"m">(27862, 4889938894575599275L ^ var1)
            }
         )
      );
      var10004 = new int[aiC<"m">(13197, 6356284899430867374L ^ var1)];
      var10004[0] = aiC<"m">(8279, 198027720709747223L ^ var1);
      var10004[1] = aiC<"m">(16729, 1853277110901166876L ^ var1);
      var10004[2] = aiC<"m">(13405, 7382846669027976743L ^ var1);
      var10004[3] = aiC<"m">(1635, 3438452968416023639L ^ var1);
      var10004[4] = aiC<"m">(14662, 3960183051196017456L ^ var1);
      var10004[5] = aiC<"m">(10375, 2431882603324258985L ^ var1);
      var10004[aiC<"m">(29448, 6762510782359757159L ^ var1)] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[aiC<"m">(25943, 243100755221051140L ^ var1)] = aiC<"m">(6109, 8150750954663020015L ^ var1);
      var10004[aiC<"m">(16766, 4802670517533692729L ^ var1)] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[aiC<"m">(12606, 2596822422361776988L ^ var1)] = aiC<"m">(27862, 4889938894575599275L ^ var1);
      this.weKln = new cG(this, mr.clS(var10004)).Uc(mG.cnP(191.0F, 75.0F, 74.0F).coh());
      var10004 = new int[aiC<"m">(15484, 1466248335667375693L ^ var1)];
      var10004[0] = aiC<"m">(8279, 198027720709747223L ^ var1);
      var10004[1] = aiC<"m">(16729, 1853277110901166876L ^ var1);
      var10004[2] = aiC<"m">(13405, 7382846669027976743L ^ var1);
      var10004[3] = aiC<"m">(1635, 3438452968416023639L ^ var1);
      var10004[4] = aiC<"m">(14662, 3960183051196017456L ^ var1);
      var10004[5] = aiC<"m">(20604, 2216044960590643761L ^ var1);
      var10004[aiC<"m">(29448, 6762510782359757159L ^ var1)] = aiC<"m">(31521, 3010685315422644601L ^ var1);
      var10004[aiC<"m">(25943, 243100755221051140L ^ var1)] = aiC<"m">(29466, 7530092784091848999L ^ var1);
      var10004[aiC<"m">(16766, 4802670517533692729L ^ var1)] = aiC<"m">(24628, 7355418042789818901L ^ var1);
      var10004[aiC<"m">(12606, 2596822422361776988L ^ var1)] = aiC<"m">(6109, 8150750954663020015L ^ var1);
      var10004[aiC<"m">(13197, 6356284899430867374L ^ var1)] = aiC<"m">(16729, 1853277110901166876L ^ var1);
      var10004[aiC<"m">(7841, 2812285629833088239L ^ var1)] = aiC<"m">(23165, 6918622120409843761L ^ var1);
      var10004[aiC<"m">(27723, 4920861369126190640L ^ var1)] = aiC<"m">(14662, 3960183051196017456L ^ var1);
      var10004[aiC<"m">(17868, 1441515751221057450L ^ var1)] = aiC<"m">(1332, 7020232597650085719L ^ var1);
      var10004[aiC<"m">(21645, 8363687403158849243L ^ var1)] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[aiC<"m">(11235, 75029796460444063L ^ var1)] = aiC<"m">(5073, 3793594838103785966L ^ var1);
      var10004[aiC<"m">(30405, 8095657945462367418L ^ var1)] = aiC<"m">(1635, 3438452968416023639L ^ var1);
      this.bcjCz = new ct(this, mr.clS(var10004)).SO(1);
      ct var9 = this.bcjCz;
      var10004 = new int[aiC<"m">(27723, 4920861369126190640L ^ var1)];
      var10004[0] = aiC<"m">(20604, 2216044960590643761L ^ var1);
      var10004[1] = aiC<"m">(31521, 3010685315422644601L ^ var1);
      var10004[2] = aiC<"m">(29466, 7530092784091848999L ^ var1);
      var10004[3] = aiC<"m">(24628, 7355418042789818901L ^ var1);
      var10004[4] = aiC<"m">(6109, 8150750954663020015L ^ var1);
      var10004[5] = aiC<"m">(16729, 1853277110901166876L ^ var1);
      var10004[aiC<"m">(29448, 6762510782359757159L ^ var1)] = aiC<"m">(23165, 6918622120409843761L ^ var1);
      var10004[aiC<"m">(25943, 243100755221051140L ^ var1)] = aiC<"m">(14662, 3960183051196017456L ^ var1);
      var10004[aiC<"m">(16766, 4802670517533692729L ^ var1)] = aiC<"m">(8279, 198027720709747223L ^ var1);
      var10004[aiC<"m">(12606, 2596822422361776988L ^ var1)] = aiC<"m">(16729, 1853277110901166876L ^ var1);
      var10004[aiC<"m">(13197, 6356284899430867374L ^ var1)] = aiC<"m">(13405, 7382846669027976743L ^ var1);
      var10004[aiC<"m">(7841, 2812285629833088239L ^ var1)] = aiC<"m">(1635, 3438452968416023639L ^ var1);
      this.OHUtJ = new cu(var9, mr.clS(var10004));
      ct var10 = this.bcjCz;
      var10004 = new int[aiC<"m">(17868, 1441515751221057450L ^ var1)];
      var10004[0] = aiC<"m">(8279, 198027720709747223L ^ var1);
      var10004[1] = aiC<"m">(31521, 3010685315422644601L ^ var1);
      var10004[2] = aiC<"m">(21208, 2454677174040248451L ^ var1);
      var10004[3] = aiC<"m">(14461, 4440128755886008900L ^ var1);
      var10004[4] = aiC<"m">(20305, 5148552233579437361L ^ var1);
      var10004[5] = aiC<"m">(16729, 1853277110901166876L ^ var1);
      var10004[aiC<"m">(29448, 6762510782359757159L ^ var1)] = aiC<"m">(13405, 7382846669027976743L ^ var1);
      var10004[aiC<"m">(25943, 243100755221051140L ^ var1)] = aiC<"m">(1635, 3438452968416023639L ^ var1);
      var10004[aiC<"m">(16766, 4802670517533692729L ^ var1)] = aiC<"m">(14662, 3960183051196017456L ^ var1);
      var10004[aiC<"m">(12606, 2596822422361776988L ^ var1)] = aiC<"m">(2099, 2318751331635599899L ^ var1);
      var10004[aiC<"m">(13197, 6356284899430867374L ^ var1)] = aiC<"m">(20305, 5148552233579437361L ^ var1);
      var10004[aiC<"m">(7841, 2812285629833088239L ^ var1)] = aiC<"m">(6109, 8150750954663020015L ^ var1);
      var10004[aiC<"m">(27723, 4920861369126190640L ^ var1)] = aiC<"m">(23165, 6918622120409843761L ^ var1);
      this.bgoRN = new cu(var10, mr.clS(var10004));
      var10004 = new int[aiC<"m">(20409, 7058564251409046913L ^ var1)];
      var10004[0] = aiC<"m">(21968, 5758048516864329613L ^ var1);
      var10004[1] = aiC<"m">(27862, 4889938894575599275L ^ var1);
      var10004[2] = aiC<"m">(31521, 3010685315422644601L ^ var1);
      var10004[3] = aiC<"m">(1635, 3438452968416023639L ^ var1);
      var10004[4] = aiC<"m">(20305, 5148552233579437361L ^ var1);
      var10004[5] = aiC<"m">(5073, 3793594838103785966L ^ var1);
      var10004[aiC<"m">(29448, 6762510782359757159L ^ var1)] = aiC<"m">(14662, 3960183051196017456L ^ var1);
      var10004[aiC<"m">(25943, 243100755221051140L ^ var1)] = aiC<"m">(8279, 198027720709747223L ^ var1);
      var10004[aiC<"m">(16766, 4802670517533692729L ^ var1)] = aiC<"m">(16729, 1853277110901166876L ^ var1);
      var10004[aiC<"m">(12606, 2596822422361776988L ^ var1)] = aiC<"m">(13405, 7382846669027976743L ^ var1);
      var10004[aiC<"m">(13197, 6356284899430867374L ^ var1)] = aiC<"m">(1635, 3438452968416023639L ^ var1);
      var10004[aiC<"m">(7841, 2812285629833088239L ^ var1)] = aiC<"m">(14662, 3960183051196017456L ^ var1);
      var10004[aiC<"m">(27723, 4920861369126190640L ^ var1)] = aiC<"m">(10375, 2431882603324258985L ^ var1);
      var10004[aiC<"m">(17868, 1441515751221057450L ^ var1)] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[aiC<"m">(21645, 8363687403158849243L ^ var1)] = aiC<"m">(6109, 8150750954663020015L ^ var1);
      var10004[aiC<"m">(11235, 75029796460444063L ^ var1)] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[aiC<"m">(30405, 8095657945462367418L ^ var1)] = aiC<"m">(27862, 4889938894575599275L ^ var1);
      this.MAUHJ = new cG(this, mr.clS(var10004)).Uc(mG.cnP(75.0F, 191.0F, 74.0F).coh());
      var10004 = new int[aiC<"m">(30405, 8095657945462367418L ^ var1)];
      var10004[0] = aiC<"m">(1494, 8200252090324227986L ^ var1);
      var10004[1] = aiC<"m">(3379, 2536796889868607306L ^ var1);
      var10004[2] = aiC<"m">(29466, 7530092784091848999L ^ var1);
      var10004[3] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[4] = aiC<"m">(27862, 4889938894575599275L ^ var1);
      var10004[5] = aiC<"m">(24628, 7355418042789818901L ^ var1);
      var10004[aiC<"m">(29448, 6762510782359757159L ^ var1)] = aiC<"m">(9828, 9201516857169785903L ^ var1);
      var10004[aiC<"m">(25943, 243100755221051140L ^ var1)] = aiC<"m">(31521, 3010685315422644601L ^ var1);
      var10004[aiC<"m">(16766, 4802670517533692729L ^ var1)] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[aiC<"m">(12606, 2596822422361776988L ^ var1)] = aiC<"m">(20305, 5148552233579437361L ^ var1);
      var10004[aiC<"m">(13197, 6356284899430867374L ^ var1)] = aiC<"m">(14662, 3960183051196017456L ^ var1);
      var10004[aiC<"m">(7841, 2812285629833088239L ^ var1)] = aiC<"m">(10375, 2431882603324258985L ^ var1);
      var10004[aiC<"m">(27723, 4920861369126190640L ^ var1)] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[aiC<"m">(17868, 1441515751221057450L ^ var1)] = aiC<"m">(6109, 8150750954663020015L ^ var1);
      var10004[aiC<"m">(21645, 8363687403158849243L ^ var1)] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[aiC<"m">(11235, 75029796460444063L ^ var1)] = aiC<"m">(27862, 4889938894575599275L ^ var1);
      this.JdaIF = new cG(this, mr.clS(var10004)).Uc(mG.cnP(255.0F, 196.0F, 76.0F).coh());
      var10004 = new int[aiC<"m">(21645, 8363687403158849243L ^ var1)];
      var10004[0] = aiC<"m">(20604, 2216044960590643761L ^ var1);
      var10004[1] = aiC<"m">(31521, 3010685315422644601L ^ var1);
      var10004[2] = aiC<"m">(29466, 7530092784091848999L ^ var1);
      var10004[3] = aiC<"m">(9828, 9201516857169785903L ^ var1);
      var10004[4] = aiC<"m">(16729, 1853277110901166876L ^ var1);
      var10004[5] = aiC<"m">(20305, 5148552233579437361L ^ var1);
      var10004[aiC<"m">(29448, 6762510782359757159L ^ var1)] = aiC<"m">(21208, 2454677174040248451L ^ var1);
      var10004[aiC<"m">(25943, 243100755221051140L ^ var1)] = aiC<"m">(1635, 3438452968416023639L ^ var1);
      var10004[aiC<"m">(16766, 4802670517533692729L ^ var1)] = aiC<"m">(14662, 3960183051196017456L ^ var1);
      var10004[aiC<"m">(12606, 2596822422361776988L ^ var1)] = aiC<"m">(10375, 2431882603324258985L ^ var1);
      var10004[aiC<"m">(13197, 6356284899430867374L ^ var1)] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[aiC<"m">(7841, 2812285629833088239L ^ var1)] = aiC<"m">(6109, 8150750954663020015L ^ var1);
      var10004[aiC<"m">(27723, 4920861369126190640L ^ var1)] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[aiC<"m">(17868, 1441515751221057450L ^ var1)] = aiC<"m">(27862, 4889938894575599275L ^ var1);
      this.lFuNf = new cG(this, mr.clS(var10004)).Uc(mG.cnP(150.0F, 157.0F, 153.0F).coh());
      var10004 = new int[aiC<"m">(13197, 6356284899430867374L ^ var1)];
      var10004[0] = aiC<"m">(20519, 932682815050760821L ^ var1);
      var10004[1] = aiC<"m">(31521, 3010685315422644601L ^ var1);
      var10004[2] = aiC<"m">(20305, 5148552233579437361L ^ var1);
      var10004[3] = aiC<"m">(6476, 4663360880004434704L ^ var1);
      var10004[4] = aiC<"m">(14662, 3960183051196017456L ^ var1);
      var10004[5] = aiC<"m">(10375, 2431882603324258985L ^ var1);
      var10004[aiC<"m">(29448, 6762510782359757159L ^ var1)] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[aiC<"m">(25943, 243100755221051140L ^ var1)] = aiC<"m">(6109, 8150750954663020015L ^ var1);
      var10004[aiC<"m">(16766, 4802670517533692729L ^ var1)] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[aiC<"m">(12606, 2596822422361776988L ^ var1)] = aiC<"m">(27862, 4889938894575599275L ^ var1);
      this.BmdVM = new cG(this, mr.clS(var10004)).Uc(-1);
      var10004 = new int[aiC<"m">(27723, 4920861369126190640L ^ var1)];
      var10004[0] = aiC<"m">(29142, 1895718318049256355L ^ var1);
      var10004[1] = aiC<"m">(1635, 3438452968416023639L ^ var1);
      var10004[2] = aiC<"m">(16729, 1853277110901166876L ^ var1);
      var10004[3] = aiC<"m">(6109, 8150750954663020015L ^ var1);
      var10004[4] = aiC<"m">(9828, 9201516857169785903L ^ var1);
      var10004[5] = aiC<"m">(30244, 7704066433493197848L ^ var1);
      var10004[aiC<"m">(29448, 6762510782359757159L ^ var1)] = aiC<"m">(14662, 3960183051196017456L ^ var1);
      var10004[aiC<"m">(25943, 243100755221051140L ^ var1)] = aiC<"m">(10375, 2431882603324258985L ^ var1);
      var10004[aiC<"m">(16766, 4802670517533692729L ^ var1)] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[aiC<"m">(12606, 2596822422361776988L ^ var1)] = aiC<"m">(6109, 8150750954663020015L ^ var1);
      var10004[aiC<"m">(13197, 6356284899430867374L ^ var1)] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[aiC<"m">(7841, 2812285629833088239L ^ var1)] = aiC<"m">(27862, 4889938894575599275L ^ var1);
      this.bocCI = new cG(this, mr.clS(var10004)).Uc(-1);
      var10004 = new int[aiC<"m">(7841, 2812285629833088239L ^ var1)];
      var10004[0] = aiC<"m">(29685, 586717885344965058L ^ var1);
      var10004[1] = aiC<"m">(27862, 4889938894575599275L ^ var1);
      var10004[2] = aiC<"m">(15161, 4025631243127793935L ^ var1);
      var10004[3] = aiC<"m">(4928, 4832380012311970160L ^ var1);
      var10004[4] = aiC<"m">(24628, 7355418042789818901L ^ var1);
      var10004[5] = aiC<"m">(14662, 3960183051196017456L ^ var1);
      var10004[aiC<"m">(29448, 6762510782359757159L ^ var1)] = aiC<"m">(4117, 7803483404003017343L ^ var1);
      var10004[aiC<"m">(25943, 243100755221051140L ^ var1)] = aiC<"m">(9828, 9201516857169785903L ^ var1);
      var10004[aiC<"m">(16766, 4802670517533692729L ^ var1)] = aiC<"m">(1635, 3438452968416023639L ^ var1);
      var10004[aiC<"m">(12606, 2596822422361776988L ^ var1)] = aiC<"m">(13405, 7382846669027976743L ^ var1);
      var10004[aiC<"m">(13197, 6356284899430867374L ^ var1)] = aiC<"m">(29466, 7530092784091848999L ^ var1);
      this.KjFun = new cJ(this, mr.clS(var10004)).WE(true);
      this.uxHfK.Vf(this.VPgLm::TC);
      this.KjFun.Vf(this.VPgLm::TC);
   }

   static {
      long var11 = JzNel ^ 27712951068966L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[4];
      int var18 = 0;
      String var17 = "¯^\\®\bÊ\u0080õ\u0092jà\u0003] úû\u0010GÀv\u0004\u0010\u0012÷q\u0001ñz><Òô3";
      int var19 = "¯^\\®\bÊ\u0080õ\u0092jà\u0003] úû\u0010GÀv\u0004\u0010\u0012÷q\u0001ñz><Òô3".length();
      char var16 = 16;
      int var24 = -1;

      label54:
      while (true) {
         String var25 = var17.substring(++var24, var24 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = aiw(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var36;
                  if ((var24 += var16) >= var19) {
                     LQnFM = var20;
                     yCgSU = new String[4];
                     JRvoE = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[92];
                     int var3 = 0;
                     String var4 = "â\u0095\u001b6s \u0096n\u000fjW#\u00ad¾#ÞÉ¨\u000f\rÈÅgèÿ\u008f`e\u0011W5\u0080\u0013ù\"Ý¬ýå\u0085\u0093ú\u009ajÂ§8\u0085g\u00adM<\u0018VSN\u0089 \u0082\u0010rõOø\u0085\u008e¼\u00adm\u009eï\b\u0006nÐRn\u008eùk°F\u0004\u0006\u009d¯N\u0012\u0004¤ùc[GN1!«Ò@ÁÇµÁo»\u009að\u001eU\u0099æÑÞ \r\u001fU\f\u0000X» \u0097Ð\u0089\f\u0010\u008a\u000eÊmoÉØ@>\u0011É©\u0019\t`\u008aÜÞ\u00136\u0000ª\u0002¢\u009fhN\u009f¯t\u0095£ÃT=ý\u0011\u0087½(cç£Ozý5ð\u0011NÂ\u008f2\u009e½&\u0090ñÇD\u0095NHM½\u009fÅ×áØ\u001b\u008b|7F\u008dÓ/µ\u0001\u0014Þ\u0005Ê¥m\u0004\u0099»\u0098\u001d\u0099\u0083©ÓPZ íþ\u001a\u0095ø\u0092\u008ewNë·îEk±\u0010(d+9\u00adáÊÕáxÄöA2\u0082\"óG7\u0017ñM\u0099.\u009c92ñØ\u0001ÔR\u009f=Á\u0089fSX];ÇÌÖÓ\u000fíÔé\u008a:\u0082<Z\u001e\u0003\"\f§¯ ÙYà\r\u007fj×¼TTºS\u0081çz*\u0084Ðçðw\u0085Ñ\u008fZ[áiÇYq\\I'\u0093-vz´÷d\u0080\u0002céÎ¯ùA#\u0090óç\u0084\u0097/Ä\u007f\u001em¼\n\u0012\u009c\\1É\u008a=\u000fü\u000e\u009dÊ\u008dÂÍ>òó¨_!ª\u0082\u009caP\u0099Á½Ü«\u0019\u0003JÄsZ\u0015×\u009cd\u0087ÎÄÆdáA\u001f\u0007Ó»fÆ\u0094Ugõ=Ë\u0019øF:Ü\r\u0006>\u0001j\u0095aÏâ\u0018F\u008bñ[s¿]D Eûë\u0007qýàíûç\u0097\u0006\n\u0095\u0094]8\u0082\u0080GÚé$tWPüÔß°\u001fýìí?\u0088¬\"\u008cþ81,«\u0090\u0087O±&nË=:¯\u0011\u0013Ì6 \u008eF(ó\u008b\u0005Âºð¯òËÌµ¶igÓµ¿S&\u001d£j\u0096óÏ\u001f\u009fØÄ\u008dérîlµÜ_¹¯\u001e\u009eA¢l'l¾?!Uþª\u001bP7\u0087lËûN¶\u0002G$t\u0092umé\u009dë\r\b\u0005 \u0094d\u009e\u0085¿ªÚ\u00840¦°\u0080=\u0088E¼}\u0098\u0084\bcK\u009cm@\u001b²Ü%¸]=ø\u0082¨Ä8s\bÕ\u009e~=C.¯\u008cöo8\n\u00adáÛ\u00167Fä4ÔrOÈ\"×\u0019\u008b¾\u0019\u008e \u0088b¥\u008a¸{ß`Ç!r=·Ï\u008as÷é\u009c\u001b2Xë\u0014Bî\u007f|Ô/ã(0)ûuÆ«¢ÁJzZÏs\u0004Ûþ-½\u0019Ã1ÆÕâG\nP¢Tº¨";
                     int var5 = "â\u0095\u001b6s \u0096n\u000fjW#\u00ad¾#ÞÉ¨\u000f\rÈÅgèÿ\u008f`e\u0011W5\u0080\u0013ù\"Ý¬ýå\u0085\u0093ú\u009ajÂ§8\u0085g\u00adM<\u0018VSN\u0089 \u0082\u0010rõOø\u0085\u008e¼\u00adm\u009eï\b\u0006nÐRn\u008eùk°F\u0004\u0006\u009d¯N\u0012\u0004¤ùc[GN1!«Ò@ÁÇµÁo»\u009að\u001eU\u0099æÑÞ \r\u001fU\f\u0000X» \u0097Ð\u0089\f\u0010\u008a\u000eÊmoÉØ@>\u0011É©\u0019\t`\u008aÜÞ\u00136\u0000ª\u0002¢\u009fhN\u009f¯t\u0095£ÃT=ý\u0011\u0087½(cç£Ozý5ð\u0011NÂ\u008f2\u009e½&\u0090ñÇD\u0095NHM½\u009fÅ×áØ\u001b\u008b|7F\u008dÓ/µ\u0001\u0014Þ\u0005Ê¥m\u0004\u0099»\u0098\u001d\u0099\u0083©ÓPZ íþ\u001a\u0095ø\u0092\u008ewNë·îEk±\u0010(d+9\u00adáÊÕáxÄöA2\u0082\"óG7\u0017ñM\u0099.\u009c92ñØ\u0001ÔR\u009f=Á\u0089fSX];ÇÌÖÓ\u000fíÔé\u008a:\u0082<Z\u001e\u0003\"\f§¯ ÙYà\r\u007fj×¼TTºS\u0081çz*\u0084Ðçðw\u0085Ñ\u008fZ[áiÇYq\\I'\u0093-vz´÷d\u0080\u0002céÎ¯ùA#\u0090óç\u0084\u0097/Ä\u007f\u001em¼\n\u0012\u009c\\1É\u008a=\u000fü\u000e\u009dÊ\u008dÂÍ>òó¨_!ª\u0082\u009caP\u0099Á½Ü«\u0019\u0003JÄsZ\u0015×\u009cd\u0087ÎÄÆdáA\u001f\u0007Ó»fÆ\u0094Ugõ=Ë\u0019øF:Ü\r\u0006>\u0001j\u0095aÏâ\u0018F\u008bñ[s¿]D Eûë\u0007qýàíûç\u0097\u0006\n\u0095\u0094]8\u0082\u0080GÚé$tWPüÔß°\u001fýìí?\u0088¬\"\u008cþ81,«\u0090\u0087O±&nË=:¯\u0011\u0013Ì6 \u008eF(ó\u008b\u0005Âºð¯òËÌµ¶igÓµ¿S&\u001d£j\u0096óÏ\u001f\u009fØÄ\u008dérîlµÜ_¹¯\u001e\u009eA¢l'l¾?!Uþª\u001bP7\u0087lËûN¶\u0002G$t\u0092umé\u009dë\r\b\u0005 \u0094d\u009e\u0085¿ªÚ\u00840¦°\u0080=\u0088E¼}\u0098\u0084\bcK\u009cm@\u001b²Ü%¸]=ø\u0082¨Ä8s\bÕ\u009e~=C.¯\u008cöo8\n\u00adáÛ\u00167Fä4ÔrOÈ\"×\u0019\u008b¾\u0019\u008e \u0088b¥\u008a¸{ß`Ç!r=·Ï\u008as÷é\u009c\u001b2Xë\u0014Bî\u007f|Ô/ã(0)ûuÆ«¢ÁJzZÏs\u0004Ûþ-½\u0019Ã1ÆÕâG\nP¢Tº¨"
                        .length();
                     byte var2 = 0;

                     label36:
                     while (true) {
                        var10001 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
                        long[] var28 = var6;
                        var10001 = var3++;
                        long var40 = (var7[0] & 255L) << 56
                           | (var7[1] & 255L) << 48
                           | (var7[2] & 255L) << 40
                           | (var7[3] & 255L) << 32
                           | (var7[4] & 255L) << 24
                           | (var7[5] & 255L) << 16
                           | (var7[6] & 255L) << 8
                           | var7[7] & 255L;
                        byte var43 = -1;

                        while (true) {
                           long var8 = var40;
                           byte[] var10 = var0.doFinal(
                              new byte[]{
                                 (byte)(var8 >>> 56),
                                 (byte)(var8 >>> 48),
                                 (byte)(var8 >>> 40),
                                 (byte)(var8 >>> 32),
                                 (byte)(var8 >>> 24),
                                 (byte)(var8 >>> 16),
                                 (byte)(var8 >>> 8),
                                 (byte)var8
                              }
                           );
                           long var45 = (var10[0] & 255L) << 56
                              | (var10[1] & 255L) << 48
                              | (var10[2] & 255L) << 40
                              | (var10[3] & 255L) << 32
                              | (var10[4] & 255L) << 24
                              | (var10[5] & 255L) << 16
                              | (var10[6] & 255L) << 8
                              | var10[7] & 255L;
                           switch (var43) {
                              case 0:
                                 var28[var10001] = var45;
                                 if (var2 >= var5) {
                                    BYKvc = var6;
                                    WeGki = new Integer[92];
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "@»·)d 0ÚÑ\u0087\u0095\få<¬u";
                                 var5 = "@»·)d 0ÚÑ\u0087\u0095\få<¬u".length();
                                 var2 = 0;
                           }

                           byte var34 = var2;
                           var2 += 8;
                           var7 = var4.substring(var34, var2).getBytes("ISO-8859-1");
                           var28 = var6;
                           var10001 = var3++;
                           var40 = (var7[0] & 255L) << 56
                              | (var7[1] & 255L) << 48
                              | (var7[2] & 255L) << 40
                              | (var7[3] & 255L) << 32
                              | (var7[4] & 255L) << 24
                              | (var7[5] & 255L) << 16
                              | (var7[6] & 255L) << 8
                              | var7[7] & 255L;
                           var43 = 0;
                        }
                     }
                  }

                  var16 = var17.charAt(var24);
                  break;
               default:
                  var20[var18++] = var36;
                  if ((var24 += var16) < var19) {
                     var16 = var17.charAt(var24);
                     continue label54;
                  }

                  var17 = "Pt\u001e\u008c¢£\u008eÀ\u0013w\u00837Þ\u000e·$\u0010qèÃ#&½Í3b\u0000hDæg\u0083\u008a";
                  var19 = "Pt\u001e\u008c¢£\u008eÀ\u0013w\u00837Þ\u000e·$\u0010qèÃ#&½Í3b\u0000hDæg\u0083\u008a".length();
                  var16 = 16;
                  var24 = -1;
            }

            var25 = var17.substring(++var24, var24 + var16);
            var10001 = 0;
         }
      }
   }

   private void ais(List<class_1542> param1, lC param2, float param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dt.JzNel J
      // 003: ldc2_w 25939750314460
      // 006: lxor
      // 007: lstore 4
      // 009: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00c: aload 0
      // 00d: aload 1
      // 00e: bipush 0
      // 00f: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 014: checkcast net/minecraft/class_1297
      // 017: fload 3
      // 018: invokevirtual sixtwo/dt.ait (Lnet/minecraft/class_1297;F)Ljava/util/Optional;
      // 01b: astore 7
      // 01d: astore 6
      // 01f: aload 7
      // 021: aload 6
      // 023: ifnonnull 03d
      // 026: invokevirtual java/util/Optional.isEmpty ()Z
      // 029: ifeq 038
      // 02c: goto 033
      // 02f: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 032: athrow
      // 033: return
      // 034: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 037: athrow
      // 038: aload 7
      // 03a: invokevirtual java/util/Optional.get ()Ljava/lang/Object;
      // 03d: checkcast org/joml/Vector4d
      // 040: astore 8
      // 042: aload 8
      // 044: getfield org/joml/Vector4d.x D
      // 047: d2f
      // 048: fstore 9
      // 04a: aload 8
      // 04c: getfield org/joml/Vector4d.y D
      // 04f: d2f
      // 050: fstore 10
      // 052: getstatic sixtwo/lE.WTzbi Lsixtwo/lj;
      // 055: ldc_w 6.0
      // 058: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 05b: astore 11
      // 05d: bipush 3
      // 05e: istore 12
      // 060: bipush 3
      // 061: istore 13
      // 063: bipush 2
      // 064: istore 14
      // 066: aload 1
      // 067: invokeinterface java/util/List.stream ()Ljava/util/stream/Stream; 1
      // 06c: invokedynamic apply ()Ljava/util/function/Function; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Ljava/lang/Object;, sixtwo/dt.aiu (Lnet/minecraft/class_1542;)Ljava/lang/String;, (Lnet/minecraft/class_1542;)Ljava/lang/String; ]
      // 071: invokeinterface java/util/stream/Stream.map (Ljava/util/function/Function;)Ljava/util/stream/Stream; 2
      // 076: invokeinterface java/util/stream/Stream.toList ()Ljava/util/List; 1
      // 07b: astore 15
      // 07d: aload 15
      // 07f: invokeinterface java/util/List.stream ()Ljava/util/stream/Stream; 1
      // 084: aload 11
      // 086: dup
      // 087: invokestatic java/util/Objects.requireNonNull (Ljava/lang/Object;)Ljava/lang/Object;
      // 08a: pop
      // 08b: invokedynamic applyAsDouble (Lsixtwo/lq;)Ljava/util/function/ToDoubleFunction; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)D, sixtwo/lq.cao (Ljava/lang/String;)F, (Ljava/lang/String;)D ]
      // 090: invokeinterface java/util/stream/Stream.mapToDouble (Ljava/util/function/ToDoubleFunction;)Ljava/util/stream/DoubleStream; 2
      // 095: invokeinterface java/util/stream/DoubleStream.max ()Ljava/util/OptionalDouble; 1
      // 09a: dconst_0
      // 09b: invokevirtual java/util/OptionalDouble.orElse (D)D
      // 09e: d2f
      // 09f: fstore 16
      // 0a1: aload 11
      // 0a3: invokevirtual sixtwo/lq.cat ()F
      // 0a6: fstore 17
      // 0a8: fload 16
      // 0aa: iload 12
      // 0ac: bipush 2
      // 0ad: imul
      // 0ae: i2f
      // 0af: fadd
      // 0b0: fstore 18
      // 0b2: fload 9
      // 0b4: fload 18
      // 0b6: fconst_2
      // 0b7: fdiv
      // 0b8: fsub
      // 0b9: fstore 19
      // 0bb: aload 15
      // 0bd: invokeinterface java/util/List.size ()I 1
      // 0c2: i2f
      // 0c3: fload 17
      // 0c5: fmul
      // 0c6: bipush 0
      // 0c7: aload 15
      // 0c9: invokeinterface java/util/List.size ()I 1
      // 0ce: bipush 1
      // 0cf: isub
      // 0d0: invokestatic java/lang/Math.max (II)I
      // 0d3: iload 14
      // 0d5: imul
      // 0d6: i2f
      // 0d7: fadd
      // 0d8: fstore 20
      // 0da: fload 20
      // 0dc: iload 13
      // 0de: bipush 2
      // 0df: imul
      // 0e0: i2f
      // 0e1: fadd
      // 0e2: fstore 21
      // 0e4: aload 0
      // 0e5: getfield sixtwo/dt.wRBRi Lsixtwo/cG;
      // 0e8: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 0eb: astore 22
      // 0ed: aload 2
      // 0ee: fload 19
      // 0f0: fload 10
      // 0f2: fload 18
      // 0f4: fload 21
      // 0f6: ldc_w 3.0
      // 0f9: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 0fc: aload 22
      // 0fe: invokevirtual sixtwo/lC.cdg (FFFFLsixtwo/ld;Lsixtwo/mG;)V
      // 101: fload 10
      // 103: fload 20
      // 105: fload 21
      // 107: invokestatic sixtwo/jf.bAH (FF)F
      // 10a: fadd
      // 10b: fstore 23
      // 10d: aload 15
      // 10f: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 114: astore 24
      // 116: aload 24
      // 118: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 11d: ifeq 160
      // 120: aload 24
      // 122: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 127: checkcast java/lang/String
      // 12a: astore 25
      // 12c: fload 19
      // 12e: aload 11
      // 130: aload 25
      // 132: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 135: fload 18
      // 137: invokestatic sixtwo/jf.bAH (FF)F
      // 13a: fadd
      // 13b: fstore 26
      // 13d: aload 2
      // 13e: aload 11
      // 140: aload 25
      // 142: fload 26
      // 144: fload 23
      // 146: aload 0
      // 147: getfield sixtwo/dt.uxHfK Lsixtwo/cG;
      // 14a: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 14d: invokevirtual sixtwo/lC.cer (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 150: fload 23
      // 152: fload 17
      // 154: iload 14
      // 156: i2f
      // 157: fadd
      // 158: fadd
      // 159: fstore 23
      // 15b: aload 6
      // 15d: ifnull 116
      // 160: return
   }

   @hG
   public void aim(gk param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dt.JzNel J
      // 003: ldc2_w 21065720448340
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/dt.bab ()Z
      // 011: ifne 019
      // 014: return
      // 015: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 018: athrow
      // 019: aload 1
      // 01a: invokevirtual sixtwo/gk.baT ()Lsixtwo/lC;
      // 01d: astore 5
      // 01f: aload 5
      // 021: invokevirtual sixtwo/lC.cfh ()F
      // 024: fstore 6
      // 026: invokestatic sixtwo/rD.dlJ ()Lsixtwo/ge;
      // 029: ldc_w sixtwo/fS
      // 02c: invokevirtual sixtwo/ge.aZx (Ljava/lang/Class;)Lsixtwo/gg;
      // 02f: checkcast sixtwo/fS
      // 032: astore 7
      // 034: getstatic sixtwo/lE.WTzbi Lsixtwo/lj;
      // 037: ldc_w 6.0
      // 03a: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 03d: astore 8
      // 03f: getstatic sixtwo/dt.zXCXX Lsixtwo/kJ;
      // 042: aload 8
      // 044: invokevirtual sixtwo/kJ.bUa (Lsixtwo/lq;)V
      // 047: new java/util/ArrayList
      // 04a: dup
      // 04b: invokespecial java/util/ArrayList.<init> ()V
      // 04e: astore 9
      // 050: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 053: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 056: invokevirtual net/minecraft/class_638.method_18112 ()Ljava/lang/Iterable;
      // 059: invokeinterface java/lang/Iterable.iterator ()Ljava/util/Iterator; 1
      // 05e: astore 10
      // 060: aload 10
      // 062: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 067: ifeq 1e8
      // 06a: aload 10
      // 06c: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 071: checkcast net/minecraft/class_1297
      // 074: astore 11
      // 076: aload 11
      // 078: aload 4
      // 07a: ifnonnull 202
      // 07d: aload 4
      // 07f: ifnonnull 0a7
      // 082: goto 089
      // 085: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 088: athrow
      // 089: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 08c: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 08f: if_acmpne 0a5
      // 092: goto 099
      // 095: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 098: athrow
      // 099: aload 4
      // 09b: ifnull 060
      // 09e: goto 0a5
      // 0a1: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a4: athrow
      // 0a5: aload 11
      // 0a7: instanceof net/minecraft/class_1657
      // 0aa: aload 4
      // 0ac: ifnonnull 106
      // 0af: ifeq 0ee
      // 0b2: goto 0b9
      // 0b5: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b8: athrow
      // 0b9: aload 11
      // 0bb: checkcast net/minecraft/class_1657
      // 0be: astore 12
      // 0c0: aload 0
      // 0c1: aload 4
      // 0c3: ifnonnull 0de
      // 0c6: getfield sixtwo/dt.jtzDi Lsixtwo/cw;
      // 0c9: invokevirtual sixtwo/cw.TC ()Z
      // 0cc: ifeq 1e3
      // 0cf: goto 0d6
      // 0d2: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d5: athrow
      // 0d6: aload 0
      // 0d7: goto 0de
      // 0da: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0dd: athrow
      // 0de: aload 12
      // 0e0: aload 5
      // 0e2: aload 7
      // 0e4: fload 6
      // 0e6: invokevirtual sixtwo/dt.ain (Lnet/minecraft/class_1657;Lsixtwo/lC;Lsixtwo/fS;F)V
      // 0e9: aload 4
      // 0eb: ifnull 1e3
      // 0ee: aload 11
      // 0f0: aload 4
      // 0f2: ifnonnull 10b
      // 0f5: goto 0fc
      // 0f8: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0fb: athrow
      // 0fc: instanceof net/minecraft/class_1542
      // 0ff: goto 106
      // 102: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 105: athrow
      // 106: ifeq 1e3
      // 109: aload 11
      // 10b: checkcast net/minecraft/class_1542
      // 10e: astore 13
      // 110: aload 0
      // 111: getfield sixtwo/dt.VPgLm Lsixtwo/cw;
      // 114: invokevirtual sixtwo/cw.TC ()Z
      // 117: aload 4
      // 119: ifnonnull 133
      // 11c: ifne 132
      // 11f: goto 126
      // 122: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 125: athrow
      // 126: aload 4
      // 128: ifnull 060
      // 12b: goto 132
      // 12e: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 131: athrow
      // 132: bipush 0
      // 133: istore 14
      // 135: aload 0
      // 136: getfield sixtwo/dt.KjFun Lsixtwo/cJ;
      // 139: invokevirtual sixtwo/cJ.WF ()Z
      // 13c: aload 4
      // 13e: ifnonnull 1c3
      // 141: ifeq 1c1
      // 144: goto 14b
      // 147: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14a: athrow
      // 14b: aload 9
      // 14d: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 152: astore 15
      // 154: aload 15
      // 156: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 15b: ifeq 1c1
      // 15e: aload 15
      // 160: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 165: checkcast java/util/List
      // 168: astore 16
      // 16a: aload 16
      // 16c: invokeinterface java/util/List.getFirst ()Ljava/lang/Object; 1
      // 171: checkcast net/minecraft/class_1542
      // 174: astore 17
      // 176: aload 17
      // 178: aload 13
      // 17a: invokevirtual net/minecraft/class_1542.method_5739 (Lnet/minecraft/class_1297;)F
      // 17d: ldc_w 5.0
      // 180: fcmpg
      // 181: aload 4
      // 183: ifnonnull 1c3
      // 186: aload 4
      // 188: ifnonnull 1ae
      // 18b: goto 192
      // 18e: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 191: athrow
      // 192: ifgt 1b5
      // 195: goto 19c
      // 198: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 19b: athrow
      // 19c: aload 16
      // 19e: aload 13
      // 1a0: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 1a5: pop
      // 1a6: bipush 1
      // 1a7: goto 1ae
      // 1aa: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1ad: athrow
      // 1ae: istore 14
      // 1b0: aload 4
      // 1b2: ifnull 1c1
      // 1b5: aload 4
      // 1b7: ifnull 154
      // 1ba: goto 1c1
      // 1bd: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c0: athrow
      // 1c1: iload 14
      // 1c3: ifne 1e3
      // 1c6: new java/util/ArrayList
      // 1c9: dup
      // 1ca: invokespecial java/util/ArrayList.<init> ()V
      // 1cd: astore 15
      // 1cf: aload 15
      // 1d1: aload 13
      // 1d3: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 1d8: pop
      // 1d9: aload 9
      // 1db: aload 15
      // 1dd: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 1e2: pop
      // 1e3: aload 4
      // 1e5: ifnull 060
      // 1e8: aload 9
      // 1ea: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 1ef: astore 10
      // 1f1: aload 10
      // 1f3: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 1f8: ifeq 25e
      // 1fb: aload 10
      // 1fd: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 202: checkcast java/util/List
      // 205: astore 11
      // 207: aload 4
      // 209: ifnonnull 264
      // 20c: aload 4
      // 20e: ifnonnull 243
      // 211: goto 218
      // 214: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 217: athrow
      // 218: aload 11
      // 21a: invokeinterface java/util/List.size ()I 1
      // 21f: bipush 1
      // 220: if_icmpne 248
      // 223: goto 22a
      // 226: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 229: athrow
      // 22a: aload 0
      // 22b: aload 11
      // 22d: invokeinterface java/util/List.getFirst ()Ljava/lang/Object; 1
      // 232: checkcast net/minecraft/class_1542
      // 235: aload 5
      // 237: fload 6
      // 239: invokevirtual sixtwo/dt.air (Lnet/minecraft/class_1542;Lsixtwo/lC;F)V
      // 23c: goto 243
      // 23f: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 242: athrow
      // 243: aload 4
      // 245: ifnull 259
      // 248: aload 0
      // 249: aload 11
      // 24b: aload 5
      // 24d: fload 6
      // 24f: invokevirtual sixtwo/dt.ais (Ljava/util/List;Lsixtwo/lC;F)V
      // 252: goto 259
      // 255: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 258: athrow
      // 259: aload 4
      // 25b: ifnull 1f1
      // 25e: getstatic sixtwo/dt.zXCXX Lsixtwo/kJ;
      // 261: invokevirtual sixtwo/kJ.endBatch ()V
      // 264: return
   }

   private void air(class_1542 var1, lC var2, float var3) {
      long var4 = JzNel ^ 42079129611243L;
      Optional var6 = this.ait(var1, var3);

      try {
         if (var6.isEmpty()) {
            return;
         }
      } catch (MatchException var19) {
         throw aiv(var19);
      }

      mG var7 = this.wRBRi.Wf();
      Vector4d var8 = (Vector4d)var6.get();
      lq var9 = lE.WTzbi.bYM(6.0F);
      String var10 = var1.method_5477().getString() + aiz<"j">(678, 5776188630678981118L ^ var4) + var1.method_6983().method_7947();
      float var11 = var9.cao(var10);
      float var12 = var9.cat();
      float var13 = var11 + 6.0F;
      float var14 = var12 + 4.0F;
      float var15 = (float)var8.x - var13 / 2.0F;
      float var16 = (float)var8.y;
      float var17 = var15 + jf.bAH(var11, var13);
      float var18 = var16 + jf.bAH(var12, var14);
      var2.cdg(var15, var16, var13, var14, ld.all(3.0F), var7);
      var2.cer(var9, var10, var17, var18, this.uxHfK.Wf());
   }

   private static String aix(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 18392;
      if (yCgSU[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])bUAHN.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               bUAHN.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/dt", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = LQnFM[var5].getBytes("ISO-8859-1");
         yCgSU[var5] = aiw(((Cipher)var4[0]).doFinal(var9));
      }

      return yCgSU[var5];
   }

   private void aiq(lC param1, class_1657 param2, lq param3, float param4, float param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dt.JzNel J
      // 003: ldc2_w 69948699177702
      // 006: lxor
      // 007: lstore 6
      // 009: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00c: new java/util/ArrayList
      // 00f: dup
      // 010: aload 2
      // 011: invokevirtual net/minecraft/class_1657.method_6026 ()Ljava/util/Collection;
      // 014: invokespecial java/util/ArrayList.<init> (Ljava/util/Collection;)V
      // 017: astore 9
      // 019: astore 8
      // 01b: aload 9
      // 01d: aload 8
      // 01f: ifnonnull 053
      // 022: invokeinterface java/util/List.isEmpty ()Z 1
      // 027: ifeq 036
      // 02a: goto 031
      // 02d: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 030: athrow
      // 031: return
      // 032: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 035: athrow
      // 036: aload 9
      // 038: invokestatic java/util/Comparator.reverseOrder ()Ljava/util/Comparator;
      // 03b: invokeinterface java/util/List.sort (Ljava/util/Comparator;)V 2
      // 040: fload 4
      // 042: aload 9
      // 044: invokeinterface java/util/List.size ()I 1
      // 049: i2f
      // 04a: ldc_w 12.5
      // 04d: fmul
      // 04e: fadd
      // 04f: fstore 4
      // 051: aload 9
      // 053: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 058: astore 10
      // 05a: aload 10
      // 05c: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 061: ifeq 154
      // 064: aload 10
      // 066: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 06b: checkcast net/minecraft/class_1293
      // 06e: astore 11
      // 070: aload 11
      // 072: invokestatic sixtwo/ji.bCv (Lnet/minecraft/class_1293;)Ljava/lang/String;
      // 075: astore 12
      // 077: aload 12
      // 079: invokevirtual java/lang/String.isEmpty ()Z
      // 07c: aload 8
      // 07e: ifnonnull 09e
      // 081: ifne 05a
      // 084: goto 08b
      // 087: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08a: athrow
      // 08b: aload 12
      // 08d: sipush 9370
      // 090: ldc2_w 67442156644447950
      // 093: lload 6
      // 095: lxor
      // 096: invokedynamic j (IJ)Ljava/lang/String; bsm=sixtwo/dt.aiz (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 09b: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 09e: ifeq 0ad
      // 0a1: aload 8
      // 0a3: ifnull 05a
      // 0a6: goto 0ad
      // 0a9: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ac: athrow
      // 0ad: fload 4
      // 0af: ldc_w 25.0
      // 0b2: fsub
      // 0b3: fstore 4
      // 0b5: fload 4
      // 0b7: ldc_w 9.0
      // 0ba: fadd
      // 0bb: fstore 13
      // 0bd: fload 13
      // 0bf: ldc_w 5.0
      // 0c2: fsub
      // 0c3: fstore 14
      // 0c5: aload 1
      // 0c6: invokevirtual sixtwo/lC.ceV ()V
      // 0c9: aload 1
      // 0ca: fload 14
      // 0cc: fload 5
      // 0ce: invokevirtual sixtwo/lC.ceX (FF)V
      // 0d1: aload 11
      // 0d3: invokevirtual net/minecraft/class_1293.method_5579 ()Lnet/minecraft/class_6880;
      // 0d6: astore 15
      // 0d8: aload 15
      // 0da: invokestatic net/minecraft/class_329.method_71644 (Lnet/minecraft/class_6880;)Lnet/minecraft/class_2960;
      // 0dd: astore 16
      // 0df: aload 1
      // 0e0: invokevirtual sixtwo/lC.cfe ()Lnet/minecraft/class_332;
      // 0e3: getstatic net/minecraft/class_10799.field_56883 Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 0e6: aload 16
      // 0e8: bipush 0
      // 0e9: bipush 0
      // 0ea: sipush 13197
      // 0ed: ldc2_w 6356389297242991871
      // 0f0: lload 6
      // 0f2: lxor
      // 0f3: invokedynamic m (IJ)I bsm=sixtwo/dt.aiC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0f8: sipush 13197
      // 0fb: ldc2_w 6356389297242991871
      // 0fe: lload 6
      // 100: lxor
      // 101: invokedynamic m (IJ)I bsm=sixtwo/dt.aiC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 106: invokevirtual net/minecraft/class_332.method_52706 (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_2960;IIII)V
      // 109: aload 1
      // 10a: invokevirtual sixtwo/lC.ceW ()V
      // 10d: aload 1
      // 10e: aload 3
      // 10f: aload 12
      // 111: fload 13
      // 113: aload 3
      // 114: aload 12
      // 116: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 119: fconst_2
      // 11a: fdiv
      // 11b: fsub
      // 11c: fload 5
      // 11e: ldc_w 8.0
      // 121: fsub
      // 122: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 125: invokevirtual sixtwo/lC.cer (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 128: aload 11
      // 12a: invokevirtual net/minecraft/class_1293.method_5578 ()I
      // 12d: bipush 1
      // 12e: iadd
      // 12f: invokestatic sixtwo/mY.crP (I)[I
      // 132: astore 17
      // 134: aload 1
      // 135: aload 3
      // 136: aload 17
      // 138: fload 13
      // 13a: aload 3
      // 13b: aload 17
      // 13d: invokevirtual sixtwo/lq.cap ([I)F
      // 140: fconst_2
      // 141: fdiv
      // 142: fsub
      // 143: fload 5
      // 145: ldc_w 16.0
      // 148: fsub
      // 149: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 14c: invokevirtual sixtwo/lC.ces (Lsixtwo/lq;[IFFLsixtwo/mG;)V
      // 14f: aload 8
      // 151: ifnull 05a
      // 154: return
   }

   private void ain(class_1657 param1, lC param2, fS param3, float param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dt.JzNel J
      // 003: ldc2_w 6739613627916
      // 006: lxor
      // 007: lstore 5
      // 009: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00c: aload 0
      // 00d: aload 1
      // 00e: fload 4
      // 010: invokevirtual sixtwo/dt.ait (Lnet/minecraft/class_1297;F)Ljava/util/Optional;
      // 013: astore 8
      // 015: astore 7
      // 017: aload 8
      // 019: aload 7
      // 01b: ifnonnull 035
      // 01e: invokevirtual java/util/Optional.isEmpty ()Z
      // 021: ifeq 030
      // 024: goto 02b
      // 027: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02a: athrow
      // 02b: return
      // 02c: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02f: athrow
      // 030: aload 8
      // 032: invokevirtual java/util/Optional.get ()Ljava/lang/Object;
      // 035: checkcast org/joml/Vector4d
      // 038: astore 9
      // 03a: aload 9
      // 03c: getfield org/joml/Vector4d.x D
      // 03f: d2f
      // 040: fstore 10
      // 042: aload 9
      // 044: getfield org/joml/Vector4d.y D
      // 047: d2f
      // 048: fstore 11
      // 04a: getstatic sixtwo/lE.WTzbi Lsixtwo/lj;
      // 04d: ldc_w 6.0
      // 050: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 053: astore 12
      // 055: aload 12
      // 057: invokevirtual sixtwo/lq.cat ()F
      // 05a: fstore 13
      // 05c: fload 13
      // 05e: ldc_w 4.0
      // 061: fadd
      // 062: fstore 14
      // 064: fload 11
      // 066: fstore 15
      // 068: aload 0
      // 069: getfield sixtwo/dt.wRBRi Lsixtwo/cG;
      // 06c: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 06f: astore 16
      // 071: aload 0
      // 072: getfield sixtwo/dt.weKln Lsixtwo/cG;
      // 075: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 078: astore 17
      // 07a: aload 0
      // 07b: getfield sixtwo/dt.MAUHJ Lsixtwo/cG;
      // 07e: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 081: astore 18
      // 083: aload 0
      // 084: getfield sixtwo/dt.JdaIF Lsixtwo/cG;
      // 087: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 08a: astore 19
      // 08c: aload 0
      // 08d: getfield sixtwo/dt.lFuNf Lsixtwo/cG;
      // 090: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 093: astore 20
      // 095: aload 0
      // 096: getfield sixtwo/dt.BmdVM Lsixtwo/cG;
      // 099: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 09c: astore 21
      // 09e: aload 0
      // 09f: getfield sixtwo/dt.bocCI Lsixtwo/cG;
      // 0a2: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 0a5: astore 22
      // 0a7: new java/util/ArrayList
      // 0aa: dup
      // 0ab: invokespecial java/util/ArrayList.<init> ()V
      // 0ae: astore 23
      // 0b0: aload 0
      // 0b1: getfield sixtwo/dt.AbmMN Lsixtwo/cw;
      // 0b4: invokevirtual sixtwo/cw.TC ()Z
      // 0b7: aload 7
      // 0b9: ifnonnull 0f5
      // 0bc: ifeq 0ee
      // 0bf: goto 0c6
      // 0c2: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c5: athrow
      // 0c6: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0c9: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 0cc: aload 1
      // 0cd: invokevirtual net/minecraft/class_746.method_5739 (Lnet/minecraft/class_1297;)F
      // 0d0: bipush 1
      // 0d1: invokestatic sixtwo/mZ.csc (FI)F
      // 0d4: invokedynamic makeConcatWithConstants (F)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001m" ]
      // 0d9: astore 24
      // 0db: aload 23
      // 0dd: new sixtwo/dt$sH
      // 0e0: dup
      // 0e1: aload 24
      // 0e3: aload 20
      // 0e5: invokespecial sixtwo/dt$sH.<init> (Ljava/lang/String;Lsixtwo/mG;)V
      // 0e8: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 0ed: pop
      // 0ee: aload 0
      // 0ef: getfield sixtwo/dt.yhuFt Lsixtwo/cw;
      // 0f2: invokevirtual sixtwo/cw.TC ()Z
      // 0f5: aload 7
      // 0f7: ifnonnull 137
      // 0fa: ifeq 130
      // 0fd: goto 104
      // 100: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 103: athrow
      // 104: aload 1
      // 105: invokestatic sixtwo/jg.bBx (Lnet/minecraft/class_1657;)I
      // 108: sipush 5851
      // 10b: ldc2_w 4473888461455409255
      // 10e: lload 5
      // 110: lxor
      // 111: invokedynamic j (IJ)Ljava/lang/String; bsm=sixtwo/dt.aiz (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 116: invokedynamic makeConcatWithConstants (ILjava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001\u0001" ]
      // 11b: astore 24
      // 11d: aload 23
      // 11f: new sixtwo/dt$sH
      // 122: dup
      // 123: aload 24
      // 125: aload 21
      // 127: invokespecial sixtwo/dt$sH.<init> (Ljava/lang/String;Lsixtwo/mG;)V
      // 12a: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 12f: pop
      // 130: aload 0
      // 131: getfield sixtwo/dt.vExdX Lsixtwo/cw;
      // 134: invokevirtual sixtwo/cw.TC ()Z
      // 137: aload 7
      // 139: ifnonnull 1db
      // 13c: ifeq 1d4
      // 13f: goto 146
      // 142: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 145: athrow
      // 146: aload 0
      // 147: getfield sixtwo/dt.bcjCz Lsixtwo/ct;
      // 14a: bipush 0
      // 14b: invokevirtual sixtwo/ct.SQ (I)Z
      // 14e: ifeq 168
      // 151: goto 158
      // 154: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 157: athrow
      // 158: aload 1
      // 159: invokevirtual net/minecraft/class_1657.method_5476 ()Lnet/minecraft/class_2561;
      // 15c: invokeinterface net/minecraft/class_2561.getString ()Ljava/lang/String; 1
      // 161: goto 16f
      // 164: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 167: athrow
      // 168: aload 1
      // 169: invokevirtual net/minecraft/class_1657.method_7334 ()Lcom/mojang/authlib/GameProfile;
      // 16c: invokevirtual com/mojang/authlib/GameProfile.name ()Ljava/lang/String;
      // 16f: astore 24
      // 171: invokestatic sixtwo/rD.dmc ()Lsixtwo/qQ;
      // 174: aload 1
      // 175: invokevirtual sixtwo/qQ.ddy (Lnet/minecraft/class_1657;)Z
      // 178: ifeq 1bd
      // 17b: aload 18
      // 17d: astore 25
      // 17f: aload 3
      // 180: invokevirtual sixtwo/fS.bag ()Z
      // 183: aload 7
      // 185: ifnonnull 1d3
      // 188: ifeq 1c1
      // 18b: goto 192
      // 18e: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 191: athrow
      // 192: aload 3
      // 193: invokevirtual sixtwo/fS.aWV ()Lsixtwo/cw;
      // 196: invokevirtual sixtwo/cw.TC ()Z
      // 199: aload 7
      // 19b: ifnonnull 1d3
      // 19e: goto 1a5
      // 1a1: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a4: athrow
      // 1a5: ifeq 1c1
      // 1a8: goto 1af
      // 1ab: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1ae: athrow
      // 1af: aload 3
      // 1b0: invokevirtual sixtwo/fS.aWY ()Lsixtwo/cy;
      // 1b3: invokevirtual sixtwo/cy.Us ()Ljava/lang/String;
      // 1b6: astore 24
      // 1b8: aload 7
      // 1ba: ifnull 1c1
      // 1bd: aload 17
      // 1bf: astore 25
      // 1c1: aload 23
      // 1c3: new sixtwo/dt$sH
      // 1c6: dup
      // 1c7: aload 24
      // 1c9: aload 25
      // 1cb: invokespecial sixtwo/dt$sH.<init> (Ljava/lang/String;Lsixtwo/mG;)V
      // 1ce: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 1d3: pop
      // 1d4: aload 0
      // 1d5: getfield sixtwo/dt.zHaUb Lsixtwo/cw;
      // 1d8: invokevirtual sixtwo/cw.TC ()Z
      // 1db: ifeq 1fe
      // 1de: aload 1
      // 1df: invokevirtual net/minecraft/class_1657.method_6032 ()F
      // 1e2: bipush 1
      // 1e3: invokestatic sixtwo/mZ.csc (FI)F
      // 1e6: invokestatic java/lang/String.valueOf (F)Ljava/lang/String;
      // 1e9: astore 24
      // 1eb: aload 23
      // 1ed: new sixtwo/dt$sH
      // 1f0: dup
      // 1f1: aload 24
      // 1f3: aload 22
      // 1f5: invokespecial sixtwo/dt$sH.<init> (Ljava/lang/String;Lsixtwo/mG;)V
      // 1f8: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 1fd: pop
      // 1fe: aload 1
      // 1ff: invokevirtual net/minecraft/class_1657.method_6067 ()F
      // 202: fstore 24
      // 204: fload 24
      // 206: aload 7
      // 208: ifnonnull 247
      // 20b: fconst_0
      // 20c: fcmpl
      // 20d: ifle 246
      // 210: goto 217
      // 213: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 216: athrow
      // 217: aload 0
      // 218: getfield sixtwo/dt.gxggV Lsixtwo/cw;
      // 21b: invokevirtual sixtwo/cw.TC ()Z
      // 21e: ifeq 246
      // 221: goto 228
      // 224: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 227: athrow
      // 228: fload 24
      // 22a: bipush 1
      // 22b: invokestatic sixtwo/mZ.csc (FI)F
      // 22e: invokestatic java/lang/String.valueOf (F)Ljava/lang/String;
      // 231: astore 25
      // 233: aload 23
      // 235: new sixtwo/dt$sH
      // 238: dup
      // 239: aload 25
      // 23b: aload 19
      // 23d: invokespecial sixtwo/dt$sH.<init> (Ljava/lang/String;Lsixtwo/mG;)V
      // 240: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 245: pop
      // 246: fconst_2
      // 247: fstore 25
      // 249: fconst_0
      // 24a: fstore 26
      // 24c: new java/util/ArrayList
      // 24f: dup
      // 250: aload 23
      // 252: invokeinterface java/util/List.size ()I 1
      // 257: invokespecial java/util/ArrayList.<init> (I)V
      // 25a: astore 27
      // 25c: aload 23
      // 25e: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 263: astore 28
      // 265: aload 28
      // 267: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 26c: ifeq 2b0
      // 26f: aload 28
      // 271: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 276: checkcast sixtwo/dt$sH
      // 279: astore 29
      // 27b: aload 12
      // 27d: aload 29
      // 27f: getfield sixtwo/dt$sH.gbfPR Ljava/lang/String;
      // 282: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 285: ldc_w 6.0
      // 288: fadd
      // 289: fstore 30
      // 28b: aload 27
      // 28d: fload 30
      // 28f: invokestatic java/lang/Float.valueOf (F)Ljava/lang/Float;
      // 292: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 297: pop
      // 298: fload 26
      // 29a: fload 30
      // 29c: fadd
      // 29d: fstore 26
      // 29f: aload 7
      // 2a1: ifnonnull 2c1
      // 2a4: aload 7
      // 2a6: ifnull 265
      // 2a9: goto 2b0
      // 2ac: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2af: athrow
      // 2b0: fload 26
      // 2b2: fconst_2
      // 2b3: aload 23
      // 2b5: invokeinterface java/util/List.size ()I 1
      // 2ba: bipush 1
      // 2bb: isub
      // 2bc: i2f
      // 2bd: fmul
      // 2be: fadd
      // 2bf: fstore 26
      // 2c1: bipush -1
      // 2c2: istore 29
      // 2c4: aload 1
      // 2c5: invokevirtual net/minecraft/class_1657.method_7334 ()Lcom/mojang/authlib/GameProfile;
      // 2c8: invokevirtual com/mojang/authlib/GameProfile.name ()Ljava/lang/String;
      // 2cb: astore 30
      // 2cd: bipush 0
      // 2ce: istore 31
      // 2d0: iload 31
      // 2d2: aload 23
      // 2d4: invokeinterface java/util/List.size ()I 1
      // 2d9: if_icmpge 317
      // 2dc: aload 23
      // 2de: iload 31
      // 2e0: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 2e5: checkcast sixtwo/dt$sH
      // 2e8: getfield sixtwo/dt$sH.gbfPR Ljava/lang/String;
      // 2eb: aload 30
      // 2ed: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 2f0: aload 7
      // 2f2: ifnonnull 301
      // 2f5: ifeq 308
      // 2f8: goto 2ff
      // 2fb: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2fe: athrow
      // 2ff: iload 31
      // 301: istore 29
      // 303: aload 7
      // 305: ifnull 317
      // 308: iinc 31 1
      // 30b: aload 7
      // 30d: ifnull 2d0
      // 310: goto 317
      // 313: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 316: athrow
      // 317: fconst_0
      // 318: fstore 31
      // 31a: iload 29
      // 31c: aload 7
      // 31e: ifnonnull 32c
      // 321: iflt 37f
      // 324: goto 32b
      // 327: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 32a: athrow
      // 32b: bipush 0
      // 32c: istore 32
      // 32e: iload 32
      // 330: iload 29
      // 332: if_icmpge 35f
      // 335: fload 31
      // 337: aload 27
      // 339: iload 32
      // 33b: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 340: checkcast java/lang/Float
      // 343: invokevirtual java/lang/Float.floatValue ()F
      // 346: fconst_2
      // 347: fadd
      // 348: fadd
      // 349: fstore 31
      // 34b: iinc 32 1
      // 34e: aload 7
      // 350: ifnonnull 375
      // 353: aload 7
      // 355: ifnull 32e
      // 358: goto 35f
      // 35b: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 35e: athrow
      // 35f: fload 31
      // 361: aload 27
      // 363: iload 29
      // 365: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 36a: checkcast java/lang/Float
      // 36d: invokevirtual java/lang/Float.floatValue ()F
      // 370: fconst_2
      // 371: fdiv
      // 372: fadd
      // 373: fstore 31
      // 375: fload 10
      // 377: fload 31
      // 379: fsub
      // 37a: fstore 28
      // 37c: goto 388
      // 37f: fload 10
      // 381: fload 26
      // 383: fconst_2
      // 384: fdiv
      // 385: fsub
      // 386: fstore 28
      // 388: aload 2
      // 389: fload 10
      // 38b: fload 15
      // 38d: aload 0
      // 38e: getfield sixtwo/dt.hSuAc Lsixtwo/cC;
      // 391: invokevirtual sixtwo/cC.VB ()F
      // 394: invokestatic sixtwo/jH.bId (Lsixtwo/lC;FFF)V
      // 397: aload 0
      // 398: getfield sixtwo/dt.uuLKb Lsixtwo/cJ;
      // 39b: invokevirtual sixtwo/cJ.WF ()Z
      // 39e: istore 32
      // 3a0: iload 32
      // 3a2: aload 7
      // 3a4: ifnonnull 3ce
      // 3a7: ifeq 3cd
      // 3aa: goto 3b1
      // 3ad: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b0: athrow
      // 3b1: aload 2
      // 3b2: fload 28
      // 3b4: fload 15
      // 3b6: fload 26
      // 3b8: fload 14
      // 3ba: ldc_w 3.0
      // 3bd: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 3c0: aload 16
      // 3c2: fconst_2
      // 3c3: invokevirtual sixtwo/lC.cdh (FFFFLsixtwo/ld;Lsixtwo/mG;F)V
      // 3c6: goto 3cd
      // 3c9: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3cc: athrow
      // 3cd: bipush 0
      // 3ce: istore 33
      // 3d0: iload 33
      // 3d2: aload 23
      // 3d4: invokeinterface java/util/List.size ()I 1
      // 3d9: if_icmpge 470
      // 3dc: aload 23
      // 3de: iload 33
      // 3e0: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 3e5: checkcast sixtwo/dt$sH
      // 3e8: astore 34
      // 3ea: aload 27
      // 3ec: iload 33
      // 3ee: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 3f3: checkcast java/lang/Float
      // 3f6: invokevirtual java/lang/Float.floatValue ()F
      // 3f9: fstore 35
      // 3fb: iload 32
      // 3fd: aload 7
      // 3ff: ifnonnull 472
      // 402: ifne 428
      // 405: goto 40c
      // 408: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 40b: athrow
      // 40c: aload 2
      // 40d: fload 28
      // 40f: fload 15
      // 411: fload 35
      // 413: fload 14
      // 415: ldc_w 3.0
      // 418: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 41b: aload 16
      // 41d: fconst_2
      // 41e: invokevirtual sixtwo/lC.cdh (FFFFLsixtwo/ld;Lsixtwo/mG;F)V
      // 421: goto 428
      // 424: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 427: athrow
      // 428: aload 12
      // 42a: aload 34
      // 42c: getfield sixtwo/dt$sH.gbfPR Ljava/lang/String;
      // 42f: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 432: fstore 36
      // 434: aload 12
      // 436: invokevirtual sixtwo/lq.cat ()F
      // 439: fstore 37
      // 43b: aload 2
      // 43c: aload 12
      // 43e: aload 34
      // 440: getfield sixtwo/dt$sH.gbfPR Ljava/lang/String;
      // 443: fload 28
      // 445: fload 36
      // 447: fload 35
      // 449: invokestatic sixtwo/jf.bAH (FF)F
      // 44c: fadd
      // 44d: fload 15
      // 44f: fload 37
      // 451: fload 14
      // 453: invokestatic sixtwo/jf.bAH (FF)F
      // 456: fadd
      // 457: aload 34
      // 459: getfield sixtwo/dt$sH.qZmEr Lsixtwo/mG;
      // 45c: invokevirtual sixtwo/lC.cer (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 45f: fload 28
      // 461: fload 35
      // 463: fconst_2
      // 464: fadd
      // 465: fadd
      // 466: fstore 28
      // 468: iinc 33 1
      // 46b: aload 7
      // 46d: ifnull 3d0
      // 470: iload 29
      // 472: iflt 481
      // 475: fload 10
      // 477: fload 31
      // 479: fsub
      // 47a: goto 488
      // 47d: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 480: athrow
      // 481: fload 10
      // 483: fload 26
      // 485: fconst_2
      // 486: fdiv
      // 487: fsub
      // 488: fstore 33
      // 48a: new java/util/ArrayList
      // 48d: dup
      // 48e: invokespecial java/util/ArrayList.<init> ()V
      // 491: astore 34
      // 493: aload 0
      // 494: getfield sixtwo/dt.ZhrcH Lsixtwo/cw;
      // 497: invokevirtual sixtwo/cw.TC ()Z
      // 49a: aload 7
      // 49c: ifnonnull 4c3
      // 49f: ifeq 4bc
      // 4a2: goto 4a9
      // 4a5: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4a8: athrow
      // 4a9: aload 34
      // 4ab: aload 1
      // 4ac: invokevirtual net/minecraft/class_1657.method_6047 ()Lnet/minecraft/class_1799;
      // 4af: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 4b4: pop
      // 4b5: goto 4bc
      // 4b8: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4bb: athrow
      // 4bc: aload 0
      // 4bd: getfield sixtwo/dt.JKWzw Lsixtwo/cw;
      // 4c0: invokevirtual sixtwo/cw.TC ()Z
      // 4c3: aload 7
      // 4c5: ifnonnull 4ef
      // 4c8: ifeq 4e8
      // 4cb: goto 4d2
      // 4ce: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4d1: athrow
      // 4d2: aload 34
      // 4d4: aload 1
      // 4d5: invokestatic sixtwo/oP.cJr (Lnet/minecraft/class_1309;)Lsixtwo/oQ;
      // 4d8: invokevirtual sixtwo/oQ.cJE ()Ljava/util/List;
      // 4db: invokeinterface java/util/List.addAll (Ljava/util/Collection;)Z 2
      // 4e0: pop
      // 4e1: goto 4e8
      // 4e4: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4e7: athrow
      // 4e8: aload 0
      // 4e9: getfield sixtwo/dt.ZhrcH Lsixtwo/cw;
      // 4ec: invokevirtual sixtwo/cw.TC ()Z
      // 4ef: aload 7
      // 4f1: ifnonnull 51d
      // 4f4: ifeq 511
      // 4f7: goto 4fe
      // 4fa: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4fd: athrow
      // 4fe: aload 34
      // 500: aload 1
      // 501: invokevirtual net/minecraft/class_1657.method_6079 ()Lnet/minecraft/class_1799;
      // 504: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 509: pop
      // 50a: goto 511
      // 50d: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 510: athrow
      // 511: aload 34
      // 513: invokedynamic test ()Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, net/minecraft/class_1799.method_7960 ()Z, (Lnet/minecraft/class_1799;)Z ]
      // 518: invokeinterface java/util/List.removeIf (Ljava/util/function/Predicate;)Z 2
      // 51d: pop
      // 51e: ldc_w 12.0
      // 521: fstore 35
      // 523: aload 34
      // 525: invokeinterface java/util/List.size ()I 1
      // 52a: i2f
      // 52b: fload 35
      // 52d: fmul
      // 52e: aload 34
      // 530: invokeinterface java/util/List.size ()I 1
      // 535: bipush 1
      // 536: isub
      // 537: i2f
      // 538: fconst_2
      // 539: fmul
      // 53a: fadd
      // 53b: fstore 36
      // 53d: iload 29
      // 53f: iflt 550
      // 542: fload 10
      // 544: fload 36
      // 546: fconst_2
      // 547: fdiv
      // 548: fsub
      // 549: goto 55a
      // 54c: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 54f: athrow
      // 550: fload 33
      // 552: fload 26
      // 554: fload 36
      // 556: fsub
      // 557: fconst_2
      // 558: fdiv
      // 559: fadd
      // 55a: fstore 37
      // 55c: fload 15
      // 55e: fconst_2
      // 55f: fsub
      // 560: fload 35
      // 562: fsub
      // 563: fstore 38
      // 565: fload 38
      // 567: ldc_w 12.0
      // 56a: fsub
      // 56b: fstore 39
      // 56d: ldc_w Infinity
      // 570: fstore 40
      // 572: aload 34
      // 574: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 579: astore 41
      // 57b: aload 41
      // 57d: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 582: ifeq 5c3
      // 585: aload 41
      // 587: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 58c: checkcast net/minecraft/class_1799
      // 58f: astore 42
      // 591: aload 0
      // 592: aload 2
      // 593: aload 42
      // 595: aload 12
      // 597: fload 37
      // 599: fload 38
      // 59b: invokevirtual sixtwo/dt.aio (Lsixtwo/lC;Lnet/minecraft/class_1799;Lsixtwo/lq;FF)F
      // 59e: fstore 43
      // 5a0: fload 40
      // 5a2: fload 43
      // 5a4: invokestatic java/lang/Math.min (FF)F
      // 5a7: fstore 40
      // 5a9: fload 37
      // 5ab: fload 35
      // 5ad: fconst_2
      // 5ae: fadd
      // 5af: fadd
      // 5b0: fstore 37
      // 5b2: aload 7
      // 5b4: ifnonnull 5c6
      // 5b7: aload 7
      // 5b9: ifnull 57b
      // 5bc: goto 5c3
      // 5bf: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5c2: athrow
      // 5c3: invokestatic sixtwo/ju.bFV ()V
      // 5c6: aload 7
      // 5c8: ifnonnull 619
      // 5cb: aload 0
      // 5cc: getfield sixtwo/dt.VrMbh Lsixtwo/cw;
      // 5cf: invokevirtual sixtwo/cw.TC ()Z
      // 5d2: ifeq 616
      // 5d5: goto 5dc
      // 5d8: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5db: athrow
      // 5dc: fload 40
      // 5de: ldc_w Infinity
      // 5e1: aload 7
      // 5e3: ifnonnull 607
      // 5e6: goto 5ed
      // 5e9: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5ec: athrow
      // 5ed: fcmpl
      // 5ee: ifeq 616
      // 5f1: goto 5f8
      // 5f4: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5f7: athrow
      // 5f8: fload 39
      // 5fa: fload 40
      // 5fc: fadd
      // 5fd: ldc_w 5.0
      // 600: goto 607
      // 603: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 606: athrow
      // 607: fsub
      // 608: fstore 41
      // 60a: aload 0
      // 60b: aload 2
      // 60c: aload 1
      // 60d: aload 12
      // 60f: fload 10
      // 611: fload 41
      // 613: invokevirtual sixtwo/dt.aiq (Lsixtwo/lC;Lnet/minecraft/class_1657;Lsixtwo/lq;FF)V
      // 616: invokestatic sixtwo/jH.bIf ()V
      // 619: return
   }

   private static String aiw(byte[] var0) {
      int var1 = 0;
      int var2;
      char[] var3 = new char[var2 = var0.length];

      for (int var4 = 0; var4 < var2; var4++) {
         int var5;
         if ((var5 = 255 & var0[var4]) < 192) {
            var3[var1++] = (char)var5;
         } else if (var5 < 224) {
            char var6 = (char)((char)(var5 & 31) << 6);
            byte var8 = var0[++var4];
            var6 = (char)(var6 | (char)(var8 & 63));
            var3[var1++] = var6;
         } else if (var4 < var2 - 2) {
            char var12 = (char)((char)(var5 & 15) << '\f');
            byte var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63) << 6);
            var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63));
            var3[var1++] = var12;
         }
      }

      return new String(var3, 0, var1);
   }

   @hG
   public void ail(gi param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dt.JzNel J
      // 03: ldc2_w 29075575089016
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: invokevirtual sixtwo/dt.bab ()Z
      // 11: ifne 19
      // 14: return
      // 15: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 18: athrow
      // 19: aload 1
      // 1a: invokevirtual sixtwo/gi.baL ()Lnet/minecraft/class_1297;
      // 1d: astore 5
      // 1f: aload 5
      // 21: aload 4
      // 23: ifnonnull 3c
      // 26: instanceof net/minecraft/class_1657
      // 29: ifeq 60
      // 2c: goto 33
      // 2f: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 32: athrow
      // 33: aload 5
      // 35: goto 3c
      // 38: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 3f: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 42: if_acmpne 4a
      // 45: return
      // 46: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 49: athrow
      // 4a: aload 0
      // 4b: getfield sixtwo/dt.jtzDi Lsixtwo/cw;
      // 4e: invokevirtual sixtwo/cw.TC ()Z
      // 51: ifeq 60
      // 54: aload 1
      // 55: bipush 1
      // 56: invokevirtual sixtwo/gi.bdX (Z)V
      // 59: goto 60
      // 5c: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5f: athrow
      // 60: return
   }

   private static MatchException aiv(MatchException var0) {
      return var0;
   }

   private Optional<Vector4d> ait(class_1297 var1, float var2) {
      long var3 = JzNel ^ 10416253148898L;
      class_243 var5 = var1.method_30950(var2);
      float var6 = 0.0F;
      if (var1 instanceof class_1657) {
         var6 = 2.6F;
      }

      class_241 var7 = jI.bIw(new class_243(var5.field_1352, var5.field_1351 + var6, var5.field_1350));

      try {
         if (var7 == null) {
            return Optional.empty();
         }
      } catch (MatchException var8) {
         throw aiv(var8);
      }

      return Optional.of(new Vector4d(var7.field_1343, var7.field_1342, var7.field_1343, 0.0));
   }

   private static CallSite aiz(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aiy".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dt" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private float aip(lC var1, class_1799 var2, lq var3, float var4, float var5) {
      long var6 = JzNel ^ 37367679234884L;
      iS[] var10000 = dh.afl();
      float var9 = 0.0F;
      iS[] var8 = var10000;
      float var10 = 0.0F;
      class_9304 var11 = class_1890.method_57532(var2);
      Iterator var12 = var11.method_57534().iterator();

      while (true) {
         if (var12.hasNext()) {
            class_6880 var13 = (class_6880)var12.next();
            String var14 = class_1887.method_8179(var13, var11.method_57536(var13)).getString().substring(0, 2) + " " + var11.method_57536(var13);
            var1.cer(var3, var14, var4, var5 + var10, mG.hoGuU);
            var10 -= 8.0F;
            var15 = Math.min(var9, var10);
            if (var8 != null) {
               break;
            }

            var9 = var15;
            if (var8 == null) {
               continue;
            }
         }

         var15 = var9;
         break;
      }

      return var15;
   }

   private static CallSite aiC(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aiB".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dt" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private float aio(lC param1, class_1799 param2, lq param3, float param4, float param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dt.JzNel J
      // 03: ldc2_w 85354759934885
      // 06: lxor
      // 07: lstore 6
      // 09: aload 1
      // 0a: aload 2
      // 0b: fload 4
      // 0d: fload 5
      // 0f: ldc_w 0.75
      // 12: invokevirtual sixtwo/lC.cea (Lnet/minecraft/class_1799;FFF)Lsixtwo/jv;
      // 15: invokevirtual sixtwo/jv.bGw ()Lsixtwo/jy;
      // 18: checkcast sixtwo/jv
      // 1b: invokevirtual sixtwo/jv.bGv ()Lsixtwo/jy;
      // 1e: pop
      // 1f: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 22: aload 1
      // 23: aload 2
      // 24: fload 4
      // 26: fload 5
      // 28: ldc_w 0.75
      // 2b: invokevirtual sixtwo/lC.ceb (Lnet/minecraft/class_1799;FFF)Lsixtwo/jw;
      // 2e: invokevirtual sixtwo/jw.bGw ()Lsixtwo/jy;
      // 31: checkcast sixtwo/jw
      // 34: invokevirtual sixtwo/jw.bGv ()Lsixtwo/jy;
      // 37: pop
      // 38: astore 8
      // 3a: ldc_w Infinity
      // 3d: fstore 9
      // 3f: aload 0
      // 40: aload 8
      // 42: ifnonnull 5d
      // 45: getfield sixtwo/dt.bhXKP Lsixtwo/cw;
      // 48: invokevirtual sixtwo/cw.TC ()Z
      // 4b: ifeq 6d
      // 4e: goto 55
      // 51: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 54: athrow
      // 55: aload 0
      // 56: goto 5d
      // 59: invokestatic sixtwo/dt.aiv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5c: athrow
      // 5d: aload 1
      // 5e: aload 2
      // 5f: aload 3
      // 60: fload 4
      // 62: fload 5
      // 64: ldc_w 12.0
      // 67: fsub
      // 68: invokevirtual sixtwo/dt.aip (Lsixtwo/lC;Lnet/minecraft/class_1799;Lsixtwo/lq;FF)F
      // 6b: fstore 9
      // 6d: fload 9
      // 6f: freturn
   }

   private static Object aiy(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = aix(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int aiB(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = aiA(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int aiA(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 2724;
      if (WeGki[var3] == null) {
         byte[] var4 = new byte[]{
            (byte)(var1 >>> 56),
            (byte)(var1 >>> 48),
            (byte)(var1 >>> 40),
            (byte)(var1 >>> 32),
            (byte)(var1 >>> 24),
            (byte)(var1 >>> 16),
            (byte)(var1 >>> 8),
            (byte)var1
         };
         long var5 = BYKvc[var3];
         byte[] var7 = new byte[]{
            (byte)(var5 >>> 56),
            (byte)(var5 >>> 48),
            (byte)(var5 >>> 40),
            (byte)(var5 >>> 32),
            (byte)(var5 >>> 24),
            (byte)(var5 >>> 16),
            (byte)(var5 >>> 8),
            (byte)var5
         };
         Long var8 = Thread.currentThread().threadId();
         Object[] var9 = (Object[])JRvoE.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               JRvoE.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/dt", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         WeGki[var3] = var15;
      }

      return WeGki[var3];
   }
}
