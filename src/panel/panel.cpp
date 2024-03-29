#include <panel.h>

Panel::Panel() : Paintable(),
                 drumRack(0.7, 1.94, Vector2D(-0.97, 0.8)),
                 bpmLabel(0.12, 0.3, Vector2D(-0.15, 1)),
                 midiRack(0.5, 1.94, Vector2D(-0.97, 0.1)),
                 audioRack(0.5, 1.94, Vector2D(-0.97, -0.4)),
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
  recordPointer.paint();
  recordSign.paint();
}

void Panel::handleEvents(GLFWwindow *window) const
{
  auto currentTime = std::chrono::high_resolution_clock::now();
  auto elapsedTime = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - lastExecutionTime).count();

  if (elapsedTime < humanReleaseIterationRetard)
    return;

  // Update the last execution time
  lastExecutionTime = currentTime;

  drumRack.handleEvents(window);
  audioRack.handleEvents(window);
  midiRack.handleEvents(window);

  // Arrow keys
  if (glfwGetKey(window, GLFW_KEY_UP) == GLFW_PRESS)
  {
  }
  if (glfwGetKey(window, GLFW_KEY_DOWN))
  {
  }
  if (glfwGetKey(window, GLFW_KEY_LEFT) == GLFW_PRESS)
  {
    bpmLabel.decreaseValue();
    return;
  }
  if (glfwGetKey(window, GLFW_KEY_RIGHT) == GLFW_PRESS)
  {
    bpmLabel.increaseValue();
    return;
  }

  // Recording
  if (glfwGetKey(window, GLFW_KEY_R) == GLFW_PRESS)
  {
    recordSign.changeActive();
    return;
  }
}