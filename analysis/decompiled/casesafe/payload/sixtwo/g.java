package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Optional;
import java.util.function.Predicate;
import java.util.function.Supplier;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class g {
   private static g HbRlZ;
   private final az vSqxH = new g$rG(this).sS(true);
   private az HrPEm;
   private az XTXbB;
   private Runnable jywVM = () -> {};
   private static int[] itovx;
   private static final long uaqcq = gb.aYR(-2937396542381063339L, -4243365711051065170L, MethodHandles.lookup().lookupClass()).a(83042438305568L);
   private static final long GMDRM;

   static {
      int[] var10000 = new int[5];
      long var0 = uaqcq ^ 87854738762460L;
      bz(var10000);
      Cipher var2;
      Cipher var7 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var7.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = 3746660340161907318L;
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
      long var8 = (var6[0] & 255L) << 56
         | (var6[1] & 255L) << 48
         | (var6[2] & 255L) << 40
         | (var6[3] & 255L) << 32
         | (var6[4] & 255L) << 24
         | (var6[5] & 255L) << 16
         | (var6[6] & 255L) << 8
         | var6[7] & 255L;
      byte var10001 = -1;
      GMDRM = var8;
   }

   public <T extends az> Optional<T> ba(Class<T> param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/g.uaqcq J
      // 03: ldc2_w 116677048171619
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/g.bA ()[I
      // 0b: aload 0
      // 0c: aload 1
      // 0d: invokevirtual sixtwo/g.aY (Ljava/lang/Class;)Ljava/util/List;
      // 10: astore 5
      // 12: astore 4
      // 14: aload 5
      // 16: aload 4
      // 18: ifnull 39
      // 1b: invokeinterface java/util/List.isEmpty ()Z 1
      // 20: ifeq 32
      // 23: goto 2a
      // 26: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: invokestatic java/util/Optional.empty ()Ljava/util/Optional;
      // 2d: areturn
      // 2e: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: aload 5
      // 34: invokeinterface java/util/List.getFirst ()Ljava/lang/Object; 1
      // 39: checkcast sixtwo/az
      // 3c: invokestatic java/util/Optional.of (Ljava/lang/Object;)Ljava/util/Optional;
      // 3f: areturn
   }

   public <T extends az> void bb(Class<T> var1) {
      long var2 = uaqcq ^ 498966470974L;
      int[] var10000 = bA();
      Iterator var5 = this.aY(var1).iterator();
      int[] var4 = var10000;

      while (var5.hasNext()) {
         az var6 = (az)var5.next();

         label60: {
            label59: {
               try {
                  var13 = var6 instanceof aj;
                  if (var4 == null) {
                     break label60;
                  }

                  if (!var13) {
                     break label59;
                  }
               } catch (MatchException var10) {
                  throw bB(var10);
               }

               aj var7 = (aj)var6;
               var7.oj(false);
            }

            var13 = var6 instanceof bd;
         }

         label51: {
            label68: {
               label49: {
                  label48: {
                     try {
                        if (var4 == null) {
                           break label49;
                        }

                        if (!var13) {
                           break label48;
                        }
                     } catch (MatchException var9) {
                        throw bB(var9);
                     }

                     bd var11 = (bd)var6;
                     var11.Cg(false);
                  }

                  try {
                     var14 = var6;
                     if (var4 == null) {
                        break label68;
                     }

                     var13 = var6 instanceof aR;
                  } catch (MatchException var8) {
                     throw bB(var8);
                  }
               }

               if (!var13) {
                  break label51;
               }

               var14 = var6;
            }

            aR var12 = (aR)var14;
            var12.yg(false);
         }

         if (var4 == null) {
            break;
         }
      }
   }

   private void be(f param1, az param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/g.uaqcq J
      // 03: ldc2_w 82385645553309
      // 06: lxor
      // 07: lstore 3
      // 08: aload 0
      // 09: aload 2
      // 0a: invokevirtual sixtwo/g.bg (Lsixtwo/az;)Ljava/util/List;
      // 0d: astore 6
      // 0f: invokestatic sixtwo/g.bA ()[I
      // 12: aload 1
      // 13: aload 2
      // 14: invokevirtual sixtwo/f.aB (Lsixtwo/az;)Lsixtwo/f;
      // 17: pop
      // 18: aload 6
      // 1a: invokeinterface java/util/List.size ()I 1
      // 1f: bipush 1
      // 20: isub
      // 21: istore 7
      // 23: astore 5
      // 25: iload 7
      // 27: bipush 1
      // 28: if_icmplt 75
      // 2b: aload 1
      // 2c: invokevirtual sixtwo/f.az ()Z
      // 2f: aload 5
      // 31: ifnull 79
      // 34: aload 5
      // 36: ifnull 79
      // 39: goto 40
      // 3c: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3f: athrow
      // 40: ifne 75
      // 43: goto 4a
      // 46: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 49: athrow
      // 4a: aload 6
      // 4c: iload 7
      // 4e: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 53: checkcast sixtwo/az
      // 56: astore 8
      // 58: aload 1
      // 59: getstatic sixtwo/i.YdJtr Lsixtwo/i;
      // 5c: invokevirtual sixtwo/f.aA (Lsixtwo/i;)Lsixtwo/f;
      // 5f: pop
      // 60: aload 1
      // 61: aload 8
      // 63: invokevirtual sixtwo/f.aC (Lsixtwo/az;)Lsixtwo/f;
      // 66: pop
      // 67: aload 8
      // 69: aload 1
      // 6a: invokevirtual sixtwo/az.sy (Lsixtwo/f;)V
      // 6d: iinc 7 -1
      // 70: aload 5
      // 72: ifnonnull 25
      // 75: aload 1
      // 76: invokevirtual sixtwo/f.az ()Z
      // 79: aload 5
      // 7b: ifnull a3
      // 7e: ifne a2
      // 81: goto 88
      // 84: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 87: athrow
      // 88: aload 1
      // 89: getstatic sixtwo/i.nKqnf Lsixtwo/i;
      // 8c: invokevirtual sixtwo/f.aA (Lsixtwo/i;)Lsixtwo/f;
      // 8f: pop
      // 90: aload 1
      // 91: aload 2
      // 92: invokevirtual sixtwo/f.aC (Lsixtwo/az;)Lsixtwo/f;
      // 95: pop
      // 96: aload 2
      // 97: aload 1
      // 98: invokevirtual sixtwo/az.sz (Lsixtwo/f;)V
      // 9b: goto a2
      // 9e: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a1: athrow
      // a2: bipush 1
      // a3: istore 7
      // a5: iload 7
      // a7: aload 6
      // a9: invokeinterface java/util/List.size ()I 1
      // ae: if_icmpge f6
      // b1: aload 1
      // b2: aload 5
      // b4: ifnull d4
      // b7: invokevirtual sixtwo/f.az ()Z
      // ba: ifne f6
      // bd: goto c4
      // c0: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c3: athrow
      // c4: aload 6
      // c6: iload 7
      // c8: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // cd: goto d4
      // d0: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d3: athrow
      // d4: checkcast sixtwo/az
      // d7: astore 8
      // d9: aload 1
      // da: getstatic sixtwo/i.pEktq Lsixtwo/i;
      // dd: invokevirtual sixtwo/f.aA (Lsixtwo/i;)Lsixtwo/f;
      // e0: pop
      // e1: aload 1
      // e2: aload 8
      // e4: invokevirtual sixtwo/f.aC (Lsixtwo/az;)Lsixtwo/f;
      // e7: pop
      // e8: aload 8
      // ea: aload 1
      // eb: invokevirtual sixtwo/az.sA (Lsixtwo/f;)V
      // ee: iinc 7 1
      // f1: aload 5
      // f3: ifnonnull a5
      // f6: return
   }

   private boolean bi(f param1, az param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/g.uaqcq J
      // 03: ldc2_w 65804939679555
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/g.bA ()[I
      // 0b: astore 5
      // 0d: aload 1
      // 0e: invokevirtual sixtwo/f.ap ()Lsixtwo/f$rF;
      // 11: getstatic sixtwo/f$rF.feLzE Lsixtwo/f$rF;
      // 14: if_acmpeq 1d
      // 17: bipush 0
      // 18: ireturn
      // 19: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 0
      // 1e: invokevirtual sixtwo/g.bp ()Ljava/util/List;
      // 21: astore 6
      // 23: aload 6
      // 25: invokeinterface java/util/List.size ()I 1
      // 2a: bipush 1
      // 2b: isub
      // 2c: istore 7
      // 2e: iload 7
      // 30: iflt c7
      // 33: aload 6
      // 35: iload 7
      // 37: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 3c: checkcast sixtwo/az
      // 3f: astore 8
      // 41: aload 0
      // 42: aload 8
      // 44: aload 2
      // 45: invokevirtual sixtwo/g.bl (Lsixtwo/az;Lsixtwo/az;)Z
      // 48: aload 5
      // 4a: ifnull c8
      // 4d: aload 5
      // 4f: ifnull 6e
      // 52: goto 59
      // 55: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 58: athrow
      // 59: ifeq 69
      // 5c: goto 63
      // 5f: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 62: athrow
      // 63: bipush 0
      // 64: ireturn
      // 65: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 68: athrow
      // 69: aload 8
      // 6b: invokevirtual sixtwo/az.ty ()Z
      // 6e: aload 5
      // 70: ifnull 91
      // 73: ifne bf
      // 76: goto 7d
      // 79: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7c: athrow
      // 7d: aload 8
      // 7f: aload 1
      // 80: invokevirtual sixtwo/f.aq ()D
      // 83: aload 1
      // 84: invokevirtual sixtwo/f.ar ()D
      // 87: invokevirtual sixtwo/az.hc (DD)Z
      // 8a: goto 91
      // 8d: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 90: athrow
      // 91: aload 5
      // 93: ifnull be
      // 96: ifeq bf
      // 99: goto a0
      // 9c: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9f: athrow
      // a0: aload 8
      // a2: aload 1
      // a3: invokevirtual sixtwo/f.aq ()D
      // a6: aload 1
      // a7: invokevirtual sixtwo/f.ar ()D
      // aa: aload 1
      // ab: invokevirtual sixtwo/f.as ()Lsixtwo/mA;
      // ae: invokevirtual sixtwo/az.dk (DDLsixtwo/mA;)Z
      // b1: pop
      // b2: aload 1
      // b3: invokevirtual sixtwo/f.ao ()V
      // b6: bipush 1
      // b7: goto be
      // ba: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // bd: athrow
      // be: ireturn
      // bf: iinc 7 -1
      // c2: aload 5
      // c4: ifnonnull 2e
      // c7: bipush 0
      // c8: ireturn
   }

   public Runnable bv() {
      return this.jywVM;
   }

   private void bo(lC var1) {
      long var2 = uaqcq ^ 75443425263281L;
      int[] var10000 = bA();
      Iterator var5 = new ArrayList<>(this.vSqxH.tv().cmj()).iterator();
      int[] var4 = var10000;

      while (var5.hasNext()) {
         az var6 = (az)var5.next();
         boolean var7 = var6.oi();

         label36: {
            label35: {
               try {
                  var11 = var6 instanceof k;
                  if (var4 == null) {
                     break label36;
                  }

                  if (!var11) {
                     break label35;
                  }
               } catch (MatchException var10) {
                  throw bB(var10);
               }

               k var8 = (k)var6;
               var7 = var8.bW(var1);
            }

            var11 = var7;
         }

         try {
            if (var11) {
               this.aJ(var6);
            }
         } catch (MatchException var9) {
            throw bB(var9);
         }

         if (var4 == null) {
            break;
         }
      }
   }

   private List<az> bp() {
      ArrayList var1 = new ArrayList<>(this.vSqxH.tv().cmj());
      var1.sort(az.VjGAm);
      return var1;
   }

   public az bt() {
      return this.HrPEm;
   }

   private boolean bc(f param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/g.uaqcq J
      // 003: ldc2_w 91145099016606
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/g.bA ()[I
      // 00b: getstatic sixtwo/g.HbRlZ Lsixtwo/g;
      // 00e: astore 5
      // 010: astore 4
      // 012: aload 0
      // 013: putstatic sixtwo/g.HbRlZ Lsixtwo/g;
      // 016: aload 0
      // 017: aload 4
      // 019: ifnull 02e
      // 01c: getfield sixtwo/g.XTXbB Lsixtwo/az;
      // 01f: ifnull 02d
      // 022: aload 0
      // 023: getfield sixtwo/g.XTXbB Lsixtwo/az;
      // 026: goto 039
      // 029: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02c: athrow
      // 02d: aload 0
      // 02e: aload 1
      // 02f: invokevirtual sixtwo/f.aq ()D
      // 032: aload 1
      // 033: invokevirtual sixtwo/f.ar ()D
      // 036: invokevirtual sixtwo/g.aM (DD)Lsixtwo/az;
      // 039: astore 6
      // 03b: aload 0
      // 03c: getfield sixtwo/g.XTXbB Lsixtwo/az;
      // 03f: aload 4
      // 041: ifnull 07a
      // 044: ifnonnull 076
      // 047: goto 04e
      // 04a: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 04d: athrow
      // 04e: aload 0
      // 04f: aload 4
      // 051: ifnull 077
      // 054: goto 05b
      // 057: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05a: athrow
      // 05b: aload 1
      // 05c: aload 6
      // 05e: invokevirtual sixtwo/g.bi (Lsixtwo/f;Lsixtwo/az;)Z
      // 061: ifeq 076
      // 064: goto 06b
      // 067: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06a: athrow
      // 06b: bipush 1
      // 06c: istore 7
      // 06e: aload 5
      // 070: putstatic sixtwo/g.HbRlZ Lsixtwo/g;
      // 073: iload 7
      // 075: ireturn
      // 076: aload 0
      // 077: getfield sixtwo/g.XTXbB Lsixtwo/az;
      // 07a: aload 4
      // 07c: ifnull 0b3
      // 07f: ifnonnull 0b1
      // 082: goto 089
      // 085: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 088: athrow
      // 089: aload 0
      // 08a: aload 1
      // 08b: aload 6
      // 08d: invokevirtual sixtwo/g.bj (Lsixtwo/f;Lsixtwo/az;)Z
      // 090: aload 4
      // 092: ifnull 0a7
      // 095: goto 09c
      // 098: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09b: athrow
      // 09c: ifeq 0b1
      // 09f: goto 0a6
      // 0a2: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a5: athrow
      // 0a6: bipush 1
      // 0a7: istore 7
      // 0a9: aload 5
      // 0ab: putstatic sixtwo/g.HbRlZ Lsixtwo/g;
      // 0ae: iload 7
      // 0b0: ireturn
      // 0b1: aload 6
      // 0b3: aload 4
      // 0b5: ifnull 0d5
      // 0b8: ifnonnull 0d7
      // 0bb: goto 0c2
      // 0be: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c1: athrow
      // 0c2: aload 0
      // 0c3: aload 1
      // 0c4: invokevirtual sixtwo/f.aq ()D
      // 0c7: aload 1
      // 0c8: invokevirtual sixtwo/f.ar ()D
      // 0cb: invokevirtual sixtwo/g.bh (DD)Lsixtwo/az;
      // 0ce: goto 0d5
      // 0d1: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d4: athrow
      // 0d5: astore 6
      // 0d7: aload 1
      // 0d8: invokevirtual sixtwo/f.ap ()Lsixtwo/f$rF;
      // 0db: getstatic sixtwo/f$rF.CjcqV Lsixtwo/f$rF;
      // 0de: if_acmpne 108
      // 0e1: aload 0
      // 0e2: getfield sixtwo/g.XTXbB Lsixtwo/az;
      // 0e5: aload 4
      // 0e7: ifnull 10a
      // 0ea: goto 0f1
      // 0ed: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f0: athrow
      // 0f1: ifnonnull 108
      // 0f4: goto 0fb
      // 0f7: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0fa: athrow
      // 0fb: aload 0
      // 0fc: aload 6
      // 0fe: invokevirtual sixtwo/g.bn (Lsixtwo/az;)V
      // 101: goto 108
      // 104: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 107: athrow
      // 108: aload 6
      // 10a: ifnonnull 118
      // 10d: bipush 0
      // 10e: istore 7
      // 110: aload 5
      // 112: putstatic sixtwo/g.HbRlZ Lsixtwo/g;
      // 115: iload 7
      // 117: ireturn
      // 118: aload 0
      // 119: aload 1
      // 11a: aload 6
      // 11c: invokevirtual sixtwo/g.be (Lsixtwo/f;Lsixtwo/az;)V
      // 11f: aload 1
      // 120: invokevirtual sixtwo/f.az ()Z
      // 123: istore 7
      // 125: aload 5
      // 127: putstatic sixtwo/g.HbRlZ Lsixtwo/g;
      // 12a: iload 7
      // 12c: ireturn
      // 12d: astore 8
      // 12f: aload 5
      // 131: putstatic sixtwo/g.HbRlZ Lsixtwo/g;
      // 134: aload 8
      // 136: athrow
   }

   private <T extends az> void br(az param1, Class<T> param2, List<T> param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/g.uaqcq J
      // 03: ldc2_w 68126340790727
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/g.bA ()[I
      // 0c: astore 6
      // 0e: aload 2
      // 0f: aload 1
      // 10: aload 6
      // 12: ifnull 2b
      // 15: invokevirtual java/lang/Class.isInstance (Ljava/lang/Object;)Z
      // 18: ifeq 3c
      // 1b: goto 22
      // 1e: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: aload 2
      // 23: aload 1
      // 24: goto 2b
      // 27: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: invokevirtual java/lang/Class.cast (Ljava/lang/Object;)Ljava/lang/Object;
      // 2e: checkcast sixtwo/az
      // 31: astore 7
      // 33: aload 3
      // 34: aload 7
      // 36: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 3b: pop
      // 3c: aload 1
      // 3d: invokevirtual sixtwo/az.tv ()Lsixtwo/mu;
      // 40: invokevirtual sixtwo/mu.cmj ()Ljava/util/List;
      // 43: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 48: astore 7
      // 4a: aload 7
      // 4c: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 51: ifeq 6d
      // 54: aload 7
      // 56: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 5b: checkcast sixtwo/az
      // 5e: astore 8
      // 60: aload 0
      // 61: aload 8
      // 63: aload 2
      // 64: aload 3
      // 65: invokevirtual sixtwo/g.br (Lsixtwo/az;Ljava/lang/Class;Ljava/util/List;)V
      // 68: aload 6
      // 6a: ifnonnull 4a
      // 6d: return
   }

   private <T extends az> void bq(az param1, Class<T> param2, Predicate<T> param3, List<T> param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/g.uaqcq J
      // 03: ldc2_w 24937649577817
      // 06: lxor
      // 07: lstore 5
      // 09: invokestatic sixtwo/g.bA ()[I
      // 0c: astore 7
      // 0e: aload 2
      // 0f: aload 1
      // 10: aload 7
      // 12: ifnull 2b
      // 15: invokevirtual java/lang/Class.isInstance (Ljava/lang/Object;)Z
      // 18: ifeq 54
      // 1b: goto 22
      // 1e: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: aload 2
      // 23: aload 1
      // 24: goto 2b
      // 27: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: invokevirtual java/lang/Class.cast (Ljava/lang/Object;)Ljava/lang/Object;
      // 2e: checkcast sixtwo/az
      // 31: aload 7
      // 33: ifnull 55
      // 36: astore 8
      // 38: aload 3
      // 39: aload 8
      // 3b: invokeinterface java/util/function/Predicate.test (Ljava/lang/Object;)Z 2
      // 40: ifeq 54
      // 43: aload 4
      // 45: aload 8
      // 47: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 4c: pop
      // 4d: goto 54
      // 50: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 53: athrow
      // 54: aload 1
      // 55: invokevirtual sixtwo/az.tv ()Lsixtwo/mu;
      // 58: invokevirtual sixtwo/mu.cmj ()Ljava/util/List;
      // 5b: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 60: astore 8
      // 62: aload 8
      // 64: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 69: ifeq 87
      // 6c: aload 8
      // 6e: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 73: checkcast sixtwo/az
      // 76: astore 9
      // 78: aload 0
      // 79: aload 9
      // 7b: aload 2
      // 7c: aload 3
      // 7d: aload 4
      // 7f: invokevirtual sixtwo/g.bq (Lsixtwo/az;Ljava/lang/Class;Ljava/util/function/Predicate;Ljava/util/List;)V
      // 82: aload 7
      // 84: ifnonnull 62
      // 87: return
   }

   public az bs() {
      return this.vSqxH;
   }

   private boolean bd(h param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/g.uaqcq J
      // 03: ldc2_w 90728503161671
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/g.bA ()[I
      // 0b: getstatic sixtwo/g.HbRlZ Lsixtwo/g;
      // 0e: astore 5
      // 10: astore 4
      // 12: aload 0
      // 13: putstatic sixtwo/g.HbRlZ Lsixtwo/g;
      // 16: aload 0
      // 17: invokevirtual sixtwo/g.bp ()Ljava/util/List;
      // 1a: astore 6
      // 1c: aload 6
      // 1e: invokeinterface java/util/List.size ()I 1
      // 23: bipush 1
      // 24: isub
      // 25: istore 7
      // 27: iload 7
      // 29: iflt 9a
      // 2c: aload 6
      // 2e: iload 7
      // 30: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 35: checkcast sixtwo/az
      // 38: astore 8
      // 3a: aload 8
      // 3c: invokevirtual sixtwo/az.ty ()Z
      // 3f: aload 4
      // 41: ifnull a4
      // 44: aload 4
      // 46: ifnull 84
      // 49: goto 50
      // 4c: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4f: athrow
      // 50: ifeq 66
      // 53: goto 5a
      // 56: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 59: athrow
      // 5a: aload 4
      // 5c: ifnonnull 92
      // 5f: goto 66
      // 62: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 65: athrow
      // 66: aload 0
      // 67: aload 1
      // 68: aload 8
      // 6a: invokevirtual sixtwo/g.bf (Lsixtwo/h;Lsixtwo/az;)V
      // 6d: aload 4
      // 6f: ifnull 95
      // 72: goto 79
      // 75: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 78: athrow
      // 79: aload 1
      // 7a: invokevirtual sixtwo/h.bN ()Z
      // 7d: goto 84
      // 80: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 83: athrow
      // 84: ifeq 92
      // 87: bipush 1
      // 88: istore 9
      // 8a: aload 5
      // 8c: putstatic sixtwo/g.HbRlZ Lsixtwo/g;
      // 8f: iload 9
      // 91: ireturn
      // 92: iinc 7 -1
      // 95: aload 4
      // 97: ifnonnull 27
      // 9a: bipush 0
      // 9b: istore 7
      // 9d: aload 5
      // 9f: putstatic sixtwo/g.HbRlZ Lsixtwo/g;
      // a2: iload 7
      // a4: ireturn
      // a5: astore 10
      // a7: aload 5
      // a9: putstatic sixtwo/g.HbRlZ Lsixtwo/g;
      // ac: aload 10
      // ae: athrow
   }

   private az bh(double param1, double param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/g.uaqcq J
      // 03: ldc2_w 140126405101392
      // 06: lxor
      // 07: lstore 5
      // 09: invokestatic sixtwo/g.bA ()[I
      // 0c: aload 0
      // 0d: invokevirtual sixtwo/g.bp ()Ljava/util/List;
      // 10: astore 8
      // 12: astore 7
      // 14: aload 8
      // 16: invokeinterface java/util/List.size ()I 1
      // 1b: bipush 1
      // 1c: isub
      // 1d: istore 9
      // 1f: iload 9
      // 21: iflt 75
      // 24: aload 8
      // 26: iload 9
      // 28: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 2d: checkcast sixtwo/az
      // 30: astore 10
      // 32: aload 7
      // 34: ifnull 70
      // 37: aload 10
      // 39: invokevirtual sixtwo/az.ty ()Z
      // 3c: ifne 6d
      // 3f: goto 46
      // 42: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 45: athrow
      // 46: aload 10
      // 48: aload 7
      // 4a: ifnull 6c
      // 4d: goto 54
      // 50: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 53: athrow
      // 54: dload 1
      // 55: dload 3
      // 56: invokevirtual sixtwo/az.hc (DD)Z
      // 59: ifeq 6d
      // 5c: goto 63
      // 5f: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 62: athrow
      // 63: aload 10
      // 65: goto 6c
      // 68: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6b: athrow
      // 6c: areturn
      // 6d: iinc 9 -1
      // 70: aload 7
      // 72: ifnonnull 1f
      // 75: aconst_null
      // 76: areturn
   }

   private List<az> bg(az var1) {
      long var2 = uaqcq ^ 30117144311348L;
      ArrayList var5 = new ArrayList();
      int[] var10000 = bA();
      az var6 = var1;
      int[] var4 = var10000;

      while (true) {
         if (var6 != null) {
            var7 = var5;
            if (var4 == null) {
               break;
            }

            var5.add(var6);
            var6 = var6.tu();
            if (var4 != null) {
               continue;
            }
         }

         var7 = var5;
         break;
      }

      return var7;
   }

   private void bf(h param1, az param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/g.uaqcq J
      // 03: ldc2_w 7304325946680
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/g.bA ()[I
      // 0b: aload 0
      // 0c: aload 2
      // 0d: invokevirtual sixtwo/g.bg (Lsixtwo/az;)Ljava/util/List;
      // 10: astore 6
      // 12: astore 5
      // 14: aload 1
      // 15: aload 2
      // 16: invokevirtual sixtwo/h.bP (Lsixtwo/az;)Lsixtwo/h;
      // 19: pop
      // 1a: aload 6
      // 1c: invokeinterface java/util/List.size ()I 1
      // 21: bipush 1
      // 22: isub
      // 23: istore 7
      // 25: iload 7
      // 27: bipush 1
      // 28: if_icmplt 75
      // 2b: aload 1
      // 2c: invokevirtual sixtwo/h.bN ()Z
      // 2f: aload 5
      // 31: ifnull 79
      // 34: aload 5
      // 36: ifnull 79
      // 39: goto 40
      // 3c: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3f: athrow
      // 40: ifne 75
      // 43: goto 4a
      // 46: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 49: athrow
      // 4a: aload 6
      // 4c: iload 7
      // 4e: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 53: checkcast sixtwo/az
      // 56: astore 8
      // 58: aload 1
      // 59: getstatic sixtwo/i.YdJtr Lsixtwo/i;
      // 5c: invokevirtual sixtwo/h.bO (Lsixtwo/i;)Lsixtwo/h;
      // 5f: pop
      // 60: aload 1
      // 61: aload 8
      // 63: invokevirtual sixtwo/h.bQ (Lsixtwo/az;)Lsixtwo/h;
      // 66: pop
      // 67: aload 8
      // 69: aload 1
      // 6a: invokevirtual sixtwo/az.sB (Lsixtwo/h;)V
      // 6d: iinc 7 -1
      // 70: aload 5
      // 72: ifnonnull 25
      // 75: aload 1
      // 76: invokevirtual sixtwo/h.bN ()Z
      // 79: aload 5
      // 7b: ifnull a3
      // 7e: ifne a2
      // 81: goto 88
      // 84: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 87: athrow
      // 88: aload 1
      // 89: getstatic sixtwo/i.nKqnf Lsixtwo/i;
      // 8c: invokevirtual sixtwo/h.bO (Lsixtwo/i;)Lsixtwo/h;
      // 8f: pop
      // 90: aload 1
      // 91: aload 2
      // 92: invokevirtual sixtwo/h.bQ (Lsixtwo/az;)Lsixtwo/h;
      // 95: pop
      // 96: aload 2
      // 97: aload 1
      // 98: invokevirtual sixtwo/az.sC (Lsixtwo/h;)V
      // 9b: goto a2
      // 9e: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a1: athrow
      // a2: bipush 1
      // a3: istore 7
      // a5: iload 7
      // a7: aload 6
      // a9: invokeinterface java/util/List.size ()I 1
      // ae: if_icmpge f6
      // b1: aload 1
      // b2: aload 5
      // b4: ifnull d4
      // b7: invokevirtual sixtwo/h.bN ()Z
      // ba: ifne f6
      // bd: goto c4
      // c0: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c3: athrow
      // c4: aload 6
      // c6: iload 7
      // c8: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // cd: goto d4
      // d0: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d3: athrow
      // d4: checkcast sixtwo/az
      // d7: astore 8
      // d9: aload 1
      // da: getstatic sixtwo/i.pEktq Lsixtwo/i;
      // dd: invokevirtual sixtwo/h.bO (Lsixtwo/i;)Lsixtwo/h;
      // e0: pop
      // e1: aload 1
      // e2: aload 8
      // e4: invokevirtual sixtwo/h.bQ (Lsixtwo/az;)Lsixtwo/h;
      // e7: pop
      // e8: aload 8
      // ea: aload 1
      // eb: invokevirtual sixtwo/az.sD (Lsixtwo/h;)V
      // ee: iinc 7 1
      // f1: aload 5
      // f3: ifnonnull a5
      // f6: return
   }

   public az bu() {
      return this.XTXbB;
   }

   private void bn(az param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/g.uaqcq J
      // 03: ldc2_w 17479297850299
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/g.bA ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/g.HrPEm Lsixtwo/az;
      // 11: aload 4
      // 13: ifnull 2a
      // 16: aload 1
      // 17: if_acmpne 26
      // 1a: goto 21
      // 1d: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: return
      // 22: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: getfield sixtwo/g.HrPEm Lsixtwo/az;
      // 2a: aload 4
      // 2c: ifnull 50
      // 2f: ifnull 47
      // 32: goto 39
      // 35: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: aload 0
      // 3a: getfield sixtwo/g.HrPEm Lsixtwo/az;
      // 3d: invokevirtual sixtwo/az.sx ()V
      // 40: goto 47
      // 43: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 46: athrow
      // 47: aload 0
      // 48: aload 1
      // 49: putfield sixtwo/g.HrPEm Lsixtwo/az;
      // 4c: aload 0
      // 4d: getfield sixtwo/g.HrPEm Lsixtwo/az;
      // 50: aload 4
      // 52: ifnull 6a
      // 55: ifnull 6d
      // 58: goto 5f
      // 5b: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5e: athrow
      // 5f: aload 0
      // 60: getfield sixtwo/g.HrPEm Lsixtwo/az;
      // 63: goto 6a
      // 66: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 69: athrow
      // 6a: invokevirtual sixtwo/az.sw ()V
      // 6d: return
   }

   public static void bz(int[] var0) {
      itovx = var0;
   }

   private static MatchException bB(MatchException var0) {
      return var0;
   }

   private boolean bj(f param1, az param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/g.uaqcq J
      // 03: ldc2_w 4896382713892
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/g.bA ()[I
      // 0b: astore 5
      // 0d: aload 1
      // 0e: invokevirtual sixtwo/f.ap ()Lsixtwo/f$rF;
      // 11: getstatic sixtwo/f$rF.feLzE Lsixtwo/f$rF;
      // 14: if_acmpeq 1d
      // 17: bipush 0
      // 18: ireturn
      // 19: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 0
      // 1e: ldc_w sixtwo/aj
      // 21: invokevirtual sixtwo/g.aY (Ljava/lang/Class;)Ljava/util/List;
      // 24: astore 6
      // 26: aload 6
      // 28: invokeinterface java/util/List.size ()I 1
      // 2d: bipush 1
      // 2e: isub
      // 2f: istore 7
      // 31: iload 7
      // 33: iflt c9
      // 36: aload 6
      // 38: iload 7
      // 3a: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 3f: checkcast sixtwo/aj
      // 42: astore 8
      // 44: aload 0
      // 45: aload 8
      // 47: invokevirtual sixtwo/g.bk (Lsixtwo/aj;)Z
      // 4a: aload 5
      // 4c: ifnull ca
      // 4f: aload 5
      // 51: ifnull 7f
      // 54: goto 5b
      // 57: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5a: athrow
      // 5b: ifne 71
      // 5e: goto 65
      // 61: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 64: athrow
      // 65: aload 5
      // 67: ifnonnull c1
      // 6a: goto 71
      // 6d: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 70: athrow
      // 71: aload 0
      // 72: aload 8
      // 74: aload 2
      // 75: invokevirtual sixtwo/g.bl (Lsixtwo/az;Lsixtwo/az;)Z
      // 78: goto 7f
      // 7b: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7e: athrow
      // 7f: aload 5
      // 81: ifnull a5
      // 84: ifeq 94
      // 87: goto 8e
      // 8a: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8d: athrow
      // 8e: bipush 0
      // 8f: ireturn
      // 90: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 93: athrow
      // 94: aload 8
      // 96: aload 1
      // 97: invokevirtual sixtwo/f.aq ()D
      // 9a: aload 1
      // 9b: invokevirtual sixtwo/f.ar ()D
      // 9e: aload 1
      // 9f: invokevirtual sixtwo/f.as ()Lsixtwo/mA;
      // a2: invokevirtual sixtwo/aj.dk (DDLsixtwo/mA;)Z
      // a5: aload 5
      // a7: ifnull c0
      // aa: ifeq c1
      // ad: goto b4
      // b0: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b3: athrow
      // b4: aload 1
      // b5: invokevirtual sixtwo/f.ao ()V
      // b8: bipush 1
      // b9: goto c0
      // bc: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // bf: athrow
      // c0: ireturn
      // c1: iinc 7 -1
      // c4: aload 5
      // c6: ifnonnull 31
      // c9: bipush 0
      // ca: ireturn
   }

   public static int[] bA() {
      return itovx;
   }

   private boolean bk(aj param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/g.uaqcq J
      // 03: ldc2_w 74928733459947
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/g.bA ()[I
      // 0b: astore 4
      // 0d: aload 1
      // 0e: invokevirtual sixtwo/aj.tz ()Z
      // 11: aload 4
      // 13: ifnull 2b
      // 16: ifne 49
      // 19: goto 20
      // 1c: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 1
      // 21: invokevirtual sixtwo/aj.tt ()I
      // 24: goto 2b
      // 27: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: aload 4
      // 2d: ifnull 46
      // 30: getstatic sixtwo/g.GMDRM J
      // 33: l2i
      // 34: if_icmpne 49
      // 37: goto 3e
      // 3a: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: bipush 1
      // 3f: goto 46
      // 42: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 45: athrow
      // 46: goto 4a
      // 49: bipush 0
      // 4a: ireturn
   }

   private void bm(double param1, double param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/g.uaqcq J
      // 03: ldc2_w 140460641416410
      // 06: lxor
      // 07: lstore 5
      // 09: invokestatic sixtwo/g.bA ()[I
      // 0c: astore 7
      // 0e: aload 0
      // 0f: aload 7
      // 11: ifnull 27
      // 14: getfield sixtwo/g.XTXbB Lsixtwo/az;
      // 17: ifnull 26
      // 1a: goto 21
      // 1d: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: return
      // 22: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: aload 0
      // 28: dload 1
      // 29: dload 3
      // 2a: invokevirtual sixtwo/g.aM (DD)Lsixtwo/az;
      // 2d: invokevirtual sixtwo/g.bn (Lsixtwo/az;)V
      // 30: return
   }

   private boolean bl(az param1, az param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/g.uaqcq J
      // 03: ldc2_w 55997981200545
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/g.bA ()[I
      // 0b: aload 2
      // 0c: astore 6
      // 0e: astore 5
      // 10: aload 6
      // 12: ifnull 39
      // 15: aload 6
      // 17: aload 5
      // 19: ifnull 32
      // 1c: aload 1
      // 1d: if_acmpne 2d
      // 20: goto 27
      // 23: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: bipush 1
      // 28: ireturn
      // 29: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: aload 6
      // 2f: invokevirtual sixtwo/az.tu ()Lsixtwo/az;
      // 32: astore 6
      // 34: aload 5
      // 36: ifnonnull 10
      // 39: bipush 0
      // 3a: ireturn
   }

   public <T extends az> List<T> aY(Class<T> var1) {
      ArrayList var2 = new ArrayList();
      this.br(this.vSqxH, var1, var2);
      var2.sort(az.VjGAm);
      return var2;
   }

   public <T extends az> Optional<T> aZ(Class<T> param1, Predicate<T> param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/g.uaqcq J
      // 03: ldc2_w 109108116749426
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/g.bA ()[I
      // 0b: aload 0
      // 0c: aload 1
      // 0d: invokevirtual sixtwo/g.aY (Ljava/lang/Class;)Ljava/util/List;
      // 10: astore 6
      // 12: aload 6
      // 14: invokeinterface java/util/List.size ()I 1
      // 19: bipush 1
      // 1a: isub
      // 1b: istore 7
      // 1d: astore 5
      // 1f: iload 7
      // 21: iflt 5b
      // 24: aload 6
      // 26: iload 7
      // 28: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 2d: checkcast sixtwo/az
      // 30: astore 8
      // 32: aload 5
      // 34: ifnull 56
      // 37: aload 2
      // 38: aload 8
      // 3a: invokeinterface java/util/function/Predicate.test (Ljava/lang/Object;)Z 2
      // 3f: ifeq 53
      // 42: goto 49
      // 45: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 48: athrow
      // 49: aload 8
      // 4b: invokestatic java/util/Optional.of (Ljava/lang/Object;)Ljava/util/Optional;
      // 4e: areturn
      // 4f: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 52: athrow
      // 53: iinc 7 -1
      // 56: aload 5
      // 58: ifnonnull 1f
      // 5b: invokestatic java/util/Optional.empty ()Ljava/util/Optional;
      // 5e: areturn
   }

   public <T extends az> T aX(Class<T> param1, Supplier<T> param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/g.uaqcq J
      // 03: ldc2_w 70380185269500
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/g.bA ()[I
      // 0b: aload 0
      // 0c: aload 1
      // 0d: invokedynamic test ()Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, sixtwo/g.bw (Lsixtwo/az;)Z, (Lsixtwo/az;)Z ]
      // 12: invokevirtual sixtwo/g.aZ (Ljava/lang/Class;Ljava/util/function/Predicate;)Ljava/util/Optional;
      // 15: astore 6
      // 17: astore 5
      // 19: aload 6
      // 1b: aload 5
      // 1d: ifnull 44
      // 20: invokevirtual java/util/Optional.isPresent ()Z
      // 23: ifeq 3e
      // 26: goto 2d
      // 29: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: aload 0
      // 2e: aload 6
      // 30: invokevirtual java/util/Optional.get ()Ljava/lang/Object;
      // 33: checkcast sixtwo/az
      // 36: invokevirtual sixtwo/g.aF (Lsixtwo/az;)Lsixtwo/az;
      // 39: areturn
      // 3a: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: aload 2
      // 3f: invokeinterface java/util/function/Supplier.get ()Ljava/lang/Object; 1
      // 44: checkcast sixtwo/az
      // 47: astore 7
      // 49: aload 0
      // 4a: aload 7
      // 4c: invokevirtual sixtwo/g.aF (Lsixtwo/az;)Lsixtwo/az;
      // 4f: areturn
   }

   public static g aD() {
      return HbRlZ;
   }

   public void aU(az var1) {
      long var2 = uaqcq ^ 115678282225946L;

      try {
         if (var1 != null) {
            this.XTXbB = var1;
         }
      } catch (MatchException var4) {
         throw bB(var4);
      }
   }

   public void aW(az param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/g.uaqcq J
      // 03: ldc2_w 92423519457920
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/g.bA ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnull 29
      // 13: getfield sixtwo/g.XTXbB Lsixtwo/az;
      // 16: aload 1
      // 17: if_acmpne 2d
      // 1a: goto 21
      // 1d: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 0
      // 22: goto 29
      // 25: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: aconst_null
      // 2a: putfield sixtwo/g.XTXbB Lsixtwo/az;
      // 2d: return
   }

   public <T extends az> T aF(T var1) {
      return this.aG((T)var1, this.aI());
   }

   public boolean aO(double var1, double var3, mA var5) {
      long var6 = uaqcq ^ 138182428394784L;
      bA();
      boolean var9 = this.bc(f.ak(var1, var3, var5));

      try {
         this.XTXbB = null;
         this.bm(var1, var3);
         if (iS.bwL() == null) {
            bz(new int[2]);
         }

         return var9;
      } catch (MatchException var10) {
         throw bB(var10);
      }
   }

   public g aV(Runnable var1) {
      long var2 = uaqcq ^ 8370032199530L;
      int[] var4 = bA();

      g var10000;
      Runnable var10001;
      label22: {
         label21: {
            try {
               var10000 = this;
               var10001 = var1;
               if (var4 == null) {
                  break label22;
               }

               if (var1 == null) {
                  break label21;
               }
            } catch (MatchException var5) {
               throw bB(var5);
            }

            var10001 = var1;
            break label22;
         }

         var10001 = () -> {};
      }

      var10000.jywVM = var10001;
      return this;
   }

   public <T extends az> T aE(T var1) {
      return this.aG((T)var1, this.aH());
   }

   public boolean aN(double var1, double var3, mA var5) {
      return this.bc(f.aj(var1, var3, var5));
   }

   public void aL(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/g.uaqcq J
      // 003: ldc2_w 133801171816385
      // 006: lxor
      // 007: lstore 2
      // 008: getstatic sixtwo/g.HbRlZ Lsixtwo/g;
      // 00b: astore 5
      // 00d: invokestatic sixtwo/g.bA ()[I
      // 010: aload 0
      // 011: putstatic sixtwo/g.HbRlZ Lsixtwo/g;
      // 014: astore 4
      // 016: aload 0
      // 017: aload 1
      // 018: invokevirtual sixtwo/g.bo (Lsixtwo/lC;)V
      // 01b: aload 0
      // 01c: aload 1
      // 01d: invokevirtual sixtwo/lC.cff ()D
      // 020: aload 1
      // 021: invokevirtual sixtwo/lC.cfg ()D
      // 024: invokevirtual sixtwo/g.bm (DD)V
      // 027: aload 0
      // 028: getfield sixtwo/g.HrPEm Lsixtwo/az;
      // 02b: aload 4
      // 02d: ifnull 046
      // 030: ifnonnull 042
      // 033: goto 03a
      // 036: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 039: athrow
      // 03a: aconst_null
      // 03b: goto 049
      // 03e: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 041: athrow
      // 042: aload 0
      // 043: getfield sixtwo/g.HrPEm Lsixtwo/az;
      // 046: invokevirtual sixtwo/az.sM ()Lsixtwo/az;
      // 049: astore 6
      // 04b: aload 6
      // 04d: aload 4
      // 04f: ifnull 067
      // 052: ifnonnull 07c
      // 055: goto 05c
      // 058: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05b: athrow
      // 05c: aload 0
      // 05d: getfield sixtwo/g.HrPEm Lsixtwo/az;
      // 060: goto 067
      // 063: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 066: athrow
      // 067: aload 4
      // 069: ifnull 079
      // 06c: ifnull 07c
      // 06f: goto 076
      // 072: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 075: athrow
      // 076: getstatic sixtwo/ay.eGcjO Ljava/lang/Object;
      // 079: goto 07e
      // 07c: aload 6
      // 07e: invokestatic sixtwo/ay.so (Ljava/lang/Object;)V
      // 081: bipush 0
      // 082: istore 7
      // 084: aload 0
      // 085: invokevirtual sixtwo/g.bp ()Ljava/util/List;
      // 088: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 08d: astore 8
      // 08f: aload 8
      // 091: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 096: ifeq 107
      // 099: aload 8
      // 09b: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 0a0: checkcast sixtwo/az
      // 0a3: astore 9
      // 0a5: aload 9
      // 0a7: invokevirtual sixtwo/az.sN ()I
      // 0aa: istore 10
      // 0ac: aload 4
      // 0ae: ifnull 10a
      // 0b1: aload 4
      // 0b3: ifnull 0fd
      // 0b6: goto 0bd
      // 0b9: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0bc: athrow
      // 0bd: iload 10
      // 0bf: ifle 0f7
      // 0c2: goto 0c9
      // 0c5: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c8: athrow
      // 0c9: iload 10
      // 0cb: aload 4
      // 0cd: ifnull 0f5
      // 0d0: goto 0d7
      // 0d3: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d6: athrow
      // 0d7: iload 7
      // 0d9: if_icmpeq 0f7
      // 0dc: goto 0e3
      // 0df: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e2: athrow
      // 0e3: aload 0
      // 0e4: getfield sixtwo/g.jywVM Ljava/lang/Runnable;
      // 0e7: invokeinterface java/lang/Runnable.run ()V 1
      // 0ec: iload 10
      // 0ee: goto 0f5
      // 0f1: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f4: athrow
      // 0f5: istore 7
      // 0f7: aload 9
      // 0f9: aload 1
      // 0fa: invokevirtual sixtwo/az.su (Lsixtwo/lC;)V
      // 0fd: aload 4
      // 0ff: ifnonnull 08f
      // 102: ldc "OrCL5"
      // 104: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 107: invokestatic sixtwo/ay.sp ()V
      // 10a: goto 115
      // 10d: astore 11
      // 10f: invokestatic sixtwo/ay.sp ()V
      // 112: aload 11
      // 114: athrow
      // 115: aload 5
      // 117: putstatic sixtwo/g.HbRlZ Lsixtwo/g;
      // 11a: goto 127
      // 11d: astore 12
      // 11f: aload 5
      // 121: putstatic sixtwo/g.HbRlZ Lsixtwo/g;
      // 124: aload 12
      // 126: athrow
      // 127: return
   }

   public boolean aQ(double var1, double var3, double var5) {
      return this.bc(f.am(var1, var3, var5));
   }

   public boolean aT(char var1) {
      return this.bd(h.bD(var1));
   }

   public boolean aP(double var1, double var3, mA var5, double var6, double var8) {
      return this.bc(f.al(var1, var3, var5, var6, var8));
   }

   public boolean aS(int var1, int var2, int var3) {
      return this.bd(h.bC(var1, var2, var3));
   }

   public int aH() {
      long var1 = uaqcq ^ 50500147100251L;
      int[] var10000 = bA();
      int var4 = 0;
      int[] var3 = var10000;
      Iterator var5 = this.vSqxH.tv().cmj().iterator();

      while (true) {
         if (var5.hasNext()) {
            az var6 = (az)var5.next();
            var7 = Math.max(var4, var6.sN());
            if (var3 == null) {
               break;
            }

            var4 = var7;
            if (var3 != null) {
               continue;
            }
         }

         var7 = var4;
         break;
      }

      return var7;
   }

   public <T extends az> T aG(T param1, int param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/g.uaqcq J
      // 03: ldc2_w 21147594355807
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/g.bA ()[I
      // 0b: astore 5
      // 0d: aload 1
      // 0e: aload 5
      // 10: ifnull 33
      // 13: ifnonnull 23
      // 16: goto 1d
      // 19: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aconst_null
      // 1e: areturn
      // 1f: invokestatic sixtwo/g.bB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: aload 1
      // 24: iload 2
      // 25: invokevirtual sixtwo/az.sO (I)Lsixtwo/az;
      // 28: pop
      // 29: aload 0
      // 2a: getfield sixtwo/g.vSqxH Lsixtwo/az;
      // 2d: aload 1
      // 2e: invokevirtual sixtwo/az.sI (Lsixtwo/az;)Lsixtwo/az;
      // 31: pop
      // 32: aload 1
      // 33: areturn
   }

   public int aI() {
      return this.aH() + 1;
   }

   public void aJ(az var1) {
      this.vSqxH.sJ(var1);
   }

   public void aK() {
      this.vSqxH.sK();
      this.HrPEm = null;
      this.XTXbB = null;
   }

   public az aM(double var1, double var3) {
      return this.vSqxH.sF(var1, var3);
   }

   public boolean aR(double var1, double var3) {
      return this.bc(f.an(var1, var3));
   }
}
