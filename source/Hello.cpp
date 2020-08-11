#include "Hello.h"
#include "impl/Hello.h"
#include <iostream>


void Hello()
{
	std::cout << "Hello.cpp" << std::endl;
	impl::Hello();
}