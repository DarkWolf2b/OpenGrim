package dev.opengrim.modules.utility;

import java.util.Set;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.util.FriendsManager;
import net.minecraft.client.MinecraftClient;
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.text.Text;
import net.minecraft.util.hit.EntityHitResult;
import net.minecraft.util.hit.HitResult;
import org.lwjgl.glfw.GLFW;

/**
 * Middle Click Friend (registry sixtwo.fU, module id 107): "Adds friend when you click scroll on him".
 *
 * <p>Sources:
 * <ul>
 * <li>analysis/decompiled/casesafe/payload-named-cfr/sixtwo/fU_.java:18-51
 *     (class fU; constructor 27-30 with id 107, category {@code gh.KfAlY};
 *     listener aXP(gy) at 43-44). The un-prefixed payload trees
 *     (analysis/decompiled/sixtwo/fU.java variants) declare sixtwo.fu
 *     (Criticals) on this checkout — case-collision twins</li>
 * <li>analysis/specs/casesafe/handlers/fU_.md (the plain
 * handlers/fU.md file is the fu (Criticals) case-twin)</li>
 * </ul>
 *
 * <p>Settings:
 * 0 settings declared in decompile (fU.java:27-30).
 *
 * <p>State fields and methods:
 * <ul>
 * <li>KrrAc / qvWvL: static friend list string storage (fU.java:21-22) —
 * mapped onto our shared {@link FriendsManager} (the friend store consumed by
 * Friend Indicator (dm) and the other friend-aware modules; see spec
 * "Consumers")</li>
 * <li>aXP(gy): middle-click pick listener inspecting target player identity (fU.java:44)</li>
 * <li>qu / qt: notification message builder displaying status (fU.md lines 21-26, 44-48)</li>
 * </ul>
 *
 * <p>trace 2026-10-17 (registry id 107): {@code aXP} did not trigger in the 4&nbsp;s
 * window (zero method entries — the pick event {@code gy} never fired). Capture condition
 * for a follow-up: middle-click while the crosshair is on a player (the pick event fires
 * on the middle-click action, in-world, no GUI open) — then a second middle-click on the
 * same player to observe the remove branch.
 */
public class MiddleClickFriend extends Module {
	private boolean middleWasPressed;

	public MiddleClickFriend() {
		super("middle_click_friend", "Middle Click Friend", "Adds friend when you click scroll on him",
				ModuleCategory.UTILITY);
		setBind(-999);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.currentScreen != null) {
			middleWasPressed = false;
			return;
		}

		long handle = client.getWindow().getHandle();
		boolean pressed = (handle != 0 && GLFW.glfwGetMouseButton(handle, GLFW.GLFW_MOUSE_BUTTON_MIDDLE) == GLFW.GLFW_PRESS)
				|| client.mouse.wasMiddleButtonClicked();
		boolean edge = pressed && !middleWasPressed;
		middleWasPressed = pressed;

		if (!edge) {
			return;
		}

		HitResult target = client.crosshairTarget;
		if (!(target instanceof EntityHitResult entityHit)) {
			return;
		}

		Entity entity = entityHit.getEntity();
		if (!(entity instanceof PlayerEntity player)) {
			return;
		}

		String name = player.getGameProfile().name();
		if (FriendsManager.isFriend(name)) {
			FriendsManager.remove(name);
			client.inGameHud.getChatHud().addMessage(Text.literal("[Middle Click Friend] Removed friend: " + name));
		} else {
			FriendsManager.add(name);
			client.inGameHud.getChatHud().addMessage(Text.literal("[Middle Click Friend] Added friend: " + name));
		}
	}

	/**
	 * The shared friend list this module writes (the original's fU statics are
	 * the store read by dm Friend Indicator and the other friend-aware
	 * modules) — analysis/specs/casesafe/handlers/fU_.md "Consumers".
	 */
	public static Set<String> friends() {
		return FriendsManager.all();
	}

	public static boolean isFriend(String name) {
		return FriendsManager.isFriend(name);
	}
}