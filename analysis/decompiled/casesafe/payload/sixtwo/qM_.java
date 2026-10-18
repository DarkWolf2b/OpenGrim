package sixtwo;

import java.util.ArrayDeque;
import java.util.Deque;
import java.util.List;
import native.Loader;

public class qM {
   private final Deque<mx> BZgpv;
   private final Deque<mx> AAdkc;
   private static long LyBHa;
   private static String tkinN;
   private static long wahZJ;

   public qM() {
      long var1 = LyBHa ^ 16894589186510L;
      super();
      boolean var10000 = qL.dcb();
      this.BZgpv = new ArrayDeque<>();
      boolean var3 = var10000;

      try {
         this.AAdkc = new ArrayDeque<>(
            List.of(
               new mx(mG.QHTxQ),
               new mx(mG.Cgzkn),
               new mx(mG.rxCUH),
               new mx(mG.NiWiU),
               new mx(mG.vuAhq),
               new mx(mG.NwQaf),
               new mx(mG.yHyOB),
               new mx(mG.JTHGB),
               new mx(mG.ibYER)
            )
         );
         this.dch();
         if (!var3) {
            iS.bwK("YNDGdb");
         }
      } catch (MatchException var4) {
         throw dcp(var4);
      }
   }

   static {
      Loader.doInit(qM.class);
      _b86d1041d15c34f233d5332ca752ee9b();
   }

   private static native String dcq(byte[] var0);

   public native void dcg(Deque<Integer> var1);

   public native void dce(mG var1);

   public native Deque<Integer> dci();

   public native Deque<mx> dcj();

   public native void dch();

   private static native MatchException dcp(MatchException var0);

   public native void dcf(int var1);

   public native Deque<mx> dck();

   private static native void _b86d1041d15c34f233d5332ca752ee9b();
}
