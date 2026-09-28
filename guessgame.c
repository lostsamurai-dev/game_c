#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL)) ;
    int secretNum = rand()%100 + 1 ;
    
    int guess ;
    printf(": GUESS THE NUMBER GAME\n :") ;
    do{
        printf("ENTER GUESS NUMBER : ") ;
        scanf("%d" , &guess ) ;

        if (guess < secretNum){
            printf("too low !!\n") ;

        }else if (guess > secretNum){
            printf("too high !!\n");
        }else{
            printf("Congratulation !! you guess right .\n") ;
        }
    }while(guess != secretNum) ;
    

    return 0;
}
