#include <GLFW/glfw3.h>
#include <panel.h>

int main()
{
  if (!glfwInit())
  {
    return -1;
  }

  GLFWmonitor *MyMonitor = glfwGetPrimaryMonitor();

  const GLFWvidmode *mode = glfwGetVideoMode(MyMonitor);

  GLFWwindow *window = glfwCreateWindow(mode->width,
                                        mode->height, "LDAWN",
                                        MyMonitor, nullptr);

  if (!window)
  {
    glfwTerminate();
    return -1;
  }

  const Panel panel = Panel();

  // Make the window's context current
  glfwMakeContextCurrent(window);

  // Loop until the user closes the window
  while (glfwGetKey(window, GLFW_KEY_ESCAPE) != GLFW_PRESS)
  {
    glClear(GL_COLOR_BUFFER_BIT);

    panel.paint();

    panel.handleEvents(window);

    glfwSwapBuffers(window);

    glfwWaitEvents();
  }

  // Terminate GLFW
  glfwTerminate();
  return 0;
}
