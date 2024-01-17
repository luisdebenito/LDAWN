#ifndef Vector2D_H
#define Vector2D_H

class Vector2D
{
public:
  Vector2D(float x, float y);
  float getX() const;
  float getY() const;

private:
  float x;
  float y;
};

#endif
