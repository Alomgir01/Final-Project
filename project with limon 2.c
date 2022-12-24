#include<stdio.h>

int main()
{
    int department,sub[10],credit[10],i=0,j=0,t=0,course1,course2,stu_act_fee=5000,adm_fee=15000,tui_fee=5500;
    double cost;
    printf("                                   ### WELCOME TO EAST WEST UNIVERSITY ###\n");
    printf("\nDEPARTMENT\t\t\t MAIN COURSES FOR 1st SEMESTER \t\t\tELECTIVE COURSES(any two)\n1.CSE\t\t\t|\t 1. CSE103\t\t\t|\t 1.ENG101\n2. EEE\t\t\t|\t 2. EEE101\t\t\t|\t 2.MATH101\n3. Civil \t\t|\t 3. CIVIL103\t\t\t|\t 3.ECO101\n4. Pharmacy\t\t|\t 4. CHE109\t\t\t|\t 4.STAT101\n");
    printf("5. GEB\t\t\t|\t 5. GEB103\t\t\t|\t 5.HIS101\n6. BBA\t\t\t|\t 6. BUS101\t\t\t|\t 6.BUS101\n7. LAW\t\t\t|\t 7. ENG102\n8. English\t\t|\t 8. ENG101\n\n");
    printf("Main course = 4 credits\nElective course = 3 credits\n");
    printf("\n3 courses for 1st semester(10 credits)");
    printf("\nPlease select your desire department to see your cost for 1st semester (1-8): ");
    scanf("%d",&department);
    switch(department)
    {
    case 1: "CSE"
        ;
        break;
    case 2: "EEE"
        ;
        break;
    case 3: "Civil Engineering"
        ;
        break;
    case 4: "B.Pharm"
        ;
        break;
    case 5: "GEB"
        ;
        break;
    case  6: "Department of BBA"
        ;
        break;
    case 7: "Department of LAW"
        ;
        break;
    case 8: "Department of English"
        ;
        break;
    }
    {
        if(department==1)
        {
            printf("\n\t\t   ##### Welcome to CSE department #####\n");
            printf("\nYour main course is CSE103(4 credits)\nAdd courses for this semester(Elective courses):-\n");
        }
        else if(department==2)
        {
            printf("\n\t\t   ##### Welcome to EEE department #####\n");
            printf("\nYour main course is EEE101(4 credits)\nAdd courses for this semester(Elective courses):-\n");
        }
        else if(department==3)
        {
            printf("\n\t\t   ##### Welcome to Civil Engineering department #####\n");
            printf("\nYour main course is CIVIL103(4 credits)\nAdd courses for this semester(Elective courses):-\n");
        }
        else if(department==4)
        {
            printf("\n\t\t   ##### Welcome to Pharmacy department #####\n");
            printf("\nYour main course is CHE109(4 credits)\nAdd courses for this semester(Elective courses):-\n");
        }

        else if(department==5)
        {
            printf("\n\t\t   ##### Welcome to GEB department #####\n");
            printf("\nYour main course is GEB103(4 credits)\nAdd courses for this semester(Elective courses):-\n");
        }

        else if(department==6)
        {
            printf("\n\t\t   ##### Welcome to BBA department #####\n");
            printf("\nYour main course is BUS101(4 credits)\nAdd courses for this semester(Elective courses):-\n");
        }

        else if(department==7)
        {
            printf("\n\t\t   ##### Welcome to LAW department #####\n");
            printf("\nYour main course is ENG102(4 credits)\nAdd courses for this semester(Elective courses):-\n");
        }

        else if(department==8)
        {

            printf("\n\t\t   ##### Welcome to ENGLISH department #####\n");
            printf("\nYour main course is ENG101(4 credits)\nAdd courses for this semester(Elective courses):-\n");
        }
    }
    printf("\n\tCourse-1:");
    scanf("%d",&course1);
    switch(course1)
    {
    case 1:"ENG101"
        ;
        break;
    case 2:"MATH101"
        ;
        break;
    case 3:"ECO101"
        ;
        break;
    case 4:"STAT101"
        ;
        break;
    case 5:"HIS101"
        ;
        break;
    case 6:"BUS101"
        ;
        break;
    }
    if(course1==1)
    {
        printf("\t1.ENG101(3 credits)");
    }
    else if (course1==2)
    {
        printf("\t1.MATH101(3 credits)");
    }
    else if (course1==3)
    {
        printf("\t1.ECO101(3 credits)");
    }
    else if (course1==4)
    {
        printf("\t.STAT101(3 credits)");
    }
    else if (course1==5)
    {
        printf("\t1.HIS101(3 credits)");
    }
    else if (course1==6)
    {
        printf("\t1.BUS101(3 credits)");
    }
    printf("\n\tCourse-2:");
    scanf("%d",&course2);
    switch(course2)
    {
    case 1:"ENG101"
        ;
        break;
    case 2:"MATH101"
        ;
        break;
    case 3:"ECO101"
        ;
        break;
    case 4:"STAT101"
        ;
        break;
    case 5:"HIS101"
        ;
        break;
    case 6:"BUS101"
        ;
        break;
    }
    if(course2==1)
    {
        printf("\t1.ENG101(3 credits)\n");
    }
    else if (course2==2)
    {
        printf("\t2.MATH101(3 credits)\n");
    }
    else if (course2==3)
    {
        printf("\t2.ECO101(3 credits)\n");
    }
    else if (course2==4)
    {
        printf("\t2.STAT101(3 credits)\n");
    }
    else if (course2==5)
    {
        printf("\t2.HIS101(3 credits)\n");
    }
    else if (course2==6)
    {
        printf("\t2.BUS101(3 credits)\n");
    }

    printf("\nAdmission fee : %d/=\n",adm_fee);
    printf("\nPer credit tuition fee :%d/=\n",tui_fee);
    printf("\nStudent activities fee : %d/=\n",stu_act_fee);
    cost = stu_act_fee + (tui_fee* 10);
    printf("\nSo, your total cost for 1st semester is :%g/=\n",cost);
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
        printf(" \nAfter 50*/* scolarship your total amount is %d tk.",(60000-(((22000+16500+16500+2500+2500)/100)*50)));
    }
    else if(Total<=9.99 && Total>=9.50)
    {
        printf("35*/* scolarship.");
        printf("\n After 35*/* scolarship your total amount is %d tk.",(60000-(((22000+16500+16500+2500+2500)/100)*35)));
    }
    else if(Total<=9.49 && Total>=9.00)
    {
        printf("25*/* scholarship.");
        printf(" \nAfter 25*/* scolarship your total amount is %d tk.",(60000-(((22000+16500+16500+2500+2500)/100)*25)));
    }
    else
    {
        printf("20*/* special waiver (for all student).\n\n");
        printf(" \nAfter 20*/* scolarship your total amount is %d tk.",(60000-(((22000+16500+16500+2500+2500)/100)*20)));
    }
    printf("\n\t###PLease complete your admission by the 21st May 2022###\n");
    printf("\n\t***For completing admission please visit our website(www.ewuadmission.edu.bd)***\n");
    printf("\n\t###For any query call(24/7):01924254544(Help desk)###\n");
    printf("\n\t\t\t*** ALL THE BEST FOR YOUR FUTURE ***\t\t\n");
}
