#include <GL/glut.h>
#include <stdlib.h>

static int shoulder = 0, shoulderX=0,elbowX=0, elbow = 0, fingerBase = 0, fingerUp = 0, fingerBase2 = 0, fingerUp2 = 0, fingerBase3 = 0, fingerUp3 = 0, fingerBase4 = 0, fingerUp4 = 0;
static int bodyBox = 0, legBase = 0, legUp = 0, legBase2 = 0, legUp2 = 0, wholeShape = 0, legX = 0, leg2X=0, shoulder2=0;
int moving, startx, starty;


GLfloat angle = 0.0;   /* in degrees */
GLfloat angle2 = 0.0;   /* in degrees */



void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_FLAT);
}



void drawArm()
{
	glPushMatrix();


//Shoulder
	glTranslatef(1.125, 1.5, 0.0);
	glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)shoulderX, 0.0, 1.0, 0.0);
	glTranslatef(0.0, -1.0, 0.0);

	glPushMatrix();
	glColor3f(1.0, 0.5, 0.0);
	glScalef(0.25, 2.0, 0.5);
	glutWireCube(1.0);
	glPopMatrix();

//Elbow
	glPushMatrix();
	glTranslatef(0.0, -1.0, 0.0);
	glRotatef((GLfloat)elbow, 1.0, 0.0, 0.0);
	glTranslatef(0.0, -1.0, 0.0);

	glPushMatrix();
	glColor3f(1.0, 0.5, 0.0);
	glScalef(0.25, 2.0, 0.5);
	glutWireCube(1.0);
	glPopMatrix();
	glPopMatrix();

	//glPopMatrix();
	////=====================================FINGER 1==================================
	//glPushMatrix();

	////Finger1 base
	//glPushMatrix();

	//glTranslatef(0.0, -3.125, 0.2);
	//glRotatef((GLfloat)fingerBase, 0.0, 0.0, 1.0);
	//glTranslatef(0.0, 0.0, 0.0);

	//glPushMatrix();
	////glColor3f(0.5, 0.0,0.0);
	//glScalef(0.125, 0.25, 0.1);
	//glutWireCube(1.0);
	//glPopMatrix();

	//////Finger Flang 1

	//glTranslatef(0.0, -0.25, 0.0);
	//glRotatef((GLfloat)fingerUp, 0.0, 0.0, 1.0);

	//glPushMatrix();
	//glColor3f(0.5, 0.0, 8.0);
	//glScalef(0.125, 0.25, 0.1);
	//glutWireCube(1.0);
	//glPopMatrix();

	//glPopMatrix();
	////////////////////////////////////////////////////////////

	////=====================================FINGER 2==================================

	//glPushMatrix();

	////Finger2 base
	//glTranslatef(1.0, 0.2, 0.0);
	//glRotatef((GLfloat)fingerBase2, 0.0, 0.0, 1.0);
	//glTranslatef(0.125, 0.0, 0.0);

	//glPushMatrix();
	////glColor3f(0.5, 0.7, 2.0);
	//glScalef(0.25, 0.1, 0.1);
	//glutWireCube(1.0);
	//glPopMatrix();


	////Finger Flang 2

	//glTranslatef(0.125, 0.0, 0.0);
	//glRotatef((GLfloat)fingerUp2, 0.0, 0.0, 1.0);
	//glTranslatef(0.125, 0.0, 0.0);

	//glPushMatrix();
	////glColor3f(0.5, 0.0, 8.0);
	//glScalef(0.25, 0.1, 0.1);
	//glutWireCube(1.0);
	//glPopMatrix();

	//glPopMatrix();
	//////////////////////////////////////////////////////////////

	//	//=====================================FINGER 3==================================

	//glPushMatrix();

	////Finger3 base
	//glTranslatef(1.0, 0.2, -0.2);
	//glRotatef((GLfloat)fingerBase3, 0.0, 0.0, 1.0);
	//glTranslatef(0.125, 0.0, 0.0);

	//glPushMatrix();
	////glColor3f(0.5, 0.7, 2.0);
	//glScalef(0.25, 0.1, 0.1);
	//glutWireCube(1.0);
	//glPopMatrix();


	////Finger Flang 3

	//glTranslatef(0.125, 0.0, 0.0);
	//glRotatef((GLfloat)fingerUp3, 0.0, 0.0, 1.0);
	//glTranslatef(0.125, 0.0, 0.0);

	//glPushMatrix();
	////glColor3f(0.5, 0.0, 8.0);
	//glScalef(0.25, 0.1, 0.1);
	//glutWireCube(1.0);
	//glPopMatrix();

	//glPopMatrix();
	/////////////////////////////////////////////////

	////=====================================FINGER 4==================================

	//glPushMatrix();

	////Finger4 base

	//glTranslatef(1.0, 0.0, 0.4);
	//glRotatef((GLfloat)fingerBase4, 0.0, 1.0, 1.0);
	//glTranslatef(0.125, 0.0, 0.0);

	//glPushMatrix();
	////glColor3f(0.5, 0.0, 0.0);
	//glScalef(0.25, 0.1, 0.1);
	//glutWireCube(1.0);
	//glPopMatrix();

	////Finger Flang 4

	//glTranslatef(0.125, 0.0, 0.0);
	//glRotatef((GLfloat)fingerUp4, 0.0, 1.0, 1.0);
	//glTranslatef(0.125, 0.0, 0.0);

	//glPushMatrix();
	////glColor3f(0.5, 0.0, 8.0);
	//glScalef(0.25, 0.1, 0.1);
	//glutWireCube(1.0);
	//glPopMatrix();

	//glPopMatrix();

	////////////////////////////////////////////////////////////////

	glPopMatrix();
}


void drawLeg()
{
	glPushMatrix();

	//=====================================Left Leg==================================

	//Left Leg base
	glTranslatef(0.625, -1.5, 0.0);
	glRotatef((GLfloat)legBase, 1.0, 0.0, 0.0);
	glRotatef((GLfloat)legX, 0.0, 0.0, 1.0);

	glTranslatef(0.0, -1.25, 0.0);

	glPushMatrix();
	glColor3f(0.0, 0.0, 6.0);
	glScalef(0.75, 2.5, 1.0);
	glutWireCube(1.0);
	glPopMatrix();

	//Leg Flang 
	glTranslatef(0.0, -1.75, 0.0);
	glRotatef((GLfloat)legUp, 1.0, 0.0, 0.0);
	glTranslatef(0.0, -0.75, 0.0);

	glPushMatrix();
	glScalef(0.75, 2.5, 1.0);
	glutWireCube(1.0);
	glPopMatrix();

	//Shoes
	glTranslatef(0.0, -1.5, 0.0);

	glPushMatrix();
	glColor3f(1.0, 1.0, 1.0);
	glScalef(0.75, 0.5, 2.0);
	glutSolidCube(1.0);
	glPopMatrix();



	glPopMatrix();
}


void drawLeg2()
{
	glPushMatrix();

	//Leg base
	glTranslatef(-0.625, -1.5, 0.0);
	glRotatef((GLfloat)legBase2, 1.0, 0.0, 0.0);
	glRotatef((GLfloat)leg2X, 0.0, 0.0, 1.0);

	glTranslatef(0.0, -1.25, 0.0);

	glPushMatrix();
	glColor3f(0.0, 0.0, 6.0);
	glScalef(0.75, 2.5, 1.0);
	glutWireCube(1.0);
	glPopMatrix();

	//Leg Flang 
	glTranslatef(0.0, -1.75, 0.0);
	glRotatef((GLfloat)legUp2, 1.0, 0.0, 0.0);
	glTranslatef(0.0, -0.75, 0.0);

	glPushMatrix();
	glScalef(0.75, 2.5, 1.0);
	glutWireCube(1.0);
	glPopMatrix();

	//Shoes
	glTranslatef(0.0, -1.5, 0.0);

	glPushMatrix();
	glColor3f(1.0, 1.0, 1.0);
	glScalef(0.75, 0.5, 2.0);
	glutSolidCube(1.0);
	glPopMatrix();



	glPopMatrix();
}


void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(85.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 's':
		if (shoulder <= 120 || shoulder <= 120)
		{
			shoulder = (shoulder + 5) % 360;
		}
		glutPostRedisplay();
		break;
	case 'S':
		if (shoulder >= 60)
		{
			shoulder = (shoulder - 5) % 360;
		}
		glutPostRedisplay();
		break;
		
	case 'd':
		if (shoulderX <= 90)
		{
			shoulderX = (shoulderX + 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'D':
		if (shoulderX >= 60)
		{
			shoulderX = (shoulderX - 5) % 360;
		}
		glutPostRedisplay();
		break;


	case 'e':
		if (elbow <= 150 || elbow <= -150)
		{
			elbow = (elbow + 5) % 360;
		}
		glutPostRedisplay();
		break;
	case 'E':
		if (elbow >= -80)
		{
			elbow = (elbow - 5) % 360;
		}
		glutPostRedisplay();
		break;



	case 'f':
		if (fingerBase <= 90 || fingerBase <= -90)
		{
			fingerBase = (fingerBase + 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'F':
		if (fingerBase >= -30)
		{
			fingerBase = (fingerBase - 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'g':
		if (fingerUp <= 60 || fingerUp <= -60)
		{
			fingerUp = (fingerUp + 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'G':
		if (fingerUp >= -80)
		{
			fingerUp = (fingerUp - 5) % 360;
			glutPostRedisplay();
		}
		break;




	case 'z':
		if (fingerBase2 <= 90 || fingerBase2 <= -90)
		{
			fingerBase2 = (fingerBase2 + 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'Z':
		if (fingerBase2 >= -30)
		{
			fingerBase2 = (fingerBase2 - 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'x':
		if (fingerUp2 <= 60 || fingerUp2 <= -60)
		{
			fingerUp2 = (fingerUp2 + 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'X':
		if (fingerUp2 >= -80)
		{
			fingerUp2 = (fingerUp2 - 5) % 360;
			glutPostRedisplay();
		}
		break;



	case 'c':
		if (fingerBase3 <= 90 || fingerBase3 <= -90)
		{
			fingerBase3 = (fingerBase3 + 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'C':
		if (fingerBase3 >= -30)
		{
			fingerBase3 = (fingerBase3 - 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'v':
		if (fingerUp3 <= 60 || fingerUp3 <= -60)
		{
			fingerUp3 = (fingerUp3 + 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'V':
		if (fingerUp3 >= -80)
		{
			fingerUp3 = (fingerUp3 - 5) % 360;
			glutPostRedisplay();
		}
		break;


	case 'b':
		if (fingerBase4 <= 90 || fingerBase4 <= -90)
		{
			fingerBase4 = (fingerBase4 + 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'B':
		if (fingerBase4 >= -30)
		{
			fingerBase4 = (fingerBase4 - 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'n':
		if (fingerUp4 <= 60 || fingerUp4 <= -60)
		{
			fingerUp4 = (fingerUp4 + 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'N':
		if (fingerUp4 >= -60)
		{
			fingerUp4 = (fingerUp4 - 5) % 360;
			glutPostRedisplay();
		}
		break;


	case 'm':
		if (legBase <= 70 || legBase <= -70)
		{
			legBase = (legBase + 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'M':
		if (legBase >= -70)
		{
			legBase = (legBase - 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'k':
		if (legUp <= 70 || legUp <= -70)
		{
			legUp = (legUp + 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'K':
		if (legUp >= -15)
		{
			legUp = (legUp - 5) % 360;
			glutPostRedisplay();
		}
		break;

	case 'r':
		if (legX <= 90 || legX <= -90)
		{
			legX = (legX + 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'R':
		if (legX >= -5)
		{
			legX = (legX - 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'l':
		if (leg2X <= 5 || leg2X <= -5)
		{
			leg2X = (leg2X + 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'L':
		if (leg2X >= -90)
		{
			leg2X = (leg2X - 5) % 360;
			glutPostRedisplay();
		}
		break;

	case 'h':
		if (legBase2 <= 70 || legBase2 <= -70)
		{
			legBase2 = (legBase2 + 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'H':
		if (legBase2 >= -70)
		{
			legBase2 = (legBase2 - 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'j':
		if (legUp2 <= 70 || legUp2 <= -70)
		{
			legUp2 = (legUp2 + 5) % 360;
			glutPostRedisplay();
		}
		break;
	case 'J':
		if (legUp2 >= -15)
		{
			legUp2 = (legUp2 - 5) % 360;
			glutPostRedisplay();
		}
		break;
		

	case 'a':
		bodyBox = (bodyBox - 5) % 360;
		glutPostRedisplay();
		break;

	case 'A':
		bodyBox = (bodyBox + 5) % 360;
		glutPostRedisplay();
		break;

	case 'w':
		wholeShape = (wholeShape - 5) % 360;
		glutPostRedisplay();
		break;

	case 'W':
		wholeShape = (wholeShape + 5) % 360;
		glutPostRedisplay();
		break;

	case 27:
		exit(0);
		break;
	default:
		break;
	}
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	glPushMatrix();

	glRotatef(angle2, 1.0, 0.0, 0.0);
	glRotatef(angle, 0.0, 1.0, 0.0);
	
	glRotatef(wholeShape, 0.0, 1.0, 0.0);
	glTranslatef(0.0, 0.0, -1.0);
	glTranslatef(0.0, 1.5, 0.0);
	glRotatef(bodyBox, 0.0, 1.0, 0.0);
	glScalef(0.75, 0.75, 0.75);

	glPushMatrix();
	glTranslatef(0.0, 2.25, 0.0);
	glutWireSphere(0.5, 10, 16); /* draw head */
	glPopMatrix();

	//Neck
	glPushMatrix();
	glTranslatef(0.0, 1.75, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glScalef(0.5, 0.5, 0.5);
	glutWireCube(1.0);
	glPopMatrix();


	//Body box
	glPushMatrix();
	glColor3f(1.0, 0.5, 0.0);
	glScalef(2.0, 3.0, 1.0);
	glutWireCube(1.0);
	glPopMatrix();


	glPushMatrix();
	drawArm();
	glPopMatrix();

	glPushMatrix();
	//glTranslatef(-2.5, 2.5, 0.0);
	glRotatef(180.0, 0.0, -1.0, 0.0);
	//glRotatef(180.0, 0.0, 0.0, 1.0);
	glRotatef(180.0, 0.0, 1.0, 0.0);
	//glRotatef(0.0, 1.0, 0.0, 0.0);
	drawArm();
	glPopMatrix();


	glPushMatrix();
	//glTranslatef(-2.5, 2.5, 0.0);
	drawLeg();
	glPopMatrix();

	glPushMatrix();
	//glTranslatef(-2.5, 2.5, 0.0);
	drawLeg2();
	glPopMatrix();

	glPopMatrix();
	glutSwapBuffers();


}

static void mouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON) {
		if (state == GLUT_DOWN) {
			moving = 1;
			startx = x;
			starty = y;
		}
		if (state == GLUT_UP) {
			moving = 0;
		}
	}
}


static void motion(int x, int y)
{
	if (moving) {
		angle = angle + (x - startx);
		angle2 = angle2 + (y - starty);
		startx = x;
		starty = y;
		glutPostRedisplay();
	}
}



int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(argv[0]);
	init();
	glutMouseFunc(mouse);
	glutMotionFunc(motion);
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}