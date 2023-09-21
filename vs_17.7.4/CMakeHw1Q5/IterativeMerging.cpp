#include <list>
#include "SortedListsSet.h"
#include <string>
#include "merge.h"
std::list<int> iterativeListsMerge()
{
	std::list<int> C = {};
	SortedListsSet* sortedSet = new SortedListsSet();
	//sortedSet->sortedLists;

	//struct A array{};
	//A.for_each([&](int i) {C.push_back(i); });


	for (int i = 0; i < sortedSet->sortedLists->size(); i++)
	{
		//std::list<int> currentList = sortedSet->sortedLists[i];
		//C = merge(C, sortedSet->sortedLists[i]);
		std::list<int> currentList = sortedSet->sortedLists->front();
		C = merge(C, currentList);
		sortedSet->sortedLists->pop_front();
	}
	return C;
};