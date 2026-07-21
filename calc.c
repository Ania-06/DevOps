#include<stdio.h>

int main()
{
    int a,b,ch;

    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);

    printf("1.Add\n2.Subtract\n");

    scanf("%d",&ch);

    if(ch==1)
        printf("%d\n",a+b);

    else if(ch==2)
        printf("%d\n",a-b);

    else
        printf("Invalid");

    return 0;
}
