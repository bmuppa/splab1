/* prime or not*/

#include <stdio.h>

void main()
 {

  int given_number,i,count = 0;
  printf("Enter number: "); 
  /*it just prints the number that need to be entered*/
  scanf("%d", &given_number);

  /* Neither 1 nor 0 are prime
   we make count =1 for the numbers that are not prime.*/
  if (given_number == 0 || given_number == 1)
    count = 1;

  for (i = 2; i <= given_number / 2; i++) {

    /*here using this for loop, we increment the value of i, to check whether it is divisible with other numbers*/
    /*it saves time by dividing n with 2,and the number of iterations are also reduced, so that it need not check with all the numbers*/
    if (given_number % i == 0) {
      count = 1;
       /* if the given number is divisible by any number, then count becomes 1, which means it is not a prime number*/
      break;
    }
  }


  if (count == 0)
  {
    printf("%d is prime number", given_number);
  }
  else
  {
    printf("%d is not a prime number", given_number);
  }

}
