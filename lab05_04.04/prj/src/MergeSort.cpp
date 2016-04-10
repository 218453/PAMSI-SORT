#include "MergeSort.h"

void MergeSort::Merge(int *array, int left, int center, int right)
{
	int i,j,q;
	int tempArray[right+1];
	for(i = left; i <= right; i++)
	{
		tempArray[i] = array[i];
	}
	i = left;
	j = center+1;
	q = left;
	while(i <= center && j <= right)
	{
		if(tempArray[i] < tempArray[j])
		{
			array[q++] = tempArray[i++];
		}
		else
		{
			array[q++] = tempArray[j++];
		}
	}
	while(i <= center)
	{
		array[q++] = tempArray[i++];
	}
}

void MergeSort::Sort(int *array, int left, int right)
{
	int center;
	if(left < right)
	{
		center = (left+right)/2;
		Sort(array, left,center);
		Sort(array, center+1, right);
		Merge(array, left, center,right);
	}
}








