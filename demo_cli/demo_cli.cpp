#include "demo_cli.h"
namespace democli {
	Class01::Class01() : ManagedObject(new demo::Class01){
		Console::WriteLine("Created the Class!");
	}

	double Class01::DoStuff(double num1, double num2)
	{
		return num1 - num2;
	}
}
