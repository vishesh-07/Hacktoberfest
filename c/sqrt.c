#include <stdio.h>

int main(void) {
	int number,root;
	
	printf("Enter number to find Square Root = ");
	scanf("%d",&number);
	for(int i=1;i<number;i++) {
	    if(number/i == i && number%i == 0) {
	        root = i;
	        break;
	    }
	}
	printf("SquareRoot = %d",root);
	return 0;
}

