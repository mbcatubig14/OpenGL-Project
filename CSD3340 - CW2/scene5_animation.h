void scene5_dinoIdle() {
	if ((dinoScalex < 2.0 && dinoScaley < 2.0)) {
		moveScaleDino = 1; scaleDinoCount = 1;
	}
	if (moveScaleDino == 1) {
		dinoScalex *= 1.01;
		dinoScaley *= 1.01;
		testPrint(dinoScalex, dinoScaley);
	}
	if (dinoScalex > 2.0 && dinoScaley > 2.0) {
		scaleDinoCount = 0;
	}

	if (scaleDinoCount == 1) {
		moveScaleDinoLost = 1;
	}
	else {
		moveScaleDinoLost = 0;
	}
	glutPostRedisplay();
}

void scene5_manIdle() {
	if ((manScalex < 2.0 && manScaley < 2.0)) {
		moveScaleMan = 1; scaleManCount = 1;
	}
	if (moveScaleMan == 1) {
		manScalex *= 1.01;
		manScaley *= 1.01;
		testPrint(manScalex, manScaley);
	}
	if (manScalex > 2.0 && manScaley > 2.0) {
		scaleManCount = 0;
	}

	if (scaleManCount == 1) {
		moveScaleManLost = 1;
	}
	else {
		moveScaleManLost = 0;
	}
	glutPostRedisplay();
}

void scene5_dinoAnimation() {
	
	glPushMatrix();
	if (scaleDinoCount == 1) {
		glTranslatef(-200, -150, 0.0);
		glTranslatef(700 * (1 - dinoScalex), 360 * (1 - dinoScaley), 0.0);
		glScalef(dinoScalex, dinoScaley, 1.0);
		dinoRight();
	}
	glScalef(moveScaleDinoLost, moveScaleDinoLost, 0);
	glPopMatrix();

	glPushMatrix();
	if (scaleDinoCount == 0) {
		glTranslatef(-200, -150, 0.0);
		glTranslatef(700 * (1 - 2.0), 360 * (1 - 2.0), 0.0);
		glScalef(2.0, 2.0, 1.0);
		dinoRight();
	}
	glScalef(moveScaleDinoLost, moveScaleDinoLost, 0);
	glPopMatrix();
}

void scene5_manAnimation() {

	glPushMatrix();
	if (scaleManCount == 1) {
		glTranslatef(-200, -150, 0.0);
		glTranslatef(300 * (1 - manScalex), 160 * (1 - manScaley), 0.0);
		glScalef(manScalex, manScaley, 1.0);
		human();
	}
	glScalef(moveScaleManLost, moveScaleManLost, 0);
	glPopMatrix();

	glPushMatrix();
	if (scaleManCount == 0) {
		glTranslatef(-200, -150, 0.0);
		glTranslatef(300 * (1 - 2.0), 160 * (1 - 2.0), 0.0);
		glScalef(2.0, 2.0, 1.0);
		human();
	}
	glScalef(moveScaleManLost, moveScaleManLost, 0);
	glPopMatrix();
}

void scene5_idle() {
	scene5_dinoIdle();
	scene5_manIdle();
}
void scene5_animation() {
	
	scene5_dinoAnimation();
	scene5_manAnimation();
}