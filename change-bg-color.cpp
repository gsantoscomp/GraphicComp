#include <stdlib.h>
#include <stdio.h>
#include <GL/glut.h>

double getRandom()
{
    return (double)(rand() % 255)/255;
}

void keyboard (unsigned char key, int x, int y)
{

    switch (key) {
    case 27:
        exit(0);
    default:
        glClearColor(getRandom(), getRandom(), getRandom(), getRandom());
        glutPostRedisplay();
    }
}

void draw(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("1ª Avaliação - Parte 01");
	glutDisplayFunc(draw);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
}
