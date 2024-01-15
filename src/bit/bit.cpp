#include <bit.h>
#include <GLFW/glfw3.h>

Bit::Bit(double height, double width, const Vector2D &position, const Color &color)
    : Paintable(height, width, position, color)
{
    paintableHeight = height - 0.006;
    paintableWidth = width - 0.005;
}

void Bit::paint() const
{
    glColor3d(color.getR(), color.getG(), color.getB());

    // Begin drawing the square
    glBegin(GL_POLYGON);

    // Specify the vertices of the square
    glVertex2d(position.getX(), position.getY());
    glVertex2d(position.getX() + paintableWidth, position.getY());
    glVertex2d(position.getX() + paintableWidth, position.getY() - paintableHeight);
    glVertex2d(position.getX(), position.getY() - paintableHeight);

    // End drawing the square
    glEnd();
}
