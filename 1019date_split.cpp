#include <iostream>
#include <stdio.h>

int main()
{
	int year;
	int month;
	int date;

	scanf("%d.%d.%d", &year, &month, &date);
	printf("%04d.%02d.%02d", year, month, date);
}