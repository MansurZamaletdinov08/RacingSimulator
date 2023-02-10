#pragma once


#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif


DLL_API class MathCalculator {
public:
	DLL_API int Sum(int a, int b);
	DLL_API int Sub(int a, int b);
};