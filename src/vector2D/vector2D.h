#ifndef Vector2D_H
#define Vector2D_H

class Vector2D
{
public:
  Vector2D(double x, double y);
  double getX() const;
  double getY() const;

private:
  double x;
  double y;
};

#endif
