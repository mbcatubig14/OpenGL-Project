void manRight_head() {
	//neck
	glColor3f(1.000, 0.855, 0.725);
	glBegin(GL_QUADS);
	glVertex2i(-290, 265);
	glVertex2i(-290, 255);
	glVertex2i(-310, 255);
	glVertex2i(-310, 265);
	glEnd();
	drawEllipse(10, 10, -300, 260);

	//head
	glColor3f(1.000, 0.894, 0.710);
	drawEllipse(30, 40, -300, 300);

	//hair
	glColor3f(0.184, 0.310, 0.310);
	glBegin(GL_QUADS);
	glVertex2i(-270, 340);
	glVertex2i(-270, 320);
	glVertex2i(-325, 325);
	glVertex2i(-330, 345);
	glEnd();
	drawEllipse(12, 30, -280, 310);

	//left eyes
	glColor3f(255.0, 255.0, 255.0);
	drawCircle(10, -320, 310);


	//right eyes
	glColor3f(255.0, 255.0, 255.0);
	drawCircle(10, -315, 310);
	//pupil
	glPointSize(5.0);
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-325, 310);
	glEnd();

	//pupil
	glPointSize(5.0);
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-315, 310);
	glEnd();

	//mouth
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(-305, 275);
	glVertex2i(-305, 280);
	glVertex2i(-315, 280);
	glVertex2i(-315, 275);
	glEnd();
	drawCircle(5, -310, 276);
}
void manRight_rightArm() {
	//arm
	glColor3f(1.000, 0.894, 0.710);
	glBegin(GL_POLYGON);
	glVertex2f(-282, 255);
	glVertex2f(-298 , 255);
	glVertex2f(-298 , 225);
	glVertex2f(-305 , 215);
	glVertex2f(-300 , 205);
	glVertex2f(-282 , 225);
	glEnd();

	//hands
	drawCircle(7,-301, 211);

	//shoulder
	glColor3f(0.804, 0.361, 0.361);
	drawEllipse(10, 10, -290, 250);
}
void manRight_body() {

	glColor3f(0.275, 0.510, 0.70);
	drawEllipse(20, 20, -300, 170);

	glColor3f(0.804, 0.361, 0.361);
	glBegin(GL_POLYGON);
	glVertex2i(-280, 160);
	glVertex2i(-280, 250);
	glVertex2i(-285, 260);
	glVertex2i(-315, 260);
	glVertex2i(-320, 250);
	glVertex2i(-320, 160);
	glEnd();
}
void manRight_leftArm() {
	//arm
	glColor3f(1.000, 0.894, 0.710);
	glBegin(GL_POLYGON);
	glVertex2f(-302, 255);
	glVertex2f(-318, 255);
	glVertex2f(-318, 225);
	glVertex2f(-325, 215);
	glVertex2f(-320, 205);
	glVertex2f(-302, 225);
	glEnd();

	//hands
	drawCircle(7,-321, 211);

	//shoulder
	glColor3f(0.804, 0.361, 0.361);
	drawEllipse(10, 10, -310 , 250);
}
void manRight_rightLeg() {

	//feet
	glColor3f(0.412, 0.412, 0.412);
	drawEllipse(14, 10, -300, 90);

	glBegin(GL_QUADS);
	glVertex2i(-286, 95);
	glVertex2i(-286, 80);
	glVertex2i(-292, 80);
	glVertex2i(-292, 100);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2i(-286, 88);
	glVertex2i(-286, 80);
	glVertex2i(-315, 80);
	glVertex2i(-315, 88);
	glEnd();

	//ankle
	glColor3f(1.000, 0.894, 0.710);
	glBegin(GL_QUADS);
	glVertex2i(-290, 95);
	glVertex2i(-290, 110);
	glVertex2i(-300, 110);
	glVertex2i(-300, 95);
	glEnd();
	drawCircle(5, -295, 95);

	glColor3f(0.275, 0.510, 0.70);
	drawEllipse(12, 10, -292, 180);

	//leg
	glColor3f(0.275, 0.510, 0.70);
	glBegin(GL_POLYGON);
	glVertex2f(-280, 180);
	glVertex2f(-305, 180);
	glVertex2f(-305, 130);
	glVertex2f(-300, 100);
	glVertex2f(-290, 100);
	glEnd();

}
void manRight_leftLeg() {

	//feet
	glColor3f(0.412, 0.412, 0.412);
	drawEllipse(14, 10, -305, 90);

	glBegin(GL_QUADS);
	glVertex2i(-291, 95);
	glVertex2i(-291, 80);
	glVertex2i(-297, 80);
	glVertex2i(-297, 100);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2i(-291, 88);
	glVertex2i(-291, 80);
	glVertex2i(-320, 80);
	glVertex2i(-320, 88);
	glEnd();

	//ankle
	glColor3f(1.000, 0.894, 0.710);
	glBegin(GL_QUADS);
	glVertex2i(-295, 95);
	glVertex2i(-295, 110);
	glVertex2i(-305, 110);
	glVertex2i(-305, 95);
	glEnd();
	drawCircle(5, -300, 95);

	glColor3f(0.275, 0.510, 0.70);
	drawEllipse(12, 10, -298, 180);

	//leg
	glColor3f(0.275, 0.510, 0.70);
	glBegin(GL_POLYGON);
	glVertex2f(-285, 180);
	glVertex2f(-310, 180);
	glVertex2f(-310, 130);
	glVertex2f(-305, 100);
	glVertex2f(-295, 100);
	glEnd();

}

void humanRight() {
	glPushMatrix();
	glTranslatef(500,0,0);
	manRight_leftLeg();
	manRight_rightLeg();
	manRight_leftArm();
	manRight_body();
	manRight_rightArm();
	manRight_head();
	glPopMatrix();
}