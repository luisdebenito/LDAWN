#ifndef COLOR_H
#define COLOR_H

class Color
{
public:
  Color(float r, float g, float b);
  float getR() const;
  float getG() const;
  float getB() const;

private:
  float r;
  float g;
  float b;
};

#endif
