#pragma once
#include "multi_class_Quadrilateral.h"

#ifndef lib_Parallelogram _EXPORT
#define Parallelogram_API __declspec(dllexport)
#else
#define Parallelogram_API __declspec(dllimport)
#endif

namespace Parallelogram
{
	class Parallelogram : public Quadrilateral::Quadrilateral
	{
	public:


		Parallelogram_API Parallelogram(const int A, int B, int a, int b, std::string _name);

	};
}