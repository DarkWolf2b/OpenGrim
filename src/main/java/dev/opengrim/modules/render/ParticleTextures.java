package dev.opengrim.modules.render;

import java.io.InputStream;
import java.util.HashMap;
import java.util.Map;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.texture.NativeImage;
import net.minecraft.client.texture.NativeImageBackedTexture;
import net.minecraft.util.Identifier;

/**
 * Shared loader for the recovered particle raster assets.
 *
 * <p>Source: {@code analysis/decompiled/bootstrap/offline/assets/raster-assets.bin}
 * (big-endian count, then {@code [nameLen][name][blobLen][PNG]}). The eight
 * {@code mo} sprites, {@code glow} and {@code ghosts} are shipped under
 * {@code assets/opengrim/textures/particles/}. This is the rebuild equivalent
 * of {@code ob.cBv(String)} as used by the particle/render family
 * (Hit Particles {@code mm}/{@code mo}, Target ESP {@code dz}, Particles
 * {@code cR}, Soul Effects {@code cZ}).
 *
 * <p>Textures are registered lazily on the client thread; {@link #preload}
 * exists so world-render code never creates a GPU texture inside a render
 * pass. A missing resource falls back to a procedural soft disc.
 */
final class ParticleTextures {
	private static final Map<String, Identifier> CACHE = new HashMap<>();

	private ParticleTextures() {
	}

	/** {@code ob.cBv(name)}, cached per asset key. */
	static synchronized Identifier get(String key) {
		Identifier cached = CACHE.get(key);
		if (cached != null) {
			return cached;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client == null) {
			return null;
		}
		Identifier id = Identifier.of("opengrim", "particles/" + key);
		NativeImage image = null;
		String resource = "assets/opengrim/textures/particles/" + key + ".png";
		try (InputStream in = ParticleTextures.class.getClassLoader().getResourceAsStream(resource)) {
			if (in != null) {
				image = NativeImage.read(in);
			}
		} catch (Exception ignored) {
			// fall through to the procedural disc
		}
		if (image == null) {
			image = fallbackDisc();
		}
		client.getTextureManager().registerTexture(id,
				new NativeImageBackedTexture(() -> "opengrim particles/" + key, image));
		CACHE.put(key, id);
		return id;
	}

	/** Register assets ahead of the render pass (call from the client tick). */
	static void preload(String... keys) {
		for (String key : keys) {
			get(key);
		}
	}

	/** Only used when a shipped sprite is missing. */
	private static NativeImage fallbackDisc() {
		int size = 32;
		NativeImage image = new NativeImage(size, size, false);
		for (int x = 0; x < size; x++) {
			for (int y = 0; y < size; y++) {
				double dx = (x + 0.5) / size * 2.0 - 1.0;
				double dy = (y + 0.5) / size * 2.0 - 1.0;
				double d = Math.sqrt(dx * dx + dy * dy);
				int alpha = (int) (Math.max(0.0, 1.0 - d) * 255.0);
				image.setColor(x, y, alpha << 24 | 0xFFFFFF);
			}
		}
		return image;
	}
}
