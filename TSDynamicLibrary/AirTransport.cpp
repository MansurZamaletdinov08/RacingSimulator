#include "AirTransport.h"
#include "../RacingSimulator/Distance.h"

MagicCarpet::MagicCarpet() {
	Transport::name = "Ковёр-самолёт";
	Transport::speed = 10;
	Transport::Coefficient = 5;
}

Eagle::Eagle() {
	Transport::name = "Орёл";
	Transport::speed = 8;
	Transport::Coefficient = 6;
}

Broomstick::Broomstick() {
	Transport::name = "Метла";
	Transport::speed = 20;
	Transport::Coefficient = 5;
}