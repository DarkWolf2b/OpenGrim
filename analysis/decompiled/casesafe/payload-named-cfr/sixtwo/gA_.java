/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.input.KeyInput
 *  net.minecraft.client.input.MouseInput
 */
package sixtwo;

import net.minecraft.client.input.KeyInput;
import net.minecraft.client.input.MouseInput;
import sixtwo.hH;

public class gA
extends hH {
    private MouseInput cfYNO;
    private KeyInput mcpAc;
    private int eZWeT;
    private int BZQxa;
    private int nctbO;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public gA(MouseInput mouseInput, KeyInput keyInput, int n2, int n3, int n4) {
        this.cfYNO = mouseInput;
        this.mcpAc = keyInput;
        this.eZWeT = n2;
        this.BZQxa = n3;
        this.nctbO = n4;
    }

    public MouseInput bbN() {
        return this.cfYNO;
    }

    public KeyInput bbO() {
        return this.mcpAc;
    }

    public int bbR() {
        return this.nctbO;
    }

    public int bbQ() {
        return this.BZQxa;
    }

    public int bbP() {
        return this.eZWeT;
    }
}

