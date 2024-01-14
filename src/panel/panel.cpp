#include <panel.h>
#include <GLFW/glfw3.h>

Panel::Panel() : Paintable(),
                 drumRack(0.7, 1.96, Vector2D(-0.98, 0.25)),
                 bpmLabel(0.2, 0.4, Vector2D(-0.2, 1))
{
}

void Panel::paint() const
{
  drumRack.paint();
  bpmLabel.paint();
}
