#ifndef DRUMRACK_H
#define DRUMRACK_H

#include <vector>
#include <paintable.h>
#include <drumTrack.h>

class DrumRack : public Paintable
{
public:
  DrumRack(float height, float width, const Vector2D &position);
  void paint() const override;

private:
  std::vector<DrumTrack> tracks;
  int num_tracks = 4;
};

#endif // TRACK_H
