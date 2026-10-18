import java.util.zip.*;
import java.io.*;

public class ExtractCase {
    public static void main(String[] a) throws Exception {
        String jar = "win/payload-named.jar";
        String name = a[0]; // e.g. sixtwo/eY.class
        try (ZipFile z = new ZipFile(jar)) {
            ZipEntry e = z.getEntry(name);
            if (e == null) { System.out.println("MISSING " + name); return; }
            try (InputStream in = z.getInputStream(e);
                 OutputStream out = new FileOutputStream(a[1])) {
                in.transferTo(out);
            }
            System.out.println("OK " + name + " " + e.getSize());
        }
    }
}