#include <playPointer.h>
#include <iostream>

PlayPointer::PlayPointer(float height, float width, const Vector2D &position)
    : Paintable(height, width, position)
{
    color = Color(1.0, 0, 0);
    original_x = position.getX();
}

void PlayPointer::paint() const
{
    glColor3d(color.getR(), color.getG(), color.getB());
    // Begin drawing the square
    glBegin(GL_POLYGON);

    // Specify the vertices of the square
    glVertex2d(position.getX(), position.getY());
    glVertex2d(position.getX() + 0.002, position.getY());
    glVertex2d(position.getX() + 0.002, position.getY() - height);
    glVertex2d(position.getX(), position.getY() - height);

    // End drawing the square
    glEnd();
}

void PlayPointer::move(int bpm, int beats)
{
    float secondsPerBeat = 30.0 / bpm;
    float secondsPerWidth = secondsPerBeat * beats;
    float speed = static_cast<float>(width) / secondsPerWidth;
    float new_x = position.getX() + speed * 0.01;

    if (new_x >= (original_x + width))
    {
        position.setX(original_x);
    }
    else
    {
        position.setX(new_x);
    }
}
