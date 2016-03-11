#ifndef NUMBERSFROMFILEHEADER_H_
#define NUMBERSFROMFILEHEADER_H_

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

string getFileName();

void initializeArray(string fileNameIn, vector<int>& numberArrayIn);

int getLowest(vector<int> numberArrayIn);
int getHighest(vector<int> numberArrayIn);
int getSum(vector<int> numberArrayIn);
double getAverage(vector<int> numberArrayIn);

bool wantToExit();

#endif
