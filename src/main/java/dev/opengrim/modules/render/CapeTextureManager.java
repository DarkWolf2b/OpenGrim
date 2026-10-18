package dev.opengrim.modules.render;

import java.io.InputStream;
import java.net.URI;
import java.util.concurrent.atomic.AtomicReference;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.texture.NativeImage;
import net.minecraft.client.texture.NativeImageBackedTexture;
import net.minecraft.util.Identifier;

/**
 * Downloads the Cape module's resolved cape URL in the background and
 * registers the decoded image under {@code opengrim:cape} in the texture
 * manager. Mirrors the original's native texture fetch ({@code qG.dam}):
 * the URL is re-fetched whenever it changes or fails.
 *
 * <p>The registered identifier is handed to the vanilla skin pipeline through
 * SkinTexturesResolveEvent (PlayerListEntryMixin), so the cape renders through
 * CapeFeatureRenderer exactly like a session-server cape asset.
 */
public final class CapeTextureManager {
	public static final Identifier CAPE_ID = Identifier.of("opengrim", "cape");

	private static final AtomicReference<String> loadedUrl = new AtomicReference<>(null);
	private static volatile long lastFetchMs;

	private CapeTextureManager() {
	}

	/**
	 * Whether a cape texture is currently registered under {@link #CAPE_ID}.
	 * Mirrors {@code qG.daj(AbstractClientPlayerEntity) != null} (qE.java:182-186):
	 * the custom cape only replaces the vanilla one once loaded.
	 */
	public static boolean hasCape() {
		return loadedUrl.get() != null;
	}

	/** Ensures {@code url} is loaded under CAPE_ID; re-downloads on change. */
	public static void ensureLoaded(String url) {
		if (url == null || url.isBlank()) {
			loadedUrl.set(null);
			return;
		}
		if (url.equals(loadedUrl.get())) {
			return;
		}
		long now = System.currentTimeMillis();
		if (now - lastFetchMs < 250L) {
			return;
		}
		lastFetchMs = now;
		String target = url;
		Thread thread = new Thread(() -> download(target), "opengrim-cape-download");
		thread.setDaemon(true);
		thread.start();
	}

	private static void download(String url) {
		try {
			try (InputStream in = URI.create(url).toURL().openStream();
					NativeImage image = NativeImage.read(in)) {
				NativeImageBackedTexture texture = new NativeImageBackedTexture(() -> "opengrim cape", image);
				MinecraftClient client = MinecraftClient.getInstance();
				client.execute(() -> client.getTextureManager().registerTexture(CAPE_ID, texture));
				loadedUrl.set(url);
			}
		} catch (Exception | LinkageError ignored) {
			// Invalid URL or network failure: keep the previous cape; the
			// fetch is retried after the cooldown on the next ensureLoaded.
		}
	}
}