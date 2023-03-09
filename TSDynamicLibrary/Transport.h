#pragma once
#include <iostream>


#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif


DLL_API class Transport {
public:
	std::string name;
	int speed = 0;
	int TransportNumber = 0;
	float time = 0;
	float RestTime1 = 0;
	float RestTime2 = 0;
	float RestTimeAfter = 0;
	float Coefficient = 0;

	float RaceCompletionTime = 0;
	float DistanceReduction = 0;

public:
	std::string getName();
	int getSpeed();
	int getTransportNumber();
	float getTime();
	float getRestTime1();
	float getRestTime2();
	float getRestTimeAfter();
	float getCoefficient();

	float RaceCompletionTime1(float distance);
};