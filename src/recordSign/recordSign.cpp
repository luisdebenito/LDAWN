#include <recordSign.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <cmath>

RecordSign::RecordSign(float height, float width, const Vector2D &position)
    : Paintable(height, width, position, Color(0.5, 0.0, 0.0))
{
}

void RecordSign::paint() const
{
  glColor3d(color.getR(), color.getG(), color.getB());
  glBegin(GL_TRIANGLE_FAN);
  glVertex2f(position.getX(), position.getY()); // Center of circle
  for (int i = 0; i <= 15; i++)
  {
    float angle = (2.0f * M_PI * i) / 15;
    float dx = height * cos(angle);
    float dy = height * sin(angle);
    glVertex2f(position.getX() + dx, position.getY() + dy);
  }
  glEnd();
}
