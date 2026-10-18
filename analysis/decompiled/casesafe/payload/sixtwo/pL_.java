package sixtwo;

import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class pL implements rp {
   private String EczVN;
   private pM rGmEj;
   private Integer xvWXP;
   private pK HGjEw;
   private Float DZxPz;
   private JsonObject zaRnm;
   private boolean QEWNh = true;
   private static long CgnyM;
   private static String[] czLGK;
   private static String[] PDABm;
   private static Map wbkBj;

   public native boolean cTo();

   public native pM cTj();

   private static native String cTy(int var0, long var1);

   public native pL cTu(JsonObject var1);

   public native JsonObject cTn();

   public native pL cTt(Float var1);

   public native pL cTv(boolean var1);

   public native String cTi();

   public native pL cTp(String var1);

   private static native String cTx(byte[] var0);

   public native pL cTq(pM var1);

   private static native MatchException cTw(MatchException var0);

   public native pL cTs(pK var1);

   private static native Object cTz(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native Integer cTk();

   public native pK cTl();

   public native pL cTr(Integer var1);

   private static native CallSite cTA(Lookup var0, String var1, MethodType var2);

   public native Float cTm();

   static {
      Loader.doInit(pL.class);
      _3155c37c5819a2ac0ae89982a2525bae();
   }

   @Override
   public native void fromJson(JsonObject var1);

   @Override
   public native JsonObject toJson();

   private static native void _3155c37c5819a2ac0ae89982a2525bae();
}
