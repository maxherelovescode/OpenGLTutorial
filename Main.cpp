#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

using namespace std;

int main() 
{
	glfwInit();

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow* window = glfwCreateWindow(800, 800, "Roblox 2", NULL, NULL);

	if (window == NULL)
	{
		cout << "You silly boy" << endl;
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	gladLoadGL();


	glViewport(0, 0, 800, 800);

	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}
	
	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}