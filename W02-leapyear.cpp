int main(){
	int year;
	printf("enter the year:");
	scanf("%d",&year);
	 
	if((year%4==0 && year%100!=0)|| year%400==0)
	printf("the year %d is leap year\n",year);
        else
        printf("the year %d is not leap year\n",year);
}

