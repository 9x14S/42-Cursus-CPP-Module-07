#include <string>
#include <iostream>

#include "iter.hpp"

#define DEFAULT_SIZE 5

template <typename T>
void printElem(const T &a)
{
	std::cout << a << std::endl;
}

int main(void)
{
	      int          iArr[DEFAULT_SIZE] = {1, 2, 3, 4, 5};
	const int         ciArr[DEFAULT_SIZE] = {1, 2, 3, 4, 5};
	      std::string  sArr[DEFAULT_SIZE] = {"A", "B", "C", "D", "E"};
	const std::string csArr[DEFAULT_SIZE] = {"A", "B", "C", "D", "E"};
	::iter(iArr,   DEFAULT_SIZE, printElem);
	::iter(ciArr,  DEFAULT_SIZE, printElem);
	::iter(sArr,   DEFAULT_SIZE, printElem);
	::iter(csArr,  DEFAULT_SIZE, printElem);
	return 0;
}
