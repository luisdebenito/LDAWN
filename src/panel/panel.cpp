#include <panel.h>
#include <GLFW/glfw3.h>

Panel::Panel() : Paintable(), drumRack(0.7, 1.96, Vector2D(-0.98, 0.0))
{
}

void Panel::paint() const
{
  drumRack.paint();
}
