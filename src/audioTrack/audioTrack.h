#ifndef AudioTrack_H
#define AudioTrack_H

#include <paintable.h>

class AudioTrack : public Paintable
{
public:
  AudioTrack(float height, float width, const Vector2D &position);
  void paint() const override;

private:
  float paintableHeight;
};

#endif // TRACK_H
