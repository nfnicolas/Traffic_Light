#include "People.h"



People::People()
{
}

void People::run()
{
	int ch = 0;
		while (!_kbhit())
		{
			ch = _getch();
			switch (ch)
			{
			case s:
					traffic_light.processing();  //if user select START
					break;
			case p:                               //if user select PAUSE
					traffic_light.stop();
				break;
			case e:                                //if user select EXIT
				screen.displayMessage("Bye-bye\n");
				return; 
				break;
			default:                                  //if user select wrong choice
				screen.displayMessage("WRONG INPUT\n");
				screen.displayMessage("Try again\n");
			}
		}
}


People::~People()
{
}
