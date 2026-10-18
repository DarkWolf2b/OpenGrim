/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import native.Loader;
import sixtwo.in;
import sixtwo.ir;

public class ip {
    private final Map<String, in> FlCme = new ConcurrentHashMap<String, in>();
    private final List<in> ZuBuJ = List.of(in.FBjZE, in.eiOnG, in.lTmAi, in.mYAkW);
    private static long jsoEm;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(ip.class);
        ip._d8868ff4e2dd8e5a978546520563325a();
    }

    public native ir blC(String var1);

    public native List<in> blE();

    public native Map<String, in> blD();

    private static native MatchException blF(MatchException var0);

    private static native void _d8868ff4e2dd8e5a978546520563325a();
}

