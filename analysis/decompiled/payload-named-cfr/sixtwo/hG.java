/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import sixtwo.mw;

@Target(value={ElementType.METHOD})
@Retention(value=RetentionPolicy.RUNTIME)
public @interface hG {
    public mw priority() default mw.NORMAL;
}

