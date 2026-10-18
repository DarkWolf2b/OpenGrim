package mixin.accessors;

import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.util.List;
import java.util.Locale;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

@Mixin(
   targets = {"sixtwo.qO"},
   remap = false
)
public abstract class MediaSessionMixin {
   public MediaSessionMixin() {
   }

   @Inject(
      method = {"dcI"},
      at = {@At("TAIL")},
      remap = false
   )
   private void offline$selectActiveMusic(CallbackInfo var1) {
      try {
         ClassLoader var2 = this.getClass().getClassLoader();
         Class var3 = Class.forName("media.MediaPlayerInfo", true, var2);
         Object var4 = var3.getField("INSTANCE").get(null);
         List var5 = (List)var3.getMethod("getMediaSessions").invoke(var4);
         Object var6 = null;
         int var7 = Integer.MIN_VALUE;

         for (Object var9 : var5) {
            Object var10 = var9.getClass().getMethod("media").invoke(var9);
            if (var10 != null) {
               String var11 = stringValue(var10, "title");
               String var12 = stringValue(var10, "artist");
               boolean var13 = booleanValue(var10, "playing");
               long var14 = numberValue(var10, "duration");
               long var16 = numberValue(var10, "position");
               if (!var11.isBlank() && !var12.isBlank() && (var13 || var14 > 0L || var16 > 0L)) {
                  String var18 = String.valueOf(var9.getClass().getMethod("owner").invoke(var9)).toLowerCase(Locale.ROOT);
                  int var19 = (var13 ? 1000 : 0) + (var14 > 0L ? 200 : 0) + (var16 > 0L ? 20 : 0);
                  if (var18.matches(".*(spotify|yandex|music|vlc|foobar|youtube|apple).*")) {
                     var19 += 50;
                  }

                  if (var19 > var7) {
                     var7 = var19;
                     var6 = var9;
                  }
               }
            }
         }

         Field var21 = this.getClass().getDeclaredField("Nbypb");
         var21.setAccessible(true);
         Object var22 = var21.get(this);
         if (var6 == null) {
            var21.set(this, null);
            this.setField("PBdhi", "");
            this.setField("InsIP", "");
            this.setField("sNQdS", null);
         } else if (var6 != var22) {
            var21.set(this, var6);

            for (Method var26 : this.getClass().getDeclaredMethods()) {
               if (var26.getName().equals("dcJ") && var26.getParameterCount() == 1) {
                  var26.setAccessible(true);
                  var26.invoke(this, var6);
                  break;
               }
            }
         }
      } catch (Throwable var20) {
      }
   }

   private static String stringValue(Object var0, String var1) throws Exception {
      Object var2 = var0.getClass().getMethod(var1).invoke(var0);
      return var2 == null ? "" : String.valueOf(var2);
   }

   private static boolean booleanValue(Object var0, String var1) throws Exception {
      return Boolean.TRUE.equals(var0.getClass().getMethod(var1).invoke(var0));
   }

   private static long numberValue(Object var0, String var1) throws Exception {
      return var0.getClass().getMethod(var1).invoke(var0) instanceof Number var3 ? var3.longValue() : 0L;
   }

   private void setField(String var1, Object var2) throws Exception {
      Field var3 = this.getClass().getDeclaredField(var1);
      var3.setAccessible(true);
      var3.set(this, var2);
   }
}
