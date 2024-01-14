#include <bpmLabel.h>
#include <GLFW/glfw3.h>

BpmLabel::BpmLabel(double height, double width, const Vector2D &position)
    : Paintable(height, width, position, Color(1.0, 1.0, 1.0))
{
}

void BpmLabel::paint() const
{
  glColor3d(color.getR(), color.getG(), color.getB());

  // Begin drawing the square
  glBegin(GL_POLYGON);

  // Specify the vertices of the square
  glVertex2d(position.getX(), position.getY());
  glVertex2d((position.getX() + width), position.getY());
  glVertex2d((position.getX() + width), position.getY() - height);
  glVertex2d(position.getX(), position.getY() - height);

  // End drawing the square
  glEnd();
}

int BpmLabel::getValue()
{
  return value;
}
