#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int d;
	
	printf("정수 하나를 입력하시오: ");
	scanf("%i", &d);
	
	if (d>0)
	printf("양수입니다.");
	
	else if (d<0)
	printf("음수입니다.");
	
	else
	printf("0 입니다.");
	
	
	return 0;
}