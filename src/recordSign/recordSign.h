#ifndef RecordSign_H
#define RecordSign_H

#include <paintable.h>

class RecordSign : public Paintable
{
public:
  RecordSign(double height, double width, const Vector2D &position);
  void paint() const override;
};

#endif //
