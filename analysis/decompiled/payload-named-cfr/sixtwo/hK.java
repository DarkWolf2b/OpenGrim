/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.Collections;
import java.util.List;
import sixtwo.hJ;

@FunctionalInterface
public interface hK {
    public hJ validate(String var1);

    default public List<String> suggestions(String string) {
        return Collections.emptyList();
    }
}

