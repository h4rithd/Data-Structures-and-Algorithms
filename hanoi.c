#include<stdio.h>
#include <stdlib.h>

/*------------------------------------------------
##                                               #
##           Coded by Harith Dilshan             #
##                #ShapManasick                  #
##                                               #
-------------------------------------------------*/

int hanoi(int n);

int main(int argc, char** argv)
{
   int n = atoi(argv[1]);
   int k = hanoi(n);

   if(argc >= 2)
   {
	printf("Hanoi (%d) is : %d\n",n,k);
   }
   else
   {
	printf("Hey! Give me any arguments :) \n");
   }
   return 0;
	
}

int hanoi(int n)
{
  if(n==1)
  {
    return 1;
  }
  else if(n>1)
  {
    return (2*(hanoi(n-1)) + 1);
  }
  else
  {
    return 0;
  }
}


