#include<iostream>
#include"People.h"
using namespace std;
int main(int argc, char**argv)
{
	string str = R"(   Welcom in work traffic light
    Default traffic light is RED
              MENU:
     s - START 
     p - PAUSE
     e - EXIT
  )";
	cout << str;
	People ob;
	ob.run();
	return 0;
}