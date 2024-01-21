#ifndef PlayPointer_H
#define PlayPointer_H

#include <vector>
#include <paintable.h>
#include <GLFW/glfw3.h>

class PlayPointer : public Paintable
{
public:
  PlayPointer(float height, float width, const Vector2D &position);
  void paint() const override;
  void move(int bpm, int beats);

private:
  float original_x;
};

#endif // TRACK_H
