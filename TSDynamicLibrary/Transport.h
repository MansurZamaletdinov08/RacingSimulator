#pragma once
#include <iostream>


#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif


DLL_API class Transport {
protected:
	std::string name;
	int speed;
	float time;
	float RestTime1;
	float RestTime2;
	float RestTimeAfter;
	float Coefficient;

public:
	std::string getName();
	int getSpeed();
	float getTime();
	float getRestTime1();
	float getRestTime2();
	float getRestTimeAfter();
	float getCoefficient();
};