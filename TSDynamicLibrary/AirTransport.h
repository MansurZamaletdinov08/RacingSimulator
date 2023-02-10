#pragma once
#include "Transport.h"

#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif

DLL_API class MagicCarpet : public Transport {
	MagicCarpet();
};