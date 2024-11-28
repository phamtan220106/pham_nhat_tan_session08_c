#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n = 2 , m = 5;
	int arr[2][5]
	={
		{1,23,45,12,11},
		{2,33,50,99,67}
	};
	int max = arr[0][0];
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < m ; j++)
		{
			if(max < arr[i][j])
			{
				max = arr[i][j];
			}
		}
	}
	printf("%d",max);
    printf("Hello world!\n");
    return 0;
}
