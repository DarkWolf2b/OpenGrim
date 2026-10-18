package org.jose4j.http;

import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.StringWriter;
import java.net.HttpURLConnection;
import java.net.Proxy;
import java.net.URL;
import java.net.URLConnection;
import java.nio.charset.Charset;
import java.security.KeyManagementException;
import java.security.KeyStore;
import java.security.KeyStoreException;
import java.security.NoSuchAlgorithmException;
import java.security.cert.CertificateException;
import java.security.cert.X509Certificate;
import java.util.Arrays;
import java.util.Collection;
import java.util.Map;
import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLContext;
import javax.net.ssl.SSLHandshakeException;
import javax.net.ssl.SSLPeerUnverifiedException;
import javax.net.ssl.SSLSocketFactory;
import javax.net.ssl.TrustManager;
import javax.net.ssl.TrustManagerFactory;
import org.jose4j.lang.UncheckedJoseException;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class Get implements SimpleGet {
   private static final long MAX_RETRY_WAIT = 8000L;
   private static final Logger log = LoggerFactory.getLogger(Get.class);
   private int connectTimeout = 20000;
   private int readTimeout = 20000;
   private int retries = 3;
   private long initialRetryWaitTime = 180L;
   private boolean progressiveRetryWait = true;
   private SSLSocketFactory sslSocketFactory;
   private HostnameVerifier hostnameVerifier;
   private int responseBodySizeLimit = 524288;
   private Proxy proxy;

   public Get() {
   }

   @Override
   public SimpleResponse get(String var1) throws IOException {
      int var2 = 0;
      log.debug("HTTP GET of {}", var1);
      URL var3 = new URL(var1);

      while (true) {
         try {
            URLConnection var4 = this.proxy == null ? var3.openConnection() : var3.openConnection(this.proxy);
            var4.setConnectTimeout(this.connectTimeout);
            var4.setReadTimeout(this.readTimeout);
            this.preventHttpCaching(var4);
            this.setUpTls(var4);
            HttpURLConnection var15 = (HttpURLConnection)var4;
            int var6 = var15.getResponseCode();
            String var7 = var15.getResponseMessage();
            if (var6 != 200) {
               throw new IOException("Non 200 status code (" + var6 + " " + var7 + ") returned from " + var3);
            }

            String var8 = this.getCharset(var4);
            String var9 = this.getBody(var4, var8);
            Map var10 = var15.getHeaderFields();
            Response var11 = new Response(var6, var7, var10, var9);
            log.debug("HTTP GET of {} returned {}", var3, var11);
            return var11;
         } catch (SSLPeerUnverifiedException | FileNotFoundException | Get.ResponseBodyTooLargeException | SSLHandshakeException var13) {
            throw var13;
         } catch (IOException var14) {
            if (++var2 > this.retries) {
               throw var14;
            }

            long var5 = this.getRetryWaitTime(var2);
            log.debug("Waiting {}ms before retrying ({} of {}) HTTP GET of {} after failed attempt: {}", new Object[]{var5, var2, this.retries, var3, var14});

            try {
               Thread.sleep(var5);
            } catch (InterruptedException var12) {
            }
         }
      }
   }

   private void preventHttpCaching(URLConnection var1) {
      var1.setUseCaches(false);
      var1.setRequestProperty("Cache-Control", "no-cache");
   }

   private String getBody(URLConnection var1, String var2) throws IOException {
      StringWriter var3 = new StringWriter();
      InputStream var4 = var1.getInputStream();

      try {
         InputStreamReader var5 = new InputStreamReader(var4, var2);

         try {
            int var6 = 0;
            char[] var7 = new char[1024];

            int var8;
            while (-1 != (var8 = var5.read(var7))) {
               var3.write(var7, 0, var8);
               var6 += var8;
               if (this.responseBodySizeLimit > 0 && var6 > this.responseBodySizeLimit) {
                  throw new Get.ResponseBodyTooLargeException("More than " + this.responseBodySizeLimit + " characters have been read from the response body.");
               }
            }

            log.debug("read {} characters", var6);
         } catch (Throwable var11) {
            try {
               var5.close();
            } catch (Throwable var10) {
               var11.addSuppressed(var10);
            }

            throw var11;
         }

         var5.close();
      } catch (Throwable var12) {
         if (var4 != null) {
            try {
               var4.close();
            } catch (Throwable var9) {
               var12.addSuppressed(var9);
            }
         }

         throw var12;
      }

      if (var4 != null) {
         var4.close();
      }

      return var3.toString();
   }

   private void setUpTls(URLConnection var1) {
      if (var1 instanceof HttpsURLConnection) {
         HttpsURLConnection var2 = (HttpsURLConnection)var1;
         if (this.sslSocketFactory != null) {
            var2.setSSLSocketFactory(this.sslSocketFactory);
         }

         if (this.hostnameVerifier != null) {
            var2.setHostnameVerifier(this.hostnameVerifier);
         }
      }
   }

   private String getCharset(URLConnection var1) {
      String var2 = var1.getHeaderField("Content-Type");
      String var3 = "UTF-8";

      try {
         if (var2 != null) {
            for (String var7 : var2.replace(" ", "").split(";")) {
               String var8 = "charset=";
               if (var7.startsWith(var8)) {
                  var3 = var7.substring(var8.length());
                  break;
               }
            }

            Charset.forName(var3);
         }
      } catch (Exception var9) {
         log.debug("Unexpected problem attempted to determine the charset from the Content-Type ({}) so will default to using UTF8: {}", var2, var9);
         var3 = "UTF-8";
      }

      return var3;
   }

   private long getRetryWaitTime(int var1) {
      if (this.progressiveRetryWait) {
         double var2 = Math.pow(2.0, var1 - 1);
         long var4 = (long)(var2 * this.initialRetryWaitTime);
         return Math.min(var4, 8000L);
      } else {
         return this.initialRetryWaitTime;
      }
   }

   public void setConnectTimeout(int var1) {
      this.connectTimeout = var1;
   }

   public void setReadTimeout(int var1) {
      this.readTimeout = var1;
   }

   public void setHostnameVerifier(HostnameVerifier var1) {
      this.hostnameVerifier = var1;
   }

   public void setTrustedCertificates(X509Certificate... var1) {
      this.setTrustedCertificates(Arrays.asList(var1));
   }

   public void setRetries(int var1) {
      this.retries = var1;
   }

   public void setProgressiveRetryWait(boolean var1) {
      this.progressiveRetryWait = var1;
   }

   public void setInitialRetryWaitTime(long var1) {
      this.initialRetryWaitTime = var1;
   }

   public void setResponseBodySizeLimit(int var1) {
      this.responseBodySizeLimit = var1;
   }

   public void setTrustedCertificates(Collection<X509Certificate> var1) {
      try {
         TrustManagerFactory var2 = TrustManagerFactory.getInstance("PKIX");
         KeyStore var3 = KeyStore.getInstance("jks");
         var3.load(null, null);
         int var4 = 0;

         for (X509Certificate var6 : var1) {
            var3.setCertificateEntry("alias" + var4++, var6);
         }

         var2.init(var3);
         TrustManager[] var8 = var2.getTrustManagers();
         SSLContext var9 = SSLContext.getInstance("TLS");
         var9.init(null, var8, null);
         this.sslSocketFactory = var9.getSocketFactory();
      } catch (KeyManagementException | CertificateException | IOException | KeyStoreException | NoSuchAlgorithmException var7) {
         throw new UncheckedJoseException("Unable to initialize socket factory with custom trusted  certificates.", var7);
      }
   }

   public void setSslSocketFactory(SSLSocketFactory var1) {
      this.sslSocketFactory = var1;
   }

   public void setHttpProxy(Proxy var1) {
      this.proxy = var1;
   }

   private static class ResponseBodyTooLargeException extends IOException {
      public ResponseBodyTooLargeException(String var1) {
         super(var1);
      }
   }
}
