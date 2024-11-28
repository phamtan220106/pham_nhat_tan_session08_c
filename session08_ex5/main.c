#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n =3 , m = 5;
	int arr[3][5]={{1,2,3,4,5},{11,12,13,14,15},{21,22,23,24,25}};
	int sum1 = 0 , sum2 = 0 , sum3 = 0 ,sum4 = 0;
	for(int i = 0 ; i < n ;i++)
	{
		sum1+=arr[0][i];
		sum2+=arr[n-1][i];
	}
	for(int j = 0 ; j < m ;j++)
	{
		sum3 +=arr[j][0];
		sum4 +=arr[j][m-1];
	}
	int total=sum1+sum2+sum3+sum4;
	printf("%d",total);
    printf("Hello world!\n");
    return 0;
}
