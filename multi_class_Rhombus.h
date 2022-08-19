#pragma once
#include "multi_class_Parallelogram.h"

#ifndef lib_Rhombus _EXPORT
#define Rhombus_API __declspec(dllexport)
#else
#define Rhombus_API __declspec(dllimport)
#endif

namespace Rhombus
{
	class Rhombus : public Parallelogram::Parallelogram
	{
	public:

		Rhombus_API Rhombus(const int A, int B, int a, std::string _name);

	};
}