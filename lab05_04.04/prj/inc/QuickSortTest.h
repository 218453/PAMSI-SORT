#ifndef QUICKSORTTEST_H
#define QUICKSORTTEST_H

#include "QuickSort.h"
#include "IRunnable.h"

#include <cstdlib>
#include <iostream>
using namespace std;

class QuickSortTest: QuickSort, IRunnable
{
private:
	int size;
	int *array;
	int sortCase; // 1 - avarage case, 2- pesymistic case
public:
	QuickSortTest(int sortingCase)
	{
		sortCase = sortingCase;
	}
	~QuickSortTest()
	{
		delete [] array;
	}
  virtual void run();
  virtual void prepare(int problem_size);
  void Show();
};


#endif