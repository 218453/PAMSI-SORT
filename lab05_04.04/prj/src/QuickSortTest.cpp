#include "QuickSortTest.h"

void QuickSortTest::run()
{
	Sort(array, 0, size-1);
}

void QuickSortTest::prepare(int problem_size)
{
	size = problem_size;
	array = new int[problem_size];
	
	if(sortCase == 1)
	{
		srand(time(NULL));
		for(int i = 0; i < problem_size; i++)
		{
			array[i] = rand() % problem_size;
		}	 	  
	}
	else if (sortCase == 2)
	{
		for(int i = 0; i < problem_size; i++)
		{
			array[i] = (problem_size-1)-i;
			//array[i] = i;
		}
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