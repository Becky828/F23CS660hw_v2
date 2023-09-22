// CMakeHw1Q5.cpp : Defines the entry point for the application.
//

#include "CMakeHw1Q5.h"
//#include "IterativeMerging.h"
#include "merge.h"

using namespace std;

int main()
{
	//std::list<int> solution = iterativeListsMerge();
	//for (auto v : solution)
	//	std::cout << v << "\n";
	////cout << "Hello CMake." << endl;

	std::list<int> a1 = { 1, 2, 3, 4, 8, 10, 11, 15, 17, 19 };
	std::list<int> a2 = { 3, 4, 5, 6, 7, 9, 11, 12, 14, 16 };
	std::list<int> a3 = { 1, 2, 3, 7, 9, 11, 12, 16, 17, 18 };
	std::list<int> a4 = { 1, 5, 7, 9, 10, 11, 13, 14, 16, 20 };
	std::list<int> a5 = { 5, 7, 8, 10, 11, 12, 15, 16, 17, 20 };

	std::list<std::list<int>> sortedLists = { a1, a2, a3, a4, a5 };

	//std::list<int> solution = iterativeListsMerge(sortedLists);

	
	std::list<int> C = {};

	for (std::list<int> list : sortedLists)
	{
		C = merge(C, list);
	}
	//for (auto v : solution)
		//std::cout << v << "\n";
	////cout << "Hello CMake." << endl;

	return 0;
}

//std::list<int> iterativeListsMerge(std::list<std::list<int>> A)
//{
	//std::list<int> C = {};
	//SortedListsSet* sortedSet = new SortedListsSet();
	//sortedSet->sortedLists;

	//struct A array{};
	//A.for_each([&](int i) {C.push_back(i); });

	//for (int i = 0; i < A.size(); i++)
	//for (auto const& i : data) {
	//A.begin();
	//for (int i = 0; i < sortedSet->sortedLists->size(); i++)
	//for (std::list<list<int>>::iterator it = A.begin(); it != A.end(); ++it) {
		//std::cout << it->name;
		//std::cout << it.;

	//}
	
	//for(std::list<int> list: A)
	//{
		//std::list<int> currentList = sortedSet->sortedLists[i];
		//C = merge(C, sortedSet->sortedLists[i]);
		//std::list<int> currentList = A->front();
		//C = merge(C, currentList);

		//sortedSet->sortedLists->pop_front();
		//for (int i : list)
		//{
			//cout << i << ", ";
		//}
		//cout << list << ", ";

	//}
	//return C;
//};
