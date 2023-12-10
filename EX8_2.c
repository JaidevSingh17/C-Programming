#include <stdio.h>
void main()
{
    char a[100];
    printf("Enter the String: ");
    scanf("%[^\n]s",a);

    int i,len=0;
    for(i=0;;i++)
    {
        if(a[i]=='\0')
        break;
        else
        len++;
    }
    printf("Length of the String is: %d",len);
    char b[len];
    int j=0;
    for(i=len-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    printf("\nThe reversed string: %s ",b);
    
    int flag=0;
    for(i=0;i<len;i++)
    {
        int m=a[i];
        int n=b[i];
        if(m!=n)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("\nThe given String is Palindrome");
    else
    printf("\nThe given String is not Plaindrome");
}