#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int random,guess,no_of_attempts=0;
    srand(time(0));
    random=rand()%100+1;
   
    printf("WELCOME TO THE GUESSING GAME!!!\n\n");
    
    do{
        printf("Guess a number from 1 to 100:");
        scanf("%d",&guess);
        no_of_attempts++;
        if(guess>random){
            printf("guess a smaller number\n");
        }else if(guess<random){
            printf("guess a larger number\n");
        }else
          printf("CONGRATULATIONS!!! YOU HAVE GUESSED THE RIGHT NUMBER\n");
    }while(guess!=random);
          printf("No of attempts taken:%d\n",no_of_attempts);
          printf("Project by SamrudhShetty");
}