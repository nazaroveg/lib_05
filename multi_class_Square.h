#pragma once
#include "multi_class_Rectangle.h"
#include<string>


#ifndef lib_Square _EXPORT
#define Square_API __declspec(dllexport)
#else
#define Square_API __declspec(dllimport)
#endif

namespace Square
{
	class Square : public Rectangle::Rectangle
	{
	public:


		Square_API Square(const int a, std::string _name);

	};
}