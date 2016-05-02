void leftpane() {
	glColor3f(1.000, 0.843, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(0, 100);
	glVertex2i(0, 400);
	glVertex2i(300, 400);
	glVertex2i(300, 100);
	glEnd();
}

void rightpane() {
	glColor3f(1.000, 0.843, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(300, 100);
	glVertex2i(300, 400);
	glVertex2i(750, 400);
	glVertex2i(750, 100);
	glEnd();
}


void middivider() {
	glColor3f(1.000, 1.000, 1.000);
	glBegin(GL_QUADS);
	glVertex2i(290, 100);
	glVertex2i(290, 400);
	glVertex2i(310, 400);
	glVertex2i(310, 100);
	glEnd();
}


void scene5() {
	leftpane();
	rightpane();
	middivider();
}
