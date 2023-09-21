// CMakeHw1Q5.cpp : Defines the entry point for the application.
//

#include "CMakeHw1Q5.h"
#include "IterativeMerging.h"

using namespace std;

int main()
{
	std::list<int> solution = iterativeListsMerge();
	for (auto v : solution)
		std::cout << v << "\n";
	//cout << "Hello CMake." << endl;
	return 0;
}
