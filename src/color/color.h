#ifndef COLOR_H
#define COLOR_H

class Color
{
public:
  Color(double r, double g, double b);
  double getR() const;
  double getG() const;
  double getB() const;

private:
  double r;
  double g;
  double b;
};

#endif
