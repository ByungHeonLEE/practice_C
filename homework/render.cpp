//
//  render.cpp
//  homework
//
//  Created by 이병헌 on 2020/04/01.
//  Copyright © 2020 이병헌. All rights reserved.
//

#include "render.hpp"
#include <GLUT/glut.h>
#include <OpenGL/OpenGL.h>
#include <OpenGL/glu.h>

void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    glBegin(GL_TRIANGLES);
        glVertex3f(0.0, 0.0, 0.0);
        glVertex3f(0.5, 0.0, 0.0);
        glVertex3f(0.5, 0.5, 0.0);
    glEnd();
    
    glutSwapBuffers();
}
