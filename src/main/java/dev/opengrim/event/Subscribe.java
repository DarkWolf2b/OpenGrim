package dev.opengrim.event;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

/**
 * Marks a method as an event listener. The method must take exactly one
 * argument (the event type). Higher priority runs first; lower (including
 * negative) runs later. Mirrors the original client's {@code @hG(priority=mw)}
 * handler annotation.
 */
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.METHOD)
public @interface Subscribe {
	int priority() default 0;
}
