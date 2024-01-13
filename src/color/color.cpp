#include "color.h"

Color::Color(double r, double g, double b) : r(r), g(g), b(b) {}

double Color::getR() const { return r; }
double Color::getG() const { return g; }
double Color::getB() const { return b; }
