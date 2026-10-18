/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonElement
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.EntityType
 */
package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.MethodHandles;
import java.util.Arrays;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Set;
import java.util.stream.Collectors;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EntityType;
import sixtwo.cB;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jg$tJ;
import sixtwo.mr;

public class cF
extends cB {
    private Set<EntityType<? extends Entity>> AcnID = new LinkedHashSet<EntityType<? extends Entity>>();
    private Set<EntityType<? extends Entity>> sulLA = new LinkedHashSet<EntityType<? extends Entity>>();
    private static final long MRNxb = gb.aYR(239314320164638091L, -21656609510465895L, MethodHandles.lookup().lookupClass()).a(162609858617285L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cF(mr mr2) {
        super(mr2);
        this.sulLA.add((EntityType<? extends Entity>)EntityType.PLAYER);
    }

    public cF(iS iS2, mr mr2) {
        this(mr2);
        this.Vg(iS2);
    }

    /*
     * Exception decompiling
     */
    public cF VS(jg$tJ var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 1[SWITCH]
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.processEndingBlocks(Op04StructuredStatement.java:435)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.buildNestedBlocks(Op04StructuredStatement.java:484)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op03SimpleStatement.createInitialStructuredBlock(Op03SimpleStatement.java:736)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisInner(CodeAnalyser.java:850)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisOrWrapFail(CodeAnalyser.java:278)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysis(CodeAnalyser.java:201)
         *     at org.benf.cfr.reader.entities.attributes.AttributeCode.analyse(AttributeCode.java:94)
         *     at org.benf.cfr.reader.entities.Method.analyse(Method.java:531)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseMid(ClassFile.java:1055)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseTop(ClassFile.java:942)
         *     at org.benf.cfr.reader.Driver.doJarVersionTypes(Driver.java:257)
         *     at org.benf.cfr.reader.Driver.doJar(Driver.java:139)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:76)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    public void VU(EntityType<? extends Entity> entityType) {
        block5: {
            cF cF2;
            block4: {
                long l2 = MRNxb ^ 0x91ECBAA929EL;
                boolean bl2 = cB.Vt();
                try {
                    try {
                        cF2 = this;
                        if (!bl2) break block4;
                        if (!cF2.sulLA.add(entityType)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cF.Wd(matchException);
                    }
                    cF2 = this;
                }
                catch (MatchException matchException) {
                    throw cF.Wd(matchException);
                }
            }
            cF2.Vk();
        }
    }

    public Set<EntityType<? extends Entity>> VZ() {
        return this.sulLA;
    }

    public cF Wb(Set<EntityType<? extends Entity>> set) {
        this.sulLA = set;
        return this;
    }

    public Set<EntityType<? extends Entity>> VY() {
        return this.AcnID;
    }

    /*
     * Unable to fully structure code
     */
    @Override
    public void SS(JsonElement var1_1) {
        block14: {
            block12: {
                block15: {
                    var2_2 = cF.MRNxb ^ 3683354368281L;
                    var5_3 = new LinkedHashSet<EntityType<? extends Entity>>();
                    var6_4 = var1_1.getAsJsonArray().iterator();
                    var4_5 = cB.Vt();
                    block8: while (true) {
                        v0 = var6_4.hasNext();
                        block9: while (v0) {
                            var7_6 = (JsonElement)var6_4.next();
                            var8_7 = var7_6.getAsString();
                            v1 = this.AcnID;
                            if (!var4_5) break block12;
                            for (EntityType<? extends Entity> var10_9 : v1) {
                                block13: {
                                    v0 = var10_9.getName().getString().equals(var8_7);
                                    if (!var4_5) continue block9;
                                    try {
                                        try {
                                            if (!var4_5) break block13;
                                            if (v0) {
                                            }
                                            ** GOTO lbl31
                                        }
                                        catch (MatchException v2) {
                                            throw cF.Wd(v2);
                                        }
                                        var5_3.add(var10_9);
                                    }
                                    catch (MatchException v3) {
                                        throw cF.Wd(v3);
                                    }
                                }
                                try {
                                    if (var4_5) continue block8;
lbl31:
                                    // 2 sources

                                    if (var4_5) continue;
                                    continue block8;
                                }
                                catch (MatchException v4) {
                                    throw cF.Wd(v4);
                                }
                            }
                            if (var4_5) continue block8;
                        }
                        break;
                    }
                    try {
                        v5 = var5_3.equals(this.sulLA);
                        if (!var4_5) break block14;
                        if (!v5) break block15;
                    }
                    catch (MatchException v6) {
                        throw cF.Wd(v6);
                    }
                    return;
                }
                this.sulLA.clear();
                v1 = this.sulLA;
            }
            v5 = v1.addAll(var5_3);
        }
        this.Vk();
    }

    @SafeVarargs
    public final cF VT(EntityType<? extends Entity> ... entityTypeArray) {
        this.AcnID.addAll(Set.of(entityTypeArray));
        return this;
    }

    public void VV(EntityType<? extends Entity> entityType) {
        block5: {
            cF cF2;
            block4: {
                long l2 = MRNxb ^ 0x47DE1DA3E3L;
                boolean bl2 = cB.Vu();
                try {
                    try {
                        cF2 = this;
                        if (bl2) break block4;
                        if (!cF2.sulLA.remove(entityType)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cF.Wd(matchException);
                    }
                    cF2 = this;
                }
                catch (MatchException matchException) {
                    throw cF.Wd(matchException);
                }
            }
            cF2.Vk();
        }
    }

    public boolean VW(EntityType<? extends Entity> entityType) {
        return this.sulLA.contains(entityType);
    }

    private static MatchException Wd(MatchException matchException) {
        return matchException;
    }

    public cF Wa(Set<EntityType<? extends Entity>> set) {
        this.AcnID = set;
        return this;
    }

    @Override
    public void SR(Map<String, Object> map) {
        Set set = this.sulLA.stream().map(entityType -> entityType.getName().getString()).collect(Collectors.toSet());
        map.put(Arrays.toString(this.NwlSF), set);
    }

    public boolean VX(Entity entity) {
        boolean bl2;
        block8: {
            block9: {
                boolean bl3;
                block6: {
                    block7: {
                        long l2 = MRNxb ^ 0x76684FEE9B47L;
                        boolean bl4 = cB.Vt();
                        try {
                            try {
                                try {
                                    bl3 = this.sulLA.isEmpty();
                                    if (!bl4) break block6;
                                    if (bl3) break block7;
                                }
                                catch (MatchException matchException) {
                                    throw cF.Wd(matchException);
                                }
                                bl2 = this.AcnID.contains(entity.getType());
                                if (!bl4) break block8;
                            }
                            catch (MatchException matchException) {
                                throw cF.Wd(matchException);
                            }
                            if (bl2) break block9;
                        }
                        catch (MatchException matchException) {
                            throw cF.Wd(matchException);
                        }
                    }
                    bl3 = false;
                }
                return bl3;
            }
            bl2 = this.sulLA.contains(entity.getType());
        }
        return bl2;
    }
}

