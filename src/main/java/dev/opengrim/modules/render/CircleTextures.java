package dev.opengrim.modules.render;

import java.io.InputStream;
import java.net.URI;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import java.util.function.Consumer;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.texture.NativeImage;
import net.minecraft.client.texture.NativeImageBackedTexture;
import net.minecraft.util.Identifier;

/**
 * Texture plumbing shared by Circle ESP (sixtwo.dw) and Jump Circle (sixtwo.db).
 *
 * <p>Original: {@code ob.cBv(String)} (built-in texture fetch, native —
 * analysis/decompiled/casesafe/payload-named/sixtwo/ob.java:53) and
 * {@code oe.cCd(String)} (async URL download — oe.java:72-75), consumed by
 * dw.java:614/732 and db.java:624/631. The recovered built-in asset names are
 * {@code "circle"} (dw default, db "Default") and {@code "circle_glow"} (db
 * "Glowing") — decrypted from the class DES pool (dw class key 27796957615364,
 * db class key 76154492359407; call sites dw.java:614/732 and db.java:624/631).
 *
 * <p>Framework ports (labeled):
 * <ul>
 * <li>The original's sprite pixels live inside the native payload and are not
 * recoverable, so this rebuild generates equivalent ring sprites procedurally
 * under {@code opengrim:circle} / {@code opengrim:circle_glow}
 * (high-probability guess — pixel content unrecovered).</li>
 * <li>{@code jd.bAm(String)} (URL sanity check, native) is approximated by a
 * non-blank {@code http(s)} prefix test (high-probability guess).</li>
 * <li>{@code oe.cCd} returns its texture on the completing thread; this port
 * registers on the client thread before invoking the callback.</li>
 * </ul>
 */
final class CircleTextures {
	private static final Set<Identifier> REGISTERED = ConcurrentHashMap.newKeySet();

	private CircleTextures() {
	}

	/** {@code ob.cBv("circle")} / {@code ob.cBv("circle_glow")}. */
	static Identifier builtin(String name) {
		Identifier id = Identifier.of("opengrim", name);
		if (REGISTERED.contains(id)) {
			return id;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client == null) {
			return id;
		}
		int size = 64;
		NativeImage image = new NativeImage(size, size, false);
		boolean glow = name.endsWith("glow");
		for (int x = 0; x < size; x++) {
			for (int y = 0; y < size; y++) {
				double dx = (x + 0.5) / size * 2.0 - 1.0;
				double dy = (y + 0.5) / size * 2.0 - 1.0;
				double d = Math.sqrt(dx * dx + dy * dy);
				double alpha;
				if (glow) {
					alpha = Math.max(0.0, 1.0 - d);
					alpha *= alpha;
				} else {
					alpha = Math.max(0.0, 1.0 - Math.abs(d - 0.82) / 0.18);
				}
				image.setColor(x, y, ((int) (alpha * 255.0)) << 24 | 0xFFFFFF);
			}
		}
		client.getTextureManager().registerTexture(id,
				new NativeImageBackedTexture(() -> "opengrim " + name, image));
		REGISTERED.add(id);
		return id;
	}

	/** {@code jd.bAm(String)} approximation: a usable http(s) URL. */
	static boolean validUrl(String url) {
		if (url == null || url.isBlank()) {
			return false;
		}
		String lower = url.toLowerCase();
		return lower.startsWith("http://") || lower.startsWith("https://");
	}

	/**
	 * {@code oe.cCd(url).thenAccept(...)}: downloads {@code url} in the
	 * background, registers the image under a URL-unique identifier and hands
	 * the identifier back on the client thread.
	 */
	static void fetch(String url, String name, Consumer<Identifier> onLoaded) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client == null) {
			return;
		}
		Identifier id = Identifier.of("opengrim", name + "_" + Integer.toHexString(url.hashCode()));
		Thread thread = new Thread(() -> {
			try (InputStream in = URI.create(url).toURL().openStream()) {
				NativeImage image = NativeImage.read(in);
				client.execute(() -> {
					client.getTextureManager().registerTexture(id,
							new NativeImageBackedTexture(() -> "opengrim " + name, image));
					onLoaded.accept(id);
				});
			} catch (Exception | LinkageError ignored) {
				// oe.cCi swallows download failures the same way (exceptionally
				// handler in oe.java:74): keep the previous texture.
			}
		}, "opengrim-circle-texture");
		thread.setDaemon(true);
		thread.start();
	}
}
