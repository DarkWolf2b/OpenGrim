/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.List;
import sixtwo.hM;
import sixtwo.hW;

public interface hZ {
    public boolean executable();

    public hW handler();

    public List<hM<?>> parameters();

    public List<String> names();

    public String description();

    public List<hZ> subcommands();
}

