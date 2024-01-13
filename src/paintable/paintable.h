#ifndef PAINTABLE_H
#define PAINTABLE_H

#include "vector2D.h"
#include "color.h"

class Paintable
{
public:
  Paintable(double height, double width, const Vector2D &position, const Color &color);
  virtual ~Paintable() = default;
  virtual void paint() const = 0;
  double getHeight() const;
  double getWidth() const;
  const Vector2D &getPosition() const;

protected:
  double height;
  double width;
  Vector2D position;
  Color color;
};

#endif // PAINTABLE_H