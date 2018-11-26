#include<stdio.h>
int main()
{
	float year;
	float weeks;
	int days;
	printf("Enter number of days\n");
	scanf("%d",&days);
	weeks = 7;
	weeks = days / weeks;
	printf("no of week in %d days =%.2f weeks\n",days ,weeks);
	year = 365;
	year = days / year;
	printf("no of year in a %d days = %.2f year\n",days ,year);
	days =  days;
	printf("no of days in %d days = %d days\n",days ,days);
	return 0;
}
