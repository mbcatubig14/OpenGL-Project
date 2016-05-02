
#include <stdio.h>

void drawCircle(int r, int  xc, int yc) {
	int x = 0, y = r;
	int d;
	d = 1 - r;

	while (x < y)
	{
		glBegin(GL_POLYGON);
		glVertex2i(y + xc, x + yc);
		glVertex2i(x + xc, y + yc);
		glVertex2i(x + xc, -y + yc);
		glVertex2i(y + xc, -x + yc);
		glVertex2i(-y + xc, -x + yc);
		glVertex2i(-x + xc, -y + yc);
		glVertex2i(-x + xc, y + yc);
		glVertex2i(-y + xc, x + yc);
		glEnd();

		if (d < 0)
		{
			x = x + 1;
			d = d + 2 * x + 1;
		}
		else
		{
			x = x + 1;
			y = y - 1;
			d = d + ((2 * x) + 1) - (2 * y);
		}
	}//end while
}//end drawCircle

void drawEllipse(int rx, int ry, int xc, int yc) {
	float a = rx;
	float b = ry;
	float x = 0;
	float y = ry;
	float d2;
	float d1 = b - (a*a*ry) + (a*a*0.25);

	while (2 * b*b*x < 2 * a*a*y)
	{
		glBegin(GL_POLYGON);
		glVertex2f(x + xc, y + yc);
		glVertex2f(x + xc, -y + yc);
		glVertex2f(-x + xc, -y + yc);
		glVertex2f(-x + xc, y + yc);
		glEnd();

		if (d1 < 0)
		{
			x = x + 1;
			d1 = d1 + (2 * b*b*x) + (b*b);
		}
		else
		{
			x = x + 1;
			y = y - 1;
			d1 = d1 + (2 * b*b*x) - (2 * a*a*y) + (b*b);
		}
	}//end while

	d2 = b*b*((x + 0.5)*(x + 0.5)) + (a*a*((y - 1)*(y - 1))) - (a*a*b*b);
	while (y > 0 || y < 0)
	{
		glBegin(GL_POLYGON);
		glVertex2f(x + xc, y + yc);
		glVertex2f(x + xc, -y + yc);
		glVertex2f(-x + xc, -y + yc);
		glVertex2f(-x + xc, y + yc);
		glEnd();

		if (d2 > 0)
		{
			y = y - 1;
			d2 = d2 - (2 * a*a*y) + (a*a);
		}
		else
		{
			x = x + 1; y = y - 1;
			d2 = d2 + (2 * b*b*x) - (2 * a*a*y) + (a*a);
		}
	}
}

void dinoLeft_LeftArm() {
	glColor3f(0.666, 0.266, 0);
	drawEllipse(10, 10, 260, 250);
	glBegin(GL_POLYGON);
	glVertex2f(260, 250);
	glVertex2f(270, 250);
	glVertex2f(280, 240);
	glVertex2f(290, 240);
	glVertex2f(290, 230);
	glVertex2f(270, 230);
	glVertex2f(260, 240);
	glVertex2f(260, 250);
	glEnd();

	drawEllipse(10, 10, 290, 235);

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0);
	glVertex2f(295, 230);
	glVertex2f(300, 225);
	glVertex2f(295, 220);
	glVertex2f(295, 225);
	glVertex2f(290, 225);
	glVertex2f(290, 230);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0);
	glVertex2f(300, 235);
	glVertex2f(305, 230);
	glVertex2f(300, 225);
	glVertex2f(300, 230);
	glVertex2f(295, 230);
	glVertex2f(295, 235);
	glEnd();
}

void dinoLeft_RightArm() {
	glColor3f(0.0, 0.0, 0);
	drawEllipse(10, 10, 270, 250);
	glBegin(GL_POLYGON);
	glVertex2f(270, 250);
	glVertex2f(280, 250);
	glVertex2f(290, 240);
	glVertex2f(300, 240);
	glVertex2f(300, 230);
	glVertex2f(280, 230);
	glVertex2f(270, 240);
	glVertex2f(270, 250);
	glEnd();

	drawEllipse(10, 10, 300, 235);

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0);
	glVertex2f(305, 230);
	glVertex2f(310, 225);
	glVertex2f(305, 220);
	glVertex2f(305, 225);
	glVertex2f(300, 225);
	glVertex2f(300, 230);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0);
	glVertex2f(310, 235);
	glVertex2f(315, 230);
	glVertex2f(310, 225);
	glVertex2f(310, 230);
	glVertex2f(305, 230);
	glVertex2f(305, 235);
	glEnd();
}

void dinoLeft_HeadAndNeck() {

	glBegin(GL_POLYGON);
	glColor3f(0.666, 0.266, 0);
	glVertex2f(300, 350);
	glVertex2f(350, 340);
	glVertex2f(360, 330);
	glVertex2f(360, 320);
	glVertex2f(350, 320);
	glVertex2f(320, 310);
	glVertex2f(340, 310);
	glVertex2f(360, 310);
	glVertex2f(350, 300);
	glVertex2f(360, 310);
	glVertex2f(310, 290);
	glVertex2f(300, 300);
	glVertex2f(300, 290);
	glVertex2f(270, 245);
	glVertex2f(270, 300);
	glVertex2f(300, 350);
	glEnd();

	drawEllipse(10, 30, 270, 270);

	glColor3f(255.0, 255.0, 255.0);
	drawCircle(5, 310, 340);

	glPointSize(5.0);
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(310, 340);
	glEnd();
}

void dinoLeft_Body() {
	glBegin(GL_POLYGON);
	glColor3f(0.501, 0.2, 0);
	glVertex2f(270, 300);
	glVertex2f(270, 240);
	glVertex2f(250, 230);
	glVertex2f(160, 250);
	glVertex2f(180, 310);
	glVertex2f(260, 310);
	glVertex2f(270, 300);
	glEnd();
}

void dinoLeft_Tail() {
	glBegin(GL_POLYGON);
	glColor3f(0.501, 0.2, 0);
	glVertex2f(30, 300);
	glVertex2f(150, 300);
	glVertex2f(180, 310);
	glVertex2f(160, 250);
	glVertex2f(150, 250);
	glVertex2f(150, 270);
	glVertex2f(30, 300);
	glEnd();
}

void dinoLeft_LegLeft() {
	glColor3f(0.666, 0.266, 0);
	drawEllipse(30, 30, 195, 250);

	glBegin(GL_POLYGON);
	//glColor3f(0.0, 0.0, 0);
	glVertex2f(225, 245);
	glVertex2f(200, 200);
	glVertex2f(170, 200);
	glVertex2f(190, 245);
	glVertex2f(180, 180);
	glVertex2f(170, 180);
	glVertex2f(170, 160);
	glVertex2f(170, 200);
	glEnd();

	drawEllipse(15, 10, 185, 165);

	//Feet Claws
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0);
	glVertex2f(200, 160);
	glVertex2f(195, 165);
	glVertex2f(190, 165);
	glVertex2f(190, 160);
	glVertex2f(200, 160);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0);
	glVertex2f(205, 165);
	glVertex2f(200, 170);
	glVertex2f(195, 170);
	glVertex2f(195, 165);
	glVertex2f(205, 165);
	glEnd();
}

void dinoLeft_LegRight() {
	glColor3f(0.0, 0.0, 0.0);
	drawEllipse(30, 30, 205, 250);

	glBegin(GL_POLYGON);
	//glColor3f(0.0, 0.0, 0);
	glVertex2f(235, 245);
	glVertex2f(210, 200);
	glVertex2f(180, 200);
	glVertex2f(200, 245);
	glVertex2f(190, 180);
	glVertex2f(180, 180);
	glVertex2f(180, 160);
	glVertex2f(180, 200);
	glVertex2f(235, 245);
	glEnd();

	drawEllipse(15, 10, 195, 165);

	//Feet Claws
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0);
	glVertex2f(210, 160);
	glVertex2f(205, 165);
	glVertex2f(200, 165);
	glVertex2f(200, 160);
	glVertex2f(210, 160);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0);
	glVertex2f(215, 165);
	glVertex2f(210, 170);
	glVertex2f(200, 170);
	glVertex2f(200, 165);
	glVertex2f(210, 165);
	glEnd();
}



void dinoLeft() {

	dinoLeft_Tail();
	dinoLeft_LegRight();
	dinoLeft_RightArm();
	dinoLeft_Body();
	dinoLeft_HeadAndNeck();
	dinoLeft_LegLeft();
	dinoLeft_LeftArm();

}
