# COMPUTER GRAPHICS COURSE

## Assignment 2: Full Robot
### Name: Amira Ahmad Noaman 
### Code: 1170400
______________________
### Tasks
1. Draw the Body 
2. Draw the arms
3. Draw the legs
4. Draw the head
5. Control the rotations with the keyboard
6. Move the whole shape around a certain axis 
7. Control the degree of freedom of each object

___________________________

#### 1) Number 1 is the easiest part in my point of view, just drew a box with specific measurements and centered it in the origin.

### 2) Drawing the arms was kinda easy as it is similar to the past assignment. The following example code shows the steps of how you do the rotation: 
```
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

    glPopMatrix();
}
```

### Generally the rotation steps are like this:
1. Translate the shape to the origin
2. Do the rotation
3. Translate it back to it's desired place
### and that's how you rotate around a fixed point.



### Controlling with the keyboard and adjusting degrees of freedom: This part was average difficulty, as you can use the example code to help. Here is a sample code:
```
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
        
````

### Here are the keys that corresponds to each movement:
1. Moving the shoulders:
    > "s" moving upward,
    > "S" moving downward
2. Press D a long press until the rotation stops
3. Moving the elbows: 
    >"e" moving downward, "E" moving upward
4. Moving the whole body around the y-axis:
    > "w" and "W" 
5. Moving leg 1:
    >"m" and "M"
6. Moving the knees of leg1:
    >"k" and "K"
7. Moving leg 2:
    >"h" and "H"
8. Moving Knee of leg 2:
    >"j" and "J"
9. Moving around itself:
    >"a"

### If you follow these steps you'll get something very similar like the gif posted on the assignment page.

### Pictures for the output
![image](Capture.jpg)
![image](Capture2.jpg)
![image](Capture3.jpg)
______________________
_______
