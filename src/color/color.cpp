#include <color.h>

Color::Color(float r, float g, float b) : r(r), g(g), b(b) {}

float Color::getR() const { return r; }
float Color::getG() const { return g; }
float Color::getB() const { return b; }
