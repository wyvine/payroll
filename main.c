/*
PAYROLL SYSTEM
BY MERCY NJOKI
08/03/2022
MIT LICENCE
C89 COMPILER
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[100],kra[20];
    int hours ,overtimepay,gross ,tax,net;
    printf ("mercy\'s factory payrol\n");
    //capture input
    printf("enter name:");
    gets(name);
    printf("Enter KRA PIN:");
    gets(kra);
    printf("hours worked:");
    scanf("%d",&hours);
    if (hours>40){
        overtimepay = (hours -40)*1.5*1000;
        gross=overtimepay+(40*1000);
        net=gross-tax;
    }
    else{
        overtimepay=0;
        gross=hours*1000;
        tax =0.3*gross;
        net=gross-tax;
    }
    //output
    printf("employees name:%s\n",name);
    printf("gross income:%d\n",gross);
    printf("tax paid:%d\n",tax);
    printf("net income:%d\n",net);
    return 0;
}
