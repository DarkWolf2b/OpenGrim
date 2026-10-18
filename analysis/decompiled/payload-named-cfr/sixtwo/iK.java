/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.List;
import java.util.concurrent.CompletableFuture;
import sixtwo.iL;
import sixtwo.iM;
import sixtwo.iO;
import sixtwo.iu;

public interface iK {
    public CompletableFuture<iM> likeConfig(String var1);

    public CompletableFuture<iu> loadConfig(iM var1);

    public CompletableFuture<iu> importConfig(String var1);

    public CompletableFuture<iu> deleteConfig(String var1);

    public CompletableFuture<iM> dislikeConfig(String var1);

    public CompletableFuture<iM> createConfig(int[] var1, int[] var2, iL var3);

    public CompletableFuture<iM> downloadConfig(String var1);

    public CompletableFuture<iu> resetLoadedConfig();

    public CompletableFuture<List<iO>> fetchMetadata();

    public CompletableFuture<iM> updateConfig(String var1, int[] var2, int[] var3, iL var4, boolean var5);

    public CompletableFuture<iu> favouriteConfig(String var1);
}

