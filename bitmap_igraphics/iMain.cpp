# include "iGraphics.h"

int x = 300, y = 300, r = 20, mx = -90, my = -90, z = 0;
/*
	function iDraw() is called again and again by the system.

	*/

void iDraw()
{
    //place your drawing codes here
    //iClear();
    //iShowBMP (0, 0, "1.bmp");
    iSetColor (mx + z, my + z, 234);
    iFilledCircle (mx, my, 5, 100);
    iFilledCircle (mx + 5, my + 5, 5, 100);

    iShowBMP (0, 0, "1.bmp");

}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove (int mx1, int my1)
{

    //place your codes here
    mx = mx1;
    my = my1;
    printf ("%d %d\n", mx, my);
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse (int button, int state, int mx, int my)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        //place your codes here
        //	printf("x = %d, y= %d\n",mx,my);

    }
    if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {
        //place your codes here

    }
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard (unsigned char key)
{
    if (key == 'a')
    {
        exit (0);
    }
    //place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard (unsigned char key)
{

    if (key == GLUT_KEY_END)
    {
        exit (0);
    }
    //place your codes for other keys here
}


int main()
{
    //place your own initialization codes here.
    iInitialize (900, 600, "bitmap");
    return 0;
}
