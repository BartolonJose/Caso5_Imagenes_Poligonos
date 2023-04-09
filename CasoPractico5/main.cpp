#include<gl/glut.h>
void IniciarConfiguracion() {
	glClearColor(1, 1, 1, 1);
	glColor3f(0.0, 0.0, 1.0);
	glLineWidth(3.0);
	glOrtho(0, 800, 0, 600, 1, -1);
}

void DibujarTriangulos() {
	glClear(GL_COLOR_BUFFER_BIT);


	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2i(0, 350);
	glVertex2i(70, 348);
	glVertex2i(77, 334);	
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(78, 350);
	glVertex2i(148, 347);
	glVertex2i(86, 335);	
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(87, 326);
	glVertex2i(155, 342);
	glVertex2i(125, 263);	
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(165, 340);
	glVertex2i(135, 260);
	glVertex2i(242, 293);	
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(138, 248);
	glVertex2i(245, 283);
	glVertex2i(255, 116);	
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(254, 285);
	glVertex2i(265, 113);
	glVertex2i(346, 188);	
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(263, 290);
	glVertex2i(528, 400);
	glVertex2i(350, 200);	
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(273, 107);
	glVertex2i(351, 181);
	glVertex2i(350, 100);	
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(362, 185);
	glVertex2i(358, 95);
	glVertex2i(425, 76);	
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(370, 185);
	glVertex2i(434, 77);
	glVertex2i(534, 77);	
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(363, 84);
	glVertex2i(425, 66);
	glVertex2i(431, 12);	
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(433, 67);
	glVertex2i(540, 68);
	glVertex2i(441, 2);	
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(275, 96);
	glVertex2i(348, 89);
	glVertex2i(300, 41);	
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(279, 54);
	glVertex2i(261, 28);
	glVertex2i(292, 33);	
	glEnd();
	
	glFlush();
}

int main(int argc, char* args[]) {
	glutInit(&argc, args);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Demo Gallo");
	glutDisplayFunc(DibujarTriangulos);
	IniciarConfiguracion();
	glutMainLoop();
	return 0;
}
