#ifndef MidiTrack_H
#define MidiTrack_H

#include <paintable.h>

class MidiTrack : public Paintable
{

public:
  MidiTrack(double height, double width, const Vector2D &position);
  void paint() const override;

private:
  double paintableHeight;
};

#endif // TRACK_H
