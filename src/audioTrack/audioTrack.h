#ifndef AudioTrack_H
#define AudioTrack_H

#include <paintable.h>

class AudioTrack : public Paintable
{
public:
  AudioTrack(float height, float width, const Vector2D &position);
  void paint() const override;
  void changeActive();

private:
  float paintableHeight;
  bool active = false;
  float paintAlpha = 0.2;
};

#endif // TRACK_H
