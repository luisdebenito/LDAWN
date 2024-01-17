#ifndef PAINTABLE_H
#define PAINTABLE_H

#include <vector2D.h>
#include <color.h>

class Paintable
{
public:
  Paintable(float height, float width, const Vector2D &position, const Color &color);
  Paintable(float height, float width, const Vector2D &position);
  Paintable();
  virtual ~Paintable() = default;
  virtual void paint() const = 0;
  float getHeight() const;
  float getWidth() const;
  const Vector2D &getPosition() const;

protected:
  float height;
  float width;
  Vector2D position;
  Color color;
};

#endif // PAINTABLE_H