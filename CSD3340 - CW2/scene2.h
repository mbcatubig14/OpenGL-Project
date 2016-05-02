void nightsky() {
	glColor3f(0.000, 0.000, 0.502);
	glBegin(GL_QUADS);
	glVertex2i(0, 0);
	glVertex2i(0, 750);
	glVertex2i(750, 750);
	glVertex2i(750, 0);
	glEnd();
}

void moon() {
	glColor3f(1.000, 1.000, 1.000);
	drawEllipse(30, 30,550,400);
}

void road() {
	glColor3f(0.412, 0.412, 0.412);
	glBegin(GL_QUADS);
	glVertex2i(0, 100);
	glVertex2i(0, 200);
	glVertex2i(750, 200);
	glVertex2i(750, 100);
	glEnd();

	glColor3f(0.412, 0.412, 0.412);
	glBegin(GL_TRIANGLES);
	glVertex2i(50 + 400, 200);
	glVertex2i(150 + 400, 400);
	glVertex2i(250 + 400, 200);
	glEnd();
}

void grass() {
	glColor3f(0.000, 0.502, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(0, 0);
	glVertex2i(0, 400);
	glVertex2i(750, 400);
	glVertex2i(750, 0);
	glEnd();
}

void building1() {
	glColor3f(0.663, 0.663, 0.663);
	glBegin(GL_QUADS);
	glVertex2i(100, 200);
	glVertex2i(100, 500);
	glVertex2i(210, 500);
	glVertex2i(210, 200);
	glEnd();

	//door
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(140, 200);
	glVertex2i(140, 260);
	glVertex2i(160, 260);
	glVertex2i(160, 200);
	glEnd();

	//window 1
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(110, 220);
	glVertex2i(110, 250);
	glVertex2i(130, 250);
	glVertex2i(130, 220);
	glEnd();
	//window 2
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(135 + 40, 220);
	glVertex2i(135 + 40, 250);
	glVertex2i(155 + 40, 250);
	glVertex2i(155 + 40, 220);
	glEnd();

	//window 3
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(140, 220 + 50);
	glVertex2i(140, 250 + 50);
	glVertex2i(160, 250 + 50);
	glVertex2i(160, 220 + 50);
	glEnd();

	//window 4
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(110, 220 + 40 + 40);
	glVertex2i(110, 250 + 40 + 40);
	glVertex2i(130, 250 + 40 + 40);
	glVertex2i(130, 220 + 40 + 40);
	glEnd();

	//window 5
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(135 + 40, 220 + 40 + 40);
	glVertex2i(135 + 40, 250 + 40 + 40);
	glVertex2i(155 + 40, 250 + 40 + 40);
	glVertex2i(155 + 40, 220 + 40 + 40);
	glEnd();
	

	//window 6
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(140, 220 + 50 + 40 + 40);
	glVertex2i(140, 250 + 50 + 40 + 40);
	glVertex2i(160, 250 + 50 + 40 + 40);
	glVertex2i(160, 220 + 50 + 40 + 40);
	glEnd();

	//window 7
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(110, 220 + 40 + 40 + 70);
	glVertex2i(110, 250 + 40 + 40 + 70);
	glVertex2i(130, 250 + 40 + 40 + 70);
	glVertex2i(130, 220 + 40 + 40 + 70);
	glEnd();

	//window 8
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(135 + 40, 220 + 40 + 40 + 70);
	glVertex2i(135 + 40, 250 + 40 + 40 + 70);
	glVertex2i(155 + 40, 250 + 40 + 40 + 70);
	glVertex2i(155 + 40, 220 + 40 + 40 + 70);
	glEnd();


	//window 9
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(140, 220 + 50 + 40 + 40 + 70);
	glVertex2i(140, 250 + 50 + 40 + 40 + 70);
	glVertex2i(160, 250 + 50 + 40 + 40 + 70);
	glVertex2i(160, 220 + 50 + 40 + 40 + 70);
	glEnd();

	//window 10
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(110, 220 + 40 + 40 + 70 + 70);
	glVertex2i(110, 250 + 40 + 40 + 70 + 70);
	glVertex2i(130, 250 + 40 + 40 + 70 + 70);
	glVertex2i(130, 220 + 40 + 40 + 70 + 70);
	glEnd();

	//window 11
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(135 + 40, 220 + 40 + 40 + 70 + 70);
	glVertex2i(135 + 40, 250 + 40 + 40 + 70 + 70);
	glVertex2i(155 + 40, 250 + 40 + 40 + 70 + 70);
	glVertex2i(155 + 40, 220 + 40 + 40 + 70 + 70);
	glEnd();


	//window 12
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(140, 220 + 50 + 40 + 40 + 70 + 70);
	glVertex2i(140, 250 + 50 + 40 + 40 + 70 + 70);
	glVertex2i(160, 250 + 50 + 40 + 40 + 70 + 70);
	glVertex2i(160, 220 + 50 + 40 + 40 + 70 + 70);
	glEnd();
	
}

void building2() {
	glColor3f(0.545, 0.271, 0.075);
	glBegin(GL_QUADS);
	glVertex2i(100 + 100, 200);
	glVertex2i(100 + 100, 500);
	glVertex2i(210 + 100, 500);
	glVertex2i(210 + 100, 200);
	glEnd();

	//door
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(140 + 100, 200);
	glVertex2i(140 + 100, 260);
	glVertex2i(160 + 100, 260);
	glVertex2i(160 + 100, 200);
	glEnd();

	//window 1
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(110 + 100, 220);
	glVertex2i(110 + 100, 250);
	glVertex2i(130 + 100, 250);
	glVertex2i(130 + 100, 220);
	glEnd();
	//window 2
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(135 + 40 + 100, 220);
	glVertex2i(135 + 40 + 100, 250);
	glVertex2i(155 + 40 + 100, 250);
	glVertex2i(155 + 40 + 100, 220);
	glEnd();

	//window 3
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(140 + 100, 220 + 50);
	glVertex2i(140 + 100, 250 + 50);
	glVertex2i(160 + 100, 250 + 50);
	glVertex2i(160 + 100, 220 + 50);
	glEnd();

	//window 4
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(110 + 100, 220 + 40 + 40);
	glVertex2i(110 + 100, 250 + 40 + 40);
	glVertex2i(130 + 100, 250 + 40 + 40);
	glVertex2i(130 + 100, 220 + 40 + 40);
	glEnd();

	//window 5
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(135 + 40 + 100, 220 + 40 + 40);
	glVertex2i(135 + 40 + 100, 250 + 40 + 40);
	glVertex2i(155 + 40 + 100, 250 + 40 + 40);
	glVertex2i(155 + 40 + 100, 220 + 40 + 40);
	glEnd();


	//window 6
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(140 + 100, 220 + 50 + 40 + 40);
	glVertex2i(140 + 100, 250 + 50 + 40 + 40);
	glVertex2i(160 + 100, 250 + 50 + 40 + 40);
	glVertex2i(160 + 100, 220 + 50 + 40 + 40);
	glEnd();

	//window 7
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(110 + 100, 220 + 40 + 40 + 70);
	glVertex2i(110 + 100, 250 + 40 + 40 + 70);
	glVertex2i(130 + 100, 250 + 40 + 40 + 70);
	glVertex2i(130 + 100, 220 + 40 + 40 + 70);
	glEnd();

	//window 8
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(135 + 40 + 100, 220 + 40 + 40 + 70);
	glVertex2i(135 + 40 + 100, 250 + 40 + 40 + 70);
	glVertex2i(155 + 40 + 100, 250 + 40 + 40 + 70);
	glVertex2i(155 + 40 + 100, 220 + 40 + 40 + 70);
	glEnd();


	//window 9
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(140 + 100, 220 + 50 + 40 + 40 + 70);
	glVertex2i(140 + 100, 250 + 50 + 40 + 40 + 70);
	glVertex2i(160 + 100, 250 + 50 + 40 + 40 + 70);
	glVertex2i(160 + 100, 220 + 50 + 40 + 40 + 70);
	glEnd();

	//window 10
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(110 + 100, 220 + 40 + 40 + 70 + 70);
	glVertex2i(110 + 100, 250 + 40 + 40 + 70 + 70);
	glVertex2i(130 + 100, 250 + 40 + 40 + 70 + 70);
	glVertex2i(130 + 100, 220 + 40 + 40 + 70 + 70);
	glEnd();

	//window 11
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(135 + 40 + 100, 220 + 40 + 40 + 70 + 70);
	glVertex2i(135 + 40 + 100, 250 + 40 + 40 + 70 + 70);
	glVertex2i(155 + 40 + 100, 250 + 40 + 40 + 70 + 70);
	glVertex2i(155 + 40 + 100, 220 + 40 + 40 + 70 + 70);
	glEnd();

	//window 12
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(140 + 100, 220 + 50 + 40 + 40 + 70 + 70);
	glVertex2i(140 + 100, 250 + 50 + 40 + 40 + 70 + 70);
	glVertex2i(160 + 100, 250 + 50 + 40 + 40 + 70 + 70);
	glVertex2i(160 + 100, 220 + 50 + 40 + 40 + 70 + 70);
	glEnd();

	glColor3f(0.545, 0.271, 0.075);
	glBegin(GL_TRIANGLES);
	glVertex2i(310, 450);
	glVertex2i(360, 500);
	glVertex2i(310, 500);
	glEnd();

}

void building3() {
	glColor3f(0.647, 0.165, 0.165);
	glBegin(GL_QUADS);
	glVertex2i(0, 200);
	glVertex2i(0, 350);
	glVertex2i(100, 350);
	glVertex2i(100, 200);
	glEnd();

	//door
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(40, 200);
	glVertex2i(40, 260);
	glVertex2i(60, 260);
	glVertex2i(60, 200);
	glEnd();

	//window 1
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(10, 220);
	glVertex2i(10, 250);
	glVertex2i(30, 250);
	glVertex2i(30 , 220);
	glEnd();
	//window 2
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(35+40, 220);
	glVertex2i(35 + 40, 250);
	glVertex2i(55 + 40, 250);
	glVertex2i(55 + 40, 220);
	glEnd();
	
	//window 3
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(40, 270);
	glVertex2i(40, 300);
	glVertex2i(60, 300);
	glVertex2i(60, 270);
	glEnd();

	//window 4
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(10, 220 + 80);
	glVertex2i(10, 250 + 80);
	glVertex2i(30, 250 + 80);
	glVertex2i(30, 220 + 80);
	glEnd();
	//window 5
	glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_QUADS);
	glVertex2i(35 + 40, 220 + 80);
	glVertex2i(35 + 40, 250 + 80);
	glVertex2i(55 + 40, 250 + 80);
	glVertex2i(55 + 40, 220 + 80);
	glEnd();

	glColor3f(0.647, 0.165, 0.165);
	glBegin(GL_TRIANGLES);
	glVertex2i(0, 350);
	glVertex2i(100, 350);
	glVertex2i(100, 450);
	glEnd();

	glColor3f(0.502, 0.502, 0.502);
	glBegin(GL_TRIANGLES);
	glVertex2i(10, 355);
	glVertex2i(100, 355);
	glVertex2i(100, 445);
	glEnd();
}

void building4() {
	glColor3f(0.333, 0.420, 0.184);
	glBegin(GL_POLYGON);
	glVertex2i(360, 500);
	glVertex2i(210 + 100, 450);
	glVertex2i(210 + 100, 200);
	glVertex2i(450, 200);
	glVertex2i(500, 300);
	glVertex2i(500, 500);
	glVertex2i(450, 450);
	glEnd();
	glColor3f(0.502, 0.502, 0.502);
	glBegin(GL_QUADS);
	glVertex2i(210 + 105, 450);
	glVertex2i(445, 450);
	glVertex2i(495, 500);
	glVertex2i(365, 500);
	glEnd();

	glColor3f(0.690, 0.769, 0.871);
	glBegin(GL_QUAD_STRIP);
	glVertex2i(315, 380);
	glVertex2i(315, 270);
	glVertex2i(450, 380);
	glVertex2i(450, 270);
	glVertex2i(495, 450);
	glVertex2i(495, 350);
	glEnd();

	//door
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(350, 200);
	glVertex2i(350, 260);
	glVertex2i(400, 260);
	glVertex2i(400, 200);
	glEnd();
}

void twinklingstars()
{
	glColor3f(1.000, 1.000, 0.000);
	glPointSize(7);
	glBegin(GL_POINTS);
	glVertex2i(rand() % 1000 - 200, rand() % 1000 - 200);
	glVertex2i(rand() % 1000 - 200, rand() % 1000 - 200);
	glVertex2i(rand() % 1000 - 200, rand() % 1000 - 200);
	glVertex2i(rand() % 1000 - 200, rand() % 1000 - 200);
	glEnd();
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(rand() % 1000 - 200, rand() % 1000 - 200);
	glVertex2i(rand() % 1000 - 200, rand() % 1000 - 200);
	glVertex2i(rand() % 1000 - 200, rand() % 1000 - 200);
	glVertex2i(rand() % 1000 - 200, rand() % 1000 - 200);
	glVertex2i(rand() % 1000 - 200, rand() % 1000 - 200);
	glVertex2i(rand() % 1000 - 200, rand() % 1000 - 200);
	glEnd();

	glPointSize(3);
	glBegin(GL_POINTS);
	glVertex2i(rand() % 1000 - 200, rand() % 1000 - 200);
	glVertex2i(rand() % 1000 - 200, rand() % 1000 - 200);
	glVertex2i(rand() % 1000 - 200, rand() % 1000 - 200);
	glVertex2i(rand() % 1000 - 200, rand() % 1000 - 200);
	glEnd();
}

void scene2() {
	
	nightsky();
	twinklingstars();
	moon();
	grass();
	road();
	building1();
	building2();
	building3();
	building4();
	
}