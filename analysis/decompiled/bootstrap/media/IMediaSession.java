package media;

public interface IMediaSession {
   void next();

   String owner();

   void stop();

   void previous();

   MediaInfo media();

   byte[] getArtworkBytes();

   void pause();

   void play();

   int getCycleType();

   void swapCycle();

   void playPause();
}
