#include <midiTrack.h>
#include <GLFW/glfw3.h>

MidiTrack::MidiTrack(double height, double width, const Vector2D &position)
    : Paintable(height, width, position)
{
  color = generateRandomColor();
}

void MidiTrack::paint() const
{
  glEnable(GL_BLEND);
  glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

  glColor4f(color.getR(), color.getG(), color.getB(), 0.8);

  // Begin drawing the square
  glBegin(GL_POLYGON);

  // Specify the vertices of the square
  glVertex2d(position.getX(), position.getY());
  glVertex2d((position.getX() + width), position.getY());
  glVertex2d((position.getX() + width), position.getY() - height);
  glVertex2d(position.getX(), position.getY() - height);

  // End drawing the square
  glEnd();

  glDisable(GL_BLEND);
}

Color MidiTrack::generateRandomColor()
{
  float red = randomFloat();
  float green = randomFloat();
  float blue = randomFloat();
  return Color(red, green, blue);
}

float MidiTrack::randomFloat()
{
  return static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
}