/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonArray
 *  com.google.gson.JsonElement
 *  com.google.gson.JsonObject
 *  com.google.gson.JsonPrimitive
 *  net.minecraft.class_241
 */
package sixtwo;

import com.google.gson.JsonArray;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonPrimitive;
import java.lang.invoke.MethodHandles;
import java.time.Instant;
import java.time.format.DateTimeParseException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.function.Supplier;
import net.minecraft.class_241;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.rm;

public interface rp {
    public static final long kpXrA = gb.aYR(5211369814533665663L, 4045199368490434293L, MethodHandles.lookup().lookupClass()).a(107105863367195L);

    private static RuntimeException a(RuntimeException runtimeException) {
        return runtimeException;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    default public <T extends rp> T readObject(JsonObject jsonObject, String string, Supplier<T> supplier) {
        Object object;
        JsonElement jsonElement;
        block7: {
            block8: {
                iS[] iSArray;
                block6: {
                    long l = kpXrA ^ 0x3A33D9E976E0L;
                    jsonElement = this.readElement(jsonObject, string);
                    iSArray = rm.div();
                    try {
                        object = jsonElement;
                        if (iSArray == null) break block6;
                        if (object == null) return null;
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                    object = jsonElement;
                }
                try {
                    try {
                        if (iSArray == null) break block7;
                        if (object.isJsonObject()) break block8;
                        return null;
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                }
                catch (DateTimeParseException dateTimeParseException) {
                    throw rp.a(dateTimeParseException);
                }
            }
            object = supplier.get();
        }
        rp rp2 = (rp)object;
        rp2.fromJson(jsonElement.getAsJsonObject());
        return (T)rp2;
    }

    default public int readInt(JsonObject jsonObject, String string) {
        int n;
        block6: {
            JsonElement jsonElement;
            block4: {
                JsonElement jsonElement2;
                block5: {
                    long l = kpXrA ^ 0x1369E88E0C8EL;
                    jsonElement2 = this.readElement(jsonObject, string);
                    iS[] iSArray = rm.div();
                    try {
                        try {
                            jsonElement = jsonElement2;
                            if (iSArray == null) break block4;
                            if (jsonElement != null) break block5;
                        }
                        catch (DateTimeParseException dateTimeParseException) {
                            throw rp.a(dateTimeParseException);
                        }
                        n = 0;
                        break block6;
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                }
                jsonElement = jsonElement2;
            }
            n = jsonElement.getAsInt();
        }
        return n;
    }

    default public float readFloat(JsonObject jsonObject, String string) {
        float f;
        block6: {
            JsonElement jsonElement;
            block4: {
                JsonElement jsonElement2;
                block5: {
                    long l = kpXrA ^ 0x10C661DE1610L;
                    jsonElement2 = this.readElement(jsonObject, string);
                    iS[] iSArray = rm.div();
                    try {
                        try {
                            jsonElement = jsonElement2;
                            if (iSArray == null) break block4;
                            if (jsonElement != null) break block5;
                        }
                        catch (DateTimeParseException dateTimeParseException) {
                            throw rp.a(dateTimeParseException);
                        }
                        f = 0.0f;
                        break block6;
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                }
                jsonElement = jsonElement2;
            }
            f = jsonElement.getAsFloat();
        }
        return f;
    }

    default public boolean readBoolean(JsonObject jsonObject, String string, boolean bl) {
        boolean bl2;
        block6: {
            JsonElement jsonElement;
            block4: {
                JsonElement jsonElement2;
                block5: {
                    long l = kpXrA ^ 0x6D18908D9E93L;
                    jsonElement2 = this.readElement(jsonObject, string);
                    iS[] iSArray = rm.div();
                    try {
                        try {
                            jsonElement = jsonElement2;
                            if (iSArray == null) break block4;
                            if (jsonElement != null) break block5;
                        }
                        catch (DateTimeParseException dateTimeParseException) {
                            throw rp.a(dateTimeParseException);
                        }
                        bl2 = bl;
                        break block6;
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                }
                jsonElement = jsonElement2;
            }
            bl2 = jsonElement.getAsBoolean();
        }
        return bl2;
    }

    default public Long readLong(JsonObject jsonObject, String string) {
        Long l;
        block6: {
            JsonElement jsonElement;
            block4: {
                JsonElement jsonElement2;
                block5: {
                    long l2 = kpXrA ^ 0x3689FFAF348AL;
                    jsonElement2 = this.readElement(jsonObject, string);
                    iS[] iSArray = rm.div();
                    try {
                        try {
                            jsonElement = jsonElement2;
                            if (iSArray == null) break block4;
                            if (jsonElement != null) break block5;
                        }
                        catch (DateTimeParseException dateTimeParseException) {
                            throw rp.a(dateTimeParseException);
                        }
                        l = null;
                        break block6;
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                }
                jsonElement = jsonElement2;
            }
            l = jsonElement.getAsLong();
        }
        return l;
    }

    default public String readString(JsonObject jsonObject, String string) {
        String string2;
        block6: {
            JsonElement jsonElement;
            block4: {
                JsonElement jsonElement2;
                block5: {
                    long l = kpXrA ^ 0x2CB049EF3275L;
                    jsonElement2 = this.readElement(jsonObject, string);
                    iS[] iSArray = rm.div();
                    try {
                        try {
                            jsonElement = jsonElement2;
                            if (iSArray == null) break block4;
                            if (jsonElement != null) break block5;
                        }
                        catch (DateTimeParseException dateTimeParseException) {
                            throw rp.a(dateTimeParseException);
                        }
                        string2 = null;
                        break block6;
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                }
                jsonElement = jsonElement2;
            }
            string2 = jsonElement.getAsString();
        }
        return string2;
    }

    default public Integer readInteger(JsonObject jsonObject, String string) {
        Integer n;
        block6: {
            JsonElement jsonElement;
            block4: {
                JsonElement jsonElement2;
                block5: {
                    long l = kpXrA ^ 0x389F9E0CF16BL;
                    jsonElement2 = this.readElement(jsonObject, string);
                    iS[] iSArray = rm.div();
                    try {
                        try {
                            jsonElement = jsonElement2;
                            if (iSArray == null) break block4;
                            if (jsonElement != null) break block5;
                        }
                        catch (DateTimeParseException dateTimeParseException) {
                            throw rp.a(dateTimeParseException);
                        }
                        n = null;
                        break block6;
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                }
                jsonElement = jsonElement2;
            }
            n = jsonElement.getAsInt();
        }
        return n;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    default public JsonElement readElement(JsonObject jsonObject, String string) {
        JsonElement jsonElement;
        JsonElement jsonElement2;
        block15: {
            iS[] iSArray;
            block14: {
                String string2;
                block13: {
                    long l = kpXrA ^ 0x5A7815E948BEL;
                    iSArray = rm.div();
                    try {
                        try {
                            if (jsonObject == null) return null;
                            string2 = string;
                            if (iSArray == null) break block13;
                        }
                        catch (DateTimeParseException dateTimeParseException) {
                            throw rp.a(dateTimeParseException);
                        }
                        if (string2 == null) return null;
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                    string2 = string;
                }
                try {
                    if (string2.isBlank()) {
                        return null;
                    }
                }
                catch (DateTimeParseException dateTimeParseException) {
                    throw rp.a(dateTimeParseException);
                }
                jsonElement2 = jsonObject.get(string);
                try {
                    jsonElement = jsonElement2;
                    if (iSArray == null) break block14;
                    if (jsonElement == null) return null;
                }
                catch (DateTimeParseException dateTimeParseException) {
                    throw rp.a(dateTimeParseException);
                }
                jsonElement = jsonElement2;
            }
            try {
                try {
                    if (iSArray == null) return jsonElement;
                    if (!jsonElement.isJsonNull()) break block15;
                    return null;
                }
                catch (DateTimeParseException dateTimeParseException) {
                    throw rp.a(dateTimeParseException);
                }
            }
            catch (DateTimeParseException dateTimeParseException) {
                throw rp.a(dateTimeParseException);
            }
        }
        jsonElement = jsonElement2;
        return jsonElement;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    default public <T extends rp> List<T> readList(JsonObject jsonObject, String string, Supplier<T> supplier) {
        JsonElement jsonElement;
        iS[] iSArray;
        block16: {
            JsonElement jsonElement2;
            block17: {
                block15: {
                    long l = kpXrA ^ 0x2A0204F9BB3FL;
                    jsonElement2 = this.readElement(jsonObject, string);
                    iSArray = rm.div();
                    try {
                        jsonElement = jsonElement2;
                        if (iSArray == null) break block15;
                        if (jsonElement == null) return null;
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                    jsonElement = jsonElement2;
                }
                try {
                    try {
                        if (iSArray == null) break block16;
                        if (jsonElement.isJsonArray()) break block17;
                        return null;
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                }
                catch (DateTimeParseException dateTimeParseException) {
                    throw rp.a(dateTimeParseException);
                }
            }
            jsonElement = jsonElement2;
        }
        JsonArray jsonArray = jsonElement.getAsJsonArray();
        ArrayList<rp> arrayList = new ArrayList<rp>(jsonArray.size());
        for (JsonElement jsonElement3 : jsonArray) {
            Object object;
            block20: {
                boolean bl;
                block19: {
                    JsonElement jsonElement4;
                    block18: {
                        try {
                            jsonElement4 = jsonElement3;
                            if (iSArray == null) break block18;
                            if (jsonElement4 == null) continue;
                        }
                        catch (DateTimeParseException dateTimeParseException) {
                            throw rp.a(dateTimeParseException);
                        }
                        jsonElement4 = jsonElement3;
                    }
                    try {
                        bl = jsonElement4.isJsonNull();
                        if (iSArray == null) break block19;
                        if (bl) continue;
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                    try {
                        object = jsonElement3;
                        if (iSArray == null) break block20;
                        bl = object.isJsonObject();
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                }
                try {
                    if (!bl && iSArray != null) continue;
                }
                catch (DateTimeParseException dateTimeParseException) {
                    throw rp.a(dateTimeParseException);
                }
                object = supplier.get();
            }
            rp rp2 = (rp)object;
            rp2.fromJson(jsonElement3.getAsJsonObject());
            arrayList.add(rp2);
            if (iSArray != null) continue;
        }
        return arrayList;
    }

    /*
     * Loose catch block
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    default public Instant readInstant(JsonObject jsonObject, String string) {
        String string2;
        String string3;
        block9: {
            iS[] iSArray;
            block8: {
                long l = kpXrA ^ 0x79B7BFB9E817L;
                string3 = this.readString(jsonObject, string);
                iSArray = rm.div();
                try {
                    string2 = string3;
                    if (iSArray == null) break block8;
                    if (string2 == null) return null;
                }
                catch (DateTimeParseException dateTimeParseException) {
                    throw rp.a(dateTimeParseException);
                }
                string2 = string3;
            }
            if (iSArray == null) return Instant.parse(string2);
            try {
                if (!string2.isBlank()) break block9;
                return null;
                catch (DateTimeParseException dateTimeParseException) {
                    throw rp.a(dateTimeParseException);
                }
            }
            catch (DateTimeParseException dateTimeParseException) {
                throw rp.a(dateTimeParseException);
            }
        }
        try {
            string2 = string3;
            return Instant.parse(string2);
        }
        catch (DateTimeParseException dateTimeParseException) {
            return null;
        }
    }

    default public JsonArray writeStringList(List<String> list) {
        List<String> list2;
        iS[] iSArray;
        JsonArray jsonArray;
        block8: {
            block9: {
                long l = kpXrA ^ 0x2367A5F6499CL;
                jsonArray = new JsonArray();
                iSArray = rm.div();
                try {
                    try {
                        list2 = list;
                        if (iSArray == null) break block8;
                        if (list2 != null) break block9;
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                    return jsonArray;
                }
                catch (DateTimeParseException dateTimeParseException) {
                    throw rp.a(dateTimeParseException);
                }
            }
            list2 = list;
        }
        for (String string : list2) {
            try {
                if (string != null) {
                    jsonArray.add((JsonElement)new JsonPrimitive(string));
                }
            }
            catch (DateTimeParseException dateTimeParseException) {
                throw rp.a(dateTimeParseException);
            }
            if (iSArray != null) continue;
        }
        return jsonArray;
    }

    default public JsonArray writeIntArray(int[] nArray) {
        JsonArray jsonArray;
        block10: {
            int[] nArray2;
            iS[] iSArray;
            JsonArray jsonArray2;
            block8: {
                block9: {
                    long l = kpXrA ^ 0x28D27F1F18D6L;
                    jsonArray2 = new JsonArray();
                    iSArray = rm.div();
                    try {
                        try {
                            nArray2 = nArray;
                            if (iSArray == null) break block8;
                            if (nArray2 != null) break block9;
                        }
                        catch (DateTimeParseException dateTimeParseException) {
                            throw rp.a(dateTimeParseException);
                        }
                        return jsonArray2;
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                }
                nArray2 = nArray;
            }
            for (int n : nArray2) {
                try {
                    jsonArray = jsonArray2;
                    if (iSArray != null) {
                        jsonArray.add((JsonElement)new JsonPrimitive((Number)n));
                        if (iSArray != null) continue;
                        break;
                    }
                    break block10;
                }
                catch (DateTimeParseException dateTimeParseException) {
                    throw rp.a(dateTimeParseException);
                }
            }
            jsonArray = jsonArray2;
        }
        return jsonArray;
    }

    default public List<String> safeStringList(List<String> list) {
        List<String> list2;
        block2: {
            block3: {
                long l = kpXrA ^ 0x16F96DB8230L;
                iS[] iSArray = rm.div();
                try {
                    list2 = list;
                    if (iSArray == null) break block2;
                    if (list2 != null) break block3;
                }
                catch (DateTimeParseException dateTimeParseException) {
                    throw rp.a(dateTimeParseException);
                }
                list2 = Collections.emptyList();
                break block2;
            }
            list2 = list;
        }
        return list2;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    default public List<String> readStringList(JsonObject jsonObject, String string) {
        JsonElement jsonElement;
        iS[] iSArray;
        block14: {
            JsonElement jsonElement2;
            block15: {
                block13: {
                    long l = kpXrA ^ 0x53C10DDCCE0BL;
                    jsonElement2 = this.readElement(jsonObject, string);
                    iSArray = rm.div();
                    try {
                        jsonElement = jsonElement2;
                        if (iSArray == null) break block13;
                        if (jsonElement == null) return null;
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                    jsonElement = jsonElement2;
                }
                try {
                    try {
                        if (iSArray == null) break block14;
                        if (jsonElement.isJsonArray()) break block15;
                        return null;
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                }
                catch (DateTimeParseException dateTimeParseException) {
                    throw rp.a(dateTimeParseException);
                }
            }
            jsonElement = jsonElement2;
        }
        JsonArray jsonArray = jsonElement.getAsJsonArray();
        ArrayList<String> arrayList = new ArrayList<String>(jsonArray.size());
        for (JsonElement jsonElement3 : jsonArray) {
            block17: {
                boolean bl;
                block18: {
                    JsonElement jsonElement4;
                    block16: {
                        try {
                            jsonElement4 = jsonElement3;
                            if (iSArray == null) break block16;
                            if (jsonElement4 == null) continue;
                        }
                        catch (DateTimeParseException dateTimeParseException) {
                            throw rp.a(dateTimeParseException);
                        }
                        jsonElement4 = jsonElement3;
                    }
                    try {
                        try {
                            bl = jsonElement4.isJsonNull();
                            if (iSArray == null) break block17;
                            if (!bl) break block18;
                        }
                        catch (DateTimeParseException dateTimeParseException) {
                            throw rp.a(dateTimeParseException);
                        }
                        if (iSArray != null) continue;
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                }
                bl = arrayList.add(jsonElement3.getAsString());
            }
            if (iSArray != null) continue;
        }
        return arrayList;
    }

    /*
     * Unable to fully structure code
     */
    default public int[] readIntArray(JsonObject var1_1, String var2_2) {
        block20: {
            block18: {
                block19: {
                    block17: {
                        var3_3 = rp.kpXrA ^ 125809378090599L;
                        var6_4 = this.readElement(var1_1, var2_2);
                        var5_5 = rm.div();
                        try {
                            v0 = var6_4;
                            if (var5_5 == null) break block17;
                            if (v0 != null) {
                            }
                            ** GOTO lbl21
                        }
                        catch (DateTimeParseException v1) {
                            throw rp.a(v1);
                        }
                        v0 = var6_4;
                    }
                    try {
                        try {
                            if (var5_5 == null) break block18;
                            if (v0.isJsonArray()) break block19;
                        }
                        catch (DateTimeParseException v2) {
                            throw rp.a(v2);
                        }
lbl21:
                        // 2 sources

                        return null;
                    }
                    catch (DateTimeParseException v3) {
                        throw rp.a(v3);
                    }
                }
                v0 = var6_4;
            }
            var7_6 = v0.getAsJsonArray();
            var8_7 = new int[var7_6.size()];
            for (var9_8 = 0; var9_8 < var7_6.size(); ++var9_8) {
                block24: {
                    block22: {
                        block23: {
                            block21: {
                                var10_9 = var7_6.get(var9_8);
                                try {
                                    try {
                                        v4 = var8_7;
                                        if (var5_5 == null) break block20;
                                        v5 = var9_8;
                                        v6 = var10_9;
                                        if (var5_5 == null) break block21;
                                    }
                                    catch (DateTimeParseException v7) {
                                        throw rp.a(v7);
                                    }
                                    if (v6 != null) {
                                    }
                                    ** GOTO lbl55
                                }
                                catch (DateTimeParseException v8) {
                                    throw rp.a(v8);
                                }
                                v6 = var10_9;
                            }
                            try {
                                try {
                                    if (var5_5 == null) break block22;
                                    if (!v6.isJsonNull()) break block23;
                                }
                                catch (DateTimeParseException v9) {
                                    throw rp.a(v9);
                                }
lbl55:
                                // 2 sources

                                v10 = 0;
                                break block24;
                            }
                            catch (DateTimeParseException v11) {
                                throw rp.a(v11);
                            }
                        }
                        v6 = var10_9;
                    }
                    v10 = v6.getAsInt();
                }
                v4[v5] = v10;
                if (var5_5 != null) continue;
            }
            v4 = var8_7;
        }
        return v4;
    }

    public void fromJson(JsonObject var1);

    default public JsonObject toJson() {
        return new JsonObject();
    }

    default public JsonObject writeVec2(class_241 class_2412) {
        JsonObject jsonObject;
        block4: {
            block5: {
                long l = kpXrA ^ 0x4E86EE2D2FDL;
                jsonObject = new JsonObject();
                iS[] iSArray = rm.div();
                try {
                    try {
                        if (iSArray == null) break block4;
                        if (class_2412 != null) break block5;
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                    return jsonObject;
                }
                catch (DateTimeParseException dateTimeParseException) {
                    throw rp.a(dateTimeParseException);
                }
            }
            jsonObject.addProperty("x", (Number)Float.valueOf(class_2412.field_1343));
            jsonObject.addProperty("y", (Number)Float.valueOf(class_2412.field_1342));
        }
        return jsonObject;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    default public class_241 readVec2(JsonObject jsonObject, String string) {
        JsonElement jsonElement;
        block7: {
            JsonElement jsonElement2;
            block8: {
                iS[] iSArray;
                block6: {
                    long l = kpXrA ^ 0x43746A9B333L;
                    jsonElement2 = this.readElement(jsonObject, string);
                    iSArray = rm.div();
                    try {
                        jsonElement = jsonElement2;
                        if (iSArray == null) break block6;
                        if (jsonElement == null) return null;
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                    jsonElement = jsonElement2;
                }
                try {
                    try {
                        if (iSArray == null) break block7;
                        if (jsonElement.isJsonObject()) break block8;
                        return null;
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                }
                catch (DateTimeParseException dateTimeParseException) {
                    throw rp.a(dateTimeParseException);
                }
            }
            jsonElement = jsonElement2;
        }
        JsonObject jsonObject2 = jsonElement.getAsJsonObject();
        return new class_241(this.readFloat(jsonObject2, "x"), this.readFloat(jsonObject2, "y"));
    }

    default public JsonArray writeList(List<? extends rp> list) {
        List<? extends rp> list2;
        iS[] iSArray;
        JsonArray jsonArray;
        block8: {
            block9: {
                long l = kpXrA ^ 0x121F020E41A1L;
                jsonArray = new JsonArray();
                iSArray = rm.div();
                try {
                    try {
                        list2 = list;
                        if (iSArray == null) break block8;
                        if (list2 != null) break block9;
                    }
                    catch (DateTimeParseException dateTimeParseException) {
                        throw rp.a(dateTimeParseException);
                    }
                    return jsonArray;
                }
                catch (DateTimeParseException dateTimeParseException) {
                    throw rp.a(dateTimeParseException);
                }
            }
            list2 = list;
        }
        for (rp rp2 : list2) {
            try {
                if (rp2 != null) {
                    jsonArray.add((JsonElement)rp2.toJson());
                }
            }
            catch (DateTimeParseException dateTimeParseException) {
                throw rp.a(dateTimeParseException);
            }
            if (iSArray != null) continue;
        }
        return jsonArray;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    default public <E extends Enum<E>> E readEnum(JsonObject jsonObject, String string, Class<E> clazz, E e) {
        String string2;
        String string3;
        block7: {
            long l = kpXrA ^ 0x490CED018359L;
            string3 = this.readString(jsonObject, string);
            iS[] iSArray = rm.div();
            try {
                string2 = string3;
                if (iSArray == null) break block7;
                if (string2 == null) return e;
            }
            catch (IllegalArgumentException illegalArgumentException) {
                throw rp.a(illegalArgumentException);
            }
            string2 = string3;
        }
        try {
            if (string2.isBlank()) {
                return e;
            }
        }
        catch (IllegalArgumentException illegalArgumentException) {
            throw rp.a(illegalArgumentException);
        }
        try {
            return Enum.valueOf(clazz, string3);
        }
        catch (IllegalArgumentException illegalArgumentException) {
            return e;
        }
    }
}
