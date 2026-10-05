#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int answer=59;
	int trial=1,a;
	
	do
	{
		printf("Guess the number: ");
		scanf("%i", &a);
		
		if (a<answer)
			printf("Low!\n");
		
		else if (a>answer)
		{
		
			printf("High!\n");		
		}
		else 
			break;
			
	trial++;

	} while (a !=answer);
	
	printf("Congratulation! Trial: %i", trial);
	
	
	return 0;
}