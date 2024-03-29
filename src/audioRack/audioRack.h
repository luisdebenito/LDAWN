#ifndef AudioRack_H
#define AudioRack_H

#include <vector>
#include <paintable.h>
#include <audioTrack.h>
#include <GLFW/glfw3.h>

class AudioRack : public Paintable
{
public:
  AudioRack(float height, float width, const Vector2D &position);
  void paint() const override;
  void handleEvents(GLFWwindow *window) const;

private:
  mutable std::vector<AudioTrack> tracks;
  int num_tracks = 3;
};

#endif // TRACK_H
