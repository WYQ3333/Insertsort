#include"sort.h"

void test()
{
	srand((unsigned int)time(NULL));
	int i = 0;
	int array[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		array[i] = rand() % 20;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	InsertSort(array, 10);//Ö±½Ó²åÈëÅÅÐò
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
}

int main()
{
	test();
	system("pause");
	return 0;
}