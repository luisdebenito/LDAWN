#include <paintable.h>

Paintable::Paintable(float height, float width, const Vector2D &position, const Color &color)
    : height(height), width(width), position(position), color(color) {}

Paintable::Paintable(float height, float width, const Vector2D &position)
    : height(height), width(width), position(position), color(Color(0, 0, 0)) {}

Paintable::Paintable()
    : height(0), width(0), position(Vector2D(0.0, 0.0)), color(Color(0, 0, 0)) {}

float Paintable::getHeight() const
{
  return height;
}

float Paintable::getWidth() const
{
  return width;
}

const Vector2D &Paintable::getPosition() const
{
  return position;
}