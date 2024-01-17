#include <panel.h>
#include <GLFW/glfw3.h>

Panel::Panel() : Paintable(),
                 drumRack(0.7, 1.94, Vector2D(-0.97, 0.8)),
                 bpmLabel(0.18, 0.4, Vector2D(-0.2, 1)),
                 midiRack(0.5, 1.94, Vector2D(-0.97, 0.04)),
                 audioRack(0.4, 1.94, Vector2D(-0.97, -0.5)),
                 playPointer(1.7, 0.002, Vector2D(-0.97, 0.8)),
                 recordPointer(0.05, 0.02, Vector2D(-0.99, 0.75)),
                 recordSign(0.02, 0.01, Vector2D(-0.5, 0.9))
{
}

void Panel::paint() const
{
  drumRack.paint();
  bpmLabel.paint();
  midiRack.paint();
  audioRack.paint();
  playPointer.paint();
  recordPointer.paint();
  recordSign.paint();
}
