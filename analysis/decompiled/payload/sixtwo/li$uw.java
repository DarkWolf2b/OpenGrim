package sixtwo;

import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public final class li$uw implements rp {
   private float OtyzD;
   private float SzlIr;
   private float VTLGQ;
   private float iJoXV;
   private static long flqYl;
   private static String[] EaEPG;
   private static String[] UKEBq;
   private static Map lIxiX;

   static {
      Loader.doInit(li$uw.class);
      _0a83ae2426c6512d17bcc5ebcfaae924();
   }

   @Override
   public native void fromJson(JsonObject var1);

   @Override
   public native JsonObject toJson();

   private static native String dvg(int var0, long var1);

   public native float dvb();

   public native float dvd();

   private static native Object dvh(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native float dvc();

   private static native CallSite dvi(Lookup var0, String var1, MethodType var2);

   private static native String dvf(byte[] var0);

   public native float dve();

   private static native void _0a83ae2426c6512d17bcc5ebcfaae924();
}
