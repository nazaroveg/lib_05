#pragma once
#include <string>

#ifndef lib_Figure _EXPORT
#define Figure_API __declspec(dllexport)
#else
#define Figure_API __declspec(dllimport)
#endif // lib_Figure_EXPORT

namespace Figure
{
	class  Figure
	{

	public:

		Figure_API  Figure(int sides_count, std::string name);

		Figure_API virtual void print_info() const;


	protected:
		std::string name{};
		int sides_count = 0;
	};
}