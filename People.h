#pragma once
#include"Traffic_Light.h"


class People
{
	Screen screen;
	Traffic_Light traffic_light;
public:
	People();
	void run();
	~People();
};

