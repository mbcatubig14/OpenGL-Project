#include <stdlib.h>
#include <stdio.h>
#include "glut.h"
#include "globaldeclare.h"
#include "dino.h"
#include "man.h"
#include "manRight.h"
#include "dinoRight.h"
#include "intro.h"
#include "scene1.h"
#include "scene2.h"
#include "scene3.h"
#include "scene4.h"
#include "scene5.h"
#include "ending.h"
#include "intro_animation.h"
#include "scene1_animation.h"
#include "scene2_animation.h"
#include "scene3_animation.h"
#include "scene4_animation.h"
#include "scene5_animation.h"
#include "ending_animation.h"

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 600, 0, 500);
	glMatrixMode(GL_MODELVIEW);

}

void Timer(int value) {
	if (value)glutPostRedisplay();
	glutTimerFunc(300, Timer, value);
}

void renderSpacedBitmapString(float x, float y, void *font, char *string) {
	char *c;
	int x1 = x;
	for (c = string; *c != '\0'; c++) {
		glRasterPos2f(x1, y);
		glutBitmapCharacter(font, *c);
		x1 = x1 + glutBitmapWidth(font, *c);
	}
}

void animate() {
	if (scene_counter == 1)
		intro_animation();
	else if (scene_counter == 2)
		scene1_animation();
	else if (scene_counter == 3)
		scene2_animation();
	else if (scene_counter == 4)
		scene3_animation();
	else if (scene_counter == 5)
		scene4_animation();
	else if (scene_counter == 6)
		scene5_animation();
	else if (scene_counter == 7)
		ending_animation();
}

void scene_idle() {
	if (scene_counter == 1)
		intro_idle();
	if (scene_counter == 2)
		scene1_idle();
	if (scene_counter == 3)
		scene2_idle();
	if (scene_counter == 4)
		scene3_idle();
	if (scene_counter == 5)
		scene4_idle();
	if (scene_counter == 6)
		scene5_idle();
	if (scene_counter == 7)
		ending_idle();
}
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	////Animation happens here
	frame++;
	if (isRunning) {
		scene_idle();
	}

	printf("%d\n", frame);
	if (frame >= 0 && frame < 50) {
		scene_counter = 1;
	}else if (frame >= 50 && frame < 1000) { scene_counter = 2; }
	else if (frame >= 1000 && frame < 2000) { scene_counter = 3; }
	else if (frame >= 2000 && frame < 2700) { scene_counter = 4; }
	else if (frame >= 2700 && frame < 3100) { scene_counter = 5; }
	else if (frame >= 3100 && frame < 4000) { scene_counter = 6; }
	else if (frame >= 4000 && frame < 4700) { scene_counter = 7; }
	
	if (scene_counter == 1) {
		intro();
		renderSpacedBitmapString(150, 300, GLUT_BITMAP_HELVETICA_18, "MOVIE"); // Add text on the scene
		renderSpacedBitmapString(150, 130, GLUT_BITMAP_HELVETICA_18, "Created By:"); // Add text on the scene
		renderSpacedBitmapString(150, 110, GLUT_BITMAP_HELVETICA_18, "Muhammad Catubig"); // Add text on the scene
	}else if (scene_counter == 2) {
		scene1();
		glColor3f(0.0,0.0,0.0);
		renderSpacedBitmapString(50, 150, GLUT_BITMAP_HELVETICA_18, "A hungry T-rex looking for food in order to survive."); // Add text on the scene
		renderSpacedBitmapString(50, 130, GLUT_BITMAP_HELVETICA_18, "However, the very hungry t-rex cannot find any food nearby"); // Add text on the scene
		renderSpacedBitmapString(50, 110, GLUT_BITMAP_HELVETICA_18, "so he keep looking."); // Add text on the scene
	}
	else if (scene_counter ==3) {
		scene2();
		glViewport(0, 0, 1300, 800);
		glColor3f(0.0, 0.0, 0.0);
		renderSpacedBitmapString(50, 150, GLUT_BITMAP_HELVETICA_18, "He is Dave. A happy student and enjoy traveling by walk."); // Add text on the scene
		renderSpacedBitmapString(50, 130, GLUT_BITMAP_HELVETICA_18, "He is studying Computer Science in Middlesex University."); // Add text on the scene
		renderSpacedBitmapString(50, 110, GLUT_BITMAP_HELVETICA_18, "While he is enjoying the walk, he decided to go outside the city."); // Add text on the scene
	}
	else if (scene_counter == 4) {
		scene3();
		glViewport(0, 0, 1300, 800);
		glColor3f(0.0, 0.0, 0.0);
		renderSpacedBitmapString(150, 150, GLUT_BITMAP_HELVETICA_18, "Until Dave reached the desert..."); // Add text on the scene
	}
	else if (scene_counter == 5) {
		scene4();
		glViewport(0, 0, 1300, 800);
		glColor3f(0.0, 0.0, 0.0);
		renderSpacedBitmapString(50, 150, GLUT_BITMAP_HELVETICA_18, "he encounters a hungry t-rex coming closer to him and.."); // Add text on the scene
	}
	else
	if (scene_counter == 6) {
		scene5();
		glViewport(0,0,1300,800);
		glColor3f(1.0, 1.0, 1.0);
		renderSpacedBitmapString(50, 450, GLUT_BITMAP_HELVETICA_18, "at that moment, Dave was shock as he thought T-rex don't exist "); // Add text on the scene
		renderSpacedBitmapString(50, 430, GLUT_BITMAP_HELVETICA_18, "and the T-rex became very happy and craving to eat Dave."); // Add text on the scene
	}
	if (scene_counter == 7) {
		ending();
		glColor3f(1.0, 1.0, 1.0);
		renderSpacedBitmapString(100, 280, GLUT_BITMAP_HELVETICA_18, "Watch The Hungry T-Rex in full."); // Add text on the scene
		renderSpacedBitmapString(100, 250, GLUT_BITMAP_HELVETICA_18, "Coming in January 30th 2016."); // Add text on the scene
		renderSpacedBitmapString(100, 220, GLUT_BITMAP_HELVETICA_18, "Tickets are available in all cinemas."); // Add text on the scene
	}
	animate();
	if (frame > 4700 ) {
		frame = 0;
		isRunning = false;
	}
	glutSwapBuffers();
	glFlush();
}

void Visibility(GLint state) {
	switch (state) {
	case GLUT_VISIBLE:
		Timer(1);
		break;
	case GLUT_NOT_VISIBLE:
		Timer(0);
		break;
	default:
		break;
	}
}


int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1300, 800);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("The Hungry T-Rex the Movie Trailer");
	init();
	glutDisplayFunc(display);
	glutTimerFunc(0, Timer, 0);
	glutVisibilityFunc(Visibility);

	glutMainLoop();
	return 0;
}



