void desertsky() {
	glColor3f(1.000, 0.843, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(0, 300);
	glVertex2i(0, 500);
	glVertex2i(750, 500);
	glVertex2i(750, 300);
	glEnd();
}

void desertground() {
	glColor3f(0.929, 0.788, 0.686);
	glBegin(GL_QUADS);
	glVertex2i(0, 300);
	glVertex2i(0, 100);
	glVertex2i(750, 100);
	glVertex2i(750, 300);
	glEnd();
}

void river() {
	glColor3f(0.690, 0.878, 0.902);
	glBegin(GL_QUADS);
	glVertex2i(0, 0);
	glVertex2i(0, 100);
	glVertex2i(750, 100);
	glVertex2i(750, 0);
	glEnd();
}

void scene3() {
	desertsky();
	desertground();
	river();
	glViewport(-1000, 0, 1300,800);
	scene2();
	glViewport(1000, 0, 1300, 800);
	scene1();
}
