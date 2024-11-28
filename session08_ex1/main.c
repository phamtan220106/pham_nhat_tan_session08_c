#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]={1,2,3,4,5};
	for(int i = 4 ; i >= 0 ; i-- )
	{
		printf("%d ",arr[i]);
	}
    printf("Hello world!\n");
    return 0;
}
