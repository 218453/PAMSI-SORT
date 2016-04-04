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
public:
  virtual void run();
  virtual void prepare(int problem_size);
  void Show();
};


#endif