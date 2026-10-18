/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import sixtwo.hG;
import sixtwo.hH;
import sixtwo.hI;

public class hF {
    private static final Map<Class<? extends hH>, List<hI>> PTGDf = new ConcurrentHashMap<Class<? extends hH>, List<hI>>();
    private static final MethodHandles.Lookup JRwhO = MethodHandles.lookup();
    public static volatile boolean BQuMu = false;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public static void bdI(Object object) {
        hF.bdJ(object, null);
    }

    public static void bdM(Object object) {
        PTGDf.values().forEach(list -> list.removeIf(hI2 -> hI2.source().equals(object)));
        hF.bdN(true);
    }

    public static void bdH() {
        BQuMu = true;
    }

    public static void bdP() {
        BQuMu = false;
        PTGDf.clear();
    }

    private static void bdL(Method method, Object object) {
        Class<?> clazz2 = method.getParameterTypes()[0];
        try {
            MethodHandle methodHandle = JRwhO.unreflect(method);
            hI hI4 = new hI(object, methodHandle, method.getAnnotation(hG.class).priority().cmD());
            List list = PTGDf.computeIfAbsent(clazz2, clazz -> new CopyOnWriteArrayList());
            if (!list.contains(hI4)) {
                list.add(hI4);
                list.sort((hI2, hI3) -> Integer.compare(hI3.value(), hI2.value()));
            }
        }
        catch (IllegalAccessException illegalAccessException) {
            // empty catch block
        }
    }

    public static void bdN(boolean bl2) {
        PTGDf.entrySet().removeIf(entry -> bl2 && ((List)entry.getValue()).isEmpty());
    }

    public static List<hI> bdO(Class<? extends hH> clazz) {
        return PTGDf.getOrDefault(clazz, Collections.emptyList());
    }

    private static boolean bdK(Method method, Class<? extends hH> clazz) {
        return method.getParameterCount() == 1 && (clazz == null || method.getParameterTypes()[0].equals(clazz)) && method.isAnnotationPresent(hG.class) && Modifier.isPublic(method.getModifiers());
    }

    public static void bdJ(Object object, Class<? extends hH> clazz) {
        for (Class<?> clazz2 = object.getClass(); clazz2 != null && clazz2 != Object.class; clazz2 = clazz2.getSuperclass()) {
            Method[] methodArray;
            for (Method method : methodArray = clazz2.getDeclaredMethods()) {
                if (!hF.bdK(method, clazz)) continue;
                hF.bdL(method, object);
            }
        }
    }
}

