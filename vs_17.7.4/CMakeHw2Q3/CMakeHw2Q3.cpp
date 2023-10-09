// CMakeHW2Q3.cpp : Defines the entry point for the application.
//

#include "CMakeHW2Q3.h"


int main()
{
	int n = 5;
	int currentPen = 0;
	int minPen = INT_MAX;
	int j = 0;
	//int newIndex = 0;
	int distanceToNext = 0;
	/*int previousPenaltyCheckpoint = 0;
	int currentPenaltyCheckpoint = 0;*/
	int newPenalty = 0;
	int recentPenalty = 0;
	int traveledMiles = 0;
	int remainingMiles = 0;
	int nextCheckPoint = 0;

	int D[5] = { 1, 201, 401, 601, 801};

	remainingMiles = D[4];

	int P[6] = { 0, 0, 0, 0, 0};
	int U[6] = { 0, 0, 0, 0, 0};

	for (int i = 1; i < n; i++) {
		for (int x = 0; i + x < remainingMiles; x++) {
			//currentPen = penalty(x);
			currentPen = (200 - x) * (200 - x);
			if (currentPen < minPen) {
				minPen = currentPen;
				distanceToNext = x + i;
				//newIndex = i + x;
			}
		}

		for (int k = 0; k < n; k++) {
			if (D[k] <= distanceToNext) {
				nextCheckPoint = k;
			}

		}
		//recentPenalty = P[j];

		//recentPenalty = P[n-i];
		++j;
		//newPenalty = recentPenalty + minPen;
		//P[n-newIndex] = newPenalty;
		//P[j] = newPenalty;
		P[j] = minPen;
		//newPenalty = 0;
		//recentPenalty = 0;
		//U[j] = newIndex;
		currentPen = 0;
		minPen = INT_MAX;
		/*if (newIndex != n-1)
		{

			i = newIndex - 1;
		}*/
		//i = newIndex;

		//newIndex = 0;

		//traveledMiles = traveledMiles+D[newIndex];
		traveledMiles = traveledMiles + D[nextCheckPoint];
		remainingMiles = remainingMiles - traveledMiles;
		

	}
	std::cout << "Hello CMake." << std::endl;
	return 0;
}

//int penalty(int x)
//{
//	return (200 - x) * (200 - x);
//}