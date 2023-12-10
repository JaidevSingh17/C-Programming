// //C program to read and print elements in two dimensional array
 #include <stdio.h>
 int main() 
{
     int ROWS,COLS;
     printf("Enter the limits: ");
     scanf("%d %d",&ROWS,&COLS);
     int array[ROWS][COLS];
   int i, j;

     printf("Enter elements for the array (%d x %d):\n", ROWS, COLS);
     for (i = 0; i < ROWS; ++i) {
         for (j = 0; j < COLS; ++j) {
             printf("Enter element at position (%d, %d): ", i + 1, j + 1);
             scanf("%d", &array[i][j]);
         }
     }
     printf("\nElements in the array:\n");
     for (i = 0; i < ROWS; ++i) {
         for (j = 0; j < COLS; ++j) {
             printf("%d\t", array[i][j]);
         }
         printf("\n");
     }

   return 0;
}
