#include <stdio.h>
#include <time.h>  /*  pour les fonctions de TEMPS  */

#define DELAY 0.1

void pause(void)
{
	time_t then;
	time(&then);
	while(difftime(time(NULL),then) < DELAY); }

int main()
{
	int x;
	printf("\n Delai actionne . . .\n ");
	for(x=10;x>0;x--) {
		printf("\t %d\n",x);
		pause(); }

	printf("C est PARTI!");
	return(0);
}



