#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int d;
	
	printf("정수 하나를 입력하시오: ");
	scanf("%i", &d);
	
	if (d<0)
	printf("절댓값은 %i 입니다.",-d);
	
	else printf("절댓값은 %i 입니다.",d);
	
	return 0;
}