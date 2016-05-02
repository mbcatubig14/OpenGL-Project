void scene3_sun_idle()
{
	if (scale_sunx > 0.8 && scale_suny > 0.8) {
		sun_count = 0;
	}
	if (sun_count == 0) {
		scale_sunx *= 0.99; scale_suny *= 0.99;
		if (scale_sunx == 0.8 && scale_suny == 0.8) {
			sun_count = 1;
		}
	}
	if (scale_sunx < 1 && scale_suny < 1) {
		sun_count = 1;
	}
	if (sun_count == 1) {
		scale_sunx *= 1.01; scale_suny *= 1.01;
		if (scale_sunx == 1.01 && scale_suny == 1.01) {
			sun_count = 0;
		}
	}
	glutPostRedisplay();
}//end sunidle

void scene3_sun_animation()
{
	glPushMatrix();
	glTranslatef(370 * (1 - scale_sunx), 420 * (1 - scale_suny), 0.0);
	glScalef(scale_sunx, scale_suny, 1.0);
	sun();
	glPopMatrix();
}//end 

void scene3_cloudL_idle() {

	if (slide_cloudL < 1000) { move_cloud = 0; }
	if (move_cloud == 0) { slide_cloudL += 0.05; }
	glutPostRedisplay();
}

void scene3_cloudR_idle() {
	if (slide_cloudR > 0) { move_cloud = 0; }
	if (move_cloud == 0) { slide_cloudR -= 0.05; }
	glutPostRedisplay();
}

void scene3_cloudL_animation() {
	glPushMatrix();
	glTranslatef(slide_cloudL, 0, 0);
	cloudLeft();
	glPopMatrix();
}
void scene3_cloudR_animation() {
	glPushMatrix();
	glTranslatef(slide_cloudR, 0, 0);
	cloudRight();
	glPopMatrix();
}

void scene3_dino_idle() {
	//idle
	if (dinoRight_slidey > 0) dinoRight_movey = 1;
	if (dinoRight_movey == 1) dinoRight_slidey -= 0.5;//1
	if (dinoRight_slidey < -20) dinoRight_movey = 0;
	if (dinoRight_movey == 0) dinoRight_slidey += 0.5;//1

	if (dinoRight_slidex < 1000) {
		dinoRight_movex = 1;dinoRight_count = 1; dinoRightleg_count = 1;
	}
	

	if (dinoRight_movex == 1) dinoRight_slidex -= 0.8;//4
	

	if (dinoRight_count == 1) {
		dinoRRight_lost = 1; dinoLRight_lost = 0;
	}
	else {
		dinoRRight_lost = 0; dinoLRight_lost = 0;
	}
	glutPostRedisplay();
}

void scene3_dinoLleg_idle() {

	if (dinolegRightL_angle > 30)  dinoRightleg_angle_move = 0;
	if (dinoRightleg_angle_move == 0)  dinolegRightL_angle -= 0.8;
	if (dinolegRightL_angle < -30)  dinoRightleg_angle_move = 1;
	if (dinoRightleg_angle_move == 1)  dinolegRightL_angle += 0.8;

	if (dinoRightleg_count == 1) {
		dinoRightR_leg_lost = 1; dinoRightL_leg_lost = 0;
	}
	else {
		dinoRightR_leg_lost = 0; dinoRightL_leg_lost = 0;
	}
	glutPostRedisplay();
}

void scene3_dinoRleg_idle() {

	if (dinolegRightR_angle > 30)  dinoRightleg_angle_move = 1;
	if (dinoRightleg_angle_move == 0)  dinolegRightR_angle += 0.8;
	if (dinolegRightR_angle < -30)  dinoRightleg_angle_move = 0;
	if (dinoRightleg_angle_move == 1)  dinolegRightR_angle -= 0.8;

	if (dinoRightleg_count == 1) {
		dinoRightR_leg_lost = 1; dinoRightL_leg_lost = 0;
	}
	else {
		dinoRightR_leg_lost = 0; dinoRightL_leg_lost = 0;
	}
	glutPostRedisplay();
}

void scene3_dino_animation() {
	//moving to the right
	glPushMatrix();
	if (dinoRight_count == 1)
		glTranslatef(dinoRight_slidex + 1600, dinoRight_slidey, 0);
	glTranslatef(-500, 125, 0);
	glScalef(0.7, 0.7, 1);

	glScalef(dinoRRight_lost, dinoRRight_lost, 0);
	dinoRight_Tail();
	dinoRight_RightArm();
	dinoRight_Body();
	dinoRight_HeadAndNeck();
	dinoRight_LeftArm();

	glPopMatrix();
}

void scene3_dinoLleg_animation() {
	glPushMatrix();
	if (dinoRightleg_count == 1) {
		glTranslatef(dinoRight_slidex + 1160, dinoRight_slidey + 40, 0);
		glTranslatef(-210, 260, 0);
		glScalef(0.7, 0.7, 1);
		glRotatef(dinolegRightL_angle, 0, 0, 1);
		glTranslatef(210, -260, 0);
	}
	glScalef(dinoRightR_leg_lost, dinoRightR_leg_lost, 0);
	dinoRight_LegLeft();
	glPopMatrix();
}

void scene3_dinoRleg_animation() {
	glPushMatrix();
	if (dinoRightleg_count == 1) {
		glTranslatef(dinoRight_slidex + 1160, dinoRight_slidey + 40, 0);
		glTranslatef(-210, 260, 0);
		glScalef(0.7, 0.7, 1);
		glRotatef(dinolegRightR_angle, 0, 0, 1);
		glTranslatef(210, -260, 0);
	}
	glScalef(dinoRightR_leg_lost, dinoRightR_leg_lost, 0);
	dinoRight_LegRight();
	glPopMatrix();
}

void scene3_man_idle() {
	
	if (manRight_slidex < 1000) {
		manRight_movex = 0; manRight_count = 1; manRightLeg_count = 1; manRightarm_count = 1;
	}

	if (manRight_movex == 0) manRight_slidex += 0.5;//4

	if (manRight_count == 1) {
		manRightR_lost = 0; manRightL_lost = 1;
	}
	else {
		manRightR_lost = 0; manRightL_lost = 0;
	}
	glutPostRedisplay();
}


void scene3_manleftleg_idle() {

	if (manRightLegL_angle > 30)  manRightLeg_angle_move = 0;
	if (manRightLeg_angle_move == 0)  manRightLegL_angle -= 0.8;
	if (manRightLegL_angle < -30)  manRightLeg_angle_move = 1;
	if (manRightLeg_angle_move == 1)  manRightLegL_angle += 0.8;

	if (manRightLeg_count == 1) {
		manRightR_leg_lost = 0; manRightL_leg_lost = 1;
	}
	else {
		manRightR_leg_lost = 0; manRightL_leg_lost = 0;
	}
	glutPostRedisplay();
}

void scene3_manrightleg_idle() {

	if (manRightLegR_angle > 30)  manRightLeg_angle_move = 1;
	if (manRightLeg_angle_move == 1)  manRightLegR_angle -= 0.8;
	if (manRightLegR_angle < -30)  manRightLeg_angle_move = 0;
	if (manRightLeg_angle_move == 0)  manRightLegR_angle += 0.8;

	if (manRightLeg_count == 1) {
		manRightR_leg_lost = 0; manRightL_leg_lost = 1;
	}
	else {
		manRightR_leg_lost = 0; manRightL_leg_lost = 0;
	}
	glutPostRedisplay();
}

void scene3_manrightarm_idle() {
	if (manRightarmR_angle > 30) manRightarm_angle_move = 1;
	if (manRightarm_angle_move == 0) manRightarmR_angle += 0.8;
	if (manRightarmR_angle < -30) manRightarm_angle_move = 0;
	if (manRightarm_angle_move == 1) manRightarmR_angle -= 0.8;

	if (manRightarm_count == 1) { manRightR_arm_lost = 0; manRightL_arm_lost = 1; }
	else { manRightR_arm_lost = 0; manRightL_arm_lost = 0; } glutPostRedisplay();
}

void scene3_manleftarm_idle() {
	if (manRightarmL_angle > 30) manRightarm_angle_move = 0;
	if (manRightarm_angle_move == 0) manRightarmL_angle -= 0.8;
	if (manRightarmL_angle < -30) manRightarm_angle_move = 1;
	if (manRightarm_angle_move == 1) manRightarmL_angle += 0.8;

	if (manRightarm_count == 1) { manRightR_arm_lost = 0; manRightL_arm_lost = 1; }
	else { manRightR_arm_lost = 0; manRightL_arm_lost = 0; } glutPostRedisplay();
}

void scene3_man_animation() {
	//moving to the right
	glPushMatrix();
	if (manRight_count == 1)
		glTranslatef(manRight_slidex, manRight_slidey, 0);
	glTranslatef(-210, 200, 0);
	glScalef(0.3, 0.3, 1);
	glScalef(manRightL_lost, manRightL_lost, 0);
	man_body();
	man_head();
	glPopMatrix();
}

void scene3_manLleg_animation() {
	glPushMatrix();
	if (manRightLeg_count == 1) {
		glTranslatef(manRight_slidex - 420, manRight_slidey + 75, 0);
		glTranslatef(300, 170, 0);
		glScalef(0.3, 0.3, 1);
		glRotatef(manRightLegL_angle, 0.0, 0.0, 1);
		glTranslatef(-300, -170, 0);
	}
	glScalef(manRightL_leg_lost, manRightL_leg_lost, 0);
	man_leftLeg();
	glPopMatrix();
}

void scene3_manRleg_animation() {
	glPushMatrix();
	if (manRightLeg_count == 1) {
		glTranslatef(manRight_slidex - 420, manRight_slidey + 75, 0);
		glTranslatef(300, 170, 0);
		glScalef(0.3, 0.3, 1);
		glRotatef(manRightLegR_angle, 0, 0, 1);
		glTranslatef(-300, -170, 0);
	}
	glScalef(manRightL_leg_lost, manRightL_leg_lost, 0);
	man_rightLeg();
	glPopMatrix();
}

void scene3_manRarm_animation() {
	glPushMatrix();
	if (manRightarm_count == 1) {
		glTranslatef(manRight_slidex - 405, manRight_slidey + 5, 0);
		glTranslatef(280, 270, 0);
		glScalef(0.3, 0.3, 1);
		glRotatef(manRightarmR_angle, 0, 0, 1);
		glTranslatef(-280, -270, 0);
	}
	glScalef(manRightL_arm_lost, manRightL_arm_lost, 0);
	man_rightArm();
	glPopMatrix();
}

void scene3_manLarm_animation() {
	glPushMatrix();
	if (manRightarm_count == 1) {
		glTranslatef(manRight_slidex - 405, manRight_slidey + 5, 0);
		glTranslatef(280, 270, 0);
		glScalef(0.3, 0.3, 1);
		glRotatef(manRightarmL_angle, 0, 0, 1);
		glTranslatef(-280, -270, 0);
	}
	glScalef(manRightL_arm_lost, manRightL_arm_lost, 0);
	man_leftArm();
	glPopMatrix();
}

void scene3_idle() {
	scene3_sun_idle();
	scene3_cloudL_idle();
	scene3_cloudR_idle();
	scene3_dino_idle();
	scene3_dinoRleg_idle();
	scene3_dinoLleg_idle();
	scene3_man_idle();
	scene3_manleftarm_idle();
	scene3_manrightarm_idle();
	scene3_manrightleg_idle();
	scene3_manleftleg_idle();
}

void scene3_animation() {
	glViewport(200, 200, 1000, 500);
	scene3_sun_animation();
	scene3_cloudL_animation();
	scene3_cloudR_animation();
	glViewport(0,0,1300,800);
	scene3_dinoRleg_animation();
	scene3_dino_animation();
	scene3_dinoLleg_animation();
	scene3_manLarm_animation();
	scene3_manLleg_animation();
	scene3_manRleg_animation();
	scene3_man_animation();
	scene3_manRarm_animation();
	
}
