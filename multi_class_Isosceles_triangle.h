#pragma once
#include "multi_class_triangle.h"

#ifndef lib_Isosceles_triangle _EXPORT
#define Isosceles_triangle_API __declspec(dllexport)
#else
#define Isosceles_triangle_API __declspec(dllimport)
#endif

namespace Isosceles_triangle
{
	class Isosceles_triangle : public Triangle::Triangle
	{
	public:

		Isosceles_triangle_API	Isosceles_triangle(const int A, int B, int a, int b);

	};
}