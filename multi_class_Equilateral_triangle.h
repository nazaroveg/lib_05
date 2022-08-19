#pragma once
#include "multi_class_triangle.h"

#ifndef lib_Equilateral_triangle _EXPORT
#define Equilateral_triangle_API __declspec(dllexport)
#else
#define Equilateral_triangle_API __declspec(dllimport)
#endif // !lib_Equilateral_triangle _EXPORT




namespace Equilateral_triangle
{

	class Equilateral_triangle : public Triangle::Triangle
	{
	public:

		Equilateral_triangle_API Equilateral_triangle(int A, int a);

	};
}

