#include <audioRack.h>
#include <GLFW/glfw3.h>

AudioRack::AudioRack(double height, double width, const Vector2D &position)
    : Paintable(height, width, position)
{
  for (int i = 0; i < num_tracks; ++i)
  {
    Vector2D bitPosition(position.getX(), (height / num_tracks) * i + position.getY());
    AudioTrack midiTrackObject(height / num_tracks, width, bitPosition);
    tracks.push_back(midiTrackObject);
  }
}

void AudioRack::paint() const
{
  for (const AudioTrack &track : tracks)
  {
    track.paint();
  }
}