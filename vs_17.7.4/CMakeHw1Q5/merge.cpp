#include <vector>

std::vector<int> merge(std::vector<int> arrayOne, std::vector<int> arrayTwo)
{
	std::vector<int> result;
	if (arrayOne[arrayOne.size() - 1 == 0])
		return arrayTwo;
	if (arrayTwo[arrayTwo.size() - 1 == 0])
		return arrayOne;
	if (arrayOne[1] <= arrayTwo[1])
	{
		result.reserve(1+arrayOne.size());
		arrayOne.erase(arrayOne.begin());
		std::vector<int>  recursiveArray = merge(arrayOne, arrayTwo);

		result.insert(result.end(), arrayOne[0]);
		result.insert(result.end(), recursiveArray.begin(), recursiveArray.end());
	}
	else
	{
		result.reserve(1 + arrayTwo.size());
		arrayTwo.erase(arrayTwo.begin());
		std::vector<int>  recursiveArray = merge(arrayOne, arrayTwo);

		result.insert(result.end(), arrayTwo[0]);
		result.insert(result.end(), recursiveArray.begin(), recursiveArray.end());
	}	
};