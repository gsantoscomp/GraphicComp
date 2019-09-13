
#include <GL/glut.h>
#include <stdlib.h>


void init(void){
  glClearColor(1.0, 1.0, 1.0, 1.0);
  glOrtho (0, 256, 0, 256, -1 ,1);
}

void display(void){
  int i;
  glClear(GL_COLOR_BUFFER_BIT);

  // Quadrado vermelho
  glColor3f (1.0, 0.0, 0.0);
  glBegin(GL_QUADS);
  glVertex2i(50,100);
  glVertex2i(100,100);
  glVertex2i(100,50);
  glVertex2i(50,50);
  glEnd();

  // Triângulo verde
  glColor3f (0.0, 1.0, 0.0);
  glBegin(GL_TRIANGLES);
  glVertex2i(75,75);
  glVertex2i(100,125);
  glVertex2i(125,75);
  glEnd();

  // Retângulo azul
  glColor3f (0.0, 0.0, 1.0);
  glBegin(GL_QUADS);
  glVertex2i(100,100);
  glVertex2i(100,120);
  glVertex2i(150,120);
  glVertex2i(150,100);
  glEnd();

  // Losango céu
  glColor3f (0.0, 1.0, 1.0);
  glBegin(GL_QUADS);
  glVertex2i(125,110);
  glVertex2i(100,150);
  glVertex2i(125,190);
  glVertex2i(150,150);
  glEnd();

  glFlush();
}

void keyboard(unsigned char key, int x, int y){
  switch (key) {
  case 27:
	exit(0);
	break;
  }
}


int main(int argc, char** argv){
  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize (256, 256);
  glutInitWindowPosition (100, 100);
  glutCreateWindow ("1ª Avaliação - Parte 02");
  init();
  glutDisplayFunc(display);
  glutKeyboardFunc(keyboard);
  glutMainLoop();
  return 0;
}
