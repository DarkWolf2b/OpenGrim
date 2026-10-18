package sixtwo;

import java.util.List;
import java.util.concurrent.CompletableFuture;

public interface ix {
   CompletableFuture<iz> fetchKeyPreset(String var1);

   CompletableFuture<iy> updateProfile(String var1, iD var2);

   CompletableFuture<iy> createProfile(iD var1);

   CompletableFuture<iu> deleteProfile(String var1);

   CompletableFuture<iu> importProfile(String var1);

   CompletableFuture<List<iy>> fetchProfiles();

   CompletableFuture<iu> loadProfile(iy var1);

   CompletableFuture<iy> fetchProfile(String var1);
}
