#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a,b;
	char c;
	
	printf("Enter the calculation: ");
	scanf("%i %c %i", &a, &c, &b);
	
	switch(c){
		case '+':
			printf("%i", a+b);
			break;
			
		case '-':
			printf("%i", a-b);
			break;
			
		case '*':
			printf("%i", a*b);
			break;
			
		case '/':
			printf("%i", a/b);
			break;
		
	}
	 
	return 0;
}