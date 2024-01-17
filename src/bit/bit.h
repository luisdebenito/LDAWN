#ifndef BIT_H
#define BIT_H

#include <paintable.h>

class Bit : public Paintable
{
public:
  Bit(float height, float width, const Vector2D &position, const Color &color);
  void paint() const override;

private:
  float paintableHeight;
  float paintableWidth;
};

#endif // BIT_H
