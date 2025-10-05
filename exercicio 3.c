#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
       // const float PI = 3.14159; // constante definida com const
	   float raio, area;
	   
	   printf("Digite o raio do circulo: ");
	   scanf("%f", &raio);
	   
	   area = PI * pow(raio, 2);
	   
	   printf("Area do circulo: %.2f\n", area);
	   system("pause");
	   return 0;	
	
	
	
	
	
	
}
