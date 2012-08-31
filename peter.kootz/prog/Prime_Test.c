/*
  Name: Prime Test
  Copyright: N/A
  Author: Peter Kootz
  Date: 04/06/11 14:07
  Description: test a given number for facters
*/




#include <stdio.h>

main()
{
      //Variables
      int i=2;        //LP 1
      int n;        //input
      int a;
      int j=1;

      //Get number
      printf("Enter test number (To quit enter '0'): ");
      scanf("%d", &n);

      //test if user wants to leave
      if (n == 0)
      {
         return 0;
      }

      printf("\nFacters of %d \n\n",n);

      //Test algerithm
      do {
          a=n%i;

          if (a==0)
          {
                  printf("Facter %d.\t%d\n",j,i);
                  j++;
          }

              i++;

      } while (i<n);

      printf("\n\n\n If no facters are shown it is prime.\n\n\n");
      main();
}
