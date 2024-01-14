#ifndef AudioTrack_H
#define AudioTrack_H

#include <vector>
#include <string>
#include <paintable.h>

class AudioTrack : public Paintable
{
public:
  AudioTrack(double height, double width, const Vector2D &position);
  void paint() const override;

private:
  Color generateRandomColor();
  float randomFloat();
};

#endif // TRACK_H
