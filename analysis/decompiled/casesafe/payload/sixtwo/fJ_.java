package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;

public class fJ extends gg {
   private final cA KbVJm;
   private final cJ CCWrA;
   private final cJ NStEn;
   private final cJ Fkuth;
   private final cz EqPct;
   private final cJ XIgqS;
   private float QAlRd;
   private static final long qeHDl = gb.aYR(4976854293152449724L, -8816708037096018054L, MethodHandles.lookup().lookupClass()).a(65789968378512L);
   private static final String lMLXr;
   private static final long[] pJqSz;
   private static final Integer[] QfLOA;
   private static final Map YYISG;

   private static CallSite aUU(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aUT".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/fJ" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   @hG
   public void aUN(hw$tv var1) {
      this.QAlRd = this.KbVJm.UN().floatValue();
   }

   @hG
   public void aUO(hr var1) {
      long var2 = qeHDl ^ 53249405492653L;

      try {
         if (!this.bab()) {
            return;
         }
      } catch (MatchException var5) {
         throw aUQ(var5);
      }

      class_1297 var4 = var1.bdb();
      var1.bdc().setReturnValue(this.aUP(var4));
   }

   private static int aUS(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 7116;
      if (QfLOA[var3] == null) {
         byte[] var4 = new byte[]{
            (byte)(var1 >>> 56),
            (byte)(var1 >>> 48),
            (byte)(var1 >>> 40),
            (byte)(var1 >>> 32),
            (byte)(var1 >>> 24),
            (byte)(var1 >>> 16),
            (byte)(var1 >>> 8),
            (byte)var1
         };
         long var5 = pJqSz[var3];
         byte[] var7 = new byte[]{
            (byte)(var5 >>> 56),
            (byte)(var5 >>> 48),
            (byte)(var5 >>> 40),
            (byte)(var5 >>> 32),
            (byte)(var5 >>> 24),
            (byte)(var5 >>> 16),
            (byte)(var5 >>> 8),
            (byte)var5
         };
         Long var8 = Thread.currentThread().threadId();
         Object[] var9 = (Object[])YYISG.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               YYISG.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/fJ", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         QfLOA[var3] = var15;
      }

      return QfLOA[var3];
   }

   private static String aUR(byte[] var0) {
      int var1 = 0;
      int var2;
      char[] var3 = new char[var2 = var0.length];

      for (int var4 = 0; var4 < var2; var4++) {
         int var5;
         if ((var5 = 255 & var0[var4]) < 192) {
            var3[var1++] = (char)var5;
         } else if (var5 < 224) {
            char var6 = (char)((char)(var5 & 31) << 6);
            byte var8 = var0[++var4];
            var6 = (char)(var6 | (char)(var8 & 63));
            var3[var1++] = var6;
         } else if (var4 < var2 - 2) {
            char var12 = (char)((char)(var5 & 15) << '\f');
            byte var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63) << 6);
            var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63));
            var3[var1++] = var12;
         }
      }

      return new String(var3, 0, var1);
   }

   private static MatchException aUQ(MatchException var0) {
      return var0;
   }

   private static int aUT(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = aUS(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public float aUP(class_1297 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/fJ.qeHDl J
      // 003: ldc2_w 115014046840755
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/fg.aIW ()[I
      // 00b: astore 4
      // 00d: aload 1
      // 00e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 011: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 014: if_acmpne 01d
      // 017: fconst_0
      // 018: freturn
      // 019: invokestatic sixtwo/fJ.aUQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01c: athrow
      // 01d: aload 0
      // 01e: getfield sixtwo/fJ.NStEn Lsixtwo/cJ;
      // 021: invokevirtual sixtwo/cJ.WF ()Z
      // 024: aload 4
      // 026: ifnonnull 062
      // 029: ifeq 05b
      // 02c: goto 033
      // 02f: invokestatic sixtwo/fJ.aUQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 032: athrow
      // 033: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 036: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 039: getstatic net/minecraft/class_1802.field_8786 Lnet/minecraft/class_1792;
      // 03c: invokevirtual net/minecraft/class_746.method_24518 (Lnet/minecraft/class_1792;)Z
      // 03f: aload 4
      // 041: ifnonnull 062
      // 044: goto 04b
      // 047: invokestatic sixtwo/fJ.aUQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 04a: athrow
      // 04b: ifeq 05b
      // 04e: goto 055
      // 051: invokestatic sixtwo/fJ.aUQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 054: athrow
      // 055: fconst_0
      // 056: freturn
      // 057: invokestatic sixtwo/fJ.aUQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05a: athrow
      // 05b: aload 0
      // 05c: getfield sixtwo/fJ.Fkuth Lsixtwo/cJ;
      // 05f: invokevirtual sixtwo/cJ.WF ()Z
      // 062: aload 4
      // 064: ifnonnull 098
      // 067: ifeq 094
      // 06a: goto 071
      // 06d: invokestatic sixtwo/fJ.aUQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 070: athrow
      // 071: aload 0
      // 072: getfield sixtwo/fJ.EqPct Lsixtwo/cz;
      // 075: invokevirtual sixtwo/cz.Uy ()Z
      // 078: aload 4
      // 07a: ifnonnull 098
      // 07d: goto 084
      // 080: invokestatic sixtwo/fJ.aUQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 083: athrow
      // 084: ifne 094
      // 087: goto 08e
      // 08a: invokestatic sixtwo/fJ.aUQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08d: athrow
      // 08e: fconst_0
      // 08f: freturn
      // 090: invokestatic sixtwo/fJ.aUQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 093: athrow
      // 094: aload 1
      // 095: instanceof net/minecraft/class_1309
      // 098: aload 4
      // 09a: ifnonnull 0f4
      // 09d: ifeq 0e4
      // 0a0: goto 0a7
      // 0a3: invokestatic sixtwo/fJ.aUQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a6: athrow
      // 0a7: aload 1
      // 0a8: checkcast net/minecraft/class_1309
      // 0ab: astore 5
      // 0ad: aload 0
      // 0ae: getfield sixtwo/fJ.XIgqS Lsixtwo/cJ;
      // 0b1: invokevirtual sixtwo/cJ.WF ()Z
      // 0b4: aload 4
      // 0b6: ifnonnull 0f4
      // 0b9: ifeq 0e4
      // 0bc: goto 0c3
      // 0bf: invokestatic sixtwo/fJ.aUQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c2: athrow
      // 0c3: aload 5
      // 0c5: invokestatic sixtwo/jg.bBs (Lnet/minecraft/class_1309;)Z
      // 0c8: aload 4
      // 0ca: ifnonnull 0f4
      // 0cd: goto 0d4
      // 0d0: invokestatic sixtwo/fJ.aUQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d3: athrow
      // 0d4: ifeq 0e4
      // 0d7: goto 0de
      // 0da: invokestatic sixtwo/fJ.aUQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0dd: athrow
      // 0de: fconst_0
      // 0df: freturn
      // 0e0: invokestatic sixtwo/fJ.aUQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e3: athrow
      // 0e4: aload 1
      // 0e5: aload 4
      // 0e7: ifnonnull 0f8
      // 0ea: instanceof net/minecraft/class_1657
      // 0ed: goto 0f4
      // 0f0: invokestatic sixtwo/fJ.aUQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f3: athrow
      // 0f4: ifeq 12b
      // 0f7: aload 1
      // 0f8: checkcast net/minecraft/class_1657
      // 0fb: astore 5
      // 0fd: aload 0
      // 0fe: aload 4
      // 100: ifnonnull 12c
      // 103: getfield sixtwo/fJ.CCWrA Lsixtwo/cJ;
      // 106: invokevirtual sixtwo/cJ.WF ()Z
      // 109: ifeq 12b
      // 10c: goto 113
      // 10f: invokestatic sixtwo/fJ.aUQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 112: athrow
      // 113: invokestatic sixtwo/rD.dmc ()Lsixtwo/qQ;
      // 116: aload 5
      // 118: invokevirtual sixtwo/qQ.ddy (Lnet/minecraft/class_1657;)Z
      // 11b: ifeq 12b
      // 11e: goto 125
      // 121: invokestatic sixtwo/fJ.aUQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 124: athrow
      // 125: fconst_0
      // 126: freturn
      // 127: invokestatic sixtwo/fJ.aUQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 12a: athrow
      // 12b: aload 0
      // 12c: getfield sixtwo/fJ.QAlRd F
      // 12f: freturn
   }

   public fJ() {
      long var1 = qeHDl ^ 76486504846957L;
      super(gf.aZL(aUU<"v">(22094, 7959272536790718378L ^ var1), false, gh.xwjCw));
      this.KbVJm = new cA(
            this,
            mr.clS(
               new int[]{
                  aUU<"v">(3559, 8231777395289459733L ^ var1),
                  aUU<"v">(16254, 926956417239105154L ^ var1),
                  aUU<"v">(27910, 8977597633450339545L ^ var1),
                  aUU<"v">(27986, 6496513493530504445L ^ var1)
               }
            )
         )
         .UG(0.01)
         .UE(0.0)
         .UF(2.0)
         .UI(0.0, 0.0)
         .UH(lMLXr);
      int[] var10004 = new int[aUU<"v">(12894, 3783871341134263228L ^ var1)];
      var10004[0] = aUU<"v">(11435, 6769784468152364383L ^ var1);
      var10004[1] = aUU<"v">(27636, 6209707562562808330L ^ var1);
      var10004[2] = aUU<"v">(21452, 1858652019081466471L ^ var1);
      var10004[3] = aUU<"v">(31025, 6808051549279287527L ^ var1);
      var10004[4] = aUU<"v">(10719, 367309698466129942L ^ var1);
      var10004[5] = aUU<"v">(6123, 6625778594955859510L ^ var1);
      var10004[aUU<"v">(20113, 3710196292013412223L ^ var1)] = aUU<"v">(16826, 2891646431083380859L ^ var1);
      var10004[aUU<"v">(19894, 525009952957942908L ^ var1)] = aUU<"v">(4555, 4791083266118160388L ^ var1);
      var10004[aUU<"v">(28141, 6226095325199854603L ^ var1)] = aUU<"v">(18645, 934841257182611759L ^ var1);
      var10004[aUU<"v">(11176, 1935089713655458310L ^ var1)] = aUU<"v">(32201, 6295676213426781285L ^ var1);
      var10004[aUU<"v">(25458, 4877779479436452499L ^ var1)] = aUU<"v">(6123, 6625778594955859510L ^ var1);
      var10004[aUU<"v">(24514, 555062281044221461L ^ var1)] = aUU<"v">(9844, 732291764355049402L ^ var1);
      var10004[aUU<"v">(14760, 9025888562497304696L ^ var1)] = aUU<"v">(11127, 6214865197443000996L ^ var1);
      var10004[aUU<"v">(12462, 780424078082748678L ^ var1)] = aUU<"v">(26701, 3794094983871392190L ^ var1);
      this.CCWrA = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aUU<"v">(9711, 7978571414138397766L ^ var1)];
      var10004[0] = aUU<"v">(23906, 5137225642250263688L ^ var1);
      var10004[1] = aUU<"v">(32201, 6295676213426781285L ^ var1);
      var10004[2] = aUU<"v">(3601, 5840231590348296138L ^ var1);
      var10004[3] = aUU<"v">(31311, 2391650321606900631L ^ var1);
      var10004[4] = aUU<"v">(9322, 8489943199259272639L ^ var1);
      var10004[5] = aUU<"v">(29920, 926684593056380197L ^ var1);
      var10004[aUU<"v">(20113, 3710196292013412223L ^ var1)] = aUU<"v">(6123, 6625778594955859510L ^ var1);
      var10004[aUU<"v">(12167, 3406765118644235890L ^ var1)] = aUU<"v">(12303, 8679388610943463845L ^ var1);
      var10004[aUU<"v">(30776, 6638566615263377817L ^ var1)] = aUU<"v">(28923, 5472756619340640553L ^ var1);
      var10004[aUU<"v">(4251, 1523079370921251155L ^ var1)] = aUU<"v">(23085, 5284696181649103829L ^ var1);
      var10004[aUU<"v">(12631, 3200721146080604401L ^ var1)] = aUU<"v">(12303, 8679388610943463845L ^ var1);
      var10004[aUU<"v">(24236, 2407292516512128843L ^ var1)] = aUU<"v">(19367, 1004828276366592606L ^ var1);
      var10004[aUU<"v">(26668, 4368953069500590545L ^ var1)] = aUU<"v">(26802, 8399944013583149430L ^ var1);
      var10004[aUU<"v">(781, 4835005374708155108L ^ var1)] = aUU<"v">(5452, 8000797827557659881L ^ var1);
      var10004[aUU<"v">(23846, 4446113506859867366L ^ var1)] = aUU<"v">(661, 2646298137385108330L ^ var1);
      var10004[aUU<"v">(12880, 2023273019551953835L ^ var1)] = aUU<"v">(32201, 6295676213426781285L ^ var1);
      var10004[aUU<"v">(6717, 4874873784125856752L ^ var1)] = aUU<"v">(9844, 732291764355049402L ^ var1);
      var10004[aUU<"v">(27590, 1697563446961596970L ^ var1)] = aUU<"v">(6566, 317607632835745889L ^ var1);
      var10004[aUU<"v">(22426, 6316387613521761911L ^ var1)] = aUU<"v">(12303, 8679388610943463845L ^ var1);
      var10004[aUU<"v">(10953, 8148224621858532112L ^ var1)] = aUU<"v">(28445, 5818383614477168313L ^ var1);
      var10004[aUU<"v">(13526, 804214555868214585L ^ var1)] = aUU<"v">(26802, 8399944013583149430L ^ var1);
      var10004[aUU<"v">(23234, 4568537136794753820L ^ var1)] = aUU<"v">(29317, 9115875032496108398L ^ var1);
      var10004[aUU<"v">(9822, 2949202204839552950L ^ var1)] = aUU<"v">(15810, 334190198399843329L ^ var1);
      var10004[aUU<"v">(17990, 7668708559105771420L ^ var1)] = aUU<"v">(6123, 6625778594955859510L ^ var1);
      var10004[aUU<"v">(30555, 672733232083498686L ^ var1)] = aUU<"v">(29317, 9115875032496108398L ^ var1);
      this.NStEn = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aUU<"v">(23846, 4446113506859867366L ^ var1)];
      var10004[0] = aUU<"v">(16212, 6025587736029511415L ^ var1);
      var10004[1] = aUU<"v">(9844, 732291764355049402L ^ var1);
      var10004[2] = aUU<"v">(5452, 8000797827557659881L ^ var1);
      var10004[3] = aUU<"v">(9375, 3177985587421029742L ^ var1);
      var10004[4] = aUU<"v">(12303, 8679388610943463845L ^ var1);
      var10004[5] = aUU<"v">(8805, 5266719385814311865L ^ var1);
      var10004[aUU<"v">(20113, 3710196292013412223L ^ var1)] = aUU<"v">(26802, 8399944013583149430L ^ var1);
      var10004[aUU<"v">(12167, 3406765118644235890L ^ var1)] = aUU<"v">(18645, 934841257182611759L ^ var1);
      var10004[aUU<"v">(30776, 6638566615263377817L ^ var1)] = aUU<"v">(12303, 8679388610943463845L ^ var1);
      var10004[aUU<"v">(4251, 1523079370921251155L ^ var1)] = aUU<"v">(109, 105364478569611695L ^ var1);
      var10004[aUU<"v">(12631, 3200721146080604401L ^ var1)] = aUU<"v">(5452, 8000797827557659881L ^ var1);
      var10004[aUU<"v">(24236, 2407292516512128843L ^ var1)] = aUU<"v">(26802, 8399944013583149430L ^ var1);
      var10004[aUU<"v">(26668, 4368953069500590545L ^ var1)] = aUU<"v">(24860, 4159750381322231996L ^ var1);
      var10004[aUU<"v">(781, 4835005374708155108L ^ var1)] = aUU<"v">(3601, 5840231590348296138L ^ var1);
      this.Fkuth = new cJ(this, mr.clS(var10004)).WE(false);
      this.EqPct = new cz(
         this,
         mr.clS(
            new int[]{
               aUU<"v">(109, 105364478569611695L ^ var1),
               aUU<"v">(5452, 8000797827557659881L ^ var1),
               aUU<"v">(26802, 8399944013583149430L ^ var1),
               aUU<"v">(16634, 4227223407144780086L ^ var1),
               aUU<"v">(3601, 5840231590348296138L ^ var1)
            }
         )
      );
      var10004 = new int[aUU<"v">(15787, 6073058398090083340L ^ var1)];
      var10004[0] = aUU<"v">(12267, 4290133494630264352L ^ var1);
      var10004[1] = aUU<"v">(32201, 6295676213426781285L ^ var1);
      var10004[2] = aUU<"v">(3601, 5840231590348296138L ^ var1);
      var10004[3] = aUU<"v">(16762, 9188668309469053102L ^ var1);
      var10004[4] = aUU<"v">(29317, 9115875032496108398L ^ var1);
      var10004[5] = aUU<"v">(5452, 8000797827557659881L ^ var1);
      var10004[aUU<"v">(20113, 3710196292013412223L ^ var1)] = aUU<"v">(6123, 6625778594955859510L ^ var1);
      var10004[aUU<"v">(12167, 3406765118644235890L ^ var1)] = aUU<"v">(12303, 8679388610943463845L ^ var1);
      var10004[aUU<"v">(30776, 6638566615263377817L ^ var1)] = aUU<"v">(28923, 5472756619340640553L ^ var1);
      var10004[aUU<"v">(4251, 1523079370921251155L ^ var1)] = aUU<"v">(22978, 4988120734517418018L ^ var1);
      var10004[aUU<"v">(12631, 3200721146080604401L ^ var1)] = aUU<"v">(12303, 8679388610943463845L ^ var1);
      var10004[aUU<"v">(24236, 2407292516512128843L ^ var1)] = aUU<"v">(28923, 5472756619340640553L ^ var1);
      var10004[aUU<"v">(26668, 4368953069500590545L ^ var1)] = aUU<"v">(9844, 732291764355049402L ^ var1);
      var10004[aUU<"v">(781, 4835005374708155108L ^ var1)] = aUU<"v">(12303, 8679388610943463845L ^ var1);
      var10004[aUU<"v">(23846, 4446113506859867366L ^ var1)] = aUU<"v">(20152, 469003930202197781L ^ var1);
      var10004[aUU<"v">(11030, 1114350699036879590L ^ var1)] = aUU<"v">(26802, 8399944013583149430L ^ var1);
      var10004[aUU<"v">(27426, 8875422005779950308L ^ var1)] = aUU<"v">(29317, 9115875032496108398L ^ var1);
      var10004[aUU<"v">(29699, 7446565105564349940L ^ var1)] = aUU<"v">(1517, 7975323239601538075L ^ var1);
      var10004[aUU<"v">(11637, 154745884214209700L ^ var1)] = aUU<"v">(6123, 6625778594955859510L ^ var1);
      var10004[aUU<"v">(11399, 1267588230881586532L ^ var1)] = aUU<"v">(29317, 9115875032496108398L ^ var1);
      this.XIgqS = new cJ(this, mr.clS(var10004)).WE(false);
      this.QAlRd = 0.0F;
      this.EqPct.Vf(this.Fkuth::WF);
   }

   static {
      long var11 = qeHDl ^ 27484011507191L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("┬ČheJ├Â7<p".getBytes("ISO-8859-1"));
      String var22 = aUR(var15).intern();
      int var10001 = -1;
      lMLXr = var22;
      YYISG = new HashMap(13);
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[79];
      int var3 = 0;
      String var4 = "┬╗r├▒{89\u0095┬ą\u00adD┬Č├Á%├á\u0014(\u000f;├żjh\u0010Mg├Şn\u009eS├Ł┬Ę├ó\u0092L├ő~\u0019\u0014u34Ep0l{┬╣;├╗├Ş\u0094j\u0002\u0084├üH\u0099Y\u0001┬Ž┬«\u0089┬á├Ťx$\u0004├Ě\u0094\u0097├Ü┬Ş├ö\u0017 ┬Á┬ž|.├ž\u009e┬á├╣├Č┬Â>\u0083^\u009a\u001f\u001a├▓|┬ĚJd┬ż=┬Ż\"n\u001d├Ö\u009c#?┬Ču@T┬í\u009d7\t\b├áQ├Ş\u0007]\u0094┬┐┬┐J┬╣\u001e┬ú/\u009bs\u0083\u0082\u0086]Sy?5┬╣├Ä┬┐$e)├ó;9~┬ęx├╝Z\"2z\u00067┬║d┬«J├░\u0087├üt┬ú\bD├ł├ş%├ąZ\r├Ü~\u0093┬Á9┬«\u001e├»\u001d├Ż├Ő\u0090&├Ż├ź0Q\u008c\u0094,├Ž\u0014\u008dM\u009c├┐'\u0097┬║├ů┬Ě\u0098┬┐├ÄR\u0011\u0096\\B├ş\u001c├ŽW├ö\u0087├«├║Qj\u009f├É┬í\u009b/\u0095\u0081┬┤├Ö┬║├śff\u0094G?├Ä\u009d├▒├ź├ł)┬í\u00ad\u008ba2\u0010├ź9├ťm├Ő├Ü├ő#3U\u0093\u001b\u0007M\u000e\n2├»ghu\u0003┬»x ├ź\u0091├ł\u009d├é\u0006┬ę┬ó├şh\u0088├âI┬║?8\u0095\u001d\u0092\u008di├Ş\u0096s;x├őh\u0098W├ö\r├ů├ú├Ż├×\r-├ő\u000f\u00860\ru\u0096.r├Ě\u008f┬░┬╝G├Ę├č\u001b-├│├ć[%├╝^┬Č├ç├Á├│├ë^\u000f├Ü┬Â├Şe\u0016(├ž\u0011├Ĺh├ťvAl\u008cq├ć├Éa7\u0015A├ą├îk┬╗g\u000f\u0082q\u00ad├ľ┬┐d,├śF├Ź├Ä^├Ľ\u0007├î├á\u0000├»├Ç├Ś\tL\u0005┬ž├¬┬Â\u001a├║\u0085\u0093$\u001a-@├ę├Ś\u001a\u008a{Zq\b├ĺ┬ó├▒o2\u0097├ü#├ş┬Ş\u0003j\u0014├╣I┬Ş\u0089├ż┬ęt\u000b\fe┬Ą4├Ş\bx├ó├É┬░o\u0017.\u0019Yc\u0019\u0088by├ł├║├É\u0006\u009b\u009b!m┬ę\u0007>U2=\u0003?├Ĺ├ť\"]\u0081┬á\u0084├ä\u0083:ld┬╝hI├Ż\u001b├┤├ş├Ä\u0082\t├óW┬át\u0000┬ź<G┬«\f\u001e├Ü(├án├Ż1├Ä\u0006├ź├Á3'HVa\u00ad)y\u0014}┬¬├ü├ť├Ö\u0012├▒x┬Â├┤├Ą\u0014┬┤├ś┬║├ć;\u0019N0├ź*2┬╣├ą}├╝y\u0013\u001c├ëY\u0098├é~├âQ├ůY2Q\u0004├î\u009aaFk\u0086┬Č├ÁB]4&├î3U\u0081├ä\u008eLj├ś├×Tx\r\u0002┬│+├ô\u000e┬Ę)\u007fU├Ü┬ú├É┬╣:├Ę├ľfp┬╝├║2├«\u0002!├ó1";
      int var5 = "┬╗r├▒{89\u0095┬ą\u00adD┬Č├Á%├á\u0014(\u000f;├żjh\u0010Mg├Şn\u009eS├Ł┬Ę├ó\u0092L├ő~\u0019\u0014u34Ep0l{┬╣;├╗├Ş\u0094j\u0002\u0084├üH\u0099Y\u0001┬Ž┬«\u0089┬á├Ťx$\u0004├Ě\u0094\u0097├Ü┬Ş├ö\u0017 ┬Á┬ž|.├ž\u009e┬á├╣├Č┬Â>\u0083^\u009a\u001f\u001a├▓|┬ĚJd┬ż=┬Ż\"n\u001d├Ö\u009c#?┬Ču@T┬í\u009d7\t\b├áQ├Ş\u0007]\u0094┬┐┬┐J┬╣\u001e┬ú/\u009bs\u0083\u0082\u0086]Sy?5┬╣├Ä┬┐$e)├ó;9~┬ęx├╝Z\"2z\u00067┬║d┬«J├░\u0087├üt┬ú\bD├ł├ş%├ąZ\r├Ü~\u0093┬Á9┬«\u001e├»\u001d├Ż├Ő\u0090&├Ż├ź0Q\u008c\u0094,├Ž\u0014\u008dM\u009c├┐'\u0097┬║├ů┬Ě\u0098┬┐├ÄR\u0011\u0096\\B├ş\u001c├ŽW├ö\u0087├«├║Qj\u009f├É┬í\u009b/\u0095\u0081┬┤├Ö┬║├śff\u0094G?├Ä\u009d├▒├ź├ł)┬í\u00ad\u008ba2\u0010├ź9├ťm├Ő├Ü├ő#3U\u0093\u001b\u0007M\u000e\n2├»ghu\u0003┬»x ├ź\u0091├ł\u009d├é\u0006┬ę┬ó├şh\u0088├âI┬║?8\u0095\u001d\u0092\u008di├Ş\u0096s;x├őh\u0098W├ö\r├ů├ú├Ż├×\r-├ő\u000f\u00860\ru\u0096.r├Ě\u008f┬░┬╝G├Ę├č\u001b-├│├ć[%├╝^┬Č├ç├Á├│├ë^\u000f├Ü┬Â├Şe\u0016(├ž\u0011├Ĺh├ťvAl\u008cq├ć├Éa7\u0015A├ą├îk┬╗g\u000f\u0082q\u00ad├ľ┬┐d,├śF├Ź├Ä^├Ľ\u0007├î├á\u0000├»├Ç├Ś\tL\u0005┬ž├¬┬Â\u001a├║\u0085\u0093$\u001a-@├ę├Ś\u001a\u008a{Zq\b├ĺ┬ó├▒o2\u0097├ü#├ş┬Ş\u0003j\u0014├╣I┬Ş\u0089├ż┬ęt\u000b\fe┬Ą4├Ş\bx├ó├É┬░o\u0017.\u0019Yc\u0019\u0088by├ł├║├É\u0006\u009b\u009b!m┬ę\u0007>U2=\u0003?├Ĺ├ť\"]\u0081┬á\u0084├ä\u0083:ld┬╝hI├Ż\u001b├┤├ş├Ä\u0082\t├óW┬át\u0000┬ź<G┬«\f\u001e├Ü(├án├Ż1├Ä\u0006├ź├Á3'HVa\u00ad)y\u0014}┬¬├ü├ť├Ö\u0012├▒x┬Â├┤├Ą\u0014┬┤├ś┬║├ć;\u0019N0├ź*2┬╣├ą}├╝y\u0013\u001c├ëY\u0098├é~├âQ├ůY2Q\u0004├î\u009aaFk\u0086┬Č├ÁB]4&├î3U\u0081├ä\u008eLj├ś├×Tx\r\u0002┬│+├ô\u000e┬Ę)\u007fU├Ü┬ú├É┬╣:├Ę├ľfp┬╝├║2├«\u0002!├ó1"
         .length();
      byte var2 = 0;

      label29:
      while (true) {
         var10001 = var2;
         var2 += 8;
         byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
         long[] var18 = var6;
         var10001 = var3++;
         long var24 = (var7[0] & 255L) << 56
            | (var7[1] & 255L) << 48
            | (var7[2] & 255L) << 40
            | (var7[3] & 255L) << 32
            | (var7[4] & 255L) << 24
            | (var7[5] & 255L) << 16
            | (var7[6] & 255L) << 8
            | var7[7] & 255L;
         byte var27 = -1;

         while (true) {
            long var8 = var24;
            byte[] var10 = var0.doFinal(
               new byte[]{
                  (byte)(var8 >>> 56),
                  (byte)(var8 >>> 48),
                  (byte)(var8 >>> 40),
                  (byte)(var8 >>> 32),
                  (byte)(var8 >>> 24),
                  (byte)(var8 >>> 16),
                  (byte)(var8 >>> 8),
                  (byte)var8
               }
            );
            long var29 = (var10[0] & 255L) << 56
               | (var10[1] & 255L) << 48
               | (var10[2] & 255L) << 40
               | (var10[3] & 255L) << 32
               | (var10[4] & 255L) << 24
               | (var10[5] & 255L) << 16
               | (var10[6] & 255L) << 8
               | var10[7] & 255L;
            switch (var27) {
               case 0:
                  var18[var10001] = var29;
                  if (var2 >= var5) {
                     pJqSz = var6;
                     QfLOA = new Integer[79];
                     return;
                  }
                  break;
               default:
                  var18[var10001] = var29;
                  if (var2 < var5) {
                     continue label29;
                  }

                  var4 = "RfA├Śg\u000ew\u0098├×xB├»b├Ť┬▒\u001c";
                  var5 = "RfA├Śg\u000ew\u0098├×xB├»b├Ť┬▒\u001c".length();
                  var2 = 0;
            }

            byte var21 = var2;
            var2 += 8;
            var7 = var4.substring(var21, var2).getBytes("ISO-8859-1");
            var18 = var6;
            var10001 = var3++;
            var24 = (var7[0] & 255L) << 56
               | (var7[1] & 255L) << 48
               | (var7[2] & 255L) << 40
               | (var7[3] & 255L) << 32
               | (var7[4] & 255L) << 24
               | (var7[5] & 255L) << 16
               | (var7[6] & 255L) << 8
               | var7[7] & 255L;
            var27 = 0;
         }
      }
   }
}
