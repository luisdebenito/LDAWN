#include <GLFW/glfw3.h>
#include <vector2D.h>
#include <drumRack.h>
#include <color.h>

// glColor4f(1, 1, 1, 1);para el alpha

int main()
{
  // Initialize GLFW
  if (!glfwInit())
  {
    return -1;
  }

  GLFWmonitor *MyMonitor = glfwGetPrimaryMonitor(); // The primary monitor.. Later Occulus?..

  const GLFWvidmode *mode = glfwGetVideoMode(MyMonitor);

  GLFWwindow *window = glfwCreateWindow(mode->width,
                                        mode->height, "LDAWN",
                                        MyMonitor, nullptr);

  if (!window)
  {
    glfwTerminate();
    return -1;
  }

  Vector2D drackPosition = Vector2D(-1, 0.4);
  DrumRack drumrack = DrumRack(0.3, 2, drackPosition);

  // Make the window's context current
  glfwMakeContextCurrent(window);

  // Loop until the user closes the window
  while (glfwGetKey(window, GLFW_KEY_ESCAPE) != GLFW_PRESS)
  {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);

    glColor3d(1.0, 0.0, 0.0);
    glVertex2f(0.9, -0.9);
    glEnd();

    drumrack.paint();

    glfwSwapBuffers(window);

    glfwPollEvents();
  }

  // Terminate GLFW
  glfwTerminate();
  return 0;
}
