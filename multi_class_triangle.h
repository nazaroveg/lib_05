#pragma once
#include "multi_class_Firure.h"
#include <string>

#ifndef lib_Triangle _EXPORT
#define Triangle_API __declspec(dllexport)
#else
#define Triangle_API __declspec(dllimport)
#endif

namespace Triangle
{
	class Triangle : public Figure::Figure
	{

	public:

		Triangle_API Triangle(const int A, int B, int C, int a, int b, int c, std::string);




		Triangle_API void print_info() const override;
	protected:
		int corner_a = 0, corner_b = 0, corner_c = 0;
		int Length_a = 0, Length_b = 0, Length_c = 0;
	};
}