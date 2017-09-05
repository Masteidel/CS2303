#include <stdio.h>
#include <stdlib.h>

//Prototype Functions
void printCalendar(int aYear, int aDay);
int printMonth(int aYear, int aDay, int aMonth);
int printMonthName(int aYear, int aMonth);
int findStartingDay(int year);
int isLeapYear(int year);

/*This
 * */
int main() {
    int year;               //The year for which a calendar will be created

    //Prompts user to input a year
    printf("                        MONTHLY CALENDAR\n");
    printf("\n");
    printf("Please enter year for this calendar:- ");
    scanf("%i", &year);
    printf("\n");
    printf("\n");

    //Prints calendar for input year
    printCalendar(year, findStartingDay(year));
    return 0;
}

void printCalendar(int aYear, int aDay) {
    int i;
    for(i = 0; i < 12; i++) {
        aDay = printMonth(aYear, aDay, i);
    }
}

int printMonth(int aYear, int aDay, int aMonth) {
    int monthDay;           //Day of the month, where 1 is the 1st
    int endDay;             //Last day of the month
    int weekDay = aDay;     //Day of the week, where 0 = Sunday
    int i;                  //Variable to be incremented in for loop

    //Sets endDay to be equal to the number of days in a given month
    //Also prints out the name of the given month
    endDay = printMonthName(aYear, aMonth);
    //Prints week day abbreviations
    printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
    for(i = 0; i < weekDay; i++) {
        printf("     ");
    }
    for(monthDay = 1; monthDay <= endDay; monthDay++) {
        if(monthDay < 10) {
            printf("  %i  ", monthDay);
        } else {
            printf(" %i  ", monthDay);
        }
        weekDay++;
        if(weekDay >= 7) {
            weekDay = 0;
            printf("\n");
            if(monthDay == endDay) {
                printf("\n");
            }
        }else if(weekDay < 7) {
            if(monthDay == endDay) {
                printf("\n");
                printf("\n");
            }
        }
    }
    return weekDay;
}

int printMonthName(int aYear, int aMonth) {
    int days;
    switch(aMonth) {
        case 0:
            printf("January %i\n", aYear);
            printf("\n");
            days = 31;
            break;
        case 1:
            printf("February %i\n", aYear);
            printf("\n");
            if (isLeapYear(aYear) == 1) {
                days = 29;
            }else {
                days = 28;
            }
            break;
        case 2:
            printf("March %i\n", aYear);
            printf("\n");
            days = 31;
            break;
        case 3:
            printf("April %i\n", aYear);
            printf("\n");
            days = 30;
            break;
        case 4:
            printf("May %i\n", aYear);
            printf("\n");
            days = 31;
            break;
        case 5:
            printf("June %i\n", aYear);
            printf("\n");
            days = 30;
            break;
        case 6:
            printf("July %i\n", aYear);
            printf("\n");
            days = 31;
            break;
        case 7:
            printf("August %i\n", aYear);
            printf("\n");
            days = 31;
            break;
        case 8:
            printf("September %i\n", aYear);
            printf("\n");
            days = 30;
            break;
        case 9:
            printf("October %i\n", aYear);
            printf("\n");
            days = 31;
            break;
        case 10:
            printf("November %i\n", aYear);
            printf("\n");
            days = 30;
            break;
        case 11:
            printf("December %i\n", aYear);
            printf("\n");
            days = 31;
            break;
        default:
            days = 0;
            break;
    }
    return days;
}

int findStartingDay(int aYear) {
    int startingDay = 5;    //Represents that the first day of the year 1582 was a Friday
    if(aYear > 1582) {
        int i;
        for(i = 1582; i < aYear; i++) {
            startingDay = (startingDay + 365 + isLeapYear(i)) % 7;
        }
    }else if(aYear < 1582) {
        int i;
        for(i = 1581; i >= aYear; i--) {
            startingDay = 7 - (abs(startingDay - 365 - isLeapYear(i)) % 7);
        }
    }
    return startingDay;
}

int isLeapYear(int year) {
    if(year % 4 == 0) {
        if(year % 100 == 0) {
            if(year % 400 == 0) {
                return 1;
            }else {
                return 0;
            }
        }else {
            return 1;
        }
    }else {
        return 0;
    }
}
