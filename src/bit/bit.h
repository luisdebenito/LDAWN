#ifndef BIT_H
#define BIT_H

#include <paintable.h>

class Bit : public Paintable
{
public:
  Bit(double height, double width, const Vector2D &position, const Color &color);
  void paint() const override;

private:
  double paintableHeight;
  double paintableWidth;
};

#endif // BIT_H
