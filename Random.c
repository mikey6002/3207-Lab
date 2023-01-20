#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char randchar(){
    char Alpha [] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
  int randomnum;
  randomnum = rand()%26;

    return Alpha[randomnum];
  
}



int main()
{
	int a ;

	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
	    putchar( randchar() );
	    putchar('\n');

	return 0;
}