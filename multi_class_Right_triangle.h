#pragma once
#include "multi_class_triangle.h"


#ifndef lib_Right_triangle _EXPORT
#define Right_triangle_API __declspec(dllexport)
#else
#define Right_triangle_API __declspec(dllimport)
#endif

namespace Right_triangle
{
	class Right_triangle : public Triangle::Triangle
	{
	public:


		Right_triangle_API Right_triangle(const int A, int B, int a, int b, int c);

	};
}