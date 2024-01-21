#include <vector2D.h>

Vector2D::Vector2D(float x, float y) : x(x), y(y) {}

float Vector2D::getX() const { return x; }
float Vector2D::getY() const { return y; }
void Vector2D::setX(float x_n) { x = x_n; }
