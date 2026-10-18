/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.List;
import java.util.concurrent.CompletableFuture;
import sixtwo.iD;
import sixtwo.iu;
import sixtwo.iy;
import sixtwo.iz;

public interface ix {
    public CompletableFuture<iz> fetchKeyPreset(String var1);

    public CompletableFuture<iy> updateProfile(String var1, iD var2);

    public CompletableFuture<iy> createProfile(iD var1);

    public CompletableFuture<iu> deleteProfile(String var1);

    public CompletableFuture<iu> importProfile(String var1);

    public CompletableFuture<List<iy>> fetchProfiles();

    public CompletableFuture<iu> loadProfile(iy var1);

    public CompletableFuture<iy> fetchProfile(String var1);
}

