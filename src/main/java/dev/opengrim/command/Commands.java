package dev.opengrim.command;

import java.util.List;

import com.mojang.brigadier.arguments.DoubleArgumentType;
import com.mojang.brigadier.arguments.IntegerArgumentType;
import com.mojang.brigadier.arguments.StringArgumentType;
import com.mojang.brigadier.builder.LiteralArgumentBuilder;

import dev.opengrim.config.ConfigManager;
import dev.opengrim.gui.GuiManager;
import dev.opengrim.gui.EmoteWheelScreen;
import dev.opengrim.gui.WheelEntry;
import dev.opengrim.keybind.KeybindManager;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.modules.utility.FakePlayer;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.Setting;
import net.fabricmc.fabric.api.client.command.v2.ClientCommandManager;
import net.fabricmc.fabric.api.client.command.v2.ClientCommandRegistrationCallback;
import net.fabricmc.fabric.api.client.command.v2.FabricClientCommandSource;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gui.screen.ingame.InventoryScreen;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.registry.Registries;
import net.minecraft.text.Text;
import net.minecraft.util.Hand;
import net.minecraft.util.Identifier;

/**
 * Port of the recovered client command layer ({@code sixtwo.hZ}, {@code hL},
 * {@code hN}–{@code hV}).
 *
 * <p>Names and parameters were extracted by reflecting on the original
 * command factories under the Wine payload harness:
 * <ul>
 *   <li>{@code /vclip <distance>}</li>
 *   <li>{@code /hclip <distance>}</li>
 *   <li>{@code /ui}</li>
 *   <li>{@code /reset}</li>
 *   <li>{@code /marketui}</li>
 *   <li>{@code /inventory|inv|invsee <player>}</li>
 *   <li>{@code /fakeplayer|fp spawn [name] | remove | setslot <slot> <item> [count] | use <mode> [hand] | status}</li>
 *   <li>{@code /emote|e <id>}</li>
 * </ul>
 *
 * <p>The native command bodies are VM-resident. The implementations below use
 * the natural client action for each recovered name/parameter; the gaps are
 * recorded in PARITY.md Wave 14. {@code /marketui} has no counterpart yet
 * because the port has no market editor surface.
 */
public final class Commands {
	private Commands() {
	}

	public static void init() {
		ClientCommandRegistrationCallback.EVENT.register((dispatcher, registryAccess) -> {
			dispatcher.register(vclip());
			dispatcher.register(hclip());
			dispatcher.register(ClientCommandManager.literal("ui").executes(context -> {
				GuiManager.open();
				return 1;
			}));
			dispatcher.register(ClientCommandManager.literal("reset").executes(context -> {
				resetAll();
				context.getSource().sendFeedback(Text.literal("OpenGrim: reset modules and settings."));
				return 1;
			}));
			dispatcher.register(ClientCommandManager.literal("marketui").executes(context -> {
				context.getSource().sendError(Text.literal("OpenGrim: the market UI is not ported yet."));
				return 0;
			}));
			for (String alias : new String[] {"inventory", "inv", "invsee"}) {
				dispatcher.register(inventory(alias));
			}
			for (String alias : new String[] {"fakeplayer", "fp"}) {
				dispatcher.register(fakeplayer(alias));
			}
			for (String alias : new String[] {"emote", "e"}) {
				dispatcher.register(ClientCommandManager.literal(alias)
						.then(ClientCommandManager.argument("id", StringArgumentType.word())
								.executes(context -> {
									String id = StringArgumentType.getString(context, "id");
									Module module = ModuleManager.get().byId(id);
									if (module == null) {
										for (Module candidate : ModuleManager.get().getModules()) {
											if (candidate.getName().equalsIgnoreCase(id)) {
												module = candidate;
												break;
											}
										}
									}
									if (module == null) {
										context.getSource().sendError(Text.literal("OpenGrim: unknown emote."));
										return 0;
									}
									Module target = module;
									EmoteWheelScreen.openWith(List.of(WheelEntry.actionable(
											target.getId(), target.getName(), target::toggle)));
									return 1;
								})));
			}
		});
	}

	private static LiteralArgumentBuilder<FabricClientCommandSource> vclip() {
		return ClientCommandManager.literal("vclip")
				.then(ClientCommandManager.argument("distance", DoubleArgumentType.doubleArg())
						.executes(context -> {
							ClientPlayerEntity player = context.getSource().getPlayer();
							double distance = DoubleArgumentType.getDouble(context, "distance");
							player.setPosition(player.getX(), player.getY() + distance, player.getZ());
							return 1;
						}));
	}

	private static LiteralArgumentBuilder<FabricClientCommandSource> hclip() {
		return ClientCommandManager.literal("hclip")
				.then(ClientCommandManager.argument("distance", DoubleArgumentType.doubleArg())
						.executes(context -> {
							ClientPlayerEntity player = context.getSource().getPlayer();
							double distance = DoubleArgumentType.getDouble(context, "distance");
							double radians = Math.toRadians(player.getYaw());
							double dx = -Math.sin(radians) * distance;
							double dz = Math.cos(radians) * distance;
							player.setPosition(player.getX() + dx, player.getY(), player.getZ() + dz);
							return 1;
						}));
	}

	private static LiteralArgumentBuilder<FabricClientCommandSource> inventory(String name) {
		return ClientCommandManager.literal(name)
				.then(ClientCommandManager.argument("player", StringArgumentType.word())
						.executes(Commands::inventory));
	}

	private static LiteralArgumentBuilder<FabricClientCommandSource> fakeplayer(String name) {
		return ClientCommandManager.literal(name)
				.then(ClientCommandManager.literal("spawn")
						.executes(context -> spawnFake(context.getSource(), ""))
						.then(ClientCommandManager.argument("name", StringArgumentType.word())
								.executes(context -> spawnFake(context.getSource(),
										StringArgumentType.getString(context, "name")))))
				.then(ClientCommandManager.literal("remove").executes(context -> {
					FakePlayer fake = fakePlayer();
					if (fake != null) {
						fake.setEnabled(false);
					}
					return 1;
				}))
				.then(ClientCommandManager.literal("setslot")
						.then(ClientCommandManager.argument("slot", IntegerArgumentType.integer(0, 45))
								.then(ClientCommandManager.argument("item", StringArgumentType.word())
										.executes(context -> setFakeSlot(context.getSource(), context, 1))
										.then(ClientCommandManager.argument("count", IntegerArgumentType.integer(1, 64))
												.executes(context -> setFakeSlot(context.getSource(), context,
														IntegerArgumentType.getInteger(context, "count")))))))
				.then(ClientCommandManager.literal("use")
						.then(ClientCommandManager.argument("mode", StringArgumentType.word())
								.executes(context -> useFake(context.getSource(), context, "main"))
								.then(ClientCommandManager.argument("hand", StringArgumentType.word())
										.executes(context -> useFake(context.getSource(), context,
												StringArgumentType.getString(context, "hand"))))))
				.then(ClientCommandManager.literal("status").executes(context -> {
					FakePlayer fake = fakePlayer();
					context.getSource().sendFeedback(Text.literal(fake != null && fake.exists()
							? "OpenGrim: fake player exists (" + fake.getUseMode() + ")."
							: "OpenGrim: no fake player."));
					return 1;
				}));
	}

	private static int spawnFake(FabricClientCommandSource source, String name) {
		FakePlayer fake = fakePlayer();
		if (fake == null) {
			return 0;
		}
		if (!name.isEmpty()) {
			fake.setName(name);
		}
		fake.setEnabled(true);
		source.sendFeedback(Text.literal("OpenGrim: fake player spawned."));
		return 1;
	}

	private static int setFakeSlot(FabricClientCommandSource source, com.mojang.brigadier.context.CommandContext<FabricClientCommandSource> context,
			int count) {
		FakePlayer fake = fakePlayer();
		if (fake == null || !fake.exists()) {
			source.sendError(Text.literal("OpenGrim: no fake player."));
			return 0;
		}
		Identifier id = Identifier.tryParse(StringArgumentType.getString(context, "item"));
		Item item = id == null ? null : Registries.ITEM.get(id);
		if (item == null) {
			source.sendError(Text.literal("OpenGrim: unknown item."));
			return 0;
		}
		int slot = IntegerArgumentType.getInteger(context, "slot");
		fake.setSlot(slot, new ItemStack(item, count));
		return 1;
	}

	private static int useFake(FabricClientCommandSource source,
			com.mojang.brigadier.context.CommandContext<FabricClientCommandSource> context, String handName) {
		FakePlayer fake = fakePlayer();
		if (fake == null || !fake.exists()) {
			source.sendError(Text.literal("OpenGrim: no fake player."));
			return 0;
		}
		String modeName = StringArgumentType.getString(context, "mode").toUpperCase();
		FakePlayer.UseMode mode;
		try {
			mode = FakePlayer.UseMode.valueOf(modeName);
		} catch (IllegalArgumentException e) {
			source.sendError(Text.literal("OpenGrim: mode must be idle, shield or custom."));
			return 0;
		}
		fake.setUseMode(mode, "off".equalsIgnoreCase(handName) ? Hand.OFF_HAND : Hand.MAIN_HAND);
		return 1;
	}

	private static int inventory(com.mojang.brigadier.context.CommandContext<FabricClientCommandSource> context) {
		String name = StringArgumentType.getString(context, "player");
		MinecraftClient client = context.getSource().getClient();
		if (client.world == null) {
			return 0;
		}
		for (net.minecraft.client.network.AbstractClientPlayerEntity candidate : client.world.getPlayers()) {
			if (candidate.getGameProfile().name().equalsIgnoreCase(name)) {
				client.setScreen(new InventoryScreen(candidate));
				return 1;
			}
		}
		context.getSource().sendError(Text.literal("OpenGrim: player not found."));
		return 0;
	}

	private static FakePlayer fakePlayer() {
		Module module = ModuleManager.get().byId("fake_player");
		return module instanceof FakePlayer fake ? fake : null;
	}

	private static void resetAll() {
		for (Module module : ModuleManager.get().getModules()) {
			module.setEnabled(false);
			KeybindManager.setBind(module, -999);
			module.setShownInArrayList(true);
			module.setShowKeybindInArrayList(false);
			resetSettings(module.getSettings());
		}
		new ConfigManager().save();
	}

	private static void resetSettings(java.util.List<Setting<?>> settings) {
		for (Setting<?> setting : settings) {
			if (setting instanceof GroupSetting group) {
				resetSettings(group.getChildren());
			} else {
				setting.reset();
			}
		}
	}
}
