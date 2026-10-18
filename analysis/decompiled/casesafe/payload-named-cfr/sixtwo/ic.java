/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.List;
import java.util.concurrent.CompletableFuture;
import sixtwo.ig;
import sixtwo.ij;
import sixtwo.iu;

public interface ic {
    public CompletableFuture<ij> createTheme(ig var1);

    public CompletableFuture<List<ij>> fetchThemes();

    public CompletableFuture<iu> deleteTheme(String var1);

    public CompletableFuture<iu> importTheme(String var1);

    public CompletableFuture<ij> fetchTheme(String var1);

    public CompletableFuture<iu> loadTheme(ig var1);
}

