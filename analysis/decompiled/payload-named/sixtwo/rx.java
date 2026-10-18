package sixtwo;

import com.mojang.authlib.GameProfile;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.client.network.ClientPlayNetworkHandler;
import net.minecraft.network.packet.Packet;
import net.minecraft.resource.featuretoggle.FeatureSet;
import sun.misc.Unsafe;

public final class rx extends ClientPlayNetworkHandler {
   private static Unsafe cLtlW;
   private static long wMMGt;
   private static String[] IoVeH;
   private static String[] zQYLl;
   private static Map vUbeC;

   private rx() {
      super(null, null, null);
   }

   static {
      Loader.doInit(rx.class);
      _65250f19b3ee5dd41d7b8907c6a1f483();
   }

   public static native rx dkv();

   private static native void _65250f19b3ee5dd41d7b8907c6a1f483();

   @Override
   public native void sendPacket(Packet<?> packet);

   @Override
   public native FeatureSet getEnabledFeatures();

   @Override
   public native GameProfile getProfile();

   private static native Object dkz(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native RuntimeException dkw(RuntimeException var0);

   private static native CallSite dkA(Lookup var0, String var1, MethodType var2);

   private static native String dkx(byte[] var0);

   private static native String dky(int var0, long var1);
}
