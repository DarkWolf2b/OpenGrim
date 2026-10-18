/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import sixtwo.mA;

public interface cs {
    default public boolean onMouseDragged(double d2, double d3, mA mA2, double d4, double d5) {
        return false;
    }

    default public boolean onCharTyped(char c2) {
        return false;
    }

    default public boolean onMouseClicked(double d2, double d3, mA mA2) {
        return false;
    }

    default public boolean onKeyPressed(int n2, int n3, int n4) {
        return false;
    }

    default public boolean onMouseReleased(double d2, double d3, mA mA2) {
        return false;
    }

    default public boolean onMouseScrolled(double d2, double d3, double d4) {
        return false;
    }
}

