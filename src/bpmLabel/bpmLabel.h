#ifndef BPMLABEL_H
#define BPMLABEL_H

#include <paintable.h>

class BpmLabel : public Paintable
{
public:
  BpmLabel(double height, double width, const Vector2D &position);
  void paint() const override;
  int getValue();

private:
  int value = 120;
  void paintSquares(const Vector2D &pos, double side) const;
};

#endif // BIT_H
