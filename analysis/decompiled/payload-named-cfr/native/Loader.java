/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.fabricmc.loader.api.FabricLoader
 *  net.fabricmc.loader.api.ModContainer
 */
package native;

import java.io.DataInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Objects;
import java.util.concurrent.atomic.AtomicBoolean;
import net.fabricmc.loader.api.FabricLoader;
import net.fabricmc.loader.api.ModContainer;

public class Loader {
    private static AtomicBoolean loaded;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader._d008f8a79d35c113b0b65879cbea3a45();
    }

    public static void init() {
        if (!loaded.compareAndSet(false, true)) {
            return;
        }
        String string = ((ModContainer)FabricLoader.getInstance().getModContainer("minecraft").get()).getMetadata().getVersion().getFriendlyString();
        Path path = Paths.get(System.getProperty("java.io.tmpdir"), "native");
        Path path2 = path.resolve("jna" + string);
        ClassLoader classLoader = Loader.class.getClassLoader();
        try {
            InputStream inputStream = Objects.requireNonNull(classLoader.getResourceAsStream("native/info"));
            DataInputStream dataInputStream = new DataInputStream(inputStream);
            dataInputStream.readUTF();
            dataInputStream.readLong();
            dataInputStream.readLong();
            byte[] byArray = new byte[48];
            dataInputStream.readFully(byArray);
            System.load(path2.toString());
            Loader.bootstrap(byArray);
            dataInputStream.close();
            return;
        }
        catch (IOException iOException) {
            throw new Error(iOException);
        }
    }

    private static native void bootstrap(byte[] var0);

    public static void doInit(Class<?> clazz) {
        Loader.init();
        Loader.initClass(clazz);
    }

    private static native void initClass(Class var0);

    private static void _d008f8a79d35c113b0b65879cbea3a45() {
        loaded = new AtomicBoolean(false);
    }
}

