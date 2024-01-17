#include <bpmLabel.h>
#include <GLFW/glfw3.h>
#include <iostream>

BpmLabel::BpmLabel(float height, float width, const Vector2D &position)
    : Paintable(height, width, position, Color(0.3, 0.0, 0.0))
{
}

void BpmLabel::paint() const
{
  glColor3d(color.getR(), color.getG(), color.getB());
  const float side = 0.015;

  for (int j = 0; j < 5; ++j)
  {
    for (int i = 0; i < 10; ++i)
    {
      const Vector2D vec = Vector2D(position.getX() + 0.01 + i * width / 10, position.getY() - 0.01 - j * height / 5);
      paintSquares(vec, side);
    }
  }
}

int BpmLabel::getValue()
{
  return value;
}

void BpmLabel::paintSquares(const Vector2D &pos, float side) const
{
  glBegin(GL_POLYGON);
  glVertex2d(pos.getX(), pos.getY());
  glVertex2d(pos.getX() + side, pos.getY());
  glVertex2d(pos.getX() + side, pos.getY() - side);
  glVertex2d(pos.getX(), pos.getY() - side);
  glEnd();
}
