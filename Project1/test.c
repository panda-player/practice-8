#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr [ 0 ]  );
	int right = sz - 1;
	scanf("%d", &a);
	int mid = ((left + right) / 2);
	while (left <= right)
	{
		if (arr[mid] < a)
			left = left + 1;
		else if (arr[mid] > a)
			right = right + 1;
		else
		{
			printf("找到了,%d",mid);
			break;
		}
	}
	if (left > right)
		printf("找不到");

	

	
	return 0;
}



		
