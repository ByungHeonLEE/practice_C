#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

vector<vector<vector<float>>> coordinates; //Makes a 3D vector that can store the coordinate data.
vector<vector<vector<float>>> colors;      //Makes a 3D vector that can store the color data

vector<vector<vector<float>>> coordinates1; //Makes a 3D vector that can store the coordinate data.
vector<vector<vector<float>>> colors1;      //Makes a 3D vector that can store the color data

//Function to generate a random float within the given interval
float genRandFloat(int max, int min)
{
    //srand(static_cast<unsigned int>(time(0))); is to be used in the main() function.
    static const float fraction = (max - min) / (float)(RAND_MAX + 1.0);
    return min + float((rand()) * fraction);
}

//Function to create the data used to make a triangle
void createTriangle()
{
    float ax, ay;
    float bx, by;
    float cx, cy; //The coordinate data of each vertex of the triangle
    float a0, a1, a2;
    float b0, b1, b2;
    float c0, c1, c2; //The color data of each vertex of the triangle.
    ax = genRandFloat(-1, 1);
    ay = genRandFloat(-1, 1);
    bx = genRandFloat(-1, 1);
    by = genRandFloat(-1, 1);
    cx = genRandFloat(-1, 1);
    cy = genRandFloat(-1, 1);
    //Each coordinate is a random float within the interval [-1,1]
    a0 = genRandFloat(0, 1);
    a1 = genRandFloat(0, 1);
    a2 = genRandFloat(0, 1);
    b0 = genRandFloat(0, 1);
    b1 = genRandFloat(0, 1);
    b2 = genRandFloat(0, 1);
    c0 = genRandFloat(0, 1);
    c1 = genRandFloat(0, 1);
    c2 = genRandFloat(0, 1);
    //Each RGB-value is a random float within the interval [0,1]

    coordinates.push_back(vector<vector<float>>()); // creates a triangle
    coordinates.back().push_back(vector<float>());  // creates the first vertex
    coordinates.back().back().push_back(ax);        // fills in the coords. this works
    coordinates.back().back().push_back(ay);
    coordinates.back().back().push_back(0.0);

    coordinates.back().push_back(vector<float>()); // creates the second vertex
    coordinates.back().back().push_back(bx);       // fills in the coords
    coordinates.back().back().push_back(by);
    coordinates.back().back().push_back(0.0);

    coordinates.back().push_back(vector<float>()); // creates the 3rd vertex
    coordinates.back().back().push_back(cx);       // fills in the coords
    coordinates.back().back().push_back(cy);
    coordinates.back().back().push_back(0.0);

    colors.push_back(vector<vector<float>>()); // creates a triangle
    colors.back().push_back(vector<float>());  // creates the first vertex
    colors.back().back().push_back(a0);        // fills in the coords. this works
    colors.back().back().push_back(a1);
    colors.back().back().push_back(a2);
    colors.back().push_back(vector<float>()); // creates the second vertex
    colors.back().back().push_back(b0);       // fills in the coords
    colors.back().back().push_back(b1);
    colors.back().back().push_back(b2);
    colors.back().push_back(vector<float>()); // creates the 3rd vertex
    colors.back().back().push_back(c0);       // fills in the coords
    colors.back().back().push_back(c1);
    colors.back().back().push_back(c2);
}

void createQuadrangle()
{
    float ax, ay;
    float bx, by;
    float cx, cy;
    float dx, dy; //The coordinate data of each vertex of the triangle
    float a0, a1, a2;
    float b0, b1, b2;
    float c0, c1, c2;
    float d0, d1, d2; //The color data of each vertex of the triangle.
    ax = genRandFloat(-1, 1);
    ay = genRandFloat(-1, 1);
    bx = genRandFloat(-1, 1);
    by = genRandFloat(-1, 1);
    cx = genRandFloat(-1, 1);
    cy = genRandFloat(-1, 1);
    dx = genRandFloat(-1, 1);
    dy = genRandFloat(-1, 1);
    //Each coordinate is a random float within the interval [-1,1]
    a0 = genRandFloat(0, 1);
    a1 = genRandFloat(0, 1);
    a2 = genRandFloat(0, 1);
    b0 = genRandFloat(0, 1);
    b1 = genRandFloat(0, 1);
    b2 = genRandFloat(0, 1);
    c0 = genRandFloat(0, 1);
    c1 = genRandFloat(0, 1);
    c2 = genRandFloat(0, 1);
    d0 = genRandFloat(0, 1);
    d1 = genRandFloat(0, 1);
    d2 = genRandFloat(0, 1);
    //Each RGB-value is a random float within the interval [0,1]

    coordinates1.push_back(vector<vector<float>>()); // creates a triangle
    coordinates1.back().push_back(vector<float>());  // creates the first vertex
    coordinates1.back().back().push_back(ax);        // fills in the coords. this works
    coordinates1.back().back().push_back(ay);
    coordinates1.back().back().push_back(0.0);

    coordinates1.back().push_back(vector<float>()); // creates the second vertex
    coordinates1.back().back().push_back(bx);       // fills in the coords
    coordinates1.back().back().push_back(by);
    coordinates1.back().back().push_back(0.0);

    coordinates1.back().push_back(vector<float>()); // creates the 3rd vertex
    coordinates1.back().back().push_back(cx);       // fills in the coords
    coordinates1.back().back().push_back(cy);
    coordinates1.back().back().push_back(0.0);

    coordinates1.back().push_back(vector<float>()); // creates the 4rd vertex
    coordinates1.back().back().push_back(dx);       // fills in the coords
    coordinates1.back().back().push_back(dy);
    coordinates1.back().back().push_back(0.0);

    colors1.push_back(vector<vector<float>>()); // creates a triangle
    colors1.back().push_back(vector<float>());  // creates the first vertex
    colors1.back().back().push_back(a0);        // fills in the coords. this works
    colors1.back().back().push_back(a1);
    colors1.back().back().push_back(a2);
    colors1.back().push_back(vector<float>()); // creates the second vertex
    colors1.back().back().push_back(b0);       // fills in the coords
    colors1.back().back().push_back(b1);
    colors1.back().back().push_back(b2);
    colors1.back().push_back(vector<float>()); // creates the 3rd vertex
    colors1.back().back().push_back(c0);       // fills in the coords
    colors1.back().back().push_back(c1);
    colors1.back().back().push_back(c2);
    colors1.back().push_back(vector<float>()); // creates the 3rd vertex
    colors1.back().back().push_back(d0);       // fills in the coords
    colors1.back().back().push_back(d1);
    colors1.back().back().push_back(d2);
}

void drawTriangles()
{
    if (coordinates.size() == 0)
        return;
    glBegin(GL_TRIANGLES);
    for (int t = 0; t < coordinates.size(); t++)
    {
        for (int i = 0; i < coordinates[t].size(); i++)
        {
            glColor3f(colors[t][i][0], colors[t][i][1], colors[t][i][2]);
            glVertex3f(coordinates[t][i][0], coordinates[t][i][1], coordinates[t][i][2]);
        }
    }
    glEnd();
}

void drawQuadrangles()
{
    if (coordinates1.size() == 0)
        return;
    glBegin(GL_QUADS);
    for (int t = 0; t < coordinates1.size(); t++)
    {
        for (int i = 0; i < coordinates1[t].size(); i++)
        {
            glColor3f(colors1[t][i][0], colors1[t][i][1], colors1[t][i][2]);
            glVertex3f(coordinates1[t][i][0], coordinates1[t][i][1], coordinates1[t][i][2]);
        }
    }
    glEnd();
}

void processNormalKeys(unsigned char key, int x, int y)
{
    printf("You pressed %c at (%d, %d)\n", key, x, y);
    switch (key)
    {
    case 't':
        createTriangle();
        break;
    case 'q':
        createQuadrangle();
        break;
    }
    glutPostRedisplay();
}

void renderScene(void)
{
    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    drawTriangles();
    drawQuadrangles();
    glFlush(); //or glFinish();
}

int main(int argc, char **argv)
{
    std::srand(static_cast<unsigned int>(std::time(0)));
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);                   //Determines where in the display the polygon window will pop up
    glutInitWindowSize(320, 320);                       //Determines the polygon window size to be displayed
    glutCreateWindow("Draw triangles and quadrangles"); //Determines the polygon window name

    glutDisplayFunc(renderScene); //Registers the function to display (In this case, renderScene)
    glutKeyboardFunc(processNormalKeys);
    //glutSpecialFunc(processSpecialKeys);
    //glutMouseFunc(processMouse);

    glutMainLoop();
}