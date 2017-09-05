#include <stdio.h>
#include <stdlib.h>

//Prototype Functions
void printCalendar(int aYear, int aDay);
int printMonth(int aYear, int aDay, int aMonth);
int printMonthName(int aYear, int aMonth);
int findStartingDay(int year);
int isLeapYear(int year);

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

/**Print a calendar for a given year starting on a given day.
 * @param aYear Year (A.D.)
 * @param aDay Day of the week (Sunday == 0)
 */
void printCalendar(int aYear, int aDay) {
    int i;                  //Value to be incremented in loop

    //Loop repeats printMonth function twelve times, once for each month
    for(i = 0; i <= 11; i++) {
        //i < 12 && aDay < 7
        aDay = printMonth(aYear, aDay, i);
        //i < 12 && aDay < 7
    }
}

/**Print a calendar for a given month of a given year.
 Return the day of the week the next month starts on.
 * @param aYear Year (A.D.)
 * @param aDay Day of the week (Sunday == 0)
 * @param aMonth Month (January == 0)
 * @return Day of the week (Sunday = 0)
 */
int printMonth(int aYear, int aDay, int aMonth) {
    int monthDay;           //Day of the month, where 1 is the 1st
    int endDay;             //Last day of the month
    int weekDay = aDay;     //Day of the week, where 0 = Sunday
    int i;                  //Value to be incremented in loop

    //Sets endDay to be equal to the number of days in a given month
    //Also prints out the name of the given month
    endDay = printMonthName(aYear, aMonth);

    //Prints week day abbreviations
    printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    //Loop prints a series five spaces for every day of the week before
    //the first day of the month (i.e. if a month starts on a Wednesday
    //the loop will excecute three times)
    for(i = 0; i < weekDay; i++) {
        printf("     ");
    }

    //Loop prints dates of the given month
    for(monthDay = 1; monthDay <= endDay; monthDay++) {
        //weekDay < 7 && (monthDay >= 1 && monthDay <= endDay)
        
        //Checks if the date being printed is a single digit number
        if(monthDay < 10) {
            //If the date is a single digit number, one extra space is added before the dat
            printf("  %i  ", monthDay);
        } else {
            //If the date is a double digit number, no extra space is added
            printf(" %i  ", monthDay);
        }
        weekDay++;

        //Checks if the weekDay value is invalid (greater than 6)
        if(weekDay >= 7) {
            //The weekDay value is set to 0 and a new line is started
            weekDay = 0;
            printf("\n");

            //Checks if it is the end of the month
            if(monthDay >= endDay) {
                //A new line is started
                printf("\n");
            }
        }else if(weekDay < 7) {
            //The weekDay value is valid

            //Checks if it is the end of the month
            if(monthDay >= endDay) {
                //Two new lines are started
                printf("\n");
                printf("\n");
            }
        }
        //weekDay < 7 && (monthDay >= 1 && monthDay <= endDay)
    }
    return weekDay;
}

/**Print the name of the current month.
 Return the number of days in that month.
 * @param aYear Year (A.D.)
 * @param aMonth Month (January == 0)
 * @return Days in the month.
 */
int printMonthName(int aYear, int aMonth) {
    int days;           //Number of days in a month
    switch(aMonth) {
        case 0:
            printf("January %i\n", aYear);
            printf("\n");
            days = 31;
            break;
        case 1:
            printf("February %i\n", aYear);
            printf("\n");

            //Checks if the given year is a leap year
            if (isLeapYear(aYear)) {
                //The year is a leap year and the number of days in
                //February are set to 29
                days = 29;
            }else {
                //The year is not a leap year and the number of days
                //in February are set to 28
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

/**Find the day of the week a given year starts on.
 * @param aYear Year (A.D)
 * @return Day of the week (Sunday = 0)
 */
int findStartingDay(int aYear) {
    //Calculations are done with respect to 1582,
    //the year the Gregorian Calendar was introduced.
    int startingDay = 5;    //Represents the first day of the year 1582, which was a Friday

    //Checks if the given year is after 1582
    if(aYear > 1582) {
        //The given year is after 1582 and the number of days from 1582 forward
        //to the year just before the given year are calculated
        int i;              //Value to be incremented in loop

        //Loop adds days for every year from 1582 forward to the year before
        //the given year
        for(i = 1582; i < aYear; i++) {
            //startingDay >=0 && startingDay < 7
            startingDay = (startingDay + 365 + isLeapYear(i)) % 7;
            //startingDay >=0 && startingDay < 7
        }

    //Checks if the given year is before 1582
    }else if(aYear < 1582) {
        //The given year is before 1582 and the number of days from 1581 backward
        //to the given year are calculated
        int i;              //Value to be incremented in loop

        //Loop subtracts days for every year from 1581 backward to the given year
        for(i = 1581; i >= aYear; i--) {
            //startingDay >=0 && startingDay < 7
            startingDay = (7 - (abs(startingDay - 365 - isLeapYear(i)) % 7)) % 7;
            //startingDay >=0 && startingDay < 7
        }
    }
    return startingDay;
}

/**Determine if a year is a leap year.
 * @param aYear Year (A.D.)
 * @return True or False (True = 1)
 */
int isLeapYear(int aYear) {

    //Checks if the given year is divisible by 4 and not by 100
    if((aYear % 4 == 0) && (aYear % 100 != 0)) {

        //The given year is a leap year and the function returns 1
        return 1;

    //Checks if the given year is divisible by 400
    }else if(aYear % 400 == 0) {

        //The given year is a leap year and the function returns 1
        return 1;

    }else {

        //The given year is not a leap year and the function returns 0
        return 0;
    }
}
