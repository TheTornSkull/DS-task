/*
    jan feb    mar apr may jun jul aug sep oct nov dec
    31  28/29  31  30  31  30  31  31  30   31 30  31
    any year divisible by 4 is a leap year, but a century year is a leap year only if it is divisible by 400
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Dates
{
    int day;
    int month;
    int year;
}Date;

void validate(Date date)
{
    if((date.month>=1)&&(date.month<13))//valid month
    {
        if(date.year%100==0)//century year
        {
            if(date.year%400==0)//leap year
            {
                if(date.month == ( 1 || 3 || 5 || 7 || 8 || 10 || 12))
                {
                    if((1>date.day)||(date.day>31))
                    {
                        printf("\nYou should've entered a Valid date.");
                        exit(EXIT_FAILURE);
                    }
                }
                else
                {
                    if(date.month== ( 4 || 6 || 9 || 11 ))
                    {
                        if((1>date.day)||(date.day>30))
                        {
                            printf("\nYou should've entered a Valid date.");
                            exit(EXIT_FAILURE);
                        }
                    }
                    else
                    {
                        if((1>date.day)||(date.day>29))
                        {
                            printf("\nYou should've entered a Valid date.");
                            exit(EXIT_FAILURE);
                        }
                    }
                }
            }
            else//not a leap year
            {
                                if(date.month == ( 1 || 3 || 5 || 7 || 8 || 10 || 12))
                {
                    if((1>date.day)||(date.day>31))
                    {
                        printf("\nYou should've entered a Valid date.");
                        exit(EXIT_FAILURE);
                    }
                }
                else
                {
                    if(date.month== ( 4 || 6 || 9 || 11 ))
                    {
                        if((1>date.day)||(date.day>30))
                        {
                            printf("\nYou should've entered a Valid date.");
                            exit(EXIT_FAILURE);
                        }
                    }
                    else
                    {
                        if((1>date.day)||(date.day>28))
                        {
                            printf("\nYou should've entered a Valid date.");
                            exit(EXIT_FAILURE);
                        }
                    }
                }
            }
        }
        else//not a century year
        {
            if(date.year%4==0)//leap year
            {
                                if(date.month == ( 1 || 3 || 5 || 7 || 8 || 10 || 12))
                {
                    if((1>date.day)||(date.day>31))
                    {
                        printf("\nYou should've entered a Valid date.");
                        exit(EXIT_FAILURE);
                    }
                }
                else
                {
                    if(date.month== ( 4 || 6 || 9 || 11 ))
                    {
                        if((1>date.day)||(date.day>30))
                        {
                            printf("\nYou should've entered a Valid date.");
                            exit(EXIT_FAILURE);
                        }
                    }
                    else
                    {
                        if((1>date.day)||(date.day>29))
                        {
                            printf("\nYou should've entered a Valid date.");
                            exit(EXIT_FAILURE);
                        }
                    }
                }
            }
            else//not a leap year
            {
                                if(date.month == ( 1 || 3 || 5 || 7 || 8 || 10 || 12))
                {
                    if((1>date.day)||(date.day>31))
                    {
                        printf("\nYou should've entered a Valid date.");
                        exit(EXIT_FAILURE);
                    }
                }
                else
                {
                    if(date.month== ( 4 || 6 || 9 || 11 ))
                    {
                        if((1>date.day)||(date.day>30))
                        {
                            printf("\nYou should've entered a Valid date.");
                            exit(EXIT_FAILURE);
                        }
                    }
                    else
                    {
                        if((1>date.day)||(date.day>28))
                        {
                            printf("\nYou should've entered a Valid date.");
                            exit(EXIT_FAILURE);
                        }
                    }
                }
            }
        }
    }
    else//invalid month
    {
        printf("\nYou should've entered a Valid date.");
        exit(EXIT_FAILURE);
    }
}
int menu()
{
    int oper;
    printf("***NOTICE : Enter CE/AD dates only***");
    printf("\nPress 1 to add days to the initial date");
    printf("\nPress 2 to subtract days from the initial date");
    printf("\nPress 3 to get difference between dates");
    printf("\nPress 4 to view different formats of initial date\n");
    scanf("%d",&oper);
    printf("\n");
    return oper;
}
void formats(Date date)
{
    char month[10];
    switch(date.month)
    {
    case (1):
        {
            strcpy(month,"January");
            break;
        }
    case (2):
        {
            strcpy(month,"February");
            break;
        }
    case (3):
        {
            strcpy(month,"March");
            break;
        }
    case (4):
        {
            strcpy(month,"April");
            break;
        }
    case (5):
        {
            strcpy(month,"May");
            break;
        }
    case (6):
        {
            strcpy(month,"June");
            break;
        }
    case (7):
        {
            strcpy(month,"July");
            break;
        }
    case (8):
        {
            strcpy(month,"August");
            break;
        }
    case (9):
        {
            strcpy(month,"September");
            break;
        }
    case (10):
        {
            strcpy(month,"October");
            break;
        }
    case (11):
        {
            strcpy(month,"November");
            break;
        }
    case (12):
        {
            strcpy(month,"December");
            break;
        }
    }
    printf("\n\nFORMAT (DD/MM/YYYY) : ",date.day,date.month,date.year);
    printf("\nFORMAT (DD/MM/YY) : ",date.day,date.month,(date.year%100));
    printf("\nFORMAT (MM/DD/YYYY) : ",date.month,date.day,date.year);
    printf("\nFORMAT (MM/DD/YY) : ",date.month,date.day,(date.year%100));
    printf("\nFORMAT (DD/Month/YYYY) : ",date.day,month,date.year);
    printf("\nFORMAT (Month/DD/YYYY) : ",month,date.day,date.year);
}
void adddays(Date date, int n)
{
    Date ansdate;
    /*logic*/

    formats(ansdate);
}
void subdays(Date date, int n)
{
    Date ansdate;
    /*logic*/

    formats(ansdate);

}
void diffdate(Date date0,Date date1)
{
    Date ansdate;
    int nodays;
    /*logic*/

    printf("\nThere is a difference of %d days in the dates.",nodays);
}

int main()
{
    int inv = 0;
    int nodays,oper,again=0;
    Date indate, odate;

    printf("This is a Date converting tool\n\n");

    switch(menu())
    {
    case (1):
        {
            while(1)
            {
                printf("\nEnter your initial date (DD MM YYYY) : ");
                scanf("%d %d %d",&indate.day,&indate.month, &indate.year);
                validate(indate);

                printf("\nDate is valid");

                printf("\n\nEnter the number of days to add to initial date : ");
                scanf("%d",&nodays);

                adddays(indate, nodays);

                printf("\n\n");
                printf("Press 1 to repeat this operation");
                printf("\nPress 0 to exit\n");
                scanf("%d",&again);
                if(again == 1)
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            break;
        }

    case (2):
        {
            while(1)
            {
                printf("Enter your initial date (DD MM YYYY) : ");
                scanf("%d %d %d",&indate.day,&indate.month, &indate.year);
                validate(indate);

                printf("Date is valid");

                printf("Enter the number of days to subtract from initial date : ");
                scanf("%d",&nodays);

                subdays(indate,nodays);

                printf("\n\n");
                printf("Press 1 to repeat this operation");
                printf("\nPress 0 to exit\n");
                scanf("%d",&again);
                if(again == 1)
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            break;
        }

    case (3):
        {
            while(1)
            {
                printf("Enter your initial date (DD MM YYYY) : ");
                scanf("%d %d %d",&indate.day,&indate.month, &indate.year);
                validate(indate);

                printf("Date is valid");

                printf("Enter the date(DD MM YYYY) to add to initial date : ");
                scanf("%d %d %d",&odate.day,&odate.month,&odate.year);
                validate(odate);

                printf("Date is valid");

                diffdate(indate, odate);

                printf("\n\n");
                printf("Press 1 to repeat this operation");
                printf("\nPress 0 to exit\n");
                scanf("%d",&again);
                if(again == 1)
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            break;
        }

    case (4):
        {
            while (1)
            {
                printf("Enter your initial date (DD MM YYYY) : ");
                scanf("%d %d %d",&indate.day,&indate.month, &indate.year);
                validate(indate);

                printf("Date is valid");
                formats(indate);
                printf("\n\n");
                printf("Press 1 to repeat this operation");
                printf("\nPress 0 to exit\n");
                scanf("%d",&again);
                if(again == 1)
                {
                    continue;
                }
                else
                {
                    break;
                }
            }

            break;
        }
    default:
        {
            printf("\nYou should've pressed a Valid key");
            exit(EXIT_FAILURE);
        }
    }
}
