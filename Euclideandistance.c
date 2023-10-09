#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;

    printf("Enter the Value of Coordinates of Point 1: ");
    scanf("%d %d",&x1,&y1);

    printf("\nEnter the Value of Coordinates of Point 2: ");
    scanf("%d %d",&x2,&y2);

    float Distance = sqrt(pow(x2-x1,2)+(pow(y2-y1,2)));

    printf("\nThe Euclidean Distance Between Point 1 and Point 2 in a Plane is: %1f", Distance);

    return 0;
}