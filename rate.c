#include<stdio.h>
int main ()
{
    printf("Welcome customer")
    int connection;
    printf("Enter the value \n Home=1 \n Shop=2 \n Finish=0");
    scanf("%d", &connection);
    while (True)
    {
     int bill;
     printf("Enter bill amount")
     scanf("%d", &bill);
     if (connection==1)
     printf("%d",bill*5");
    if (connecton==2)
    printf("%d bill*9");
    if (connection==3)
    break;
    }
    return 0;
}