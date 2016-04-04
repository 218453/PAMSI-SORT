#include "QuickSortTest.h"

void QuickSortTest::run()
{
	Sort(array, 0, size-1);
}

void QuickSortTest::prepare(int problem_size)
{
	size = problem_size;
	array = new int[problem_size];
	
	srand(time(NULL));
	
	for(int i = 0; i < problem_size; i++)
	{
		array[i] = rand() % problem_size;
	}
}

void QuickSortTest::Show()
{
	cout << "Show:" << endl;
	for(int i = 0; i < size; i++)
	{
		cout << array[i] << endl;
	}
}