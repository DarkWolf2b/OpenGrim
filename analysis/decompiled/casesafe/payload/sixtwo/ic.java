package sixtwo;

import java.util.List;
import java.util.concurrent.CompletableFuture;

public interface ic {
   CompletableFuture<ij> createTheme(ig var1);

   CompletableFuture<List<ij>> fetchThemes();

   CompletableFuture<iu> deleteTheme(String var1);

   CompletableFuture<iu> importTheme(String var1);

   CompletableFuture<ij> fetchTheme(String var1);

   CompletableFuture<iu> loadTheme(ig var1);
}
