package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.MethodHandles;
import java.util.Arrays;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class cD extends cB {
   private int taKVz;
   private static final long IeCUk = gb.aYR(-2040694330958669505L, -7978183789279250067L, MethodHandles.lookup().lookupClass()).a(28033197927207L);
   private static final long mKlzi;

   public cD(mr var1) {
      long var2 = IeCUk ^ 19724180321282L;
      super(var1);
      this.taKVz = (int)mKlzi;
   }

   public cD(iS var1, mr var2) {
      this(var2);
      this.Vg(var1);
   }

   static {
      long var0 = IeCUk ^ 46506601706739L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = -6281860261272569937L;
      byte[] var6 = var2.doFinal(
         new byte[]{
            (byte)(var4 >>> 56),
            (byte)(var4 >>> 48),
            (byte)(var4 >>> 40),
            (byte)(var4 >>> 32),
            (byte)(var4 >>> 24),
            (byte)(var4 >>> 16),
            (byte)(var4 >>> 8),
            (byte)var4
         }
      );
      long var7 = (var6[0] & 255L) << 56
         | (var6[1] & 255L) << 48
         | (var6[2] & 255L) << 40
         | (var6[3] & 255L) << 32
         | (var6[4] & 255L) << 24
         | (var6[5] & 255L) << 16
         | (var6[6] & 255L) << 8
         | var6[7] & 255L;
      byte var10001 = -1;
      mKlzi = var7;
   }

   @Override
   public void SS(JsonElement var1) {
      this.VO(var1.getAsInt());
   }

   @Override
   public void SR(Map<String, Object> var1) {
      var1.put(Arrays.toString(this.NwlSF), this.taKVz);
   }

   private static MatchException VQ(MatchException var0) {
      return var0;
   }

   public String VN() {
      return jb.byM(this.taKVz);
   }

   public int VP() {
      return this.taKVz;
   }

   public cD VO(int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cD.IeCUk J
      // 03: ldc2_w 9119625511340
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vt ()Z
      // 0b: istore 4
      // 0d: aload 0
      // 0e: iload 4
      // 10: ifeq 31
      // 13: getfield sixtwo/cD.taKVz I
      // 16: iload 1
      // 17: if_icmpne 27
      // 1a: goto 21
      // 1d: invokestatic sixtwo/cD.VQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 0
      // 22: areturn
      // 23: invokestatic sixtwo/cD.VQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 0
      // 28: iload 1
      // 29: putfield sixtwo/cD.taKVz I
      // 2c: aload 0
      // 2d: invokevirtual sixtwo/cD.Vk ()V
      // 30: aload 0
      // 31: areturn
   }
}
