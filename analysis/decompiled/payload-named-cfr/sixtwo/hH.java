/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.List;
import sixtwo.hF;
import sixtwo.hI;

public abstract class hH {
    private boolean QQqas;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public void bdX(boolean bl2) {
        this.QQqas = bl2;
    }

    public void bdV() {
        List<hI> list = hF.bdO(this.getClass());
        if (list.isEmpty() || !hF.BQuMu) {
            return;
        }
        for (hI hI2 : list) {
            try {
                hI2.target().invokeWithArguments(hI2.source(), this);
            }
            catch (Throwable throwable) {
                throwable.printStackTrace();
            }
        }
    }

    public boolean bdW() {
        return this.QQqas;
    }
}

