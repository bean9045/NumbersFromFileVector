#include "numberFileVectorHeader.h"

string getFileName()
{
	string fileName;

	bool fileThere = false;

	do
	{
		cout << "Please enter the name of the file you'd like to use: " << flush;
		cin >> fileName;

		ifstream numbers;
		numbers.open(fileName.c_str());

		if (numbers)
		{
			cout << "Opening file...\n" << endl;
			fileThere = true;

		} else
		{
			cout << "INVALID FILE NAME.\n" << endl;
		}
		numbers.close();

	} while (!fileThere);

	return fileName;
}

void initializeArray(string fileNameIn, vector<int>& numberArrayIn)
{
	ifstream numbers;
	numbers.open(fileNameIn.c_str());

	int temp = 0;

	while (numbers >> temp)
	{
		numberArrayIn.push_back(temp);
	}
	numbers.close();
}

int getLowest(vector<int> numberArrayIn)
{
	int min = numberArrayIn[0];

	for (vector<int>::const_iterator iter = numberArrayIn.begin(); iter < numberArrayIn.end(); iter++)
	{
		if (*iter < min)
		{
			min = *iter;
		}
	}
	return min;
}

int getHighest(vector<int> numberArrayIn)
{
	int max = numberArrayIn[0];

	for (vector<int>::const_iterator iter = numberArrayIn.begin(); iter < numberArrayIn.end(); iter++)
	{
		if (*iter > max)
		{
			max = *iter;
		}
	}
	return max;
}

int getSum(vector<int> numberArrayIn)
{
	int sum = 0;

	for (vector<int>::const_iterator iter = numberArrayIn.begin(); iter < numberArrayIn.end(); iter++)
	{
		sum += *iter;
	}
	return sum;
}

double getAverage(vector<int> numberArrayIn)
{
	int sum = 0;
	int count = 0;

	for (vector<int>::const_iterator iter = numberArrayIn.begin(); iter < numberArrayIn.end(); iter++)
	{
		sum += *iter;
		count++;
	}

	return static_cast<double> (sum) / count;
}

bool wantToExit()
{
	char answer;

	bool validInput = false;
	bool wantsExit = false;

	do
	{
		cout << endl << "would you like to exit? (y/n): " << flush;
		cin >> answer;

		switch (answer)
		{
		  case 'Y':
		  case 'y': cout << "Exiting..." << endl;
		  	  	    validInput = true;
		  	  	    wantsExit = true;
		  	  	    break;
		  case 'N':
		  case 'n': cout << "Continuing...\n" << endl;
		  	  	    validInput = true;
		  	  	    wantsExit = false;
		  	  	    break;

		  default:  cin.clear();
		  	  	    cin.ignore(100, '\n');
		  	  	    cout << "Invalid input. Please use either \"y\" or \"n\"." << flush;
		  	  	    break;
		}
	} while (!validInput);

	return wantsExit;
}
