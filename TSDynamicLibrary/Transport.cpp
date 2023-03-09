#include "Transport.h"


float Transport::RaceCompletionTime1(float distance) {
	if (speed == 10) {
		if (distance < 1000) {
			Coefficient = 0;
		}
		if (distance > 1000 || distance < 5000) {
			Coefficient = 3;
		}
		if (distance > 5000 || distance < 10000) {
			Coefficient = 10;
		}
		if (distance >= 1000) {
			Coefficient = 5;
		}

		DistanceReduction = distance * (Coefficient / 100);
	}

	if (speed == 8) {
		Coefficient = 6;
		DistanceReduction = distance * (Coefficient / 100);
	}

	if (speed == 20) {
		Coefficient = distance / 1000;
		DistanceReduction = distance * (Coefficient / 100);
	}

	RaceCompletionTime = DistanceReduction / speed;
	return RaceCompletionTime;
}

std::string Transport::getName() {
	return name;
}

int Transport::getSpeed() {
	return speed;
}

int Transport::getTransportNumber() {
	return TransportNumber;
}

float Transport::getTime() {
	return time;
}

float Transport::getRestTime1() {
	return RestTime1;
}

float Transport::getRestTime2() {
	return RestTime2;
}

float Transport::getRestTimeAfter() {
	return RestTimeAfter;
}

float Transport::getCoefficient() {
	return Coefficient;
}