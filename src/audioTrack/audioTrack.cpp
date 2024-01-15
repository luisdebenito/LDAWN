#include <audioTrack.h>
#include <GLFW/glfw3.h>

AudioTrack::AudioTrack(double height, double width, const Vector2D &position)
    : Paintable(height, width, position)
{
  color = Color(170 / 256, 183.0 / 256, 184.0 / 256);
  paintableHeight = height - 0.006;
}

void AudioTrack::paint() const
{
  glEnable(GL_BLEND);
  glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

  glColor4f(color.getR(), color.getG(), color.getB(), 0.8);

  // Begin drawing the square
  glBegin(GL_POLYGON);

  // Specify the vertices of the square
  glVertex2d(position.getX(), position.getY());
  glVertex2d((position.getX() + width), position.getY());
  glVertex2d((position.getX() + width), position.getY() - paintableHeight);
  glVertex2d(position.getX(), position.getY() - paintableHeight);

  // End drawing the square
  glEnd();

  glDisable(GL_BLEND);
}