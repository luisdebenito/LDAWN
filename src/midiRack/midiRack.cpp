#include <midiRack.h>
#include <GLFW/glfw3.h>

MidiRack::MidiRack(double height, double width, const Vector2D &position)
    : Paintable(height, width, position)
{
  for (int i = 0; i < num_tracks; ++i)
  {
    Vector2D bitPosition(position.getX(), position.getY() - (height / num_tracks) * i);
    MidiTrack midiTrackObject(height / num_tracks, width, bitPosition);
    tracks.push_back(midiTrackObject);
  }
}

void MidiRack::paint() const
{
  for (const MidiTrack &track : tracks)
  {
    track.paint();
  }
}