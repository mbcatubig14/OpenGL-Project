void intro_idle() {
	if (fadex < 1000 ) {
		fademove = 0;
	}

	if (fademove == 0) {
		fadex += 20;
	}
}

void blackScreen() {
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_QUADS);
	glVertex2i(0,0);
	glVertex2i(0, 500);
	glVertex2i(750, 500);
	glVertex2i(750, 0);
	glEnd();
}

void intro_animation() {
	glPushMatrix();
	glTranslated(fadex,0,0);
	blackScreen();
	glPopMatrix();
}
