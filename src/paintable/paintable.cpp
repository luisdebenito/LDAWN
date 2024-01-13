#include "paintable.h"

Paintable::Paintable(double height, double width, const Vector2D &position, const Color &color)
    : height(height), width(width), position(position), color(color) {}

double Paintable::getHeight() const
{
  return height;
}

double Paintable::getWidth() const
{
  return width;
}

const Vector2D &Paintable::getPosition() const
{
  return position;
}