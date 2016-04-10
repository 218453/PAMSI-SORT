#ifndef MERGESORT_H
#define MERGESORT_H

#include <iostream>
using namespace std;

class MergeSort
{
private:
	void Merge(int *array, int left, int center, int right);
public:
	void Sort(int *array, int left, int right);
};


#endif