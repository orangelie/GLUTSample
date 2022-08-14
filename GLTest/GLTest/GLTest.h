#pragma once
#pragma comment(lib, "glut32")

#include <Windows.h>
#include <windowsx.h>

#include <glut.h>


void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(0.5f, 0.5f, 0.5f, 1.0f);

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.5f, 0.0f);
    glVertex3f(1.0f, -0.5f, 0.0f);
    glVertex3f(-1.0f, -0.5f, 0.0f);
    glEnd();

    glFlush();
    glutSwapBuffers();
}

void update()
{
    glutPostRedisplay();
}

void reshape(int width, int height)
{
    glViewport(0, 0, width, height);
}
