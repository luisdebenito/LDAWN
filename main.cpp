#include <GLFW/glfw3.h>
#include <bit.h>
#include <vector2D.h>

int main()
{
  // Initialize GLFW
  if (!glfwInit())
  {
    return -1;
  }

  // Create a fullscreen windowed mode window and its OpenGL context
  GLFWwindow *window = glfwCreateWindow(400, 400, "LDAWN", glfwGetPrimaryMonitor(), NULL);

  if (!window)
  {
    glfwTerminate();
    return -1;
  }

  // Make the window's context current
  glfwMakeContextCurrent(window);

  Vector2D bitPosition(0.0, 0.0);
  Color color(1.0, 0, 0);
  Bit bitObject(20.0, 20.0, bitPosition, color);
  // Loop until the user closes the window
  while (glfwGetKey(window, GLFW_KEY_ESCAPE) != GLFW_PRESS)
  {
    glClear(GL_COLOR_BUFFER_BIT);

    bitObject.paint();

    glfwSwapBuffers(window);

    glfwPollEvents();
  }

  // Terminate GLFW
  glfwTerminate();
  return 0;
}
