#pragma once
#include "multi_class_Firure.h"

#ifndef lib_Quadrilateral _EXPORT
#define Quadrilateral_API __declspec(dllexport)
#else
#define Quadrilateral_API __declspec(dllimport)
#endif

namespace Quadrilateral
{
	class Quadrilateral : public Figure::Figure
	{
	public:

		Quadrilateral_API Quadrilateral(const int A, int B, int C, int D, int a, int b, int c, int d, std::string _name);



		Quadrilateral_API void print_info() const override;

	protected:
		int corner_a = 0, corner_b = 0, corner_c = 0, corner_d = 0;
		int Length_a = 0, Length_b = 0, Length_c = 0, Length_d = 0;
	};
}



