#ifndef AudioRack_H
#define AudioRack_H

#include <vector>
#include <paintable.h>
#include <audioTrack.h>

class AudioRack : public Paintable
{
public:
  AudioRack(float height, float width, const Vector2D &position);
  void paint() const override;

private:
  std::vector<AudioTrack> tracks;
  int num_tracks = 2;
};

#endif // TRACK_H
