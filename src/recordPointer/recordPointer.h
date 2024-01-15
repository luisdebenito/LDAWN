#ifndef RecordPointer_H
#define RecordPointer_H

#include <vector>
#include <paintable.h>

class RecordPointer : public Paintable
{
public:
  RecordPointer(double height, double width, const Vector2D &position);
  void paint() const override;
};

#endif // TRACK_H
