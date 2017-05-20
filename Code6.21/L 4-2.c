#include <stdio.h>
int main(void)
{
	int hand;

	do {
	printf("enter a hand[0--rock,1--scissors,2--paper]:");
	scanf("%d",&hand);
    } while(hand<0 || hand>2);

    printf("you choose:");
	switch(hand){
	    case 0 : puts("Rock.");        break;
	    case 1 : puts("Scissors.");    break;
	    case 2 : puts("Paper.");       break;
       }
  
    return 0;
    
}