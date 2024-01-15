#ifndef AudioTrack_H
#define AudioTrack_H

#include <paintable.h>

class AudioTrack : public Paintable
{
public:
  AudioTrack(double height, double width, const Vector2D &position);
  void paint() const override;

private:
  double paintableHeight;
};

#endif // TRACK_H
