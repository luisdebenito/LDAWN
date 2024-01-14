#include <drumTrack.h>
#include <GLFW/glfw3.h>

DrumTrack::DrumTrack(double height, double width, const Vector2D &position)
    : Paintable(height, width, position)
{
  for (int i = 0; i < num_bits; ++i)
  {
    Vector2D bitPosition((width / num_bits) * i + position.getX(), position.getY());
    Color bitColor(1.0, 0.0, 0.0);
    Bit bitObject(height, (width / num_bits), bitPosition, bitColor);
    bits.push_back(bitObject);
  }
}

void DrumTrack::paint() const
{
  for (const Bit &bit : bits)
  {
    bit.paint();
  }
}