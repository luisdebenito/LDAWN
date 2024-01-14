#include <drumTrack.h>
#include <GLFW/glfw3.h>

DrumTrack::DrumTrack(double height, double width, const Vector2D &position)
    : Paintable(height, width, position)
{
  color = generateRandomColor();
  for (int i = 0; i < num_bits; ++i)
  {
    Vector2D bitPosition((width / num_bits) * i + position.getX(), position.getY());
    Bit bitObject(height, (width / num_bits), bitPosition, Color(0.4, 0.2, 0.1));

    bits.push_back(bitObject);
  }
}

void DrumTrack::paint() const
{
  for (const Bit &bit : bits)
  {
    bit.paint();
  }

  glEnable(GL_BLEND);
  glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

  glColor4f(color.getR(), color.getG(), color.getB(), 0.5);

  // Begin drawing the square
  glBegin(GL_POLYGON);

  // Specify the vertices of the square
  glVertex2d(position.getX(), position.getY());
  glVertex2d((position.getX() + width), position.getY());
  glVertex2d((position.getX() + width), position.getY() + height);
  glVertex2d(position.getX(), position.getY() + height);

  // End drawing the square
  glEnd();

  glDisable(GL_BLEND);
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