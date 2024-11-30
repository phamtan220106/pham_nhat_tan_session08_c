#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("pham_nhat_tan_session08_ex7\n");
    int col,row,rong=4;
    printf("nhap vao so hang va cot: ");
    scanf("%d %d",&row,&col);
    int Diagonal[row][col];
    printf("nhap vao mang Diagonal: \n");
    for(int i=0;i<row;i++){
        for(int j=0; j<col; j++){
            scanf("%d",&Diagonal[i][j]);
        }
        printf("\n");
    }
    if(row>col){
        row=col;
    }else{
        col=row;
    }
    printf("duong cheo cua ban la: \n");
    for(int i=0;i<col;i++){
        for(int j=0; j<col; j++){
            if(col%2==0){
                if(i==j || i+j==col){
                    printf("%*d",rong,Diagonal[i][j]);
                }else{
                    printf("%*c",rong,' ');
                }
            }else{
                if(i==j || i+j==(col-1) ){
                    printf("%*d",rong,Diagonal[i][j]);
                }else{
                    printf("%*c",rong,' ');
                }
            }
        }
        printf("\n");
    }
    printf("Hello world!\n");
    return 0;
}
