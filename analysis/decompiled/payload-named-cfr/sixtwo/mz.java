/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.annotations.SerializedName
 */
package sixtwo;

import com.google.gson.annotations.SerializedName;

public record mz<L, R>(@SerializedName(value="left") L left, @SerializedName(value="right") R right) {
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public static <L, R> mz<L, R> of(L l2, R r2) {
        return new mz<L, R>(l2, r2);
    }
}

