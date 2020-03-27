#include <iostream>
#include "include/GL/glut.h"

void display() {
	glClearColor(1.f, 1.f, 1.f, 1.f);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.f, 0.f, 1.f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.5f, -0.5f);
	glVertex2f(-0.5f, 0.5f);
	glVertex2f(0.5f, 0.5f);
	glVertex2f(0.5f, -0.5f);
	glEnd();

	glFinish();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Ch02 - Example01");
	glutDisplayFunc(display);
	glutMainLoop();

	return EXIT_SUCCESS;
}
