package sixtwo;

import java.util.List;
import java.util.concurrent.CompletableFuture;

public interface iK {
   CompletableFuture<iM> likeConfig(String var1);

   CompletableFuture<iu> loadConfig(iM var1);

   CompletableFuture<iu> importConfig(String var1);

   CompletableFuture<iu> deleteConfig(String var1);

   CompletableFuture<iM> dislikeConfig(String var1);

   CompletableFuture<iM> createConfig(int[] var1, int[] var2, iL var3);

   CompletableFuture<iM> downloadConfig(String var1);

   CompletableFuture<iu> resetLoadedConfig();

   CompletableFuture<List<iO>> fetchMetadata();

   CompletableFuture<iM> updateConfig(String var1, int[] var2, int[] var3, iL var4, boolean var5);

   CompletableFuture<iu> favouriteConfig(String var1);
}
