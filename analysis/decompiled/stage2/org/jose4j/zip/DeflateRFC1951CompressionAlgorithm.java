package org.jose4j.zip;

import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.util.zip.Deflater;
import java.util.zip.DeflaterOutputStream;
import java.util.zip.Inflater;
import java.util.zip.InflaterInputStream;
import org.jose4j.keys.KeyPersuasion;
import org.jose4j.lang.JoseException;
import org.jose4j.lang.UncheckedJoseException;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class DeflateRFC1951CompressionAlgorithm implements CompressionAlgorithm {
   private static final Logger log = LoggerFactory.getLogger(DeflateRFC1951CompressionAlgorithm.class);
   public static final String DECOMPRESS_MAX_BYTES_PROPERTY_NAME = "org.jose4j.zip.decompress-max-bytes";
   private int maxDecompressedBytes = 204800;

   @Override
   public boolean isAvailable() {
      return true;
   }

   @Override
   public KeyPersuasion getKeyPersuasion() {
      return KeyPersuasion.NONE;
   }

   @Override
   public String getJavaAlgorithm() {
      return null;
   }

   public DeflateRFC1951CompressionAlgorithm() {
      String var1 = System.getProperty("org.jose4j.zip.decompress-max-bytes", "204800");

      try {
         this.maxDecompressedBytes = Integer.parseInt(var1);
      } catch (NumberFormatException var3) {
         log.debug(
            "Using the default value of "
               + this.maxDecompressedBytes
               + " for the maximum allowed size of decompressed data because the system property "
               + "org.jose4j.zip.decompress-max-bytes"
               + " contains an invalid value: "
               + var3
         );
      }

      log.debug("");
   }

   @Override
   public byte[] compress(byte[] var1) {
      Deflater var2 = new Deflater(8, true);

      byte[] var5;
      try {
         ByteArrayOutputStream var3 = new ByteArrayOutputStream();

         try {
            DeflaterOutputStream var4 = new DeflaterOutputStream(var3, var2);

            try {
               var4.write(var1);
               var4.finish();
               var5 = var3.toByteArray();
            } catch (Throwable var16) {
               try {
                  var4.close();
               } catch (Throwable var15) {
                  var16.addSuppressed(var15);
               }

               throw var16;
            }

            var4.close();
         } catch (Throwable var17) {
            try {
               var3.close();
            } catch (Throwable var14) {
               var17.addSuppressed(var14);
            }

            throw var17;
         }

         var3.close();
      } catch (IOException var18) {
         throw new UncheckedJoseException("Problem compressing data.", var18);
      } finally {
         var2.end();
      }

      return var5;
   }

   @Override
   public byte[] decompress(byte[] var1) throws JoseException {
      Inflater var2 = new Inflater(true);
      ByteArrayOutputStream var3 = new ByteArrayOutputStream();

      byte[] var7;
      try {
         InflaterInputStream var4 = new InflaterInputStream(new ByteArrayInputStream(var1), var2);

         try {
            byte[] var6 = new byte[256];

            int var5;
            while ((var5 = var4.read(var6)) != -1) {
               var3.write(var6, 0, var5);
               if (var3.size() > this.maxDecompressedBytes) {
                  throw new JoseException(
                     "Maximum allowed size of decompressed data exceeded (which is "
                        + this.maxDecompressedBytes
                        + " bytes but configurable with the "
                        + "org.jose4j.zip.decompress-max-bytes"
                        + " system property)"
                  );
               }
            }

            var7 = var3.toByteArray();
         } catch (Throwable var14) {
            try {
               var4.close();
            } catch (Throwable var13) {
               var14.addSuppressed(var13);
            }

            throw var14;
         }

         var4.close();
      } catch (IOException var15) {
         throw new JoseException("Problem decompressing data.", var15);
      } finally {
         var2.end();
      }

      return var7;
   }

   @Override
   public String getAlgorithmIdentifier() {
      return "DEF";
   }

   @Override
   public String getKeyType() {
      return null;
   }
}
