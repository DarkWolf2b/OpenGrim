/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.List;
import java.util.concurrent.CompletableFuture;
import sixtwo.in;
import sixtwo.ir;
import sixtwo.iu;

public interface il {
    public CompletableFuture<ir> fetchPreset(String var1);

    public CompletableFuture<iu> importPreset(String var1);

    public CompletableFuture<iu> deletePreset(String var1);

    public CompletableFuture<List<ir>> fetchPresets();

    public CompletableFuture<ir> createPreset(in var1);

    public CompletableFuture<iu> loadPreset(in var1);
}

