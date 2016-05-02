void scene4_sun_idle()
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

void scene4_sun_animation()
{
	glPushMatrix();
	glTranslatef(370 * (1 - scale_sunx), 420 * (1 - scale_suny), 0.0);
	glScalef(scale_sunx, scale_suny, 1.0);
	sun();
	glPopMatrix();
}//end 

void scene4_cloudL_idle() {

	if (slide_cloudL < 1000) { move_cloud = 0; }
	if (move_cloud == 0) { slide_cloudL += 0.05; }
	glutPostRedisplay();
}

void scene4_cloudR_idle() {
	if (slide_cloudR > 0) { move_cloud = 0; }
	if (move_cloud == 0) { slide_cloudR -= 0.05; }
	glutPostRedisplay();
}

void scene4_cloudL_animation() {
	glPushMatrix();
	glTranslatef(slide_cloudL, 0, 0);
	cloudLeft();
	glPopMatrix();
}
void scene4_cloudR_animation() {
	glPushMatrix();
	glTranslatef(slide_cloudR, 0, 0);
	cloudRight();
	glPopMatrix();
}

void scene4_dino_idle() {
	//idle
	if (dinoRight_slidey4 > 0) dinoRight_movey4 = 1;
	if (dinoRight_movey4 == 1) dinoRight_slidey4 -= 0.5;//1
	if (dinoRight_slidey4 < -20) dinoRight_movey4 = 0;
	if (dinoRight_movey4 == 0) dinoRight_slidey4 += 0.5;//1

	if (dinoRight_slidex4 < 1000) {
		dinoRight_movex4 = 1;dinoRight_count4 = 2; dinoRightleg_count4 = 2;
	}

	if (dinoRight_movex4 == 1) dinoRight_slidex4 -= 1;//4

	if (dinoRight_count4 == 2) {
		dinoRRight_lost4 = 0; dinoLRight_lost4 = 1;
	}
	else {
		dinoRRight_lost4 = 0; dinoLRight_lost4 = 0;
	}
	glutPostRedisplay();
}

void scene4_dinoLleg_idle() {

	if (dinolegRightL_angle4 > 30)  dinoRightleg_angle_move4 = 0;
	if (dinoRightleg_angle_move4 == 0)  dinolegRightL_angle4 -= 0.8;
	if (dinolegRightL_angle4 < -30)  dinoRightleg_angle_move4 = 1;
	if (dinoRightleg_angle_move4 == 1)  dinolegRightL_angle4 += 0.8;

	if (dinoRightleg_count4 == 2) {
		dinoRightR_leg_lost4 = 0; dinoRightL_leg_lost4 = 1;
	}
	else {
		dinoRightR_leg_lost4 = 0; dinoRightL_leg_lost4 = 0;
	}
	glutPostRedisplay();
}

void scene4_dinoRleg_idle() {

	if (dinolegRightR_angle4 > 30)  dinoRightleg_angle_move4 = 1;
	if (dinoRightleg_angle_move4 == 0)  dinolegRightR_angle4 += 0.8;
	if (dinolegRightR_angle4 < -30)  dinoRightleg_angle_move4 = 0;
	if (dinoRightleg_angle_move4 == 1)  dinolegRightR_angle4 -= 0.8;

	if (dinoRightleg_count4 == 2) {
		dinoRightR_leg_lost4 = 0; dinoRightL_leg_lost4 = 1;
	}
	else {
		dinoRightR_leg_lost4 = 0; dinoRightL_leg_lost4 = 0;
	}
	glutPostRedisplay();
}

void scene4_dino_animation() {
	//moving to the right
	glPushMatrix();
	if (dinoRight_count4 == 2)
		glTranslatef(dinoRight_slidex4 + 1500, dinoRight_slidey4 - 50, 0);
	glTranslatef(-500, 125, 0);
	glScalef(1.0, 1.0, 1);

	glScalef(dinoLRight_lost4, dinoLRight_lost4, 0);
	dinoRight_Tail();
	dinoRight_RightArm();
	dinoRight_Body();
	dinoRight_HeadAndNeck();
	dinoRight_LeftArm();

	glPopMatrix();
}

void scene4_dinoLleg_animation() {
	glPushMatrix();
	if (dinoRightleg_count4 == 2) {
		glTranslatef(dinoRight_slidex4 + 1000, dinoRight_slidey4 + 80, 0);
		glTranslatef(-210, 260, 0);
		glScalef(1.0, 1.0, 1);
		glRotatef(dinolegRightL_angle4, 0, 0, 1);
		glTranslatef(210, -260, 0);
	}
	glScalef(dinoRightL_leg_lost4, dinoRightL_leg_lost4, 0);
	dinoRight_LegLeft();
	glPopMatrix();
}

void scene4_dinoRleg_animation() {
	glPushMatrix();
	if (dinoRightleg_count4 == 2) {
		glTranslatef(dinoRight_slidex4 + 1000, dinoRight_slidey4 + 80, 0);
		glTranslatef(-210, 260, 0);
		glScalef(1.0, 1.0, 1);
		glRotatef(dinolegRightR_angle4, 0, 0, 1);
		glTranslatef(210, -260, 0);
	}
	glScalef(dinoRightL_leg_lost4, dinoRightL_leg_lost4, 0);
	dinoRight_LegRight();
	glPopMatrix();
}

void scene4_man_idle() {


	if (manRight_slidex4 < 1000) {
		manRight_movex4 = 0; manRight_count4 = 2; manRightLeg_count4 = 2; manRightarm_count4 = 2;
	}

	if (manRight_movex4 == 0) manRight_slidex4 += 0.5;//4

	if (manRight_count4 == 2) {
		manRightR_lost4 = 1; manRightL_lost4 = 0;
	}
	else {
		manRightR_lost4 = 0; manRightL_lost4 = 0;
	}
	glutPostRedisplay();
}


void scene4_manleftleg_idle() {

	if (manRightLegL_angle4 > 30)  manRightLeg_angle_move4 = 0;
	if (manRightLeg_angle_move4 == 0)  manRightLegL_angle4 -= 0.8;
	if (manRightLegL_angle4 < -30)  manRightLeg_angle_move4 = 1;
	if (manRightLeg_angle_move4 == 1)  manRightLegL_angle4 += 0.8;

	if (manRightLeg_count4 == 2) {
		manRightR_leg_lost4 = 1; manRightL_leg_lost4 = 0;
	}
	else {
		manRightR_leg_lost4 = 0; manRightL_leg_lost4 = 0;
	}
	glutPostRedisplay();
}

void scene4_manrightleg_idle() {

	if (manRightLegR_angle4 > 30)  manRightLeg_angle_move4 = 1;
	if (manRightLeg_angle_move4 == 1)  manRightLegR_angle4 -= 0.8;
	if (manRightLegR_angle4 < -30)  manRightLeg_angle_move4 = 0;
	if (manRightLeg_angle_move4 == 0)  manRightLegR_angle4 += 0.8;

	if (manRightLeg_count4 == 2) {
		manRightR_leg_lost4 = 1; manRightL_leg_lost4 = 0;
	}
	else {
		manRightR_leg_lost4 = 0; manRightL_leg_lost4 = 0;
	}
	glutPostRedisplay();
}

void scene4_manrightarm_idle() {
	if (manRightarmR_angle4 > 30) manRightarm_angle_move4 = 1;
	if (manRightarm_angle_move4 == 0) manRightarmR_angle4 += 0.8;
	if (manRightarmR_angle4 < -30) manRightarm_angle_move4 = 0;
	if (manRightarm_angle_move4 == 1) manRightarmR_angle4 -= 0.8;

	if (manRightarm_count4 == 2) { manRightR_arm_lost4 = 1; manRightL_arm_lost4 = 0; }
	else { manRightR_arm_lost4 = 0; manRightL_arm_lost4 = 0; } glutPostRedisplay();
}

void scene4_manleftarm_idle() {
	if (manRightarmL_angle4 > 30) manRightarm_angle_move4 = 0;
	if (manRightarm_angle_move4 == 0) manRightarmL_angle4 -= 0.8;
	if (manRightarmL_angle4 < -30) manRightarm_angle_move4 = 1;
	if (manRightarm_angle_move4 == 1) manRightarmL_angle4 += 0.8;

	if (manRightarm_count4 ==2) { manRightR_arm_lost4 = 1; manRightL_arm_lost4 = 0; }
	else { manRightR_arm_lost4 = 0; manRightL_arm_lost4 = 0; } glutPostRedisplay();
}

void scene4_man_animation() {
	//moving to the right
	glPushMatrix();
	if (manRight_count4 == 2)
		glTranslatef(manRight_slidex4, manRight_slidey4, 0);
	glTranslatef(-140, 165, 0);
	glScalef(0.4, 0.4, 1);
	glScalef(manRightR_lost4, manRightR_lost4, 0);
	man_body();
	man_head();
	glPopMatrix();
}

void scene4_manLleg_animation() {
	glPushMatrix();
	if (manRightLeg_count4 == 2) {
		glTranslatef(manRight_slidex4 - 320, manRight_slidey4 + 55, 0);
		glTranslatef(300, 170, 0);
		glScalef(0.4, 0.4, 1);
		glRotatef(manRightLegL_angle4, 0.0, 0.0, 1);
		glTranslatef(-300, -170, 0);
	}
	glScalef(manRightR_leg_lost4, manRightR_leg_lost4, 0);
	man_leftLeg();
	glPopMatrix();
}

void scene4_manRleg_animation() {
	glPushMatrix();
	if (manRightLeg_count4 == 2) {
		glTranslatef(manRight_slidex4 - 315, manRight_slidey4 + 55, 0);
		glTranslatef(300, 170, 0);
		glScalef(0.4, 0.4, 1);
		glRotatef(manRightLegR_angle4, 0, 0, 1);
		glTranslatef(-300, -170, 0);
	}
	glScalef(manRightR_leg_lost4, manRightR_leg_lost4, 0);
	man_rightLeg();
	glPopMatrix();
}

void scene4_manRarm_animation() {
	glPushMatrix();
	if (manRightarm_count4 == 2) {
		glTranslatef(manRight_slidex4 - 110, manRight_slidey4, 0);
		glTranslatef(-200, 0, 0);
		glTranslatef(280, 270, 0);
		glScalef(0.4, 0.4, 1);
		glRotatef(manRightarmR_angle4, 0, 0, 1);
		glTranslatef(-280, -270, 0);
	}
	glScalef(manRightR_arm_lost4, manRightR_arm_lost4, 0);
	man_rightArm();
	glPopMatrix();
}

void scene4_manLarm_animation() {
	glPushMatrix();
	if (manRightarm_count4 == 2) {
		glTranslatef(manRight_slidex4 - 110, manRight_slidey4, 0);
		glTranslatef(-200, 0, 0);
		glTranslatef(280, 270, 0);
		glScalef(0.4, 0.4, 1);
		glRotatef(manRightarmL_angle4, 0, 0, 1);
		glTranslatef(-280, -270, 0);
	}
	glScalef(manRightR_arm_lost4, manRightR_arm_lost4, 0);
	man_leftArm();
	glPopMatrix();
}

void scene4_idle() {
	scene4_sun_idle();
	scene4_cloudL_idle();
	scene4_cloudR_idle();
	scene4_dino_idle();
	scene4_dinoRleg_idle();
	scene4_dinoLleg_idle();
	scene4_man_idle();
	scene4_manleftarm_idle();
	scene4_manrightarm_idle();
	scene4_manrightleg_idle();
	scene4_manleftleg_idle();
}

void scene4_animation() {
	scene4_sun_animation();
	scene4_cloudL_animation();
	scene4_cloudR_animation();
	scene4_dinoRleg_animation();
	scene4_dino_animation();
	scene4_dinoLleg_animation();
	scene4_manLarm_animation();
	scene4_manLleg_animation();
	scene4_manRleg_animation();
	scene4_man_animation();
	scene4_manRarm_animation();

}
