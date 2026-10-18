import java.io.DataInputStream;
import java.io.InputStream;
import java.lang.reflect.Method;
import java.util.concurrent.atomic.AtomicBoolean;

/**
 * Runs sixtwo.lf <clinit> with the real native decryptor and prints the glyph
 * char per enum constant. Preload recipe from analysis/tools/decryptor/PoolDump:
 * System.load(dll) -> reflective bootstrap(native/info key) -> loaded=true.
 */
public class GlyphDump {
    public static void main(String[] args) throws Exception {
        String dll = "win/tmp/harness/native/jna1.21.11";
        System.load(dll);
        Class<?> loader = Class.forName("native.Loader");
        byte[] key;
        try (InputStream in = loader.getClassLoader().getResourceAsStream("native/info")) {
            DataInputStream d = new DataInputStream(in);
            d.readUTF();
            d.readLong();
            d.readLong();
            key = new byte[48];
            d.readFully(key);
        }
        Method bootstrap = loader.getDeclaredMethod("bootstrap", byte[].class);
        bootstrap.setAccessible(true);
        bootstrap.invoke(null, (Object) key);
        java.lang.reflect.Field f = loader.getDeclaredField("loaded");
        f.setAccessible(true);
        ((AtomicBoolean) f.get(null)).set(true);
        System.out.println("preloaded native decryptor");

        Class<?> lf = Class.forName("sixtwo.lf");
        Object[] values = (Object[]) lf.getMethod("values").invoke(null);
        Method bXR = lf.getMethod("bXR");
        System.out.println("count=" + values.length);
        for (int i = 0; i < values.length; i++) {
            Object v = values[i];
            char c = (Character) bXR.invoke(v);
            System.out.println(i + "\t" + v + "\t" + (int) c);
        }
    }
}