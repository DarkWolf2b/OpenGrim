package sixtwo;

import java.util.List;
import java.util.concurrent.CompletableFuture;

public interface il {
   CompletableFuture<ir> fetchPreset(String var1);

   CompletableFuture<iu> importPreset(String var1);

   CompletableFuture<iu> deletePreset(String var1);

   CompletableFuture<List<ir>> fetchPresets();

   CompletableFuture<ir> createPreset(in var1);

   CompletableFuture<iu> loadPreset(in var1);
}
