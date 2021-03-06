#include<stdio.h>
#include<ctype.h>


int isLeap(int year){
   if((year%4==0 && year%100!=0) || year%400==0)
    return 1;
    else
    return 0;
}

int main(){
    int month;
    int day;
    int year;
    int days=0;
    char cont = 'Y';
    int m[]={31,28,31,30,31,30,31,31,30,31,30,31};
    while(cont=='Y'){
        printf("enter year:");
        scanf("%d",&year);
        printf("enter month and day:");
        scanf("%d %d",&month,&day);
        m[1]=28;
        days=0;
        if(isLeap(year)) m[1]++;
        for(int i=0;i<month-1;i++){
            days+=m[i];
        }
        printf("%d days passed since 1/1/%d\n",days+day,year);
        printf("continue(Y/N)?");
        getchar();
        cont=toupper(getchar());
        printf("\n");
    }
    return 0;
}
