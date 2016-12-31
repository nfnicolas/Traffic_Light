#include "Traffic_Light.h"


void Traffic_Light::processing()
{
		do
		{
			if(_kbhit())      //if during working traffic light user input PAUSE
			{
				_getch() == p;
				 stop(); break;
			}
					
			switch (current_color)
			{
			case RED:
				screen.displayMessage("Red light");
				Sleep(2000);
				current_color = YELLOW;
				previos_color = RED;
				break;
			case YELLOW:
				screen.displayMessage("Yellow light");
				Sleep(4000);
				if (previos_color == RED)      //call Green or Red light
				{
					current_color = GREEN;
				}
				else
				{
					current_color = RED;
				}
				break;
			case GREEN:
				screen.displayMessage("Green light");
				Sleep(3000);
				current_color = YELLOW;
				previos_color = GREEN;
				break;
			}
		} while (true);
}

bool Traffic_Light::stop()
{
	if (true)
	{
		screen.displayMessage("***PAUSE***PAUSE***PAUSE***\n");
		_getch();                         //system wait START or EXIT
		
	}
	else
	return false;
}

Traffic_Light::Traffic_Light():current_color(RED)        //default is red light                                                       
{
}

Traffic_Light::~Traffic_Light()
{
}
