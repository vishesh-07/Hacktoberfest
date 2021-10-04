#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char name[30], gender[20];
int age, que1, que2, que3, que4, num;
int start()
{
    printf("\nHello sir ,You are requested To fill All details with Honesty\n\n");
    printf("Enter your Name :- \n");
    getchar();
    // scanf("%s",name);
    gets(name);
    printf("What is your Gender\n");
    scanf("%s", gender);
    printf("What is your Age. Enter in Digit\n");
    scanf("%d", &age);
    printf("                  -------------                     \n ");
    printf("                 - ASSESMENT -                 \n");
    printf("                  -------------                      \n");
    printf("Please coperate With Honesty To prevent your Loved ones\n");
    printf("\n-----------------------------------------------------\n");
    printf("Are you Experiencing Any Of These Following Symptoms\n");
    printf("-----------------------------------------------------\n");

    printf("press....1 if you are Experiencing Cough\n");
    printf("press....2 if you are Experiencing Fever\n");
    printf("press....3 if you are Experiencing Difficulty in Breathing\n");
    printf("press....0 if None Of The Above\n ");
    scanf("%d", &que1);
    printf("You pressed %d \n", que1);

    printf("\n------------------------------------------\n");
    printf(" Have you Ever Had any Of the Following ?\n");
    printf("------------------------------------------\n");

    printf("press....1 If You Ever Had Diabetes\n");
    printf("press....2 If You Ever Had Hypertension\n");
    printf("press....3 If You Ever Had Lung Disease\n");
    printf("press....4 If You Ever Had Heart Disease\n");
    printf("press....0 If None Of The Above\n\n");
    scanf("%d", &que2);
    printf("You pressed %d \n", que2);

    printf("\n-------------------------------------------------------------------\n");
    printf(" Have You Travelled Anywhere Internationally in the Last 14 Days ?\n");
    printf("--------------------------------------------------------------------\n");
    printf("Press.....1    If YES\n");
    printf("Press.....2    If No\n");
    scanf("%d", &que3);
    printf("You pressed %d \n", que3);

    printf("\n----------------------------------------------------------------------\n");
    printf(" Now be Carefull And select following That apply To You From Below:--:\n");
    printf("----------------------------------------------------------------------\n");
    printf("Press....1  If\n\n");
    printf("I Have Recently Interacted Or Lived With Someone,\nWho Has Tested Positive For COVID-19\n");
    printf("\nPress....2 If\n\n");
    printf("I Am a Healthcare Worker And I Examined a COVID-19 Confirmed Case Without Protective Gear\n");
    printf("press..0 If None Of The Above\n ");
    scanf("%d", &que4);
    printf("You pressed %d \n", que4);
}
int main()
{
    int num;
    system("cls");
    printf("\n\n\n                ------------------------\n"); // 4 tab pressed
    printf("                 COVID-19 INFECTION TEST\n");
    printf("                ------------------------\n");

    printf("\n\n\n\nFollow all The instructions To Proceed Further\n\n");
    printf("Press....1 To Start Test\n\n\n");
    scanf("%d", &num);
    if (num == 1)
    {
        start();
        if (que1 == 1 || que1 == 2 || que1 == 3 && que2 == 1 || que2 == 2 || que3 == 3 || que2 == 4 && que3 == 1 && que4 == 1 || que4 == 2)
        {
            printf("\n\n                       -------------------------\n");
            printf("                            PATIENT-DETAILS\n");
            printf("                        -------------------------");
            printf("\n\n\nDear... %s\n", name);
            printf("\n\n                        *******************************************\n");
            printf("                         You are At Risk. You should Go for Checkup \n                                You have Symptoms of COVID-19\n ");
            printf("                     *******************************************\n");
        }
        else if (que1 == 0 || que1 == 1 && que2 == 0 && que3 == 0 && que4 == 0)

        {
            printf("\n\n                       -------------------------\n");
            printf("                            PATIENT-DETAILS\n");
            printf("                        -------------------------");
            printf("\n\n\n                         Dear... %s\n", name);
            printf("\n\n\n                         YOur Age : %d\n", age);

            printf("\n\n                        *************************************************************\n");
            printf("                        You are Not At Risk. Stay Home To Prevent Yourself From COVID-19\n ");
            printf("                        *******************************************************************\n");
        }
        if (age >= 0 && age <= 9)
        {
            printf("                                According To Wwww.worldmeter.com\n");
            printf("                        In your Your Age Which is %d , Fatility Of COVID-19 is 0.2%%\n\n\n", age);
        }
        if (age >= 10 && age <= 19)
        {
            printf("                                According To Wwww.worldmeter.com\n");
            printf("                        In your Your Age Which is %d , Fatility Of COVID-19 is 0.2%%\n\n\n", age);
        }
        if (age >= 20 && age <= 29)
        {
            printf("                                According To Wwww.worldmeter.com\n");
            printf("                        In your Your Age Which is %d , Fatility Of COVID-19 is 0.2%%\n\n\n", age);
        }
        if (age >= 30 && age <= 39)
        {
            printf("                                According To Wwww.worldmeter.com\n");
            printf("                        In your Your Age Which is %d , Fatility Of COVID-19 is 0.2%%\n\n\n", age);
        }
        else if (age >= 40 && age <= 49)
        {
            printf("                                According To Wwww.worldmeter.com\n");
            printf("                        In your Your Age Which is %d , Fatility Of COVID-19 is 0.4%%\n\n\n", age);
        }
        else if (age >= 50 && age <= 59)
        {
            printf("                                According To Wwww.worldmeter.com\n");
            printf("                        In your Your Age Which is %d , Fatility Of COVID-19 is 1.3%%\n\n\n", age);
        }
        else if (age >= 60 && age <= 69)
        {
            printf("                                According To Wwww.worldmeter.com\n");
            printf("                        In your Your Age Which is %d , Fatility Of COVID-19 is 3.6%%\n\n", age);
        }
        else if (age >= 70 && age <= 79)
        {
            printf("                                According To Wwww.worldmeter.com\n");
            printf("                        In your Your Age Which is %d , Fatility Of COVID-19 is 14.8%%\n\n\n", age);
        }
        else if (age >= 80 && age <= 89)
        {
            printf("                                According To Wwww.worldmeter.com\n");
            printf("                        In your Your Age Which is %d , Fatility Of COVID-19 is 14.8%% And Death Rate is 21.1% \n\n\n", age);
        }
    }
    else
    {
        printf("ONLY ENTER 1 TO START TEST\n ");
    }

    printf("\n                                THANKS FOR USING OUR PROGRAM                    \n\n");
    ;
    printf("                                DEVELOPER......RAHUL ROY                    \n\n");

    return 0;
}
