package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import native.Loader;

public class bw extends az {
   private static float aFUAn;
   private static float Dpaff;
   private final ah tzVyn = new ah();
   private final List<bu> cQweT = new ArrayList<>();
   private final List<bu> OcAmG = new ArrayList<>();
   private final bx oafWa = new bx();
   private static int[] eUuos;
   private static long lnHem;
   private static String[] LVKwu;
   private static String[] PssjK;
   private static Map NDFGv;
   private static long[] rcGrP;
   private static Integer[] boUwc;
   private static Map qNkli;

   private static native void _15a8b9f15c75f28d339e1fbf3b5dddb1();

   private static native int IP(int var0, long var1);

   static {
      Loader.doInit(bw.class);
      _15a8b9f15c75f28d339e1fbf3b5dddb1();
   }

   private native P ID(aj var1);

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   @Override
   protected native void bV(lC var1);

   @Override
   public native boolean fC(double var1, double var3, double var5);

   public static native void II(int[] var0);

   private static native Object IN(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native float Iu(float var1, float var2);

   private native void IA(aj var1);

   private native bu Iz(String var1);

   private native void Iw(List<iy> var1);

   private static native String IL(byte[] var0);

   private native void Ix(float var1, float var2);

   private static native MatchException IK(MatchException var0);

   private static native int IQ(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite IR(Lookup var0, String var1, MethodType var2);

   private native String Iy(iy var1);

   private native P IC(aj var1);

   public static native int[] IJ();

   private static native String IM(int var0, long var1);

   private static native CallSite IO(Lookup var0, String var1, MethodType var2);

   private native void IB(aj var1);

   private native float Iv(int var1);

   private native float It(float var1);
}
