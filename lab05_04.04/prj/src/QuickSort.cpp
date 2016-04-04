#include "QuickSort.h"

void QuickSort::Sort(int *array, int left, int right)
{
	if(right <= left)
	{
		return;
	}
	int i = left - 1;
	int j = right + 1;
	int pivot = array[(left+right)/2];
	
	while(1)
	{
		while(pivot>array[++i]);
		while(pivot<array[--j]);
		if(i <= j)
		{
			int tempValue = array[i];
			array[i] = array[j];
			array[j] = tempValue;
		}
		else
		{
			break;
		}
	}
	if(j > left)
	{
		Sort(array, left, j);
	}
	if(i < right)
	{
		Sort(array, i, right);
	}
}