package media;

import java.util.List;

public interface MediaPlayerInfo {
   MediaPlayerInfo INSTANCE = MediaPlayerInfo$SystemMediaPlayerInfo.getInstance();

   static void initialize() {
      MediaPlayerInfo$SystemMediaPlayerInfo.getInstance();
   }

   List<IMediaSession> getMediaSessions();
}
