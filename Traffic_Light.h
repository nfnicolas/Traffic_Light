#pragma once
#include<iostream>
#include<Windows.h>
#include<ctime>
#include<conio.h>
#include"Screen.h"

enum color { RED, YELLOW, GREEN };      //color traffic color 
enum key { s = 115, p = 112, e = 101 };  //control keys

class Traffic_Light
{
	color current_color;
	color previos_color;
	Screen screen;
	void processing();       //working traffic light
	bool stop();             //pause traffic_light
public:
	Traffic_Light();
	friend class People;     //for access private member Traffic_Light
	~Traffic_Light();
};

