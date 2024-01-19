#ifndef DRUMRACK_H
#define DRUMRACK_H

#include <vector>
#include <paintable.h>
#include <drumTrack.h>
#include <GLFW/glfw3.h>

class DrumRack : public Paintable
{
public:
  DrumRack(float height, float width, const Vector2D &position);
  void paint() const override;
  void handleEvents(GLFWwindow *window) const;

private:
  mutable std::vector<DrumTrack> tracks;
  int num_tracks = 4;
};

#endif // TRACK_H
