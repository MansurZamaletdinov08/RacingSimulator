#include "GroundTransportation.h"


Camel::Camel() {
	Transport::name = "�������";
	Transport::speed = 10;
	Transport::time = 30;
	Transport::RestTime1 = 5;
	Transport::RestTimeAfter = 8;
}


CamelIsFast::CamelIsFast() {
	Transport::name = "�������-���������";
	Transport::speed = 40;
	Transport::time = 10;
	Transport::RestTime1 = 5;
	Transport::RestTime2 = 6.5;
	Transport::RestTimeAfter = 8;
}


Centaur::Centaur() {
	Transport::name = "�������";
	Transport::speed = 15;
	Transport::time = 8;
	Transport::RestTimeAfter = 2;
}


AllTerrainBoots::AllTerrainBoots() {
	Transport::name = "�������-���������";
	Transport::speed = 6;
	Transport::time = 60;
	Transport::RestTime1 = 10;
	Transport::RestTimeAfter = 5;
}