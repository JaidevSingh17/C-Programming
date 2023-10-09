#include<stdio.h>
int main()
{
    float r;
    float s;
    float l,b;

    //Area and Perimeter Of Circle
    printf("Find the Area and Perimeter of Circle: ");
    printf("\nRadius of the circle: ");
    scanf("%f",&r);

    printf("Area of the Circle is: %f",3.14*r*r);
    printf("\nPerimeter of the Circle is: %f\n",2*3.14*r);

   
    //Area and Perimeter of Square
    printf("\nFind the Area and Perimeter of Square: ");
    printf("\nSide of the Square is: ");
    scanf("%f",&s);

    printf("Area of the Square is: %f",s*s);
    printf("\nPerimeter of the Square is : %f\n",4*s);

   
    //Area and Perimeter of Rectangle
    printf("\nFind the Area and Perimeter of Rectangle: ");
    printf("\nLength of the Rectangle is: ");
    scanf("%f",&l);
    printf("Breadth of the Rectangle is: ");
    scanf("%f",&b);

    printf("Area of the Rectangle is: %f",l*b);
    printf("\nPerimeter of the Rectangle is : %f",2*(l+b));

    return 0;
    
}
