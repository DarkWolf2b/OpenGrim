/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.input.Input
 *  net.minecraft.client.network.ClientPlayerEntity
 *  net.minecraft.util.PlayerInput
 *  net.minecraft.util.math.Vec2f
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.client.input.Input;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.util.PlayerInput;
import net.minecraft.util.math.Vec2f;
import sixtwo.gb;
import sixtwo.mv;

class mk$uK
extends Input {
    final mv DYvln;
    final ClientPlayerEntity NpYIL;
    private static final long qbKPs = gb.aYR(4156954222303847609L, 2050517343560288004L, MethodHandles.lookup().lookupClass()).a(99568747978715L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    mk$uK(mv mv2, ClientPlayerEntity clientPlayerEntity) {
        this.DYvln = mv2;
        this.NpYIL = clientPlayerEntity;
    }

    public Vec2f getMovementInput() {
        return this.DYvln.cmC();
    }

    public void tick() {
        boolean bl2;
        PlayerInput playerInput;
        PlayerInput playerInput2;
        long l2 = qbKPs ^ 0x5082C16453C4L;
        try {
            PlayerInput playerInput3;
            mk$uK mk$uK = this;
            playerInput2 = playerInput3;
            playerInput = playerInput3;
            bl2 = this.DYvln.vGEel > 0.0f;
        }
        catch (MatchException matchException) {
            throw mk$uK.dvv(matchException);
        }
        playerInput2(bl2, this.DYvln.vGEel < 0.0f, this.DYvln.mgoqe > 0.0f, this.DYvln.mgoqe < 0.0f, this.DYvln.GgKkk, this.DYvln.SuYKY, this.NpYIL.isSprinting());
        mk$uK.playerInput = playerInput;
        this.movementVector = this.DYvln.cmC();
    }

    private static MatchException dvv(MatchException matchException) {
        return matchException;
    }
}

