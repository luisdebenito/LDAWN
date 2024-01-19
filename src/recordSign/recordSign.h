#ifndef RecordSign_H
#define RecordSign_H

#include <paintable.h>

class RecordSign : public Paintable
{
public:
  RecordSign(float height, float width, const Vector2D &position);
  void paint() const override;
  void changeActive();

private:
  mutable bool active;
};

#endif //
