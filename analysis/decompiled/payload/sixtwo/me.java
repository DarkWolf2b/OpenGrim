package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.List;
import net.minecraft.class_2338;
import net.minecraft.class_243;
import net.minecraft.class_3486;
import net.minecraft.class_3959;
import net.minecraft.class_3965;
import net.minecraft.class_239.class_240;

public final class me {
   private static final long eLaCs = gb.aYR(-4707476126198934159L, 4648386002153854882L, MethodHandles.lookup().lookupClass()).a(156915905447029L);

   public static class_243 cka(mh var0) {
      return cjZ(var0).finalPosition();
   }

   private static MatchException ckc(MatchException var0) {
      return var0;
   }

   public static List<class_243> ckb(mh var0) {
      return cjZ(var0).positions();
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   public static mg cjZ(mh var0) {
      long var1 = eLaCs ^ 45491461718018L;
      int[] var10000 = mk.cle();
      class_243 var4 = var0.ckj();
      class_243 var5 = var0.ckk();
      ArrayList var6 = new ArrayList();
      int[] var3 = var10000;
      var6.add(var4);
      class_3965 var7 = null;
      mf var8 = mf.ZkAFI;

      for (int var9 = 0; var9 < var0.ckl(); var9++) {
         class_243 var10 = var4;

         label219: {
            class_3965 var11;
            label220: {
               label209: {
                  label221: {
                     try {
                        var31 = var0.ckr();
                        if (var3 != null) {
                           break label209;
                        }

                        if (!var31) {
                           break label221;
                        }
                     } catch (MatchException var27) {
                        throw ckc(var27);
                     }

                     var4 = var4.method_1019(var5);
                     var11 = var0.ckh().method_17742(new class_3959(var10, var4, var0.cks(), var0.ckt(), var0.cki()));

                     label201: {
                        try {
                           if (var3 != null) {
                              break label201;
                           }

                           if (var11.method_17783() == class_240.field_1332) {
                              break label220;
                           }
                        } catch (MatchException var26) {
                           throw ckc(var26);
                        }

                        var6.add(var4);
                     }

                     label195: {
                        label222: {
                           try {
                              double var39;
                              var33 = (var39 = var4.field_1351 - var0.ckm()) == 0.0 ? 0 : (var39 < 0.0 ? -1 : 1);
                              if (var3 != null) {
                                 break label195;
                              }

                              if (var33 > 0) {
                                 break label222;
                              }
                           } catch (MatchException var25) {
                              throw ckc(var25);
                           }

                           var8 = mf.RlLKW;

                           try {
                              if (var3 == null) {
                                 break;
                              }
                           } catch (MatchException var17) {
                              throw ckc(var17);
                           }
                        }

                        try {
                           var33 = var0.ckh().method_8320(class_2338.method_49638(var4)).method_26227().method_15767(class_3486.field_15517);
                        } catch (MatchException var14) {
                           throw ckc(var14);
                        }
                     }

                     int var12 = var33;

                     double var10001;
                     label185: {
                        try {
                           var34 = var5;
                           if (var12 != 0) {
                              var10001 = var0.cko();
                              break label185;
                           }
                        } catch (MatchException var24) {
                           throw ckc(var24);
                        }

                        var10001 = var0.ckn();
                     }

                     label178: {
                        class_243 var35 = var34.method_1021(var10001);
                        if (var3 == null) {
                           var5 = var35;

                           try {
                              if (var0.ckq()) {
                                 break label178;
                              }

                              var35 = var5.method_1031(0.0, -var0.ckp(), 0.0);
                           } catch (MatchException var23) {
                              throw ckc(var23);
                           }
                        }

                        var5 = var35;
                     }

                     try {
                        if (var3 == null) {
                           break label219;
                        }
                     } catch (MatchException var19) {
                        throw ckc(var19);
                     }
                  }

                  try {
                     var31 = var0.ckq();
                  } catch (MatchException var13) {
                     throw ckc(var13);
                  }
               }

               label166: {
                  label165: {
                     try {
                        if (var3 != null) {
                           break label166;
                        }

                        if (var31) {
                           break label165;
                        }
                     } catch (MatchException var22) {
                        throw ckc(var22);
                     }

                     var5 = var5.method_1031(0.0, -var0.ckp(), 0.0);
                  }

                  var31 = var0.ckh().method_8320(class_2338.method_49638(var4)).method_26227().method_15767(class_3486.field_15517);
               }

               boolean var28 = var31;

               double var38;
               label156: {
                  try {
                     var36 = var5;
                     if (var28) {
                        var38 = var0.cko();
                        break label156;
                     }
                  } catch (MatchException var21) {
                     throw ckc(var21);
                  }

                  var38 = var0.ckn();
               }

               var5 = var36.method_1021(var38);
               var4 = var4.method_1019(var5);
               class_3965 var30 = var0.ckh().method_17742(new class_3959(var10, var4, var0.cks(), var0.ckt(), var0.cki()));

               label223: {
                  label147: {
                     try {
                        if (var3 != null) {
                           break label147;
                        }

                        if (var30.method_17783() == class_240.field_1332) {
                           break label223;
                        }
                     } catch (MatchException var20) {
                        throw ckc(var20);
                     }

                     var6.add(var4);
                  }

                  label134: {
                     try {
                        if (var3 != null) {
                           break label134;
                        }

                        if (!(var4.field_1351 <= var0.ckm())) {
                           break label219;
                        }
                     } catch (MatchException var18) {
                        throw ckc(var18);
                     }

                     var8 = mf.RlLKW;
                  }

                  if (var3 == null) {
                     break;
                  }
                  break label219;
               }

               var7 = var30;

               label108: {
                  label107: {
                     try {
                        boolean var37 = var0.cku();
                        if (var3 != null) {
                           break label108;
                        }

                        if (!var37) {
                           break label107;
                        }
                     } catch (MatchException var15) {
                        throw ckc(var15);
                     }

                     var4 = var30.method_17784();
                  }

                  var6.add(var4);
               }

               var8 = mf.juSGK;
               break;
            }

            var7 = var11;

            label118: {
               label117: {
                  try {
                     boolean var32 = var0.cku();
                     if (var3 != null) {
                        break label118;
                     }

                     if (!var32) {
                        break label117;
                     }
                  } catch (MatchException var16) {
                     throw ckc(var16);
                  }

                  var4 = var11.method_17784();
               }

               var6.add(var4);
            }

            var8 = mf.juSGK;
            break;
         }

         mc var29 = new mc(
            var0.ckh(),
            var0.cki(),
            var9,
            var10,
            var4,
            var5,
            var0.ckh().method_8320(class_2338.method_49638(var4)).method_26227().method_15767(class_3486.field_15517)
         );
         var5 = var0.ckv().modify(var29, var5);
      }

      return new mg(var6, var4, var7, var8);
   }
}
