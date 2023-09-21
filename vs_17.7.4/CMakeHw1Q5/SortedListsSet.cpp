#include <list>
#include "SortedListsSet.h"
//struct A
SortedListsSet::SortedListsSet()
{
	std::list<int> a1 = { 1, 2, 3, 4, 8, 10, 11, 15, 17, 19 };
	std::list<int> a2 = { 3, 4, 5, 6, 7, 9, 11, 12, 14, 16 };
	std::list<int> a3 = { 1, 2, 3, 7, 9, 11, 12, 16, 17, 18 };
	std::list<int> a4 = { 1, 5, 7, 9, 10, 11, 13, 14, 16, 20 };
	std::list<int> a5 = { 5, 7, 8, 10, 11, 12, 15, 16, 17, 20 };
	
	std::list<std::list<int>> sortedLists = { a1, a2, a3, a4, a5 };
	/*int a1[10] = { 1, 2, 3, 4, 8, 10, 11, 15, 17, 19 };
	int a2[10] = { 3, 4, 5, 6, 7, 9, 11, 12, 14, 16 };
	int a3[10] = { 1, 2, 3, 7, 9, 11, 12, 16, 17, 18 };
	int a4[10] = { 1, 5, 7, 9, 10, 11, 13, 14, 16, 20 };
	int a5[10] = { 5, 7, 8, 10, 11, 12, 15, 16, 17, 20 };*/
}
