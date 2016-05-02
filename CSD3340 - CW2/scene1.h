void mountains() {
	glColor3f(0.502, 0.502, 0.000);
	glBegin(GL_TRIANGLES);
	glVertex2i(50, 230);
	glVertex2i(150, 430);
	glVertex2i(250, 230);
	glEnd();

	glColor3f(0.420, 0.557, 0.137);
	glBegin(GL_TRIANGLES);
	glVertex2i(100, 230);
	glVertex2i(200, 430);
	glVertex2i(300, 230);
	glEnd();
}

void sky() {

	//sky
	glColor3f(0.529, 0.808, 0.922);
	glBegin(GL_QUADS);
	glVertex2i(0, 300);
	glVertex2i(0, 500);
	glVertex2i(750, 500);
	glVertex2i(750, 300);
	glEnd();

}

void cloudLeft() {
	//cloud left
	glColor3f(1.000, 1.000, 1.000);
	drawCircle(30, 100, 400);
	drawCircle(30, 130, 430);
	drawCircle(30, 160, 430);
	drawCircle(30, 190, 400);
	drawCircle(30, 150, 400);
}

void cloudRight() {
	//cloud right
	glColor3f(1.000, 1.000, 1.000);
	drawCircle(30, 400, 400);
	drawCircle(30, 430, 430);
	drawCircle(30, 460, 430);
	drawCircle(30, 490, 400);
	drawCircle(30, 450, 400);
}

void sun() {
	//sun
	glColor3f(1.000, 1.000, 0.000);
	drawEllipse(40, 50, 370, 420);
}

void ground() {
	//grass
	glColor3f(0.196, 0.804, 0.196);
	glBegin(GL_QUADS);
	glVertex2i(0, 300);
	glVertex2i(0, 100);
	glVertex2i(750, 100);
	glVertex2i(750, 300);
	glEnd();

	//trees
	glColor3f(0.545, 0.271, 0.075);
	glBegin(GL_QUADS);
	glVertex2i(300, 250);
	glVertex2i(300, 310);
	glVertex2i(310, 310);
	glVertex2i(310, 250);
	glEnd();
	glColor3f(0.196, 0.804, 0.196);
	drawCircle(15, 290, 310);
	drawCircle(15, 300, 320);
	drawCircle(15, 310, 320);
	drawCircle(15, 300, 310);

	glColor3f(0.545, 0.271, 0.075);
	glBegin(GL_QUADS);
	glVertex2i(310, 270);
	glVertex2i(310, 330);
	glVertex2i(320, 330);
	glVertex2i(320, 270);
	glEnd();
	glColor3f(0.196, 0.804, 0.196);
	drawCircle(15, 300, 330);
	drawCircle(15, 310, 340);
	drawCircle(15, 320, 340);
	drawCircle(15, 310, 330);

	//trees 2
	glColor3f(0.545, 0.271, 0.075);
	glBegin(GL_QUADS);
	glVertex2i(320, 260);
	glVertex2i(320, 320);
	glVertex2i(330, 320);
	glVertex2i(330, 260);
	glEnd();
	glColor3f(0.196, 0.804, 0.196);
	drawCircle(15, 310, 320);
	drawCircle(15, 320, 330);
	drawCircle(15, 330, 330);
	drawCircle(15, 320, 320);


	glColor3f(0.545, 0.271, 0.075);
	glBegin(GL_QUADS);
	glVertex2i(340, 260);
	glVertex2i(340, 320);
	glVertex2i(350, 320);
	glVertex2i(350, 260);
	glEnd();
	glColor3f(0.196, 0.804, 0.196);
	drawCircle(15, 330, 320);
	drawCircle(15, 340, 330);
	drawCircle(15, 350, 330);
	drawCircle(15, 340, 320);

	glColor3f(0.545, 0.271, 0.075);
	glBegin(GL_QUADS);
	glVertex2i(100 - 50, 260);
	glVertex2i(100 - 50, 320);
	glVertex2i(110 - 50, 320);
	glVertex2i(110 - 50, 260);
	glEnd();
	glColor3f(0.196, 0.804, 0.196);
	drawCircle(15, 100 - 50, 320);
	drawCircle(15, 110 - 50, 330);
	drawCircle(15, 120 - 50, 330);
	drawCircle(15, 110 - 50, 320);
	glColor3f(0.545, 0.271, 0.075);
	glBegin(GL_QUADS);
	glVertex2i(120 - 50, 260);
	glVertex2i(120 - 50, 320);
	glVertex2i(130 - 50, 320);
	glVertex2i(130 - 50, 260);
	glEnd();
	glColor3f(0.196, 0.804, 0.196);
	drawCircle(15, 120 - 50, 320);
	drawCircle(15, 130 - 50, 330);
	drawCircle(15, 140 - 50, 330);
	drawCircle(15, 130 - 50, 320);

	//river
	glColor3f(0.255, 0.412, 0.88);
	glBegin(GL_QUADS);
	glVertex2i(0, 0);
	glVertex2i(0, 100);
	glVertex2i(750, 100);
	glVertex2i(750, 0);
	glEnd();

}

void scene1() {
	sun();
	sky();
	ground();
	mountains();
}