#ifndef MidiTrack_H
#define MidiTrack_H

#include <vector>
#include <string>
#include <paintable.h>
#include <bit.h>

class MidiTrack : public Paintable
{

public:
  MidiTrack(double height, double width, const Vector2D &position);
  void paint() const override;

private:
  Color generateRandomColor();
  float randomFloat();
};

#endif // TRACK_H
