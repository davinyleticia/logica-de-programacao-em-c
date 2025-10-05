#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int x = 10;
	int y = --x;
	    printf("Número x %d \n", x);
     	printf("Número y %d \n", y);
}

