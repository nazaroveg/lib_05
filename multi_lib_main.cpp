// multi_class_main.cpp : 
//



#include <clocale>
#include "multi_header.h"



int main()
{

	setlocale(LC_ALL, "RUS");

	Triangle::Triangle tr{ 50,60,70,10,20,30, "Треугольник" };
	Right_triangle::Right_triangle Rt{ 50, 60, 10, 20, 30 };
	Isosceles_triangle::Isosceles_triangle It{ 50, 60, 10, 20 };
	Equilateral_triangle::Equilateral_triangle Et{ 60,30 };
	Quadrilateral::Quadrilateral Ql{ 50,60,70,80,10,20,30,40, "Четырёхугольник" };
	Parallelogram::Parallelogram Pl{ 30, 40, 20, 30, "Параллелограмм:" };
	Rectangle::Rectangle Re{ 20,30, "Прямоугольник:" };
	Rhombus::Rhombus Rh{ 30,40,30, "Ромб:" };
	Square::Square Sq{ 20, "Квадрат:" };


	tr.print_info();
	Rt.print_info();
	It.print_info();
	Et.print_info();
	Ql.print_info();
	Pl.print_info();
	Re.print_info();
	Sq.print_info();
	Rh.print_info();

	return 0;

}
