/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.option.KeyBinding
 *  net.minecraft.client.util.InputUtil$Key
 */
package sixtwo;

import java.util.List;
import java.util.Map;
import net.minecraft.client.option.KeyBinding;
import net.minecraft.client.util.InputUtil;
import sixtwo.hH;

public class gz
extends hH {
    private InputUtil.Key YKcvD;
    private Map<InputUtil.Key, List<KeyBinding>> zrjpu;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public boolean bbK(KeyBinding keyBinding) {
        return this.bbJ().contains(keyBinding);
    }

    public InputUtil.Key bbL() {
        return this.YKcvD;
    }

    public List<KeyBinding> bbJ() {
        return this.zrjpu.getOrDefault(this.YKcvD, List.of());
    }

    public Map<InputUtil.Key, List<KeyBinding>> bbM() {
        return this.zrjpu;
    }

    public gz(InputUtil.Key key, Map<InputUtil.Key, List<KeyBinding>> map) {
        this.YKcvD = key;
        this.zrjpu = map;
    }
}

