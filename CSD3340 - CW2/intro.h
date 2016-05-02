void drawTitle() { 
	
	//(T)HE
	glBegin(GL_QUADS);
	glColor3f(0.604, 0.804, 0.196);
	glVertex2f(55, 210);
	glVertex2f(135, 210);
	glVertex2f(130.5, 190);
	glVertex2f(50, 190);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(80.5, 190);
	glVertex2f(100, 190);
	glVertex2f(85.5, 100);
	glVertex2f(70, 100);
	glEnd();

	//T(H)E
	glBegin(GL_QUADS);
	glVertex2f(145, 210);
	glVertex2f(160, 210);
	glVertex2f(145, 100);
	glVertex2f(130, 100);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(155, 165);
	glVertex2f(220, 165);
	glVertex2f(215.5, 145);
	glVertex2f(135, 145);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(210, 210);
	glVertex2f(225.5, 210);
	glVertex2f(215.5, 100);
	glVertex2f(195.5, 100);
	glEnd();

	//TH(E)
	glBegin(GL_POLYGON);
	glVertex2f(235, 210);
	glVertex2f(320, 210);
	glVertex2f(315, 190);
	glVertex2f(231, 190);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(235, 210);
	glVertex2f(250.5, 210);
	glVertex2f(240, 100);
	glVertex2f(220.5, 100);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(235, 165.5);
	glVertex2f(270, 165.5);
	glVertex2f(265.5, 145);
	glVertex2f(225, 145);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(225.5, 125);
	glVertex2f(310, 125);
	glVertex2f(305.5, 100);
	glVertex2f(220.5, 100);
	glEnd();

	//(H)UNGRY
	glBegin(GL_QUADS);
	glVertex2f(345 + 50, 210);
	glVertex2f(360 + 50, 210);
	glVertex2f(345 + 50, 100);
	glVertex2f(330 + 50, 100);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(355 + 50, 165);
	glVertex2f(420 + 50, 165);
	glVertex2f(415.5 + 50, 145);
	glVertex2f(335 + 50, 145);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(410 + 50, 210);
	glVertex2f(425.5 + 50, 210);
	glVertex2f(415.5 + 50, 100);
	glVertex2f(395.5 + 50, 100);
	glEnd();

	//H(U)NGRY
	glBegin(GL_QUADS);
	glVertex2f(475 + 50, 210);
	glVertex2f(490 + 50, 210);
	glVertex2f(495.5 - 20 + 50, 125);
	glVertex2f(480 - 20 + 50, 125);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(475 + 50, 125);
	glVertex2f(460.5 + 50, 125);
	glVertex2f(465 - 20 + 50, 100.5);
	glVertex2f(480 - 20 + 50, 100);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(440 + 50, 210);
	glVertex2f(455.5 + 50, 210);
	glVertex2f(465 - 20 + 50, 100.5);
	glVertex2f(445- 20 + 50, 100.5);
	glEnd();
	//HU(N)GRY
	glBegin(GL_QUADS);
	glVertex2f(545 - 50 + 50, 210);
	glVertex2f(560 - 50 + 50, 210);
	glVertex2f(545 - 50 + 50, 100);
	glVertex2f(530 - 50 + 50, 100);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(545 - 50 + 50, 210);
	glVertex2f(560 - 50 + 50, 210);
	glVertex2f(545 + 50, 100);
	glVertex2f(530 + 50, 100);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(545 + 50, 210);
	glVertex2f(560 + 50, 210);
	glVertex2f(545 + 50, 100);
	glVertex2f(530 + 50, 100);
	glEnd();
	//HUN(G)RY
	glBegin(GL_QUADS);
	glVertex2f(535 - 30 + 70 + 50, 210 );
	glVertex2f(620 - 30 + 70 + 50, 210 );
	glVertex2f(615 - 30 + 70 + 50, 190);
	glVertex2f(531 - 30 + 70 + 50, 190 );
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(535 - 30 + 70 + 50, 210 );
	glVertex2f(550.5 - 30 + 70 + 50, 210 );
	glVertex2f(540 - 30 + 70 + 50, 100 );
	glVertex2f(520.5 - 30 + 70 + 50, 100 );
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(535 + 20 + 70 + 50, 165.5 );
	glVertex2f(570  + 20 + 70 + 50, 165.5 );
	glVertex2f(565.5  + 20 + 70 + 50, 145 );
	glVertex2f(525  + 20 + 70 + 50, 145 );
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(525.5 - 30 + 70 + 50, 125 );
	glVertex2f(610 - 30 + 70 + 50, 125 );
	glVertex2f(605.5 - 30 + 70 + 50, 100 );
	glVertex2f(520.5 - 30 + 70 + 50, 100 );
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(635 - 30 -30 + 70 + 50, 110 + 50);
	glVertex2f(650.5 - 30 - 30 + 70 + 50, 110 + 50);
	glVertex2f(640 - 30 - 30 + 70 + 50, 100);
	glVertex2f(620.5 - 30 - 30 + 70 + 50, 100);
	glEnd();

	//HUNG(R)Y
	glBegin(GL_QUADS);
	glVertex2f(745 - 50 + 50, 210);
	glVertex2f(760 - 50 + 50, 210);
	glVertex2f(745 - 50 + 50, 100);
	glVertex2f(730 - 50 + 50, 100);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(745 - 50 + 50, 160);
	glVertex2f(760 - 50 + 50, 160);
	glVertex2f(745 + 50, 100);
	glVertex2f(730 + 50, 100);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2f(695 + 50, 210);
	glVertex2f(765.5 + 50, 210);
	glVertex2f(765.5 + 50, 200);
	glVertex2f(695 + 50, 200);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(750 + 50, 200);
	glVertex2f(765.5 + 50, 200);
	glVertex2f(765.5 + 50, 175);
	glVertex2f(750 + 50, 175);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(695 + 50, 175);
	glVertex2f(765.5 + 50, 175);
	glVertex2f(765.5 + 50, 155);
	glVertex2f(695 + 50, 155);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(695 + 50, 200);
	glVertex2f(700 + 50, 200);
	glVertex2f(700 + 50, 175);
	glVertex2f(695 + 50, 175);
	glEnd();

	//HUNGR(Y)
	glBegin(GL_QUADS);
	glVertex2f(775+ 50 + 50, 210);
	glVertex2f(790 + 50 + 50, 210);
	glVertex2f(795.5 - 20 + 50 + 50, 175);
	glVertex2f(780 - 20 + 50 + 50, 175);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(775 + 50 + 50, 175);
	glVertex2f(760.5 + 50 + 50, 175);
	glVertex2f(765 - 20 + 50 + 50, 150.5);
	glVertex2f(780 - 20 + 50 + 50, 150);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(740 + 50 + 50, 210);
	glVertex2f(755.5 + 50 + 50, 210);
	glVertex2f(765 - 20 + 50 + 50, 150.5);
	glVertex2f(745 - 20 + 50 + 50, 150.5);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(735 - 30 - 30 + 60 + 50 + 50, 110 + 50);
	glVertex2f(750.5 - 30 - 30 + 60 + 50 + 50, 110 + 50);
	glVertex2f(740 - 30 - 30 + 60 + 50 + 50, 100);
	glVertex2f(720.5 - 30 - 30 + 60 + 50 + 50, 100);
	glEnd();

	//(T)-REX
	glBegin(GL_QUADS);
	glColor3f(0.604, 0.804, 0.196);
	glVertex2f(955, 210);
	glVertex2f(1035, 210);
	glVertex2f(1030.5, 190);
	glVertex2f(950, 190);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(980.5, 190);
	glVertex2f(1000, 190);
	glVertex2f(985.5, 100);
	glVertex2f(970, 100);
	glEnd();
	//T(-)REX
	glBegin(GL_QUADS);
	glVertex2f(935 + 20 + 70, 165.5);
	glVertex2f(970 + 20 + 70, 165.5);
	glVertex2f(965.5 + 20 + 70, 145);
	glVertex2f(925 + 20 + 70, 145);
	glEnd();

	//T-(R)EX
	glBegin(GL_QUADS);
	glVertex2f(1145 - 50, 210);
	glVertex2f(1160 - 50, 210);
	glVertex2f(1145 - 50, 100);
	glVertex2f(1130 - 50, 100);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(1145 - 50, 160);
	glVertex2f(1160 - 50, 160);
	glVertex2f(1145, 100);
	glVertex2f(1130, 100);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(1095, 210);
	glVertex2f(1165.5, 210);
	glVertex2f(1165.5, 200);
	glVertex2f(1095, 200);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(1150, 200);
	glVertex2f(1165.5, 200);
	glVertex2f(1165.5, 175);
	glVertex2f(1150, 175);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(1095, 175);
	glVertex2f(1165.5, 175);
	glVertex2f(1165.5, 155);
	glVertex2f(1095, 155);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(1095, 200);
	glVertex2f(1100, 200);
	glVertex2f(1100, 175);
	glVertex2f(1095, 175);
	glEnd();

	//T-R(E)X
	glBegin(GL_POLYGON);
	glVertex2f(1135 + 50, 210);
	glVertex2f(1220 + 50, 210);
	glVertex2f(1215 + 50, 190);
	glVertex2f(1131 + 50, 190);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(1135 + 50, 210);
	glVertex2f(1150.5 + 50, 210);
	glVertex2f(1140 + 50, 100);
	glVertex2f(1120.5 + 50, 100);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(1135 + 50, 165.5);
	glVertex2f(1170 + 50, 165.5);
	glVertex2f(1165.5 + 50, 145);
	glVertex2f(1125 + 50, 145);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(1125.5 + 50, 125);
	glVertex2f(1210 + 50, 125);
	glVertex2f(1205.5 + 50, 100);
	glVertex2f(1120.5 + 50, 100);
	glEnd();
	//T-RE(X)
	glBegin(GL_QUADS);
	glVertex2f(1345 - 50, 210);
	glVertex2f(1360 - 50, 210);
	glVertex2f(1345, 100);
	glVertex2f(1330, 100);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(1345 , 210);
	glVertex2f(1330, 210);
	glVertex2f(1345 - 50, 100);
	glVertex2f( 1360 - 50, 100);
	glEnd();
}

void drawBackground() {
	glColor3f(0.000, 0.0, 0.000);
	glBegin(GL_QUADS);
	glVertex2f(0, 0);
	glVertex2f(0, 500);
	glVertex2f(750, 500);
	glVertex2f(750, 0);
	glEnd();

	glColor3f(0.000, 0.502, 0.000);
	glBegin(GL_QUADS);
	glVertex2f(0, 100);
	glVertex2f(0, 400);
	glVertex2f(750, 400);
	glVertex2f(750, 100);
	glEnd();
}

void intro() {
	drawBackground();
	glPushMatrix();
	glTranslatef(0, 300, 0);
	glScalef(0.4, 0.4, 1);//0.6 
	drawTitle();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-300, -150, 0);
	glScalef(1.0, 1.0, 1);//0.6 
	dinoRight();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-100, 50, 0);
	glScalef(0.6, 0.6, 1);//0.6 
	human();
	glPopMatrix();
}
