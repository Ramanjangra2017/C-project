// Guess the No. Game
#include <stdio.h>  // stdio.h include printf scanf functions
#include <stdlib.h> // stdlib.h (Standard library) inlcudes rand()
#include <time.h>  // time.h includes time function 

int main(){
     int number, guess, nguess=0;
     char name[50]; // c does not have string so we intialised char whose limit is upto 50 words
     srand(time(0)); // this generates every time random no if we dont initialise rand() then everytime you can see ssame no.
     number= rand()%100 +1;  // it generates random numbers b/w 1 to 100   
     // printf("The No. is %d", number); ----> we make it comment because why we want to show the no. 
     printf("Hey, Thanks for coming \n");
     printf("Enter Your Name and start guessing\n");
     scanf("%s", &name);
     printf("Welcome %s in Guess the No. Game\n",name);
     do{
        printf("Guess the number between 1 to 100 \n");
        scanf("%d",&guess);
        if(number<guess){
        printf("Guess the Lower Number Buddy! \n ");
        }
        else if (number>guess)
        {
           printf("Guess the Higher Number Buddy! \n");
        }
        else{
            printf("Congratulations! You Guessed the correct number in %d attempts \n", nguess);
        }
        nguess++;
    }
        while (guess!=number);     
     return 0;
}
