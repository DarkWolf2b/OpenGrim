package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.decoration.EndCrystalEntity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.Item;
import net.minecraft.item.Items;

public class eZ extends gg {
   private final cK IlOSr;
   private final cJ lBfId;
   private final cJ XxhAs;
   private final cJ wTnCk;
   private final cJ ZKrlo;
   private final cJ IwDsS;
   private final cC iugJi;
   private boolean Cetgu;
   private static long GGpPC;
   private static String AMrtH;
   private static long[] nLhLG;
   private static Integer[] EleIt;
   private static Map ogUmi;

   public eZ() {
      long var1 = GGpPC ^ 14793834209389L;
      super(gf.aZL(aGa<"s">(14790, 5437930876475469776L ^ var1), false, gh.xwjCw));
      int[] var10004 = new int[aGa<"s">(28158, 6235739372943293426L ^ var1)];
      var10004[0] = aGa<"s">(32748, 1049610723930352069L ^ var1);
      var10004[1] = aGa<"s">(25185, 4084958265916339262L ^ var1);
      var10004[2] = aGa<"s">(21610, 2374250634670342724L ^ var1);
      var10004[3] = aGa<"s">(794, 2550348341707068721L ^ var1);
      var10004[4] = aGa<"s">(31405, 2263038719388593333L ^ var1);
      var10004[5] = aGa<"s">(18035, 8828160879964033121L ^ var1);
      var10004[aGa<"s">(1781, 4846319390892970234L ^ var1)] = aGa<"s">(28344, 57013679424583832L ^ var1);
      var10004[aGa<"s">(29139, 2341527436443461529L ^ var1)] = aGa<"s">(30649, 4531646555109433840L ^ var1);
      var10004[aGa<"s">(30625, 1245004949057642930L ^ var1)] = aGa<"s">(26482, 3179741092298371427L ^ var1);
      var10004[aGa<"s">(31274, 6960410228422880304L ^ var1)] = aGa<"s">(14600, 8175226046478610219L ^ var1);
      this.IlOSr = new cK(this, mr.clS(var10004)).WM(jc.WnbNG).WN(Items.TOTEM_OF_UNDYING).WT();
      var10004 = new int[aGa<"s">(3366, 7873848696790506346L ^ var1)];
      var10004[0] = aGa<"s">(9006, 2589140369048794377L ^ var1);
      var10004[1] = aGa<"s">(18335, 3509267469340021163L ^ var1);
      var10004[2] = aGa<"s">(10313, 2678311115917360661L ^ var1);
      var10004[3] = aGa<"s">(29446, 1534990237832127803L ^ var1);
      var10004[4] = aGa<"s">(15283, 7118588756457156082L ^ var1);
      var10004[5] = aGa<"s">(26482, 3179741092298371427L ^ var1);
      var10004[aGa<"s">(8719, 3340002571509527586L ^ var1)] = aGa<"s">(6098, 8798333826474099148L ^ var1);
      var10004[aGa<"s">(22760, 4906775449130700500L ^ var1)] = aGa<"s">(6611, 238219035754418165L ^ var1);
      var10004[aGa<"s">(7763, 7511504688197748857L ^ var1)] = aGa<"s">(4643, 1279602150429213702L ^ var1);
      var10004[aGa<"s">(6565, 6848041047444770710L ^ var1)] = aGa<"s">(2033, 6373573464539156978L ^ var1);
      var10004[aGa<"s">(19673, 3706366550128564977L ^ var1)] = aGa<"s">(11080, 221005430619471117L ^ var1);
      var10004[aGa<"s">(28907, 8789651389301499591L ^ var1)] = aGa<"s">(6098, 8798333826474099148L ^ var1);
      var10004[aGa<"s">(6268, 8875860164782050892L ^ var1)] = aGa<"s">(31128, 474664634640215994L ^ var1);
      var10004[aGa<"s">(32029, 8619586182809824057L ^ var1)] = aGa<"s">(23861, 8964969583348386563L ^ var1);
      var10004[aGa<"s">(750, 560057941953434874L ^ var1)] = aGa<"s">(30649, 4531646555109433840L ^ var1);
      var10004[aGa<"s">(4040, 225169350688004544L ^ var1)] = aGa<"s">(26482, 3179741092298371427L ^ var1);
      var10004[aGa<"s">(31823, 5438431712257780296L ^ var1)] = aGa<"s">(25975, 5643747344914166636L ^ var1);
      var10004[aGa<"s">(28605, 2397200977525422492L ^ var1)] = aGa<"s">(6098, 8798333826474099148L ^ var1);
      var10004[aGa<"s">(951, 4806785287216092552L ^ var1)] = aGa<"s">(7623, 998867442288217025L ^ var1);
      var10004[aGa<"s">(17254, 5650036847284295004L ^ var1)] = aGa<"s">(18335, 3509267469340021163L ^ var1);
      var10004[aGa<"s">(3090, 1112357165779606032L ^ var1)] = aGa<"s">(11471, 214196262500563700L ^ var1);
      this.lBfId = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aGa<"s">(18232, 1270537220944564493L ^ var1)];
      var10004[0] = aGa<"s">(27565, 3460077491899383270L ^ var1);
      var10004[1] = aGa<"s">(20077, 4551387314865215587L ^ var1);
      var10004[2] = aGa<"s">(15650, 5385229981333482346L ^ var1);
      var10004[3] = aGa<"s">(29981, 7979672925186859776L ^ var1);
      var10004[4] = aGa<"s">(30649, 4531646555109433840L ^ var1);
      var10004[5] = aGa<"s">(25095, 8579614839754929209L ^ var1);
      var10004[aGa<"s">(8719, 3340002571509527586L ^ var1)] = aGa<"s">(31748, 2473746986464225806L ^ var1);
      var10004[aGa<"s">(22760, 4906775449130700500L ^ var1)] = aGa<"s">(6098, 8798333826474099148L ^ var1);
      var10004[aGa<"s">(7763, 7511504688197748857L ^ var1)] = aGa<"s">(1090, 7890410368992989819L ^ var1);
      var10004[aGa<"s">(6565, 6848041047444770710L ^ var1)] = aGa<"s">(20077, 4551387314865215587L ^ var1);
      var10004[aGa<"s">(19673, 3706366550128564977L ^ var1)] = aGa<"s">(26482, 3179741092298371427L ^ var1);
      var10004[aGa<"s">(733, 2787060300251288735L ^ var1)] = aGa<"s">(14010, 736925632579330239L ^ var1);
      var10004[aGa<"s">(11979, 8925458344930015434L ^ var1)] = aGa<"s">(25750, 5046507929780433625L ^ var1);
      var10004[aGa<"s">(28130, 368180954436942846L ^ var1)] = aGa<"s">(16639, 1854072044372498111L ^ var1);
      var10004[aGa<"s">(1619, 5539183217529278564L ^ var1)] = aGa<"s">(30649, 4531646555109433840L ^ var1);
      this.XxhAs = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[aGa<"s">(28130, 368180954436942846L ^ var1)];
      var10004[0] = aGa<"s">(18526, 2031659450596466251L ^ var1);
      var10004[1] = aGa<"s">(4743, 4461302998417589443L ^ var1);
      var10004[2] = aGa<"s">(18335, 3509267469340021163L ^ var1);
      var10004[3] = aGa<"s">(20077, 4551387314865215587L ^ var1);
      var10004[4] = aGa<"s">(14010, 736925632579330239L ^ var1);
      var10004[5] = aGa<"s">(6098, 8798333826474099148L ^ var1);
      var10004[aGa<"s">(8719, 3340002571509527586L ^ var1)] = aGa<"s">(1090, 7890410368992989819L ^ var1);
      var10004[aGa<"s">(22760, 4906775449130700500L ^ var1)] = aGa<"s">(20077, 4551387314865215587L ^ var1);
      var10004[aGa<"s">(7763, 7511504688197748857L ^ var1)] = aGa<"s">(26482, 3179741092298371427L ^ var1);
      var10004[aGa<"s">(6565, 6848041047444770710L ^ var1)] = aGa<"s">(14010, 736925632579330239L ^ var1);
      var10004[aGa<"s">(19673, 3706366550128564977L ^ var1)] = aGa<"s">(13216, 1807578774146540973L ^ var1);
      var10004[aGa<"s">(733, 2787060300251288735L ^ var1)] = aGa<"s">(16585, 3177735676524992192L ^ var1);
      var10004[aGa<"s">(11979, 8925458344930015434L ^ var1)] = aGa<"s">(30649, 4531646555109433840L ^ var1);
      this.wTnCk = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[aGa<"s">(1343, 5061005256205226850L ^ var1)];
      var10004[0] = aGa<"s">(7593, 318062237367356294L ^ var1);
      var10004[1] = aGa<"s">(6462, 2872743579050299256L ^ var1);
      var10004[2] = aGa<"s">(26482, 3179741092298371427L ^ var1);
      var10004[3] = aGa<"s">(16585, 3177735676524992192L ^ var1);
      var10004[4] = aGa<"s">(18400, 3610442842525372927L ^ var1);
      var10004[5] = aGa<"s">(6098, 8798333826474099148L ^ var1);
      var10004[aGa<"s">(8719, 3340002571509527586L ^ var1)] = aGa<"s">(1090, 7890410368992989819L ^ var1);
      var10004[aGa<"s">(22760, 4906775449130700500L ^ var1)] = aGa<"s">(31748, 2473746986464225806L ^ var1);
      var10004[aGa<"s">(7763, 7511504688197748857L ^ var1)] = aGa<"s">(25095, 8579614839754929209L ^ var1);
      var10004[aGa<"s">(6565, 6848041047444770710L ^ var1)] = aGa<"s">(24703, 2567982418674562687L ^ var1);
      var10004[aGa<"s">(19673, 3706366550128564977L ^ var1)] = aGa<"s">(26482, 3179741092298371427L ^ var1);
      var10004[aGa<"s">(733, 2787060300251288735L ^ var1)] = aGa<"s">(20077, 4551387314865215587L ^ var1);
      var10004[aGa<"s">(11979, 8925458344930015434L ^ var1)] = aGa<"s">(2747, 6184010835201350794L ^ var1);
      var10004[aGa<"s">(28130, 368180954436942846L ^ var1)] = aGa<"s">(6098, 8798333826474099148L ^ var1);
      var10004[aGa<"s">(1619, 5539183217529278564L ^ var1)] = aGa<"s">(13832, 3846441515123007558L ^ var1);
      var10004[aGa<"s">(18232, 1270537220944564493L ^ var1)] = aGa<"s">(18335, 3509267469340021163L ^ var1);
      var10004[aGa<"s">(644, 7382304928175969428L ^ var1)] = aGa<"s">(18335, 3509267469340021163L ^ var1);
      var10004[aGa<"s">(31239, 2052810734042590282L ^ var1)] = aGa<"s">(11347, 1926780613960989258L ^ var1);
      this.ZKrlo = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[aGa<"s">(1343, 5061005256205226850L ^ var1)];
      var10004[0] = aGa<"s">(28979, 699664985027520368L ^ var1);
      var10004[1] = aGa<"s">(18335, 3509267469340021163L ^ var1);
      var10004[2] = aGa<"s">(30649, 4531646555109433840L ^ var1);
      var10004[3] = aGa<"s">(26482, 3179741092298371427L ^ var1);
      var10004[4] = aGa<"s">(14600, 8175226046478610219L ^ var1);
      var10004[5] = aGa<"s">(6098, 8798333826474099148L ^ var1);
      var10004[aGa<"s">(8719, 3340002571509527586L ^ var1)] = aGa<"s">(15577, 395751977587305181L ^ var1);
      var10004[aGa<"s">(22760, 4906775449130700500L ^ var1)] = aGa<"s">(23520, 8264979095204761042L ^ var1);
      var10004[aGa<"s">(7763, 7511504688197748857L ^ var1)] = aGa<"s">(6098, 8798333826474099148L ^ var1);
      var10004[aGa<"s">(6565, 6848041047444770710L ^ var1)] = aGa<"s">(9814, 2433236940931788910L ^ var1);
      var10004[aGa<"s">(19673, 3706366550128564977L ^ var1)] = aGa<"s">(23520, 8264979095204761042L ^ var1);
      var10004[aGa<"s">(733, 2787060300251288735L ^ var1)] = aGa<"s">(28635, 3236448206268348876L ^ var1);
      var10004[aGa<"s">(11979, 8925458344930015434L ^ var1)] = aGa<"s">(26482, 3179741092298371427L ^ var1);
      var10004[aGa<"s">(28130, 368180954436942846L ^ var1)] = aGa<"s">(23520, 8264979095204761042L ^ var1);
      var10004[aGa<"s">(1619, 5539183217529278564L ^ var1)] = aGa<"s">(30649, 4531646555109433840L ^ var1);
      var10004[aGa<"s">(18232, 1270537220944564493L ^ var1)] = aGa<"s">(18335, 3509267469340021163L ^ var1);
      var10004[aGa<"s">(644, 7382304928175969428L ^ var1)] = aGa<"s">(20077, 4551387314865215587L ^ var1);
      var10004[aGa<"s">(31239, 2052810734042590282L ^ var1)] = aGa<"s">(24703, 2567982418674562687L ^ var1);
      this.IwDsS = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aGa<"s">(19673, 3706366550128564977L ^ var1)];
      var10004[0] = aGa<"s">(28979, 699664985027520368L ^ var1);
      var10004[1] = aGa<"s">(18335, 3509267469340021163L ^ var1);
      var10004[2] = aGa<"s">(30649, 4531646555109433840L ^ var1);
      var10004[3] = aGa<"s">(26482, 3179741092298371427L ^ var1);
      var10004[4] = aGa<"s">(14600, 8175226046478610219L ^ var1);
      var10004[5] = aGa<"s">(6098, 8798333826474099148L ^ var1);
      var10004[aGa<"s">(8719, 3340002571509527586L ^ var1)] = aGa<"s">(26669, 2270511596385582698L ^ var1);
      var10004[aGa<"s">(22760, 4906775449130700500L ^ var1)] = aGa<"s">(31748, 2473746986464225806L ^ var1);
      var10004[aGa<"s">(7763, 7511504688197748857L ^ var1)] = aGa<"s">(18335, 3509267469340021163L ^ var1);
      var10004[aGa<"s">(6565, 6848041047444770710L ^ var1)] = aGa<"s">(30649, 4531646555109433840L ^ var1);
      this.iugJi = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(9.0).VA(1.0).Vz(AMrtH);
   }

   static {
      Loader.doInit(eZ.class);
      _2b2fa1a0673f738aaf11f2543d15f4ac();
   }

   private static native void _2b2fa1a0673f738aaf11f2543d15f4ac();

   private native Item aFM();

   private native void aFP();

   private native boolean aFQ(PlayerEntity var1);

   private static native MatchException aFW(MatchException var0);

   private static native String aFX(byte[] var0);

   private native void aFO();

   private static native CallSite aGa(Lookup var0, String var1, MethodType var2);

   private static native int aFY(int var0, long var1);

   @hG
   public native void aFN(gL$tk var1);

   private native boolean aFR(EndCrystalEntity var1);

   @hG
   public native void aFL(gH$th var1);

   private static native int aFZ(Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}
