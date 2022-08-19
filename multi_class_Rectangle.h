#pragma once

#include "multi_class_Parallelogram.h"


#ifndef lib_Rectangle _EXPORT
#define Rectangle_API __declspec(dllexport)
#else
#define Rectangle_API __declspec(dllimport)
#endif

namespace Rectangle
{
	class Rectangle : public Parallelogram::Parallelogram
	{
	public:


		Rectangle_API Rectangle(int a, int b, std::string _name);

	};

}