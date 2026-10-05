#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int sum=0;
	int d;
	int b;
	
	printf("input a number: ");
	scanf("%i", &d);
	
	for(b=0;d>=b;b++)
	sum+=b;
	
	printf("The result is %i", sum);
	return 0;
}