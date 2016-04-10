#ifndef MERGESORTTEST_H
#define MERGESORTTEST_H

#include "MergeSort.h"
#include "IRunnable.h"

#include <cstdlib>
#include <iostream>
using namespace std;

class MergeSortTest: MergeSort, IRunnable
{
private:
	int size;
	int *array;
public:
	~MergeSortTest()
	{
		delete [] array;
	}
  virtual void run();
  virtual void prepare(int problem_size);
  void Show();
};


#endif