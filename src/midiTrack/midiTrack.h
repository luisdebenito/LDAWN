#ifndef MidiTrack_H
#define MidiTrack_H

#include <paintable.h>

class MidiTrack : public Paintable
{

public:
  MidiTrack(float height, float width, const Vector2D &position);
  void paint() const override;
  void changeActive();

private:
  float paintableHeight;
  bool active = false;
  float paintAlpha = 0.2;
};

#endif // TRACK_H
