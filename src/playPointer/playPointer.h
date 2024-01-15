#ifndef PlayPointer_H
#define PlayPointer_H

#include <vector>
#include <paintable.h>

class PlayPointer : public Paintable
{
public:
  PlayPointer(double height, double width, const Vector2D &position);
  void paint() const override;
};

#endif // TRACK_H
