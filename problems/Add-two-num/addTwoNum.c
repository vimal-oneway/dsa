#include<stdio.h>
#include<math.h>
int getNum()
{
    int total=0, num=0 , i=1, temp=0;
    printf("\nEnter total count of number");
    scanf("%d",&total);
    printf("\nEnter number %d", total);
    for ( i; i < total; i++)
    {
        printf("\nEnter number");
        scanf("%d", &temp);
        num += temp * (pow(10, (total-i)) + 1e-9);
        printf("\n/t %d /t %d", temp, num);
    }
    return num;
}

void main()
{
    int num1 = getNum();
    int num2 = getNum();
    printf("\nThe sum of two number is %d", (num1 + num2));
}
