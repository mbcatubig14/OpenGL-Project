void man_head() {

	//neck
	glColor3f(1.000, 0.855, 0.725);
	glBegin(GL_QUADS);
	glVertex2i(290, 265);
	glVertex2i(290, 255);
	glVertex2i(310, 255);
	glVertex2i(310, 265);
	glEnd();
	drawEllipse(10, 10, 300, 260);

	//head
	glColor3f(1.000, 0.894, 0.710);
	drawEllipse(30, 40, 300, 300);

	//hair
	glColor3f(0.184, 0.310, 0.310);
	glBegin(GL_QUADS);
	glVertex2i(270, 340);
	glVertex2i(270, 320);
	glVertex2i(325, 325);
	glVertex2i(330, 345);
	glEnd();
	drawEllipse(12, 30, 280, 310);

	//left eyes
	glColor3f(255.0, 255.0, 255.0);
	drawCircle(10, 320, 310);


	//right eyes
	glColor3f(255.0, 255.0, 255.0);
	drawCircle(10, 315, 310);
	//pupil
	glPointSize(5.0);
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(325, 310);
	glEnd();

	//pupil
	glPointSize(5.0);
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(315, 310);
	glEnd();

	//mouth
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(295 + 10, 275);
	glVertex2i(295 + 10, 280);
	glVertex2i(305 + 10, 280);
	glVertex2i(305 + 10, 275);
	glEnd();
	drawCircle(5, 300 + 10, 276);
}
void man_rightArm() {
	//arm
	glColor3f(1.000, 0.894, 0.710);
	glBegin(GL_POLYGON);
	glVertex2f(262 + 20, 255);
	glVertex2f(278 + 20, 255);
	glVertex2f(278 + 20, 225);
	glVertex2f(285 + 20, 215);
	glVertex2f(280 + 20, 205);
	glVertex2f(262 + 20, 225);
	glEnd();

	//hands
	drawCircle(7, 281 + 20, 211);

	//shoulder
	glColor3f(0.804, 0.361, 0.361);
	drawEllipse(10, 10, 290, 250);
}
void man_body() {

	glColor3f(0.275, 0.510, 0.70);
	drawEllipse(20, 20, 300, 170);

	glColor3f(0.804, 0.361, 0.361);
	glBegin(GL_POLYGON);
	glVertex2i(280, 160);
	glVertex2i(280, 250);
	glVertex2i(285, 260);
	glVertex2i(315, 260);
	glVertex2i(320, 250);
	glVertex2i(320, 160);
	glEnd();
}
void man_leftArm() {
	//arm
	glColor3f(1.000, 0.894, 0.710);
	glBegin(GL_POLYGON);
	glVertex2f(262 + 40, 255);
	glVertex2f(278 + 40, 255);
	glVertex2f(278 + 40, 225);
	glVertex2f(285 + 40, 215);
	glVertex2f(280 + 40, 205);
	glVertex2f(262 + 40, 225);
	glEnd();

	//hands
	drawCircle(7, 281 + 40, 211);

	//shoulder
	glColor3f(0.804, 0.361, 0.361);
	drawEllipse(10, 10, 330 - 20, 250);
}
void man_rightLeg() {

	//feet
	glColor3f(0.412, 0.412, 0.412);
	drawEllipse(14, 10, 300, 90);

	glBegin(GL_QUADS);
	glVertex2i(286, 95);
	glVertex2i(286, 80);
	glVertex2i(292, 80);
	glVertex2i(292, 100);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2i(286, 88);
	glVertex2i(286, 80);
	glVertex2i(315, 80);
	glVertex2i(315, 88);
	glEnd();

	//ankle
	glColor3f(1.000, 0.894, 0.710);
	glBegin(GL_QUADS);
	glVertex2i(280 + 10, 95);
	glVertex2i(280 + 10, 110);
	glVertex2i(290 + 10, 110);
	glVertex2i(290 + 10, 95);
	glEnd();
	drawCircle(5, 285 + 10, 95);

	glColor3f(0.275, 0.510, 0.70);
	drawEllipse(12, 10, 292, 180);

	//leg
	glColor3f(0.275, 0.510, 0.70);
	glBegin(GL_POLYGON);
	glVertex2f(265 + 15, 180);
	glVertex2f(280 + 25, 180);
	glVertex2f(280 + 25, 130);
	glVertex2f(295 + 5, 100);
	glVertex2f(265 + 25, 100);
	glEnd();

}
void man_leftLeg() {

	//feet
	glColor3f(0.412, 0.412, 0.412);
	drawEllipse(14, 10, 300 + 5, 90);

	glBegin(GL_QUADS);
	glVertex2i(286 + 5, 95);
	glVertex2i(286 + 5, 80);
	glVertex2i(292 + 5, 80);
	glVertex2i(292 + 5, 100);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2i(286 + 5, 88);
	glVertex2i(286 + 5, 80);
	glVertex2i(315 + 5, 80);
	glVertex2i(315 + 5, 88);
	glEnd();

	//ankle
	glColor3f(1.000, 0.894, 0.710);
	glBegin(GL_QUADS);
	glVertex2i(280 + 25 - 10, 95);
	glVertex2i(280 + 25 - 10, 110);
	glVertex2i(290 + 25 - 10, 110);
	glVertex2i(290 + 25 - 10, 95);
	glEnd();
	drawCircle(5, 285 + 25 - 10, 95);

	glColor3f(0.275, 0.510, 0.70);
	drawEllipse(12, 10, 298, 180);

	//leg
	glColor3f(0.275, 0.510, 0.70);
	glBegin(GL_POLYGON);
	glVertex2f(265 + 10 + 25 - 15, 180);
	glVertex2f(280 + 20 + 25 - 15, 180);
	glVertex2f(280 + 20 + 25 - 15, 130);
	glVertex2f(295 + 25 - 15, 100);
	glVertex2f(265 + 10 + 25 - 5, 100);
	glEnd();

}

void human() {

	man_leftLeg();
	man_rightLeg();
	man_leftArm();
	man_body();
	man_rightArm();
	man_head();

}