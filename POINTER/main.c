#include <stdio.h>


int main(void) 
{
 int score [7] = {5,2,8,0,1,9,4};
 int *pa, *pb, *pc, temp, i, n = 7, sum = 0, input[3], mul = 1;
 float average;

//__1st_quest_segment

 pa = &score[0]; 
 pb = &score[6];

 printf("\n<...1st task...>\nBefore swapping the array: ");
 for (i = 0; i < 7; i++)
  printf("%d ", score[i]);

 temp = *pa;
 *pa = *pb;
 *pb = temp;// operation of the swapping method

 printf("\nAfter  swapping the array: ");

 for(i = 0; i < 7; i++)
  printf("%d ", score[i]);
  printf("\n\n");

//__2nd_quest_segment

 printf("<...2d task...>");
 for (i = 1; i <= n ; i++)// for loop for printing addresses
  printf("\n The address of the %d element: %p ",i, &score[i]);

//__3rd_quest_segment

 printf("\n\n<...3d task...>");
 for (i = 0; i <= n; i++)// for loop for adding
  sum += score[i];

 average = ((float)sum/(float)n);

 printf("\nThe average of the array is: %f", average);

//__4rth_quest_segment
 printf("\n\n<...4th task...>");
 printf("\nPlease give me three different integers:\n ");

 for(i = 1; i <= 3; i++)
 {
   printf("\nYour %d integer is: ", i);
   scanf("%d",&input[i]);
   mul = mul * input[i];

   if (i == 3)
   {
     printf("\nThe result after multiplication is: ");
      for (int k = 0; k < 7; k++)
      { 
         *pb=mul;
         printf("%d",score[k]);
      }
   }
 }
return 0;
}// END of MAIN
