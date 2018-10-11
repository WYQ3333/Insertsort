#include"sort.h"


void InsertSort(int array[], int size)//÷±Ω”≤Â»Î≈≈–Ú
{
	int tmp;
	int i = 0;
	int j = 0;
	for (i = 1; i < size; i++)
	{
		j = i - 1;
		tmp = array[i];
		while (array[j]>tmp)
		{
			array[j + 1] = array[j];
			j--;
		}
		array[j+1] = tmp;
	}
}