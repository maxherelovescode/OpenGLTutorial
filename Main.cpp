#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

using namespace std;

int main() 
{
	// We want opengl!
	glfwInit();


	// Window settings
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// Make window
	GLFWwindow* window = glfwCreateWindow(800, 800, "Roblox 2", NULL, NULL);


	// in case of no window
	if (window == NULL)
	{
		cout << "You silly boy" << endl;
		glfwTerminate();
		return -1;
	}

	// Please make window actually show
	glfwMakeContextCurrent(window);

	// Load glad i think
	gladLoadGL();

	// set viewport size probably
	glViewport(0, 0, 800, 800);

	// Change colour
	// FIXME: There is very probably an easier way to do this
	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	// Dont close window please
	while (!glfwWindowShouldClose(window)) {

		// Swap frames to show colour
		glfwSwapBuffers(window);

		// Washappening
		glfwPollEvents();
	}
	

	// get rid of window
	glfwDestroyWindow(window);

	// get rid of glfw
	glfwTerminate();

	// get rid of c++
	return 0;
}