

void scene1_sun_idle()
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

void scene1_sun_animation()
{
	glPushMatrix();
	glTranslatef(370 * (1 - scale_sunx), 420 * (1 - scale_suny), 0.0);
	glScalef(scale_sunx, scale_suny, 1.0);
	sun();
	glPopMatrix();
}//end 

void scene1_cloudL_idle() {

	if (slide_cloudL < 1000) { move_cloud = 0; }
	if (move_cloud == 0) { slide_cloudL += 0.05; }
	glutPostRedisplay();
}

void scene1_cloudR_idle() {
	if (slide_cloudR > 0) { move_cloud = 0; }
	if (move_cloud == 0) { slide_cloudR -= 0.05; }
	glutPostRedisplay();
}

void scene1_cloudL_animation() {
	glPushMatrix();

		glTranslatef(slide_cloudL, 0, 0);
		cloudLeft();
	
	glPopMatrix();

}
void scene1_cloudR_animation() {
	glPushMatrix();

	glTranslatef(slide_cloudR, 0, 0);
	cloudRight();

	glPopMatrix();

}

void scene1_dino_idle() {
	//idle
	if (dino_slidey > 0) dino_movey = 1;
	if (dino_movey == 1) dino_slidey -= 0.5;//1
	if (dino_slidey < -20) dino_movey = 0;
	if (dino_movey == 0) dino_slidey += 0.5;//1

	if (dino_slidex < 1000) { dino_movex = 0; dino_count = 0; dinoleg_count = 0; }
	//if (dino_movex == 1) dino_slidex -= 1;//4
	//if (dino_slidex < -1600) dino_movex = 0;
	if (dino_movex == 0) dino_slidex += 0.5;//4

	if (dino_count == 0) {
		dinoR_lost = 1; dinoL_lost = 0;
	}
	else {
		dinoR_lost = 0; dinoL_lost = 0;
	}
	glutPostRedisplay();
}



void scene1_dinoLleg_idle() {

	if (dinolegL_angle > 30)  dinoleg_angle_move = 0;
	if (dinoleg_angle_move == 0)  dinolegL_angle -= 0.8;
	if (dinolegL_angle < -30)  dinoleg_angle_move = 1;
	if (dinoleg_angle_move == 1)  dinolegL_angle += 0.8;

	if (dinoleg_count == 0) {
		dinoR_leg_lost = 1; dinoL_leg_lost = 0;
	}
	else {
		dinoR_leg_lost = 0; dinoL_leg_lost = 0;
	}
	glutPostRedisplay();
}

void scene1_dinoRleg_idle() {

	if (dinolegR_angle > 30)  dinoleg_angle_move = 1;
	if (dinoleg_angle_move == 0)  dinolegR_angle += 0.8;
	if (dinolegR_angle < -30)  dinoleg_angle_move = 0;
	if (dinoleg_angle_move == 1)  dinolegR_angle -= 0.8;

	if (dinoleg_count == 0) {
		dinoR_leg_lost = 1; dinoL_leg_lost =0;
	}
	else {
		dinoR_leg_lost = 0; dinoL_leg_lost = 0;
	}
	glutPostRedisplay();
}

void scene1_dino_animation() {
	//moving to the right
	glPushMatrix();
	if (dino_count == 0)
		glTranslatef(dino_slidex, dino_slidey, 0);
	glTranslatef(0, 125, 0);
	glScalef(0.6, 0.6, 1);

	glScalef(dinoR_lost, dinoR_lost, 0);
	dinoLeft_Tail();
	dinoLeft_RightArm();
	dinoLeft_Body();
	dinoLeft_HeadAndNeck();
	dinoLeft_LeftArm();
	glPopMatrix();
}

void scene1_dinoLleg_animation() {
	glPushMatrix();
	if (dinoleg_count == 0) {
		glTranslatef(dino_slidex - 80, dino_slidey + 10, 0);
		glTranslatef(200, 290, 0);
		glScalef(0.6, 0.6, 1);
		glRotatef(dinolegL_angle, 0, 0, 1);
		glTranslatef(-200, -290, 0);
	}
	//pupil
	
	glScalef(dinoR_leg_lost, dinoR_leg_lost, 0);
	dinoLeft_LegLeft();
	glPopMatrix();
}

void scene1_dinoRleg_animation() {
	glPushMatrix();
	if (dinoleg_count == 0) {
		glTranslatef(dino_slidex - 80, dino_slidey + 10, 0);
		glTranslatef(200, 290, 0);
		glScalef(0.6, 0.6, 1);
		glRotatef(dinolegR_angle, 0, 0, 1);
		glTranslatef(-200, -290, 0);
	}
	glScalef(dinoR_leg_lost, dinoR_leg_lost, 0);
	dinoLeft_LegRight();
	glPopMatrix();
}

void scene1_idle() {
	scene1_sun_idle();
	scene1_cloudL_idle();
	scene1_cloudR_idle();
	scene1_dino_idle();
	scene1_dinoRleg_idle();
	scene1_dinoLleg_idle();
}

void scene1_animation() {
	scene1_sun_animation();
	scene1_cloudL_animation();
	scene1_cloudR_animation();
	scene1_dinoRleg_animation();
	scene1_dino_animation();
	scene1_dinoLleg_animation();
}
