#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int x = 10;
	int y = --x;
	    printf("N�mero x %d \n", x);
     	printf("N�mero y %d \n", y);
}

