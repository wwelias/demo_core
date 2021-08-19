#include "demo.h"
#include <iostream>

using namespace std;

namespace demo
{
	Class01::Class01() {
		std::cout << "Created the Class!" << std::endl;
	}

	double Class01::DoStuff(double num1, double num2)
	{
		return num1 - num2;
	}

}