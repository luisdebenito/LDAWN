#ifndef MidiRack_H
#define MidiRack_H

#include <vector>
#include <paintable.h>
#include <midiTrack.h>
#include <GLFW/glfw3.h>

class MidiRack : public Paintable
{
public:
  MidiRack(float height, float width, const Vector2D &position);
  void paint() const override;
  void handleEvents(GLFWwindow *window) const;

private:
  mutable std::vector<MidiTrack> tracks;
  int num_tracks = 3;
};

#endif // TRACK_H
