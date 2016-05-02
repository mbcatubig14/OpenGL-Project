void ending_dino_idle() {
	//idle
	if (dino_slidey5 > 0) dino_movey5 = 1;
	if (dino_movey5 == 1) dino_slidey5 -= 0.5;//1
	if (dino_slidey5 < -20) dino_movey5 = 0;
	if (dino_movey5 == 0) dino_slidey5 += 0.5;//1

	if (dino_slidex5 < 1000) { dino_movex5 = 0; dino_count5 = 0; dinoleg_count5 = 0; }
	//if (dino_movex5 == 1) dino_slidex5 -= 1;//4
	//if (dino_slidex5 < -1600) dino_movex5 = 0;
	if (dino_movex5 == 0) dino_slidex5 += 0.5;//4

	if (dino_count5 == 0) {
		dinoR_lost5 = 1; dinoL_lost5 = 0;
	}
	else {
		dinoR_lost5 = 0; dinoL_lost5 = 0;
	}
	glutPostRedisplay();
}



void ending_dinoLleg_idle() {

	if (dinolegL_angle5 > 30)  dinoleg_angle_move5 = 0;
	if (dinoleg_angle_move5 == 0)  dinolegL_angle5 -= 0.8;
	if (dinolegL_angle5 < -30)  dinoleg_angle_move5 = 1;
	if (dinoleg_angle_move5 == 1)  dinolegL_angle5 += 0.8;

	if (dinoleg_count5 == 0) {
		dinoR_leg_lost5 = 1; dinoL_leg_lost5 = 0;
	}
	else {
		dinoR_leg_lost5 = 0; dinoL_leg_lost5 = 0;
	}
	glutPostRedisplay();
}

void ending_dinoRleg_idle() {

	if (dinolegR_angle5 > 30)  dinoleg_angle_move5 = 1;
	if (dinoleg_angle_move5 == 0)  dinolegR_angle5 += 0.8;
	if (dinolegR_angle5 < -30)  dinoleg_angle_move5 = 0;
	if (dinoleg_angle_move5 == 1)  dinolegR_angle5 -= 0.8;

	if (dinoleg_count5 == 0) {
		dinoR_leg_lost5 = 1; dinoL_leg_lost5 = 0;
	}
	else {
		dinoR_leg_lost5 = 0; dinoL_leg_lost5 = 0;
	}
	glutPostRedisplay();
}

void ending_dino_animation() {
	//moving to the right
	glPushMatrix();
	if (dino_count5 == 0)
		glTranslatef(dino_slidex5, dino_slidey5, 0);
	glTranslatef(0, 125, 0);
	glScalef(0.6, 0.6, 1);

	glScalef(dinoR_lost5, dinoR_lost5, 0);
	dinoLeft_Tail();
	dinoLeft_RightArm();
	dinoLeft_Body();
	dinoLeft_HeadAndNeck();
	dinoLeft_LeftArm();
	glPopMatrix();
}

void ending_dinoLleg_animation() {
	glPushMatrix();
	if (dinoleg_count5 == 0) {
		glTranslatef(dino_slidex5 - 80, dino_slidey5 + 10, 0);
		glTranslatef(200, 290, 0);
		glScalef(0.6, 0.6, 1);
		glRotatef(dinolegL_angle5, 0, 0, 1);
		glTranslatef(-200, -290, 0);
	}
	//pupil

	glScalef(dinoR_leg_lost5, dinoR_leg_lost5, 0);
	dinoLeft_LegLeft();
	glPopMatrix();
}

void ending_dinoRleg_animation() {
	glPushMatrix();
	if (dinoleg_count5 == 0) {
		glTranslatef(dino_slidex5 - 80, dino_slidey5 + 10, 0);
		glTranslatef(200, 290, 0);
		glScalef(0.6, 0.6, 1);
		glRotatef(dinolegR_angle5, 0, 0, 1);
		glTranslatef(-200, -290, 0);
	}
	glScalef(dinoR_leg_lost5, dinoR_leg_lost5, 0);
	dinoLeft_LegRight();
	glPopMatrix();
}

void ending_idle() {
	ending_dino_idle();
	ending_dinoRleg_idle();
	ending_dinoLleg_idle();
}

void ending_animation() {
	ending_dinoRleg_animation();
	ending_dino_animation();
	ending_dinoLleg_animation();
}