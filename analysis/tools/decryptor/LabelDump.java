/*
 * Decode the native integer/glyph literals of the fully-transpiled GUI
 * classes (sixtwo.bd, sixtwo.bk) through their own resolver, without starting
 * Minecraft.
 *
 * Run with the Windows JDK under Wine (the native Loader is a PE DLL):
 *   wine win/jdk-21.0.12.1+1/bin/java.exe  *     -cp 'Z:\...\win\classes;Z:\...\win\payload-orig.jar;Z:\...\win\mc-intermediary.jar;Z:\...\win\libs\*'  *     LabelDump 'Z:\...\win\tmp\harness\native\jna1.21.11'
 *
 * The site argument that works is rawConst ^ classKey ^ seed; the class key is
 * read from the class's static long after <clinit> (aAWpI / KbsrP).  Output
 * (labels-decrypt.txt): bd length 7 + [69,110,97,98,108,101,100] = "Enabled";
 * bk length 7 + [75,101,121,98,105,110,100] = "Keybind".
 */
import java.io.*;
import java.lang.reflect.*;
import java.util.concurrent.atomic.AtomicBoolean;

public class LabelDump {
    static void preload(String dll) throws Exception {
        System.load(dll);
        Class<?> loader = Class.forName("native.Loader");
        byte[] key;
        try (InputStream in = loader.getClassLoader().getResourceAsStream("native/info")) {
            DataInputStream d = new DataInputStream(in);
            d.readUTF(); d.readLong(); d.readLong();
            key = new byte[48]; d.readFully(key);
        }
        Method bootstrap = loader.getDeclaredMethod("bootstrap", byte[].class);
        bootstrap.setAccessible(true);
        bootstrap.invoke(null, (Object) key);
        Field f = loader.getDeclaredField("loaded");
        f.setAccessible(true);
        ((AtomicBoolean) f.get(null)).set(true);
        System.out.println("preloaded");
    }

    static void dump(String cls, String keyField, long seed, String meth, long[][] sites) throws Exception {
        Class<?> c = Class.forName(cls, true, LabelDump.class.getClassLoader());
        Field kf = c.getDeclaredField(keyField);
        kf.setAccessible(true);
        long classKey = kf.getLong(null);
        long l2 = classKey ^ seed;
        Method co = c.getDeclaredMethod(meth, int.class, long.class);
        co.setAccessible(true);
        System.out.println("== " + cls + " key=" + classKey + " l2=" + l2);
        long[] variants = {sites[0][1] ^ l2, sites[0][1], sites[0][1] ^ classKey,
                           sites[0][1] ^ seed, classKey, seed, l2};
        String[] names = {"const^key^seed", "const", "const^key", "const^seed",
                          "key", "seed", "key^seed"};
        for (int vi = 0; vi < variants.length; vi++) {
            try {
                int v = (Integer) co.invoke(null, (int) sites[0][0], variants[vi]);
                System.out.println("VAR " + names[vi] + " -> " + v + " '" + (char) v + "'");
            } catch (Throwable t) {
                System.out.println("VAR " + names[vi] + " -> " + t.getCause());
            }
        }
        for (long[] s : sites) {
            for (int vi = 0; vi < variants.length; vi++) {
                long arg = s[1] ^ (variants[vi] ^ sites[0][1]);
                try {
                    int v = (Integer) co.invoke(null, (int) s[0], arg);
                    System.out.println(s[0] + " " + names[vi] + " -> " + v + " '" + (char) v + "'");
                } catch (Throwable t) {
                    System.out.println(s[0] + " " + names[vi] + " -> ERR");
                }
            }
        }
    }

    public static void main(String[] args) throws Exception {
        preload(args[0]);
        dump("sixtwo.bd", "aAWpI", 0x26D3D2F10863L, "Co", new long[][]{{20856,0x1191CEE3E47D8653L},{8743,0x579C2E477DD77507L},{20488,0x284F158A98D5072AL},{21434,0x535D8B8349C9049EL},{27639,0x113256CD7244BCD6L},{31764,0x6931B1AB201A2B3EL},{17625,0x62517A97E75B93F1L},{29404,0x7A2199F26C9D25F3L},{31284,0x6AA9B501AD56AD11L}});
        dump("sixtwo.bd", "aAWpI", 0x26D3D2F10863L, "Co", new long[][]{{19494,0x4F4F3FC871F89B00L},{44,0x14DE905BC9EE570FL},{22822,0x5FC60E4752560E0FL}});
        dump("sixtwo.bk", "KbsrP", 0x113C1EBEC7C7L, "Em", new long[][]{{21192,0x3B6FEDF90971469DL},{21000,0x6E006B63481FC65CL},{24133,0x6EBBA98E3F7A4A13L},{9192,0x5B68F787812A37B4L},{11146,0x667D9AA533583FD8L},{12436,0x920546EAB2CA4C9L},{29828,0x72A14DB8197960D5L},{7453,0xDE9E924FDD894EL},{12618,0x1C16F907738A251DL}});
    }
}
