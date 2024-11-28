#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5 , m = 5 ,sum = 0;
	int arr[5][5]=
	{
		{1,2,3,4,5},
		{2,3,4,5,6},
		{3,4,5,6,7},
		{4,5,6,7,8},
		{6,7,8,9,0}
	};
	printf("\nCac phan tu tren duong cheo chinh la :");
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < m ; j++)
		{
			if(i==j)
			{
				printf("%d",arr[i][j]);
				sum+=arr[i][j];
			}
		}

	}
	printf("\nTong: %d",sum);
    printf("Hello world!\n");
    return 0;
}
