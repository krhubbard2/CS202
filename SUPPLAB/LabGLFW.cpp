#include <GLFW/glfw3.h>
#include <iostream>
#include <cmath>
//test
int main(void) {
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window)) {
        /* Render here */


        glClearColor(1, 0, 1, 1);

        glClear(GL_COLOR_BUFFER_BIT);


        glLoadIdentity();
        float angle = (float)glfwGetTime(); //Returns time in seconds as double
        float c = 0.1f * std::cos(angle*3.14159f/180.0f);
        float s = 0.1f * std::cos(angle*3.14159f/180.0f);
        glTranslatef(c, s, 0.0f);
        glScalef(1 + c, 1 + s, 1.0f);
        glRotatef(angle * 30.0f, 0.0f, 0.0f, 1.0f);

        glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(-1.0f, -1.0f, 0.0f); // bottom left
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(1.0f, -1.0f, 0.0f); // bottom right
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3f(0.0f, 1.0f, 0.0f); // middle top
        glEnd();

        // glClear(GL_COLOR_BUFFER_BIT);

        // glLoadIdentity();
        // glBegin(GL_LINE_LOOP);
        // for (float a = 0.0f; a < 360.0f; a += 1.0f)
        // {
        //   float c = std::cos(a * 3.14159f / 180.0f);
        //   float s = std::cos(a * 3.14159f / 180.0f);
        //   glColor3f(std::abs(c), std::abs(s), 0.0f);
        //   glVertex3f(c, s, 0.0f);
        // }
        // glEnd();


        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
