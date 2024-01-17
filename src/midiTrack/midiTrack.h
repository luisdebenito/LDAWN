#ifndef MidiTrack_H
#define MidiTrack_H

#include <paintable.h>

class MidiTrack : public Paintable
{

public:
  MidiTrack(float height, float width, const Vector2D &position);
  void paint() const override;

private:
  float paintableHeight;
};

#endif // TRACK_H
