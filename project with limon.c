/*Author: MD ALOMGIR HOSSAIN, ID:2022-1-60-125,
          TOUHID LIMON,       ID: 2022-1-60-***,
 Date : 20 May, 2022,
 PROJECT: EWU ADDMISSION PROCCESSING SYSTEM. */


#include<stdio.h>
int main(void)
{
    int department,sub[10],credit[10],i=0,j=0,credit_sum,t=0,lebel1,course1,course2;
    printf("                      -: WELCOME TO EAST WEST UNIVERSITY :-\n");
    printf("\n DEPARTMENT\t\t\t MAIN COURSES \t\t\tELECTIVE COURSES\n 1. CSE\t\t\t|\t 1. CSE103\t\t|\t 1. ENG101\n 2. EEE\t\t\t|\t 2. EEE101\t\t|\t 2. MATH101\n");
    printf(" 3. Civil \t\t|\t 3. CIVIL103\t\t|\t 3. ECO101\n 4. Pharmacy\t\t|\t 4. CHE109\t\t|\t 4. STAT101\n");
    printf(" 5. GEB\t\t\t|\t 5. GEB103\t\t|\t 5. HIS101\n 6. BBA\t\t\t|\t 6. BUS101\t\t|\t 6. BUS101\n 7. LAW\t\t\t|\t 7. ENG102\n 8. English\t\t|\t 8. ENG101\n\n");
    printf("\n Please select any department to continue(1-8 any digit): ");
    scanf("%d",&department);
    switch(department)
    {
    case 1:
        printf("\n\n\t\a##### Welcome to CSE department #####\n");
        printf("\n Your main course is CSE103(4 credits)\n");
        printf(" 1 credit cost 5500tk.\n So,CSE103 4 credits cost is \t\t= %d tk.\n",4*5500);
        printf("\n Now add elective courses(any two):-");
        break;
    case 2:
        printf("\n\n\t\a##### Welcome to EEE department #####\n");
        printf(" Your main course is EEE101(4 credits)\n");
        printf(" 1 credit cost 5500tk.\n So,EEE101 4 credits cost is \t\t= %d tk.\n",4*5500);
        printf("\n Now add elective courses(any two):-");
        break;
    case 3:
        printf("\n\n\t\a##### Welcome to Civil Engineering department #####\n");
        printf(" Your main course is CIVIL103(4 credits)\n");
        printf(" 1 credit cost 5500tk.\n So,CIVIL103 4 credits cost is \t\t= %d tk.\n",4*5500);
        printf("\n Now add elective courses(any two):-");
        break;
    case 4:
        printf("\n\n\t\a##### Welcome to Pharmacy department #####\n");
        printf(" Your main course is CHE109(4 credits)\n");
        printf(" 1 credit cost 5500tk.\n So,CHE109 4 credits cost is \t\t= %d tk.\n",4*5500);
        printf("\n Now add elective courses(any two):-");
        break;
    case 5:
        printf("\n\n\t\a##### Welcome to GEB department #####\n");
        printf(" Your main course is GEB103(4 credits)\n");
        printf(" 1 credit cost 5500tk.\n So,GEB103 4 credits cost is \t\t= %d tk.\n",4*5500);
        printf("\n Now add elective courses(any two):-");
        break;
    case  6:
        printf("\n\n\t\a##### Welcome to BBA department #####\n");
        printf(" Your main course is BUS101(4 credits)\n");
        printf(" 1 credit cost 5500tk.\n So,BUS101 4 credits cost is \t\t= %d tk.\n",4*5500);
        printf("\n Now add elective courses(any two):-");
        break;
    case 7:
        printf("\n\n\t\a##### Welcome to LAW department #####\n");
        printf(" Your main course is ENG102(4 credits)\n");
        printf(" 1 credit cost 5500tk.\n So,ENG102 4 credits cost is \t\t= %d tk.\n",4*5500);
        printf("\n Now add elective courses(any two):-");
        break;
    case 8:
        printf("\n\n\t\a##### Welcome to ENGLISH department #####\n");
        printf(" Your main course is ENG101(4 credits)\n");
        printf(" 1 credit cost 5500tk.\n So,ENG101 4 credits cost is \t\t= %d tk.\n",4*5500);
        printf("\n Now add elective courses(any two):-");
        break;
    }
    printf("\n\tCourse-1:");
    scanf("%d",&course1);
    switch(course1)
    {
    case 1:
        printf("\t1.ENG101(3 credits)\n");
        printf(" So,ENG101 3 credits cost is \t\t= %d tk.\n",3*5500);
        break;
    case 2:
        printf("\t1.MATH101(3 credits)\n");
        printf(" So,MATH101 3 credits cost is \t\t= %d tk.\n",3*5500);
        break;
    case 3:
        printf("\t1.ECO101(3 credits)\n");
        printf(" So,ECO101 3 credits cost is \t\t= %d tk.\n",3*5500);
        break;
    case 4:
        printf("\t1.STAT101(3 credits)\n");
        printf(" So,STAT101 3 credits cost is \t\t= %d tk.\n",3*5500);
        break;
    case 5:
        printf("\t1.HIS101(3 credits)\n");
        printf(" So,HIS101 3 credits cost is \t\t= %d tk.\n",3*5500);
        break;
    case 6:
        printf("\t1.BUS101(3 credits)\n");
        printf(" So,BUS101 3 credits cost is \t\t= %d tk.\n",3*5500);
        break;
    }
    printf("\n\tCourse-2:");
    scanf("%d",&course2);
    switch(course2)
    {
    case 1:
        printf("\t2.ENG101(3 credits)\n");
        printf(" So,ENG101 3 credits cost is \t\t= %d tk.\n",3*5500);
        break;
    case 2:
        printf("\t2.MATH101(3 credits)\n");
        printf(" So,MATH101 3 credits cost is \t\t= %d tk.\n",3*5500);
        break;
    case 3:
        printf("\t2.ECO101(3 credits)\n");
        printf(" So,ECO101 3 credits cost is \t\t= %d tk.\n",3*5500);
        break;
    case 4:
        printf("\t2.STAT101(3 credits)\n");
        printf(" So,STAT101 3 credits cost is \t\t= %d tk.\n",3*5500);
        break;
    case 5:
        printf("\t2.HIS101(3 credits)\n");
        printf(" So,HIS101 3 credits cost is \t\t= %d tk.\n",3*5500);
        break;
    case 6:
        printf("\t2.BUS101(3 credits)\n");
        printf(" So,BUS101 3 credits cost is \t\t= %d tk.\n",3*5500);
        break;
    }

    printf("\n Press 1 for other cost: ");
    int cost;
    scanf("%d",&cost);
    switch(cost)
    {
    case 1:
        printf(" Student activity fee\t\t\t= 2500 tk\n");
        printf(" Lab fee \t\t\t\t= 2500 tk.\n");
    }
    printf(" _____________________________________________________\n");
    printf(" Total cost is                     \t=%d tk",22000+16500+16500+2500+2500);

    {
        printf("\n\n Now checking your waiver... ... \n");
        printf(" Enter your HSC GPA: ");
        double GPA1,GPA2,Total;
        scanf("%lf",&GPA1);
        printf(" Enter your SSC GPA: ");
        scanf("%lf",&GPA2);
        Total=GPA1+GPA2;
        printf(" Total GPA %.2lf",Total);
        printf("\a\n CONGRATULATION you will get ");
        if(Total==10)
        {
            printf("50*/* scolarship.");
            printf("\n After 50*/* scolarship, your total payable amount is %d tk.",(60000-(((22000+16500+16500+2500+2500)/100)*50)));
        }
        else if(Total<=9.99 && Total>=9.50)
        {
            printf("35*/* scolarship.");
            printf("\n After 35*/* scolarship, your total payable amount is %d tk.",(60000-(((22000+16500+16500+2500+2500)/100)*35)));
        }
        else if(Total<=9.49 && Total>=9.00)
        {
            printf("25*/* scholarship.");
            printf("\n After 25*/* scolarship, your total payble amount is %d tk.",(60000-(((22000+16500+16500+2500+2500)/100)*25)));
        }
        else
        {
            printf("20*/* special waiver (for all student). \n");
            printf(" After 20*/* scolarship, your total payble amount is %d tk.",(60000-(((22000+16500+16500+2500+2500)/100)*20)));
        }
    }
    printf("\n\n                      [Please complete your admission within next 21st May 2022]");
    printf("\n\t    ***For completing admission please visit our website(www.ewuadmission.edu.bd)***\n");
    printf("\t                  ###For any query call(24/7):01924254544(Help desk)###\n");
    printf("\t\t                 *** ALL THE BEST FOR YOUR FUTURE ***\t\t\n");


    getch();
}
