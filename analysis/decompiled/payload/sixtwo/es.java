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
      super(gf.aZL(auu<"e">(316, 7491711970157238848L ^ var1), false, gh.xgeEn));
      int[] var10004 = new int[auu<"e">(31433, 3522553568071410098L ^ var1)];
      var10004[0] = auu<"e">(9279, 4201747433357066056L ^ var1);
      var10004[1] = auu<"e">(22677, 728883571312313282L ^ var1);
      var10004[2] = auu<"e">(22105, 6047962536551697704L ^ var1);
      var10004[3] = auu<"e">(3514, 8179054745200924372L ^ var1);
      var10004[4] = auu<"e">(32078, 128953913201354271L ^ var1);
      var10004[5] = auu<"e">(8139, 7980018741411939483L ^ var1);
      var10004[auu<"e">(7491, 9115743815337215549L ^ var1)] = auu<"e">(11962, 8895196638229935577L ^ var1);
      var10004[auu<"e">(23309, 2672716746125099105L ^ var1)] = auu<"e">(28849, 6966711964381375446L ^ var1);
      var10004[auu<"e">(15416, 7248858557228590955L ^ var1)] = auu<"e">(29706, 3769500201499815797L ^ var1);
      var10004[auu<"e">(15851, 1203303981261596290L ^ var1)] = auu<"e">(549, 7689113347315439953L ^ var1);
      var10004[auu<"e">(22928, 5206583559785464557L ^ var1)] = auu<"e">(7987, 6736307094444901477L ^ var1);
      this.nPcnW = new cv(this, mr.clS(var10004));
      cv var10003 = this.nPcnW;
      var10004 = new int[auu<"e">(14390, 5328782335114912580L ^ var1)];
      var10004[0] = auu<"e">(9379, 7810377742206746574L ^ var1);
      var10004[1] = auu<"e">(22726, 1550883844803216295L ^ var1);
      var10004[2] = auu<"e">(23196, 3510532966925451756L ^ var1);
      var10004[3] = auu<"e">(15658, 758067671198017151L ^ var1);
      var10004[4] = auu<"e">(7291, 7077489460909213469L ^ var1);
      var10004[5] = auu<"e">(18363, 7535777909888376014L ^ var1);
      var10004[auu<"e">(22491, 7652378852145188030L ^ var1)] = auu<"e">(2971, 1843971649524535551L ^ var1);
      var10004[auu<"e">(2823, 2175817902573719653L ^ var1)] = auu<"e">(27652, 9072878606508423031L ^ var1);
      var10004[auu<"e">(29232, 2080348256166144356L ^ var1)] = auu<"e">(31872, 5380922146917148664L ^ var1);
      var10004[auu<"e">(14774, 7669243980538651340L ^ var1)] = auu<"e">(366, 8969166108447087127L ^ var1);
      this.lfLfR = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.nPcnW;
      var10004 = new int[auu<"e">(14636, 3923492151362363971L ^ var1)];
      var10004[0] = auu<"e">(31744, 7618226143811004242L ^ var1);
      var10004[1] = auu<"e">(11953, 4537038232892487121L ^ var1);
      var10004[2] = auu<"e">(1722, 1446228145705557456L ^ var1);
      var10004[3] = auu<"e">(18812, 276209505045664266L ^ var1);
      var10004[4] = auu<"e">(16464, 5348101358966758200L ^ var1);
      var10004[5] = auu<"e">(31230, 8900109674208912021L ^ var1);
      var10004[auu<"e">(22491, 7652378852145188030L ^ var1)] = auu<"e">(18363, 7535777909888376014L ^ var1);
      var10004[auu<"e">(2823, 2175817902573719653L ^ var1)] = auu<"e">(2971, 1843971649524535551L ^ var1);
      var10004[auu<"e">(29232, 2080348256166144356L ^ var1)] = auu<"e">(27652, 9072878606508423031L ^ var1);
      var10004[auu<"e">(14774, 7669243980538651340L ^ var1)] = auu<"e">(31872, 5380922146917148664L ^ var1);
      var10004[auu<"e">(14390, 5328782335114912580L ^ var1)] = auu<"e">(366, 8969166108447087127L ^ var1);
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
