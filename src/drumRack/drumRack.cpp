#include <drumRack.h>

DrumRack::DrumRack(float height, float width, const Vector2D &position)
    : Paintable(height, width, position)
{
  for (int i = 0; i < num_tracks; ++i)
  {
    Vector2D bitPosition(position.getX(), position.getY() - (height / num_tracks) * i);
    DrumTrack drumTrackObject(height / num_tracks, width, bitPosition);
    tracks.push_back(drumTrackObject);
  }
}

void DrumRack::paint() const
{
  for (const DrumTrack &track : tracks)
  {
    track.paint();
  }
}

void DrumRack::handleEvents(GLFWwindow *window) const
{
  for (int i = 0; i < num_tracks; i++)
  {
    if (glfwGetKey(window, GLFW_KEY_1 + i) == GLFW_PRESS)
    {
      tracks[i].changeActive();
      return;
    }
  }
}