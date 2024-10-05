#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>  // Required for rand() and srand()
#include <time.h>    // Required for time()

int main() {
    // Seed the random number generator with the current time
    srand(time(0)); 

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1; 

  //  printf("Random Number between 1 and 100: %d\n", randomNumber);
int a;
int count=0;
printf("Guess the number :\n");
scanf("%d",&a);
// for(a;a<=randomNumber;)
// {
//     printf("Higher number please!");
//     break;
do{
  
a<randomNumber?printf("Higher number please!\n"):printf("Lower number please!\n");
printf("Guess the number :\n");
scanf("%d",&a);
count++;
}
while(a!=randomNumber);

printf("You took %d number of turns to guess right!!",count);
    return 0;
}


