#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int is_leap_year = 0;
	int total_days;
	int remaining_days; /* Declare remaining_days here */

	/* to Check if it's a leap year */
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		is_leap_year = 1;
	}

	/* specifing the number of dyas in leap years and normal years */
	if (is_leap_year)
	{
		total_days = 366;
	}
	else
	{
		total_days = 365;
	}

	/* to Adjust day count for leap year */
	if (is_leap_year && month > 2)
	{
		day++;
	}

	/* to Calculate the day of the year */
	switch (month)
	{
	case 1: /* for January */
		break;
	case 2: /* for February */
		day += 31;
		break;
	case 3: /* for March */
		day += (is_leap_year ? 60 : 59);
		break;
	case 4: /* for April */
		day += (is_leap_year ? 91 : 90);
		break;
	case 5: /* for May */
		day += (is_leap_year ? 121 : 120);
		break;
	case 6: /* for June */
		day += (is_leap_year ? 152 : 151);
		break;
	case 7: /* for July */
		day += (is_leap_year ? 182 : 181);
		break;
	case 8: /* for August */
		day += (is_leap_year ? 213 : 212);
		break;
	case 9: /* for September */
		day += (is_leap_year ? 244 : 243);
		break;
	case 10: /* for October */
		day += (is_leap_year ? 274 : 273);
		break;
	case 11: /* for November */
		day += (is_leap_year ? 305 : 304);
		break;
	case 12: /* for December */
		day += (is_leap_year ? 335 : 334);
		break;
	default:
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	/* now to calculate remaining days */
	remaining_days = total_days - day;
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", remaining_days);
}
