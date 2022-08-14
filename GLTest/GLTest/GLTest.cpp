#include "GLTest.h"

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(640, 320);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("glut Sample Project");

    glutReshapeFunc(reshape);
    glutDisplayFunc(display);
    glutIdleFunc(update);

    glEnable(GL_DEPTH_TEST);
    glShadeModel(GL_SMOOTH);

    glutMainLoop();

    return 0;
}
