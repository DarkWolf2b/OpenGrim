package sixtwo;

import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class ij extends ig implements rp {
   String FiCDY;
   String hXfMy;
   private static long fkfrj;
   private static String[] aLucX;
   private static String[] qdFFd;
   private static Map LajUB;

   public native ij bke(String var1);

   private static native MatchException bkg(MatchException var0);

   public native ij bkf(String var1);

   private static native Object bkj(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native String bkd();

   private static native String bki(int var0, long var1);

   private static native String bkh(byte[] var0);

   private static native CallSite bkk(Lookup var0, String var1, MethodType var2);

   public ij() {
   }

   public ij(String param1, String param2, int[] param3, ie param4, if param5, id param6) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ij.fkfrj J
      // 03: ldc2_w 98174364603103
      // 06: lxor
      // 07: lstore 7
      // 09: aload 0
      // 0a: aload 3
      // 0b: aload 4
      // 0d: aload 5
      // 0f: aload 6
      // 11: invokespecial sixtwo/ig.<init> ([ILsixtwo/ie;Lsixtwo/if;Lsixtwo/id;)V
      // 14: invokestatic sixtwo/cJ.WH ()Z
      // 17: aload 0
      // 18: aload 1
      // 19: putfield sixtwo/ij.FiCDY Ljava/lang/String;
      // 1c: istore 9
      // 1e: aload 0
      // 1f: aload 2
      // 20: putfield sixtwo/ij.hXfMy Ljava/lang/String;
      // 23: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 26: ifnonnull 41
      // 29: iload 9
      // 2b: ifeq 3d
      // 2e: goto 35
      // 31: invokestatic sixtwo/ij.bkg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 34: athrow
      // 35: bipush 0
      // 36: goto 3e
      // 39: invokestatic sixtwo/ij.bkg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: bipush 1
      // 3e: invokestatic sixtwo/cJ.WG (Z)V
      // 41: return
   }

   static {
      Loader.doInit(ij.class);
      _f2b524f8e76a56962fb3b97ccefaac45();
   }

   @Override
   public native String bit();

   @Override
   public native void fromJson(JsonObject var1);

   @Override
   public native JsonObject toJson();

   @Override
   public native boolean biu();

   private static native void _f2b524f8e76a56962fb3b97ccefaac45();
}
