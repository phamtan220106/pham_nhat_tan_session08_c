#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5][5]=
	{
		{10,20,30,40,50},
		{20,30,40,50,60},
		{30,40,50,60,70},
		{40,50,60,70,80},
		{50,60,70,80,90}
	};
	for(int i = 0 ; i < 5 ; i++)
	{
		for(int j = 0 ; j < 5 ; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

    printf("Hello world!\n");
    return 0;
}
