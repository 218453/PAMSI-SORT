#include "MergeSortTest.h"

void MergeSortTest::run()
{
	Sort(array, 0, size-1);
}

void MergeSortTest::prepare(int problem_size)
{
	size = problem_size;
	array = new int[problem_size];
	
	srand(time(NULL));
	for(int i = 0; i < problem_size; i++)
	{
		array[i] = rand() % problem_size;
	}	 
}

void MergeSortTest::Show()
{
	cout << "Show:" << endl;
	for(int i = 0; i < size; i++)
	{
		cout << array[i] << endl;
	}
}