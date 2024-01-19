#include <midiRack.h>

MidiRack::MidiRack(float height, float width, const Vector2D &position)
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

void MidiRack::handleEvents(GLFWwindow *window) const
{
  for (int i = 0; i < num_tracks; i++)
  {
    if (glfwGetKey(window, GLFW_KEY_5 + i) == GLFW_PRESS)
    {
      tracks[i].changeActive();
      return;
    }
  }
}