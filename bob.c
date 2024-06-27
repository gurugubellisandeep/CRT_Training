#include<stdio.h>
int main(){
    int limak,bob,year;
    scanf("%d %d",&limak,&bob);
    year = 0;
    while(limak<=bob){
        limak*=3;
        bob*=2;
        year++;

    }
    printf("%d\n",year);
    return 0;
}