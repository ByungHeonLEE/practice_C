//
//  practice.cpp
//  homework
//
//  Created by 이병헌 on 2020/04/03.
//  Copyright © 2020 이병헌. All rights reserved.
//

#include "practice.hpp"
#include <GLUT/glut.h>
#include <OpenGL/OpenGL.h>
#include <OpenGL/glu.h>



void renderScene(void){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    glColor3f(1.0, 1.0, 1.0);
    
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.5, -0.5, 0.0);
    glVertex3f(0.5, 0.0, 0.0);
    glVertex3f(0.0, 0.5, 0.0);
    glEnd();
    
    glutSwapBuffers();
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(320, 320);
    glutCreateWindow("Hello OpenGL!");
    
    glutDisplayFunc(renderScene);
    
    glutMainLoop();
}
//xcode에서 실행하려고 #ifdef __APPLE__ /* Defined before OpenGL and GLUT includes to avoid deprecation messages */ #define GL_SILENCE_DEPRECATION #include <OpenGL/gl.h> #include <GLUT/glut.h> #else #include <GL/gl.h> #include <GL/glut.h> #endif 이런식으로 했는데 채점시에 괜찮을까요..?

