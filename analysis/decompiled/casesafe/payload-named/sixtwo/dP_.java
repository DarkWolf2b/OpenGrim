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
      super(gf.aZL(aoX<"l">(18260, 8846207510362498916L ^ var1), false, gh.qBzlZ));
      int[] var10004 = new int[aoX<"l">(370, 6457018188925264234L ^ var1)];
      var10004[0] = aoX<"l">(5913, 3824723979384715065L ^ var1);
      var10004[1] = aoX<"l">(22539, 1395046202836203554L ^ var1);
      var10004[2] = aoX<"l">(23829, 6892885886671174973L ^ var1);
      var10004[3] = aoX<"l">(22140, 3073843694008710749L ^ var1);
      var10004[4] = aoX<"l">(12945, 4699763777414288041L ^ var1);
      var10004[5] = aoX<"l">(18000, 3202025173948802676L ^ var1);
      var10004[aoX<"l">(20256, 5892221941769056020L ^ var1)] = aoX<"l">(15821, 2256825075386113504L ^ var1);
      var10004[aoX<"l">(32108, 3873470371348847967L ^ var1)] = aoX<"l">(10013, 7257259101368895286L ^ var1);
      this.jOKrR = new cF(this, mr.clS(var10004)).VS(jg$tJ.OCdZM);
      var10004 = new int[aoX<"l">(481, 7321212768825893314L ^ var1)];
      var10004[0] = aoX<"l">(15825, 155796876454321642L ^ var1);
      var10004[1] = aoX<"l">(22011, 1025939918525052381L ^ var1);
      var10004[2] = aoX<"l">(18028, 1162433593899361859L ^ var1);
      var10004[3] = aoX<"l">(7215, 9166732414681316368L ^ var1);
      var10004[4] = aoX<"l">(7195, 5962920541602118693L ^ var1);
      var10004[5] = aoX<"l">(28977, 1322257546158412051L ^ var1);
      var10004[aoX<"l">(16898, 8789148649851036215L ^ var1)] = aoX<"l">(157, 1904692434346238119L ^ var1);
      var10004[aoX<"l">(21774, 6690616640578499863L ^ var1)] = aoX<"l">(694, 1763702279761486471L ^ var1);
      var10004[aoX<"l">(17533, 3131709851232937039L ^ var1)] = aoX<"l">(20029, 5251644109775056394L ^ var1);
      var10004[aoX<"l">(16024, 7940567671175110305L ^ var1)] = aoX<"l">(18028, 1162433593899361859L ^ var1);
      var10004[aoX<"l">(32487, 2739865656671149773L ^ var1)] = aoX<"l">(28991, 6191318758950375697L ^ var1);
      var10004[aoX<"l">(16996, 5925841906109096520L ^ var1)] = aoX<"l">(620, 113545087715992137L ^ var1);
      var10004[aoX<"l">(1065, 4602094454814663701L ^ var1)] = aoX<"l">(13188, 293956639090201522L ^ var1);
      var10004[aoX<"l">(28024, 4973242512818212165L ^ var1)] = aoX<"l">(7438, 5235518026554441001L ^ var1);
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
