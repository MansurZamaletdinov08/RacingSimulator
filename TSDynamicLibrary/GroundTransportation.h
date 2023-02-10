#include "Transport.h"
#pragma once

#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif


DLL_API class Camel : public Transport {
	Camel();
};

DLL_API class CamelIsFast : public Transport {
	CamelIsFast();
};

DLL_API class Centaur : public Transport {
	Centaur();
};

DLL_API class AllTerrainBoots : public Transport {
	AllTerrainBoots();
};