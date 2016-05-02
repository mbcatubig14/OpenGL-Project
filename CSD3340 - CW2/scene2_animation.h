void scene2_man_idle() {
	if (man_slidex < 1000) {
		man_movex = 0; man_count = 0; manleg_count = 0; manarm_count = 0;
	}

	if (man_movex == 0) man_slidex += 0.5;//4

	if (man_count == 0) {
		manR_lost = 1; manL_lost = 0;
	}
	else {
		manR_lost = 0; manL_lost = 0;
	}
	glutPostRedisplay();
}


void scene2_manleftleg_idle() {

	if (manlegL_angle > 30)  manleg_angle_move = 0;
	if (manleg_angle_move == 0)  manlegL_angle -= 0.8;
	if (manlegL_angle < -30)  manleg_angle_move = 1;
	if (manleg_angle_move == 1)  manlegL_angle += 0.8;

	if (manleg_count == 0) {
		manR_leg_lost = 1; manL_leg_lost = 0;
	}
	else {
		manR_leg_lost = 0; manL_leg_lost = 0;
	}
	glutPostRedisplay();
}

void scene2_manrightleg_idle() {

	if (manlegR_angle > 30)  manleg_angle_move = 1;
	if (manleg_angle_move == 1)  manlegR_angle -= 0.8;
	if (manlegR_angle < -30)  manleg_angle_move = 0;
	if (manleg_angle_move == 0)  manlegR_angle += 0.8;

	if (manleg_count == 0) {
		manR_leg_lost = 1; manL_leg_lost = 0;
	}
	else {
		manR_leg_lost = 0; manL_leg_lost = 0;
	}
	glutPostRedisplay();
}

void scene2_manrightarm_idle() {
	if (manarmR_angle > 30) manarm_angle_move = 1;
	if (manarm_angle_move == 0) manarmR_angle += 0.8;
	if (manarmR_angle < -30) manarm_angle_move = 0;
	if (manarm_angle_move == 1) manarmR_angle -= 0.8;

	if (manarm_count == 0) { manR_arm_lost = 1; manL_arm_lost = 0; }
	else { manR_arm_lost = 0; manL_arm_lost = 0; } glutPostRedisplay();
}

void scene2_manleftarm_idle() {
	if (manarmL_angle > 30) manarm_angle_move = 0;
	if (manarm_angle_move == 0) manarmL_angle -= 0.8;
	if (manarmL_angle < -30) manarm_angle_move = 1;
	if (manarm_angle_move == 1) manarmL_angle += 0.8;

	if (manarm_count == 0) { manR_arm_lost = 1; manL_arm_lost = 0; }
	else { manR_arm_lost = 0; manL_arm_lost = 0; } glutPostRedisplay();
}

void scene2_man_animation() {
	//moving to the right
	glPushMatrix();
	if (man_count == 0)
		glTranslatef(man_slidex, man_slidey, 0);
	glTranslatef(-40, 155, 0);
	glScalef(0.4, 0.4, 1);
	glScalef(manR_lost, manR_lost, 0);
	man_body();
	man_head();
	glPopMatrix();
}

void scene2_manLleg_animation() {
	glPushMatrix();
	if (manleg_count == 0) {
		glTranslatef(man_slidex - 225, man_slidey + 40, 0);
		glTranslatef(310, 180, 0);
		glScalef(0.4, 0.4, 1);
		glRotatef(manlegL_angle, 0.0, 0.0, 1);
		glTranslatef(-310, -180, 0);
	}

	glScalef(manR_leg_lost, manR_leg_lost, 0);
	man_leftLeg();
	glPopMatrix();
}

void scene2_manRleg_animation() {
	glPushMatrix();
	if (manleg_count == 0) {
		glTranslatef(man_slidex - 220, man_slidey + 40, 0);
		glTranslatef(310, 180, 0);
		glScalef(0.4, 0.4, 1);
		glRotatef(manlegR_angle, 0, 0, 1);
		glTranslatef(-310, -180, 0);
	}
	glScalef(manR_leg_lost, manR_leg_lost, 0);
	man_rightLeg();
	glPopMatrix();
}

void scene2_manRarm_animation() {
	glPushMatrix();
	if (manarm_count == 0) {
		glTranslatef(man_slidex - 208, man_slidey - 10, 0);
		glTranslatef(280, 270, 0);
		glScalef(0.4, 0.4, 1);
		glRotatef(manarmR_angle, 0, 0, 1);
		glTranslatef(-280, -270, 0);
	}
	glScalef(manR_arm_lost, manR_arm_lost, 0);
	man_rightArm();
	glPopMatrix();
}

void scene2_manLarm_animation() {
	glPushMatrix();
	if (manarm_count == 0) {
		glTranslatef(man_slidex -208, man_slidey - 10, 0);
		glTranslatef(280, 270, 0);
		glScalef(0.4, 0.4, 1);
		glRotatef(manarmL_angle, 0, 0, 1);
		glTranslatef(-280, -270, 0);
	}
	glScalef(manR_arm_lost, manR_arm_lost, 0);
	man_leftArm();
	glPopMatrix();
}


void scene2_idle() {
	scene2_man_idle();
	scene2_manleftarm_idle();
	scene2_manrightarm_idle();
	scene2_manrightleg_idle();
	scene2_manleftleg_idle();
}

void scene2_animation() {

	scene2_manLarm_animation();
	scene2_manLleg_animation();
	scene2_manRleg_animation();
	scene2_man_animation();
	scene2_manRarm_animation();


}