#include <panel.h>
#include <GLFW/glfw3.h>

Panel::Panel() : Paintable(),
                 drumRack(0.7, 1.96, Vector2D(-0.98, 0.25)),
                 bpmLabel(0.18, 0.4, Vector2D(-0.2, 1)),
                 midiRack(0.5, 1.96, Vector2D(-0.98, -0.3)),
                 audioRack(0.4, 1.96, Vector2D(-0.98, -0.7))
{
}

void Panel::paint() const
{
  drumRack.paint();
  bpmLabel.paint();
  midiRack.paint();
  audioRack.paint();
}
