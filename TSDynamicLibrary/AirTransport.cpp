#include "AirTransport.h"
#include "../RacingSimulator/Distance.h"

MagicCarpet::MagicCarpet() {
	Transport::name = "����-������";
	Transport::speed = 10;
	Transport::Coefficient = 5;
}

Eagle::Eagle() {
	Transport::name = "���";
	Transport::speed = 8;
	Transport::Coefficient = 6;
}

Broomstick::Broomstick() {
	Transport::name = "�����";
	Transport::speed = 20;
	Transport::Coefficient = 5;
}