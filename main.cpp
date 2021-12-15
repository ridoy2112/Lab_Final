//My Student ID's last four digits are 2112.
//Their % of 8 is 0.
//According to question 0 was drawing a kite so i draw it.


#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 30.0, 0.0, 35.0);
}

void circle(double e, double f, double g)
{
    float theta;
    int i;
    glBegin(GL_POLYGON);
    for(i=0; i<180; i++)
    {
        theta=i*3.142/180;
        glVertex2f(e+g*cos(theta),f+g*sin(theta));
    }
    glEnd();
}

void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(8, 15);
    glVertex2f(15, 22);
    glVertex2f(22, 15);
    glVertex2f(15, 8);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(15, 8);
    glVertex2f(13, 6);
    glVertex2f(17, 6);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(15, 8);
    glVertex2f(15, 22);
    glEnd();


    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(8,15);
    glVertex2f(15,18);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(15,18);
    glVertex2f(22,15);
    glEnd();

    glFlush();
    glutSwapBuffers();
}

int main(int argc,char **argv)
{


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(100,100);
    glutInitWindowSize(500,550);
    glutCreateWindow("Kite_182-15-2112");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
