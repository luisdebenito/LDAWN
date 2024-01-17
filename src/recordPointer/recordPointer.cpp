#include <GLFW/glfw3.h>
#include <recordPointer.h>

RecordPointer::RecordPointer(float height, float width, const Vector2D &position)
    : Paintable(height, width, position)
{
  color = Color(123.0 / 256, 147.0 / 256, 98.0 / 256);
}

void RecordPointer::paint() const
{
  glColor3d(color.getR(), color.getG(), color.getB());
  // Begin drawing the square
  glBegin(GL_POLYGON);

  // Specify the vertices of the square
  glVertex2d(position.getX(), position.getY());
  glVertex2d(position.getX() + width, position.getY() - height / 2);
  glVertex2d(position.getX(), position.getY() - height);

  // End drawing the square
  glEnd();
}