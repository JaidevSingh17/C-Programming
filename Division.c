#include <stdio.h>
int main()
{
    int num1 , num2;

    printf("Enter the Value of First Number: ");
    scanf("%d",&num1);

    printf("Enter the value of Second Number: ");
    scanf("%d",&num2);

    int Division = num1 / num2;
    printf("%d / %d = %d",num1, num2, Division);

    return 0;
    
}