#pragma once
#include "Transport.h"

#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif

DLL_API class MagicCarpet : public Transport {
public:
	MagicCarpet();
};


DLL_API class Eagle : public Transport {
	Eagle();
};

DLL_API class Broomstick : public Transport {
	Broomstick();
};