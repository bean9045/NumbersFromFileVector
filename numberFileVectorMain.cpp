#include "numberFileVectorHeader.h"

int main()
{
	do
	{
		string fileName = getFileName();

		vector<int> numberArray;
		initializeArray(fileName, numberArray);

		cout << "The lowest number is: " << getLowest(numberArray) << endl;
		cout << "The highest number is: " << getHighest(numberArray) << endl;
		cout << "The sum of all these numbers is: " << getSum(numberArray) << endl;
		cout << "The average of all these numbers is: " << setprecision(10) << fixed << getAverage(numberArray) << endl;

	} while (!wantToExit());

	return 0;
}
