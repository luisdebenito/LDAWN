#ifndef DRUMTRACK_H
#define DRUMTRACK_H

#include <vector>
#include <string>
#include <paintable.h>
#include <bit.h>

class DrumTrack : public Paintable
{

public:
  DrumTrack(double height, double width, const Vector2D &position);
  void paint() const override;

private:
  Color generateRandomColor();
  float randomFloat();
  std::vector<Bit> bits;
  int num_bits = 32;
};

#endif // TRACK_H
