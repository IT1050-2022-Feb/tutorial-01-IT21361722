/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   int mathsmark,sciencemark;
   float average;
   
   printf("Enter your maths mark: \n");
   scanf("%d",&mathsmark);
   
   printf("Enter your science mark: \n");
   scanf("%d",&sciencemark);
   
   total=mathsmark + sciencemark;
   average=total/2;
   
   printf("total is %d\n",total");
   printf("average is %.2f",average");
          
  
  return 0;
}

