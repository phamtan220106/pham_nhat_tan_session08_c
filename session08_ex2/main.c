#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]={1,4,6,8,7};
	int n ;
	scanf("%d",&n);
	for(int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++)
	{
		if(n == arr[i])
		{
			printf("\nVi tri phan tu trong mang la : %d",i);

		}else{
		    printf("phan tu khòn co trong mang\n");
		}
		break;
	}
    printf("Hello world!\n");
    return 0;
}
