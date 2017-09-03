#include <stdio.h>

int isLeapYear(int year);

/*This
 * */
int main() {
    int weekDay;            //Day of the week, where 0 = Sunday
    int startingDay = 5;    //Represents that the first day of the year 1582 was a Friday
    int year;               //The year for which a calendar will be created
    int month;              //Month of the year, where 0 = January
    int monthDay;           //Day of the month, where 1 is the 1st

    printf("                        MONTHLY CALENDAR\n");
    printf("\n");
    printf("Please enter year for this calendar:- ");
    scanf("%i", &year);
    printf("\n");
    printf("\n");
    if(year > 1582) {
        int i;              //
        for(i = 1582; i < year; i++) {
            startingDay = (startingDay + 365 + isLeapYear(i)) % 7;
        }
    }else if(year > 1582) {
        int i;
        for(i = 1583; i >= year; i--) {
            startingDay = (startingDay - 365 - isLeapYear(i)) % 7;
        }
    }

    if(isLeapYear(year) == 1) {
        int i;
        weekDay = startingDay;
        month = 0;
        printf("  ***    CALENDAR for %i   ***\n", year);
        printf("\n");
        switch(month) {
            case 0:
                printf("January %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for(i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for(monthDay = 1; monthDay <= 31; monthDay++) {
                    if(monthDay < 10) {
                        printf("  %i  ", monthDay);
                    }else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if(weekDay == 7 && monthDay != 31) {
                        weekDay = 0;
                        printf("\n");
                    }else if(weekDay == 7 && monthDay == 31) {
                        weekDay = 0;
                    }
                }
            case 1:
                printf("\n");
                printf("\n");
                printf("February %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for(i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for(monthDay = 1; monthDay <= 29; monthDay++) {
                    if(monthDay < 10) {
                        printf("  %i  ", monthDay);
                    }else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if(weekDay == 7 && monthDay != 29) {
                        weekDay = 0;
                        printf("\n");
                    }else if(weekDay == 7 && monthDay == 29) {
                        weekDay = 0;
                    }
                }
            case 2:
                printf("\n");
                printf("\n");
                printf("March %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for(i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for(monthDay = 1; monthDay <= 31; monthDay++) {
                    if(monthDay < 10) {
                        printf("  %i  ", monthDay);
                    }else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if(weekDay == 7 && monthDay != 31) {
                        weekDay = 0;
                        printf("\n");
                    }else if(weekDay == 7 && monthDay == 31) {
                        weekDay = 0;
                    }
                }
            case 3:
                printf("\n");
                printf("\n");
                printf("April %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for(i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for(monthDay = 1; monthDay <= 30; monthDay++) {
                    if(monthDay < 10) {
                        printf("  %i  ", monthDay);
                    }else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if(weekDay == 7 && monthDay != 30) {
                        weekDay = 0;
                        printf("\n");
                    }else if(weekDay == 7 && monthDay == 30) {
                        weekDay = 0;
                    }
                }
            case 4:
                printf("\n");
                printf("\n");
                printf("May %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for(i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for(monthDay = 1; monthDay <= 31; monthDay++) {
                    if(monthDay < 10) {
                        printf("  %i  ", monthDay);
                    }else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if(weekDay == 7 && monthDay != 31) {
                        weekDay = 0;
                        printf("\n");
                    }else if(weekDay == 7 && monthDay == 31) {
                        weekDay = 0;
                    }
                }
            case 5:
                printf("\n");
                printf("\n");
                printf("June %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for(i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for(monthDay = 1; monthDay <= 30; monthDay++) {
                    if(monthDay < 10) {
                        printf("  %i  ", monthDay);
                    }else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if(weekDay == 7 && monthDay != 30) {
                        weekDay = 0;
                        printf("\n");
                    }else if(weekDay == 7 && monthDay == 30) {
                        weekDay = 0;
                    }
                }
            case 6:
                printf("\n");
                printf("\n");
                printf("July %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for(i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for(monthDay = 1; monthDay <= 31; monthDay++) {
                    if(monthDay < 10) {
                        printf("  %i  ", monthDay);
                    }else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if(weekDay == 7 && monthDay != 31) {
                        weekDay = 0;
                        printf("\n");
                    }else if(weekDay == 7 && monthDay == 31) {
                        weekDay = 0;
                    }
                }
            case 7:
                printf("\n");
                printf("\n");
                printf("August %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for(i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for(monthDay = 1; monthDay <= 31; monthDay++) {
                    if(monthDay < 10) {
                        printf("  %i  ", monthDay);
                    }else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if(weekDay == 7 && monthDay != 31) {
                        weekDay = 0;
                        printf("\n");
                    }else if(weekDay == 7 && monthDay == 31) {
                        weekDay = 0;
                    }
                }
            case 8:
                printf("\n");
                printf("\n");
                printf("September %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for(i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for(monthDay = 1; monthDay <= 30; monthDay++) {
                    if(monthDay < 10) {
                        printf("  %i  ", monthDay);
                    }else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if(weekDay == 7 && monthDay != 30) {
                        weekDay = 0;
                        printf("\n");
                    }else if(weekDay == 7 && monthDay == 30) {
                        weekDay = 0;
                    }
                }
            case 9:
                printf("\n");
                printf("\n");
                printf("October %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for(i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for(monthDay = 1; monthDay <= 31; monthDay++) {
                    if(monthDay < 10) {
                        printf("  %i  ", monthDay);
                    }else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if(weekDay == 7 && monthDay != 31) {
                        weekDay = 0;
                        printf("\n");
                    }else if(weekDay == 7 && monthDay == 31) {
                        weekDay = 0;
                    }
                }
            case 10:
                printf("\n");
                printf("\n");
                printf("Novmeber %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for(i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for(monthDay = 1; monthDay <= 30; monthDay++) {
                    if(monthDay < 10) {
                        printf("  %i  ", monthDay);
                    }else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if(weekDay == 7 && monthDay != 30) {
                        weekDay = 0;
                        printf("\n");
                    }else if(weekDay == 7 && monthDay == 30) {
                        weekDay = 0;
                    }
                }
            case 11:
                printf("\n");
                printf("\n");
                printf("December %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for(i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for(monthDay = 1; monthDay <= 31; monthDay++) {
                    if(monthDay < 10) {
                        printf("  %i  ", monthDay);
                    }else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if(weekDay == 7 && monthDay != 31) {
                        weekDay = 0;
                        printf("\n");
                    }else if(weekDay == 7 && monthDay == 31) {
                        weekDay = 0;
                    }
                }
            default:
                break;
            }

    }else {
        int i;
        weekDay = startingDay;
        month = 0;
        printf("  ***    Calendar for %i   ***\n", year);
        printf("\n");
        switch(month) {
            case 0:
                printf("January %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for (i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for (monthDay = 1; monthDay <= 31; monthDay++) {
                    if (monthDay < 10) {
                        printf("  %i  ", monthDay);
                    } else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if (weekDay == 7 && monthDay != 31) {
                        weekDay = 0;
                        printf("\n");
                    } else if (weekDay == 7 && monthDay == 31) {
                        weekDay = 0;
                    }
                }
            case 1:
                printf("\n");
                printf("\n");
                printf("February %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for (i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for (monthDay = 1; monthDay <= 28; monthDay++) {
                    if (monthDay < 10) {
                        printf("  %i  ", monthDay);
                    } else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if (weekDay == 7 && monthDay != 28) {
                        weekDay = 0;
                        printf("\n");
                    } else if (weekDay == 7 && monthDay == 28) {
                        weekDay = 0;
                    }
                }
            case 2:
                printf("\n");
                printf("\n");
                printf("March %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for (i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for (monthDay = 1; monthDay <= 31; monthDay++) {
                    if (monthDay < 10) {
                        printf("  %i  ", monthDay);
                    } else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if (weekDay == 7 && monthDay != 31) {
                        weekDay = 0;
                        printf("\n");
                    } else if (weekDay == 7 && monthDay == 31) {
                        weekDay = 0;
                    }
                }
            case 3:
                printf("\n");
                printf("\n");
                printf("April %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for (i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for (monthDay = 1; monthDay <= 30; monthDay++) {
                    if (monthDay < 10) {
                        printf("  %i  ", monthDay);
                    } else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if (weekDay == 7 && monthDay != 30) {
                        weekDay = 0;
                        printf("\n");
                    } else if (weekDay == 7 && monthDay == 30) {
                        weekDay = 0;
                    }
                }
            case 4:
                printf("\n");
                printf("\n");
                printf("May %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for (i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for (monthDay = 1; monthDay <= 31; monthDay++) {
                    if (monthDay < 10) {
                        printf("  %i  ", monthDay);
                    } else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if (weekDay == 7 && monthDay != 31) {
                        weekDay = 0;
                        printf("\n");
                    } else if (weekDay == 7 && monthDay == 31) {
                        weekDay = 0;
                    }
                }
            case 5:
                printf("\n");
                printf("\n");
                printf("June %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for (i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for (monthDay = 1; monthDay <= 30; monthDay++) {
                    if (monthDay < 10) {
                        printf("  %i  ", monthDay);
                    } else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if (weekDay == 7 && monthDay != 30) {
                        weekDay = 0;
                        printf("\n");
                    } else if (weekDay == 7 && monthDay == 30) {
                        weekDay = 0;
                    }
                }
            case 6:
                printf("\n");
                printf("\n");
                printf("July %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for (i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for (monthDay = 1; monthDay <= 31; monthDay++) {
                    if (monthDay < 10) {
                        printf("  %i  ", monthDay);
                    } else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if (weekDay == 7 && monthDay != 31) {
                        weekDay = 0;
                        printf("\n");
                    } else if (weekDay == 7 && monthDay == 31) {
                        weekDay = 0;
                    }
                }
            case 7:
                printf("\n");
                printf("\n");
                printf("August %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for (i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for (monthDay = 1; monthDay <= 31; monthDay++) {
                    if (monthDay < 10) {
                        printf("  %i  ", monthDay);
                    } else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if (weekDay == 7 && monthDay != 31) {
                        weekDay = 0;
                        printf("\n");
                    } else if (weekDay == 7 && monthDay == 31) {
                        weekDay = 0;
                    }
                }
            case 8:
                printf("\n");
                printf("\n");
                printf("September %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for (i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for (monthDay = 1; monthDay <= 30; monthDay++) {
                    if (monthDay < 10) {
                        printf("  %i  ", monthDay);
                    } else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if (weekDay == 7 && monthDay != 30) {
                        weekDay = 0;
                        printf("\n");
                    } else if (weekDay == 7 && monthDay == 30) {
                        weekDay = 0;
                    }
                }
            case 9:
                printf("\n");
                printf("\n");
                printf("October %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for (i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for (monthDay = 1; monthDay <= 31; monthDay++) {
                    if (monthDay < 10) {
                        printf("  %i  ", monthDay);
                    } else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if (weekDay == 7 && monthDay != 31) {
                        weekDay = 0;
                        printf("\n");
                    } else if (weekDay == 7 && monthDay == 31) {
                        weekDay = 0;
                    }
                }
            case 10:
                printf("\n");
                printf("\n");
                printf("Novmeber %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for (i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for (monthDay = 1; monthDay <= 30; monthDay++) {
                    if (monthDay < 10) {
                        printf("  %i  ", monthDay);
                    } else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if (weekDay == 7 && monthDay != 30) {
                        weekDay = 0;
                        printf("\n");
                    } else if (weekDay == 7 && monthDay == 30) {
                        weekDay = 0;
                    }
                }
            case 11:
                printf("\n");
                printf("\n");
                printf("December %i\n", year);
                printf("\n");
                printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                for (i = 0; i < weekDay; i++) {
                    printf("     ");
                }
                for (monthDay = 1; monthDay <= 31; monthDay++) {
                    if (monthDay < 10) {
                        printf("  %i  ", monthDay);
                    } else {
                        printf(" %i  ", monthDay);
                    }
                    weekDay++;
                    if (weekDay == 7 && monthDay != 31) {
                        weekDay = 0;
                        printf("\n");
                    } else if (weekDay == 7 && monthDay == 31) {
                        weekDay = 0;
                    }
                }
            default:
                break;
        }
    }

    return 0;
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
