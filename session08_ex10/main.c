#include <stdio.h>

int main() {
    printf("pham_nhat_tan_session08_ex10\n");
    int col, amount=0;
    printf("Nhap so phan tu: ");
    scanf("%d",&col);
    int maxstack[col], numberofappearances[2][col];
    for(int i = 0; i<col; i++){
        numberofappearances[1][i]=0;
    }
    for(int i = 0; i<col; i++){
        scanf("%d", &maxstack[i]);
        int found=0;

        for(int j=0; j<amount; j++){
            if(numberofappearances[0][j]==maxstack[i]){
                numberofappearances[1][j]++;
                found = 1;
                break;
            }
        }
        if(found==0){
            numberofappearances[0][amount]=maxstack[i];
            numberofappearances[1][amount]=1;
            amount++;
        }
    }
    int max=0;
    printf("Phan tu xuat hien nhieu nhat la: \n");

    for(int j=0; j<amount; j++) {
        if(numberofappearances[1][j] > max){
            max=numberofappearances[1][j]; // Số lần xuất hiện nhiều nhất
        }
    }
    for(int j=0; j<amount; j++) {
        if(numberofappearances[1][j] == max){
            printf("%d xuat hien %d lan.\n", numberofappearances[0][j], numberofappearances[1][j]);
        }
    }
    return 0;
}

