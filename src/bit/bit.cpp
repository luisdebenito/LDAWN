#include <bit.h>
#include <GLFW/glfw3.h>
#include <iostream>

Bit::Bit(double height, double width, const Vector2D &position, const Color &color)
    : Paintable(height, width, position, color)
{
}

void Bit::paint() const
{
    glColor3d(color.getR(), color.getG(), color.getB());

    // Begin drawing the square
    glBegin(GL_POLYGON);

    // Specify the vertices of the square
    glVertex2d(position.getX(), position.getY());
    glVertex2d((position.getX() + width), position.getY());
    glVertex2d((position.getX() + width), position.getY() + height);
    glVertex2d(position.getX(), position.getY() + height);

    // End drawing the square
    glEnd();
}
