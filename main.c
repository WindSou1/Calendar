#include <stdio.h>

int main()
{
    int month, year, day;
    int podel;      /* last 2 numerals */
    int nach;       /* first 2 numerals */
    int kod_month, kod_year;
    int step1, step2, step3;
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    nach = year /100;
    switch (nach)
    {
    case 19:
    case 23:
    case 27:
        kod_year = 1;
        break;
    case 20:
    case 24:
    case 28:
        kod_year = 0;
        break;
    case 21:
    case 25:
    case 29:
        kod_year = 5;
        break;
    case 22:
    case 26:
    case 30:
        kod_year = 3;
        break;
    }
    switch (month)
    {
    case 1:
    case 10:
        kod_month = 0;
        break;
    case 2:
    case 3:
    case 11:
        kod_month = 3;
        break;
    case 4:
    case 7:
        kod_month = 6;
        break;
    case 5:
        kod_month = 1;
        break;
    case 6:
        kod_month = 4;
        break;
    case 8:
         kod_month = 2;
        break;
    case 9:
    case 12:
         kod_month = 5;
        break;
    }
    step1 = day + kod_month;
    while (step1 > 6)
        step1 -= 7;
    podel = year - (year / 100) * 100;
    step2 = podel / 4;
    while (podel > 27)
        podel -= 28;
    step2 += podel + kod_year;
    if ((month == 1 || month == 2) && ((year % 4 == 0 && year % 100 != 0) || year % 400 ==0))
        step2 -= 1;
    step3 = step2 + step1;
    while (step3 > 6)
        step3 -= 7;
    switch (step3)
    {
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
    case 0:
        printf("Saturday");
        break;
    case 1:
        printf("Sunday");
        break;
    default:
        printf("error");
        break;
    }
    return 0;
}
