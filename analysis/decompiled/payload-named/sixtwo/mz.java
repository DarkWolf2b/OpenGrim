package sixtwo;

import com.google.gson.annotations.SerializedName;

public record mz<L, R>(@SerializedName("left") L left, @SerializedName("right") R right) {
   public static <L, R> mz<L, R> of(L var0, R var1) {
      return new mz<>((L)var0, (R)var1);
   }
}
