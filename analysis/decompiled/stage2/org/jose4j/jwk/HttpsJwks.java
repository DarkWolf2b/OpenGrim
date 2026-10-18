package org.jose4j.jwk;

import java.io.IOException;
import java.util.Collections;
import java.util.Date;
import java.util.List;
import java.util.concurrent.locks.ReentrantLock;
import org.jose4j.http.Get;
import org.jose4j.http.SimpleGet;
import org.jose4j.http.SimpleResponse;
import org.jose4j.lang.ExceptionHelp;
import org.jose4j.lang.JoseException;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class HttpsJwks {
   private static final Logger log = LoggerFactory.getLogger(HttpsJwks.class);
   private final String location;
   private volatile long defaultCacheDuration = 3600L;
   private volatile SimpleGet simpleHttpGet = new Get();
   private volatile long retainCacheOnErrorDurationMills = 0L;
   private volatile HttpsJwks.Cache cache = new HttpsJwks.Cache(Collections.emptyList(), 0L);
   private final ReentrantLock refreshLock = new ReentrantLock();
   private long refreshReprieveThreshold = 300L;

   public HttpsJwks(String var1) {
      this.location = var1;
   }

   public void setDefaultCacheDuration(long var1) {
      this.defaultCacheDuration = var1;
   }

   public void setRetainCacheOnErrorDuration(long var1) {
      this.retainCacheOnErrorDurationMills = var1 * 1000L;
   }

   public void setSimpleHttpGet(SimpleGet var1) {
      this.simpleHttpGet = var1;
   }

   public String getLocation() {
      return this.location;
   }

   public void setRefreshReprieveThreshold(long var1) {
      this.refreshReprieveThreshold = var1;
   }

   public List<JsonWebKey> getJsonWebKeys() throws JoseException, IOException {
      long var1 = System.currentTimeMillis();
      HttpsJwks.Cache var3 = this.cache;
      if (var3.exp > var1) {
         return var3.keys;
      } else {
         if (!this.refreshLock.tryLock()) {
            if (!var3.keys.isEmpty()) {
               return var3.keys;
            }

            this.refreshLock.lock();
         }

         try {
            this.refresh();
            var3 = this.cache;
         } catch (Exception var8) {
            if (this.retainCacheOnErrorDurationMills <= 0L || var3.keys.isEmpty()) {
               throw var8;
            }

            this.cache = var3 = new HttpsJwks.Cache(var3.keys, var1 + this.retainCacheOnErrorDurationMills);
            log.info(
               "Because of {} unable to refresh JWKS content from {} so will continue to use cached keys for more {} seconds until about {} -> {}",
               new Object[]{ExceptionHelp.toStringWithCauses(var8), this.location, this.retainCacheOnErrorDurationMills / 1000L, new Date(var3.exp), var3.keys}
            );
         } finally {
            this.refreshLock.unlock();
         }

         return var3.keys;
      }
   }

   public void refresh() throws JoseException, IOException {
      this.refreshLock.lock();

      try {
         long var1 = System.currentTimeMillis() - this.cache.created;
         if (var1 < this.refreshReprieveThreshold && !this.cache.keys.isEmpty()) {
            log.debug("NOT refreshing/loading JWKS from {} because it just happened {} mills ago", this.location, var1);
         } else {
            log.debug("Refreshing/loading JWKS from {}", this.location);
            SimpleResponse var3 = this.simpleHttpGet.get(this.location);
            JsonWebKeySet var4 = new JsonWebKeySet(var3.getBody());
            List var5 = var4.getJsonWebKeys();
            long var6 = getCacheLife(var3);
            if (var6 <= 0L) {
               log.debug("Will use default cache duration of {} seconds for content from {}", this.defaultCacheDuration, this.location);
               var6 = this.defaultCacheDuration;
            }

            long var8 = System.currentTimeMillis() + var6 * 1000L;
            log.debug(
               "Updated JWKS content from {} will be cached for {} seconds until about {} -> {}", new Object[]{this.location, var6, new Date(var8), var5}
            );
            this.cache = new HttpsJwks.Cache(var5, var8);
         }
      } finally {
         this.refreshLock.unlock();
      }
   }

   static long getDateHeaderValue(SimpleResponse var0, String var1, long var2) {
      for (String var6 : getHeaderValues(var0, var1)) {
         try {
            if (!var6.endsWith("GMT")) {
               var6 = var6 + " GMT";
            }

            return Date.parse(var6);
         } catch (Exception var8) {
         }
      }

      return var2;
   }

   private static List<String> getHeaderValues(SimpleResponse var0, String var1) {
      List var2 = var0.getHeaderValues(var1);
      return var2 == null ? Collections.emptyList() : var2;
   }

   static long getExpires(SimpleResponse var0) {
      return getDateHeaderValue(var0, "expires", 0L);
   }

   static long getCacheLife(SimpleResponse var0) {
      return getCacheLife(var0, System.currentTimeMillis());
   }

   static long getCacheLife(SimpleResponse var0, long var1) {
      long var3 = getExpires(var0);
      long var5 = (var3 - var1) / 1000L;

      for (String var9 : getHeaderValues(var0, "cache-control")) {
         try {
            var9 = var9 == null ? "" : var9.toLowerCase();
            int var10 = var9.indexOf("max-age");
            int var11 = var9.indexOf(44, var10);
            int var12 = var11 == -1 ? var9.length() : var11;
            String var13 = var9.substring(var10, var12);
            var13 = var13.substring(var13.indexOf(61) + 1);
            var13 = var13.trim();
            var5 = Long.parseLong(var13);
            break;
         } catch (Exception var14) {
         }
      }

      return var5;
   }

   private static class Cache {
      private final List<JsonWebKey> keys;
      private final long exp;
      private final long created = System.currentTimeMillis();

      private Cache(List<JsonWebKey> var1, long var2) {
         this.keys = var1;
         this.exp = var2;
      }
   }
}
