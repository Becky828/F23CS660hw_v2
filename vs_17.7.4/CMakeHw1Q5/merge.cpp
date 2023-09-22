//#include <vector>
#include <list>

std::list<int> merge(std::list<int> arrayOne, std::list<int> arrayTwo)
{
	std::list<int> result;
	//if (arrayOne.back() == 0)
	if(arrayOne.empty())
		return arrayTwo;
	//return arrayTwo;
	//if (arrayTwo.back() == 0)
	if (arrayTwo.empty())
		return arrayOne;
	if (arrayOne.front() <= arrayTwo.front())
	{
		//result.push_back(arrayOne.front());
		result.insert(result.end(), arrayOne.front());
		arrayOne.pop_front();
		std::list<int> recursion = merge(arrayOne, arrayTwo);
		result.insert(result.end(), recursion.begin(), recursion.end());
		return result;
	}
	else
	{
		result.insert(result.end(), arrayTwo.front());
		arrayTwo.pop_front();
		std::list<int> recursion = merge(arrayOne, arrayTwo);
		result.insert(result.end(), recursion.begin(), recursion.end());
		return result;
	}

};