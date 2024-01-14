#include <drumTrack.h>
#include <GLFW/glfw3.h>

DrumTrack::DrumTrack(double height, double width, const Vector2D &position)
    : Paintable(height, width, position)
{
  for (int i = 0; i < num_bits; ++i)
  {
    Vector2D bitPosition((width / num_bits) * i + position.getX(), position.getY());
    Bit bitObject(height, (width / num_bits), bitPosition, generateRandomColor());
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

Color DrumTrack::generateRandomColor()
{
  float red = randomFloat();
  float green = randomFloat();
  float blue = randomFloat();
  return Color(red, green, blue);
}

float DrumTrack::randomFloat()
{
  return static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
}