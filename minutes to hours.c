#include<stdio.h>
void main()
{
	int minutes ;
	
	printf("Enter total minutes");
	scanf("%d",& minutes);
	printf("%d hours(s) %d minutes(s)",minutes/60,minutes%60);
}
