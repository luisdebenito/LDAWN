#ifndef BPMLABEL_H
#define BPMLABEL_H

#include <paintable.h>

class BpmLabel : public Paintable
{
public:
  BpmLabel(float height, float width, const Vector2D &position);
  void paint() const override;
  int getValue();

private:
  int value = 120;
  void paintSquares(const Vector2D &pos, float side) const;
};

#endif // BIT_H
